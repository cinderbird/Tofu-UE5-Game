#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "KausSequenceConfigDA.generated.h"

UCLASS(BlueprintType, Const)
class KAUS_API UKausSequenceConfigDA : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Sequence")
    FName IntroEndMenuStartMark = "IntroEndMenuStart";

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Sequence")
    FName MenuEndOutroStartMark = "MenuEndOutroStart";

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Sequence")
    FName OutroEndMark = "OutroEnd";
};