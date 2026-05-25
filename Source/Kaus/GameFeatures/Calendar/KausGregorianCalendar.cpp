// Copyright Project Kaus. All Rights Reserved.

#include "KausGregorianCalendar.h"
#include "Misc/DateTime.h"

UKausGregorianCalendar::UKausGregorianCalendar()
{
    // 기본 요일 이름 (Mon=0 ~ Sun=6)
    WeekdayDisplayNames =
    {
        NSLOCTEXT("Kaus", "Weekday_Mon", "월"),
        NSLOCTEXT("Kaus", "Weekday_Tue", "화"),
        NSLOCTEXT("Kaus", "Weekday_Wed", "수"),
        NSLOCTEXT("Kaus", "Weekday_Thu", "목"),
        NSLOCTEXT("Kaus", "Weekday_Fri", "금"),
        NSLOCTEXT("Kaus", "Weekday_Sat", "토"),
        NSLOCTEXT("Kaus", "Weekday_Sun", "일"),
    };
}

bool UKausGregorianCalendar::IsValidDate(const FKausGameDate& Date) const
{
    // FDateTime의 검증을 그대로 빌린다.
    if (Date.Year < 1 || Date.Month < 1 || Date.Month > 12 || Date.Day < 1)
    {
        return false;
    }
    return Date.Day <= FDateTime::DaysInMonth(Date.Year, Date.Month);
}

int32 UKausGregorianCalendar::DaysBetween(const FKausGameDate& A, const FKausGameDate& B) const
{
    if (!IsValidDate(A) || !IsValidDate(B))
    {
        return 0;
    }

    const FDateTime DTA(A.Year, A.Month, A.Day);
    const FDateTime DTB(B.Year, B.Month, B.Day);
    return static_cast<int32>((DTB - DTA).GetDays());
}

FKausGameDate UKausGregorianCalendar::AddDays(const FKausGameDate& Date, int32 Days) const
{
    if (!IsValidDate(Date))
    {
        return FKausGameDate{};
    }

    const FDateTime Source(Date.Year, Date.Month, Date.Day);
    const FDateTime Result = Source + FTimespan::FromDays(Days);

    return FKausGameDate(Result.GetYear(), Result.GetMonth(), Result.GetDay());
}

int32 UKausGregorianCalendar::GetWeekdayIndex(const FKausGameDate& Date,
                                              const FKausGameDate& ReferenceDate,
                                              int32 ReferenceWeekdayIndex) const
{
    const int32 Diff = DaysBetween(ReferenceDate, Date);
    const int32 Per = GetDaysPerWeek();

    // 음수 모듈로 보정: ((x % n) + n) % n
    return ((ReferenceWeekdayIndex + Diff) % Per + Per) % Per;
}
