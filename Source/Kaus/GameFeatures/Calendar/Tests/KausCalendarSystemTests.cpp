// Copyright Project Kaus. All Rights Reserved.

#if WITH_DEV_AUTOMATION_TESTS

#include "Calendar/KausCalendarSystem.h"
#include "Calendar/KausGregorianCalendar.h"
#include "Calendar/KausPlanetaryCalendar.h"
#include "Misc/AutomationTest.h"

/**
 * UKausCalendarSystem 구현체 단위 테스트.
 *
 * 실행:
 *   Automation RunTests Kaus.Calendar.System
 */

// =============================================================================
//  Gregorian
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGregorianValidationTest,
    "Kaus.Calendar.System.Gregorian.Validation",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FGregorianValidationTest::RunTest(const FString& Parameters)
{
    UKausGregorianCalendar* Cal = NewObject<UKausGregorianCalendar>();

    // 유효
    TestTrue(TEXT("정상 날짜"),  Cal->IsValidDate(FKausGameDate(2024, 4, 15)));
    TestTrue(TEXT("월말 31일"),  Cal->IsValidDate(FKausGameDate(2024, 1, 31)));
    TestTrue(TEXT("윤년 2/29"),  Cal->IsValidDate(FKausGameDate(2024, 2, 29)));

    // 무효
    TestFalse(TEXT("Year 0"),     Cal->IsValidDate(FKausGameDate(0, 1, 1)));
    TestFalse(TEXT("Month 13"),   Cal->IsValidDate(FKausGameDate(2024, 13, 1)));
    TestFalse(TEXT("Day 32"),     Cal->IsValidDate(FKausGameDate(2024, 1, 32)));
    TestFalse(TEXT("4월 31일"),   Cal->IsValidDate(FKausGameDate(2024, 4, 31)));
    TestFalse(TEXT("평년 2/29"),  Cal->IsValidDate(FKausGameDate(2023, 2, 29)));
    TestFalse(TEXT("100년 윤년 아님"), Cal->IsValidDate(FKausGameDate(1900, 2, 29)));
    TestTrue (TEXT("400년 윤년"),       Cal->IsValidDate(FKausGameDate(2000, 2, 29)));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGregorianDaysBetweenTest,
    "Kaus.Calendar.System.Gregorian.DaysBetween",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FGregorianDaysBetweenTest::RunTest(const FString& Parameters)
{
    UKausGregorianCalendar* Cal = NewObject<UKausGregorianCalendar>();

    TestEqual(TEXT("같은 날 = 0"),
        Cal->DaysBetween(FKausGameDate(2024, 4, 1), FKausGameDate(2024, 4, 1)), 0);

    TestEqual(TEXT("다음 날 = 1"),
        Cal->DaysBetween(FKausGameDate(2024, 4, 1), FKausGameDate(2024, 4, 2)), 1);

    TestEqual(TEXT("4월 1 → 4월 30 = 29"),
        Cal->DaysBetween(FKausGameDate(2024, 4, 1), FKausGameDate(2024, 4, 30)), 29);

    TestEqual(TEXT("4월 1 → 5월 1 = 30"),
        Cal->DaysBetween(FKausGameDate(2024, 4, 1), FKausGameDate(2024, 5, 1)), 30);

    TestEqual(TEXT("음수 (B < A)"),
        Cal->DaysBetween(FKausGameDate(2024, 4, 5), FKausGameDate(2024, 4, 1)), -4);

    // 윤년 포함 1년
    TestEqual(TEXT("2024 윤년 1년 = 366일"),
        Cal->DaysBetween(FKausGameDate(2024, 1, 1), FKausGameDate(2025, 1, 1)), 366);

    TestEqual(TEXT("2023 평년 1년 = 365일"),
        Cal->DaysBetween(FKausGameDate(2023, 1, 1), FKausGameDate(2024, 1, 1)), 365);

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGregorianAddDaysTest,
    "Kaus.Calendar.System.Gregorian.AddDays",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FGregorianAddDaysTest::RunTest(const FString& Parameters)
{
    UKausGregorianCalendar* Cal = NewObject<UKausGregorianCalendar>();

    TestEqual(TEXT("AddDays(0) — 변화 없음"),
        Cal->AddDays(FKausGameDate(2024, 4, 1), 0),
        FKausGameDate(2024, 4, 1));

    TestEqual(TEXT("AddDays(1) — 다음 날"),
        Cal->AddDays(FKausGameDate(2024, 4, 1), 1),
        FKausGameDate(2024, 4, 2));

    TestEqual(TEXT("월 경계 넘기"),
        Cal->AddDays(FKausGameDate(2024, 4, 30), 1),
        FKausGameDate(2024, 5, 1));

    TestEqual(TEXT("연 경계 넘기"),
        Cal->AddDays(FKausGameDate(2024, 12, 31), 1),
        FKausGameDate(2025, 1, 1));

    TestEqual(TEXT("음수 — 어제"),
        Cal->AddDays(FKausGameDate(2024, 4, 1), -1),
        FKausGameDate(2024, 3, 31));

    TestEqual(TEXT("윤년 통과"),
        Cal->AddDays(FKausGameDate(2024, 2, 28), 1),
        FKausGameDate(2024, 2, 29));

    TestEqual(TEXT("윤년 → 3월"),
        Cal->AddDays(FKausGameDate(2024, 2, 29), 1),
        FKausGameDate(2024, 3, 1));

    // AddDays + DaysBetween 라운드트립
    const FKausGameDate Base(2024, 4, 1);
    for (int32 N : {1, 7, 30, 365, -10, -100})
    {
        const FKausGameDate Forward = Cal->AddDays(Base, N);
        const int32 Back = Cal->DaysBetween(Base, Forward);
        TestEqual(FString::Printf(TEXT("Roundtrip N=%d"), N), Back, N);
    }

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGregorianWeekdayTest,
    "Kaus.Calendar.System.Gregorian.Weekday",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FGregorianWeekdayTest::RunTest(const FString& Parameters)
{
    UKausGregorianCalendar* Cal = NewObject<UKausGregorianCalendar>();

    TestEqual(TEXT("DaysPerWeek = 7"), Cal->GetDaysPerWeek(), 7);

    // Reference: 2024-4-1 = 월요일(0)
    const FKausGameDate Ref(2024, 4, 1);
    const int32 RefIdx = 0;

    TestEqual(TEXT("기준일 자체"),
        Cal->GetWeekdayIndex(Ref, Ref, RefIdx), 0);

    TestEqual(TEXT("+1일 = 화"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 4, 2), Ref, RefIdx), 1);

    TestEqual(TEXT("+5일 = 토"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 4, 6), Ref, RefIdx), 5);

    TestEqual(TEXT("+6일 = 일"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 4, 7), Ref, RefIdx), 6);

    TestEqual(TEXT("+7일 = 다시 월"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 4, 8), Ref, RefIdx), 0);

    // 음수 — 기준일 이전
    TestEqual(TEXT("-1일 = 일"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 3, 31), Ref, RefIdx), 6);

    TestEqual(TEXT("-7일 = 다시 월"),
        Cal->GetWeekdayIndex(FKausGameDate(2024, 3, 25), Ref, RefIdx), 0);

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FGregorianWeekdayDisplayNameTest,
    "Kaus.Calendar.System.Gregorian.WeekdayDisplayName",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FGregorianWeekdayDisplayNameTest::RunTest(const FString& Parameters)
{
    UKausGregorianCalendar* Cal = NewObject<UKausGregorianCalendar>();

    // 생성자에서 7개 요일이 채워져야 함
    for (int32 i = 0; i < 7; ++i)
    {
        const FText Name = Cal->GetWeekdayDisplayName(i);
        TestFalse(FString::Printf(TEXT("요일 %d 이름 비어있음 안 됨"), i),
            Name.IsEmpty());
    }

    // 범위 밖
    TestTrue(TEXT("음수 인덱스 빈 텍스트"),
        Cal->GetWeekdayDisplayName(-1).IsEmpty());
    TestTrue(TEXT("초과 인덱스 빈 텍스트"),
        Cal->GetWeekdayDisplayName(7).IsEmpty());

    return true;
}

// =============================================================================
//  Planetary
// =============================================================================

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlanetaryDefaultsTest,
    "Kaus.Calendar.System.Planetary.Defaults",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPlanetaryDefaultsTest::RunTest(const FString& Parameters)
{
    // 기본값: 10개월/40일/8요일
    UKausPlanetaryCalendar* Cal = NewObject<UKausPlanetaryCalendar>();

    TestEqual(TEXT("DaysPerWeek = 8"), Cal->GetDaysPerWeek(), 8);

    TestTrue(TEXT("정상 날짜"),  Cal->IsValidDate(FKausGameDate(1, 1, 1)));
    TestTrue(TEXT("Month 10 OK"), Cal->IsValidDate(FKausGameDate(1, 10, 1)));
    TestFalse(TEXT("Month 11 X"), Cal->IsValidDate(FKausGameDate(1, 11, 1)));
    TestTrue(TEXT("Day 40 OK"),   Cal->IsValidDate(FKausGameDate(1, 1, 40)));
    TestFalse(TEXT("Day 41 X"),   Cal->IsValidDate(FKausGameDate(1, 1, 41)));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlanetaryArithmeticTest,
    "Kaus.Calendar.System.Planetary.Arithmetic",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPlanetaryArithmeticTest::RunTest(const FString& Parameters)
{
    // 10개월 × 40일 = 1년 400일, 1주 8일
    UKausPlanetaryCalendar* Cal = NewObject<UKausPlanetaryCalendar>();

    // 같은 날
    TestEqual(TEXT("같은 날 = 0"),
        Cal->DaysBetween(FKausGameDate(1, 1, 1), FKausGameDate(1, 1, 1)), 0);

    // 월 경계 (40일)
    TestEqual(TEXT("Month 1→2 = 40일"),
        Cal->DaysBetween(FKausGameDate(1, 1, 1), FKausGameDate(1, 2, 1)), 40);

    // 연 경계 (400일)
    TestEqual(TEXT("Year 1→2 = 400일"),
        Cal->DaysBetween(FKausGameDate(1, 1, 1), FKausGameDate(2, 1, 1)), 400);

    // AddDays
    TestEqual(TEXT("월 끝에서 +1 → 다음 달 1일"),
        Cal->AddDays(FKausGameDate(1, 1, 40), 1), FKausGameDate(1, 2, 1));

    TestEqual(TEXT("연 끝에서 +1 → 다음 연도"),
        Cal->AddDays(FKausGameDate(1, 10, 40), 1), FKausGameDate(2, 1, 1));

    // 라운드트립
    // 주의: 행성력은 Year >= 1만 표현 가능하므로(FKausGameDate::ClampMin),
    // Base = (1,1,1)에서 음수 가산은 invalid 영역으로 들어가 0 반환됨.
    // 음수 케이스는 충분히 뒤쪽 Base에서 검증.
    {
        const FKausGameDate Base(1, 1, 1);
        for (int32 N : {1, 40, 400, 800})
        {
            const FKausGameDate Forward = Cal->AddDays(Base, N);
            const int32 Back = Cal->DaysBetween(Base, Forward);
            TestEqual(FString::Printf(TEXT("행성력 Roundtrip(앞쪽 Base) N=%d"), N), Back, N);
        }
    }
    {
        // (3, 5, 20) — 음수 가산 후에도 Year >= 1을 유지할 수 있는 충분한 여유
        const FKausGameDate Base(3, 5, 20);
        for (int32 N : {-10, -100, -800})
        {
            const FKausGameDate Forward = Cal->AddDays(Base, N);
            const int32 Back = Cal->DaysBetween(Base, Forward);
            TestEqual(FString::Printf(TEXT("행성력 Roundtrip(중간 Base) N=%d"), N), Back, N);
        }
    }

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FPlanetaryWeekdayTest,
    "Kaus.Calendar.System.Planetary.Weekday",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FPlanetaryWeekdayTest::RunTest(const FString& Parameters)
{
    UKausPlanetaryCalendar* Cal = NewObject<UKausPlanetaryCalendar>();

    const FKausGameDate Ref(1, 1, 1);
    const int32 RefIdx = 0;

    // 8요일 사이클
    for (int32 i = 0; i < 16; ++i)
    {
        const FKausGameDate D = Cal->AddDays(Ref, i);
        const int32 Idx = Cal->GetWeekdayIndex(D, Ref, RefIdx);
        TestEqual(FString::Printf(TEXT("Day +%d 요일 인덱스"), i), Idx, i % 8);
    }

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
