#include "KausGameplayAbility_InteractExecute.h"
#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"

UKausGameplayAbility_InteractExecute::UKausGameplayAbility_InteractExecute()
{
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
}

void UKausGameplayAbility_InteractExecute::ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

    if (TriggerEventData)
    {
        OnInteractionStarted(*TriggerEventData);
        return;
    }

    K2_EndAbility();
}

void UKausGameplayAbility_InteractExecute::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
    Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UKausGameplayAbility_InteractExecute::OnInteractionStarted_Implementation(FGameplayEventData TriggerEventData)
{
}
