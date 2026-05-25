// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "UObject/Package.h"

#include "AbilitySystem/Abilities/KausPlayerActionAbility.h"
#include "KausTestPlayerActionAbility.h"
#include "Tags/KausActionTags.h"
#include "Tags/KausDayCycleTags.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"

// =============================================================================
//  테스트 환경
//
//  PlayerActionAbility는 Abstract라 직접 인스턴스화 불가 — concrete 자식 필요.
//  ResolveTimeCost는 public 메서드라 그냥 호출 가능.
//
//  단위 테스트 범위:
//    1. EventData에 Override 태그+Magnitude → 그 값 우선
//    2. EventData가 비었음 → ActorInfo nullptr → DefaultTimeCost 반환
//
//  TimeCostByMode는 PlayerTimeBudgetComponent + ActorInfo 설정이 필요해 통합 영역.
// =============================================================================

namespace KausPlayerActionAbilityTestHelpers
{
    static UKausTestPlayerActionAbility* MakeAbility(int32 DefaultCost = 1)
    {
        UKausTestPlayerActionAbility* A =
            NewObject<UKausTestPlayerActionAbility>(GetTransientPackage());
        A->AddToRoot();
        A->DefaultTimeCost = DefaultCost;  // public UPROPERTY
        return A;
    }

    static FGameplayEventData MakeEventDataWithOverride(int32 OverrideCost)
    {
        FGameplayEventData D;
        D.EventMagnitude = static_cast<float>(OverrideCost);
        D.InstigatorTags.AddTag(KausActionTags::Action_Cost_Override);
        return D;
    }
}

// =============================================================================
//  Test 01 — Override 태그 없으면 DefaultTimeCost 반환
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_NoOverrideUsesDefault,
    "Kaus.AbilitySystem.PlayerAction.NoOverrideUsesDefault",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_NoOverrideUsesDefault::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/3);

    const FGameplayEventData D{};  // 빈 EventData
    const int32 Cost = A->ResolveTimeCost(&D);

    TestEqual(TEXT("Override 없으면 Default(3)"), Cost, 3);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 02 — Override 태그 + Magnitude 양수면 Override 적용
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_OverridePositive,
    "Kaus.AbilitySystem.PlayerAction.OverridePositive",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_OverridePositive::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/1);

    const FGameplayEventData D = MakeEventDataWithOverride(7);
    const int32 Cost = A->ResolveTimeCost(&D);

    TestEqual(TEXT("Override 7 적용 (Default 무시)"), Cost, 7);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 03 — Override 태그 + Magnitude 0이면 0 cost (무료 행동 명시)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_OverrideZeroMeansFree,
    "Kaus.AbilitySystem.PlayerAction.OverrideZeroMeansFree",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_OverrideZeroMeansFree::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/5);

    const FGameplayEventData D = MakeEventDataWithOverride(0);
    const int32 Cost = A->ResolveTimeCost(&D);

    // Override 태그가 있으면 Magnitude가 cost — 0도 명시적 의도.
    TestEqual(TEXT("Override 0은 무료 (Default 무시)"), Cost, 0);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 04 — Override 태그 + Magnitude 음수면 0으로 클램프
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_OverrideNegativeClamped,
    "Kaus.AbilitySystem.PlayerAction.OverrideNegativeClamped",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_OverrideNegativeClamped::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/5);

    const FGameplayEventData D = MakeEventDataWithOverride(-3);
    const int32 Cost = A->ResolveTimeCost(&D);

    TestEqual(TEXT("음수 Override는 0으로 클램프"), Cost, 0);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 05 — Override 태그 없이 Magnitude만 있으면 무시 (Default 사용)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_MagnitudeWithoutTagIgnored,
    "Kaus.AbilitySystem.PlayerAction.MagnitudeWithoutTagIgnored",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_MagnitudeWithoutTagIgnored::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/2);

    // Magnitude는 양수지만 Override 태그 없음
    FGameplayEventData D;
    D.EventMagnitude = 99.0f;

    const int32 Cost = A->ResolveTimeCost(&D);
    TestEqual(TEXT("태그 없으면 Magnitude 무시 → Default(2)"), Cost, 2);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 06 — TriggerEventData가 nullptr이어도 안전 (Default 반환)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_NullTriggerDataSafe,
    "Kaus.AbilitySystem.PlayerAction.NullTriggerDataSafe",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_NullTriggerDataSafe::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility(/*Default=*/4);

    const int32 Cost = A->ResolveTimeCost(nullptr);
    TestEqual(TEXT("nullptr → Default(4)"), Cost, 4);

    A->RemoveFromRoot();
    return true;
}

// =============================================================================
//  Test 07 — Magnitude의 소수점 처리 (반올림)
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausPlayerActionAbility_MagnitudeRounding,
    "Kaus.AbilitySystem.PlayerAction.MagnitudeRounding",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausPlayerActionAbility_MagnitudeRounding::RunTest(const FString&)
{
    using namespace KausPlayerActionAbilityTestHelpers;

    UKausTestPlayerActionAbility* A = MakeAbility();

    // 2.4 → 2
    FGameplayEventData D1;
    D1.EventMagnitude = 2.4f;
    D1.InstigatorTags.AddTag(KausActionTags::Action_Cost_Override);
    TestEqual(TEXT("2.4 반올림 → 2"), A->ResolveTimeCost(&D1), 2);

    // 2.6 → 3
    FGameplayEventData D2;
    D2.EventMagnitude = 2.6f;
    D2.InstigatorTags.AddTag(KausActionTags::Action_Cost_Override);
    TestEqual(TEXT("2.6 반올림 → 3"), A->ResolveTimeCost(&D2), 3);

    A->RemoveFromRoot();
    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
