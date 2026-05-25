// Copyright Kaus. All rights reserved.

#include "KausDialogueDecorator_AdvanceSequence.h"
#include "GameFeatures/Sequence/New/KausSequencePlayerSubsystem.h"
#include "Engine/World.h"

void UKausDialogueDecorator_AdvanceSequence::ExecuteDecorator_Implementation()
{
    Super::ExecuteDecorator_Implementation();

    UWorld* World = GetOwningWorld();
    if (!World) return;

    UKausSequencePlayerSubsystem* Sub =
        World->GetSubsystem<UKausSequencePlayerSubsystem>();
    if (!Sub || !Sub->HasActiveSequence()) return;

    if (bPauseInsteadOfPlay)
    {
        Sub->Pause();
        return;
    }

    if (!JumpToMarker.IsNone())
    {
        Sub->JumpToMarkerAndPlay(JumpToMarker);
    }
    else
    {
        Sub->Play();
    }
}
