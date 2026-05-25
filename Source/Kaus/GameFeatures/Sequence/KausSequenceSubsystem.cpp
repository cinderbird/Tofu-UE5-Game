#include "Sequence/KausSequenceSubsystem.h"
#include "Sequence/KausSequenceDirector.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausSequenceSubsystem, Log, All);

void UKausSequenceSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogKausSequenceSubsystem, Log,
        TEXT("KausSequenceSubsystem Initialized: %s"),
        GetWorld() ? *GetWorld()->GetName() : TEXT("Unknown"));
}

void UKausSequenceSubsystem::Deinitialize()
{
    ActiveDirectors.Empty();
    UE_LOG(LogKausSequenceSubsystem, Log, TEXT("KausSequenceSubsystem Deinitialized."));
    Super::Deinitialize();
}

void UKausSequenceSubsystem::RegisterDirector(UKausSequenceDirector* Director)
{
    if (!Director) return;

    for (const auto& W : ActiveDirectors)
    {
        if (W.Get() == Director) return;
    }

    ActiveDirectors.Add(Director);
    UE_LOG(LogKausSequenceSubsystem, Log,
        TEXT("Director Registered: %s"), *GetNameSafe(Director->GetOwner()));
}

void UKausSequenceSubsystem::UnregisterDirector(UKausSequenceDirector* Director)
{
    ActiveDirectors.RemoveAll([Director](const TWeakObjectPtr<UKausSequenceDirector>& W)
    {
        return !W.IsValid() || W.Get() == Director;
    });
}

UKausSequenceDirector* UKausSequenceSubsystem::GetActiveDirector() const
{
    for (int32 i = ActiveDirectors.Num() - 1; i >= 0; --i)
    {
        if (ActiveDirectors[i].IsValid())
            return ActiveDirectors[i].Get();
    }
    return nullptr;
}