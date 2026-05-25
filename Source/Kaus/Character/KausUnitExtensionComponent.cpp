#include "KausUnitExtensionComponent.h"
#include "AbilitySystem/KausAbilitySystemComponent.h"
#include "Logs/KausLogChannels.h"
#include "KausCharacter.h"
#include "AbilitySystem/KausUnitInitializationContext.h"


UKausUnitExtensionComponent::UKausUnitExtensionComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UKausAbilitySystemComponent* UKausUnitExtensionComponent::GetKausAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UAbilitySystemComponent* UKausUnitExtensionComponent::GetAbilitySystemComponent() const
{
	return AbilitySystemComponent;
}

UKausUnitExtensionComponent* UKausUnitExtensionComponent::FindPawnExtensionComponent(const AActor* Actor)
{
	return (Actor ? Actor->FindComponentByClass<UKausUnitExtensionComponent>() : nullptr);
}

void UKausUnitExtensionComponent::InitializeAbilitySystem(UKausAbilitySystemComponent* InASC, AActor* InOwnerActor, FGameplayTag UnitID)
{
    check(InASC);
    check(InOwnerActor);

    if (AbilitySystemComponent == InASC && AbilitySystemComponent->IsReady())
    {
        return;
    }

    if (AbilitySystemComponent)
    {
        UninitializeAbilitySystem();
    }

    AbilitySystemComponent = InASC;
    if (AbilitySystemComponent)
    {
        AbilitySystemComponent->InitAbilityActorInfo(InOwnerActor, InOwnerActor);

        AbilitySystemComponent->ClearAbilityInput();

        if (GetOwner()->HasAuthority() && IsValid(UnitAbilityData))
        {
            GrantedHandles.TakeFromAbilitySystem(AbilitySystemComponent);

            float UnitLevel = 1.0f;
            if (AKausCharacter* KausChar = Cast<AKausCharacter>(InOwnerActor))
            {
                if (UnitID == FGameplayTag::EmptyTag)
                {
                    UnitID = KausChar->UnitID;
                }
            }

            FKausUnitInitializationContext InitContext(UnitID, UnitLevel, InOwnerActor);
            UnitAbilityData->GiveToAbilitySystem(AbilitySystemComponent, &GrantedHandles, InitContext);

            UE_LOG(LogKaus, Log, TEXT("[%s] Ability System Initialized via Data Asset."), *GetName());
        }

        OnAbilitySystemInitialized.Broadcast();
    }
}

void UKausUnitExtensionComponent::UninitializeAbilitySystem()
{
	if (AbilitySystemComponent)
	{
		AbilitySystemComponent->ClearAbilityInput();

		if (GetOwner()->HasAuthority())
		{
			GrantedHandles.TakeFromAbilitySystem(AbilitySystemComponent);
		}

		AbilitySystemComponent = nullptr;
	}
}