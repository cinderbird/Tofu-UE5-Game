#include "System/KausChoiceHistorySubsystem.h"
#include "Logs/KausLogChannels.h"

void UKausChoiceHistorySubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    ChoiceCounts.Empty();
    UE_LOG(LogKaus, Log, TEXT("[KausChoiceHistorySubsystem] Initialized"));
}

void UKausChoiceHistorySubsystem::Deinitialize()
{
    OnChoiceRecorded.Clear();
    ChoiceCounts.Empty();
    UE_LOG(LogKaus, Log, TEXT("[KausChoiceHistorySubsystem] Deinitialized"));
    Super::Deinitialize();
}

void UKausChoiceHistorySubsystem::RecordChoice(FGameplayTag ChoiceTag, int32 Increment)
{
    if (!ChoiceTag.IsValid())
    {
        UE_LOG(LogKaus, Warning, TEXT("[RecordChoice] Invalid tag, ignoring"));
        return;
    }

    if (Increment == 0)
    {
        return;
    }

    int32& Count = ChoiceCounts.FindOrAdd(ChoiceTag, 0);
    Count = FMath::Max(0, Count + Increment);

    UE_LOG(LogKaus, Verbose, TEXT("[RecordChoice] %s: %+d → Total %d"),
        *ChoiceTag.ToString(), Increment, Count);

    OnChoiceRecorded.Broadcast(ChoiceTag, Count, Increment);
}

int32 UKausChoiceHistorySubsystem::GetChoiceCount(FGameplayTag ChoiceTag) const
{
    if (!ChoiceTag.IsValid())
    {
        return 0;
    }

    const int32* Found = ChoiceCounts.Find(ChoiceTag);
    return Found ? *Found : 0;
}

bool UKausChoiceHistorySubsystem::HasChoiceAtLeast(FGameplayTag ChoiceTag, int32 Threshold) const
{
    return GetChoiceCount(ChoiceTag) >= Threshold;
}

int32 UKausChoiceHistorySubsystem::GetTotalCountMatching(FGameplayTag ParentTag) const
{
    if (!ParentTag.IsValid())
    {
        return 0;
    }

    int32 Total = 0;
    for (const TPair<FGameplayTag, int32>& Entry : ChoiceCounts)
    {
        if (Entry.Key.MatchesTag(ParentTag))
        {
            Total += Entry.Value;
        }
    }
    return Total;
}

void UKausChoiceHistorySubsystem::ResetAllChoices()
{
    const int32 ClearedCount = ChoiceCounts.Num();
    ChoiceCounts.Empty();
    UE_LOG(LogKaus, Log, TEXT("[ResetAllChoices] Cleared %d choice entries"), ClearedCount);
}
