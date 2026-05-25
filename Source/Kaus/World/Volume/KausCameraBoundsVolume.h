#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Volume.h"
#include "KausCameraBoundsVolume.generated.h"

/**
 * 
 */
UCLASS()
class KAUS_API AKausCameraBoundsVolume : public AVolume
{
	GENERATED_BODY()
	
public:
	AKausCameraBoundsVolume();

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
    bool IsInside(const FVector& Location) const;
	
};
