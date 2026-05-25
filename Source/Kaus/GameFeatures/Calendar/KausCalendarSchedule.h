// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KausGameDate.h"
#include "KausCalendarTypes.h"
#include "KausCalendarSchedule.generated.h"

class UKausCalendarSystem;

/**
 * UKausCalendarSchedule
 *
 * Calendar의 정적 데이터 정의.
 *
 * 책임:
 *   1) 사용할 캘린더 종류 (Gregorian/Planetary)
 *   2) 시작일~종료일
 *   3) 시작일의 요일 인덱스
 *   4) 주말 처리할 요일 인덱스 목록
 *   5) 매년 반복되는 휴일 정의
 *   6) 디자이너가 미리 부여하는 시드 메타 (FKausDaySeed 배열)
 * 
 *
 * 즉, 이 자산은 한 번 디자인되어 패키징된 후 read-only로 사용된다.
 */
UCLASS(BlueprintType)
class KAUS_API UKausCalendarSchedule : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    /**
     * 사용할 캘린더 시스템.
     * 기본은 UKausGregorianCalendar 인스턴스.
     * 행성력 등 커스텀 사용 시 UKausPlanetaryCalendar 등으로 교체.
     */
    UPROPERTY(EditDefaultsOnly, Instanced, Category = "Schedule|System")
    TObjectPtr<UKausCalendarSystem> CalendarSystem;

    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Range")
    FKausGameDate StartDate;

    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Range")
    FKausGameDate EndDate;

    /**
     * StartDate가 무슨 요일인지 (CalendarSystem의 요일 인덱스 체계 기준).
     * 그레고리력이면 0=월요일 ... 6=일요일.
     * 행성력이면 0=첫째 요일 ... DaysPerWeek-1=마지막 요일.
     */
    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Range",
        meta = (ClampMin = 0))
    int32 StartWeekdayIndex = 0;

    /**
     * 주말로 처리할 요일 인덱스.
     * 그레고리력 한국식: [5, 6] = 토, 일.
     * 행성력은 디자이너가 자체 정의.
     */
    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Rules")
    TArray<int32> WeekendWeekdayIndices;

    /** 매년 반복되는 휴일 정의. */
    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Rules",
        meta = (TitleProperty = "Name"))
    TArray<FKausRecurringHoliday> RecurringHolidays;

    /**
     * 디자이너가 특정 날짜에 미리 부여하는 메타.
     * 자동 부착 태그 위에 추가로 OR-병합된다.
     * 같은 날짜가 중복되면 IsDataValid에서 경고.
     */
    UPROPERTY(EditDefaultsOnly, Category = "Schedule|Seed",
        meta = (TitleProperty = "Date"))
    TArray<FKausDaySeed> SeedDayMetas;

    /** CalendarSystem이 유효한지 + Start/End가 유효한지 빠른 체크. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    bool IsScheduleValid() const;

#if WITH_EDITOR
    virtual void PostEditChangeProperty(FPropertyChangedEvent& PropertyChangedEvent) override;
    virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
};
