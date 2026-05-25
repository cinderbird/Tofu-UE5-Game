// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "KausNarrativeStateTestListeners.generated.h"

/**
 * Flag set/cleared 리스너.
 */
UCLASS()
class UKausNarrativeFlagListener : public UObject
{
    GENERATED_BODY()

public:
    int32 SetCount = 0;
    int32 ClearCount = 0;
    TArray<FGameplayTag> SetHistory;
    TArray<FGameplayTag> ClearHistory;

    UFUNCTION()
    void HandleSet(const FGameplayTag& ChangedTag)
    {
        ++SetCount;
        SetHistory.Add(ChangedTag);
    }

    UFUNCTION()
    void HandleClear(const FGameplayTag& ChangedTag)
    {
        ++ClearCount;
        ClearHistory.Add(ChangedTag);
    }

    void Reset()
    {
        SetCount = 0;
        ClearCount = 0;
        SetHistory.Reset();
        ClearHistory.Reset();
    }
};

/**
 * Counter changed 리스너.
 */
UCLASS()
class UKausNarrativeCounterListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;
    FGameplayTag LastTag;
    int32 LastValue = 0;

    struct FRecord
    {
        FGameplayTag Tag;
        int32 Value;
    };
    TArray<FRecord> History;

    UFUNCTION()
    void Handle(const FGameplayTag& ChangedTag, int32 NewValue)
    {
        ++CallCount;
        LastTag = ChangedTag;
        LastValue = NewValue;
        History.Add({ChangedTag, NewValue});
    }

    void Reset()
    {
        CallCount = 0;
        LastTag = FGameplayTag::EmptyTag;
        LastValue = 0;
        History.Reset();
    }
};

/**
 * Rebuilt 리스너.
 */
UCLASS()
class UKausNarrativeRebuiltListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;

    UFUNCTION()
    void Handle()
    {
        ++CallCount;
    }

    void Reset() { CallCount = 0; }
};
