#pragma once

#include "Kismet/BlueprintFunctionLibrary.h"
#include "IndicatorLibrary.generated.h"

class AController;
class UKausIndicatorManagerComponent;
class UObject;
struct FFrame;

UCLASS()
class KAUS_API UIndicatorLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:
	UIndicatorLibrary();
	
	/**  */
	UFUNCTION(BlueprintCallable, Category = Indicator)
	static UKausIndicatorManagerComponent* GetIndicatorManagerComponent(AController* Controller);
};
