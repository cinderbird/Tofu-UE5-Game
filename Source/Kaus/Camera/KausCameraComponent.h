#pragma once

#include "Camera/CameraComponent.h"
#include "GameFramework/Actor.h"
#include "Camera/KausCameraMode.h"
#include "KausCameraComponent.generated.h"

class UCanvas;
class UKausCameraMode;
class UKausCameraModeStack;
class UObject;
struct FFrame;
struct FGameplayTag;
struct FMinimalViewInfo;
template <class TClass> class TSubclassOf;

DECLARE_DELEGATE_RetVal(TSubclassOf<UKausCameraMode>, FKausCameraModeDelegate);


/**
 * UKausCameraComponent
 *
 *	The base camera component class used by this project.
 */
UCLASS()
class UKausCameraComponent : public UCameraComponent
{
	GENERATED_BODY()

public:

	UKausCameraComponent(const FObjectInitializer& ObjectInitializer);

	// Returns the camera component if one exists on the specified actor.
	UFUNCTION(BlueprintPure, Category = "Kaus|Camera")
	static UKausCameraComponent* FindCameraComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UKausCameraComponent>() : nullptr); }
	
	// Returns the target actor that the camera is looking at.
	virtual AActor* GetTargetActor() const { return GetOwner(); }

	// Delegate used to query for the best camera mode.
	FKausCameraModeDelegate DetermineCameraModeDelegate;

	// Add an offset to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
	void AddFieldOfViewOffset(float FovOffset) { FieldOfViewOffset += FovOffset; }

	virtual void DrawDebug(UCanvas* Canvas) const;

	// Gets the tag associated with the top layer and the blend weight of it
	void GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTag& OutTagOfTopLayer) const;

	template <typename T>
    T* GetCameraModeInstance() const
    {
        if (CameraModeStack)
        {
            return CameraModeStack->FindCameraModeByClass<T>();
        }
        return nullptr;
    }

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
    void PushCameraMode(TSubclassOf<UKausCameraMode> CameraModeClass);
	
protected:
	virtual void OnRegister() override;
	virtual void GetCameraView(float DeltaTime, FMinimalViewInfo& DesiredView) override;

	virtual void UpdateCameraModes();

protected:
	// Stack used to blend the camera modes.
	UPROPERTY()
	TObjectPtr<UKausCameraModeStack> CameraModeStack;

	// Offset applied to the field of view.  The offset is only for one frame, it gets cleared once it is applied.
	float FieldOfViewOffset;

};
