// Copyright Kaus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Decorators/MounteaDialogueDecoratorBase.h"
#include "KausDialogueDecorator_AdvanceSequence.generated.h"

/**
 * UKausDialogueDecorator_AdvanceSequence
 *
 * 대화 노드 진입 시 활성 시퀀스를 진행(Play)시키는 Decorator.
 * 시퀀스가 Event Track Pause로 멈춰 있다가, 이 Decorator가 실행되면
 * 다음 Pause 또는 시퀀스 끝까지 진행한다.
 *
 * 옵션:
 *  - JumpToMarker가 비어있지 않으면 점프 후 재생 (특정 카메라 컷으로 강제 이동).
 *  - bPauseInsteadOfPlay=true면 Play 대신 Pause (드물게 쓰임).
 */
UCLASS(BlueprintType, EditInlineNew, ClassGroup = ("Kaus|Dialogue"),
    DisplayName = "Kaus - Advance Sequence")
class KAUS_API UKausDialogueDecorator_AdvanceSequence : public UMounteaDialogueDecoratorBase
{
    GENERATED_BODY()

public:
    virtual void ExecuteDecorator_Implementation() override;

protected:
    /** 비어있지 않으면 이 마커로 점프 후 재생. 비어있으면 현재 위치에서 그냥 Play. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Sequence")
    FName JumpToMarker = NAME_None;

    /** true면 Play 대신 Pause를 호출. (시퀀스가 흘러가는 도중 외부에서 멈출 때) */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Sequence")
    bool bPauseInsteadOfPlay = false;
};
