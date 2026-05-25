// Copyright Project Kaus. All Rights Reserved.

#include "KausNarrativeStateSubsystem.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausNarrativeState, Log, All);

// =============================================================================
//  USubsystem
// =============================================================================

void UKausNarrativeStateSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogKausNarrativeState, Log, TEXT("[NarrativeState] Initialized"));
}

void UKausNarrativeStateSubsystem::Deinitialize()
{
    OnFlagSet.Clear();
    OnFlagCleared.Clear();
    OnCounterChanged.Clear();
    OnRebuilt.Clear();
    Flags.Reset();
    Counters.Reset();
    UE_LOG(LogKausNarrativeState, Log, TEXT("[NarrativeState] Deinitialized"));
    Super::Deinitialize();
}

// =============================================================================
//  플래그
// =============================================================================

bool UKausNarrativeStateSubsystem::SetFlag(const FGameplayTag& Tag)
{
    check(IsInGameThread());

    if (!Tag.IsValid()) return false;
    if (Flags.HasTagExact(Tag)) return false;  // 이미 있음 — no-op

    Flags.AddTag(Tag);

    UE_LOG(LogKausNarrativeState, Log, TEXT("[NarrativeState] SetFlag: %s"),
        *Tag.ToString());

    OnFlagSet.Broadcast(Tag);
    return true;
}

bool UKausNarrativeStateSubsystem::ClearFlag(const FGameplayTag& Tag)
{
    check(IsInGameThread());

    if (!Tag.IsValid()) return false;
    if (!Flags.HasTagExact(Tag)) return false;  // 없음 — no-op

    Flags.RemoveTag(Tag);

    UE_LOG(LogKausNarrativeState, Log, TEXT("[NarrativeState] ClearFlag: %s"),
        *Tag.ToString());

    OnFlagCleared.Broadcast(Tag);
    return true;
}

bool UKausNarrativeStateSubsystem::HasFlag(const FGameplayTag& Tag) const
{
    if (!Tag.IsValid()) return false;
    return Flags.HasTagExact(Tag);
}

bool UKausNarrativeStateSubsystem::HasFlagMatching(const FGameplayTag& Tag) const
{
    if (!Tag.IsValid()) return false;
    return Flags.HasTag(Tag);  // PartialMatch
}

// =============================================================================
//  카운터
// =============================================================================

int32 UKausNarrativeStateSubsystem::IncrementCounter(const FGameplayTag& Tag, int32 Delta)
{
    check(IsInGameThread());

    if (!Tag.IsValid())
    {
        UE_LOG(LogKausNarrativeState, Warning,
            TEXT("[NarrativeState] IncrementCounter: invalid tag"));
        return 0;
    }

    int32& Value = Counters.FindOrAdd(Tag, 0);
    const int32 OldValue = Value;
    Value += Delta;

    if (Value == 0)
    {
        // 0으로 돌아왔으면 맵에서 제거 (메모리 절약).
        Counters.Remove(Tag);
    }

    if (OldValue != Value)
    {
        UE_LOG(LogKausNarrativeState, Log,
            TEXT("[NarrativeState] Counter %s: %d → %d (delta=%d)"),
            *Tag.ToString(), OldValue, Value, Delta);

        OnCounterChanged.Broadcast(Tag, Value);
    }

    return Value;
}

void UKausNarrativeStateSubsystem::SetCounter(const FGameplayTag& Tag, int32 NewValue)
{
    check(IsInGameThread());

    if (!Tag.IsValid())
    {
        UE_LOG(LogKausNarrativeState, Warning,
            TEXT("[NarrativeState] SetCounter: invalid tag"));
        return;
    }

    const int32 OldValue = GetCounter(Tag);
    if (OldValue == NewValue) return;  // no-op

    if (NewValue == 0)
    {
        Counters.Remove(Tag);
    }
    else
    {
        Counters.Add(Tag, NewValue);
    }

    UE_LOG(LogKausNarrativeState, Log,
        TEXT("[NarrativeState] SetCounter %s: %d → %d"),
        *Tag.ToString(), OldValue, NewValue);

    OnCounterChanged.Broadcast(Tag, NewValue);
}

int32 UKausNarrativeStateSubsystem::GetCounter(const FGameplayTag& Tag) const
{
    if (!Tag.IsValid()) return 0;
    if (const int32* Found = Counters.Find(Tag))
    {
        return *Found;
    }
    return 0;
}

bool UKausNarrativeStateSubsystem::HasCounter(const FGameplayTag& Tag) const
{
    return GetCounter(Tag) != 0;
}

// =============================================================================
//  일괄 리셋
// =============================================================================

void UKausNarrativeStateSubsystem::ClearMatching(const FGameplayTag& Prefix)
{
    check(IsInGameThread());

    if (!Prefix.IsValid()) return;

    // 플래그: prefix로 매칭되는 것들 수집 후 제거 + 신호 발사
    TArray<FGameplayTag> FlagsToRemove;
    for (const FGameplayTag& Existing : Flags)
    {
        if (Existing.MatchesTag(Prefix))
        {
            FlagsToRemove.Add(Existing);
        }
    }
    for (const FGameplayTag& Tag : FlagsToRemove)
    {
        Flags.RemoveTag(Tag);
        OnFlagCleared.Broadcast(Tag);
    }

    // 카운터: 동일한 패턴
    TArray<FGameplayTag> CountersToRemove;
    for (const TPair<FGameplayTag, int32>& Pair : Counters)
    {
        if (Pair.Key.MatchesTag(Prefix))
        {
            CountersToRemove.Add(Pair.Key);
        }
    }
    for (const FGameplayTag& Tag : CountersToRemove)
    {
        Counters.Remove(Tag);
        OnCounterChanged.Broadcast(Tag, 0);
    }

    UE_LOG(LogKausNarrativeState, Log,
        TEXT("[NarrativeState] ClearMatching(%s): removed %d flags, %d counters"),
        *Prefix.ToString(), FlagsToRemove.Num(), CountersToRemove.Num());
}

void UKausNarrativeStateSubsystem::ClearAll()
{
    check(IsInGameThread());

    Flags.Reset();
    Counters.Reset();

    UE_LOG(LogKausNarrativeState, Log, TEXT("[NarrativeState] ClearAll"));

    OnRebuilt.Broadcast();
}
