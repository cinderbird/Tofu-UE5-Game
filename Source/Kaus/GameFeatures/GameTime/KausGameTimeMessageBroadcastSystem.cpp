// Copyright Project Kaus. All Rights Reserved.

#include "KausGameTimeMessageBroadcastSystem.h"
#include "KausDayCycleSubsystem.h"
#include "KausDayCycleDefinition.h"
#include "Tags/KausDayCycleTags.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Engine/GameInstance.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausTimeMessage, Log, All);

void UKausGameTimeMessageBroadcastSystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    Collection.InitializeDependency(UKausDayCycleSubsystem::StaticClass());

    UE_LOG(LogKausTimeMessage, Log, TEXT("[KausGameTimeMessageBroadcastSystem] Initialized"));
}

void UKausGameTimeMessageBroadcastSystem::Deinitialize()
{
    StopBroadcasting();
    UE_LOG(LogKausTimeMessage, Log, TEXT("[KausGameTimeMessageBroadcastSystem] Deinitialized"));
    Super::Deinitialize();
}

void UKausGameTimeMessageBroadcastSystem::StartBroadcasting()
{
    check(IsInGameThread());

    UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem();
    if (!DayCycle)
    {
        UE_LOG(LogKausTimeMessage, Warning, TEXT("[KausTimeMessageBroadcastSystem] StartBroadcasting: DayCycleSubsystem not found."));
        return;
    }

    // Idempotent — Remove 후 Add 패턴 (중복 바인딩 방지).
    DayCycle->OnCycleChanged.RemoveDynamic(this, &ThisClass::HandleCycleChanged);
    DayCycle->OnCycleChanged.AddDynamic(this, &ThisClass::HandleCycleChanged);

    bIsBroadcasting = true;

    UE_LOG(LogKausTimeMessage, Log, TEXT("[KausGameTimeMessageBroadcastSystem] Started broadcasting (subscribed to DayCycle)."));
}

void UKausGameTimeMessageBroadcastSystem::StopBroadcasting()
{
    check(IsInGameThread());

    if (UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem())
    {
        DayCycle->OnCycleChanged.RemoveDynamic(this, &ThisClass::HandleCycleChanged);
    }

    bIsBroadcasting = false;
}

void UKausGameTimeMessageBroadcastSystem::HandleCycleChanged(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint)
{
    if (bIsHandling)
    {
        UE_LOG(LogKausTimeMessage, Warning, TEXT("[KausGameTimeMessageBroadcastSystem] Re-entrance detected — skipping nested broadcast."));
        return;
    }

    bIsHandling = true;
    ON_SCOPE_EXIT { bIsHandling = false; };

    // Date 경계 통과 여부 — Point.Date 비교.
    // PreviousPoint가 invalid (첫 초기화)인 경우는 Date 비교가 의미 없어
    // 보수적으로 false로 처리. DayStart는 발사하지 않음 (구독자가 첫 진입을
    // CycleEntered만으로 처리).
    const bool bPreviousValid = PreviousPoint.IsValid();
    const bool bDateChanged = bPreviousValid && (NewPoint.Date != PreviousPoint.Date);

    BroadcastCycleTransition(NewPoint, PreviousPoint, bDateChanged);
}

void UKausGameTimeMessageBroadcastSystem::BroadcastCycleTransition(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint, bool bDateChanged) const
{
    FKausTimeMessagePayload Payload;
    Payload.NewPoint = NewPoint;
    Payload.PreviousPoint = PreviousPoint;
    Payload.bDateChanged = bDateChanged;

    // ─────────────────────────────────────────────────────────────────
    //  발사 순서 (헤더 docstring에 명시된 대로):
    //    1. Event.Time.CycleExiting.{Previous}     ← 이전 정리
    //    2. Event.Time.DayEnd                       ← Date 경계 시
    //    3. Event.Time.DayStart                     ← Date 경계 시
    //    4. Event.Time.CycleEntered.{New}           ← 새 시작
    //    5. (Spec.AdditionalOnEnterEventTag)        ← Spec이 명시하면
    // ─────────────────────────────────────────────────────────────────

    UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem();
    UKausDayCycleDefinition* Def = DayCycle ? DayCycle->GetDefinition() : nullptr;

    // 1. Exiting (이전 Cycle이 valid했을 때만)
    if (PreviousPoint.IsValid() && PreviousPoint.CycleTag.IsValid())
    {
        const FGameplayTag ExitingTag = MakeChildEventTag(
            KausDayCycleTags::Event_Time_CycleExiting,
            PreviousPoint.CycleTag);
        BroadcastTimeMessage(ExitingTag, Payload);

        // 추가 OnExit 이벤트가 있으면 함께
        if (Def)
        {
            bool bSpecFound = false;
            const FKausCycleSpec PrevSpec = Def->FindSpec(PreviousPoint.CycleTag, bSpecFound);
            if (bSpecFound && PrevSpec.AdditionalOnExitEventTag.IsValid())
            {
                BroadcastTimeMessage(PrevSpec.AdditionalOnExitEventTag, Payload);
            }
        }
    }

    // 2~3. DayEnd → DayStart (Date 경계 통과 시 둘 다 발사)
    if (bDateChanged)
    {
        BroadcastTimeMessage(KausDayCycleTags::Event_Time_DayEnd, Payload);
        BroadcastTimeMessage(KausDayCycleTags::Event_Time_DayStart, Payload);
    }

    // 4. Entered
    if (NewPoint.CycleTag.IsValid())
    {
        const FGameplayTag EnteredTag = MakeChildEventTag(
            KausDayCycleTags::Event_Time_CycleEntered,
            NewPoint.CycleTag);
        BroadcastTimeMessage(EnteredTag, Payload);

        // 5. Additional OnEnter
        if (Def)
        {
            bool bSpecFound = false;
            const FKausCycleSpec NewSpec = Def->FindSpec(NewPoint.CycleTag, bSpecFound);
            if (bSpecFound && NewSpec.AdditionalOnEnterEventTag.IsValid())
            {
                BroadcastTimeMessage(NewSpec.AdditionalOnEnterEventTag, Payload);
            }
        }
    }
}

FGameplayTag UKausGameTimeMessageBroadcastSystem::MakeChildEventTag(
    const FGameplayTag& EventRoot,
    const FGameplayTag& CycleTag)
{
    if (!EventRoot.IsValid() || !CycleTag.IsValid())
    {
        return FGameplayTag::EmptyTag;
    }

    // CycleTag의 leaf만 추출.
    // 예: "Calendar.Cycle.Morning" → "Morning"
    const FString CycleTagStr = CycleTag.GetTagName().ToString();
    int32 LastDot = INDEX_NONE;
    if (!CycleTagStr.FindLastChar('.', LastDot))
    {
        // dot이 없는 single-segment 태그면 통째로 사용
        LastDot = -1;
    }
    const FString CycleLeaf = CycleTagStr.RightChop(LastDot + 1);

    // EventRoot + "." + Leaf
    const FString FullTagStr = FString::Printf(TEXT("%s.%s"),
        *EventRoot.GetTagName().ToString(), *CycleLeaf);

    // ErrorIfNotFound=false — 등록되지 않은 태그면 invalid 반환.
    // Cycle 식별 태그가 사용자 정의일 수 있어 (Morning/Afternoon/Night1/Night2 외)
    // 미등록 자식 이벤트는 발사하지 않음.
    return FGameplayTag::RequestGameplayTag(FName(*FullTagStr), /*ErrorIfNotFound=*/false);
}

void UKausGameTimeMessageBroadcastSystem::BroadcastTimeMessage(
    const FGameplayTag& EventTag,
    const FKausTimeMessagePayload& Payload) const
{
    if (!EventTag.IsValid())
    {
        return;
    }

    if (!UGameplayMessageSubsystem::HasInstance(this))
    {
        UE_LOG(LogKausTimeMessage, Warning, TEXT("[KausGameTimeMessageBroadcastSystem] No GameplayMessageSubsystem — skipping '%s'"), *EventTag.ToString());
        return;
    }

    UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);
    MessageSubsystem.BroadcastMessage(EventTag, Payload);

    UE_LOG(LogKausTimeMessage, Verbose, TEXT("[KausTimeMessageBroadcastSystem] %s @ %s → %s"), *EventTag.ToString(), *Payload.PreviousPoint.ToString(), *Payload.NewPoint.ToString());
}

UKausDayCycleSubsystem* UKausGameTimeMessageBroadcastSystem::GetDayCycleSubsystem() const
{
    UGameInstance* GI = GetGameInstance();
    return GI ? GI->GetSubsystem<UKausDayCycleSubsystem>() : nullptr;
}
