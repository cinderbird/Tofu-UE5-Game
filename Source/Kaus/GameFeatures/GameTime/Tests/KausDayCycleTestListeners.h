// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameTime/KausDayCycleTypes.h"
#include "Calendar/KausGameDate.h"
#include "KausDayCycleTestListeners.generated.h"

/**
 * 테스트용 OnCycleChanged 리스너.
 *
 * UCLASS는 가드 없이 헤더에만. cpp가 사용처를 WITH_DEV_AUTOMATION_TESTS로 가드.
 * 자동화 테스트 외에는 인스턴스화되지 않으므로 패키지 빌드 부담 없음.
 */
UCLASS()
class UKausDayCycleChangedListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;
    FKausDayCyclePoint LastNew;
    FKausDayCyclePoint LastPrevious;

    /** 발행 이력 — 매 호출의 (New, Previous) 페어를 누적 저장. */
    TArray<TPair<FKausDayCyclePoint, FKausDayCyclePoint>> History;

    UFUNCTION()
    void Handle(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint)
    {
        ++CallCount;
        LastNew = NewPoint;
        LastPrevious = PreviousPoint;
        History.Emplace(NewPoint, PreviousPoint);
    }

    void Reset()
    {
        CallCount = 0;
        LastNew = FKausDayCyclePoint{};
        LastPrevious = FKausDayCyclePoint{};
        History.Reset();
    }
};

/**
 * 테스트용 OnDateChanged 리스너.
 */
UCLASS()
class UKausDayCycleDateChangedListener : public UObject
{
    GENERATED_BODY()

public:
    int32 CallCount = 0;
    FKausGameDate LastNew;
    FKausGameDate LastPrevious;

    TArray<TPair<FKausGameDate, FKausGameDate>> History;

    UFUNCTION()
    void Handle(const FKausGameDate& NewDate, const FKausGameDate& PreviousDate)
    {
        ++CallCount;
        LastNew = NewDate;
        LastPrevious = PreviousDate;
        History.Emplace(NewDate, PreviousDate);
    }

    void Reset()
    {
        CallCount = 0;
        LastNew = FKausGameDate{};
        LastPrevious = FKausGameDate{};
        History.Reset();
    }
};
