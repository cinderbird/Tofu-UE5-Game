#include "KausUICameraManagerComponent.h"
#include "GameFramework/HUD.h"
#include "GameFramework/PlayerController.h"
#include "KausPlayerCameraManager.h"

class AActor;
class FDebugDisplayInfo;


UKausUICameraManagerComponent::UKausUICameraManagerComponent()
{
	bWantsInitializeComponent = true;

	if (!HasAnyFlags(RF_ClassDefaultObject))
	{
		// Register "showdebug" hook.
		if (!IsRunningDedicatedServer())
		{
			AHUD::OnShowDebugInfo.AddUObject(this, &ThisClass::OnShowDebugInfo);
		}
	}
}

UKausUICameraManagerComponent* UKausUICameraManagerComponent::GetComponent(APlayerController* PC)
{
	if (PC != nullptr)
	{
		if (AKausPlayerCameraManager* PCCamera = Cast<AKausPlayerCameraManager>(PC->PlayerCameraManager))
		{
			return PCCamera->GetUICameraComponent();
		}
	}

	return nullptr;
}

void UKausUICameraManagerComponent::InitializeComponent()
{
	Super::InitializeComponent();
}

void UKausUICameraManagerComponent::SetViewTarget(AActor* InViewTarget, FViewTargetTransitionParams TransitionParams)
{
	TGuardValue<bool> UpdatingViewTargetGuard(bUpdatingViewTarget, true);

	ViewTarget = InViewTarget;
	CastChecked<AKausPlayerCameraManager>(GetOwner())->SetViewTarget(ViewTarget, TransitionParams);
}

bool UKausUICameraManagerComponent::NeedsToUpdateViewTarget() const
{
	return false;
}

void UKausUICameraManagerComponent::UpdateViewTarget(struct FTViewTarget& OutVT, float DeltaTime)
{
}

void UKausUICameraManagerComponent::OnShowDebugInfo(AHUD* HUD, UCanvas* Canvas, const FDebugDisplayInfo& DisplayInfo, float& YL, float& YPos)
{
}
