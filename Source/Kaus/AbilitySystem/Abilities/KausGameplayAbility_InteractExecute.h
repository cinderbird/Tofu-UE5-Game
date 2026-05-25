#pragma once

#include "CoreMinimal.h"
#include "AbilitySystem/Abilities/KausGameplayAbility.h" 
#include "KausGameplayAbility_InteractExecute.generated.h"


/**
 * 
 */
UCLASS(Abstract)
class KAUS_API UKausGameplayAbility_InteractExecute : public UKausGameplayAbility
{
    GENERATED_BODY()

public:
    UKausGameplayAbility_InteractExecute();

    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

protected:
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Interaction")
    void OnInteractionStarted(FGameplayEventData TriggerEventData);

    virtual void OnInteractionStarted_Implementation(FGameplayEventData TriggerEventData);
};
