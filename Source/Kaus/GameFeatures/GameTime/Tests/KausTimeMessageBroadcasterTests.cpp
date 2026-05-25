// Copyright Project Kaus. All Rights Reserved.

#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

#include "Engine/GameInstance.h"
#include "UObject/Package.h"

#include "GameTime/KausGameTimeMessageBroadcastSystem.h"
#include "GameTime/Tests/KausTestTimeMessageBroadcaster.h"
#include "GameTime/KausDayCycleSubsystem.h"
#include "GameTime/KausDayCycleDefinition.h"
#include "Calendar/KausCalendarSubsystem.h"
#include "Calendar/KausCalendarSchedule.h"
#include "Calendar/KausGregorianCalendar.h"
#include "Calendar/KausGameDate.h"
#include "Tags/KausDayCycleTags.h"
#include "GameTime/Tests/KausTimeMessageTestListener.h"
#include "GameFramework/GameplayMessageSubsystem.h"

// =============================================================================
//  테스트 환경
//
//  설계 메모:
//   - TimeMessageBroadcaster는 GameInstanceSubsystem.
//   - GameplayMessageSubsystem에 메시지 발사 → Listener로 검증.
//   - GameplayMessageSubsystem 자체는 UE의 GameplayMessageRuntime 모듈에 속해
//     같은 GameInstance에 자동으로 따라옴.
//   - Calendar/DayCycle은 InitializeWith로 초기화하여 DayCycleSubsystem이 신호 발사 가능 상태로.
// =============================================================================

namespace KausTimeMessageBroadcasterTestHelpers
{
    static UKausDayCycleDefinition* MakeStandardDefinition()
    {
        UKausDayCycleDefinition* Def = NewObject<UKausDayCycleDefinition>(GetTransientPackage());

        auto MakeSpec = [](const FGameplayTag& Tag, int32 Hour)
        {
            FKausCycleSpec Spec;
            Spec.CycleTag = Tag;
            Spec.DisplayHour = Hour;
            Spec.BudgetMode = KausDayCycleTags::Calendar_Cycle_BudgetMode_Token;
            Spec.CycleBudget = 1;
            return Spec;
        };

        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Morning,    5));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Afternoon,  10));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night1,     18));
        Def->Cycles.Add(MakeSpec(KausDayCycleTags::Calendar_Cycle_Night2,     22));

        return Def;
    }

    /** Broadcaster가 동작하는 완전 환경. */
    struct FTestContext
    {
        UGameInstance* GameInstance = nullptr;
        UKausCalendarSubsystem* Calendar = nullptr;
        UKausDayCycleSubsystem* DayCycle = nullptr;
        UKausTestGameTimeMessageBroadcastSystem* Broadcaster = nullptr;
        UGameplayMessageSubsystem* MessageSubsystem = nullptr;
        UKausCalendarSchedule* Schedule = nullptr;
        UKausDayCycleDefinition* Definition = nullptr;

        FTestContext()
        {
            Definition = MakeStandardDefinition();
            Definition->AddToRoot();

            GameInstance = NewObject<UGameInstance>(GetTransientPackage());
            GameInstance->AddToRoot();

            Calendar = NewObject<UKausCalendarSubsystem>(GameInstance);
            Calendar->AddToRoot();

            DayCycle = NewObject<UKausDayCycleSubsystem>(GameInstance);
            DayCycle->AddToRoot();

            // GameplayMessageSubsystem을 GameInstance에 직접 부착.
            MessageSubsystem = NewObject<UGameplayMessageSubsystem>(GameInstance);
            MessageSubsystem->AddToRoot();

            Broadcaster = NewObject<UKausTestGameTimeMessageBroadcastSystem>(GameInstance);
            Broadcaster->AddToRoot();
            Broadcaster->InjectedDayCycle = DayCycle;
            Broadcaster->InjectedMessageSubsystem = MessageSubsystem;

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
            DayCycle->InitializeWith(Definition, FKausGameDate(2026, 6, 15),
                KausDayCycleTags::Calendar_Cycle_Morning.GetTag(), Calendar);

            // Broadcaster가 DayCycle 신호 구독.
            Broadcaster->StartBroadcasting();
        }

        ~FTestContext()
        {
            if (Broadcaster)
            {
                Broadcaster->StopBroadcasting();
                Broadcaster->RemoveFromRoot();
            }
            if (MessageSubsystem) MessageSubsystem->RemoveFromRoot();
            if (Schedule) Schedule->RemoveFromRoot();
            if (DayCycle) DayCycle->RemoveFromRoot();
            if (Calendar) Calendar->RemoveFromRoot();
            if (GameInstance) GameInstance->RemoveFromRoot();
            if (Definition) Definition->RemoveFromRoot();
        }
    };

    /** 메시지 리스너 생성 + 등록은 익명 namespace의 헬퍼 사용 (아래). */
}

// =============================================================================
//  Listener 생성/해제 헬퍼 (익명 namespace)
//
//  GameplayMessageSubsystem의 RegisterListener는 람다 callback을 받고
//  FGameplayMessageListenerHandle을 반환한다. 그 handle을 cleanup에 사용.
// =============================================================================
namespace
{
    /** Listener handle을 보관하는 컨테이너. */
    struct FListenerBundle
    {
        UKausTimeMessageTestListener* Listener = nullptr;
        FGameplayMessageListenerHandle Handle;
    };

    static FListenerBundle MakeListener(
        KausTimeMessageBroadcasterTestHelpers::FTestContext& Ctx,
        const FGameplayTag& Channel)
    {
        FListenerBundle Bundle;
        Bundle.Listener = NewObject<UKausTimeMessageTestListener>();
        Bundle.Listener->AddToRoot();

        Bundle.Handle = Ctx.MessageSubsystem->RegisterListener<FKausTimeMessagePayload>(
            Channel,
            [WeakL = TWeakObjectPtr<UKausTimeMessageTestListener>(Bundle.Listener)]
            (FGameplayTag Tag, const FKausTimeMessagePayload& Payload)
            {
                if (WeakL.IsValid())
                {
                    WeakL->OnMessage(Tag, Payload);
                }
            },
            EGameplayMessageMatch::PartialMatch);

        return Bundle;
    }

    static void DestroyListener(
        KausTimeMessageBroadcasterTestHelpers::FTestContext& Ctx,
        FListenerBundle& Bundle)
    {
        if (Bundle.Listener)
        {
            Ctx.MessageSubsystem->UnregisterListener(Bundle.Handle);
            Bundle.Listener->RemoveFromRoot();
            Bundle.Listener = nullptr;
        }
    }
}

// =============================================================================
//  Test 01 — StartBroadcasting / StopBroadcasting 라이프사이클
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_BroadcastingLifecycle,
    "Kaus.Calendar.TimeMessage.BroadcastingLifecycle",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_BroadcastingLifecycle::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    // 생성자에서 StartBroadcasting 호출됨.
    TestTrue(TEXT("생성자 후 broadcasting"), Ctx.Broadcaster->IsBroadcasting());

    Ctx.Broadcaster->StopBroadcasting();
    TestFalse(TEXT("Stop 후 미동작"), Ctx.Broadcaster->IsBroadcasting());

    Ctx.Broadcaster->StartBroadcasting();
    TestTrue(TEXT("재시작 가능"), Ctx.Broadcaster->IsBroadcasting());

    return true;
}

// =============================================================================
//  Test 02 — AdvanceCycle 시 CycleEntered 메시지 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_CycleEnteredOnAdvance,
    "Kaus.Calendar.TimeMessage.CycleEnteredOnAdvance",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_CycleEnteredOnAdvance::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx, KausDayCycleTags::Event_Time_CycleEntered);

    // Morning → Afternoon
    Ctx.DayCycle->AdvanceCycle();

    // CycleEntered.Afternoon 자식 태그가 PartialMatch로 잡힘.
    TestTrue(TEXT("CycleEntered.Afternoon 1회 수신"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_CycleEntered_Afternoon) == 1);

    // 페이로드 확인
    TestTrue(TEXT("페이로드의 NewPoint.CycleTag = Afternoon"), Bundle.Listener->Received.Last().Payload.NewPoint.CycleTag.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 03 — CycleExiting 메시지가 CycleEntered 이전에 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_ExitingBeforeEntered,
    "Kaus.Calendar.TimeMessage.ExitingBeforeEntered",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_ExitingBeforeEntered::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    // root listener — 모든 Event.Time.* 메시지를 순서대로 잡음.
    FListenerBundle Bundle = MakeListener(Ctx,
        FGameplayTag::RequestGameplayTag(FName(TEXT("Event.Time"))));

    Ctx.DayCycle->AdvanceCycle();  // Morning → Afternoon

    // History에서 Exiting.Morning이 Entered.Afternoon보다 먼저 와야 함.
    int32 ExitingIdx = INDEX_NONE;
    int32 EnteredIdx = INDEX_NONE;
    for (int32 i = 0; i < Bundle.Listener->Received.Num(); ++i)
    {
        if (Bundle.Listener->Received[i].Tag.MatchesTagExact(
            KausDayCycleTags::Event_Time_CycleExiting_Morning))
        {
            ExitingIdx = i;
        }
        if (Bundle.Listener->Received[i].Tag.MatchesTagExact(
            KausDayCycleTags::Event_Time_CycleEntered_Afternoon))
        {
            EnteredIdx = i;
        }
    }

    TestTrue(TEXT("Exiting.Morning 발사됨"), ExitingIdx != INDEX_NONE);
    TestTrue(TEXT("Entered.Afternoon 발사됨"), EnteredIdx != INDEX_NONE);
    TestTrue(TEXT("Exiting이 Entered보다 먼저"), ExitingIdx < EnteredIdx);

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 04 — Date 경계 통과 시 DayEnd + DayStart 발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_DayEndStartOnDateChange,
    "Kaus.Calendar.TimeMessage.DayEndStartOnDateChange",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_DayEndStartOnDateChange::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx,
        FGameplayTag::RequestGameplayTag(FName(TEXT("Event.Time"))));

    // 4 Cycle 진행 → Morning → Afternoon → Night1 → Night2 → 다음날 Morning (Date 경계)
    Ctx.DayCycle->AdvanceCycle();  // Afternoon
    Ctx.DayCycle->AdvanceCycle();  // Night1
    Ctx.DayCycle->AdvanceCycle();  // Night2
    Bundle.Listener->Reset();      // 여기까지의 메시지 무시
    Ctx.DayCycle->AdvanceCycle();  // Date wrap → Morning 다음날

    TestEqual(TEXT("DayEnd 1회"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_DayEnd), 1);
    TestEqual(TEXT("DayStart 1회"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_DayStart), 1);

    // 발사 순서: Exiting.Night2 → DayEnd → DayStart → Entered.Morning
    int32 ExitingIdx = INDEX_NONE;
    int32 DayEndIdx = INDEX_NONE;
    int32 DayStartIdx = INDEX_NONE;
    int32 EnteredIdx = INDEX_NONE;
    for (int32 i = 0; i < Bundle.Listener->Received.Num(); ++i)
    {
        const FGameplayTag& T = Bundle.Listener->Received[i].Tag;
        if (T.MatchesTagExact(KausDayCycleTags::Event_Time_CycleExiting_Night2)) ExitingIdx = i;
        if (T.MatchesTagExact(KausDayCycleTags::Event_Time_DayEnd))              DayEndIdx = i;
        if (T.MatchesTagExact(KausDayCycleTags::Event_Time_DayStart))            DayStartIdx = i;
        if (T.MatchesTagExact(KausDayCycleTags::Event_Time_CycleEntered_Morning)) EnteredIdx = i;
    }

    TestTrue(TEXT("Exiting < DayEnd"), ExitingIdx < DayEndIdx);
    TestTrue(TEXT("DayEnd < DayStart"), DayEndIdx < DayStartIdx);
    TestTrue(TEXT("DayStart < Entered"), DayStartIdx < EnteredIdx);

    // 페이로드의 bDateChanged 확인
    TestTrue(TEXT("페이로드 bDateChanged = true"),
        Bundle.Listener->Received.Last().Payload.bDateChanged);

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 05 — 같은 Date 안 진행 시 DayEnd/DayStart 미발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_NoDayEventsWithinSameDate,
    "Kaus.Calendar.TimeMessage.NoDayEventsWithinSameDate",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_NoDayEventsWithinSameDate::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx,
        FGameplayTag::RequestGameplayTag(FName(TEXT("Event.Time"))));

    Ctx.DayCycle->AdvanceCycle();  // Morning → Afternoon (같은 Date)

    TestEqual(TEXT("DayEnd 미발사"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_DayEnd), 0);
    TestEqual(TEXT("DayStart 미발사"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_DayStart), 0);

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 06 — StopBroadcasting 후 메시지 미발사
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_StoppedNoMessages,
    "Kaus.Calendar.TimeMessage.StoppedNoMessages",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_StoppedNoMessages::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx,
        FGameplayTag::RequestGameplayTag(FName(TEXT("Event.Time"))));

    Ctx.Broadcaster->StopBroadcasting();
    Ctx.DayCycle->AdvanceCycle();

    TestEqual(TEXT("Stop 후 메시지 0개"), Bundle.Listener->Received.Num(), 0);

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 07 — 페이로드의 NewPoint / PreviousPoint 정확성
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_PayloadPoints,
    "Kaus.Calendar.TimeMessage.PayloadPoints",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_PayloadPoints::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx,
        KausDayCycleTags::Event_Time_CycleEntered);

    Ctx.DayCycle->AdvanceCycle();  // Morning → Afternoon

    TestTrue(TEXT("최소 1개 메시지 수신"), Bundle.Listener->Received.Num() >= 1);

    const FKausTimeMessagePayload& P = Bundle.Listener->Received.Last().Payload;
    TestTrue(TEXT("NewPoint.CycleTag = Afternoon"), P.NewPoint.CycleTag.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Afternoon));
    TestTrue(TEXT("PreviousPoint.CycleTag = Morning"), P.PreviousPoint.CycleTag.MatchesTagExact(KausDayCycleTags::Calendar_Cycle_Morning));
    TestFalse(TEXT("같은 Date — bDateChanged = false"), P.bDateChanged);

    DestroyListener(Ctx, Bundle);
    return true;
}

// =============================================================================
//  Test 08 — 두 번 연속 AdvanceCycle 시 두 번 메시지
// =============================================================================
IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausTimeMessage_MultipleAdvances,
    "Kaus.Calendar.TimeMessage.MultipleAdvances",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausTimeMessage_MultipleAdvances::RunTest(const FString&)
{
    using namespace KausTimeMessageBroadcasterTestHelpers;
    FTestContext Ctx;

    FListenerBundle Bundle = MakeListener(Ctx,
        KausDayCycleTags::Event_Time_CycleEntered);

    Ctx.DayCycle->AdvanceCycle();  // Afternoon
    Ctx.DayCycle->AdvanceCycle();  // Night1
    Ctx.DayCycle->AdvanceCycle();  // Night2

    TestEqual(TEXT("Entered.Afternoon 1회"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_CycleEntered_Afternoon), 1);
    TestEqual(TEXT("Entered.Night1 1회"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_CycleEntered_Night1), 1);
    TestEqual(TEXT("Entered.Night2 1회"),
        Bundle.Listener->CountOf(KausDayCycleTags::Event_Time_CycleEntered_Night2), 1);

    DestroyListener(Ctx, Bundle);
    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
