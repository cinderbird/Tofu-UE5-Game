#include "KausPlayerCameraManager.h"
#include "Async/TaskGraphInterfaces.h"
#include "Engine/Canvas.h"
#include "Engine/Engine.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "KausUICameraManagerComponent.h"
#include "KausCameraComponent.h"

class FDebugDisplayInfo;
static FName UICameraComponentName(TEXT("UICamera"));

AKausPlayerCameraManager::AKausPlayerCameraManager(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	DefaultFOV = KAUS_CAMERA_DEFAULT_FOV;
	ViewPitchMin = KAUS_CAMERA_DEFAULT_PITCH_MIN;
	ViewPitchMax = KAUS_CAMERA_DEFAULT_PITCH_MAX;

	UICamera = CreateDefaultSubobject<UKausUICameraManagerComponent>(UICameraComponentName);
}

UKausUICameraManagerComponent* AKausPlayerCameraManager::GetUICameraComponent() const
{
	return UICamera;
}

void AKausPlayerCameraManager::UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime)
{
	// If the UI Camera is looking at something, let it have priority.
	if (UICamera->NeedsToUpdateViewTarget())
	{
		Super::UpdateViewTarget(OutVT, DeltaTime);
		UICamera->UpdateViewTarget(OutVT, DeltaTime);
		return;
	}

	Super::UpdateViewTarget(OutVT, DeltaTime);
}

void AKausPlayerCameraManager::DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos)
{
	check(Canvas);

	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;

	DisplayDebugManager.SetFont(GEngine->GetSmallFont());
	DisplayDebugManager.SetDrawColor(FColor::Yellow);
	DisplayDebugManager.DrawString(FString::Printf(TEXT("KausPlayerCameraManager: %s"), *GetNameSafe(this)));

	Super::DisplayDebug(Canvas, DebugDisplay, YL, YPos);

	const APawn* Pawn = (PCOwner ? PCOwner->GetPawn() : nullptr);

	if (const UKausCameraComponent* CameraComponent = UKausCameraComponent::FindCameraComponent(Pawn))
	{
		CameraComponent->DrawDebug(Canvas);
	}
}

