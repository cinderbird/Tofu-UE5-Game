// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Engine/GameInstance.h"
#include "UObject/Package.h"
#include "GameplayTagContainer.h"

#include "Narrative/KausNarrativeStateSubsystem.h"
#include "Narrative/Tests/KausNarrativeStateTestListeners.h"

// =============================================================================
//  테스트 환경
//
//  GameInstanceSubsystem이라 GI에 부착해 NewObject. AddToRoot.
//  Subsystem.Initialize는 자동 호출 안 됨 — Subsystem이 Initialize 없이도 동작 가능.
//  (자료 구조만 사용하므로)
// =============================================================================

namespace KausNarrativeStateTestHelpers
{
    struct FTestContext
    {
        UGameInstance* GameInstance = nullptr;
        UKausNarrativeStateSubsystem* State = nullptr;

        FTestContext()
        {
            GameInstance = NewObject<UGameInstance>(GetTransientPackage());
            GameInstance->AddToRoot();

            State = NewObject<UKausNarrativeStateSubsystem>(GameInstance);
            State->AddToRoot();
        }

        ~FTestContext()
        {
            if (State) State->RemoveFromRoot();
            if (GameInstance) GameInstance->RemoveFromRoot();
        }
    };

    /** ad-hoc 태그 생성 (테스트 시점 만들어 사용). */
    static FGameplayTag MakeTag(const FString& TagName)
    {
        return FGameplayTag::RequestGameplayTag(FName(*TagName), /*ErrorIfNotFound=*/false);
    }
}

// =============================================================================
//  Test 01 — Flag 기본 동작 (Set/Has/Clear)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_FlagBasic,
    "Kaus.Narrative.State.FlagBasic",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_FlagBasic::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    // Native 태그 사용 (테스트 시점에 등록되어 있는 것 활용)
    const FGameplayTag T = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);
    TestTrue(TEXT("native tag valid"), T.IsValid());

    TestFalse(TEXT("초기엔 없음"), Ctx.State->HasFlag(T));

    const bool bSet1 = Ctx.State->SetFlag(T);
    TestTrue(TEXT("Set 첫 호출 = true"), bSet1);
    TestTrue(TEXT("Has = true"), Ctx.State->HasFlag(T));

    // 중복 set은 no-op (false 반환)
    const bool bSet2 = Ctx.State->SetFlag(T);
    TestFalse(TEXT("중복 Set은 no-op (false)"), bSet2);

    const bool bClr1 = Ctx.State->ClearFlag(T);
    TestTrue(TEXT("Clear 첫 호출 = true"), bClr1);
    TestFalse(TEXT("Clear 후 Has = false"), Ctx.State->HasFlag(T));

    // 빈 상태에서 clear는 no-op
    const bool bClr2 = Ctx.State->ClearFlag(T);
    TestFalse(TEXT("빈 상태에서 Clear은 no-op (false)"), bClr2);

    return true;
}

// =============================================================================
//  Test 02 — Flag invalid tag 처리
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_FlagInvalidTag,
    "Kaus.Narrative.State.FlagInvalidTag",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_FlagInvalidTag::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag Invalid;  // empty/invalid

    TestFalse(TEXT("invalid tag set 거부"), Ctx.State->SetFlag(Invalid));
    TestFalse(TEXT("invalid tag has = false"), Ctx.State->HasFlag(Invalid));
    TestFalse(TEXT("invalid tag clear 거부"), Ctx.State->ClearFlag(Invalid));

    return true;
}

// =============================================================================
//  Test 03 — Flag 신호 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_FlagSignals,
    "Kaus.Narrative.State.FlagSignals",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_FlagSignals::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    UKausNarrativeFlagListener* L = NewObject<UKausNarrativeFlagListener>();
    L->AddToRoot();
    Ctx.State->OnFlagSet.AddDynamic(L, &UKausNarrativeFlagListener::HandleSet);
    Ctx.State->OnFlagCleared.AddDynamic(L, &UKausNarrativeFlagListener::HandleClear);

    const FGameplayTag T = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);

    Ctx.State->SetFlag(T);
    TestEqual(TEXT("Set 신호 1회"), L->SetCount, 1);
    TestEqual(TEXT("ClearCount 0"), L->ClearCount, 0);

    Ctx.State->SetFlag(T);  // 중복 — 신호 없음
    TestEqual(TEXT("중복 Set 신호 미발사"), L->SetCount, 1);

    Ctx.State->ClearFlag(T);
    TestEqual(TEXT("Clear 신호 1회"), L->ClearCount, 1);

    Ctx.State->ClearFlag(T);  // 빈 상태 — 신호 없음
    TestEqual(TEXT("빈 상태 Clear 신호 미발사"), L->ClearCount, 1);

    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 04 — HasFlagMatching: Partial match
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_HasFlagMatching,
    "Kaus.Narrative.State.HasFlagMatching",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_HasFlagMatching::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag Morning = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);
    const FGameplayTag Afternoon = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Afternoon")), false);
    const FGameplayTag Cycle = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle")), false);

    Ctx.State->SetFlag(Morning);

    TestTrue(TEXT("HasFlagMatching: Morning"), Ctx.State->HasFlagMatching(Morning));
    TestTrue(TEXT("HasFlagMatching: Cycle (parent of Morning)"),
        Ctx.State->HasFlagMatching(Cycle));
    TestFalse(TEXT("HasFlagMatching: Afternoon (sibling 미설정)"),
        Ctx.State->HasFlagMatching(Afternoon));

    // HasFlag (exact)와 비교
    TestTrue(TEXT("HasFlag exact: Morning"), Ctx.State->HasFlag(Morning));
    TestFalse(TEXT("HasFlag exact: Cycle (parent — 정확히 등록 안 됨)"),
        Ctx.State->HasFlag(Cycle));

    return true;
}

// =============================================================================
//  Test 05 — Counter 증가/조회
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_CounterIncrement,
    "Kaus.Narrative.State.CounterIncrement",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_CounterIncrement::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag T = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);

    TestEqual(TEXT("초기 0"), Ctx.State->GetCounter(T), 0);
    TestFalse(TEXT("HasCounter = false"), Ctx.State->HasCounter(T));

    const int32 V1 = Ctx.State->IncrementCounter(T, 3);
    TestEqual(TEXT("Increment 3 → 3"), V1, 3);
    TestEqual(TEXT("Get → 3"), Ctx.State->GetCounter(T), 3);
    TestTrue(TEXT("HasCounter = true"), Ctx.State->HasCounter(T));

    const int32 V2 = Ctx.State->IncrementCounter(T, 2);
    TestEqual(TEXT("Increment +2 → 5"), V2, 5);

    const int32 V3 = Ctx.State->IncrementCounter(T, -2);
    TestEqual(TEXT("Increment -2 → 3"), V3, 3);

    // 0으로 만들기 → 자동 제거
    const int32 V4 = Ctx.State->IncrementCounter(T, -3);
    TestEqual(TEXT("0 도달"), V4, 0);
    TestFalse(TEXT("0이면 HasCounter = false (제거됨)"),
        Ctx.State->HasCounter(T));

    // 음수로 갈 수도 있음
    const int32 V5 = Ctx.State->IncrementCounter(T, -1);
    TestEqual(TEXT("-1 (0에서 -1 차감)"), V5, -1);
    TestTrue(TEXT("음수도 HasCounter = true (0 아님)"),
        Ctx.State->HasCounter(T));

    return true;
}

// =============================================================================
//  Test 06 — SetCounter 명시 설정
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_SetCounter,
    "Kaus.Narrative.State.SetCounter",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_SetCounter::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag T = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);

    Ctx.State->SetCounter(T, 10);
    TestEqual(TEXT("Set 10"), Ctx.State->GetCounter(T), 10);

    Ctx.State->SetCounter(T, 5);
    TestEqual(TEXT("Set 5 (덮어씀)"), Ctx.State->GetCounter(T), 5);

    Ctx.State->SetCounter(T, 0);
    TestEqual(TEXT("Set 0 → 제거됨"), Ctx.State->GetCounter(T), 0);
    TestFalse(TEXT("HasCounter = false"), Ctx.State->HasCounter(T));

    return true;
}

// =============================================================================
//  Test 07 — Counter 신호 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_CounterSignals,
    "Kaus.Narrative.State.CounterSignals",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_CounterSignals::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    UKausNarrativeCounterListener* L = NewObject<UKausNarrativeCounterListener>();
    L->AddToRoot();
    Ctx.State->OnCounterChanged.AddDynamic(L, &UKausNarrativeCounterListener::Handle);

    const FGameplayTag T = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);

    Ctx.State->IncrementCounter(T, 1);
    TestEqual(TEXT("Increment 신호 1"), L->CallCount, 1);
    TestEqual(TEXT("LastValue = 1"), L->LastValue, 1);

    // 0 delta는 무신호 (값 변경 없음)
    L->Reset();
    Ctx.State->IncrementCounter(T, 0);
    TestEqual(TEXT("0 delta는 무신호"), L->CallCount, 0);

    // SetCounter 같은 값으로 설정 = 무신호
    L->Reset();
    Ctx.State->SetCounter(T, 1);  // 이미 1
    TestEqual(TEXT("같은 값 Set은 무신호"), L->CallCount, 0);

    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 08 — ClearMatching: prefix로 일괄 제거
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_ClearMatching,
    "Kaus.Narrative.State.ClearMatching",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_ClearMatching::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag Morning = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);
    const FGameplayTag Afternoon = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Afternoon")), false);
    const FGameplayTag CyclePrefix = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle")), false);
    const FGameplayTag Other = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Action.Cost.Override")), false);

    Ctx.State->SetFlag(Morning);
    Ctx.State->SetFlag(Afternoon);
    Ctx.State->SetFlag(Other);
    Ctx.State->IncrementCounter(Morning, 5);
    Ctx.State->IncrementCounter(Other, 3);

    Ctx.State->ClearMatching(CyclePrefix);

    TestFalse(TEXT("Morning flag 제거"), Ctx.State->HasFlag(Morning));
    TestFalse(TEXT("Afternoon flag 제거"), Ctx.State->HasFlag(Afternoon));
    TestEqual(TEXT("Morning counter 0"), Ctx.State->GetCounter(Morning), 0);

    // prefix 밖의 것은 보존
    TestTrue(TEXT("Other flag 보존"), Ctx.State->HasFlag(Other));
    TestEqual(TEXT("Other counter 보존"), Ctx.State->GetCounter(Other), 3);

    return true;
}

// =============================================================================
//  Test 09 — ClearAll + OnRebuilt 신호
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_ClearAllSignal,
    "Kaus.Narrative.State.ClearAllSignal",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_ClearAllSignal::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    UKausNarrativeRebuiltListener* L = NewObject<UKausNarrativeRebuiltListener>();
    L->AddToRoot();
    Ctx.State->OnRebuilt.AddDynamic(L, &UKausNarrativeRebuiltListener::Handle);

    const FGameplayTag T1 = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);
    const FGameplayTag T2 = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Afternoon")), false);

    Ctx.State->SetFlag(T1);
    Ctx.State->SetFlag(T2);
    Ctx.State->IncrementCounter(T1, 5);

    Ctx.State->ClearAll();

    TestFalse(TEXT("Flag1 제거"), Ctx.State->HasFlag(T1));
    TestFalse(TEXT("Flag2 제거"), Ctx.State->HasFlag(T2));
    TestEqual(TEXT("Counter 0"), Ctx.State->GetCounter(T1), 0);
    TestEqual(TEXT("OnRebuilt 1회"), L->CallCount, 1);

    L->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 10 — GetAllFlags 스냅샷
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausNarrativeState_GetAllFlagsSnapshot,
    "Kaus.Narrative.State.GetAllFlagsSnapshot",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausNarrativeState_GetAllFlagsSnapshot::RunTest(const FString&)
{
    using namespace KausNarrativeStateTestHelpers;
    FTestContext Ctx;

    const FGameplayTag T1 = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Morning")), false);
    const FGameplayTag T2 = FGameplayTag::RequestGameplayTag(
        FName(TEXT("Calendar.Cycle.Night1")), false);

    Ctx.State->SetFlag(T1);
    Ctx.State->SetFlag(T2);

    const FGameplayTagContainer Snapshot = Ctx.State->GetAllFlags();
    TestEqual(TEXT("플래그 2개"), Snapshot.Num(), 2);
    TestTrue(TEXT("Snapshot에 T1 있음"), Snapshot.HasTagExact(T1));
    TestTrue(TEXT("Snapshot에 T2 있음"), Snapshot.HasTagExact(T2));

    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
