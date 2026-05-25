#pragma once

#include "CoreMinimal.h"
#include "KausAnimPhase.generated.h"

/**
 * EKausAnimPhase
 *
 * KausSequenceDirector 의 EKausSequencePhase 와 대응하는 AnimBP 용 열거형.
 * IKausAnimPhaseHandler::OnAnimPhaseChanged 의 인자로 전달됩니다.
 */
UENUM(BlueprintType)
enum class EKausAnimPhase : uint8
{
    Intro           UMETA(DisplayName = "Intro"),
    IntroIdle       UMETA(DisplayName = "Intro Idle"),
    MenuTransition  UMETA(DisplayName = "Menu Transition"),
    MenuIdle        UMETA(DisplayName = "Menu Idle"),
    Outro           UMETA(DisplayName = "Outro"),
    Done            UMETA(DisplayName = "Done"),
    IntroPose       UMETA(DisplayName = "Intro Pose"),
};
