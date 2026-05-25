// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausCalendarSystem.h"
#include "KausPlanetaryCalendar.generated.h"

/**
 * UKausPlanetaryCalendar
 *
 * 가상 행성력 구현.
 * 모든 월의 일 수가 동일하고, 1년의 월 수와 1주일의 일 수가 임의로 정의된다.
 * 윤년 개념 없음 (필요해지면 서브클래스 또는 윤년 정책 추가).
 *
 * 사용 예 (어떤 가상 행성):
 *   MonthsPerYear = 10
 *   DaysPerMonth  = 40   → 1년 = 400일
 *   DaysPerWeek   = 8
 *   WeekdayDisplayNames: 8개 요일 이름
 */
UCLASS(BlueprintType, meta = (DisplayName = "Planetary Calendar (Custom)"))
class KAUS_API UKausPlanetaryCalendar : public UKausCalendarSystem
{
    GENERATED_BODY()

public:
    UKausPlanetaryCalendar();

    virtual bool IsValidDate(const FKausGameDate& Date) const override;
    virtual int32 DaysBetween(const FKausGameDate& A, const FKausGameDate& B) const override;
    virtual FKausGameDate AddDays(const FKausGameDate& Date, int32 Days) const override;
    virtual int32 GetDaysPerWeek() const override { return DaysPerWeek; }
    virtual int32 GetWeekdayIndex(const FKausGameDate& Date,
                                  const FKausGameDate& ReferenceDate,
                                  int32 ReferenceWeekdayIndex) const override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planetary", meta = (ClampMin = 1)) 
    int32 MonthsPerYear = 10;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planetary", meta = (ClampMin = 1))
    int32 DaysPerMonth = 40;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Planetary", meta = (ClampMin = 1))
    int32 DaysPerWeek = 8;

private:
    /** Date를 절대 일자(0-based, Year=1 Month=1 Day=1을 0으로)로 변환. */
    int64 DateToAbsoluteDay(const FKausGameDate& Date) const;

    /** 절대 일자를 Date로 변환. */
    FKausGameDate AbsoluteDayToDate(int64 Absolute) const;
};
