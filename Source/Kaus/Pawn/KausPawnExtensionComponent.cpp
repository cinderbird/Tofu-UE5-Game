#include "Pawn/KausPawnExtensionComponent.h"
#include "Player/KausLocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "Input/KausInputComponent.h"
#include "Tags/KausGameplayTags.h"
#include "AbilitySystem/KausAbilitySystemComponent.h"
#include "Camera/KausCameraMode.h"
#include "AbilitySystemGlobals.h"

UKausPawnExtensionComponent::UKausPawnExtensionComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
    , bReadyToBindInputs(false)
{
}

void UKausPawnExtensionComponent::InitializePlayerCamera()
{
    const APawn* Pawn = GetPawn<APawn>();
    if (UKausCameraComponent* CameraComponent = UKausCameraComponent::FindCameraComponent(Pawn))
    {
        CameraComponent->DetermineCameraModeDelegate.BindUObject(this, &ThisClass::DetermineCameraMode);
    }
}

void UKausPawnExtensionComponent::Input_AbilityInputTagPressed(FGameplayTag InputTag)
{
   if (const APawn* Pawn = GetPawn<APawn>())
    {
        if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn))
        {
            if (UKausAbilitySystemComponent* KausASC = Cast<UKausAbilitySystemComponent>(ASC))
            {
                KausASC->AbilityInputTagPressed(InputTag);
            }
        }
    }
}

void UKausPawnExtensionComponent::Input_AbilityInputTagReleased(FGameplayTag InputTag)
{
    const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Pawn))
    {
        if (UKausAbilitySystemComponent* KausASC = Cast<UKausAbilitySystemComponent>(ASC))
        {
            KausASC->AbilityInputTagReleased(InputTag);
        }
    }
}

bool UKausPawnExtensionComponent::IsReadyToBindInputs() const
{
    return bReadyToBindInputs;
}

void UKausPawnExtensionComponent::ReadyToBindInputs()
{
	//if (ensure(bReadyToBindInputs))
	//{
	//	return;
	//}

	bReadyToBindInputs = true;
}

TSubclassOf<UKausCameraMode> UKausPawnExtensionComponent::DetermineCameraMode() const
{
    if (AbilityCameraMode)
    {
        return AbilityCameraMode;
    }

    if (PersistentCameraMode)
    {
        return PersistentCameraMode;
    }

    return DefaultCameraMode;
}

void UKausPawnExtensionComponent::SetPersistentCameraMode(TSubclassOf<UKausCameraMode> CameraMode)
{
    PersistentCameraMode = CameraMode;
}

void UKausPawnExtensionComponent::SetAbilityCameraMode(TSubclassOf<UKausCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
    AbilityCameraMode = CameraMode;
    AbilityCameraModeOwningSpecHandle = OwningSpecHandle;
}

void UKausPawnExtensionComponent::ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle)
{
    if (AbilityCameraModeOwningSpecHandle == OwningSpecHandle)
	{
		AbilityCameraMode = nullptr;
		AbilityCameraModeOwningSpecHandle = FGameplayAbilitySpecHandle();
	}
}

