// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausCalendarSystem.h"
#include "KausGregorianCalendar.generated.h"

/**
 * UKausGregorianCalendar
 *
 * 그레고리력 구현. FDateTime을 백엔드로 사용한다.
 *
 * 주의:
 *  - 요일 계산은 FDateTime의 실제 요일을 사용하지 않는다.
 *    Schedule.StartWeekdayIndex를 기준으로 산술 계산한다.
 *    이로 인해 "가상 연도(예: Y0001)에 4월 1일이 월요일"이라는 디자이너 의도를 따를 수 있다.
 *  - FDateTime은 Year >= 1만 허용한다. IsValidDate에서 이를 강제한다.
 */
UCLASS(BlueprintType, meta = (DisplayName = "Gregorian Calendar"))
class KAUS_API UKausGregorianCalendar : public UKausCalendarSystem
{
    GENERATED_BODY()

public:
    UKausGregorianCalendar();

    virtual bool IsValidDate(const FKausGameDate& Date) const override;
    virtual int32 DaysBetween(const FKausGameDate& A, const FKausGameDate& B) const override;
    virtual FKausGameDate AddDays(const FKausGameDate& Date, int32 Days) const override;
    virtual int32 GetDaysPerWeek() const override { return 7; }
    virtual int32 GetWeekdayIndex(const FKausGameDate& Date,
                                  const FKausGameDate& ReferenceDate,
                                  int32 ReferenceWeekdayIndex) const override;
};
