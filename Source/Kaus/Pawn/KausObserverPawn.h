#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "KausObserverPawn.generated.h"

class UKausCameraComponent;
class UKausFloatingPawnMovement;
class UKausObserverUnitComponent;
class AKausCameraBoundsVolume;

UCLASS(Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class KAUS_API AKausObserverPawn : public APawn
{
	GENERATED_BODY()

public:
	AKausObserverPawn();

	virtual void PossessedBy(AController* NewController) override;
	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;
	
	UFUNCTION(BlueprintCallable, Category = "Kaus|Camera")
    void SetCameraBounds(AKausCameraBoundsVolume* InBoundsVolume);

protected:
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Pawn", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UKausCameraComponent> CameraComponent;
	
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Pawn", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UKausFloatingPawnMovement> FloatingPawnMovement;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Pawn", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UKausObserverUnitComponent> ObserverUnitComponent;

private:
	void ClampingCameraLocation();

private:
	UPROPERTY(Transient, VisibleInstanceOnly, Category = "Kaus|Camera")
    TObjectPtr<AKausCameraBoundsVolume> CurrentCameraBounds;

    FVector LastValidLocation;

    bool bIsBoundsActive = false;
};
