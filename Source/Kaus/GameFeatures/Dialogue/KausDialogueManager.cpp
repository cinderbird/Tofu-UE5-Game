// Copyright Project Kaus. All Rights Reserved.

#include "KausDialogueManager.h"

#include "Engine/World.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausDialogueManager, Log, All);

UKausDialogueManager::UKausDialogueManager()
{
    // Mountea Manager의 기본 설정을 그대로 상속. 추가 설정 불필요.
}

void UKausDialogueManager::BeginPlay()
{
    // Mountea의 BeginPlay 먼저 — 자기 초기화/Replication 셋업이 끝난 후 등록.
    Super::BeginPlay();

}

void UKausDialogueManager::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    Super::EndPlay(EndPlayReason);
}
