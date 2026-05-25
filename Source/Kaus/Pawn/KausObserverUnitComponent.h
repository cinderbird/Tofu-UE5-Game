#pragma once

#include "CoreMinimal.h"
#include "Pawn/KausPawnExtensionComponent.h"
#include "Physics/KausCollisionChannels.h"
#include "KausObserverUnitComponent.generated.h"

class AKausCharacter;
class UKausCameraMode;
struct FInputActionValue;
struct FInteractionOption;

/**
 * 
 */
UCLASS()
class KAUS_API UKausObserverUnitComponent : public UKausPawnExtensionComponent
{
	GENERATED_BODY()
	
public:
	UKausObserverUnitComponent(const FObjectInitializer& ObjectInitializer);

	/** Returns the Unit component if one exists on the specified actor. */
	UFUNCTION(BlueprintPure, Category = "Kaus|Unit")
	static UKausObserverUnitComponent* FindObserverUnitComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UKausObserverUnitComponent>() : nullptr); }

	FORCEINLINE float GetCameraRotateAngle() const { return CameraRotateAngle; }
    FORCEINLINE float GetCameraRangeZoom() const { return CameraRangeZoom; }

	FORCEINLINE void ClearCameraSnapDirtyFlag() { bCameraSnapDirtyFlag = false; }
	FORCEINLINE bool IsCameraSnapDirty() const { return bCameraSnapDirtyFlag; }
	FORCEINLINE bool IsDollyZoomEnabled() const { return bEnableDollyZoom; }

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera|Settings")
	void SetEdgeScrollingEnabled(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera|Settings")
	void SetDollyZoomEnabled(bool bEnable);

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera|Settings")
	void SetTerrainFollowingEnabled(bool bEnable);


	//Begine UKausPawnExtensionComponent interface
	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent) override;
	virtual TSubclassOf<UKausCameraMode> DetermineCameraMode() const override;
	//End UKausPawnExtensionComponent interface

	//Begin UActorComponent interface
	virtual void TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;
	//End UActorComponent interface

protected:
	void Input_MouseClick(const FInputActionValue& InputActionValue);

	void Input_CameraMove(const FInputActionValue& InputActionValue);
	void Input_CameraLookMouse(const FInputActionValue& InputActionValue);
	void Input_CameraLookStick(const FInputActionValue& InputActionValue);
	void Input_CameraRotateLeft(const FInputActionValue& InputActionValue);
	void Input_CameraRotateRight(const FInputActionValue& InputActionValue);
	void Input_CameraRangeZoom(const FInputActionValue& InputActionValue);

	void Input_OrbitToggle(const FInputActionValue& InputActionValue);

private:
	void UpdateEdgeScrolling(float DeltaTime);
	void UpdateTerrainFollowing(float DeltaTime);
	void ApplyCameraMovement(const FVector2D& MovementInput);

protected:
	void SelectCharacter(AKausCharacter* NewCharacter);

	void IssueMoveCommand(const FVector& Destination);

	void SendCommand_Interact(AKausCharacter* Character, AActor* Target, const FInteractionOption& Option);

public:
	//Configuration
	// --- Camera ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	int32 CameraRotateAngleUnit = 45;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	float CameraZoomUnit = 10.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	float MaxCameraRangeZoom = 600.f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	float MinCameraRangeZoom = 10.f;


	// --- Edge Scroll ---
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|EdgeScroll")
    bool bEnableEdgeScrolling = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|EdgeScroll")
    float EdgeScrollThreshold = 50.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|EdgeScroll")
    float EdgeScrollSpeedScalar = 2.0f; 

	// --- Dolly Zoom ---
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Camera|Settings")
	bool bEnableDollyZoom = true;

	// --- Terrain Following ---
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    bool bEnableTerrainFollowing = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    TEnumAsByte<ECollisionChannel> TerrainTraceChannel = ECC_WorldStatic;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    float GroundOffset = 150.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    float HeightInterpSpeed = 10.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    float TraceStartHeight = 10000.0f;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Terrain")
    float DefaultGroundLevel = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Camera|Settings")
    float MouseOrbitSensitivity = 1.0f;

private:
	float CameraRotateAngle = 0.0f;

	float CameraRangeZoom = 0.f;

	bool bCameraSnapDirtyFlag = false;

	bool bIsCameraDetached = false;

	bool bIsOrbiting = false;

protected:
	UPROPERTY(Transient)
	TWeakObjectPtr<AKausCharacter> SelectedCharacter;
	
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Interaction")
	TEnumAsByte<ECollisionChannel> UnitTraceChannel = Kaus_TraceChannel_Interaction;

	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Interaction")
	TEnumAsByte<ECollisionChannel> InteractionTraceChannel = Kaus_TraceChannel_Interaction;
};
