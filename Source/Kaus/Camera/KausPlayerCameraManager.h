#pragma once
#include "Camera/PlayerCameraManager.h"
#include "KausPlayerCameraManager.generated.h"

#define KAUS_CAMERA_DEFAULT_FOV			(80.0f)
#define KAUS_CAMERA_DEFAULT_PITCH_MIN	(-89.0f)
#define KAUS_CAMERA_DEFAULT_PITCH_MAX	(89.0f)

class FDebugDisplayInfo;
class UCanvas;
class UObject;
class UKausUICameraManagerComponent;

/**
 * AKausPlayerCameraManager
 *
 *	The base player camera manager class used by this project.
 */
UCLASS(notplaceable, MinimalAPI)
class AKausPlayerCameraManager : public APlayerCameraManager
{
	GENERATED_BODY()

public:
	AKausPlayerCameraManager(const FObjectInitializer& ObjectInitializer);

	UKausUICameraManagerComponent* GetUICameraComponent() const;

protected:
	virtual void UpdateViewTarget(FTViewTarget& OutVT, float DeltaTime) override;

	virtual void DisplayDebug(UCanvas* Canvas, const FDebugDisplayInfo& DebugDisplay, float& YL, float& YPos) override;

private:
	/** The UI Camera Component, controls the camera when UI is doing something important that gameplay doesn't get priority over. */
	UPROPERTY(Transient)
	TObjectPtr<UKausUICameraManagerComponent> UICamera;
};
