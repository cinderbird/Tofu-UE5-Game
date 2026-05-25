// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "Calendar/KausGameDate.h"
#include "Calendar/KausCalendarTypes.h"
#include "KausCalendarTestListeners.generated.h"

// 주의:
//   UHT는 WITH_EDITORONLY_DATA 외의 전처리기 가드 안의 UCLASS/UFUNCTION을 거부한다.
//   따라서 이 클래스들은 가드 없이 항상 노출되며, 실제 사용은 cpp의
//   #if WITH_DEV_AUTOMATION_TESTS 가드 안에서만 발생한다.
//   결과적으로 Shipping 빌드에는 빈 UCLASS만 포함되며 코드 사이즈 영향은 무시 가능.

/**
 * UKausCalendarMetaListener
 *
 * 테스트 전용. OnDayMetaChanged 델리게이트 호출 횟수와 마지막 인자를 기록한다.
 *
 * Dynamic 델리게이트는 UFUNCTION 핸들러가 필요하므로 UCLASS로 정의해야 한다.
 * cpp 내부 inline UCLASS는 UHT가 처리하지 못하므로 별도 헤더로 분리.
 */
UCLASS()
class UKausCalendarMetaListener : public UObject
{
    GENERATED_BODY()

public:
    int32 ChangedCount = 0;
    FKausGameDate LastChangedDate;
    FKausDayMeta LastMeta;

    UFUNCTION()
    void HandleChanged(const FKausGameDate& Date, const FKausDayMeta& NewMeta)
    {
        ++ChangedCount;
        LastChangedDate = Date;
        LastMeta = NewMeta;
    }
};

/**
 * UKausCalendarRebuiltListener
 *
 * 테스트 전용. OnCalendarRebuilt 호출 횟수 기록.
 */
UCLASS()
class UKausCalendarRebuiltListener : public UObject
{
    GENERATED_BODY()

public:
    int32 RebuiltCount = 0;

    UFUNCTION()
    void HandleRebuilt() { ++RebuiltCount; }
};
