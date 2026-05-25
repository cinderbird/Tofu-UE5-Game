#pragma once

#include "GameFramework/FloatingPawnMovement.h"
#include "KausFloatingPawnMovement.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausFloatingPawnMovement : public UFloatingPawnMovement
{
	GENERATED_BODY()
	
public:
	UKausFloatingPawnMovement();

protected:
	
	
};
