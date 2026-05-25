#pragma once

#include "CoreMinimal.h"
#include "GameplayTagContainer.h"
#include "KausNodeEventPayload.generated.h"

class AActor;


USTRUCT(BlueprintType)
struct KAUS_API FKausEventPayload
{
    GENERATED_BODY()

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event")
    AActor* Instigator = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event")
    AActor* Target = nullptr;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event")
    float Value = 0.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event", meta = (ForceInlineRow))
    TMap<FGameplayTag, float> Values;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event")
    FGameplayTagContainer Tags;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Event")
    TObjectPtr<UObject> OptionalPayload = nullptr;

    float GetValueByTag(const FGameplayTag& Tag, float DefaultValue = 0.0f) const
    {
        if (const float* Found = Values.Find(Tag))
        {
            return *Found;
        }
        return DefaultValue;
    }

};
