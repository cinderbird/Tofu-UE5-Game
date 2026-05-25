// Copyright Project Kaus. All Rights Reserved.

#include "KausPlayerActionAbility.h"
#include "KausGameTimeComponent.h"
#include "Tags/KausActionTags.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/PlayerController.h"
#include "GameFramework/PlayerState.h"
#include "GameFramework/Pawn.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausPlayerAction, Log, All);

UKausPlayerActionAbility::UKausPlayerActionAbility()
{
    // GAS 권장: Instanced Per Actor — 한 플레이어에 한 인스턴스, 상태 공유.
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
}

void UKausPlayerActionAbility::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, 
    const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, /*bReplicateEndAbility=*/true, /*bWasCancelled=*/true);
        return;
    }

    // Cost 결정.
    const int32 TimeCost = ResolveTimeCost(TriggerEventData);

    // 0이면 차감 단계 건너뛰고 바로 본 로직.
    if (TimeCost <= 0)
    {
        UE_LOG(LogKausPlayerAction, Verbose, TEXT("[%s] ActivateAbility: free action (cost=%d)"), *GetName(), TimeCost);

        if (TriggerEventData)
        {
            K2_OnActivate(*TriggerEventData);
        }
        else
        {
            const FGameplayEventData EmptyData;
            K2_OnActivate(EmptyData);
        }
        return;
    }

    // KausGameTimeMessageBroadcastSystem 조회.
    UKausGameTimeComponent* BudgetComp = FindKausGameTimeComponent(ActorInfo);
    if (!BudgetComp)
    {
        UE_LOG(LogKausPlayerAction, Warning, TEXT("[%s] ActivateAbility: KausGameTimeMessageBroadcastSystem not found, rejecting"), *GetName());
        K2_OnRejected();
        EndAbility(Handle, ActorInfo, ActivationInfo, true, /*bWasCancelled=*/true);
        return;
    }

    // 차감 시도.
    const EKausSpendResult SpendResult = BudgetComp->TrySpend(TimeCost);
    if (SpendResult != EKausSpendResult::Accepted)
    {
        UE_LOG(LogKausPlayerAction, Log, TEXT("[%s] ActivateAbility: time spend rejected (result=%d, cost=%d)"), *GetName(), (int32)SpendResult, TimeCost);

        K2_OnRejected();
        EndAbility(Handle, ActorInfo, ActivationInfo, true, /*bWasCancelled=*/true);
        return;
    }

    // 성공 — 본 로직 진입.
    UE_LOG(LogKausPlayerAction, Verbose, TEXT("[%s] ActivateAbility: time spent (cost=%d)"), *GetName(), TimeCost);

    if (TriggerEventData)
    {
        K2_OnActivate(*TriggerEventData);
    }
    else
    {
        const FGameplayEventData EmptyData;
        K2_OnActivate(EmptyData);
    }
}

int32 UKausPlayerActionAbility::ResolveTimeCost(const FGameplayEventData* TriggerEventData) const
{
    if (TriggerEventData)
    {
        return K2_ResolveTimeCost(*TriggerEventData);
    }
    const FGameplayEventData EmptyData;
    return K2_ResolveTimeCost(EmptyData);
}

int32 UKausPlayerActionAbility::K2_ResolveTimeCost_Implementation(const FGameplayEventData& TriggerEventData) const
{
    // ─────────────────────────────────────────────────────────────────
    //  우선순위 1: Interaction의 명시 TimeCostOverride
    //
    //  override가 있으려면 InstigatorTags에 'Action.Cost.Override' 태그가 있어야 한다.
    //  태그가 있으면 EventMagnitude가 cost 값 (0 포함, 0이면 "무료" 명시).
    //  태그가 없으면 default 흐름으로 떨어짐 (Magnitude 무시).
    //
    //  이 컨벤션의 이유:
    //   - GAS의 default EventMagnitude=0.0f을 "지정 안 됨"으로 해석하면
    //     "이 행동은 무료"를 표현 불가.
    //   - 음수(-1) 신호도 가능하지만 실수 유발 (까먹고 안 채우면 default).
    //   - 명시 태그 방식이 의도 표현이 분명함.
    //
    //  Interaction 시스템 측 책임:
    //   Ability 트리거 시 FGameplayEventData를 만들고
    //   1) EventMagnitude = TimeCostOverride
    //   2) InstigatorTags.AddTag(Action.Cost.Override)
    //   를 모두 채워야 override가 인정된다.
    // ─────────────────────────────────────────────────────────────────
    static const FGameplayTag CostOverrideTag = KausActionTags::Action_Cost_Override;

    if (CostOverrideTag.IsValid()
        && TriggerEventData.InstigatorTags.HasTagExact(CostOverrideTag))
    {
        const int32 OverrideValue = FMath::Max(0, FMath::RoundToInt(TriggerEventData.EventMagnitude));
        return OverrideValue;
    }

    // ─────────────────────────────────────────────────────────────────
    //  우선순위 2: TimeCostByMode 맵에 현재 BudgetMode가 있으면 그 값
    // ─────────────────────────────────────────────────────────────────
    if (TimeCostByMode.Num() > 0)
    {
        // 현재 BudgetMode를 알아내려면 PlayerTimeBudgetComponent 조회 필요.
        const FGameplayAbilityActorInfo* ActorInfo = GetCurrentActorInfo();
        if (ActorInfo)
        {
            const UKausGameTimeComponent* BudgetComp = FindKausGameTimeComponent(ActorInfo);
            if (BudgetComp)
            {
                const FGameplayTag CurrentMode = BudgetComp->GetCurrentBudgetMode();
                if (const int32* FoundCost = TimeCostByMode.Find(CurrentMode))
                {
                    return *FoundCost;
                }
            }
        }
    }

    return DefaultTimeCost;
}

UKausGameTimeComponent* UKausPlayerActionAbility::FindKausGameTimeComponent(const FGameplayAbilityActorInfo* ActorInfo) const
{
    if (!ActorInfo) return nullptr;

    APlayerController* PC = ActorInfo->PlayerController.Get();
    if (PC)
    {
        if (APlayerState* PS = PC->PlayerState)
        {
            if (UKausGameTimeComponent* Comp = PS->FindComponentByClass<UKausGameTimeComponent>())
            {
                return Comp;
            }
        }
    }

    // Fallback 1: Avatar Pawn
    if (APawn* AvatarPawn = Cast<APawn>(ActorInfo->AvatarActor.Get()))
    {
        if (UKausGameTimeComponent* Comp = AvatarPawn->FindComponentByClass<UKausGameTimeComponent>())
        {
            return Comp;
        }

        // Fallback 2: Avatar의 PlayerState (Pawn이 PC 없이 PlayerState만 있는 케이스)
        if (APlayerState* PawnPS = AvatarPawn->GetPlayerState())
        {
            if (UKausGameTimeComponent* Comp = PawnPS->FindComponentByClass<UKausGameTimeComponent>())
            {
                return Comp;
            }
        }
    }

    return nullptr;
}
