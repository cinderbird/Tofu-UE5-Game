// Copyright Project Kaus. All Rights Reserved.

#if WITH_DEV_AUTOMATION_TESTS

#include "Calendar/KausCalendarSubsystem.h"
#include "Calendar/KausCalendarSchedule.h"
#include "Calendar/KausGregorianCalendar.h"
#include "Calendar/Tests/KausCalendarTestListeners.h"
#include "Tags/KausCalendarTags.h"
#include "Engine/GameInstance.h"
#include "Misc/AutomationTest.h"

/**
 * UKausCalendarSubsystem 통합 테스트.
 *
 * GameInstanceSubsystem은 ClassWithin = UGameInstance라
 * Outer가 반드시 UGameInstance여야 한다(아니면 ensure).
 * 그러나 UGameInstance::Init / InitializeStandalone은 WorldContext를 만들어
 * Runtime/PIE 컨텍스트와 충돌해 크래시한다.
 *
 * 해결: 빈 GameInstance를 NewObject로 만들고 Init은 부르지 않는다.
 * 그 GameInstance를 Outer로 Subsystem을 직접 NewObject. ClassWithin 통과 + 격리 보장.
 * (FTestContext 참고)
 *
 * 실행:
 *   Automation RunTests Kaus.Calendar.Subsystem
 */

namespace KausCalendarTests
{
    /**
     * 테스트용 Schedule 생성 헬퍼.
     * 30일짜리 데모: 2024-04-01 ~ 2024-04-30, 시작 = 월요일.
     */
    static UKausCalendarSchedule* MakeDemoSchedule(UObject* Outer)
    {
        UKausCalendarSchedule* Schedule = NewObject<UKausCalendarSchedule>(Outer);
        Schedule->CalendarSystem = NewObject<UKausGregorianCalendar>(Schedule);
        Schedule->StartDate = FKausGameDate(2024, 4, 1);
        Schedule->EndDate = FKausGameDate(2024, 4, 30);
        Schedule->StartWeekdayIndex = 0;  // 월요일
        Schedule->WeekendWeekdayIndices = { 5, 6 };  // 토, 일
        return Schedule;
    }

    /**
     * 테스트 컨텍스트 — Subsystem을 격리된 환경에서 직접 생성/관리.
     *
     * 설계 메모:
     *   - UGameInstanceSubsystem은 ClassWithin = UGameInstance로 선언되어 있어
     *     NewObject 시 Outer가 UGameInstance여야 한다. 아니면 ensure 발동:
     *     "Object ... with ClassWithin of /Script/Engine.GameInstance was created in invalid Outer"
     *
     *   - 그러나 UGameInstance::InitializeStandalone()은 WorldContext를 생성해
     *     PIE/Runtime 컨텍스트와 충돌하며 크래시한다.
     *
     *   - 해결: GameInstance를 NewObject로 만들되 Init / InitializeStandalone을
     *     호출하지 않는다. 빈 컨테이너 역할만 시킨다.
     *     - ClassWithin 검증: 통과 (Outer = GameInstance)
     *     - WorldContext 충돌: 없음 (Init 안 부름)
     *     - Subsystem 자동 생성: 안 됨 → 우리가 직접 NewObject로 만든다
     *
     *   - GC 방지: GameInstance와 Subsystem 모두 AddToRoot.
     */
    struct FTestContext
    {
        TObjectPtr<UGameInstance> GameInstance = nullptr;
        TObjectPtr<UKausCalendarSubsystem> Subsystem = nullptr;

        FTestContext()
        {
            // 1) GameInstance를 빈 컨테이너로 생성 (Init 호출 없음)
            GameInstance = NewObject<UGameInstance>();
            GameInstance->AddToRoot();

            // 2) GameInstance를 Outer로 Subsystem 생성 — ClassWithin 검증 통과
            Subsystem = NewObject<UKausCalendarSubsystem>(GameInstance);
            Subsystem->AddToRoot();
        }

        ~FTestContext()
        {
            if (Subsystem)
            {
                Subsystem->RemoveFromRoot();
                Subsystem = nullptr;
            }
            if (GameInstance)
            {
                GameInstance->RemoveFromRoot();
                GameInstance = nullptr;
            }
        }

        UKausCalendarSubsystem* Get() const { return Subsystem; }

        /**
         * Schedule, Listener 등 테스트 보조 객체의 Outer.
         * GameInstance(이미 rooted)를 반환해 GC 안전.
         */
        UObject* GetOuter() const
        {
            return GameInstance ? static_cast<UObject*>(GameInstance) : GetTransientPackage();
        }
    };
}

// =============================================================================
//  초기화 / 빌드
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_InitializeTest,
    "Kaus.Calendar.Subsystem.Initialize",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_InitializeTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();

    if (!TestNotNull(TEXT("Subsystem 생성 성공"), Sub)) { return false; }

    TestFalse(TEXT("초기 상태 미초기화"), Sub->IsInitialized());

    // 1. null Schedule
    TestFalse(TEXT("null Schedule 거부"), Sub->InitializeWithSchedule(nullptr));
    TestFalse(TEXT("여전히 미초기화"), Sub->IsInitialized());

    // 2. 정상 Schedule
    UKausCalendarSchedule* Schedule = KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter());
    TestTrue(TEXT("정상 Schedule 수락"), Sub->InitializeWithSchedule(Schedule));
    TestTrue(TEXT("초기화 완료"), Sub->IsInitialized());
    TestEqual(TEXT("총 30일"), Sub->GetTotalDayCount(), 30);
    TestEqual(TEXT("StartDate"), Sub->GetStartDate(), FKausGameDate(2024, 4, 1));
    TestEqual(TEXT("EndDate"), Sub->GetEndDate(), FKausGameDate(2024, 4, 30));

    // 3. 잘못된 Schedule (EndDate < StartDate)
    UKausCalendarSchedule* BadSchedule = KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter());
    BadSchedule->EndDate = FKausGameDate(2024, 3, 1);  // Start보다 이르게
    TestFalse(TEXT("Reverse range 거부"), Sub->InitializeWithSchedule(BadSchedule));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_RangeQueryTest,
    "Kaus.Calendar.Subsystem.RangeQuery",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_RangeQueryTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    // IsDateInRange
    TestTrue (TEXT("Start 포함"), Sub->IsDateInRange(FKausGameDate(2024, 4, 1)));
    TestTrue (TEXT("End 포함"),   Sub->IsDateInRange(FKausGameDate(2024, 4, 30)));
    TestTrue (TEXT("중간 포함"),  Sub->IsDateInRange(FKausGameDate(2024, 4, 15)));
    TestFalse(TEXT("Start 이전"), Sub->IsDateInRange(FKausGameDate(2024, 3, 31)));
    TestFalse(TEXT("End 이후"),   Sub->IsDateInRange(FKausGameDate(2024, 5, 1)));

    // 1-based DayIndex
    TestEqual(TEXT("StartDate = Index 1"),
        Sub->DateToIndex(FKausGameDate(2024, 4, 1)), 1);
    TestEqual(TEXT("EndDate = Index 30"),
        Sub->DateToIndex(FKausGameDate(2024, 4, 30)), 30);
    TestEqual(TEXT("범위 밖 = INDEX_NONE"),
        Sub->DateToIndex(FKausGameDate(2024, 5, 1)), INDEX_NONE);

    // IndexToDate
    TestEqual(TEXT("Index 1 = StartDate"),
        Sub->IndexToDate(1), FKausGameDate(2024, 4, 1));
    TestEqual(TEXT("Index 30 = EndDate"),
        Sub->IndexToDate(30), FKausGameDate(2024, 4, 30));

    // 라운드트립
    for (int32 i = 1; i <= 30; ++i)
    {
        const FKausGameDate D = Sub->IndexToDate(i);
        TestEqual(FString::Printf(TEXT("Roundtrip Index %d"), i),
            Sub->DateToIndex(D), i);
    }

    return true;
}

// =============================================================================
//  메타 자동 채움
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_AutoFillTest,
    "Kaus.Calendar.Subsystem.AutoFill",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_AutoFillTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    // 2024-04-01 (월요일) → Weekday 태그
    {
        FKausDayMeta Meta;
        TestTrue(TEXT("4/1 메타 조회 성공"),
            Sub->TryGetDayMeta(FKausGameDate(2024, 4, 1), Meta));
        TestEqual(TEXT("4/1 요일 = 0(월)"), Meta.WeekdayIndex, 0);
        TestTrue (TEXT("4/1 평일 태그"), Meta.IsWeekday());
        TestFalse(TEXT("4/1 주말 태그 없음"), Meta.IsWeekend());
    }

    // 2024-04-06 (토요일) → Weekend 태그
    {
        FKausDayMeta Meta;
        TestTrue(TEXT("4/6 메타 조회 성공"), Sub->TryGetDayMeta(FKausGameDate(2024, 4, 6), Meta));
        TestEqual(TEXT("4/6 요일 = 5(토)"), Meta.WeekdayIndex, 5);
        TestTrue (TEXT("4/6 주말 태그"), Meta.IsWeekend());
        TestFalse(TEXT("4/6 평일 태그 없음"), Meta.IsWeekday());
    }

    // 2024-04-07 (일요일)
    {
        FKausDayMeta Meta;
        TestTrue(TEXT("4/7 메타 조회 성공"), Sub->TryGetDayMeta(FKausGameDate(2024, 4, 7), Meta));
        TestEqual(TEXT("4/7 요일 = 6(일)"), Meta.WeekdayIndex, 6);
        TestTrue(TEXT("4/7 주말 태그"), Meta.IsWeekend());
    }

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_RecurringHolidayTest,
    "Kaus.Calendar.Subsystem.RecurringHoliday",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_RecurringHolidayTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();

    UKausCalendarSchedule* Schedule = KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter());

    // 4월 5일을 매년 반복 휴일로 등록
    FKausRecurringHoliday H;
    H.Month = 4;
    H.Day = 5;
    H.Name = FText::FromString(TEXT("테스트 휴일"));
    Schedule->RecurringHolidays.Add(H);

    Sub->InitializeWithSchedule(Schedule);

    FKausDayMeta Meta;
    TestTrue(TEXT("4/5 메타 조회 성공"), Sub->TryGetDayMeta(FKausGameDate(2024, 4, 5), Meta));
    TestTrue(TEXT("4/5 휴일 태그"), Meta.IsHoliday());

    // 다른 날엔 휴일 태그 없음
    TestTrue(TEXT("4/6 메타 조회 성공"), Sub->TryGetDayMeta(FKausGameDate(2024, 4, 6), Meta));
    TestFalse(TEXT("4/6 휴일 태그 없음"), Meta.IsHoliday());

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_SeedMergeTest,
    "Kaus.Calendar.Subsystem.SeedMerge",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_SeedMergeTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();

    UKausCalendarSchedule* Schedule = KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter());

    // 4월 15일에 시드 추가
    FKausDaySeed Seed;
    Seed.Date = FKausGameDate(2024, 4, 15);
    Seed.AdditionalTags.AddTag(KausCalendarTags::Calendar_Day_Story);
    Seed.DisplayNameOverride = FText::FromString(TEXT("스토리 분기점"));
    Schedule->SeedDayMetas.Add(Seed);

    Sub->InitializeWithSchedule(Schedule);

    FKausDayMeta Meta;
    TestTrue(TEXT("4/15 메타 조회 성공"), Sub->TryGetDayMeta(FKausGameDate(2024, 4, 15), Meta));
    TestTrue (TEXT("자동 평일 태그 유지"), Meta.IsWeekday());
    TestTrue (TEXT("Story 태그 추가됨"),
        Meta.HasTag(KausCalendarTags::Calendar_Day_Story));
    TestEqual(TEXT("DisplayName 적용"),
        Meta.DisplayName.ToString(), FString(TEXT("스토리 분기점")));

    return true;
}

// =============================================================================
//  런타임 변경
// =============================================================================

/**
 * OnDayMetaChanged 델리게이트 호출을 기록하는 리스너는
 * KausCalendarTestListeners.h의 UKausCalendarMetaListener를 사용.
 */

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_RuntimeAddTagTest,
    "Kaus.Calendar.Subsystem.Runtime.AddTag",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_RuntimeAddTagTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    UKausCalendarMetaListener* Listener = NewObject<UKausCalendarMetaListener>(Ctx.GetOuter());
    Sub->OnDayMetaChanged.AddDynamic(Listener, &UKausCalendarMetaListener::HandleChanged);

    const FKausGameDate Target(2024, 4, 10);

    // 추가
    TestTrue(TEXT("AddRuntimeTag 성공"),
        Sub->AddRuntimeTag(Target, KausCalendarTags::Calendar_Day_Special));
    TestEqual(TEXT("델리게이트 1회 발행"), Listener->ChangedCount, 1);
    TestEqual(TEXT("발행 날짜"), Listener->LastChangedDate, Target);

    // 조회 시 적용 확인
    FKausDayMeta Meta;
    Sub->TryGetDayMeta(Target, Meta);
    TestTrue(TEXT("Special 태그 적용됨"), Meta.IsSpecial());
    TestTrue(TEXT("자동 평일 태그도 그대로"), Meta.IsWeekday());

    // 범위 밖
    TestFalse(TEXT("범위 밖 거부"),
        Sub->AddRuntimeTag(FKausGameDate(2025, 1, 1),
            KausCalendarTags::Calendar_Day_Special));
    TestEqual(TEXT("델리게이트 추가 호출 없음"), Listener->ChangedCount, 1);

    // 무효 태그
    TestFalse(TEXT("무효 태그 거부"),
        Sub->AddRuntimeTag(Target, FGameplayTag()));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_RuntimeRemoveTagTest,
    "Kaus.Calendar.Subsystem.Runtime.RemoveTag",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_RuntimeRemoveTagTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    const FKausGameDate Sat(2024, 4, 6);  // 토요일 = 자동 Weekend

    // 시드/자동 부착 태그도 제거 가능한가
    TestTrue(TEXT("Weekend 제거 성공"),
        Sub->RemoveRuntimeTag(Sat, KausCalendarTags::Calendar_Day_Weekend));

    FKausDayMeta Meta;
    Sub->TryGetDayMeta(Sat, Meta);
    TestFalse(TEXT("Weekend 태그 제거됨"), Meta.IsWeekend());

    // 다시 추가
    TestTrue(TEXT("Weekend 재추가"),
        Sub->AddRuntimeTag(Sat, KausCalendarTags::Calendar_Day_Weekend));

    Sub->TryGetDayMeta(Sat, Meta);
    TestTrue(TEXT("Weekend 태그 복원"), Meta.IsWeekend());

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_AddRemoveConflictTest,
    "Kaus.Calendar.Subsystem.Runtime.AddRemoveConflict",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_AddRemoveConflictTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    const FKausGameDate Mon(2024, 4, 1);  // 월요일 = 평일

    // Weekday를 제거 → Weekday 다시 추가 (라운드트립)
    Sub->RemoveRuntimeTag(Mon, KausCalendarTags::Calendar_Day_Weekday);
    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(Mon, Meta);
        TestFalse(TEXT("Weekday 제거 후 없음"), Meta.IsWeekday());
    }

    Sub->AddRuntimeTag(Mon, KausCalendarTags::Calendar_Day_Weekday);
    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(Mon, Meta);
        TestTrue(TEXT("Weekday 재추가 후 다시 있음"), Meta.IsWeekday());
    }

    // 모든 오버라이드 정리
    Sub->ClearRuntimeOverrides(Mon);
    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(Mon, Meta);
        TestTrue(TEXT("Clear 후 시드 상태"), Meta.IsWeekday());
    }

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_DisplayNameOverrideTest,
    "Kaus.Calendar.Subsystem.Runtime.DisplayNameOverride",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_DisplayNameOverrideTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    const FKausGameDate Date(2024, 4, 10);

    Sub->SetRuntimeDisplayName(Date, FText::FromString(TEXT("약속 있음")));

    FKausDayMeta Meta;
    Sub->TryGetDayMeta(Date, Meta);
    TestEqual(TEXT("DisplayName 적용"),
        Meta.DisplayName.ToString(), FString(TEXT("약속 있음")));

    // 빈 텍스트로 해제
    Sub->SetRuntimeDisplayName(Date, FText::GetEmpty());
    Sub->TryGetDayMeta(Date, Meta);
    TestTrue(TEXT("DisplayName 해제 후 빈 텍스트"), Meta.DisplayName.IsEmpty());

    return true;
}

// =============================================================================
//  검색
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_FindByTagTest,
    "Kaus.Calendar.Subsystem.FindByTag",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_FindByTagTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    // 4월 10일과 4월 20일에 Story 태그 추가
    Sub->AddRuntimeTag(FKausGameDate(2024, 4, 10), KausCalendarTags::Calendar_Day_Story);
    Sub->AddRuntimeTag(FKausGameDate(2024, 4, 20), KausCalendarTags::Calendar_Day_Story);

    // FindAll
    {
        const TArray<FKausGameDate> Found = Sub->FindAllDaysWithTag(
            KausCalendarTags::Calendar_Day_Story);
        TestEqual(TEXT("Story 날짜 2개"), Found.Num(), 2);
        TestTrue(TEXT("4/10 포함"), Found.Contains(FKausGameDate(2024, 4, 10)));
        TestTrue(TEXT("4/20 포함"), Found.Contains(FKausGameDate(2024, 4, 20)));
    }

    // FindNext
    {
        FKausGameDate Out;
        TestTrue(TEXT("4/1부터 다음 Story 찾음"),
            Sub->FindNextDayWithTag(FKausGameDate(2024, 4, 1),
                KausCalendarTags::Calendar_Day_Story, Out));
        TestEqual(TEXT("첫 발견 = 4/10"), Out, FKausGameDate(2024, 4, 10));

        TestTrue(TEXT("4/10 다음 Story (자기 자신 제외)"),
            Sub->FindNextDayWithTag(FKausGameDate(2024, 4, 10),
                KausCalendarTags::Calendar_Day_Story, Out));
        TestEqual(TEXT("두 번째 발견 = 4/20"), Out, FKausGameDate(2024, 4, 20));

        TestFalse(TEXT("4/20 이후 Story 없음"),
            Sub->FindNextDayWithTag(FKausGameDate(2024, 4, 20),
                KausCalendarTags::Calendar_Day_Story, Out));
    }

    // 자동 부착 태그도 검색 가능 (월~금 평일 다수)
    {
        const TArray<FKausGameDate> Weekdays =
            Sub->FindAllDaysWithTag(KausCalendarTags::Calendar_Day_Weekday);
        TestTrue(TEXT("평일 날짜가 0개 아님"), Weekdays.Num() > 0);
        TestTrue(TEXT("4월 1일(월) 포함"),
            Weekdays.Contains(FKausGameDate(2024, 4, 1)));
        TestFalse(TEXT("4월 6일(토) 미포함"),
            Weekdays.Contains(FKausGameDate(2024, 4, 6)));
    }

    return true;
}

// =============================================================================
//  전체 스냅샷
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_GetAllDayMetasTest,
    "Kaus.Calendar.Subsystem.GetAllDayMetas",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_GetAllDayMetasTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    Sub->AddRuntimeTag(FKausGameDate(2024, 4, 15), KausCalendarTags::Calendar_Day_Story);

    const TArray<FKausDayMeta> All = Sub->GetAllDayMetas();
    TestEqual(TEXT("30일 모두"), All.Num(), 30);
    TestEqual(TEXT("첫 항목 = StartDate"),
        All[0].Date, FKausGameDate(2024, 4, 1));
    TestEqual(TEXT("마지막 항목 = EndDate"),
        All.Last().Date, FKausGameDate(2024, 4, 30));

    // 4/15 항목에 Story 적용 확인 (Index 14)
    TestTrue(TEXT("4/15 Story 태그 반영"),
        All[14].HasTag(KausCalendarTags::Calendar_Day_Story));

    return true;
}

// =============================================================================
//  영속화 (Capture / Restore)
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_CaptureRestoreTest,
    "Kaus.Calendar.Subsystem.CaptureRestore",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_CaptureRestoreTest::RunTest(const FString& Parameters)
{
    // 주의: SoftObjectPath를 통한 Restore는 패키징된 자산이 필요하므로
    // 본 테스트는 RuntimeOverrides의 in-memory 라운드트립만 검증.
    // (Schedule 자체의 SoftPath 복원은 PIE 통합 테스트에서 다룬다.)

    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));

    Sub->AddRuntimeTag(FKausGameDate(2024, 4, 10), KausCalendarTags::Calendar_Day_Special);
    Sub->AddRuntimeTag(FKausGameDate(2024, 4, 20), KausCalendarTags::Calendar_Day_Story);
    Sub->SetRuntimeDisplayName(FKausGameDate(2024, 4, 10),
        FText::FromString(TEXT("Captured Day")));

    const FKausCalendarSaveData Save = Sub->CaptureSaveData();
    TestEqual(TEXT("Override 2개 캡처"), Save.RuntimeOverrides.Num(), 2);

    // 모두 클리어한 뒤 직접 RuntimeOverrides 복원 시뮬레이션
    Sub->ClearAllRuntimeOverrides();
    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(FKausGameDate(2024, 4, 10), Meta);
        TestFalse(TEXT("Clear 후 Special 없음"), Meta.IsSpecial());
    }

    // RestoreFromSaveData는 SoftPath를 통한 Schedule 로드를 시도하므로
    // in-memory Schedule인 본 테스트에서는 직접 호출 불가.
    // 대신 RuntimeOverrides만 직접 재적용해 동작을 검증한다.
    for (const TPair<FKausGameDate, FKausDayRuntimeOverride>& Pair : Save.RuntimeOverrides)
    {
        for (const FGameplayTag& Tag : Pair.Value.AdditionalTags)
        {
            Sub->AddRuntimeTag(Pair.Key, Tag);
        }
        if (Pair.Value.bHasDisplayNameOverride)
        {
            Sub->SetRuntimeDisplayName(Pair.Key, Pair.Value.DisplayNameOverride);
        }
    }

    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(FKausGameDate(2024, 4, 10), Meta);
        TestTrue(TEXT("Restore 후 Special"), Meta.IsSpecial());
        TestEqual(TEXT("Restore 후 DisplayName"),
            Meta.DisplayName.ToString(), FString(TEXT("Captured Day")));
    }
    {
        FKausDayMeta Meta;
        Sub->TryGetDayMeta(FKausGameDate(2024, 4, 20), Meta);
        TestTrue(TEXT("Restore 후 Story"),
            Meta.HasTag(KausCalendarTags::Calendar_Day_Story));
    }

    return true;
}

// =============================================================================
//  Rebuilt 델리게이트
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausCalendarSubsystem_RebuiltDelegateTest,
    "Kaus.Calendar.Subsystem.RebuiltDelegate",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausCalendarSubsystem_RebuiltDelegateTest::RunTest(const FString& Parameters)
{
    KausCalendarTests::FTestContext Ctx;
    UKausCalendarSubsystem* Sub = Ctx.Get();

    UKausCalendarRebuiltListener* Listener = NewObject<UKausCalendarRebuiltListener>(Ctx.GetOuter());
    Sub->OnCalendarRebuilt.AddDynamic(Listener, &UKausCalendarRebuiltListener::HandleRebuilt);

    TestEqual(TEXT("초기 호출 0"), Listener->RebuiltCount, 0);

    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));
    TestEqual(TEXT("Init 1회 후 호출 1"), Listener->RebuiltCount, 1);

    // 재초기화
    Sub->InitializeWithSchedule(KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter()));
    TestEqual(TEXT("재초기화 시 호출 2"), Listener->RebuiltCount, 2);

    // 실패한 초기화는 호출 안 됨
    UKausCalendarSchedule* Bad = KausCalendarTests::MakeDemoSchedule(Ctx.GetOuter());
    Bad->EndDate = FKausGameDate(2024, 3, 1);
    Sub->InitializeWithSchedule(Bad);
    TestEqual(TEXT("실패 초기화 무영향"), Listener->RebuiltCount, 2);

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
