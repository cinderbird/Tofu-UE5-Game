// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KausPlayerTimeBudgetTestListeners.generated.h"

/**
 * 테스트용 OnRemainingChanged 리스너.
 *
 * UCLASS는 가드 없이 헤더에만. cpp가 사용처를 WITH_DEV_AUTOMATION_TESTS로 가드.
 */
UCLASS()
class UKausRemainingChangedListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;
    int32 LastNewRemaining = -1;
    int32 LastTotal = -1;
    int32 LastDeltaSpent = -999;

    /** 매 호출의 (NewRemaining, Total, DeltaSpent) 누적. */
    struct FRecord
    {
        int32 NewRemaining;
        int32 Total;
        int32 DeltaSpent;
    };
    TArray<FRecord> History;

    UFUNCTION()
    void Handle(int32 NewRemaining, int32 Total, int32 DeltaSpent)
    {
        ++CallCount;
        LastNewRemaining = NewRemaining;
        LastTotal = Total;
        LastDeltaSpent = DeltaSpent;
        History.Add({NewRemaining, Total, DeltaSpent});
    }

    void Reset()
    {
        CallCount = 0;
        LastNewRemaining = -1;
        LastTotal = -1;
        LastDeltaSpent = -999;
        History.Reset();
    }
};

/**
 * 테스트용 OnCanManualEndChanged 리스너.
 */
UCLASS()
class UKausCanManualEndChangedListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;
    bool LastValue = false;
    TArray<bool> History;

    UFUNCTION()
    void Handle(bool bCanManualEnd)
    {
        ++CallCount;
        LastValue = bCanManualEnd;
        History.Add(bCanManualEnd);
    }

    void Reset()
    {
        CallCount = 0;
        LastValue = false;
        History.Reset();
    }
};
