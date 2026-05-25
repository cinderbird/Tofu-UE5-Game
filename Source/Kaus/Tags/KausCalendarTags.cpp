// Copyright Project Kaus. All Rights Reserved.

#include "KausCalendarTags.h"

namespace KausCalendarTags
{
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day,
        "Calendar.Day", "Calendar 카테고리 루트");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day_Weekday,
        "Calendar.Day.Weekday", "평일 (자동 부착)");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day_Weekend,
        "Calendar.Day.Weekend", "주말 (자동 부착)");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day_Holiday,
        "Calendar.Day.Holiday", "공휴일 (RecurringHolidays에 의해 자동 부착)");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day_Special,
        "Calendar.Day.Special", "특수일 (디자이너 시드 또는 RuntimeOverride에서 부여)");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Day_Story,
        "Calendar.Day.Story", "메인 스토리 강제 진행일");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Marker,
        "Calendar.Marker", "Calendar 디자이너 라벨 루트");
}
