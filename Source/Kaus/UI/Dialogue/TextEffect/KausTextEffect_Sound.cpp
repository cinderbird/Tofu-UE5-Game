// Copyright Project Kaus. All Rights Reserved.

#include "KausTextEffect_Sound.h"
#include "Kismet/GameplayStatics.h"
#include "Sound/SoundBase.h"

UKausTextEffect_Sound::UKausTextEffect_Sound()
{
    EffectName = TEXT("TypeSound");
}

void UKausTextEffect_Sound::OnEffectBegin_Implementation(const FKausTextEffectContext& Context)
{
    LastRevealedChars = 0;
}

FText UKausTextEffect_Sound::TickEffect_Implementation(const FKausTextEffectContext& Context)
{
    if (!TypeSound) return Context.CurrentText;

    UWorld* World = Context.World.Get();
    if (!World) return Context.CurrentText;

    const int32 CurrentRevealed = Context.CurrentText.ToString().Len();

    if (CurrentRevealed > LastRevealedChars)
    {
        const int32 Interval = FMath::Max(PlayInterval, 1);
        if ((LastRevealedChars / Interval) != (CurrentRevealed / Interval))
        {
            const float PitchOffset = FMath::FRandRange(-PitchVariance, PitchVariance);
            UGameplayStatics::PlaySound2D(World, TypeSound,
                VolumeMultiplier, 1.0f + PitchOffset);
        }

        LastRevealedChars = CurrentRevealed;
    }

    return Context.CurrentText;
}
