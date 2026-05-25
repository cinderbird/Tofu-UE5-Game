#include "KausCameraBoundsVolume.h"
#include "Components/BrushComponent.h"

AKausCameraBoundsVolume::AKausCameraBoundsVolume()
{
    PrimaryActorTick.bCanEverTick = false;

    GetBrushComponent()->SetCollisionProfileName(UCollisionProfile::NoCollision_ProfileName);
}

bool AKausCameraBoundsVolume::IsInside(const FVector& Location) const
{
    return EncompassesPoint(Location, 0.0f);
}