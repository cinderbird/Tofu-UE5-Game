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

/**
 * 데이터 애셋에 적힌 Reaction 의 ListenEventTag 들을 모두 메시지 버스에 등록한다.
 *
 * 노드 간 직접 참조를 피하는 이유:
 *  - A → B 사슬을 데이터에서만 표현하면 새 노드 추가가 기존 노드에 영향을 주지 않는다.
 *  - 어떤 노드가 어떤 이벤트를 듣고 어떤 이벤트를 발사하는지가 한 자리(DataAsset)에 모인다.
 *  - 발신자와 수신자가 시간적으로도 디커플 — 발신 시점에 수신 가능한 모든 노드가
 *    자동으로 깨어나며, 누가 듣고 있는지는 발신자가 알 필요가 없다.
 *
 * PartialMatch 사용 이유:
 *  "Event.Phone" 을 등록하면 "Event.Phone.Used", "Event.Phone.Charged" 같은 자식 이벤트도
 *  같은 핸들러로 잡힌다. 디자이너가 부모 태그 하나로 카테고리 전체를 구독 가능.
 */
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
            // 자식 태그도 함께 잡기 위해 PartialMatch.
            ListenerParams.MatchType = EGameplayMessageMatch::PartialMatch;
            ListenerParams.SetMessageReceivedCallback(this, &UKausNodeComponent::HandleNodeReactionEvent);

            FGameplayMessageListenerHandle Handle = MessageSubsystem.RegisterListener(Reaction.ListenEventTag, ListenerParams);
            // EndPlay 에서 일괄 해제하기 위해 핸들 보관.
            ListenerHandles.Add(Handle);
        }
    }
}

/**
 * ECA(Event-Condition-Action) 의 실제 실행 진입점.
 *
 * 메시지 버스에서 이벤트가 도착하면 다음 순서로 처리한다:
 *  1) Event       — 수신 이벤트 태그가 Reaction.ListenEventTag 와 매칭되는지 검사
 *  2) Condition   — Reaction 의 모든 조건이 통과하는지 평가 (AND, short-circuit)
 *  3) Action      — 조건 통과 시 Actions 배열을 등록 순으로 실행
 *
 * Reaction 1개가 여러 Action 을 가질 수 있고, 한 노드가 여러 Reaction 으로 같은 이벤트에
 * 반응할 수도 있다. PartialMatch 로 등록된 리스너이므로 자식 태그 이벤트가 와도 잡힌다.
 */
void UKausNodeComponent::HandleNodeReactionEvent(FGameplayTag EventTag, const FKausEventPayload& Payload)
{
    if (!NodeDataAsset) return;

    // 수신된 태그와 일치하는 Reaction 규칙 탐색
    for (const FKausNodeReaction& Reaction : NodeDataAsset->Reactions)
    {
        // 발신 이벤트가 Reaction.ListenEventTag 와 같거나 그 자식 태그인지 검사.
        if (EventTag.MatchesTag(Reaction.ListenEventTag))
        {
            // 모든 조건(Condition)이 만족되는지 검사
            if (EvaluateConditions(Reaction.Conditions, Payload.Instigator))
            {
                // 조건을 통과하면 등록된 모든 액션(Action)을 순차적으로 실행 (다형성 실행)
                // — ChangeState, BroadcastEvent, ApplyGameplayEffect 등 폴리모픽 호출.
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

/**
 * 상태 전환을 수행한다.
 *
 * 한 번의 호출로 Visual / Collision / Indicator 를 일괄 처리하는 이유:
 *  - 상태는 "보이느냐", "충돌하느냐", "어떤 인디게이터를 띄우느냐"의 묶음이다.
 *    이 세 가지가 따로 갱신되면 한 프레임 동안 모순된 상태(예: 보이지 않는데 충돌함)가
 *    노출될 수 있다. 한 호출에 묶어 atomic 하게 갱신.
 *  - 호출자가 "상태가 바뀌었다" 한 가지만 신경 쓰면 되도록 응집도를 높임.
 *
 * 동시에 Outline 은 항상 해제하는데, 새 State 가 외곽선을 허용하는지 알 수 없기 때문이다
 * (허용 안 하는 상태에서 외곽선만 남는 시각적 잔여를 방지).
 */
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
            // 가시성과 콜리전을 동시에 토글 — "안 보이는 상태는 클릭도 안 되어야" 라는 정책.
            GetOwner()->SetActorHiddenInGame(!State.bIsVisible);
            GetOwner()->SetActorEnableCollision(State.bIsVisible);

            if (IndicatorComponent)
            {
                // 이전 위젯이 표시 중이라면 일단 끄고, 새 클래스를 세팅한다.
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

/**
 * 옵션 수집 단계 — 외부 Interaction 스캐너가 "이 노드가 지금 제공할 수 있는 메뉴는?" 을 물을 때.
 *
 * RequiredStateTag 가 비어 있거나 현재 상태와 일치하는 Interaction 만 노출한다.
 * 동시에 같은 순서로 AvailableInteractionsCache 에 원본을 보관 — 다음 단계에서
 * 인덱스로 빠르게 찾기 위함. (FInteractionOption 자체는 PayloadData 를 들고 다니지 않으므로
 * 옵션과 원본을 인덱스 기반으로 짝지어 둘 필요가 있다.)
 */
void UKausNodeComponent::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder)
{
    if (!NodeDataAsset) return;

    // 매 호출마다 캐시를 비우고 새로 채운다 — 상태 전환 직후의 호출에도 정확성을 유지하기 위함.
    AvailableInteractionsCache.Empty();

    for (const FKausNodeInteraction& Interaction : NodeDataAsset->Interactions)
    {
        // RequiredStateTag 가 비어 있으면 "모든 상태에서 노출", 값이 있으면 현재 상태와 일치할 때만.
        if (!Interaction.RequiredStateTag.IsValid() || Interaction.RequiredStateTag == CurrentStateTag)
        {
            FInteractionOption Option;
            Option.InteractionWidgetClass = Interaction.InteractionPromptWidgetClass;
            Option.InteractionAbilityToGrant = Interaction.GrantedAbility;
            Option.InteractableTarget = this;
            Option.TargetAbilitySystem = CachedASC.Get();

            OptionBuilder.AddInteractionOption(Option);

            // CustomizeInteractionEventData 가 인덱스로 PayloadData 를 다시 찾기 위해 원본을 보관.
            AvailableInteractionsCache.Add(Interaction);
        }
    }
}

/**
 * 페이로드 주입 단계 — 플레이어가 메뉴에서 항목을 선택한 직후 한 항목분만 페이로드를 끼워 넣는다.
 *
 * 옵션 수집과 페이로드 주입을 분리한 이유:
 *  - 메뉴를 띄우는 시점에는 어떤 옵션이 선택될지 모른다. PayloadData(예: DialogueGraph) 를
 *    옵션 N 개 전부에 미리 인스턴스화/실어 보내면 낭비.
 *  - 선택 직전 1개분의 PayloadData 만 EventData.OptionalObject 에 끼워 넣어, 어빌리티가
 *    필요한 데이터만 꺼내 쓰도록 한다.
 *
 * 인덱스는 외부에서 EventMagnitude 에 담아 보낸 값으로 결정된다.
 */
void UKausNodeComponent::CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData)
{
    // EventMagnitude(float) 를 인덱스로 해석. 외부 호출 측이 정수를 그대로 실어 보낸다고 가정.
    int32 LocalIndex = FMath::RoundToInt(InOutEventData.EventMagnitude);

    if (AvailableInteractionsCache.IsValidIndex(LocalIndex))
    {
        const FKausNodeInteraction& SelectedInteraction = AvailableInteractionsCache[LocalIndex];

        if (SelectedInteraction.PayloadData)
        {
            // 발동되는 어빌리티가 GetEventData()->OptionalObject 로 페이로드를 꺼내 쓴다.
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
