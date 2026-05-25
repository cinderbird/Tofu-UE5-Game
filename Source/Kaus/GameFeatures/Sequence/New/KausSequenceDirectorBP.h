// Copyright Kaus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "LevelSequenceDirector.h"
#include "KausSequenceDirectorBP.generated.h"

/**
 * UKausSequenceDirectorBP
 *
 * LevelSequence 에셋의 Director Class로 지정할 BP가 상속할 C++ 베이스.
 *
 * ─── 사용법 ──────────────────────────────────────────────────────────────────
 *  1. LevelSequence 에셋의 Director Blueprint를 연다 (Open Director Blueprint).
 *  2. Class Settings에서 Parent Class를 KausSequenceDirectorBP로 변경.
 *  3. 시퀀서에서 Event Track을 추가하고, "여기서 멈춰" 또는 "여기서 알림" 키를 둠.
 *  4. 키를 우클릭 → Properties → Quick Bind → This Sequence → Call Function:
 *       - "Pause Dialogue Sequence" → 시퀀스가 그 프레임에서 자동 일시정지
 *       - "Notify Dialogue Sequence" → Subsystem의 OnSequenceNotify 발생
 *
 * 외부에서 Play()를 호출하면 다음 Pause 키 또는 시퀀스 끝까지 진행.
 * ─────────────────────────────────────────────────────────────────────────────
 */
UCLASS(Blueprintable)
class KAUS_API UKausSequenceDirectorBP : public ULevelSequenceDirector
{
    GENERATED_BODY()

public:
    /**
     * Event Track 키프레임에서 호출. 활성 KausSequencePlayerSubsystem에 Pause 요청.
     * 외부에서 Play()를 호출할 때까지 카메라가 현재 프레임에 고정됨.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence",
        meta = (DisplayName = "Pause Dialogue Sequence",
                CallInEditor = "false"))
    void PauseDialogueSequence();

    /**
     * Event Track 키프레임에서 호출. Subsystem의 OnSequenceNotify 델리게이트 발생.
     * 외부(Decorator, GA, GameState)에서 OnSequenceNotify에 바인딩해 동기화.
     *
     * @param NotifyName    이 알림을 식별하는 이름. 디자이너가 자유롭게 지정.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence",
        meta = (DisplayName = "Notify Dialogue Sequence",
                CallInEditor = "false"))
    void NotifyDialogueSequence(FName NotifyName);
};
