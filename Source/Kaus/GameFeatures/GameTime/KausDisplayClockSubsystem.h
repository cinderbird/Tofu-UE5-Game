// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KausDisplayClockSubsystem.generated.h"

/**
 * 정수 "Minute of Day"(0~1439) 변경 알림.
 * 자정 wrap 시 (0, 1439)로 발사됨.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDisplayClockMinuteOfDayChanged,
    int32, NewMinuteOfDay, int32, PreviousMinuteOfDay);

/**
 * 정수 "Hour"(0~23) 변경 알림.
 * OnMinuteOfDayChanged 직후 발사됨 (시 경계 통과 시).
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausDisplayClockHourChanged,
    int32, NewHour, int32, PreviousHour);

/**
 * UKausDisplayClockSubsystem
 *
 * Display 전용 가상 시계.
 *
 * 목적:
 *   "플레이어가 가만있어도 시간이 흐른다"를 시각적으로 보여주기 위함.
 *   UI 시계, 환경 라이팅, NPC 환경 반응 등에 사용.
 *
 * 비목적 (중요):
 *   - Cycle 진행 결정에 영향 없음. (DayCycleSubsystem과 무관)
 *   - 행동 비용 / Budget 차감과 무관. (UKausGameTimeComponent와 무관)
 *   - 게임 로직(EndPolicy 등)이 이 시계를 참조해서는 안 됨.
 *
 * 시간 표현:
 *   - "Minute of Day" (0~1439): 하루 안의 분 인덱스. 14:30 = 870.
 *     내부 좌표 / 보간용. 14:30 ↔ 870 변환은 (Hour*60 + MinuteOfHour).
 *   - "Hour" (0~23): 시계의 시 표시.
 *   - "Minute of Hour" (0~59): 시계의 분 표시.
 *   - 시계 UI는 (Hour, MinuteOfHour) 쌍으로 표시: 예 14:30.
 *
 * 흐름 비율:
 *   DayDurationSeconds(Settings) 기준.
 *     86400 = 실시간 동기 (1 가상분 = 1 실제분).
 *     600   = 실시간 10분에 하루.
 *     0 이하 = 정지.
 *
 * 라이프사이클:
 *   WorldSubsystem이므로 레벨 전환 시 자동 재생성.
 *   시각도 0(또는 Settings.InitialHour:InitialMinute)으로 리셋.
 *
 * 의존성: 없음. 어떤 다른 Kaus 시스템도 참조하지 않는다.
 */
UCLASS()
class KAUS_API UKausDisplayClockSubsystem : public UTickableWorldSubsystem
{
    GENERATED_BODY()

public:
    //~ UWorldSubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual bool DoesSupportWorldType(const EWorldType::Type WorldType) const override;
    //~ End UWorldSubsystem

    //~ FTickableGameObject
    virtual void Tick(float DeltaTime) override;
    virtual TStatId GetStatId() const override;
    virtual bool IsTickable() const override;
    virtual ETickableTickType GetTickableTickType() const override;
    //~ End FTickableGameObject

    // ─────────────────────────────────────────────────────────────────
    //  조회
    // ─────────────────────────────────────────────────────────────────

    /**
     * 현재 시각의 "하루 안의 분 인덱스" (0~1439).
     * 예: 14:30 → 870.
     * 내부 좌표 / 정밀 비교용. UI 표시는 GetCurrentHour + GetCurrentMinuteOfHour 사용.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DisplayClock")
    int32 GetCurrentMinuteOfDay() const;

    /**
     * 현재 가상 시(Hour), 0~23.
     * 시계의 시 표시.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DisplayClock")
    int32 GetCurrentHour() const;

    /**
     * 현재 시 안의 분, 0~59.
     * 시계의 분 표시. 예: 14:30이면 30.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DisplayClock")
    int32 GetCurrentMinuteOfHour() const;

    /**
     * 현재 시각의 "하루 안의 분 인덱스" 부동소수점 (0.0~1440.0).
     * 라이팅/오디오 보간 등 연속 변화가 필요한 곳에서 사용.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DisplayClock")
    float GetCurrentMinuteOfDayFloat() const { return AccumulatedMinutes; }

    /** 일시정지 상태인지. */
    UFUNCTION(BlueprintPure, Category = "Kaus|DisplayClock")
    bool IsPaused() const { return bPaused; }

    // ─────────────────────────────────────────────────────────────────
    //  제어
    // ─────────────────────────────────────────────────────────────────

    /**
     * "하루 안의 분 인덱스"(0~1439) 단위로 시각 강제 설정. 클램프 적용.
     * 시/분 경계 변경 시 OnMinuteOfDayChanged / OnHourChanged 발사.
     * 시계 UI에서 호출할 일은 거의 없음 — SetCurrentTime(Hour, Minute) 권장.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DisplayClock")
    void SetCurrentMinuteOfDay(int32 MinuteOfDay);

    /**
     * 시/분 단위로 시각 강제 설정.
     * Hour는 0~23, Minute는 0~59로 클램프 후 SetCurrentMinuteOfDay(Hour*60+Minute) 호출.
     * UI/디버그/시네마틱에서 직관적인 호출용. 예: SetCurrentTime(14, 30) → 14:30.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DisplayClock")
    void SetCurrentTime(int32 Hour, int32 Minute);

    /** 시계 정지. Tick에서 시간 누적 안 함. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DisplayClock")
    void Pause() { bPaused = true; }

    /** 시계 재개. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DisplayClock")
    void Resume() { bPaused = false; }

    // ─────────────────────────────────────────────────────────────────
    //  델리게이트
    // ─────────────────────────────────────────────────────────────────

    /**
     * "하루 안의 분 인덱스"(0~1439)가 변경될 때 발사.
     * (NewMinuteOfDay, PreviousMinuteOfDay). 자정 wrap 시 (0, 1439).
     */
    UPROPERTY(BlueprintAssignable, Category = "Kaus|DisplayClock")
    FKausDisplayClockMinuteOfDayChanged OnMinuteOfDayChanged;

    /** 정수 시(Hour)가 변경될 때 발사. OnMinuteOfDayChanged 직후. */
    UPROPERTY(BlueprintAssignable, Category = "Kaus|DisplayClock")
    FKausDisplayClockHourChanged OnHourChanged;

protected:
    // ─────────────────────────────────────────────────────────────────
    //  설정 캐시 (Settings에서 Initialize 시점에 복사됨)
    //
    //  진실 공급원(source of truth)은 UKausDisplayClockSettings.
    //  여기 값은 Tick마다 Settings를 조회하지 않기 위한 런타임 캐시.
    //  테스트 환경에서는 TestSetup으로 직접 주입.
    // ─────────────────────────────────────────────────────────────────

    /** 가상 하루가 흐르는 데 걸리는 실시간 초. Settings.DayDurationSeconds의 캐시. */
    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|Config")
    float DayDurationSeconds = 86400.0f;

    /** 시계의 초기 "Minute of Day"(0~1439). Settings.GetInitialMinuteOfDay()의 캐시. */
    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|Config")
    int32 InitialMinuteOfDay = 0;

    // ─────────────────────────────────────────────────────────────────
    //  상태
    // ─────────────────────────────────────────────────────────────────

    /** 현재 "Minute of Day" 부동소수점 누적값. [0, 1440). */
    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|State")
    float AccumulatedMinutes = 0.0f;

    /** 마지막으로 발사한 정수 "Minute of Day". 변경 감지용. */
    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|State")
    int32 LastBroadcastedMinuteOfDay = 0;

    /** 마지막으로 발사한 정수 시(Hour). 변경 감지용. */
    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|State")
    int32 LastBroadcastedHour = 0;

    UPROPERTY(VisibleAnywhere, Transient, Category = "Kaus|DisplayClock|State")
    bool bPaused = false;

    /**
     * 시간을 DeltaSeconds만큼 진행. Tick의 핵심 로직.
     *
     * 분리한 이유: 단위 테스트가 World/Tick 의존성 없이 시간 흐름을 검증할 수 있도록.
     * Tick은 이 메서드를 호출하는 얇은 래퍼.
     */
    void AdvanceClock(float DeltaSeconds);

private:
    /**
     * 현재 AccumulatedMinutes 기준으로 분/시 경계 통과 여부 검사 후 델리게이트 발사.
     * 발사 순서: OnMinuteOfDayChanged → (시 경계 통과 시) OnHourChanged.
     */
    void BroadcastIfBoundaryCrossed();
};
