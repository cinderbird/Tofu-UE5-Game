#pragma once

#include "CoreMinimal.h"
#include "GameplayEffectExecutionCalculation.h"
#include "KausExecCalc_Interaction.generated.h"

class UObject;


/**
 * UKausExecCalc_Interaction

 */
UCLASS()
class UKausExecCalc_Interaction : public UGameplayEffectExecutionCalculation
{
	GENERATED_BODY()

public:
	UKausExecCalc_Interaction();

protected:
	virtual void Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const override;

};
