// Copyright Project Kaus. All Rights Reserved.

#include "KausCalendarSubsystem.h"
#include "KausCalendarSchedule.h"
#include "KausCalendarSystem.h"
#include "Tags/KausCalendarTags.h"
#include "Logging/LogMacros.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausCalendar, Log, All);

// =============================================================================
//  FKausDayMeta 헬퍼 구현
//  (KausCalendarTags에 의존하므로 Subsystem cpp에 둠. 헤더 의존성 최소화 목적.)
// =============================================================================

bool FKausDayMeta::IsWeekday() const
{
    return Tags.HasTag(KausCalendarTags::Calendar_Day_Weekday);
}

bool FKausDayMeta::IsWeekend() const
{
    return Tags.HasTag(KausCalendarTags::Calendar_Day_Weekend);
}

bool FKausDayMeta::IsHoliday() const
{
    return Tags.HasTag(KausCalendarTags::Calendar_Day_Holiday);
}

bool FKausDayMeta::IsSpecial() const
{
    return Tags.HasTag(KausCalendarTags::Calendar_Day_Special);
}

// =============================================================================
//  USubsystem
// =============================================================================

void UKausCalendarSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);
    UE_LOG(LogKausCalendar, Log, TEXT("[Calendar] Subsystem Initialized"));
}

void UKausCalendarSubsystem::Deinitialize()
{
    OnDayMetaChanged.Clear();
    OnCalendarRebuilt.Clear();
    ResolvedDays.Reset();
    RuntimeOverrides.Reset();
    CurrentSchedule = nullptr;
    UE_LOG(LogKausCalendar, Log, TEXT("[Calendar] Subsystem Deinitialized"));
    Super::Deinitialize();
}

// =============================================================================
//  초기화
// =============================================================================

bool UKausCalendarSubsystem::InitializeWithSchedule(UKausCalendarSchedule* Schedule)
{
    check(IsInGameThread());

    if (!Schedule)
    {
        UE_LOG(LogKausCalendar, Warning, TEXT("[Calendar] InitializeWithSchedule: null Schedule"));
        return false;
    }

    if (!Schedule->IsScheduleValid())
    {
        UE_LOG(LogKausCalendar, Warning,
            TEXT("[Calendar] InitializeWithSchedule: Schedule '%s' is invalid"),
            *Schedule->GetName());
        return false;
    }

    CurrentSchedule = Schedule;
    RuntimeOverrides.Reset();
    RebuildResolvedDays();

    OnCalendarRebuilt.Broadcast();

    UE_LOG(LogKausCalendar, Log,
        TEXT("[Calendar] Initialized with Schedule '%s', Total Days = %d"),
        *Schedule->GetName(), ResolvedDays.Num());
    return true;
}

UKausCalendarSystem* UKausCalendarSubsystem::GetCalendarSystem() const
{
    return CurrentSchedule ? CurrentSchedule->CalendarSystem : nullptr;
}

// =============================================================================
//  범위 쿼리
// =============================================================================

FKausGameDate UKausCalendarSubsystem::GetStartDate() const
{
    return CurrentSchedule ? CurrentSchedule->StartDate : FKausGameDate{};
}

FKausGameDate UKausCalendarSubsystem::GetEndDate() const
{
    return CurrentSchedule ? CurrentSchedule->EndDate : FKausGameDate{};
}

int32 UKausCalendarSubsystem::GetTotalDayCount() const
{
    return ResolvedDays.Num();
}

bool UKausCalendarSubsystem::IsDateInRange(const FKausGameDate& Date) const
{
    if (!CurrentSchedule) return false;
    return !(Date < CurrentSchedule->StartDate) && !(CurrentSchedule->EndDate < Date);
}

int32 UKausCalendarSubsystem::DateToIndex(const FKausGameDate& Date) const
{
    const int32 Resolved = DateToResolvedIndex(Date);
    return (Resolved == INDEX_NONE) ? INDEX_NONE : (Resolved + 1);  // 1-based
}

FKausGameDate UKausCalendarSubsystem::IndexToDate(int32 OneBasedIndex) const
{
    if (OneBasedIndex < 1 || OneBasedIndex > ResolvedDays.Num())
    {
        return FKausGameDate{};
    }
    return ResolvedDays[OneBasedIndex - 1].Date;
}

// =============================================================================
//  메타 조회
// =============================================================================

bool UKausCalendarSubsystem::TryGetDayMeta(const FKausGameDate& Date, FKausDayMeta& OutMeta) const
{
    return BuildEffectiveMeta(Date, OutMeta);
}

TArray<FKausDayMeta> UKausCalendarSubsystem::GetAllDayMetas() const
{
    TArray<FKausDayMeta> Result;
    Result.Reserve(ResolvedDays.Num());
    for (const FKausDayMeta& Seed : ResolvedDays)
    {
        FKausDayMeta Effective;
        if (BuildEffectiveMeta(Seed.Date, Effective))
        {
            Result.Add(MoveTemp(Effective));
        }
    }
    return Result;
}

// =============================================================================
//  메타 검색
// =============================================================================

bool UKausCalendarSubsystem::FindNextDayWithTag(const FKausGameDate& From, FGameplayTag Tag, FKausGameDate& OutDate) const
{
    if (!Tag.IsValid() || ResolvedDays.Num() == 0)
    {
        return false;
    }

    // From 다음 날부터 시작
    int32 StartIdx = 0;
    {
        const int32 FromResolvedIdx = DateToResolvedIndex(From);
        if (FromResolvedIdx == INDEX_NONE)
        {
            // From이 범위 밖이면 어디서 시작할지 결정:
            // - From이 StartDate 이전 → 0부터
            // - From이 EndDate 이후 → 검색 불가
            if (CurrentSchedule && CurrentSchedule->EndDate < From) return false;
            StartIdx = 0;
        }
        else
        {
            StartIdx = FromResolvedIdx + 1;
        }
    }

    for (int32 i = StartIdx; i < ResolvedDays.Num(); ++i)
    {
        FKausDayMeta Effective;
        if (BuildEffectiveMeta(ResolvedDays[i].Date, Effective)
            && Effective.Tags.HasTag(Tag))
        {
            OutDate = Effective.Date;
            return true;
        }
    }
    return false;
}

TArray<FKausGameDate> UKausCalendarSubsystem::FindAllDaysWithTag(FGameplayTag Tag) const
{
    TArray<FKausGameDate> Result;
    if (!Tag.IsValid()) return Result;

    for (const FKausDayMeta& Seed : ResolvedDays)
    {
        FKausDayMeta Effective;
        if (BuildEffectiveMeta(Seed.Date, Effective)
            && Effective.Tags.HasTag(Tag))
        {
            Result.Add(Effective.Date);
        }
    }
    return Result;
}

// =============================================================================
//  런타임 메타 변경
// =============================================================================

bool UKausCalendarSubsystem::AddRuntimeTag(const FKausGameDate& Date, FGameplayTag Tag)
{
    check(IsInGameThread());

    if (!Tag.IsValid()) return false;

    return ApplyRuntimeOverride(Date, [Tag](FKausDayRuntimeOverride& O)
    {
        // Add/Remove 충돌 방지: 한쪽에서 빼고 다른 쪽에 더함
        O.ExclusionTags.RemoveTag(Tag);
        O.AdditionalTags.AddTag(Tag);
    });
}

bool UKausCalendarSubsystem::RemoveRuntimeTag(const FKausGameDate& Date, FGameplayTag Tag)
{
    check(IsInGameThread());

    if (!Tag.IsValid()) return false;

    return ApplyRuntimeOverride(Date, [Tag](FKausDayRuntimeOverride& O)
    {
        O.AdditionalTags.RemoveTag(Tag);
        O.ExclusionTags.AddTag(Tag);
    });
}

bool UKausCalendarSubsystem::SetRuntimeDisplayName(const FKausGameDate& Date, const FText& NewName)
{
    check(IsInGameThread());

    return ApplyRuntimeOverride(Date, [&NewName](FKausDayRuntimeOverride& O)
    {
        if (NewName.IsEmpty())
        {
            O.bHasDisplayNameOverride = false;
            O.DisplayNameOverride = FText::GetEmpty();
        }
        else
        {
            O.bHasDisplayNameOverride = true;
            O.DisplayNameOverride = NewName;
        }
    });
}

bool UKausCalendarSubsystem::ClearRuntimeOverrides(const FKausGameDate& Date)
{
    check(IsInGameThread());

    if (!IsDateInRange(Date)) return false;

    if (RuntimeOverrides.Remove(Date) > 0)
    {
        BroadcastMetaChanged(Date);
        return true;
    }
    return false;
}

void UKausCalendarSubsystem::ClearAllRuntimeOverrides()
{
    check(IsInGameThread());

    if (RuntimeOverrides.Num() == 0) return;

    TArray<FKausGameDate> AffectedDates;
    RuntimeOverrides.GetKeys(AffectedDates);
    RuntimeOverrides.Reset();

    for (const FKausGameDate& Date : AffectedDates)
    {
        BroadcastMetaChanged(Date);
    }
}

// =============================================================================
//  영속화
// =============================================================================

FKausCalendarSaveData UKausCalendarSubsystem::CaptureSaveData() const
{
    FKausCalendarSaveData Data;
    if (CurrentSchedule)
    {
        Data.ScheduleAssetPath = FSoftObjectPath(CurrentSchedule);
    }
    Data.RuntimeOverrides = RuntimeOverrides;
    return Data;
}

bool UKausCalendarSubsystem::RestoreFromSaveData(const FKausCalendarSaveData& Data)
{
    check(IsInGameThread());

    UKausCalendarSchedule* Schedule = nullptr;
    if (Data.ScheduleAssetPath.IsValid())
    {
        UObject* Loaded = Data.ScheduleAssetPath.TryLoad();
        Schedule = Cast<UKausCalendarSchedule>(Loaded);
    }

    if (!Schedule)
    {
        UE_LOG(LogKausCalendar, Warning,
            TEXT("[Calendar] RestoreFromSaveData: failed to load Schedule from %s"),
            *Data.ScheduleAssetPath.ToString());
        return false;
    }

    if (!InitializeWithSchedule(Schedule))
    {
        return false;
    }

    // 오버라이드 복원 + 변경 알림
    for (const TPair<FKausGameDate, FKausDayRuntimeOverride>& Pair : Data.RuntimeOverrides)
    {
        if (IsDateInRange(Pair.Key) && !Pair.Value.IsEmpty())
        {
            RuntimeOverrides.Add(Pair.Key, Pair.Value);
            BroadcastMetaChanged(Pair.Key);
        }
    }

    return true;
}

// =============================================================================
//  내부 — 빌드
// =============================================================================

void UKausCalendarSubsystem::RebuildResolvedDays()
{
    ResolvedDays.Reset();

    if (!CurrentSchedule || !CurrentSchedule->IsScheduleValid())
    {
        return;
    }

    UKausCalendarSystem* Sys = CurrentSchedule->CalendarSystem;
    const FKausGameDate Start = CurrentSchedule->StartDate;
    const FKausGameDate End = CurrentSchedule->EndDate;
    const int32 Total = Sys->DaysBetween(Start, End) + 1;

    if (Total <= 0)
    {
        return;
    }

    ResolvedDays.Reserve(Total);

    // 시드를 Date로 인덱싱
    TMap<FKausGameDate, const FKausDaySeed*> SeedMap;
    SeedMap.Reserve(CurrentSchedule->SeedDayMetas.Num());
    for (const FKausDaySeed& Seed : CurrentSchedule->SeedDayMetas)
    {
        SeedMap.Add(Seed.Date, &Seed);
    }

    for (int32 i = 0; i < Total; ++i)
    {
        FKausDayMeta Meta;
        Meta.Date = Sys->AddDays(Start, i);
        Meta.WeekdayIndex = Sys->GetWeekdayIndex(Meta.Date, Start, CurrentSchedule->StartWeekdayIndex);

        // 1) 자동 평일/주말
        if (CurrentSchedule->WeekendWeekdayIndices.Contains(Meta.WeekdayIndex))
        {
            Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Weekend);
        }
        else
        {
            Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Weekday);
        }

        // 2) 매년 반복 휴일
        for (const FKausRecurringHoliday& H : CurrentSchedule->RecurringHolidays)
        {
            if (Meta.Date.Month == H.Month && Meta.Date.Day == H.Day)
            {
                Meta.Tags.AddTag(KausCalendarTags::Calendar_Day_Holiday);
                if (H.Marker.IsValid())
                {
                    Meta.Tags.AddTag(H.Marker);
                }
            }
        }

        // 3) 시드 병합
        if (const FKausDaySeed** SeedPP = SeedMap.Find(Meta.Date))
        {
            const FKausDaySeed& Seed = **SeedPP;
            Meta.Tags.AppendTags(Seed.AdditionalTags);
            if (!Seed.DisplayNameOverride.IsEmpty())
            {
                Meta.DisplayName = Seed.DisplayNameOverride;
            }
        }

        ResolvedDays.Add(MoveTemp(Meta));
    }

    UE_LOG(LogKausCalendar, Verbose,
        TEXT("[Calendar] RebuildResolvedDays: %d days from %s to %s"),
        ResolvedDays.Num(), *Start.ToString(), *End.ToString());
}

int32 UKausCalendarSubsystem::DateToResolvedIndex(const FKausGameDate& Date) const
{
    if (!CurrentSchedule || !CurrentSchedule->CalendarSystem) return INDEX_NONE;
    if (!IsDateInRange(Date)) return INDEX_NONE;

    const int32 Idx = CurrentSchedule->CalendarSystem->DaysBetween(
        CurrentSchedule->StartDate, Date);

    if (Idx < 0 || Idx >= ResolvedDays.Num()) return INDEX_NONE;
    return Idx;
}

bool UKausCalendarSubsystem::BuildEffectiveMeta(const FKausGameDate& Date, FKausDayMeta& OutMeta) const
{
    const int32 Idx = DateToResolvedIndex(Date);
    if (Idx == INDEX_NONE) return false;

    OutMeta = ResolvedDays[Idx];  // 시드 사본

    if (const FKausDayRuntimeOverride* Override = RuntimeOverrides.Find(Date))
    {
        // 1) Exclusion 먼저
        OutMeta.Tags.RemoveTags(Override->ExclusionTags);
        // 2) Additional 추가
        OutMeta.Tags.AppendTags(Override->AdditionalTags);
        // 3) DisplayName 오버라이드
        if (Override->bHasDisplayNameOverride)
        {
            OutMeta.DisplayName = Override->DisplayNameOverride;
        }
    }

    return true;
}

bool UKausCalendarSubsystem::ApplyRuntimeOverride(const FKausGameDate& Date,
    TFunctionRef<void(FKausDayRuntimeOverride&)> Mutator)
{
    if (!IsDateInRange(Date)) return false;

    FKausDayRuntimeOverride& Override = RuntimeOverrides.FindOrAdd(Date);
    Mutator(Override);

    if (Override.IsEmpty())
    {
        RuntimeOverrides.Remove(Date);
    }

    BroadcastMetaChanged(Date);
    return true;
}

void UKausCalendarSubsystem::BroadcastMetaChanged(const FKausGameDate& Date)
{
    FKausDayMeta Meta;
    if (BuildEffectiveMeta(Date, Meta))
    {
        OnDayMetaChanged.Broadcast(Date, Meta);
    }
}
