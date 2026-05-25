// Copyright Project Kaus. All Rights Reserved.

#include "KausCalendarSystem.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

FText UKausCalendarSystem::GetWeekdayDisplayName(int32 WeekdayIndex) const
{
    if (WeekdayDisplayNames.IsValidIndex(WeekdayIndex))
    {
        return WeekdayDisplayNames[WeekdayIndex];
    }
    return FText::GetEmpty();
}

#if WITH_EDITOR
EDataValidationResult UKausCalendarSystem::IsDataValid(FDataValidationContext& Context) const
{
    EDataValidationResult Result = Super::IsDataValid(Context);

    const int32 ExpectedCount = GetDaysPerWeek();
    if (ExpectedCount <= 0)
    {
        Context.AddError(FText::FromString(TEXT("GetDaysPerWeek()이 양수가 아닙니다.")));
        Result = EDataValidationResult::Invalid;
    }
    else if (WeekdayDisplayNames.Num() != ExpectedCount)
    {
        Context.AddWarning(FText::Format(
            NSLOCTEXT("Kaus", "WeekdayNameCountMismatch",
                "WeekdayDisplayNames 항목 수({0})가 GetDaysPerWeek({1})와 일치하지 않습니다."),
            FText::AsNumber(WeekdayDisplayNames.Num()),
            FText::AsNumber(ExpectedCount)));
    }

    return Result;
}
#endif
