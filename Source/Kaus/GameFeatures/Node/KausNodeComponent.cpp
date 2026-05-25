#include "KausNodeComponent.h"
#include "UI/IndicatorSystem/KausIndicatorComponent.h"    
#include "AbilitySystemGlobals.h"
#include "Components/PrimitiveComponent.h"


//Node가 자기 자신을 Interaction
#include "Interaction/InteractionQuery.h"
#include "Interaction/InteractionOption.h"
#include "Kismet/GameplayStatics.h"
#include "Tags/KausGameplayTags.h"

bool UKausNodeComponent::TriggerInteractionByIndex(int32 InteractionIndex,
                                                  AActor* InstigatorOverride)
{
    if (!NodeDataAsset)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[%s] TriggerInteractionByIndex: NodeDataAsset이 없음."),
            *GetOwner()->GetName());
        return false;
    }

    AActor* Instigator = InstigatorOverride
        ? InstigatorOverride
        : UGameplayStatics::GetPlayerPawn(this, 0);

    FInteractionQuery DummyQuery;
    DummyQuery.RequestingAvatar = Instigator;

    TArray<FInteractionOption> Options;
    FInteractionOptionBuilder Builder(this, Options);
    GatherInteractionOptions(DummyQuery, Builder);

    if (!Options.IsValidIndex(InteractionIndex))
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[%s] TriggerInteractionByIndex: 잘못된 인덱스 %d (유효=%d, state=%s)"),
            *GetOwner()->GetName(), InteractionIndex, Options.Num(),
            *CurrentStateTag.ToString());
        return false;
    }

    UAbilitySystemComponent* TargetASC = CachedASC.Get();
    AActor* AbilityOwner = GetOwner();

    if (!TargetASC && Instigator)
    {
        TargetASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Instigator);
        AbilityOwner = Instigator;
    }

    if (!TargetASC)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[%s] TriggerInteractionByIndex: Self/Instigator 모두 ASC 없음. 발동 불가."),
            *GetOwner()->GetName());
        return false;
    }

    FGameplayEventData Payload;
    Payload.EventTag       = KausGameplayTags::TAG_Ability_Interaction_Activate;
    Payload.Instigator     = Instigator;
    Payload.Target         = GetOwner();
    Payload.EventMagnitude = static_cast<float>(InteractionIndex);

    // PayloadData (UKausPayload_Dialogue 등) 주입
    CustomizeInteractionEventData(KausGameplayTags::TAG_Ability_Interaction_Activate, Payload);

    TargetASC->HandleGameplayEvent(KausGameplayTags::TAG_Ability_Interaction_Activate, &Payload);

    UE_LOG(LogTemp, Log,
        TEXT("[%s] TriggerInteractionByIndex: index=%d, instigator=%s, asc_owner=%s"),
        *GetOwner()->GetName(), InteractionIndex,
        Instigator ? *Instigator->GetName() : TEXT("None"),
        *AbilityOwner->GetName());

    return true;
}

///////////////////////////////////////////////////////////////////////////////////////////////////////////

UKausNodeComponent::UKausNodeComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UKausNodeComponent::BeginPlay()
{
    Super::BeginPlay();


    //NodeComponent에서 Indicator를 사용하고자 하면 반드시 Owner에게 IndicatorComponent가 존재해야 함.
    IndicatorComponent = GetOwner()->FindComponentByClass<UKausIndicatorComponent>();


    CachedASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(GetOwner());

    if (NodeDataAsset)
    {
        SetupReactionListeners();
        ChangeNodeState(NodeDataAsset->InitialStateTag);
    }
}

void UKausNodeComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    for (FGameplayMessageListenerHandle& Handle : ListenerHandles)
    {
        Handle.Unregister();
    }
    ListenerHandles.Empty();
    
    Super::EndPlay(EndPlayReason);
}

void UKausNodeComponent::SetupReactionListeners()
{
    if (!NodeDataAsset || !UGameplayMessageSubsystem::HasInstance(this)) return;

    UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);

    // DataAsset에 정의된 모든 Reaction(ECA) 이벤트의 리스너를 미리 등록
    for (const FKausNodeReaction& Reaction : NodeDataAsset->Reactions)
    {
        if (Reaction.ListenEventTag.IsValid())
        {
            FGameplayMessageListenerParams<FKausEventPayload> ListenerParams;
            ListenerParams.MatchType = EGameplayMessageMatch::PartialMatch;
            ListenerParams.SetMessageReceivedCallback(this, &UKausNodeComponent::HandleNodeReactionEvent);

            FGameplayMessageListenerHandle Handle = MessageSubsystem.RegisterListener(Reaction.ListenEventTag, ListenerParams);
            ListenerHandles.Add(Handle);
        }
    }
}

void UKausNodeComponent::HandleNodeReactionEvent(FGameplayTag EventTag, const FKausEventPayload& Payload)
{
    if (!NodeDataAsset) return;

    // 수신된 태그와 일치하는 Reaction 규칙 탐색
    for (const FKausNodeReaction& Reaction : NodeDataAsset->Reactions)
    {
        if (EventTag.MatchesTag(Reaction.ListenEventTag))
        {
            // 모든 조건(Condition)이 만족되는지 검사
            if (EvaluateConditions(Reaction.Conditions, Payload.Instigator))
            {
                // 조건을 통과하면 등록된 모든 액션(Action)을 순차적으로 실행 (다형성 실행)
                for (UKausNodeAction* Action : Reaction.Actions)
                {
                    if (Action)
                    {
                        Action->ExecuteAction(this, Payload);
                    }
                }
            }
        }
    }
}

bool UKausNodeComponent::EvaluateConditions(const TArray<TObjectPtr<UKausNodeTransitionCondition>>& Conditions, AActor* InstigatorActor)
{
    for (UKausNodeTransitionCondition* Condition : Conditions)
    {
        if (Condition && !Condition->CheckCondition(GetOwner(), InstigatorActor))
        {
            return false; 
        }
    }
    return true; 
}

void UKausNodeComponent::ChangeNodeState(FGameplayTag NewStateTag)
{
    if (!NodeDataAsset) return;

    // State 전환 시 이전 Outline 상태는 보존하지 않는다(새 State가 bAllowOutline인지 모르므로 안전하게 끔)
    if (bOutlineActive)
    {
        SetOutlineEnabled(false);
    }

    CurrentStateTag = NewStateTag;

    // 새 상태에 맞는 Visual/Collision 세팅 탐색 및 적용
    for (const FKausNodeState& State : NodeDataAsset->States)
    {
        if (State.StateTag == CurrentStateTag)
        {
            GetOwner()->SetActorHiddenInGame(!State.bIsVisible);
            GetOwner()->SetActorEnableCollision(State.bIsVisible);

            if (IndicatorComponent)
            {
                IndicatorComponent->DeactivateIndicator(); 
                if (!State.IndicatorWidgetClass.IsNull())
                {
                    IndicatorComponent->SetIndicatorWidgetClass(State.IndicatorWidgetClass);

                    //인디게이터 표시 정책 변경 - 기본 상태는 비활성화, 유저의 Action(ex 마우스 호버) 이벤트 발생 시 활성화
                    //이벤트 상관 업이 Active 해야 하는 경우 해당 책임의 매니저가 관리.
                    //IndicatorComponent->ActivateIndicator();
                }
            }
            break; // 찾았으므로 종료
        }
    }
    
    UE_LOG(LogTemp, Log, TEXT("[%s] 노드 상태 변경 완료: %s"), *GetOwner()->GetName(), *CurrentStateTag.ToString());
}

void UKausNodeComponent::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder)
{
    if (!NodeDataAsset) return;

    AvailableInteractionsCache.Empty(); 

    for (const FKausNodeInteraction& Interaction : NodeDataAsset->Interactions)
    {
        if (!Interaction.RequiredStateTag.IsValid() || Interaction.RequiredStateTag == CurrentStateTag)
        {
            FInteractionOption Option;
            Option.InteractionWidgetClass = Interaction.InteractionPromptWidgetClass; 
            Option.InteractionAbilityToGrant = Interaction.GrantedAbility;
            Option.InteractableTarget = this; 
            Option.TargetAbilitySystem = CachedASC.Get();

            OptionBuilder.AddInteractionOption(Option);
            
            AvailableInteractionsCache.Add(Interaction); 
        }
    }
}

void UKausNodeComponent::CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData)
{
    int32 LocalIndex = FMath::RoundToInt(InOutEventData.EventMagnitude);

    if (AvailableInteractionsCache.IsValidIndex(LocalIndex))
    {
        const FKausNodeInteraction& SelectedInteraction = AvailableInteractionsCache[LocalIndex];
        
        if (SelectedInteraction.PayloadData)
        {
            InOutEventData.OptionalObject = SelectedInteraction.PayloadData;
            UE_LOG(LogTemp, Log, TEXT("[%s] 상호작용 페이로드 주입 완료: %s"), 
                *GetOwner()->GetName(), *SelectedInteraction.InteractionName.ToString());
        }
    }
}

void UKausNodeComponent::ActivateIndicatorForCurrentState()
{
    if (!IndicatorComponent || !NodeDataAsset) return;

    // Outline이 켜져 있으면 Outline Indicator가 우선이므로 Hover 진입은 무시
    if (bOutlineActive) return;

    // 현재 State에 IndicatorWidgetClass가 정의되어 있을 때만 활성화
    for (const FKausNodeState& State : NodeDataAsset->States)
    {
        if (State.StateTag == CurrentStateTag)
        {
            if (!State.IndicatorWidgetClass.IsNull())
            {
                // ChangeNodeState에서 이미 SetIndicatorWidgetClass를 호출했으므로 여기서 재설정 불필요
                IndicatorComponent->ActivateIndicator();
            }
            return;
        }
    }
}

void UKausNodeComponent::DeactivateIndicatorForCurrentState()
{
    // Outline이 켜져 있으면 Outline Indicator를 유지해야 하므로 호버 이탈은 무시
    if (bOutlineActive) return;

    if (IndicatorComponent)
    {
        IndicatorComponent->DeactivateIndicator();
    }
}

void UKausNodeComponent::SetOutlineEnabled(bool bEnable)
{
    AActor* Owner = GetOwner();
    if (!Owner) return;

    // 활성화 요청이지만 현재 State가 허용하지 않으면 강제로 false 처리
    int32 StencilValue = 0;
    TSoftClassPtr<UUserWidget> OutlineIndicatorClass;
    TSoftClassPtr<UUserWidget> HoverIndicatorClass;
    if (bEnable)
    {
        if (!NodeDataAsset)
        {
            bEnable = false;
        }
        else
        {
            bool bFoundAllowedState = false;
            for (const FKausNodeState& State : NodeDataAsset->States)
            {
                if (State.StateTag == CurrentStateTag)
                {
                    if (State.bAllowOutline)
                    {
                        bFoundAllowedState = true;
                        StencilValue = State.OutlineStencilValue;
                        OutlineIndicatorClass = State.OutlineIndicatorWidgetClass;
                        HoverIndicatorClass = State.IndicatorWidgetClass;
                    }
                    break;
                }
            }
            if (!bFoundAllowedState)
            {
                bEnable = false;
            }
        }
    }
    else
    {
        // 비활성화 시 Hover 복구용으로 현재 State의 Hover 위젯 클래스를 가져온다
        if (NodeDataAsset)
        {
            for (const FKausNodeState& State : NodeDataAsset->States)
            {
                if (State.StateTag == CurrentStateTag)
                {
                    HoverIndicatorClass = State.IndicatorWidgetClass;
                    break;
                }
            }
        }
    }

    // Owner의 모든 PrimitiveComponent에 적용
    TArray<UPrimitiveComponent*> Primitives;
    Owner->GetComponents<UPrimitiveComponent>(Primitives);

    for (UPrimitiveComponent* Prim : Primitives)
    {
        if (!Prim) continue;
        Prim->SetRenderCustomDepth(bEnable);
        if (bEnable)
        {
            Prim->SetCustomDepthStencilValue(StencilValue);
        }
    }

    // Indicator 위젯 전환: Outline ON이면 Outline 위젯으로, OFF면 Hover 위젯으로 복원(IndicatorWidgetClass는 다음 Activate에서만 반영되므로 항상 Deactivate→Set→Activate 순서로 처리)
    bOutlineActive = bEnable;

    if (!IndicatorComponent) return;

    IndicatorComponent->DeactivateIndicator();

    if (bEnable)
    {
        if (!OutlineIndicatorClass.IsNull())
        {
            IndicatorComponent->SetIndicatorWidgetClass(OutlineIndicatorClass);
            IndicatorComponent->ActivateIndicator();
        }
        else
        {
            // Outline은 켜졌지만 위젯이 지정되지 않은 경우: 메시만 외곽선 표시, Indicator는 없음
            // 다음 Hover 진입에 대비해 Hover 위젯 클래스로 되돌려 둔다(Activate는 안 함)
            if (!HoverIndicatorClass.IsNull())
            {
                IndicatorComponent->SetIndicatorWidgetClass(HoverIndicatorClass);
            }
        }
    }
    else
    {
        // Outline OFF: Hover 위젯 클래스로 되돌려 둔다. Activate 여부는 외부 Hover 이벤트가 결정.
        if (!HoverIndicatorClass.IsNull())
        {
            IndicatorComponent->SetIndicatorWidgetClass(HoverIndicatorClass);
        }
    }
}
