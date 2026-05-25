// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

// =============================================================================
//  Kaus DayCycle / Time 네이티브 태그
// =============================================================================
//
// 이 헤더는 DayCycle 시스템 + 시간 이벤트 메시지의 네이티브 태그를 등록한다.
// .ini로 등록되는 디자이너 정의 태그와 별개 — 시스템이 코드 안에서 직접 참조하는 태그들.
//
// 마이그레이션 노트 (v2):
//   이전 이름 → 새 이름:
//     Calendar.Cycle.Dawn    → Calendar.Cycle.Morning
//     Calendar.Cycle.Day     → Calendar.Cycle.Afternoon
//     Calendar.Cycle.Evening → Calendar.Cycle.Night1
//     Calendar.Cycle.Night   → Calendar.Cycle.Night2
//
//   기획 데이터(DataAsset)와 노드 Reaction의 Listen Event Tag도 함께 갱신해야 함.
//
// =============================================================================

namespace KausDayCycleTags
{
    // ─────────────────────────────────────────────────────────────────
    //  Cycle 식별 (정적 — Cycle Definition entry의 CycleTag로 사용)
    // ─────────────────────────────────────────────────────────────────

    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_Morning);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_Afternoon);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_Night1);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_Night2);

    // ─────────────────────────────────────────────────────────────────
    //  Budget 모드 (정적 — Cycle Spec.BudgetMode)
    // ─────────────────────────────────────────────────────────────────

    /** 정수 토큰 단위. 행동마다 정수 cost. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_BudgetMode_Token);

    /** 분 단위. 행동마다 분 cost, 누적 Budget이 0(=시각 도달)이 되면 종료. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Calendar_Cycle_BudgetMode_Realtime);

    // ─────────────────────────────────────────────────────────────────
    //  Time 이벤트 (동적 — TimeMessageBroadcaster가 방송)
    // ─────────────────────────────────────────────────────────────────

    /** Cycle 진입 알림. 자식 태그로 어느 Cycle인지 분기 (Event.Time.CycleEntered.Morning 등). */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleEntered);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleEntered_Morning);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleEntered_Afternoon);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleEntered_Night1);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleEntered_Night2);

    /** Cycle 이탈 알림 (이미 새 Cycle로 전환된 후 방송 — 정리 목적). */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleExiting);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleExiting_Morning);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleExiting_Afternoon);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleExiting_Night1);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_CycleExiting_Night2);

    /** 새 날짜의 첫 Cycle 진입과 함께 방송. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_DayStart);

    /** 이전 날짜의 마지막 Cycle 이탈과 함께 방송. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_DayEnd);

    /**
     * Budget 소진 시점.
     * PlayerTimeBudgetComponent가 방송 (TimeMessageBroadcaster 아님).
     * Cycle은 아직 전환 전 — 이 메시지를 받고 마지막 정리할 시간 있음.
     */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Event_Time_BudgetExhausted);
}
