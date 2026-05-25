// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameTime/KausDisplayClockSubsystem.h"
#include "KausDisplayClockTestHelpers.generated.h"

// 주의: UHT는 #if 가드 안의 UCLASS/UFUNCTION을 거부하므로 이 헤더는 가드 없이 노출.
// 실제 사용은 cpp의 #if WITH_DEV_AUTOMATION_TESTS 블록 안에서만 발생 → Shipping 영향 무시 가능.

/**
 * UKausTestDisplayClockSubsystem
 *
 * 단위 테스트용 derived 클래스.
 *
 * 일반 Subsystem은 Initialize가 SubsystemCollection에 의해 호출되지만,
 * NewObject로 직접 만든 인스턴스에서는 그 흐름이 일어나지 않는다.
 * 테스트에서 명시적으로 초기 상태를 셋업하기 위한 helper 메서드 제공.
 *
 * Tick 비활성화 이유:
 *   UTickableWorldSubsystem은 생성 시 글로벌 Tickable 레지스트리에 자동 등록되며,
 *   초기화되지 않은 상태에서 Tick이 호출되면 ensure(bInitialized) 트립.
 *   테스트는 AdvanceClock을 직접 호출(TestAdvance)하므로 Tick 자체가 불필요.
 *   IsTickable() = false + GetTickableTickType() = Never로 레지스트리에서 제외.
 */
UCLASS()
class UKausTestDisplayClockSubsystem : public UKausDisplayClockSubsystem
{
    GENERATED_BODY()

public:
    /** 테스트 시작 시각 강제 설정 + 내부 상태 초기화. */
    void TestSetup(float InDayDurationSeconds, int32 InInitialMinuteOfDay)
    {
        DayDurationSeconds = InDayDurationSeconds;
        InitialMinuteOfDay = FMath::Clamp(InInitialMinuteOfDay, 0, 1439);
        AccumulatedMinutes = static_cast<float>(InitialMinuteOfDay);
        LastBroadcastedMinuteOfDay = InitialMinuteOfDay;
        LastBroadcastedHour = InitialMinuteOfDay / 60;
        bPaused = false;
    }

    /** AdvanceClock의 public wrapper. */
    void TestAdvance(float DeltaSeconds) { AdvanceClock(DeltaSeconds); }

    /** AccumulatedMinutes 직접 조회 (테스트 검증용). */
    float TestGetAccumulatedMinutes() const { return AccumulatedMinutes; }

    //~ FTickableGameObject — 테스트에서 Tick 자체를 끔 (ensure 우회)
    virtual bool IsTickable() const override { return false; }
    virtual ETickableTickType GetTickableTickType() const override { return ETickableTickType::Never; }
    //~ End FTickableGameObject
};

/**
 * MinuteOfDay 변경 알림 리스너 — 호출 횟수와 마지막 인자 기록.
 */
UCLASS()
class UKausDisplayClockMinuteOfDayListener : public UObject
{
    GENERATED_BODY()

public:
    int32 ChangedCount = 0;
    int32 LastNewMinuteOfDay = -1;
    int32 LastPreviousMinuteOfDay = -1;

    UFUNCTION()
    void HandleMinuteOfDayChanged(int32 NewMinuteOfDay, int32 PreviousMinuteOfDay)
    {
        ++ChangedCount;
        LastNewMinuteOfDay = NewMinuteOfDay;
        LastPreviousMinuteOfDay = PreviousMinuteOfDay;
    }
};

/**
 * Hour 변경 알림 리스너.
 */
UCLASS()
class UKausDisplayClockHourListener : public UObject
{
    GENERATED_BODY()

public:
    int32 ChangedCount = 0;
    int32 LastNewHour = -1;
    int32 LastPreviousHour = -1;

    UFUNCTION()
    void HandleHourChanged(int32 NewHour, int32 PreviousHour)
    {
        ++ChangedCount;
        LastNewHour = NewHour;
        LastPreviousHour = PreviousHour;
    }
};
