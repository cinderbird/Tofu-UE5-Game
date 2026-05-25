// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "KausGameDate.h"
#include "KausCalendarTypes.generated.h"

// =============================================================================
//  FKausDaySeed — 디자이너 입력 (시드 메타)
// =============================================================================

/**
 * FKausDaySeed
 *
 * 디자이너가 UKausCalendarSchedule에서 특정 날짜에 미리 부여하는 메타.
 * 자동 채워지는 평일/주말/휴일 태그 위에 추가로 OR-병합된다.
 *
 * 의도:
 *  - 디자이너는 "이 날에 무엇을 추가하고 싶은가"만 신경쓰면 된다.
 *  - WeekdayIndex 같은 자동 계산 필드는 여기 없다.
 *  - Tags가 비어있고 DisplayName도 비어있으면 사실상 의미 없는 시드 — 검증에서 경고.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausDaySeed
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FKausGameDate Date;

    /**
     * 자동 부착 태그(Calendar.Day.Weekday/Weekend/Holiday)에 추가로 부착할 태그.
     * 보통 Calendar.Day.Special, Calendar.Day.Story, Calendar.Marker.* 등.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FGameplayTagContainer AdditionalTags;

    /** 비어있지 않으면 자동 생성된 표시 이름을 덮어쓴다. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FText DisplayNameOverride;
};

// =============================================================================
//  FKausDayMeta — 빌드 결과 (완성된 메타)
// =============================================================================

/**
 * FKausDayMeta
 *
 * Calendar 빌드 결과. 외부 시스템이 조회하는 read-only 메타데이터.
 *
 * 빌드 과정:
 *   1) WeekdayIndex 자동 계산 (CalendarSystem)
 *   2) 평일/주말 태그 자동 부착 (Schedule.WeekendWeekdayIndices 기준)
 *   3) 매년 반복 휴일 태그 부착 (Schedule.RecurringHolidays)
 *   4) FKausDaySeed에서 AdditionalTags / DisplayNameOverride 병합
 *   5) (조회 시점) RuntimeOverrides가 있으면 그 위에 덮어쓰기
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausDayMeta
{
    GENERATED_BODY()

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Calendar")
    FKausGameDate Date;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Calendar")
    int32 WeekdayIndex = 0;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Calendar")
    FGameplayTagContainer Tags;

    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Calendar")
    FText DisplayName;

    // ─── 헬퍼 (호출부 가독성) ─────────────────────────────────────────
    bool HasTag(FGameplayTag Tag) const { return Tags.HasTag(Tag); }
    bool HasAnyTag(const FGameplayTagContainer& In) const { return Tags.HasAny(In); }
    bool HasAllTags(const FGameplayTagContainer& In) const { return Tags.HasAll(In); }

    /**
     * 아래 4개는 KausCalendarTags의 네이티브 태그를 사용한다.
     * 구현은 KausCalendarTypes.cpp가 아닌 KausCalendarSubsystem.cpp에 둔다.
     * (헤더 의존성을 줄이기 위함 — KausCalendarTags.h를 여기서 include하지 않음)
     */
    bool IsWeekday() const;
    bool IsWeekend() const;
    bool IsHoliday() const;
    bool IsSpecial() const;
};

// =============================================================================
//  FKausRecurringHoliday — 매년 반복되는 휴일 정의
// =============================================================================

/**
 * 매년 반복되는 휴일.
 *
 * 행성력에서도 동작하도록 Month/Day는 단순 정수로 유지.
 * 검증은 UKausCalendarSchedule::IsDataValid에서 CalendarSystem과 함께 수행.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausRecurringHoliday
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (ClampMin = 1))
    int32 Month = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (ClampMin = 1))
    int32 Day = 1;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FText Name;

    /** 자동 부착될 마커 태그. 보통 Calendar.Marker.Holiday.* 계열. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar",
        meta = (Categories = "Calendar.Marker"))
    FGameplayTag Marker;
};

// =============================================================================
//  FKausDayRuntimeOverride — 런타임 메타 변경
// =============================================================================

/**
 * 런타임에 동적으로 부착되는 메타 변경.
 *
 * 게임 플레이 중 "5일 후가 데이트 약속이 됨", "스토리 분기로 시험이 7일에서 8일로 옮겨짐"
 * 같은 동적 일정 변경을 표현한다.
 *
 * 병합 정책 (UKausCalendarSubsystem::BuildEffectiveMeta):
 *   1) ResolvedDays에서 시드 Meta 가져옴
 *   2) ExclusionTags 제거
 *   3) AdditionalTags 추가
 *   4) bHasDisplayNameOverride면 DisplayName 덮어쓰기
 *
 * AdditionalTags / ExclusionTags는 동시에 같은 태그를 가질 수 없다.
 * Subsystem의 AddRuntimeTag/RemoveRuntimeTag가 이 불변식을 자동 유지한다.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausDayRuntimeOverride
{
    GENERATED_BODY()

    /** 시드 위에 추가할 태그 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FGameplayTagContainer AdditionalTags;

    /** 시드에서 제거할 태그 */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FGameplayTagContainer ExclusionTags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    bool bHasDisplayNameOverride = false;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Calendar")
    FText DisplayNameOverride;

    /** 어떤 변경 사항도 없으면 true — 빈 엔트리 정리용 */
    bool IsEmpty() const
    {
        return AdditionalTags.IsEmpty()
            && ExclusionTags.IsEmpty()
            && !bHasDisplayNameOverride;
    }
};
