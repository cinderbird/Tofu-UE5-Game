// Copyright Project Kaus. All Rights Reserved.

#if WITH_DEV_AUTOMATION_TESTS

#include "Calendar/KausGameDate.h"
#include "Misc/AutomationTest.h"

/**
 * FKausGameDate 비교/해시 단위 테스트.
 *
 * 실행:
 *   에디터: Tools → Session Frontend → Automation → "Kaus.Calendar.GameDate"
 *   커맨드라인: Automation RunTests Kaus.Calendar.GameDate
 */

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausGameDateEqualityTest,
    "Kaus.Calendar.GameDate.Equality",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausGameDateEqualityTest::RunTest(const FString& Parameters)
{
    const FKausGameDate A(2024, 4, 1);
    const FKausGameDate B(2024, 4, 1);
    const FKausGameDate C(2024, 4, 2);

    TestTrue(TEXT("동일 날짜 == 비교"), A == B);
    TestFalse(TEXT("다른 날짜 == 비교"), A == C);
    TestTrue(TEXT("다른 날짜 != 비교"), A != C);
    TestFalse(TEXT("동일 날짜 != 비교"), A != B);

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausGameDateOrderingTest,
    "Kaus.Calendar.GameDate.Ordering",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausGameDateOrderingTest::RunTest(const FString& Parameters)
{
    // 사전식 비교
    TestTrue(TEXT("Year 우선"),  FKausGameDate(2024, 1, 1) < FKausGameDate(2025, 1, 1));
    TestTrue(TEXT("Month 다음"), FKausGameDate(2024, 1, 31) < FKausGameDate(2024, 2, 1));
    TestTrue(TEXT("Day 마지막"), FKausGameDate(2024, 4, 1) < FKausGameDate(2024, 4, 2));

    TestFalse(TEXT("동일 날짜는 < 아님"),
        FKausGameDate(2024, 4, 1) < FKausGameDate(2024, 4, 1));

    TestTrue(TEXT("<= 동일"),
        FKausGameDate(2024, 4, 1) <= FKausGameDate(2024, 4, 1));
    TestTrue(TEXT("<= 미만"),
        FKausGameDate(2024, 4, 1) <= FKausGameDate(2024, 4, 2));

    TestTrue(TEXT(">= 동일"),
        FKausGameDate(2024, 4, 1) >= FKausGameDate(2024, 4, 1));
    TestTrue(TEXT("> 초과"),
        FKausGameDate(2024, 4, 2) > FKausGameDate(2024, 4, 1));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausGameDateHashTest,
    "Kaus.Calendar.GameDate.Hash",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausGameDateHashTest::RunTest(const FString& Parameters)
{
    // GetTypeHash가 동일 날짜에 동일 해시를 반환하는지
    const FKausGameDate A(2024, 4, 1);
    const FKausGameDate B(2024, 4, 1);
    TestEqual(TEXT("동일 날짜 동일 해시"), GetTypeHash(A), GetTypeHash(B));

    // TMap 키로 사용 가능한지 (실제 운영 시나리오)
    TMap<FKausGameDate, int32> Map;
    Map.Add(FKausGameDate(2024, 4, 1), 100);
    Map.Add(FKausGameDate(2024, 4, 2), 200);

    const int32* Value = Map.Find(FKausGameDate(2024, 4, 1));
    TestNotNull(TEXT("TMap Find — 존재 키"), Value);
    if (Value)
    {
        TestEqual(TEXT("TMap Find — 값"), *Value, 100);
    }

    TestNull(TEXT("TMap Find — 미존재 키"),
        Map.Find(FKausGameDate(2024, 5, 1)));

    return true;
}

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FKausGameDateToStringTest,
    "Kaus.Calendar.GameDate.ToString",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausGameDateToStringTest::RunTest(const FString& Parameters)
{
    TestEqual(TEXT("Y0001-M01-D01"),
        FKausGameDate(1, 1, 1).ToString(), FString(TEXT("Y0001-M01-D01")));

    TestEqual(TEXT("Y2024-M03-D15"),
        FKausGameDate(2024, 3, 15).ToString(), FString(TEXT("Y2024-M03-D15")));

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
