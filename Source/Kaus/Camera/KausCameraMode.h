#pragma once
#include "Engine/World.h"
#include "GameplayTagContainer.h"
#include "InputMappingContext.h"
#include "KausCameraMode.generated.h"

class AActor;
class UCanvas;
class UKausCameraComponent;
class UInputMappingContext;

namespace KausCameraMode_Statics
{
	static const FName NAME_IgnoreCameraCollision = TEXT("IgnoreCameraCollision");
}

/**
 * EKausCameraModeBlendFunction
 *
 *	Blend function used for transitioning between camera modes.
 */
UENUM(BlueprintType)
enum class EKausCameraModeBlendFunction : uint8
{
	// Does a simple linear interpolation.
	Linear,

	// Immediately accelerates, but smoothly decelerates into the target.  Ease amount controlled by the exponent.
	EaseIn,

	// Smoothly accelerates, but does not decelerate into the target.  Ease amount controlled by the exponent.
	EaseOut,

	// Smoothly accelerates and decelerates.  Ease amount controlled by the exponent.
	EaseInOut,

	COUNT	UMETA(Hidden)
};


/**
 * FKausCameraModeView
 *
 *	View data produced by the camera mode that is used to blend camera modes.
 */
struct FKausCameraModeView
{
public:

	FKausCameraModeView();

	void Blend(const FKausCameraModeView& Other, float OtherWeight);

public:

	FVector Location;
	FRotator Rotation;
	FRotator ControlRotation;
	float FieldOfView;
};

/**
 * UKausCameraMode
 *
 *	Base class for all camera modes.
 */
UCLASS(Abstract, NotBlueprintable)
class KAUS_API UKausCameraMode : public UObject
{
	GENERATED_BODY()

public:
	UKausCameraMode();

	UKausCameraComponent* GetKausCameraComponent() const;

	virtual UWorld* GetWorld() const override;

	// Called when this camera mode is activated on the camera mode stack.
	virtual void OnActivation();

	// Called when this camera mode is deactivated on the camera mode stack.
	virtual void OnDeactivation();

	AActor* GetTargetActor() const;

	const FKausCameraModeView& GetCameraModeView() const { return View; }

	void UpdateCameraMode(float DeltaTime);

	float GetBlendTime() const { return BlendTime; }

	float GetBlendWeight() const { return BlendWeight; }

	void SetBlendWeight(float Weight);

	FGameplayTag GetCameraTypeTag() const { return CameraTypeTag; }

	virtual void DrawDebug(UCanvas* Canvas) const;

protected:
	virtual FVector GetPivotLocation() const;
	virtual FRotator GetPivotRotation() const;

	virtual void UpdateView(float DeltaTime);
	virtual void UpdateBlending(float DeltaTime);

protected:
	// A tag that can be queried by gameplay code that cares when a kind of camera mode is active
	// without having to ask about a specific mode (e.g., when aiming downsights to get more accuracy)
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	FGameplayTag CameraTypeTag;

	// View output produced by the camera mode.
	FKausCameraModeView View;

	// The horizontal field of view (in degrees).
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "5.0", UIMax = "170", ClampMin = "5.0", ClampMax = "170.0"))
	float FieldOfView;

	// Minimum view pitch (in degrees).
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", ClampMax = "89.9"))
	float ViewPitchMin;

	// Maximum view pitch (in degrees).
	UPROPERTY(EditDefaultsOnly, Category = "View", Meta = (UIMin = "-89.9", UIMax = "89.9", ClampMin = "-89.9", ClampMax = "89.9"))
	float ViewPitchMax;

	// How long it takes to blend in this mode.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendTime;

	// Function used for blending.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	EKausCameraModeBlendFunction BlendFunction;

	// Exponent used by blend functions to control the shape of the curve.
	UPROPERTY(EditDefaultsOnly, Category = "Blending")
	float BlendExponent;

	// Linear blend alpha used to determine the blend weight.
	float BlendAlpha;

	// Blend weight calculated using the blend alpha and function.
	float BlendWeight;

	UPROPERTY(EditDefaultsOnly, Category = "Input")
    TObjectPtr<UInputMappingContext> CameraMappingContext;

    // 적용할 IMC의 우선순위입니다. (기본 이동보다 높게 설정하여 덮어쓰기 용이)
    UPROPERTY(EditDefaultsOnly, Category = "Input")
    int32 InputMappingPriority = 100;

    // 헬퍼 함수: 이 카메라 모드를 소유한 로컬 플레이어 서브시스템을 가져옵니다.
    class UEnhancedInputLocalPlayerSubsystem* GetEnhancedInputSubsystem() const;


protected:
	/** If true, skips all interpolation and puts camera in ideal location.  Automatically set to false next frame. */
	UPROPERTY(transient)
	uint32 bResetInterpolation:1;
};


/**
 * UKausCameraModeStack
 *
 *	Stack used for blending camera modes.
 */
UCLASS()
class UKausCameraModeStack : public UObject
{
	GENERATED_BODY()

public:
	UKausCameraModeStack();

	virtual void ActivateStack();
	virtual void DeactivateStack();

	bool IsStackActivate() const { return bIsActive; }

	void PushCameraMode(TSubclassOf<UKausCameraMode> CameraModeClass);

	bool EvaluateStack(float DeltaTime, FKausCameraModeView& OutCameraModeView);

	void DrawDebug(UCanvas* Canvas) const;

	// Gets the tag associated with the top layer and the blend weight of it
	void GetBlendInfo(float& OutWeightOfTopLayer, FGameplayTag& OutTagOfTopLayer) const;

	UKausCameraMode* GetCameraModeInstance(TSubclassOf<UKausCameraMode> CameraModeClass);

	template <typename T>
    T* FindCameraModeByClass() const
    {
        for (UKausCameraMode* CameraMode : CameraModeInstances)
        {
            if (T* FoundMode = Cast<T>(CameraMode))
            {
                return FoundMode;
            }
        }
        return nullptr;
    }

protected:

	void UpdateStack(float DeltaTime);
	void BlendStack(FKausCameraModeView& OutCameraModeView) const;

protected:
	bool bIsActive;

	UPROPERTY()
	TArray<TObjectPtr<UKausCameraMode>> CameraModeInstances;

	UPROPERTY()
	TArray<TObjectPtr<UKausCameraMode>> CameraModeStack;
};
