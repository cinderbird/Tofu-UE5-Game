#include "KausGameplayAbility_Jump.h"
#include "AbilitySystem/Abilities/KausGameplayAbility.h"
#include "Character/KausCharacter.h"

struct FGameplayTagContainer;


UKausGameplayAbility_Jump::UKausGameplayAbility_Jump(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
	NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalPredicted;
}

bool UKausGameplayAbility_Jump::CanActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayTagContainer* SourceTags, const FGameplayTagContainer* TargetTags, FGameplayTagContainer* OptionalRelevantTags) const
{
	if (!ActorInfo || !ActorInfo->AvatarActor.IsValid())
	{
		return false;
	}

	const AKausCharacter* KausCharacter = Cast<AKausCharacter>(ActorInfo->AvatarActor.Get());
	if (!KausCharacter || !KausCharacter->CanJump())
	{
		return false;
	}

	if (!Super::CanActivateAbility(Handle, ActorInfo, SourceTags, TargetTags, OptionalRelevantTags))
	{
		return false;
	}

	return true;
}

void UKausGameplayAbility_Jump::EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled)
{
	// Stop jumping in case the ability blueprint doesn't call it.
	CharacterJumpStop();

	Super::EndAbility(Handle, ActorInfo, ActivationInfo, bReplicateEndAbility, bWasCancelled);
}

void UKausGameplayAbility_Jump::CharacterJumpStart()
{
	if (AKausCharacter* KausCharacter = GetKausCharacterFromActorInfo())
	{
		if (KausCharacter->IsLocallyControlled() && !KausCharacter->bPressedJump)
		{
			KausCharacter->UnCrouch();
			KausCharacter->Jump();
		}
	}
}

void UKausGameplayAbility_Jump::CharacterJumpStop()
{
	if (AKausCharacter* KausCharacter = GetKausCharacterFromActorInfo())
	{
		if (KausCharacter->IsLocallyControlled() && KausCharacter->bPressedJump)
		{
			KausCharacter->StopJumping();
		}
	}
}

