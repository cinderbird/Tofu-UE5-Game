// Copyright Project Kaus. All Rights Reserved.

#include "GameTime/KausDisplayClockSubsystem.h"
#include "KausDisplayClockSettings.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausDisplayClock, Log, All);

namespace KausDisplayClock
{
    static constexpr int32 MinutesPerDay = 1440;  // 24 * 60
    static constexpr int32 MinutesPerHour = 60;
}

// =============================================================================
//  Subsystem 라이프사이클
// =============================================================================

void UKausDisplayClockSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // Project Settings에서 글로벌 기본값 로드.
    // GetDefault는 CDO를 반환 — DefaultGame.ini의 값이 반영된 상태.
    if (const UKausDisplayClockSettings* Settings = GetDefault<UKausDisplayClockSettings>())
    {
        DayDurationSeconds = Settings->DayDurationSeconds;
        InitialMinuteOfDay = Settings->GetInitialMinuteOfDay();
    }

    // 캐시 클램프 (외부 변경에 대한 방어).
    const int32 ClampedInitial = FMath::Clamp(InitialMinuteOfDay, 0, KausDisplayClock::MinutesPerDay - 1);
    AccumulatedMinutes = static_cast<float>(ClampedInitial);
    LastBroadcastedMinuteOfDay = ClampedInitial;
    LastBroadcastedHour = ClampedInitial / KausDisplayClock::MinutesPerHour;
    bPaused = false;

    UE_LOG(LogKausDisplayClock, Log,
        TEXT("[DisplayClock] Initialized at %02d:%02d (MinuteOfDay=%d, DayDuration=%.1fs)"),
        ClampedInitial / KausDisplayClock::MinutesPerHour,
        ClampedInitial % KausDisplayClock::MinutesPerHour,
        ClampedInitial,
        DayDurationSeconds);
}

bool UKausDisplayClockSubsystem::DoesSupportWorldType(const EWorldType::Type WorldType) const
{
    // Game / PIE만 지원. Editor 미리보기, EditorPreview, Inactive 등은 제외.
    return WorldType == EWorldType::Game || WorldType == EWorldType::PIE;
}

// =============================================================================
//  Tick
// =============================================================================

void UKausDisplayClockSubsystem::Tick(float DeltaTime)
{
    AdvanceClock(DeltaTime);
}

void UKausDisplayClockSubsystem::AdvanceClock(float DeltaSeconds)
{
    if (bPaused) return;
    if (DayDurationSeconds <= 0.0f) return;
    if (DeltaSeconds <= 0.0f) return;

    // 실시간 N초 → 가상 (1440 / DayDurationSeconds × N) 분.
    const float MinutesPerSecond = static_cast<float>(KausDisplayClock::MinutesPerDay) / DayDurationSeconds;
    AccumulatedMinutes += DeltaSeconds * MinutesPerSecond;

    // 자정 wrap. 큰 DeltaSeconds + 짧은 DayDuration이면 한 프레임에 여러 바퀴 가능 — fmod로 처리.
    if (AccumulatedMinutes >= static_cast<float>(KausDisplayClock::MinutesPerDay))
    {
        AccumulatedMinutes = FMath::Fmod(AccumulatedMinutes, static_cast<float>(KausDisplayClock::MinutesPerDay));
    }

    BroadcastIfBoundaryCrossed();
}

TStatId UKausDisplayClockSubsystem::GetStatId() const
{
    RETURN_QUICK_DECLARE_CYCLE_STAT(UKausDisplayClockSubsystem, STATGROUP_Tickables);
}

bool UKausDisplayClockSubsystem::IsTickable() const
{
    // CDO는 tick하지 않음.
    return !IsTemplate();
}

ETickableTickType UKausDisplayClockSubsystem::GetTickableTickType() const
{
    return IsTemplate() ? ETickableTickType::Never : ETickableTickType::Always;
}

// =============================================================================
//  조회
// =============================================================================

int32 UKausDisplayClockSubsystem::GetCurrentMinuteOfDay() const
{
    // floor 기반 정수 변환. AccumulatedMinutes는 [0, 1440) 범위 보장.
    const int32 Minute = FMath::FloorToInt(AccumulatedMinutes);
    return FMath::Clamp(Minute, 0, KausDisplayClock::MinutesPerDay - 1);
}

int32 UKausDisplayClockSubsystem::GetCurrentHour() const
{
    return GetCurrentMinuteOfDay() / KausDisplayClock::MinutesPerHour;
}

int32 UKausDisplayClockSubsystem::GetCurrentMinuteOfHour() const
{
    return GetCurrentMinuteOfDay() % KausDisplayClock::MinutesPerHour;
}

// =============================================================================
//  제어
// =============================================================================

void UKausDisplayClockSubsystem::SetCurrentMinuteOfDay(int32 MinuteOfDay)
{
    const int32 Clamped = FMath::Clamp(MinuteOfDay, 0, KausDisplayClock::MinutesPerDay - 1);
    AccumulatedMinutes = static_cast<float>(Clamped);
    BroadcastIfBoundaryCrossed();
}

void UKausDisplayClockSubsystem::SetCurrentTime(int32 Hour, int32 Minute)
{
    const int32 ClampedHour = FMath::Clamp(Hour, 0, 23);
    const int32 ClampedMinute = FMath::Clamp(Minute, 0, 59);
    SetCurrentMinuteOfDay(ClampedHour * KausDisplayClock::MinutesPerHour + ClampedMinute);
}

// =============================================================================
//  내부
// =============================================================================

void UKausDisplayClockSubsystem::BroadcastIfBoundaryCrossed()
{
    const int32 NewMinuteOfDay = GetCurrentMinuteOfDay();
    const int32 NewHour = NewMinuteOfDay / KausDisplayClock::MinutesPerHour;

    if (NewMinuteOfDay != LastBroadcastedMinuteOfDay)
    {
        const int32 PrevMinuteOfDay = LastBroadcastedMinuteOfDay;
        LastBroadcastedMinuteOfDay = NewMinuteOfDay;
        OnMinuteOfDayChanged.Broadcast(NewMinuteOfDay, PrevMinuteOfDay);
    }

    if (NewHour != LastBroadcastedHour)
    {
        const int32 PrevHour = LastBroadcastedHour;
        LastBroadcastedHour = NewHour;
        OnHourChanged.Broadcast(NewHour, PrevHour);
    }
}
