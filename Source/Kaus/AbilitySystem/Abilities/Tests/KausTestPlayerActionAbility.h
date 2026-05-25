// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/KausPlayerActionAbility.h"
#include "KausTestPlayerActionAbility.generated.h"

/**
 * 테스트용 concrete ability — UKausPlayerActionAbility는 Abstract라 직접 NewObject 불가.
 *
 * UCLASS는 가드 없이 헤더에. cpp가 사용처를 WITH_DEV_AUTOMATION_TESTS로 가드.
 */
UCLASS()
class UKausTestPlayerActionAbility : public UKausPlayerActionAbility
{
    GENERATED_BODY()
};
