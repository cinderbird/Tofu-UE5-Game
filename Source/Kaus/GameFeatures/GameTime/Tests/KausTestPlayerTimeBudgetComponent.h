// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameTime/KausGameTimeComponent.h"
#include "GameTime/KausDayCycleSubsystem.h"
#include "KausTestPlayerTimeBudgetComponent.generated.h"

/**
 * 테스트용 GameTimeComponent.
 *
 * 베이스의 GetDayCycleSubsystem이 World/GameInstance 경로를 사용해 단위 테스트에서
 * 부적합 — 여기서 DI 방식으로 override.
 *
 * 또한 protected 메서드 EnterCycle / HandleCycleChanged를 public wrapper로 노출.
 */
UCLASS()
class UKausTestGameTimeComponent : public UKausGameTimeComponent
{
    GENERATED_BODY()

public:
    UKausDayCycleSubsystem* InjectedDayCycle = nullptr;

    void TestEnterCycle(const FGameplayTag& CycleTag) { EnterCycle(CycleTag); }

    UFUNCTION()
    void TestHandleCycleChanged(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint)
    {
        HandleCycleChanged(NewPoint, PreviousPoint);
    }

protected:
    virtual UKausDayCycleSubsystem* GetDayCycleSubsystem() const override
    {
        return InjectedDayCycle;
    }
};
