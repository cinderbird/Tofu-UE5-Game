// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "GameTime/KausDayCycleDefinition.h"
#include "Tags/KausDayCycleTags.h"

// =============================================================================
//  헬퍼 — 표준 4-Cycle Definition 빌드
// =============================================================================

namespace KausDayCycleDefTestHelpers
{
    /** 각 Cycle Spec을 일관된 패턴으로 만든다. */
    static FKausCycleSpec MakeSpec(const FGameplayTag& CycleTag, int32 DisplayHour, int32 Budget = 1)
    {
        FKausCycleSpec Spec;
        Spec.CycleTag = CycleTag;
        Spec.DisplayHour = DisplayHour;
        Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
        Spec.CycleBudget = Budget;
        return Spec;
    }

    static UKausDayCycleDefinition* MakeStandardDefinition()
    {
        UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>();

        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Morning,   5));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon, 10));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night1,    18));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night2,    22));

        return Def;
    }
}

// =============================================================================
//  Test 01 — 빈 Definition은 invalid
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_EmptyIsInvalid,
    "Kaus.Calendar.DayCycle.Definition.EmptyIsInvalid",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_EmptyIsInvalid::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>();

    FString Error;
    const bool bValid = Def->IsDefinitionValid(Error);

    TestFalse(TEXT("빈 Cycles 배열은 invalid 여야 한다"), bValid);
    TestFalse(TEXT("invalid 사유가 비어있지 않아야 한다"), Error.IsEmpty());

    return true;
}

// =============================================================================
//  Test 02 — 정상 Definition은 valid
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_StandardIsValid,
    "Kaus.Calendar.DayCycle.Definition.StandardIsValid",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_StandardIsValid::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = KausDayCycleDefTestHelpers::MakeStandardDefinition();

    FString Error;
    const bool bValid = Def->IsDefinitionValid(Error);

    TestTrue(TEXT("4-Cycle 정상 Definition은 valid"), bValid);
    TestTrue(TEXT("CycleCount=4"), Def->GetCycleCount() == 4);

    return true;
}

// =============================================================================
//  Test 03 — 중복 태그는 invalid
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_DuplicateTagInvalid,
    "Kaus.Calendar.DayCycle.Definition.DuplicateTagInvalid",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_DuplicateTagInvalid::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>();

    using KausDayCycleDefTestHelpers::MakeSpec;
    Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon, 10));
    Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon, 10));  // 중복

    FString Error;
    const bool bValid = Def->IsDefinitionValid(Error);

    TestFalse(TEXT("중복 CycleTag는 invalid"), bValid);

    return true;
}

// =============================================================================
//  Test 04 — IndexOf / TagAt 라운드트립
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_IndexTagRoundtrip,
    "Kaus.Calendar.DayCycle.Definition.IndexTagRoundtrip",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_IndexTagRoundtrip::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = KausDayCycleDefTestHelpers::MakeStandardDefinition();

    // Tag → Index → Tag
    for (int32 i = 0; i < Def->GetCycleCount(); ++i)
    {
        const FGameplayTag TagAtI = Def->TagAt(i);
        const int32 RoundTripIdx = Def->IndexOf(TagAtI);

        TestTrue(FString::Printf(TEXT("TagAt(%d) → IndexOf 라운드트립"), i),
            RoundTripIdx == i);
    }

    // 없는 태그
    const int32 NotFound = Def->IndexOf(FGameplayTag::EmptyTag);
    TestTrue(TEXT("invalid Tag → IndexOf == INDEX_NONE"), NotFound == INDEX_NONE);

    // 범위 밖 인덱스
    const FGameplayTag OutOfRange = Def->TagAt(999);
    TestFalse(TEXT("범위 밖 인덱스 → invalid Tag"), OutOfRange.IsValid());

    return true;
}

// =============================================================================
//  Test 05 — NextCycle: 중간은 wrap=false
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_NextCycle_MidNoWrap,
    "Kaus.Calendar.DayCycle.Definition.NextCycle.MidNoWrap",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_NextCycle_MidNoWrap::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = KausDayCycleDefTestHelpers::MakeStandardDefinition();

    // Morning → Afternoon, wrap 안 함
    bool bWrapped = true;  // 시작값을 의도적으로 true로 두고 false로 바뀌는지 확인
    const FGameplayTag Next = Def->NextCycle(KausDayCycleTags::Calendar_Cycle_Morning, bWrapped);

    TestTrue(TEXT("Morning 다음은 Afternoon"),
        Next.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestFalse(TEXT("Date 경계 미발생"), bWrapped);

    return true;
}

// =============================================================================
//  Test 06 — NextCycle: 마지막은 wrap=true, 첫 Cycle로
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausDayCycleDefinition_NextCycle_LastWrapsToFirst,
    "Kaus.Calendar.DayCycle.Definition.NextCycle.LastWrapsToFirst",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausDayCycleDefinition_NextCycle_LastWrapsToFirst::RunTest(const FString&)
{
    UKausDayCycleDefinition* Def = KausDayCycleDefTestHelpers::MakeStandardDefinition();

    // Night2(마지막) → Morning(첫째), wrap=true
    bool bWrapped = false;
    const FGameplayTag Next = Def->NextCycle(KausDayCycleTags::Calendar_Cycle_Night2, bWrapped);

    TestTrue(TEXT("Night2 다음은 Morning (wrap)"),
        Next.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));
    TestTrue(TEXT("Date 경계 발생"), bWrapped);

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
