#pragma once

#include "CoreMinimal.h"
#include "GameplayAbilitySpecHandle.h"
#include "Components/PawnComponent.h"
#include "KausPawnExtensionComponent.generated.h"

class UKausCameraMode;
class UKausInputConfig;
class UInputMappingContext;
class UEnhancedInputLocalPlayerSubsystem;

struct FGameplayTag;

/**
 * 
 */
UCLASS(Abstract)
class KAUS_API UKausPawnExtensionComponent : public UPawnComponent
{
	GENERATED_BODY()
	
protected:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Input")
	TObjectPtr<UKausInputConfig> InputConfig;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Input")
	TObjectPtr<UInputMappingContext> DefaultMappingContext;
	
	// Default camera mode used by player controlled pawns.
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	TSubclassOf<UKausCameraMode> DefaultCameraMode;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera")
	TSubclassOf<UKausCameraMode> PersistentCameraMode;

public:
	void SetAbilityCameraMode(TSubclassOf<UKausCameraMode> CameraMode, const FGameplayAbilitySpecHandle& OwningSpecHandle);

	void ClearAbilityCameraMode(const FGameplayAbilitySpecHandle& OwningSpecHandle);

	bool IsReadyToBindInputs() const;
	
	void ReadyToBindInputs();

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
	void SetPersistentCameraMode(TSubclassOf<UKausCameraMode> CameraMode);

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
	TSubclassOf<UKausCameraMode> GetPersistentCameraMode() const { return PersistentCameraMode; }

	virtual void InitializePlayerCamera();

	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent) {};

protected:	
	UKausPawnExtensionComponent(const FObjectInitializer& ObjectInitializer);

	virtual void Input_AbilityInputTagPressed(FGameplayTag InputTag);

	virtual void Input_AbilityInputTagReleased(FGameplayTag InputTag);

	virtual TSubclassOf<UKausCameraMode> DetermineCameraMode() const;

	TSubclassOf<UKausCameraMode> GetAbilityCameraMode() const { return AbilityCameraMode; }

	FGameplayAbilitySpecHandle GetAbilityCameraModeOwningSpecHandle() const { return AbilityCameraModeOwningSpecHandle; }

private:
	bool bReadyToBindInputs;
	
	/** Camera mode set by an ability. */
	UPROPERTY()
	TSubclassOf<UKausCameraMode> AbilityCameraMode;

	/** Spec handle for the last ability to set a camera mode. */
	FGameplayAbilitySpecHandle AbilityCameraModeOwningSpecHandle;

};
