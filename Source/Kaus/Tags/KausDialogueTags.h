// Copyright Project Kaus. All Rights Reserved.

#pragma once
#include "NativeGameplayTags.h"

/**
 * 대화 시스템 관련 GameplayMessage 채널 태그.
 *
 * 작가/디자이너는 이 태그를 직접 다루지 않는다. 모든 발송과 수신은 C++ 레이어에서 처리.
 */
namespace KausDialogueTags
{
	// ─── Manager Lifecycle ─────────────────────────────────────────────────

	/** Manager Beacon이 BeginPlay에서 발송. 페이로드: FKausDialogueManagerLifecyclePayload */
	KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Message_Dialogue_Manager_Registered);

	/** Manager Beacon이 EndPlay에서 발송. 페이로드: FKausDialogueManagerLifecyclePayload */
	KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Message_Dialogue_Manager_Unregistered);
}
