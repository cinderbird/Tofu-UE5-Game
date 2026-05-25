#include "KausNodeAction.h"
#include "KausNodeComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "AbilitySystemGlobals.h"
#include "GameplayEffect.h"
#include "GameplayEffectTypes.h"
#include "Kismet/GameplayStatics.h"
#include "System/KausChoiceHistorySubsystem.h"
#include "Logs/KausLogChannels.h"


AActor* UKausNodeAction::ResolveTargetActor(EKausEffectTarget TargetMode, UKausNodeComponent* NodeComponent, const FKausEventPayload& Payload)
{
    switch (TargetMode)
    {
    case EKausEffectTarget::Player:
        if (NodeComponent && NodeComponent->GetWorld())
        {
            return UGameplayStatics::GetPlayerPawn(NodeComponent->GetWorld(), 0);
        }
        return nullptr;

    case EKausEffectTarget::Instigator:
        return Payload.Instigator;

    case EKausEffectTarget::Self:
        return NodeComponent ? NodeComponent->GetOwner() : nullptr;

    case EKausEffectTarget::Target:
        return Payload.Target;

    default:
        return nullptr;
    }
}

void UKausAction_ChangeState::ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload)
{
    if (TargetComponent)
    {
        // 대상 노드의 상태를 새 상태로 변경합니다.
        TargetComponent->ChangeNodeState(NewStateTag);
    }
}

void UKausAction_BroadcastEvent::ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload)
{
    if (TargetComponent && TargetComponent->GetOwner())
    {
        if (UGameplayMessageSubsystem::HasInstance(TargetComponent))
        {
            FKausEventPayload ForwardPayload = Payload; // 기존에 전달받은 데이터(수치 등) 유지
            ForwardPayload.Instigator = TargetComponent->GetOwner(); // 발송자를 이 노드 자신으로 덮어씀

            // 새로운 이벤트를 월드에 방송(Broadcast)합니다.
            UGameplayMessageSubsystem::Get(TargetComponent).BroadcastMessage(EventToBroadcast, ForwardPayload);
        }
    }
}

// ============================================================================
// UKausAction_ApplyGameplayEffect
// ============================================================================

void UKausAction_ApplyGameplayEffect::ExecuteAction(UKausNodeComponent* TargetComponent,
                                                    const FKausEventPayload& Payload)
{
    if (!EffectToApply)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyGameplayEffect] EffectToApply not set"));
        return;
    }

    AActor* TargetActor = ResolveTargetActor(TargetMode, TargetComponent, Payload);
    if (!TargetActor)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyGameplayEffect] Target resolution failed (Mode=%d)"), (int32)TargetMode);
        return;
    }

    UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
    if (!ASC)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyGameplayEffect] No ASC on target %s"), *TargetActor->GetName());
        return;
    }

    const float FinalLevel = bUsePayloadValueAsLevel ? Payload.Value : Level;

    FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
    ContextHandle.AddSourceObject(TargetComponent ? TargetComponent->GetOwner() : nullptr);

    FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(EffectToApply, FinalLevel, ContextHandle);
    if (SpecHandle.IsValid())
    {
        ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());
        UE_LOG(LogKaus, Verbose, TEXT("[ApplyGameplayEffect] Applied %s (Level=%.2f) to %s"),
            *GetNameSafe(EffectToApply), FinalLevel, *TargetActor->GetName());
    }
}

// ============================================================================
// UKausAction_ApplyGameplayEffectByTag
// ============================================================================

void UKausAction_ApplyGameplayEffectByTag::ExecuteAction(UKausNodeComponent* TargetComponent,
                                                         const FKausEventPayload& Payload)
{
    if (TagToEffectMap.Num() == 0)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyGameplayEffectByTag] TagToEffectMap is empty"));
        return;
    }

    if (Payload.Values.Num() == 0)
    {
        UE_LOG(LogKaus, Verbose, TEXT("[ApplyGameplayEffectByTag] Payload.Values is empty, nothing to apply"));
        return;
    }

    AActor* TargetActor = ResolveTargetActor(TargetMode, TargetComponent, Payload);
    if (!TargetActor)
    {
        return;
    }

    UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(TargetActor);
    if (!ASC)
    {
        return;
    }

    FGameplayEffectContextHandle ContextHandle = ASC->MakeEffectContext();
    ContextHandle.AddSourceObject(TargetComponent ? TargetComponent->GetOwner() : nullptr);

    for (const TPair<FGameplayTag, float>& ValueEntry : Payload.Values)
    {
        const TSubclassOf<UGameplayEffect>* FoundEffectClass = TagToEffectMap.Find(ValueEntry.Key);
        if (!FoundEffectClass || !*FoundEffectClass)
        {
            continue;
        }

        FGameplayEffectSpecHandle SpecHandle = ASC->MakeOutgoingSpec(*FoundEffectClass, 1.0f, ContextHandle);
        if (SpecHandle.IsValid())
        {
            // SetByCaller로 magnitude 전달 — GE는 반드시 SetByCaller.DataTag = MagnitudeTag 를 Modifier에 설정해야 함
            if (MagnitudeTag.IsValid())
            {
                SpecHandle.Data->SetSetByCallerMagnitude(MagnitudeTag, ValueEntry.Value);
            }

            ASC->ApplyGameplayEffectSpecToSelf(*SpecHandle.Data.Get());

            UE_LOG(LogKaus, Verbose, TEXT("[ApplyGameplayEffectByTag] %s → %s (Mag=%.2f) on %s"),
                *ValueEntry.Key.ToString(),
                *GetNameSafe(*FoundEffectClass),
                ValueEntry.Value,
                *TargetActor->GetName());
        }
    }
}

// ============================================================================
// UKausAction_RecordChoice
// ============================================================================

void UKausAction_RecordChoice::ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload)
{
    if (!TargetComponent || !TargetComponent->GetWorld())
    {
        return;
    }

    UGameInstance* GI = TargetComponent->GetWorld()->GetGameInstance();
    if (!GI)
    {
        return;
    }

    UKausChoiceHistorySubsystem* ChoiceHistory = GI->GetSubsystem<UKausChoiceHistorySubsystem>();
    if (!ChoiceHistory)
    {
        UE_LOG(LogKaus, Warning, TEXT("[RecordChoice] ChoiceHistorySubsystem not found"));
        return;
    }

    const int32 FinalIncrement = bUsePayloadValueAsIncrement
        ? FMath::RoundToInt(Payload.Value)
        : Increment;

    // 단일 ChoiceTag 모드
    if (ChoiceTag.IsValid())
    {
        ChoiceHistory->RecordChoice(ChoiceTag, FinalIncrement);
        return;
    }

    // Payload.Tags 전체 기록 모드 (ChoiceTag 미설정 시)
    static const FGameplayTag ChoiceRoot = FGameplayTag::RequestGameplayTag(FName("Kaus.Choice"), false);
    if (ChoiceRoot.IsValid())
    {
        FGameplayTagContainer MatchingTags = Payload.Tags.Filter(FGameplayTagContainer(ChoiceRoot));
        for (const FGameplayTag& Tag : MatchingTags)
        {
            ChoiceHistory->RecordChoice(Tag, FinalIncrement);
        }
    }
}

// ============================================================================
// UKausAction_ApplyStatDeltas
// ============================================================================

const TMap<FGameplayTag, FGameplayAttribute>& UKausAction_ApplyStatDeltas::GetStatTagToAttributeMap()
{
    static TMap<FGameplayTag, FGameplayAttribute> Map;
    static bool bInitialized = false;

    if (!bInitialized)
    {
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Vitality")),       UKausUnitAttributeSet::GetVitalityAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.ReactionSpeed")),  UKausUnitAttributeSet::GetReactionSpeedAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Logic")),          UKausUnitAttributeSet::GetLogicAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.SelfEsteem")),     UKausUnitAttributeSet::GetSelfEsteemAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Motivation")),     UKausUnitAttributeSet::GetMotivationAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Depression")),     UKausUnitAttributeSet::GetDepressionAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Anxiety")),        UKausUnitAttributeSet::GetAnxietyAttribute());
        Map.Add(FGameplayTag::RequestGameplayTag(FName("Kaus.Stat.Anger")),          UKausUnitAttributeSet::GetAngerAttribute());
        bInitialized = true;
    }

    return Map;
}

void UKausAction_ApplyStatDeltas::ExecuteAction(UKausNodeComponent* TargetComponent, const FKausEventPayload& Payload)
{
    if (Payload.Values.Num() == 0)
    {
        UE_LOG(LogKaus, Verbose, TEXT("[ApplyStatDeltas] Payload.Values is empty"));
        return;
    }

    // 대상: 항상 로컬 플레이어 Pawn
    UWorld* World = TargetComponent ? TargetComponent->GetWorld() : nullptr;
    if (!World)
    {
        return;
    }

    APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0);
    if (!PlayerPawn)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyStatDeltas] No Player Pawn"));
        return;
    }

    UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(PlayerPawn);
    if (!ASC)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ApplyStatDeltas] Player has no ASC"));
        return;
    }

    const TMap<FGameplayTag, FGameplayAttribute>& StatMap = GetStatTagToAttributeMap();

    for (const TPair<FGameplayTag, float>& ValueEntry : Payload.Values)
    {
        const FGameplayAttribute* FoundAttribute = StatMap.Find(ValueEntry.Key);
        if (!FoundAttribute || !FoundAttribute->IsValid())
        {
            UE_LOG(LogKaus, Warning, TEXT("[ApplyStatDeltas] Unknown stat tag: %s"), *ValueEntry.Key.ToString());
            continue;
        }

        // EGameplayModOp::Additive — 현재 값에 Delta 더하기
        ASC->ApplyModToAttribute(*FoundAttribute, EGameplayModOp::Additive, ValueEntry.Value);

        UE_LOG(LogKaus, Log, TEXT("[ApplyStatDeltas] %s %+.2f (→ %.2f)"),
            *ValueEntry.Key.ToString(),
            ValueEntry.Value,
            ASC->GetNumericAttribute(*FoundAttribute));
    }
}
