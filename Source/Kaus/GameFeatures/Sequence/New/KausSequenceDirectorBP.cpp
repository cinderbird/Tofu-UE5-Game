// Copyright Kaus. All rights reserved.

#include "KausSequenceDirectorBP.h"
#include "KausSequencePlayerSubsystem.h"
#include "Engine/World.h"

void UKausSequenceDirectorBP::PauseDialogueSequence()
{
    UWorld* World = GetWorld();
    if (!World) return;

    if (UKausSequencePlayerSubsystem* Sub =
        World->GetSubsystem<UKausSequencePlayerSubsystem>())
    {
        Sub->HandleDirectorPauseRequest();
    }
}

void UKausSequenceDirectorBP::NotifyDialogueSequence(FName NotifyName)
{
    UWorld* World = GetWorld();
    if (!World) return;

    if (UKausSequencePlayerSubsystem* Sub =
        World->GetSubsystem<UKausSequencePlayerSubsystem>())
    {
        Sub->HandleDirectorNotify(NotifyName);
    }
}
