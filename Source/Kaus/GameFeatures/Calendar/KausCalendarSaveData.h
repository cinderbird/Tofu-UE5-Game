// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/SoftObjectPath.h"
#include "KausGameDate.h"
#include "KausCalendarTypes.h"
#include "KausCalendarSaveData.generated.h"

/**
 * FKausCalendarSaveData
 *
 * UKausCalendarSubsystem의 직렬화 가능한 상태.
 *
 * 보관:
 *  - ScheduleAssetPath: 어떤 Schedule을 사용 중이었는지 (복원 시 로드)
 *  - RuntimeOverrides: 런타임에 동적 추가/제거된 메타 변경
 *
 * 미보관:
 *  - 현재 날짜 / 진행 상태 → 별도 DayCycleSubsystem의 SaveData가 책임
 *  - ResolvedDays → Schedule을 복원하면 자동 재빌드
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausCalendarSaveData
{
    GENERATED_BODY()

    UPROPERTY()
    FSoftObjectPath ScheduleAssetPath;

    UPROPERTY()
    TMap<FKausGameDate, FKausDayRuntimeOverride> RuntimeOverrides;
};
