// Copyright Project Kaus. All Rights Reserved.

#include "KausPlanetaryCalendar.h"

UKausPlanetaryCalendar::UKausPlanetaryCalendar()
{
    // 기본값: 8요일짜리 가상 주
    WeekdayDisplayNames =
    {
        FText::FromString(TEXT("First")),
        FText::FromString(TEXT("Second")),
        FText::FromString(TEXT("Third")),
        FText::FromString(TEXT("Fourth")),
        FText::FromString(TEXT("Fifth")),
        FText::FromString(TEXT("Sixth")),
        FText::FromString(TEXT("Seventh")),
        FText::FromString(TEXT("Eighth")),
    };
}

bool UKausPlanetaryCalendar::IsValidDate(const FKausGameDate& Date) const
{
    return Date.Year >= 1
        && Date.Month >= 1 && Date.Month <= MonthsPerYear
        && Date.Day >= 1 && Date.Day <= DaysPerMonth;
}

int64 UKausPlanetaryCalendar::DateToAbsoluteDay(const FKausGameDate& Date) const
{
    // 0-based 절대 일수
    const int64 YearPart = static_cast<int64>(Date.Year - 1) * MonthsPerYear * DaysPerMonth;
    const int64 MonthPart = static_cast<int64>(Date.Month - 1) * DaysPerMonth;
    const int64 DayPart = static_cast<int64>(Date.Day - 1);
    return YearPart + MonthPart + DayPart;
}

FKausGameDate UKausPlanetaryCalendar::AbsoluteDayToDate(int64 Absolute) const
{
    if (Absolute < 0)
    {
        return FKausGameDate{};  // invalid
    }

    const int64 DaysPerYear = static_cast<int64>(MonthsPerYear) * DaysPerMonth;

    const int64 Year = Absolute / DaysPerYear + 1;
    const int64 RemainAfterYear = Absolute % DaysPerYear;
    const int64 Month = RemainAfterYear / DaysPerMonth + 1;
    const int64 Day = RemainAfterYear % DaysPerMonth + 1;

    return FKausGameDate(static_cast<int32>(Year),
                         static_cast<int32>(Month),
                         static_cast<int32>(Day));
}

int32 UKausPlanetaryCalendar::DaysBetween(const FKausGameDate& A, const FKausGameDate& B) const
{
    if (!IsValidDate(A) || !IsValidDate(B))
    {
        return 0;
    }
    return static_cast<int32>(DateToAbsoluteDay(B) - DateToAbsoluteDay(A));
}

FKausGameDate UKausPlanetaryCalendar::AddDays(const FKausGameDate& Date, int32 Days) const
{
    if (!IsValidDate(Date))
    {
        return FKausGameDate{};
    }
    const int64 Absolute = DateToAbsoluteDay(Date) + Days;
    return AbsoluteDayToDate(Absolute);
}

int32 UKausPlanetaryCalendar::GetWeekdayIndex(const FKausGameDate& Date,
                                              const FKausGameDate& ReferenceDate,
                                              int32 ReferenceWeekdayIndex) const
{
    const int32 Diff = DaysBetween(ReferenceDate, Date);
    const int32 Per = GetDaysPerWeek();
    if (Per <= 0) return 0;
    return ((ReferenceWeekdayIndex + Diff) % Per + Per) % Per;
}
