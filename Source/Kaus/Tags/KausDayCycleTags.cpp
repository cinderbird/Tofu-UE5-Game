// Copyright Project Kaus. All Rights Reserved.

#include "KausDayCycleTags.h"

namespace KausDayCycleTags
{
    // ─────────────────────────────────────────────────────────────────
    //  Cycle 식별 (정적)
    // ─────────────────────────────────────────────────────────────────

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_Morning,
        "Calendar.Cycle.Morning",
        "낮 — 보통 자유 탐색 (Token Mode).");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_Afternoon,
        "Calendar.Cycle.Afternoon",
        "오후 — 보통 메인 선택지 (Token Mode).");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_Night1,
        "Calendar.Cycle.Night1",
        "밤-1 — 보통 자유 탐색 두 번째 (Token Mode).");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_Night2,
        "Calendar.Cycle.Night2",
        "밤-2 — 보통 자동 진행 / Night Events (Realtime Mode).");

    // ─────────────────────────────────────────────────────────────────
    //  Budget 모드
    // ─────────────────────────────────────────────────────────────────

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_BudgetMode_Token,
        "Calendar.Cycle.BudgetMode.Token",
        "정수 토큰 단위. 행동 1회당 정수 cost.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Calendar_Cycle_BudgetMode_Realtime,
        "Calendar.Cycle.BudgetMode.Realtime",
        "분 단위. 누적 분 budget이 0 도달하면 자동 진행.");

    // ─────────────────────────────────────────────────────────────────
    //  Time 이벤트
    // ─────────────────────────────────────────────────────────────────

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleEntered,
        "Event.Time.CycleEntered",
        "Cycle 진입 알림 (root). 자식 태그로 어느 Cycle인지 분기.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleEntered_Morning,
        "Event.Time.CycleEntered.Morning", "Morning Cycle 진입.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleEntered_Afternoon,
        "Event.Time.CycleEntered.Afternoon", "Afternoon Cycle 진입.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleEntered_Night1,
        "Event.Time.CycleEntered.Night1", "Night1 Cycle 진입.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleEntered_Night2,
        "Event.Time.CycleEntered.Night2", "Night2 Cycle 진입.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleExiting,
        "Event.Time.CycleExiting",
        "Cycle 이탈 알림 (root). 이미 새 Cycle로 전환된 후 발사.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleExiting_Morning,
        "Event.Time.CycleExiting.Morning", "Morning Cycle 이탈.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleExiting_Afternoon,
        "Event.Time.CycleExiting.Afternoon", "Afternoon Cycle 이탈.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleExiting_Night1,
        "Event.Time.CycleExiting.Night1", "Night1 Cycle 이탈.");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_CycleExiting_Night2,
        "Event.Time.CycleExiting.Night2", "Night2 Cycle 이탈.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_DayStart,
        "Event.Time.DayStart",
        "새 날짜의 첫 Cycle 진입과 함께 발사.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_DayEnd,
        "Event.Time.DayEnd",
        "이전 날짜의 마지막 Cycle 이탈과 함께 발사.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Event_Time_BudgetExhausted,
        "Event.Time.BudgetExhausted",
        "PlayerTimeBudgetComponent의 Budget 소진 시점. Cycle 전환 직전.");
}
