// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Engine/GameInstance.h"
#include "UObject/Package.h"

#include "GameTime/KausDayCycleSubsystem.h"
#include "GameTime/KausDayCycleDefinition.h"
#include "Calendar/KausCalendarSubsystem.h"
#include "Calendar/KausCalendarSchedule.h"
#include "Calendar/KausGregorianCalendar.h"
#include "Calendar/KausGameDate.h"
#include "Tags/KausDayCycleTags.h"
#include "KausDayCycleTestListeners.h"

// =============================================================================
//  FTestContext — Calendar + DayCycle Subsystem 환경 빌드
//
//  설계 메모:
//   - InitializeStandalone 호출 금지 (핸드오프 §4.1).
//   - GEngine을 Outer로 GameInstanceSubsystem 생성 금지 (ClassWithin 위반).
//   - GameInstance를 Outer로 NewObject + AddToRoot 후 수동 초기화.
//   - GI 자체는 빈 인스턴스 (NewObject<UGameInstance>(GetTransientPackage())).
//   - 소멸자에서 RemoveFromRoot 보장.
// =============================================================================

namespace KausDayCycleSubsystemTestHelpers
{
    /** 그레고리력 + 4-Cycle 표준 Schedule/Definition을 보유한 컨텍스트. */
    struct FTestContext
    {
        UGameInstance* GameInstance = nullptr;
        UKausCalendarSubsystem* Calendar = nullptr;
        UKausDayCycleSubsystem* DayCycle = nullptr;
        UKausCalendarSchedule* Schedule = nullptr;
        UKausDayCycleDefinition* Definition = nullptr;

        FTestContext()
        {
            // 1) 빈 GameInstance.
            GameInstance = NewObject<UGameInstance>(GetTransientPackage());
            GameInstance->AddToRoot();

            // 2) Calendar Subsystem — GI를 Outer로 NewObject.
            Calendar = NewObject<UKausCalendarSubsystem>(GameInstance);
            Calendar->AddToRoot();

            // 3) DayCycle Subsystem — GI를 Outer로 NewObject.
            DayCycle = NewObject<UKausDayCycleSubsystem>(GameInstance);
            DayCycle->AddToRoot();

            // 4) Schedule 빌드.
            Schedule = NewObject<UKausCalendarSchedule>(GetTransientPackage());
            Schedule->AddToRoot();

            UKausGregorianCalendar* CalSys = NewObject<UKausGregorianCalendar>(Schedule);
            Schedule->CalendarSystem = CalSys;
            Schedule->StartDate = FKausGameDate(2026, 1, 1);
            Schedule->EndDate   = FKausGameDate(2026, 12, 31);
            Schedule->StartWeekdayIndex = 3;  // 2026-01-01 = 목요일 (인덱스 임의)
            Schedule->WeekendWeekdayIndices = { 5, 6 };

            // 5) Definition 빌드 (4-Cycle).
            Definition = NewObject<UKausDayCycleDefinition>(GetTransientPackage());
            Definition->AddToRoot();

            auto MakeSpec = [](const FGameplayTag& Tag, int32 Hour) -> FKausCycleSpec
            {
                FKausCycleSpec Spec;
                Spec.CycleTag = Tag;
                Spec.DisplayHour = Hour;
                Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
                Spec.CycleBudget = 1;
                return Spec;
            };

            Definition->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Morning,    5));
            Definition->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon,  10));
            Definition->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night1,     18));
            Definition->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night2,     22));
        }

        ~FTestContext()
        {
            if (Definition) Definition->RemoveFromRoot();
            if (Schedule) Schedule->RemoveFromRoot();
            if (DayCycle) DayCycle->RemoveFromRoot();
            if (Calendar) Calendar->RemoveFromRoot();
            if (GameInstance) GameInstance->RemoveFromRoot();
        }

        /** Calendar를 InitializeWithSchedule로 초기화. */
        bool InitCalendar()
        {
            return Calendar->InitializeWithSchedule(Schedule);
        }

        /** DayCycle을 표준 위치(2026-06-15, Day)로 초기화. */
        bool InitDayCycleAtMidYear()
        {
            return DayCycle->InitializeWith(
                Definition,
                FKausGameDate(2026, 6, 15),
                KausDayCycleTags::Calendar_Cycle_Afternoon);
        }
    };
}

using namespace KausDayCycleSubsystemTestHelpers;

// =============================================================================
//  Test 01 — Calendar 미초기화면 InitializeWith 실패
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_InitFailsWithoutCalendar,
    "Kaus.Calendar.DayCycle.Subsystem.InitFailsWithoutCalendar",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_InitFailsWithoutCalendar::RunTest(const FString&)
{
    FTestContext Ctx;
    // 의도적으로 Calendar 초기화 안 함

    AddExpectedError(TEXT("Calendar Subsystem not initialized"),
        EAutomationExpectedErrorFlags::Contains, 1);

    const bool bOk = Ctx.DayCycle->InitializeWith(
        Ctx.Definition,
        FKausGameDate(2026, 6, 15),
        KausDayCycleTags::Calendar_Cycle_Afternoon);

    TestFalse(TEXT("Calendar 미초기화면 InitializeWith 실패"), bOk);
    TestFalse(TEXT("IsInitialized 여전히 false"), Ctx.DayCycle->IsInitialized());

    return true;
}

// =============================================================================
//  Test 02 — Calendar 범위 밖 Date면 실패
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_InitFailsOutOfRange,
    "Kaus.Calendar.DayCycle.Subsystem.InitFailsOutOfRange",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_InitFailsOutOfRange::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화 성공"), Ctx.InitCalendar());

    AddExpectedError(TEXT("out of Calendar range"),
        EAutomationExpectedErrorFlags::Contains, 1);

    // Schedule이 2026-* 인데 2027 사용
    const bool bOk = Ctx.DayCycle->InitializeWith(
        Ctx.Definition,
        FKausGameDate(2027, 1, 1),
        KausDayCycleTags::Calendar_Cycle_Afternoon);

    TestFalse(TEXT("범위 밖 Date면 실패"), bOk);

    return true;
}

// =============================================================================
//  Test 03 — Definition에 없는 CycleTag면 실패
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_InitFailsUnknownCycleTag,
    "Kaus.Calendar.DayCycle.Subsystem.InitFailsUnknownCycleTag",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_InitFailsUnknownCycleTag::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화 성공"), Ctx.InitCalendar());

    AddExpectedError(TEXT("not in Definition"),
        EAutomationExpectedErrorFlags::Contains, 1);

    // 임의의 무관한 태그
    const FGameplayTag Bogus = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle")), false);  // 부모 태그라 Definition에 없음

    const bool bOk = Ctx.DayCycle->InitializeWith(
        Ctx.Definition,
        FKausGameDate(2026, 6, 15),
        Bogus);

    TestFalse(TEXT("Definition에 없는 CycleTag면 실패"), bOk);

    return true;
}

// =============================================================================
//  Test 04 — 정상 초기화 → IsInitialized=true, OnCycleChanged 1회
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_InitSuccess,
    "Kaus.Calendar.DayCycle.Subsystem.InitSuccess",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_InitSuccess::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화 성공"), Ctx.InitCalendar());

    UKausDayCycleChangedListener* CycleListener = NewObject<UKausDayCycleChangedListener>();
    CycleListener->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CycleListener,
        &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DateListener = NewObject<UKausDayCycleDateChangedListener>();
    DateListener->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DateListener,
        &UKausDayCycleDateChangedListener::Handle);

    const bool bOk = Ctx.InitDayCycleAtMidYear();

    TestTrue(TEXT("정상 초기화 성공"), bOk);
    TestTrue(TEXT("IsInitialized=true"), Ctx.DayCycle->IsInitialized());
    TestTrue(TEXT("CurrentDate = 2026-06-15"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 15));
    TestTrue(TEXT("CurrentCycle = Day"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Afternoon));

    // 첫 초기화는 OnCycleChanged 1회 + OnDateChanged 1회 발행 (default → start로 변경)
    TestTrue(TEXT("OnCycleChanged 1회"), CycleListener->CallCount == 1);
    TestTrue(TEXT("OnDateChanged 1회"), DateListener->CallCount == 1);

    // PreviousPoint.CycleTag는 invalid이어야 함 (계약: 첫 초기화 신호의 표지)
    TestFalse(TEXT("PreviousPoint.CycleTag invalid (첫 초기화 표지)"),
        CycleListener->LastPrevious.CycleTag.IsValid());

    CycleListener->RemoveFromRoot();
    DateListener->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 05 — AdvanceCycle: 같은 Date 내, OnDateChanged 미발행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceCycle_SameDate,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceCycle.SameDate",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceCycle_SameDate::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());
    // 시작 = (2026-06-15, Day). 다음 = (2026-06-15, Evening). Date 그대로.

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DL = NewObject<UKausDayCycleDateChangedListener>();
    DL->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DL, &UKausDayCycleDateChangedListener::Handle);

    const bool bOk = Ctx.DayCycle->AdvanceCycle();

    TestTrue(TEXT("AdvanceCycle 성공"), bOk);
    TestTrue(TEXT("Date 그대로 2026-06-15"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 15));
    TestTrue(TEXT("CurrentCycle = Evening"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Night1));

    TestTrue(TEXT("OnCycleChanged 1회"), CL->CallCount == 1);
    TestTrue(TEXT("OnDateChanged 미발행"), DL->CallCount == 0);

    CL->RemoveFromRoot();
    DL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 06 — AdvanceCycle: 마지막 Cycle → Date 변경, OnDateChanged 발행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceCycle_DateBoundary,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceCycle.DateBoundary",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceCycle_DateBoundary::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());

    // (2026-06-15, Night)에서 시작. 다음 = (2026-06-16, Dawn). Date 경계.
    TestTrue(TEXT("DayCycle을 Night에서 시작"),
        Ctx.DayCycle->InitializeWith(Ctx.Definition,
            FKausGameDate(2026, 6, 15),
            KausDayCycleTags::Calendar_Cycle_Night2));

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DL = NewObject<UKausDayCycleDateChangedListener>();
    DL->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DL, &UKausDayCycleDateChangedListener::Handle);

    const bool bOk = Ctx.DayCycle->AdvanceCycle();

    TestTrue(TEXT("AdvanceCycle 성공"), bOk);
    TestTrue(TEXT("Date = 2026-06-16"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 16));
    TestTrue(TEXT("CurrentCycle = Dawn"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Morning));

    TestTrue(TEXT("OnCycleChanged 1회"), CL->CallCount == 1);
    TestTrue(TEXT("OnDateChanged 1회"), DL->CallCount == 1);
    TestTrue(TEXT("OnDateChanged: Previous=2026-06-15"),
        DL->LastPrevious == FKausGameDate(2026, 6, 15));
    TestTrue(TEXT("OnDateChanged: New=2026-06-16"),
        DL->LastNew == FKausGameDate(2026, 6, 16));

    CL->RemoveFromRoot();
    DL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 07 — AdvanceBy(0,0)는 no-op + 신호 미발행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_ZeroIsNoOp,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.ZeroIsNoOp",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_ZeroIsNoOp::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    const FKausDayCyclePoint Before = Ctx.DayCycle->GetCurrentPoint();

    const bool bOk = Ctx.DayCycle->AdvanceBy(0, 0, true);

    TestTrue(TEXT("AdvanceBy(0,0)는 true 반환"), bOk);
    TestTrue(TEXT("좌표 변화 없음"),
        Ctx.DayCycle->GetCurrentPoint() == Before);
    TestTrue(TEXT("OnCycleChanged 미발행"), CL->CallCount == 0);

    CL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 08 — AdvanceBy(0,N): each-step 발행 N회
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_CyclesEachStep,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.CyclesEachStep",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_CyclesEachStep::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    // (2026-06-15, Dawn)에서 시작
    TestTrue(TEXT("DayCycle을 Dawn에서 시작"),
        Ctx.DayCycle->InitializeWith(Ctx.Definition,
            FKausGameDate(2026, 6, 15),
            KausDayCycleTags::Calendar_Cycle_Morning));

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DL = NewObject<UKausDayCycleDateChangedListener>();
    DL->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DL, &UKausDayCycleDateChangedListener::Handle);

    // Cycle 5번 진행: Dawn → Day → Evening → Night → Dawn(다음날) → Day(다음날)
    const bool bOk = Ctx.DayCycle->AdvanceBy(0, 5, true);

    TestTrue(TEXT("AdvanceBy 성공"), bOk);
    TestTrue(TEXT("Date = 2026-06-16"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 16));
    TestTrue(TEXT("CurrentCycle = Day"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Afternoon));

    TestTrue(TEXT("OnCycleChanged 5회"), CL->CallCount == 5);
    // Date 경계는 Night → Dawn 사이 1회만.
    TestTrue(TEXT("OnDateChanged 1회"), DL->CallCount == 1);

    CL->RemoveFromRoot();
    DL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 09 — AdvanceBy(D,0): 같은 Cycle 유지, Date만 +D, OnDateChanged D회
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_DaysOnly,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.DaysOnly",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_DaysOnly::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());
    // (2026-06-15, Day)에서 시작. AdvanceBy(2, 0) → (2026-06-17, Day).

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DL = NewObject<UKausDayCycleDateChangedListener>();
    DL->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DL, &UKausDayCycleDateChangedListener::Handle);

    const bool bOk = Ctx.DayCycle->AdvanceBy(2, 0, true);

    TestTrue(TEXT("AdvanceBy 성공"), bOk);
    TestTrue(TEXT("Date = 2026-06-17 (시작 +2일)"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 17));
    TestTrue(TEXT("CurrentCycle = Day (유지)"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Afternoon));

    // 2일 × 4 Cycle = 8 step. 매 step 발행.
    TestTrue(TEXT("OnCycleChanged 8회"), CL->CallCount == 8);
    // Date 경계는 정확히 2회 (Night → Dawn 두 번).
    TestTrue(TEXT("OnDateChanged 2회"), DL->CallCount == 2);

    CL->RemoveFromRoot();
    DL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 10 — AdvanceBy batch 모드: 1회 발행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_BatchMode,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.BatchMode",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_BatchMode::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    UKausDayCycleDateChangedListener* DL = NewObject<UKausDayCycleDateChangedListener>();
    DL->AddToRoot();
    Ctx.DayCycle->OnDateChanged.AddDynamic(DL, &UKausDayCycleDateChangedListener::Handle);

    // 5일 진행 batch 모드 — 발행은 정확히 1회 (cycle), 1회 (date).
    const bool bOk = Ctx.DayCycle->AdvanceBy(5, 0, /*bBroadcastEachStep=*/false);

    TestTrue(TEXT("AdvanceBy batch 성공"), bOk);
    TestTrue(TEXT("Date = 2026-06-20"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 6, 20));

    TestTrue(TEXT("OnCycleChanged 1회 (batch)"), CL->CallCount == 1);
    TestTrue(TEXT("OnDateChanged 1회 (batch)"), DL->CallCount == 1);

    // 발행된 Previous는 시작 시점이어야 함.
    TestTrue(TEXT("Cycle.Previous = (2026-06-15, Day)"),
        CL->LastPrevious == FKausDayCyclePoint(
            FKausGameDate(2026, 6, 15),
            KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestTrue(TEXT("Date.Previous = 2026-06-15"),
        DL->LastPrevious == FKausGameDate(2026, 6, 15));

    CL->RemoveFromRoot();
    DL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 11 — AdvanceBy 음수 입력 → false
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_NegativeRejected,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.NegativeRejected",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_NegativeRejected::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    // 두 번 호출 (Days 음수, Cycles 음수) → 같은 패턴 2회 발생
    AddExpectedError(TEXT("negative values not allowed"),
        EAutomationExpectedErrorFlags::Contains, 2);

    const bool bOk1 = Ctx.DayCycle->AdvanceBy(-1, 0, true);
    TestFalse(TEXT("음수 Days → false"), bOk1);

    const bool bOk2 = Ctx.DayCycle->AdvanceBy(0, -1, true);
    TestFalse(TEXT("음수 Cycles → false"), bOk2);

    return true;
}

// =============================================================================
//  Test 12 — AdvanceBy: Calendar 범위 초과 시 부분 진행 후 중단
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_AdvanceBy_PartialOnRangeExceed,
    "Kaus.Calendar.DayCycle.Subsystem.AdvanceBy.PartialOnRangeExceed",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_AdvanceBy_PartialOnRangeExceed::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    // EndDate 근처에서 시작: (2026-12-30, Night).
    // AdvanceBy(0, 1) → (2026-12-31, Dawn) — 아직 범위 안.
    // AdvanceBy(0, 4) → 2026-12-31의 Cycle을 4번 넘기면 1번 wrap이 일어나
    //                  (2027-01-01, Dawn)이 되어야 하는데 범위 밖이라 거부.
    TestTrue(TEXT("Night에서 시작"),
        Ctx.DayCycle->InitializeWith(Ctx.Definition,
            FKausGameDate(2026, 12, 30),
            KausDayCycleTags::Calendar_Cycle_Night2));

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    // 시도: 8 step 진행. 도달 가능한 step은:
    //  step1: Night(12-30) → Dawn(12-31)    [Date 경계]
    //  step2: Dawn(12-31) → Day(12-31)
    //  step3: Day(12-31) → Evening(12-31)
    //  step4: Evening(12-31) → Night(12-31)
    //  step5: Night(12-31) → Dawn(2027-01-01) [거부 — 범위 밖]
    AddExpectedError(TEXT("aborted at step"),
        EAutomationExpectedErrorFlags::Contains, 1);

    const bool bOk = Ctx.DayCycle->AdvanceBy(0, 8, true);

    TestTrue(TEXT("AdvanceBy true 반환 (부분 진행 성공)"), bOk);
    TestTrue(TEXT("최종 Date = 2026-12-31 (마지막 도달 가능 Date)"),
        Ctx.DayCycle->GetCurrentDate() == FKausGameDate(2026, 12, 31));
    TestTrue(TEXT("최종 Cycle = Night"),
        Ctx.DayCycle->GetCurrentCycleTag().MatchesTagExact(
            KausDayCycleTags::Calendar_Cycle_Night2));

    // step 1~4까지 실행됨 → 4회 발행.
    TestTrue(TEXT("OnCycleChanged 4회 (부분 진행)"), CL->CallCount == 4);

    CL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 13 — JumpTo: 동일 좌표 → no-op
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_JumpTo_SameIsNoOp,
    "Kaus.Calendar.DayCycle.Subsystem.JumpTo.SameIsNoOp",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_JumpTo_SameIsNoOp::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    UKausDayCycleChangedListener* CL = NewObject<UKausDayCycleChangedListener>();
    CL->AddToRoot();
    Ctx.DayCycle->OnCycleChanged.AddDynamic(CL, &UKausDayCycleChangedListener::Handle);

    // 동일 좌표 점프
    const bool bOk = Ctx.DayCycle->JumpTo(
        FKausGameDate(2026, 6, 15),
        KausDayCycleTags::Calendar_Cycle_Afternoon);

    TestTrue(TEXT("JumpTo 동일 좌표 → true (no-op)"), bOk);
    TestTrue(TEXT("OnCycleChanged 미발행"), CL->CallCount == 0);

    CL->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 14 — CountCyclesBetween 정확성
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_CountCyclesBetween,
    "Kaus.Calendar.DayCycle.Subsystem.CountCyclesBetween",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_CountCyclesBetween::RunTest(const FString&)
{
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    // 같은 Date, 다른 Cycle: Day(idx 1) → Night(idx 3) = 2
    const int32 SameDate = Ctx.DayCycle->CountCyclesBetween(
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Afternoon),
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Night2));
    TestTrue(TEXT("같은 Date: Afternoon → Night2 = 2"), SameDate == 2);

    // 같은 Date, 역방향: Night2 → Morning = -3
    const int32 Reverse = Ctx.DayCycle->CountCyclesBetween(
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Night2),
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Morning));
    TestTrue(TEXT("같은 Date: Night2 → Morning = -3"), Reverse == -3);

    // 다른 Date: (06-15, Afternoon) → (06-17, Afternoon) = 2일 × 4 + 0 = 8
    const int32 TwoDays = Ctx.DayCycle->CountCyclesBetween(
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Afternoon),
        FKausDayCyclePoint(FKausGameDate(2026, 6, 17), KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestTrue(TEXT("다른 Date: 2일 같은 Cycle = 8"), TwoDays == 8);

    // 다른 Date + 다른 Cycle: (06-15, Afternoon(1)) → (06-16, Night1(2)) = 1×4 + (2-1) = 5
    const int32 Mixed = Ctx.DayCycle->CountCyclesBetween(
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Afternoon),
        FKausDayCyclePoint(FKausGameDate(2026, 6, 16), KausDayCycleTags::Calendar_Cycle_Night1));
    TestTrue(TEXT("다른 Date + Cycle = 5"), Mixed == 5);

    // 같은 좌표 = 0
    const int32 Same = Ctx.DayCycle->CountCyclesBetween(
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Afternoon),
        FKausDayCyclePoint(FKausGameDate(2026, 6, 15), KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestTrue(TEXT("같은 좌표 = 0"), Same == 0);

    return true;
}

// =============================================================================
//  Test 15 — Capture/Restore 라운드트립
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleSub_CaptureRestoreRoundtrip,
    "Kaus.Calendar.DayCycle.Subsystem.CaptureRestoreRoundtrip",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleSub_CaptureRestoreRoundtrip::RunTest(const FString&)
{
    // 라운드트립 검증: 진행 → Capture → 다른 좌표로 이동 → Restore → 원래 좌표 복원.
    //
    // 주의: Capture는 정상 동작, Restore는 SoftObjectPath 기반.
    // 이 테스트는 in-memory transient 객체에서는 SoftObjectPath 로드 경로가 동작하지 않음.
    // 그래서 여기선 "Capture가 현재 상태를 정확히 담는가"만 검증.
    // SoftObjectPath 기반 Restore의 e2e는 PIE 테스트가 책임.
    FTestContext Ctx;
    TestTrue(TEXT("Calendar 초기화"), Ctx.InitCalendar());
    TestTrue(TEXT("DayCycle 초기화"), Ctx.InitDayCycleAtMidYear());

    // 진행: Day → Evening
    TestTrue(TEXT("AdvanceCycle 성공"), Ctx.DayCycle->AdvanceCycle());

    const FKausDayCycleSaveData Saved = Ctx.DayCycle->CaptureSaveData();

    TestTrue(TEXT("Saved.Current = (2026-06-15, Evening)"),
        Saved.Current == FKausDayCyclePoint(
            FKausGameDate(2026, 6, 15),
            KausDayCycleTags::Calendar_Cycle_Night1));

    // 주의: Saved.DefinitionAssetPath는 transient 객체 기반이므로
    //       빈 문자열이거나 /Engine/Transient.XXX 형태일 수 있다.
    //       SoftObjectPath의 e2e 동작 검증은 실제 패키지 자산이 필요한 PIE 테스트가 책임.
    //       여기선 Capture된 Current 좌표만 검증.

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
