// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "KausDisplayClockSettings.generated.h"

/**
 * UKausDisplayClockSettings
 *
 * Display 시계의 글로벌 기본값.
 *
 * 노출 위치: Edit > Project Settings > Game > Kaus Display Clock
 * 저장 위치: DefaultGame.ini → [/Script/Kaus.KausDisplayClockSettings]
 *
 * 사용:
 *   - UKausDisplayClockSubsystem이 Initialize 시 이 Settings를 읽어
 *     자기 상태(DayDurationSeconds, 시작 시각)를 결정.
 *   - 레벨별로 다른 시작 시각이 필요한 경우 레벨 BP의 BeginPlay에서
 *     SetCurrentTime / SetCurrentMinute을 호출해 덮어쓴다.
 *
 * 디자이너 워크플로우:
 *   1. Project Settings에서 DayDurationSeconds 조정
 *      (예: 86400=실시간, 600=10분에 하루)
 *   2. InitialHour / InitialMinute로 게임 시작 기본 시각 설정
 *   3. 레벨별로 다르게 하려면 해당 레벨 BP에서 직접 SetCurrentTime 호출
 */
UCLASS(Config=Game, DefaultConfig, meta=(DisplayName="Kaus Display Clock"))
class KAUS_API UKausDisplayClockSettings : public UDeveloperSettings
{
    GENERATED_BODY()

public:
    UKausDisplayClockSettings();

    //~ UDeveloperSettings
    virtual FName GetCategoryName() const override { return FName(TEXT("Game")); }
    //~ End UDeveloperSettings

    /**
     * 가상 하루(1440분)가 흐르는 데 걸리는 실시간 초.
     *
     *   86400 = 실시간 동기 (1 가상분 = 1 실제분, 기본값)
     *   3600  = 1시간 만에 하루
     *   600   = 10분 만에 하루
     *   60    = 1분 만에 하루 (~24배속)
     *
     * 0 이하면 시계 정지.
     */
    UPROPERTY(EditAnywhere, Config, Category = "Time Flow",
        meta = (ClampMin = "0.0",
                ToolTip = "How many real seconds it takes for one virtual day (1440 minutes) to pass. Example: 86400 = real-time sync, 600 = one virtual day per 10 real minutes."))
    float DayDurationSeconds = 86400.0f;

    /** 게임/레벨 시작 시 시계의 초기 시(0~23). */
    UPROPERTY(EditAnywhere, Config, Category = "Initial Time",
        meta = (ClampMin = "0", ClampMax = "23",
                ToolTip = "Starting hour of the clock (0-23)."))
    int32 InitialHour = 0;

    /** 게임/레벨 시작 시 시계의 초기 분(0~59). */
    UPROPERTY(EditAnywhere, Config, Category = "Initial Time",
        meta = (ClampMin = "0", ClampMax = "59",
                ToolTip = "Starting minute of the clock (0-59)."))
    int32 InitialMinute = 0;

    /** 시작 시각을 분 단위(0~1439)로 반환. InitialHour*60 + InitialMinute, 클램프 적용. */
    int32 GetInitialMinuteOfDay() const
    {
        const int32 H = FMath::Clamp(InitialHour, 0, 23);
        const int32 M = FMath::Clamp(InitialMinute, 0, 59);
        return H * 60 + M;
    }
};
