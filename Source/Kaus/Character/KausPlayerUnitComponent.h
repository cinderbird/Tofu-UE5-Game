#pragma once

#include "CoreMinimal.h"
#include "Pawn/KausPawnExtensionComponent.h"
#include "Camera/KausCameraMode.h"
#include "KausPlayerUnitComponent.generated.h"

class UKausCameraMode;
struct FInputActionValue;

UENUM(BlueprintType)
enum class EKausCameraState : uint8
{
	None,
    ThirdPerson_Mode,
    ZZZ_Mode
};

/**
 * 
 */
UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausPlayerUnitComponent : public UKausPawnExtensionComponent
{
	GENERATED_BODY()

public:
	UKausPlayerUnitComponent(const FObjectInitializer& ObjectInitializer);

	/** Returns the Unit component if one exists on the specified actor. */
	UFUNCTION(BlueprintPure, Category = "Kaus|Unit")
	static UKausPlayerUnitComponent* FindPlayerUnitComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UKausPlayerUnitComponent>() : nullptr); }

	//Begine ~UKausPawnExtensionComponent interface
	virtual void InitializePlayerInput(UInputComponent* PlayerInputComponent) override;
	virtual TSubclassOf<UKausCameraMode> DetermineCameraMode() const override;
	//End ~UKausPawnExtensionComponent interface

	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
    void SetCameraState(EKausCameraState NewState);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
    void ToggleCameraState();

    EKausCameraState GetCameraState() const { return CurrentCameraState; }

	void Input_CameraSwitch_ZZZAndThirdPerson();
	void Input_Move(const FInputActionValue& Value);
	
	//상호작용 타겟 순회 (마우스 휠, 위/아래 화살표 등)
    void Input_CycleInteraction(const FInputActionValue& Value);

protected:
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Modes")
    TSubclassOf<UKausCameraMode> ThirdPersonCameraModeClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Camera|Modes")
    TSubclassOf<UKausCameraMode> ZZZCameraModeClass;

private:
	EKausCameraState CurrentCameraState = EKausCameraState::ThirdPerson_Mode;
};
