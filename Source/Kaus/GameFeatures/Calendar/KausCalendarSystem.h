// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KausGameDate.h"
#include "KausCalendarSystem.generated.h"

/**
 * UKausCalendarSystem
 *
 * 달력 종류(그레고리력 / 행성력 등)를 추상화한다.
 * UKausCalendarSchedule이 Instanced UPROPERTY로 보유하며,
 * 일자 산술과 요일 계산을 모두 이 객체에 위임한다.
 *
 * 구현 예:
 *  - UKausGregorianCalendar  : FDateTime 기반 (기본)
 *  - UKausPlanetaryCalendar  : 가상 행성력 (월/주/일 길이 임의)
 *
 * 모든 메서드는 const + 순수 함수이며 부작용이 없어야 한다.
 */
UCLASS(Abstract, BlueprintType, EditInlineNew, DefaultToInstanced)
class KAUS_API UKausCalendarSystem : public UObject
{
    GENERATED_BODY()

public:
    // ─────────────────────────────────────────────────────────────────
    //  검증
    // ─────────────────────────────────────────────────────────────────

    /**
     * 주어진 날짜가 이 캘린더에서 유효한지.
     * 그레고리력: Month 1~12, Day가 그 달의 실제 마지막 일 이내 등.
     * 행성력: 자체 정의된 월/일 한계.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    virtual bool IsValidDate(const FKausGameDate& Date) const
        PURE_VIRTUAL(UKausCalendarSystem::IsValidDate, return false;);

    // ─────────────────────────────────────────────────────────────────
    //  일자 산술
    // ─────────────────────────────────────────────────────────────────

    /**
     * 두 날짜 사이의 일 수 (B - A).
     * B가 A보다 이르면 음수.
     * 같은 날짜면 0.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    virtual int32 DaysBetween(const FKausGameDate& A, const FKausGameDate& B) const
        PURE_VIRTUAL(UKausCalendarSystem::DaysBetween, return 0;);

    /**
     * Date에서 N일 후의 날짜.
     * N이 음수면 N일 이전.
     * 결과가 캘린더 표현 범위를 넘으면 IsValidDate가 false인 날짜를 반환할 수 있음.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    virtual FKausGameDate AddDays(const FKausGameDate& Date, int32 Days) const
        PURE_VIRTUAL(UKausCalendarSystem::AddDays, return FKausGameDate{};);

    // ─────────────────────────────────────────────────────────────────
    //  요일
    // ─────────────────────────────────────────────────────────────────

    /** 1주일이 며칠인가. 그레고리력=7, 행성력=임의. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    virtual int32 GetDaysPerWeek() const
        PURE_VIRTUAL(UKausCalendarSystem::GetDaysPerWeek, return 7;);

    /**
     * 특정 날짜의 요일 인덱스 (0 ~ GetDaysPerWeek-1).
     *
     * @param Date                    요일을 알고 싶은 날짜
     * @param ReferenceDate           기준 날짜 (보통 Schedule.StartDate)
     * @param ReferenceWeekdayIndex   기준 날짜의 요일 인덱스 (디자이너가 명시)
     *
     * 그레고리력은 FDateTime의 실제 요일을 무시하고 디자이너가 입력한 값을 따른다.
     * (가상 연도가 실제 그레고리력과 다른 요일 배열을 가질 수 있도록.)
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    virtual int32 GetWeekdayIndex(const FKausGameDate& Date,
                                  const FKausGameDate& ReferenceDate,
                                  int32 ReferenceWeekdayIndex) const
        PURE_VIRTUAL(UKausCalendarSystem::GetWeekdayIndex, return 0;);

    /** 요일 인덱스 → 표시 이름. 범위 밖이면 빈 FText. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Calendar")
    FText GetWeekdayDisplayName(int32 WeekdayIndex) const;

protected:
    /**
     * 요일 표시 이름 룩업.
     * 인덱스 순으로 입력 (0=첫째 요일, 1=둘째, ...).
     * 항목 수는 GetDaysPerWeek()와 일치해야 함 — IsDataValid에서 검증.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Calendar")
    TArray<FText> WeekdayDisplayNames;

#if WITH_EDITOR
public:
    /**
     * WeekdayDisplayNames 항목 수가 GetDaysPerWeek과 일치하는지 등 검증.
     * 서브클래스가 추가 검증을 하려면 Super 호출 후 자기 검증.
     */
    virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
};
