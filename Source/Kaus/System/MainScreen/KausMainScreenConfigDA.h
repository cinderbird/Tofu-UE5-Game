#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KausMainScreenConfigDA.generated.h"

class UKausMainScreenInteractionSetDA;
class UKausSequenceConfigDA;

UCLASS(BlueprintType, Const)
class KAUS_API UKausMainScreenConfigDA : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|MainScreen")
    TObjectPtr<UKausMainScreenInteractionSetDA> InteractionSet;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|MainScreen|Sequence")
    TObjectPtr<UKausSequenceConfigDA> SequenceConfig;
};
