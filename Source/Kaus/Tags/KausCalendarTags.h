// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "NativeGameplayTags.h"

/**
 * Calendar 시스템 관련 네이티브 GameplayTag.
 *
 * 분류:
 *  - Calendar.Day.*    : 날짜의 카테고리 (Weekday/Weekend/Holiday/Special/Story)
 *  - Calendar.Marker.* : 디자이너 정의 라벨 (Story.Midterm, Birthday 등)
 *
 * 디자이너는 Config/DefaultGameplayTags.ini에서
 *   +GameplayTagList=(Tag="Calendar.Day.Exam", DevComment="...")
 * 형태로 자유롭게 하위 태그를 추가할 수 있다.
 *
 * Calendar.Day.* 와 Calendar.Marker.* 네임스페이스 외 태그는
 * UKausCalendarSchedule::IsDataValid에서 경고 처리.
 */
namespace KausCalendarTags
{
    // ─── 카테고리 루트 ──────────────────────────────────────────────────
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day);

    // 자동 부착되는 핵심 카테고리
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day_Weekday);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day_Weekend);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day_Holiday);

    // 디자이너가 자주 사용할 카테고리 (시드/오버라이드에서 부여)
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day_Special);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Day_Story);

    // ─── 마커 루트 ────────────────────────────────────────────────────
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Marker);
}
