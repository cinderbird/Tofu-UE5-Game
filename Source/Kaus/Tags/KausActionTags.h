// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "NativeGameplayTags.h"

// =============================================================================
//  Kaus Action 네이티브 태그
// =============================================================================
//
// 플레이어 행동 시스템의 prefix가 되는 'Action.*' 태그들.
// PlayerActionAbility 등이 컨벤션 태그로 사용한다.
// =============================================================================

namespace KausActionTags
{
    /**
     * Cost Override 마커.
     *
     * FGameplayEventData.InstigatorTags에 이 태그가 있으면
     * EventMagnitude를 명시적 cost로 해석한다 (0 포함).
     *
     * 없으면 PlayerActionAbility의 default 흐름 (TimeCostByMode → DefaultTimeCost)을 탄다.
     *
     * Interaction 시스템이 노드 데이터의 TimeCostOverride를 적용할 때 함께 부여.
     */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Action_Cost_Override);
}
