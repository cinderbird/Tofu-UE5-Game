// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "GameTime/KausDisplayClockSubsystem.h"
#include "GameTime/Tests/KausDisplayClockTestHelpers.h"
#include "UObject/Package.h"

// =============================================================================
//  테스트 환경 메모
//
//  UWorldSubsystem은 ClassWithin = UWorld이므로 Outer를 World로 두는 게 정석이지만,
//  자동화 테스트에서 World 인스턴스 생성은 무겁고 부작용이 크다.
//  실용적 우회: Outer를 GetTransientPackage로 두고 ClassWithin 검증을 우회.
//  → AdvanceClock(public TestAdvance)을 통해 Tick 의존성 제거.
//
//  Subsystem.Initialize / GetWorld() 등은 호출하지 않는다 — 테스트는
//  TestSetup으로 직접 초기 상태를 세팅한다.
//
//  명명 규약 (Subsystem과 일치):
//    - "MinuteOfDay" : 0~1439 (하루 안의 분 인덱스)
//    - "MinuteOfHour": 0~59  (시 안의 분, 시계 표시용)
//    - "Hour"        : 0~23
// =============================================================================

namespace KausDisplayClockTestHelpers
{
    /** 테스트 인스턴스 생성 헬퍼. */
    static UKausTestDisplayClockSubsystem* MakeClock(
        float DayDuration = 86400.0f, int32 InitialMinuteOfDay = 0)
    {
        UKausTestDisplayClockSubsystem* Clock =
            NewObject<UKausTestDisplayClockSubsystem>(GetTransientPackage());
        Clock->AddToRoot();
        Clock->TestSetup(DayDuration, InitialMinuteOfDay);
        return Clock;
    }

    static UKausDisplayClockMinuteOfDayListener* MakeMinuteOfDayListener(UKausDisplayClockSubsystem* Clock)
    {
        UKausDisplayClockMinuteOfDayListener* L =
            NewObject<UKausDisplayClockMinuteOfDayListener>(GetTransientPackage());
        L->AddToRoot();
        Clock->OnMinuteOfDayChanged.AddDynamic(L, &UKausDisplayClockMinuteOfDayListener::HandleMinuteOfDayChanged);
        return L;
    }

    static UKausDisplayClockHourListener* MakeHourListener(UKausDisplayClockSubsystem* Clock)
    {
        UKausDisplayClockHourListener* L =
            NewObject<UKausDisplayClockHourListener>(GetTransientPackage());
        L->AddToRoot();
        Clock->OnHourChanged.AddDynamic(L, &UKausDisplayClockHourListener::HandleHourChanged);
        return L;
    }
}

// =============================================================================
//  Test 01 — 기본 시간 진행
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_BasicAdvance,
    "Kaus.GameTime.DisplayClock.BasicAdvance",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_BasicAdvance::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    // 하루 = 1440초 → 1초당 1 가상분 (간단한 비율).
    UKausTestDisplayClockSubsystem* Clock = MakeClock(/*DayDuration=*/1440.0f, /*Initial=*/0);

    TestEqual(TEXT("초기 MinuteOfDay = 0"), Clock->GetCurrentMinuteOfDay(), 0);
    TestEqual(TEXT("초기 Hour = 0"), Clock->GetCurrentHour(), 0);
    TestEqual(TEXT("초기 MinuteOfHour = 0"), Clock->GetCurrentMinuteOfHour(), 0);

    Clock->TestAdvance(1.0f);  // 1초 = 1 가상분
    TestEqual(TEXT("1초 후 MinuteOfDay = 1"), Clock->GetCurrentMinuteOfDay(), 1);
    TestEqual(TEXT("Hour = 0, MinuteOfHour = 1"), Clock->GetCurrentMinuteOfHour(), 1);

    Clock->TestAdvance(60.0f);  // 60초 = 60 가상분
    TestEqual(TEXT("총 61초 후 MinuteOfDay = 61"), Clock->GetCurrentMinuteOfDay(), 61);
    TestEqual(TEXT("Hour = 1"), Clock->GetCurrentHour(), 1);
    TestEqual(TEXT("MinuteOfHour = 1 (61 % 60)"), Clock->GetCurrentMinuteOfHour(), 1);

    Clock->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 02 — sub-minute Tick에서는 OnMinuteOfDayChanged 발사 안 됨
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_SubMinuteNoBroadcast,
    "Kaus.GameTime.DisplayClock.SubMinuteNoBroadcast",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_SubMinuteNoBroadcast::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    // 하루 = 86400초 → 1초당 1/60 가상분 (실시간 동기).
    UKausTestDisplayClockSubsystem* Clock = MakeClock(/*DayDuration=*/86400.0f, /*Initial=*/0);
    UKausDisplayClockMinuteOfDayListener* L = MakeMinuteOfDayListener(Clock);

    Clock->TestAdvance(0.5f);
    TestEqual(TEXT("0.5초 진행 후 MinuteOfDay 변경 알림 없음"), L->ChangedCount, 0);
    TestEqual(TEXT("정수 MinuteOfDay 여전히 0"), Clock->GetCurrentMinuteOfDay(), 0);

    Clock->TestAdvance(30.0f);
    TestEqual(TEXT("총 30.5초 진행 후에도 변경 없음"), L->ChangedCount, 0);

    Clock->TestAdvance(30.0f);
    TestEqual(TEXT("60초 경계 통과 → 변경 1회"), L->ChangedCount, 1);
    TestEqual(TEXT("새 MinuteOfDay = 1"), L->LastNewMinuteOfDay, 1);
    TestEqual(TEXT("이전 MinuteOfDay = 0"), L->LastPreviousMinuteOfDay, 0);

    Clock->RemoveFromRoot();
    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 03 — 시 경계에서 OnHourChanged 추가 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_HourBoundary,
    "Kaus.GameTime.DisplayClock.HourBoundary",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_HourBoundary::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    // 1초당 1 가상분, 시작 = 0:59 (MinuteOfDay = 59)
    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 59);
    UKausDisplayClockMinuteOfDayListener* M = MakeMinuteOfDayListener(Clock);
    UKausDisplayClockHourListener* H = MakeHourListener(Clock);

    TestEqual(TEXT("시작 Hour = 0"), Clock->GetCurrentHour(), 0);
    TestEqual(TEXT("시작 MinuteOfHour = 59"), Clock->GetCurrentMinuteOfHour(), 59);

    Clock->TestAdvance(1.0f);  // MinuteOfDay 60 = Hour 1, MinuteOfHour 0

    TestEqual(TEXT("MinuteOfDay 변경 1회"), M->ChangedCount, 1);
    TestEqual(TEXT("새 MinuteOfDay = 60"), M->LastNewMinuteOfDay, 60);

    TestEqual(TEXT("Hour 변경 1회"), H->ChangedCount, 1);
    TestEqual(TEXT("새 Hour = 1"), H->LastNewHour, 1);
    TestEqual(TEXT("이전 Hour = 0"), H->LastPreviousHour, 0);

    TestEqual(TEXT("MinuteOfHour = 0 (시 경계 직후)"), Clock->GetCurrentMinuteOfHour(), 0);

    Clock->TestAdvance(1.0f);
    TestEqual(TEXT("MinuteOfDay 변경 누적 2회"), M->ChangedCount, 2);
    TestEqual(TEXT("Hour 변경은 여전히 1회"), H->ChangedCount, 1);
    TestEqual(TEXT("MinuteOfHour = 1 (61 % 60)"), Clock->GetCurrentMinuteOfHour(), 1);

    Clock->RemoveFromRoot();
    M->RemoveFromRoot();
    H->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 04 — 자정 wrap (1439 → 0)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_MidnightWrap,
    "Kaus.GameTime.DisplayClock.MidnightWrap",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_MidnightWrap::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 1439);  // 23:59
    UKausDisplayClockMinuteOfDayListener* M = MakeMinuteOfDayListener(Clock);
    UKausDisplayClockHourListener* H = MakeHourListener(Clock);

    Clock->TestAdvance(1.0f);  // 1440 → wrap → 0

    TestEqual(TEXT("wrap 후 MinuteOfDay = 0"), Clock->GetCurrentMinuteOfDay(), 0);
    TestEqual(TEXT("wrap 후 Hour = 0"), Clock->GetCurrentHour(), 0);
    TestEqual(TEXT("wrap 후 MinuteOfHour = 0"), Clock->GetCurrentMinuteOfHour(), 0);

    TestEqual(TEXT("MinuteOfDay 변경 1회"), M->ChangedCount, 1);
    TestEqual(TEXT("새 MinuteOfDay = 0"), M->LastNewMinuteOfDay, 0);
    TestEqual(TEXT("이전 MinuteOfDay = 1439"), M->LastPreviousMinuteOfDay, 1439);
    TestEqual(TEXT("Hour 변경 1회 (23 → 0)"), H->ChangedCount, 1);
    TestEqual(TEXT("새 Hour = 0"), H->LastNewHour, 0);
    TestEqual(TEXT("이전 Hour = 23"), H->LastPreviousHour, 23);

    Clock->RemoveFromRoot();
    M->RemoveFromRoot();
    H->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 05 — Pause / Resume
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_PauseResume,
    "Kaus.GameTime.DisplayClock.PauseResume",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_PauseResume::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 0);
    UKausDisplayClockMinuteOfDayListener* L = MakeMinuteOfDayListener(Clock);

    Clock->Pause();
    TestTrue(TEXT("Pause 후 IsPaused"), Clock->IsPaused());

    Clock->TestAdvance(60.0f);
    TestEqual(TEXT("Pause 중 시간 진행 안 함"), Clock->GetCurrentMinuteOfDay(), 0);
    TestEqual(TEXT("Pause 중 알림 없음"), L->ChangedCount, 0);

    Clock->Resume();
    TestFalse(TEXT("Resume 후 not paused"), Clock->IsPaused());

    Clock->TestAdvance(1.0f);
    TestEqual(TEXT("Resume 후 진행"), Clock->GetCurrentMinuteOfDay(), 1);
    TestEqual(TEXT("Resume 후 알림 1회"), L->ChangedCount, 1);

    Clock->RemoveFromRoot();
    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 06 — SetCurrentMinuteOfDay: 직접 설정 + 알림
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_SetCurrentMinuteOfDay,
    "Kaus.GameTime.DisplayClock.SetCurrentMinuteOfDay",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_SetCurrentMinuteOfDay::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 0);
    UKausDisplayClockMinuteOfDayListener* M = MakeMinuteOfDayListener(Clock);
    UKausDisplayClockHourListener* H = MakeHourListener(Clock);

    // 0:00 → 14:30 (870분)
    Clock->SetCurrentMinuteOfDay(870);

    TestEqual(TEXT("MinuteOfDay = 870"), Clock->GetCurrentMinuteOfDay(), 870);
    TestEqual(TEXT("Hour = 14"), Clock->GetCurrentHour(), 14);
    TestEqual(TEXT("MinuteOfHour = 30"), Clock->GetCurrentMinuteOfHour(), 30);
    TestEqual(TEXT("MinuteOfDay 변경 1회"), M->ChangedCount, 1);
    TestEqual(TEXT("새 MinuteOfDay = 870"), M->LastNewMinuteOfDay, 870);
    TestEqual(TEXT("Hour 변경 1회"), H->ChangedCount, 1);
    TestEqual(TEXT("새 Hour = 14"), H->LastNewHour, 14);

    // 같은 값 재설정 → 알림 없음
    Clock->SetCurrentMinuteOfDay(870);
    TestEqual(TEXT("같은 값 → 추가 알림 없음 (분)"), M->ChangedCount, 1);
    TestEqual(TEXT("같은 값 → 추가 알림 없음 (시)"), H->ChangedCount, 1);

    // 음수 클램프
    Clock->SetCurrentMinuteOfDay(-100);
    TestEqual(TEXT("음수 → 0 클램프"), Clock->GetCurrentMinuteOfDay(), 0);

    // 초과 클램프
    Clock->SetCurrentMinuteOfDay(2000);
    TestEqual(TEXT("초과 → 1439 클램프"), Clock->GetCurrentMinuteOfDay(), 1439);

    Clock->RemoveFromRoot();
    M->RemoveFromRoot();
    H->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 07 — 큰 DeltaTime: 한 번에 여러 분 점프
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_LargeDeltaJump,
    "Kaus.GameTime.DisplayClock.LargeDeltaJump",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_LargeDeltaJump::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 0);
    UKausDisplayClockMinuteOfDayListener* M = MakeMinuteOfDayListener(Clock);
    UKausDisplayClockHourListener* H = MakeHourListener(Clock);

    // 한 번에 125초 = 125 가상분 (2:05) 점프
    Clock->TestAdvance(125.0f);

    TestEqual(TEXT("MinuteOfDay = 125"), Clock->GetCurrentMinuteOfDay(), 125);
    TestEqual(TEXT("Hour = 2"), Clock->GetCurrentHour(), 2);
    TestEqual(TEXT("MinuteOfHour = 5 (125 % 60)"), Clock->GetCurrentMinuteOfHour(), 5);

    // 큰 점프도 1회 발사로 압축 (Display 용도라 중간 분 방문 불필요).
    TestEqual(TEXT("MinuteOfDay 변경 1회"), M->ChangedCount, 1);
    TestEqual(TEXT("이전 0"), M->LastPreviousMinuteOfDay, 0);
    TestEqual(TEXT("새 125"), M->LastNewMinuteOfDay, 125);
    TestEqual(TEXT("Hour 변경 1회"), H->ChangedCount, 1);
    TestEqual(TEXT("이전 0, 새 2"), H->LastPreviousHour, 0);
    TestEqual(TEXT("새 Hour = 2"), H->LastNewHour, 2);

    Clock->RemoveFromRoot();
    M->RemoveFromRoot();
    H->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 08 — DayDurationSeconds = 0이면 시계 정지
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_ZeroDurationStops,
    "Kaus.GameTime.DisplayClock.ZeroDurationStops",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_ZeroDurationStops::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(/*DayDuration=*/0.0f, /*Initial=*/100);
    UKausDisplayClockMinuteOfDayListener* L = MakeMinuteOfDayListener(Clock);

    Clock->TestAdvance(1000.0f);
    TestEqual(TEXT("DayDuration=0 → 시간 안 흐름"), Clock->GetCurrentMinuteOfDay(), 100);
    TestEqual(TEXT("알림 없음"), L->ChangedCount, 0);

    Clock->RemoveFromRoot();
    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 09 — SetCurrentTime: 시/분 분리 설정
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_SetCurrentTime,
    "Kaus.GameTime.DisplayClock.SetCurrentTime",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_SetCurrentTime::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 0);

    // 14시 30분
    Clock->SetCurrentTime(14, 30);
    TestEqual(TEXT("14:30 → MinuteOfDay 870"), Clock->GetCurrentMinuteOfDay(), 870);
    TestEqual(TEXT("Hour = 14"), Clock->GetCurrentHour(), 14);
    TestEqual(TEXT("MinuteOfHour = 30"), Clock->GetCurrentMinuteOfHour(), 30);

    // 0:00
    Clock->SetCurrentTime(0, 0);
    TestEqual(TEXT("0:00 → MinuteOfDay 0"), Clock->GetCurrentMinuteOfDay(), 0);
    TestEqual(TEXT("Hour = 0"), Clock->GetCurrentHour(), 0);
    TestEqual(TEXT("MinuteOfHour = 0"), Clock->GetCurrentMinuteOfHour(), 0);

    // 23:59 (마지막 분)
    Clock->SetCurrentTime(23, 59);
    TestEqual(TEXT("23:59 → MinuteOfDay 1439"), Clock->GetCurrentMinuteOfDay(), 1439);
    TestEqual(TEXT("Hour = 23"), Clock->GetCurrentHour(), 23);
    TestEqual(TEXT("MinuteOfHour = 59"), Clock->GetCurrentMinuteOfHour(), 59);

    // 클램프 (Hour=25→23, Minute=70→59)
    Clock->SetCurrentTime(25, 70);
    TestEqual(TEXT("Hour 클램프 + Minute 클램프 → 1439"),
        Clock->GetCurrentMinuteOfDay(), 1439);

    // 음수 → 0:00
    Clock->SetCurrentTime(-5, -10);
    TestEqual(TEXT("음수 → 0:00"), Clock->GetCurrentMinuteOfDay(), 0);

    Clock->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 10 — GetCurrentMinuteOfHour: 다양한 시각에서 검증
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDisplayClock_MinuteOfHourValues,
    "Kaus.GameTime.DisplayClock.MinuteOfHourValues",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDisplayClock_MinuteOfHourValues::RunTest(const FString&)
{
    using namespace KausDisplayClockTestHelpers;

    UKausTestDisplayClockSubsystem* Clock = MakeClock(1440.0f, 0);

    // 다양한 시각 검증
    struct FCase { int32 H; int32 M; };
    const FCase Cases[] = {
        {0, 0}, {0, 30}, {0, 59},
        {1, 0}, {1, 1},
        {12, 0}, {12, 30}, {12, 59},
        {23, 0}, {23, 30}, {23, 59},
    };

    for (const FCase& C : Cases)
    {
        Clock->SetCurrentTime(C.H, C.M);
        TestEqual(*FString::Printf(TEXT("Hour at %02d:%02d"), C.H, C.M),
            Clock->GetCurrentHour(), C.H);
        TestEqual(*FString::Printf(TEXT("MinuteOfHour at %02d:%02d"), C.H, C.M),
            Clock->GetCurrentMinuteOfHour(), C.M);
        TestEqual(*FString::Printf(TEXT("MinuteOfDay at %02d:%02d"), C.H, C.M),
            Clock->GetCurrentMinuteOfDay(), C.H * 60 + C.M);
    }

    Clock->RemoveFromRoot();
    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
