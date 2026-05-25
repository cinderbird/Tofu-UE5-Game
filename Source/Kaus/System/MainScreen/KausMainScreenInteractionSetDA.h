#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "KausMainScreenInteractionSetDA.generated.h"

class ULevelSequence;

UCLASS(BlueprintType, Const)
class KAUS_API UKausMainScreenInteractionSetDA : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|MainScreen|Identity")
    FGameplayTag SetIdentityTag;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|MainScreen|Identity")
    FText DisplayName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|MainScreen|Sequence")
    TSoftObjectPtr<ULevelSequence> MasterSequence;
};
