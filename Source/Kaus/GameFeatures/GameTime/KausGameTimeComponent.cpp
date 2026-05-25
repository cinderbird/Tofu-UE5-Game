// Copyright Project Kaus. All Rights Reserved.

#include "KausGameTimeComponent.h"
#include "KausDayCycleSubsystem.h"
#include "KausDayCycleDefinition.h"
#include "KausGameTimeMessageBroadcastSystem.h"   // FKausTimeMessagePayload 정의
#include "KausDayCycleTags.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Engine/Engine.h"  // GEngine, EGetWorldErrorMode
#include "Logging/LogMacros.h"
#include "Templates/UnrealTemplate.h"  // TGuardValue

DEFINE_LOG_CATEGORY_STATIC(LogKausTimeBudget, Log, All);

UKausGameTimeComponent::UKausGameTimeComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    SetIsReplicatedByDefault(false);
}

void UKausGameTimeComponent::BeginPlay()
{
    Super::BeginPlay();

    // DayCycleSubsystem 구독.
    // GameMode가 DayCycle을 InitializeWith로 활성화하기 전에 BeginPlay가 돌 수 있다.
    // OnCycleChanged가 InitializeWith 시점에도 발사되므로, 그때 EnterCycle이 동작한다.
    if (UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem())
    {
        DayCycle->OnCycleChanged.RemoveDynamic(this, &ThisClass::HandleCycleChanged);
        DayCycle->OnCycleChanged.AddDynamic(this, &ThisClass::HandleCycleChanged);

        // 이미 초기화된 상태라면 즉시 진입 (DayCycle이 먼저 초기화된 경우).
        if (DayCycle->IsInitialized())
        {
            EnterCycle(DayCycle->GetCurrentCycleTag());
        }
    }
    else
    {
        UE_LOG(LogKausTimeBudget, Warning,
            TEXT("[%s] BeginPlay: DayCycleSubsystem not found"),
            *GetOwner()->GetName());
    }
}

void UKausGameTimeComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem())
    {
        DayCycle->OnCycleChanged.RemoveDynamic(this, &ThisClass::HandleCycleChanged);
    }
    Super::EndPlay(EndPlayReason);
}

// =============================================================================
//  Cycle 진입 (DayCycle 신호 수신)
// =============================================================================

void UKausGameTimeComponent::HandleCycleChanged(
    const FKausDayCyclePoint& NewPoint,
    const FKausDayCyclePoint& PreviousPoint)
{
    EnterCycle(NewPoint.CycleTag);

    // 진입 후 정책 평가 — Budget=0인 Cycle을 자동으로 통과시키기 위해.
    // bIsAdvancing이 true면 이미 AdvanceCycle 사슬 안 — 무한 루프 방지를 위해 평가 생략.
    if (!bIsAdvancing)
    {
        EvaluateEndPolicy();
    }
}

void UKausGameTimeComponent::EnterCycle(const FGameplayTag& CycleTag)
{
    check(IsInGameThread());

    FKausCycleSpec Spec;
    if (!TryFindSpec(CycleTag, Spec))
    {
        // Spec을 못 찾으면 Cycle 정보 없이 진입 — 총량 0으로 설정.
        // TrySpend는 Insufficient로 거부될 것.
        UE_LOG(LogKausTimeBudget, Warning,
            TEXT("[%s] EnterCycle: spec not found for tag '%s', leaving total at 0"),
            *GetOwner()->GetName(), *CycleTag.ToString());

        CurrentCycleTag = CycleTag;
        CurrentBudgetMode = FGameplayTag::EmptyTag;
        CycleTotal = 0;
        Remaining = 0;
        CycleStartMinute = 0;
        CurrentEndPolicy = FKausCycleEndPolicy{};
        bLastBroadcastedCanManualEnd = false;

        OnRemainingChanged.Broadcast(0, 0, 0);
        OnCanManualEndChanged.Broadcast(false);
        return;
    }

    // 정상 진입
    CurrentCycleTag = Spec.CycleTag;
    CurrentBudgetMode = Spec.BudgetMode;
    CycleTotal = Spec.CycleBudget;
    Remaining = Spec.CycleBudget;
    CycleStartMinute = Spec.RealtimeStartMinute;
    CurrentEndPolicy = Spec.EndPolicy;

    UE_LOG(LogKausTimeBudget, Log,
        TEXT("[%s] EnterCycle: %s (Mode=%s, Total=%d)"),
        *GetOwner()->GetName(),
        *CurrentCycleTag.ToString(),
        *CurrentBudgetMode.ToString(),
        CycleTotal);

    OnRemainingChanged.Broadcast(Remaining, CycleTotal, /*DeltaSpent=*/0);

    // 진입 시 임계값을 이미 만족하는 경우 (Budget이 작아 시작부터 임계 이하) 활성 알림.
    NotifyCanManualEndIfChanged();
}

// =============================================================================
//  TrySpend — 외부 진입점
// =============================================================================

EKausSpendResult UKausGameTimeComponent::TrySpend(int32 Cost)
{
    check(IsInGameThread());

    // 1) 미초기화 상태 거부
    if (!IsCycleActive())
    {
        UE_LOG(LogKausTimeBudget, Verbose,
            TEXT("[%s] TrySpend(%d): not initialized"),
            *GetOwner()->GetName(), Cost);
        return EKausSpendResult::NotInitialized;
    }

    // 2) 음수 거부
    if (Cost < 0)
    {
        UE_LOG(LogKausTimeBudget, Warning,
            TEXT("[%s] TrySpend(%d): negative cost rejected"),
            *GetOwner()->GetName(), Cost);
        return EKausSpendResult::InvalidCost;
    }

    // 3) 0이면 즉시 통과 (no-op이지만 Accept)
    if (Cost == 0)
    {
        return EKausSpendResult::Accepted;
    }

    // 4) 부족
    if (Cost > Remaining)
    {
        UE_LOG(LogKausTimeBudget, Verbose,
            TEXT("[%s] TrySpend(%d): insufficient (remaining=%d)"),
            *GetOwner()->GetName(), Cost, Remaining);
        return EKausSpendResult::Insufficient;
    }

    // 5) 차감
    const int32 PreRemaining = Remaining;
    Remaining -= Cost;

    UE_LOG(LogKausTimeBudget, Log,
        TEXT("[%s] Spent %d. Remaining: %d → %d"),
        *GetOwner()->GetName(), Cost, PreRemaining, Remaining);

    OnRemainingChanged.Broadcast(Remaining, CycleTotal, Cost);

    // 6) 종료 정책 평가
    EvaluateEndPolicy();

    return EKausSpendResult::Accepted;
}

bool UKausGameTimeComponent::CanSpend(int32 Cost) const
{
    if (Cost < 0) return false;
    if (Cost == 0) return true;
    if (!IsCycleActive()) return false;
    return Cost <= Remaining;
}

// =============================================================================
//  종료 정책
// =============================================================================

void UKausGameTimeComponent::EvaluateEndPolicy()
{
    // 자동 종료 — 남은 양 소진 + 정책 허용.
    if (Remaining <= 0 && CurrentEndPolicy.bEndOnBudgetExhausted)
    {
        // BudgetExhausted 메시지 발사 (Cycle 전환 직전 — 마지막 정리 기회).
        // GameplayMessageSubsystem::HasInstance가 내부적으로 GetWorldFromContextObject(Assert)를
        // 호출해 World 없는 환경(단위 테스트 등)에서 assertion이 발생한다.
        // 따라서 World 존재 여부를 먼저 LogAndReturnNull 모드로 안전 확인한다.
        const UWorld* World = GEngine
            ? GEngine->GetWorldFromContextObject(this, EGetWorldErrorMode::LogAndReturnNull)
            : nullptr;
        if (World && UGameplayMessageSubsystem::HasInstance(this))
        {
            FKausTimeMessagePayload ExhaustPayload;
            // NewPoint/PreviousPoint는 아직 변경 전 — DayCycleSubsystem에서 가져옴.
            if (UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem())
            {
                ExhaustPayload.NewPoint = DayCycle->GetCurrentPoint();
                ExhaustPayload.PreviousPoint = ExhaustPayload.NewPoint;  // 동일
                ExhaustPayload.bDateChanged = false;
            }
            UGameplayMessageSubsystem::Get(this).BroadcastMessage(
                KausDayCycleTags::Event_Time_BudgetExhausted, ExhaustPayload);
        }

        UE_LOG(LogKausTimeBudget, Log,
            TEXT("[%s] Exhausted — advancing cycle"),
            *GetOwner()->GetName());

        RequestAdvanceCycle();
        return;
    }

    // 수동 종료 가능성 변경 검사.
    NotifyCanManualEndIfChanged();
}

bool UKausGameTimeComponent::CanManualEndCycle() const
{
    if (!IsCycleActive()) return false;
    if (!CurrentEndPolicy.bAllowManualEndAtThreshold) return false;
    return Remaining <= CurrentEndPolicy.ManualEndAtRemainingOrLess;
}

bool UKausGameTimeComponent::TryManualEndCycle()
{
    check(IsInGameThread());

    if (!CanManualEndCycle())
    {
        UE_LOG(LogKausTimeBudget, Verbose,
            TEXT("[%s] TryManualEndCycle: not allowed at this time"),
            *GetOwner()->GetName());
        return false;
    }

    UE_LOG(LogKausTimeBudget, Log,
        TEXT("[%s] Manual cycle end (remaining=%d)"),
        *GetOwner()->GetName(), Remaining);

    return RequestAdvanceCycle();
}

// =============================================================================
//  조회
// =============================================================================

int32 UKausGameTimeComponent::GetCurrentRealtimeMinute() const
{
    // Realtime Mode가 아니면 의미 없음 — 0 반환.
    if (!CurrentBudgetMode.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_BudgetMode_Realtime))
    {
        return 0;
    }

    // 시작 분 + 사용된 분 = 현재 가상 시각.
    // Wrap 처리: 24시간 초과 시 모듈로 (예: 22:00 시작 + 240분 사용 = 26:00 → 02:00)
    const int32 SpentMinutes = CycleTotal - Remaining;
    const int32 RawMinute = CycleStartMinute + SpentMinutes;
    return RawMinute % 1440;  // 24*60
}

// =============================================================================
//  디버그
// =============================================================================

void UKausGameTimeComponent::AddRemaining(int32 Amount)
{
    check(IsInGameThread());

    if (!IsCycleActive())
    {
        UE_LOG(LogKausTimeBudget, Warning,
            TEXT("[%s] AddRemaining: not initialized"),
            *GetOwner()->GetName());
        return;
    }

    const int32 PreRemaining = Remaining;
    Remaining = FMath::Clamp(Remaining + Amount, 0, CycleTotal);
    const int32 ActualDelta = PreRemaining - Remaining;  // 소비된 양 (음수면 부여)

    UE_LOG(LogKausTimeBudget, Log,
        TEXT("[%s] AddRemaining(%d): %d → %d (delta=%d)"),
        *GetOwner()->GetName(), Amount, PreRemaining, Remaining, ActualDelta);

    OnRemainingChanged.Broadcast(Remaining, CycleTotal, ActualDelta);

    // 정책 재평가 (음수 부여로 0 도달 시 자동 종료 가능).
    EvaluateEndPolicy();
}

void UKausGameTimeComponent::ForceAdvanceCycle()
{
    check(IsInGameThread());

    UE_LOG(LogKausTimeBudget, Log,
        TEXT("[%s] ForceAdvanceCycle (bypassing EndPolicy)"),
        *GetOwner()->GetName());

    RequestAdvanceCycle();
}

// =============================================================================
//  내부 헬퍼
// =============================================================================

bool UKausGameTimeComponent::TryFindSpec(const FGameplayTag& CycleTag, FKausCycleSpec& OutSpec) const
{
    UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem();
    if (!DayCycle || !DayCycle->IsInitialized()) return false;

    UKausDayCycleDefinition* Def = DayCycle->GetDefinition();
    if (!Def) return false;

    bool bFound = false;
    OutSpec = Def->FindSpec(CycleTag, bFound);
    return bFound;
}

UKausDayCycleSubsystem* UKausGameTimeComponent::GetDayCycleSubsystem() const
{
    UWorld* World = GetWorld();
    if (!World) return nullptr;

    UGameInstance* GI = World->GetGameInstance();
    return GI ? GI->GetSubsystem<UKausDayCycleSubsystem>() : nullptr;
}

bool UKausGameTimeComponent::RequestAdvanceCycle()
{
    UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem();
    if (!DayCycle) return false;

    // bIsAdvancing 가드: AdvanceCycle → OnCycleChanged → HandleCycleChanged 도미노 안에서
    // EvaluateEndPolicy가 다시 RequestAdvanceCycle을 호출하는 무한 루프를 차단.
    TGuardValue<bool> Guard(bIsAdvancing, true);
    DayCycle->AdvanceCycle();
    return true;
}

void UKausGameTimeComponent::NotifyCanManualEndIfChanged()
{
    const bool bCanManualEnd = CanManualEndCycle();
    if (bCanManualEnd != bLastBroadcastedCanManualEnd)
    {
        bLastBroadcastedCanManualEnd = bCanManualEnd;
        OnCanManualEndChanged.Broadcast(bCanManualEnd);
    }
}
