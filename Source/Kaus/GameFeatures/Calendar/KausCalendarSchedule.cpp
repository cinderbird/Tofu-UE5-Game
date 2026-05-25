// Copyright Project Kaus. All Rights Reserved.

#include "KausCalendarSchedule.h"
#include "KausCalendarSystem.h"
#include "KausGregorianCalendar.h"
#include "Tags/KausCalendarTags.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

bool UKausCalendarSchedule::IsScheduleValid() const
{
    if (!CalendarSystem) return false;
    if (!CalendarSystem->IsValidDate(StartDate)) return false;
    if (!CalendarSystem->IsValidDate(EndDate)) return false;
    if (EndDate < StartDate) return false;

    const int32 Per = CalendarSystem->GetDaysPerWeek();
    if (StartWeekdayIndex < 0 || StartWeekdayIndex >= Per) return false;

    return true;
}

#if WITH_EDITOR
void UKausCalendarSchedule::PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent)
{
    Super::PostEditChangeProperty(PropertyChangedEvent);

    if (!CalendarSystem)
    {
        return;
    }

    const int32 Per = CalendarSystem->GetDaysPerWeek();
    if (Per <= 0)
    {
        return;
    }

    // StartWeekdayIndex 범위 보정
    if (StartWeekdayIndex < 0 || StartWeekdayIndex >= Per)
    {
        UE_LOG(LogTemp, Warning,
            TEXT("[KausCalendarSchedule] StartWeekdayIndex(%d)가 [0, %d) 범위를 벗어납니다."),
            StartWeekdayIndex, Per);
    }

    // WeekendWeekdayIndices 범위 보정
    for (int32 i = 0; i < WeekendWeekdayIndices.Num(); ++i)
    {
        const int32 Idx = WeekendWeekdayIndices[i];
        if (Idx < 0 || Idx >= Per)
        {
            UE_LOG(LogTemp, Warning,
                TEXT("[KausCalendarSchedule] WeekendWeekdayIndices[%d]=%d가 [0, %d) 범위를 벗어납니다."),
                i, Idx, Per);
        }
    }
}

EDataValidationResult UKausCalendarSchedule::IsDataValid(FDataValidationContext& Context) const
{
    EDataValidationResult Result = Super::IsDataValid(Context);

    // 1. CalendarSystem 존재
    if (!CalendarSystem)
    {
        Context.AddError(FText::FromString(
            TEXT("CalendarSystem이 설정되지 않았습니다. UKausGregorianCalendar 등을 인라인으로 추가하세요.")));
        return EDataValidationResult::Invalid;
    }

    // 2. Start/End 유효성
    if (!CalendarSystem->IsValidDate(StartDate))
    {
        Context.AddError(FText::Format(
            NSLOCTEXT("Kaus", "InvalidStartDate", "StartDate {0}이 CalendarSystem에서 유효하지 않습니다."),
            FText::FromString(StartDate.ToString())));
        Result = EDataValidationResult::Invalid;
    }
    if (!CalendarSystem->IsValidDate(EndDate))
    {
        Context.AddError(FText::Format(
            NSLOCTEXT("Kaus", "InvalidEndDate", "EndDate {0}이 CalendarSystem에서 유효하지 않습니다."),
            FText::FromString(EndDate.ToString())));
        Result = EDataValidationResult::Invalid;
    }

    // 3. 범위 검사
    if (EndDate < StartDate)
    {
        Context.AddError(FText::FromString(TEXT("EndDate가 StartDate보다 이전입니다.")));
        Result = EDataValidationResult::Invalid;
    }

    const int32 Per = CalendarSystem->GetDaysPerWeek();

    // 4. StartWeekdayIndex 범위
    if (StartWeekdayIndex < 0 || StartWeekdayIndex >= Per)
    {
        Context.AddError(FText::Format(
            NSLOCTEXT("Kaus", "InvalidStartWeekday",
                "StartWeekdayIndex({0})가 [0, {1}) 범위를 벗어납니다."),
            FText::AsNumber(StartWeekdayIndex), FText::AsNumber(Per)));
        Result = EDataValidationResult::Invalid;
    }

    // 5. WeekendWeekdayIndices 범위 + 중복
    {
        TSet<int32> Seen;
        for (int32 i = 0; i < WeekendWeekdayIndices.Num(); ++i)
        {
            const int32 Idx = WeekendWeekdayIndices[i];
            if (Idx < 0 || Idx >= Per)
            {
                Context.AddError(FText::Format(
                    NSLOCTEXT("Kaus", "InvalidWeekendIdx",
                        "WeekendWeekdayIndices[{0}]={1}이 [0, {2}) 범위를 벗어납니다."),
                    FText::AsNumber(i), FText::AsNumber(Idx), FText::AsNumber(Per)));
                Result = EDataValidationResult::Invalid;
            }
            bool bAlreadyIn = false;
            Seen.Add(Idx, &bAlreadyIn);
            if (bAlreadyIn)
            {
                Context.AddWarning(FText::Format(
                    NSLOCTEXT("Kaus", "DupWeekend",
                        "WeekendWeekdayIndices에 중복 값 {0}이 있습니다."),
                    FText::AsNumber(Idx)));
            }
        }
    }

    // 6. RecurringHolidays Month 범위 (Day는 28/30/31 모두 허용 — Gregorian이면 BuildResolvedDays에서 매월 말일 검사)
    for (int32 i = 0; i < RecurringHolidays.Num(); ++i)
    {
        const FKausRecurringHoliday& H = RecurringHolidays[i];
        if (H.Month < 1)
        {
            Context.AddError(FText::Format(
                NSLOCTEXT("Kaus", "InvalidHoliMonth",
                    "RecurringHolidays[{0}] '{1}'의 Month가 잘못되었습니다."),
                FText::AsNumber(i), H.Name));
            Result = EDataValidationResult::Invalid;
        }
        if (H.Day < 1)
        {
            Context.AddError(FText::Format(
                NSLOCTEXT("Kaus", "InvalidHoliDay",
                    "RecurringHolidays[{0}] '{1}'의 Day가 잘못되었습니다."),
                FText::AsNumber(i), H.Name));
            Result = EDataValidationResult::Invalid;
        }
    }

    // 7. SeedDayMetas: 범위 + 중복 + 태그 네임스페이스
    {
        TSet<FKausGameDate> SeenDates;

        const FGameplayTag DayRoot = KausCalendarTags::Calendar_Day;
        const FGameplayTag MarkerRoot = KausCalendarTags::Calendar_Marker;

        for (int32 i = 0; i < SeedDayMetas.Num(); ++i)
        {
            const FKausDaySeed& Seed = SeedDayMetas[i];

            // 범위
            if (CalendarSystem->IsValidDate(Seed.Date))
            {
                if (Seed.Date < StartDate || EndDate < Seed.Date)
                {
                    Context.AddError(FText::Format(
                        NSLOCTEXT("Kaus", "SeedOutOfRange",
                            "SeedDayMetas[{0}] Date {1}이 [{2}, {3}] 범위를 벗어납니다."),
                        FText::AsNumber(i),
                        FText::FromString(Seed.Date.ToString()),
                        FText::FromString(StartDate.ToString()),
                        FText::FromString(EndDate.ToString())));
                    Result = EDataValidationResult::Invalid;
                }
            }

            // 중복
            bool bAlreadyIn = false;
            SeenDates.Add(Seed.Date, &bAlreadyIn);
            if (bAlreadyIn)
            {
                Context.AddWarning(FText::Format(
                    NSLOCTEXT("Kaus", "DupSeed",
                        "SeedDayMetas에 중복 Date {0}이 있습니다."),
                    FText::FromString(Seed.Date.ToString())));
            }

            // 태그 네임스페이스
            for (const FGameplayTag& Tag : Seed.AdditionalTags)
            {
                const bool bIsCategory = Tag.MatchesTag(DayRoot);
                const bool bIsMarker = Tag.MatchesTag(MarkerRoot);
                if (!bIsCategory && !bIsMarker)
                {
                    Context.AddWarning(FText::Format(
                        NSLOCTEXT("Kaus", "TagOutOfNs",
                            "SeedDayMetas[{0}]의 태그 {1}이 Calendar.Day.* / Calendar.Marker.* 네임스페이스 밖입니다."),
                        FText::AsNumber(i),
                        FText::FromString(Tag.ToString())));
                }
            }
        }
    }

    return Result;
}
#endif // WITH_EDITOR
