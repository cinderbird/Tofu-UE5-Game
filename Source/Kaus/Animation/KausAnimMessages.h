#pragma once

#include "CoreMinimal.h"
#include "KausAnimPhase.h"
#include "KausAnimMessages.generated.h"

/**
 * FKausAnimPhaseChangedMessage
 *
 * "Kaus.Anim.PhaseChanged" 태그로 브로드캐스트되는 페이로드.
 * KausSequenceDirector 가 Phase 전환 시 즉시 발행합니다.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausAnimPhaseChangedMessage
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Anim")
    EKausAnimPhase NewPhase = EKausAnimPhase::IntroPose;

    /**
     * 권장 블렌딩 시간(초). 0 이면 즉각 전환.
     * IKausAnimPhaseHandler 구현 측에서 이 값을 참고하거나 무시할 수 있습니다.
     */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Anim")
    float BlendDuration = 0.0f;
};
