// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Engine/GameInstance.h"
#include "UObject/Package.h"

#include "GameTime/KausGameTimeComponent.h"
#include "GameTime/Tests/KausPlayerTimeBudgetTestListeners.h"
#include "GameTime/Tests/KausTestPlayerTimeBudgetComponent.h"
#include "GameTime/KausDayCycleSubsystem.h"
#include "GameTime/KausDayCycleDefinition.h"
#include "Calendar/KausCalendarSubsystem.h"
#include "Calendar/KausCalendarSchedule.h"
#include "Calendar/KausGregorianCalendar.h"
#include "Calendar/KausGameDate.h"
#include "Tags/KausDayCycleTags.h"
#include "GameFramework/Actor.h"

// =============================================================================
//  테스트 환경
//
//  설계 메모:
//   - Component는 dummy AActor를 Outer로 NewObject — production code가
//     GetOwner()->GetName()을 로깅에 사용하므로 nullptr 회피 위함.
//   - BeginPlay/RegisterComponent는 호출하지 않음 (World 없으니 안전).
//   - GetDayCycleSubsystem을 override하기 위해 derived test 클래스 사용.
//   - 외부에서 EnterCycle/EvaluateEndPolicy 등 protected 메서드 직접 호출.
//   - 자료 검증은 OnRemainingChanged / OnCanManualEndChanged 리스너로 관찰.
// =============================================================================

namespace KausPlayerTimeBudgetTestHelpers
{
    /**
     * Component의 Outer 역할만 하는 dummy Actor.
     *
     * AActor 자체는 abstract 아니므로 NewObject 가능. GetTransientPackage를
     * Outer로 두며, World 등록은 안 함 — Component의 BeginPlay/Tick 호출 안 하니
     * Actor의 Lifecycle을 굳이 엮을 필요 없음.
     *
     * Owner는 AddToRoot 안 함 — Component가 AddToRoot되면 Outer chain으로 살아남음.
     * Component->RemoveFromRoot 후 다음 GC 사이클에 같이 정리됨.
     */
    static AActor* MakeOwnerActor()
    {
        return NewObject<AActor>(GetTransientPackage());
    }

    /** Token 모드 표준 4-Cycle Definition. */
    static UKausDayCycleDefinition* MakeStandardDefinition(int32 BudgetForAll = 5)
    {
        UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>(GetTransientPackage());

        auto MakeSpec = [BudgetForAll](const FGameplayTag& Tag, int32 Hour)
        {
            FKausCycleSpec Spec;
            Spec.CycleTag = Tag;
            Spec.DisplayHour = Hour;
            Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
            Spec.CycleBudget = BudgetForAll;
            return Spec;
        };

        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Morning,    5));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon,  10));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night1,     18));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night2,     22));

        return Def;
    }

    /** Realtime 모드 단일 Cycle Definition (밤-2 같은 자동 진행). */
    static UKausDayCycleDefinition* MakeRealtimeDefinition(int32 Budget = 240)
    {
        UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>(GetTransientPackage());

        FKausCycleSpec Spec;
        Spec.CycleTag = KausDayCycleTags::Calendar_Cycle_Night2;
        Spec.DisplayHour = 22;
        Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Realtime;
        Spec.CycleBudget = Budget;
        Spec.RealtimeStartMinute = 22 * 60;  // 22:00
        Spec.EndPolicy.bEndOnBudgetExhausted = true;
        Def->Cycles.Add(Spec);

        return Def;
    }

    /** Manual end 가능한 자유 탐색 Definition. */
    static UKausDayCycleDefinition* MakeExplorationDefinition(int32 Budget = 7, int32 ManualThreshold = 5)
    {
        UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>(GetTransientPackage());

        FKausCycleSpec Spec;
        Spec.CycleTag = KausDayCycleTags::Calendar_Cycle_Morning;
        Spec.DisplayHour = 5;
        Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
        Spec.CycleBudget = Budget;
        Spec.EndPolicy.bEndOnBudgetExhausted = true;
        Spec.EndPolicy.bAllowManualEndAtThreshold = true;
        Spec.EndPolicy.ManualEndAtRemainingOrLess = ManualThreshold;
        Def->Cycles.Add(Spec);

        // 두 번째 Cycle (테스트 시나리오에서 wrap 결과 검증용).
        FKausCycleSpec Spec2;
        Spec2.CycleTag = KausDayCycleTags::Calendar_Cycle_Afternoon;
        Spec2.DisplayHour = 10;
        Spec2.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
        Spec2.CycleBudget = 3;
        Def->Cycles.Add(Spec2);

        return Def;
    }

    /** Calendar + DayCycle Subsystem이 살아있는 GameInstance 컨텍스트. */
    struct FTestContext
    {
        UGameInstance* GameInstance = nullptr;
        UKausCalendarSubsystem* Calendar = nullptr;
        UKausDayCycleSubsystem* DayCycle = nullptr;
        UKausCalendarSchedule* Schedule = nullptr;
        UKausDayCycleDefinition* Definition = nullptr;

        FTestContext(UKausDayCycleDefinition* InDefinition)
        {
            Definition = InDefinition;
            if (Definition) Definition->AddToRoot();

            GameInstance = NewObject<UGameInstance>(GetTransientPackage());
            GameInstance->AddToRoot();

            Calendar = NewObject<UKausCalendarSubsystem>(GameInstance);
            Calendar->AddToRoot();

            DayCycle = NewObject<UKausDayCycleSubsystem>(GameInstance);
            DayCycle->AddToRoot();

            // Schedule.
            Schedule = NewObject<UKausCalendarSchedule>(GetTransientPackage());
            Schedule->AddToRoot();

            UKausGregorianCalendar* CalSys = NewObject<UKausGregorianCalendar>(Schedule);
            Schedule->CalendarSystem = CalSys;
            Schedule->StartDate = FKausGameDate(2026, 1, 1);
            Schedule->EndDate = FKausGameDate(2026, 12, 31);
            Schedule->StartWeekdayIndex = 3;
            Schedule->WeekendWeekdayIndices = { 5, 6 };

            Calendar->InitializeWithSchedule(Schedule);

            const FGameplayTag StartCycle = (Definition && Definition->Cycles.Num() > 0)
                ? Definition->Cycles[0].CycleTag : FGameplayTag::EmptyTag;
            DayCycle->InitializeWith(Definition, FKausGameDate(2026, 6, 15), StartCycle, Calendar);
        }

        ~FTestContext()
        {
            if (Schedule) Schedule->RemoveFromRoot();
            if (DayCycle) DayCycle->RemoveFromRoot();
            if (Calendar) Calendar->RemoveFromRoot();
            if (GameInstance) GameInstance->RemoveFromRoot();
            if (Definition) Definition->RemoveFromRoot();
        }
    };
}

// =============================================================================
//  Testable derived class — KausTestPlayerTimeBudgetComponent.h 참조
//  (UCLASS는 별도 헤더에 둠 — UHT 처리 안전성)
// =============================================================================

// =============================================================================
//  Test 01 — 미초기화 상태에서 TrySpend 거부
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_NotInitializedRejects,
    "Kaus.Player.TimeBudget.NotInitializedRejects",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_NotInitializedRejects::RunTest(const FString&)
{
    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();

    const EKausSpendResult R = Comp->TrySpend(1);
    TestTrue(TEXT("미초기화에서 NotInitialized 반환"),
        R == EKausSpendResult::NotInitialized);

    TestEqual(TEXT("Remaining은 0"), Comp->GetRemaining(), 0);
    TestEqual(TEXT("CycleTotal은 0"), Comp->GetCycleTotal(), 0);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 02 — EnterCycle 시 Budget 초기화 + 신호 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_EnterCycleInitializes,
    "Kaus.Player.TimeBudget.EnterCycleInitializes",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_EnterCycleInitializes::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    UKausRemainingChangedListener* L = NewObject<UKausRemainingChangedListener>();
    L->AddToRoot();
    Comp->OnRemainingChanged.AddDynamic(L, &UKausRemainingChangedListener::Handle);

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    TestTrue(TEXT("CurrentCycleTag = Morning"), Comp->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));
    TestEqual(TEXT("CycleTotal = 5"), Comp->GetCycleTotal(), 5);
    TestEqual(TEXT("Remaining = 5 (full)"), Comp->GetRemaining(), 5);
    TestEqual(TEXT("OnRemainingChanged 1회 발사"), L->CallCount, 1);
    TestEqual(TEXT("Initial broadcast의 DeltaSpent = 0"), L->LastDeltaSpent, 0);

    L->RemoveFromRoot();
    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 03 — TrySpend 정상 차감 + 신호 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_SpendTimeDeducts,
    "Kaus.Player.TimeBudget.SpendTimeDeducts",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_SpendTimeDeducts::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    UKausRemainingChangedListener* L = NewObject<UKausRemainingChangedListener>();
    L->AddToRoot();
    Comp->OnRemainingChanged.AddDynamic(L, &UKausRemainingChangedListener::Handle);

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);
    L->Reset();  // 진입 신호 무시

    const EKausSpendResult R = Comp->TrySpend(2);
    TestTrue(TEXT("Accepted 반환"), R == EKausSpendResult::Accepted);
    TestEqual(TEXT("Remaining = 3"), Comp->GetRemaining(), 3);
    TestEqual(TEXT("SpentTime = 2"), Comp->GetSpent(), 2);
    TestEqual(TEXT("OnRemainingChanged 1회"), L->CallCount, 1);
    TestEqual(TEXT("Delta = 2"), L->LastDeltaSpent, 2);

    L->RemoveFromRoot();
    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 04 — Cost 0 행동은 즉시 통과 (no-op이지만 Accept)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_ZeroCostAcceptedNoChange,
    "Kaus.Player.TimeBudget.ZeroCostAcceptedNoChange",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_ZeroCostAcceptedNoChange::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    UKausRemainingChangedListener* L = NewObject<UKausRemainingChangedListener>();
    L->AddToRoot();
    Comp->OnRemainingChanged.AddDynamic(L, &UKausRemainingChangedListener::Handle);

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);
    L->Reset();

    const EKausSpendResult R = Comp->TrySpend(0);
    TestTrue(TEXT("0 cost는 Accepted"), R == EKausSpendResult::Accepted);
    TestEqual(TEXT("Remaining 그대로 5"), Comp->GetRemaining(), 5);
    TestEqual(TEXT("OnRemainingChanged 미발사"), L->CallCount, 0);

    L->RemoveFromRoot();
    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 05 — 음수 cost 거부
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_NegativeCostRejected,
    "Kaus.Player.TimeBudget.NegativeCostRejected",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_NegativeCostRejected::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    AddExpectedError(TEXT("negative cost"), EAutomationExpectedErrorFlags::Contains, 0);
    const EKausSpendResult R = Comp->TrySpend(-1);
    TestTrue(TEXT("음수 거부"), R == EKausSpendResult::InvalidCost);
    TestEqual(TEXT("Remaining 그대로"), Comp->GetRemaining(), 5);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 06 — Budget 부족 시 거부 + 차감 안 함
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_Insufficient,
    "Kaus.Player.TimeBudget.Insufficient",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_Insufficient::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/3));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    const EKausSpendResult R = Comp->TrySpend(5);  // 부족
    TestTrue(TEXT("Insufficient 반환"),
        R == EKausSpendResult::Insufficient);
    TestEqual(TEXT("Remaining 그대로 3"), Comp->GetRemaining(), 3);

    // 가능한 양은 받음
    const EKausSpendResult R2 = Comp->TrySpend(3);
    TestTrue(TEXT("정확히 가능 양은 Accept"), R2 == EKausSpendResult::Accepted);
    TestEqual(TEXT("Remaining = 0"), Comp->GetRemaining(), 0);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 07 — CanSpend 비파괴 검사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_CanSpend,
    "Kaus.Player.TimeBudget.CanSpend",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_CanSpend::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/3));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    // 미초기화
    TestFalse(TEXT("미초기화에서 false"), Comp->CanSpend(1));

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    TestTrue(TEXT("0 cost 허용"), Comp->CanSpend(0));
    TestTrue(TEXT("1 cost 허용"), Comp->CanSpend(1));
    TestTrue(TEXT("3 cost (Budget 만큼) 허용"), Comp->CanSpend(3));
    TestFalse(TEXT("4 cost (초과) 거부"), Comp->CanSpend(4));
    TestFalse(TEXT("음수 거부"), Comp->CanSpend(-1));

    // 비파괴 검증
    TestEqual(TEXT("CanSpend 호출 후 Remaining 변경 없음"),
        Comp->GetRemaining(), 3);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 08 — Budget 소진 시 자동 AdvanceCycle 발생
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_AutoAdvanceOnExhaust,
    "Kaus.Player.TimeBudget.AutoAdvanceOnExhaust",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_AutoAdvanceOnExhaust::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/3));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    const FGameplayTag CycleBefore = Ctx.DayCycle->GetCurrentCycleTag();
    TestTrue(TEXT("진행 전 Cycle = Morning"), CycleBefore.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));

    // 모두 소진 → 자동 AdvanceCycle.
    Comp->TrySpend(3);

    const FGameplayTag CycleAfter = Ctx.DayCycle->GetCurrentCycleTag();
    TestTrue(TEXT("진행 후 Cycle = Afternoon"), CycleAfter.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 09 — Manual end 임계값 도달 시 신호 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_ManualEndThresholdSignal,
    "Kaus.Player.TimeBudget.ManualEndThresholdSignal",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_ManualEndThresholdSignal::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeExplorationDefinition(/*Budget=*/7, /*Threshold=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    UKausCanManualEndChangedListener* L = NewObject<UKausCanManualEndChangedListener>();
    L->AddToRoot();
    Comp->OnCanManualEndChanged.AddDynamic(L, &UKausCanManualEndChangedListener::Handle);

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    // 진입 시점: Remaining=7, Threshold=5 → 7 > 5이므로 false.
    TestFalse(TEXT("진입 시 manual end 불가"), Comp->CanManualEndCycle());

    // 1차 차감: 7 → 6, 여전히 6 > 5 → false 유지.
    Comp->TrySpend(1);
    TestFalse(TEXT("Remaining=6, 임계값 미달"), Comp->CanManualEndCycle());

    // 2차 차감: 6 → 5, 5 <= 5 → true 도달.
    L->Reset();
    Comp->TrySpend(1);
    TestTrue(TEXT("Remaining=5, manual end 가능"), Comp->CanManualEndCycle());
    TestEqual(TEXT("OnCanManualEndChanged 1회 발사"), L->CallCount, 1);
    TestTrue(TEXT("값은 true"), L->LastValue);

    L->RemoveFromRoot();
    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 10 — TryManualEndCycle: 임계 도달 후 호출 시 진행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_ManualEndAdvances,
    "Kaus.Player.TimeBudget.ManualEndAdvances",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_ManualEndAdvances::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeExplorationDefinition(/*Budget=*/7, /*Threshold=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    // 임계 미달에서 호출하면 거부.
    const bool bRejected = Comp->TryManualEndCycle();
    TestFalse(TEXT("임계 미달이면 거부"), bRejected);
    TestTrue(TEXT("Cycle 변경 없음"), Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));

    // 임계까지 차감.
    Comp->TrySpend(2);  // 7 → 5
    TestTrue(TEXT("임계 도달"), Comp->CanManualEndCycle());

    // 호출하면 다음 Cycle로 진행.
    const bool bAccepted = Comp->TryManualEndCycle();
    TestTrue(TEXT("임계 도달 후 호출 성공"), bAccepted);
    TestTrue(TEXT("다음 Cycle (Afternoon) 진입"), Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 11 — Realtime mode: 가상 시각 계산
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_RealtimeMinuteCalculation,
    "Kaus.Player.TimeBudget.RealtimeMinuteCalculation",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_RealtimeMinuteCalculation::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeRealtimeDefinition(/*Budget=*/240));  // 22:00 시작, 240분 = 4시간

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Night2);

    TestEqual(TEXT("진입 시 가상 시각 = 22:00 (1320분)"),
        Comp->GetCurrentRealtimeMinute(), 22 * 60);

    // 30분 사용 → 22:30
    Comp->TrySpend(30);
    TestEqual(TEXT("30분 후 = 22:30 (1350)"),
        Comp->GetCurrentRealtimeMinute(), 22 * 60 + 30);

    // 60분 더 → 23:30
    Comp->TrySpend(60);
    TestEqual(TEXT("90분 후 = 23:30 (1410)"),
        Comp->GetCurrentRealtimeMinute(), 23 * 60 + 30);

    // 자정 wrap: 22:00 + 150분 = 24:30 → 00:30 (mod 1440)
    // 현재 1410. 60분 더 = 1470 % 1440 = 30.
    Comp->TrySpend(60);
    TestEqual(TEXT("자정 wrap: 1470 % 1440 = 30 (00:30)"),
        Comp->GetCurrentRealtimeMinute(), 30);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 12 — Token mode에서 GetCurrentRealtimeMinute은 0 반환
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_TokenModeRealtimeIsZero,
    "Kaus.Player.TimeBudget.TokenModeRealtimeIsZero",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_TokenModeRealtimeIsZero::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    TestEqual(TEXT("Token mode에서는 0"),
        Comp->GetCurrentRealtimeMinute(), 0);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 13 — AddRemaining: 부여/차감 + 클램프
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_AddRemaining,
    "Kaus.Player.TimeBudget.AddRemaining",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_AddRemaining::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);
    Comp->TrySpend(3);  // Remaining = 2

    // 2 부여 → 4
    Comp->AddRemaining(2);
    TestEqual(TEXT("2 부여 → 4"), Comp->GetRemaining(), 4);

    // 10 부여 → 5로 클램프 (TimeLimit 초과 안 함)
    Comp->AddRemaining(10);
    TestEqual(TEXT("10 부여 → TimeLimit(5)으로 클램프"),
        Comp->GetRemaining(), 5);

    // -3 부여 → 2
    Comp->AddRemaining(-3);
    TestEqual(TEXT("-3 부여 → 2"), Comp->GetRemaining(), 2);

    // -100 부여 → 0으로 클램프
    Comp->AddRemaining(-100);
    TestEqual(TEXT("-100 부여 → 0으로 클램프"),
        Comp->GetRemaining(), 0);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 14 — 새 Cycle 진입 시 Budget 재초기화
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_BudgetResetsOnNewCycle,
    "Kaus.Player.TimeBudget.BudgetResetsOnNewCycle",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_BudgetResetsOnNewCycle::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);
    Comp->TrySpend(2);  // Remaining = 3

    // 다음 Cycle로 직접 EnterCycle (외부 신호 시뮬레이션)
    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Afternoon);

    TestTrue(TEXT("새 Cycle CycleTag = Afternoon"), Comp->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestEqual(TEXT("Budget 재초기화 = 5"), Comp->GetCycleTotal(), 5);
    TestEqual(TEXT("Remaining = 5 (full)"), Comp->GetRemaining(), 5);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 15 — HandleCycleChanged → DayCycleSubsystem 신호 통합
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_HandleCycleChangedIntegration,
    "Kaus.Player.TimeBudget.HandleCycleChangedIntegration",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_HandleCycleChangedIntegration::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;
    FTestContext Ctx(MakeStandardDefinition(/*Budget=*/5));

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    // OnCycleChanged 구독 (BeginPlay를 우회했으므로 수동).
    Ctx.DayCycle->OnCycleChanged.AddDynamic(Comp,
        &UKausTestGameTimeComponent::TestHandleCycleChanged);

    // DayCycle은 이미 InitializeWith로 Morning 진입 — 그러나 Comp는 그 시점엔 구독 전.
    // 수동으로 첫 진입 처리.
    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);
    TestTrue(TEXT("초기 Cycle = Morning"), Comp->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));

    // DayCycle이 진행하면 자동으로 HandleCycleChanged → EnterCycle 사슬.
    Ctx.DayCycle->AdvanceCycle();
    TestTrue(TEXT("AdvanceCycle 후 Cycle = Afternoon"), Comp->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestEqual(TEXT("Budget 재초기화"),
        Comp->GetRemaining(), 5);

    Comp->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 16 — Budget 0인 Cycle 진입 시 자동으로 다음 Cycle로 통과
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerTimeBudget_ZeroBudgetCycleAutoPasses,
    "Kaus.Player.TimeBudget.ZeroBudgetCycleAutoPasses",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerTimeBudget_ZeroBudgetCycleAutoPasses::RunTest(const FString&)
{
    using namespace KausPlayerTimeBudgetTestHelpers;

    // Budget=0인 Cycle 만들기
    UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>(GetTransientPackage());

    auto MakeSpec = [](const FGameplayTag& Tag, int32 Budget)
    {
        FKausCycleSpec S;
        S.CycleTag = Tag;
        S.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
        S.CycleBudget = Budget;
        return S;
    };
    Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Morning, 0));    // 즉시 통과
    Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon, 5));  // 정상

    FTestContext Ctx(Def);

    UKausTestGameTimeComponent* Comp =
        NewObject<UKausTestGameTimeComponent>(KausPlayerTimeBudgetTestHelpers::MakeOwnerActor());
    Comp->AddToRoot();
    Comp->InjectedDayCycle = Ctx.DayCycle;

    // OnCycleChanged 구독.
    Ctx.DayCycle->OnCycleChanged.AddDynamic(Comp,
        &UKausTestGameTimeComponent::TestHandleCycleChanged);

    // 0-Budget Morning 진입 → EvaluateEndPolicy가 자동 진행 → Afternoon 도달.
    Comp->TestEnterCycle(KausDayCycleTags::Calendar_Cycle_Morning);

    // EnterCycle 후 EvaluateEndPolicy 호출됨 (HandleCycleChanged 흐름 안에).
    // 하지만 우리는 직접 TestEnterCycle 호출했으므로 EvaluateEndPolicy가 안 도는 길.
    // 통합 검증을 위해 DayCycle에서 발생하는 OnCycleChanged 사슬을 트리거.
    // 직접 시뮬레이션:
    FKausDayCyclePoint NewPoint;
    NewPoint.Date = FKausGameDate(2026, 6, 15);
    NewPoint.CycleTag = KausDayCycleTags::Calendar_Cycle_Morning;

    FKausDayCyclePoint PrevPoint;  // invalid
    Comp->TestHandleCycleChanged(NewPoint, PrevPoint);

    // Budget=0 → AdvanceCycle 트리거 → DayCycle이 Afternoon으로.
    TestTrue(TEXT("0-Budget Cycle 자동 통과 → Afternoon"), Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));

    Comp->RemoveFromRoot();
    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
