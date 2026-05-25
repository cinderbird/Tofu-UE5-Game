#include "KausObserverPawn.h"
#include "Camera/KausCameraComponent.h"
#include "KausFloatingPawnMovement.h"
#include "KausObserverUnitComponent.h"
#include "World/Volume/KausCameraBoundsVolume.h"

AKausObserverPawn::AKausObserverPawn()
{
	PrimaryActorTick.bCanEverTick = true;

	RootComponent = CreateDefaultSubobject<USceneComponent>(TEXT("Root"));

	CameraComponent = CreateDefaultSubobject<UKausCameraComponent>(TEXT("Camera"));
	CameraComponent->SetupAttachment(RootComponent);

	FloatingPawnMovement = CreateDefaultSubobject<UKausFloatingPawnMovement>(TEXT("FloatingPawnMovement"));
	
	FloatingPawnMovement->MaxSpeed = 2000.0f;       
    FloatingPawnMovement->Acceleration = 8000.0f;   
    FloatingPawnMovement->Deceleration = 4000.0f;   
    FloatingPawnMovement->TurningBoost = 8.0f;      

    FloatingPawnMovement->bConstrainToPlane = true;
    FloatingPawnMovement->SetPlaneConstraintNormal(FVector::UpVector);

    FloatingPawnMovement->SetPlaneConstraintOrigin(FVector(0.0f, 0.0f, 100.0f)); 

	ObserverUnitComponent = CreateDefaultSubobject<UKausObserverUnitComponent>(TEXT("ObserverUnitComponent"));

	LastValidLocation = GetActorLocation();
}

void AKausObserverPawn::PossessedBy(AController* NewController)
{
	Super::PossessedBy(NewController);

	if (ObserverUnitComponent)
	{
		ObserverUnitComponent->InitializePlayerCamera();
	}
}

void AKausObserverPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (ObserverUnitComponent)
	{
		ObserverUnitComponent->InitializePlayerInput(PlayerInputComponent);
	}
}

void AKausObserverPawn::SetCameraBounds(AKausCameraBoundsVolume* InBoundsVolume)
{
    CurrentCameraBounds = InBoundsVolume;

    if (CurrentCameraBounds)
    {
        if (CurrentCameraBounds->IsInside(GetActorLocation()))
        {
            bIsBoundsActive = true;
            LastValidLocation = GetActorLocation();
        }
        else
        {
            UE_LOG(LogTemp, Warning, TEXT("ObserverPawn starts OUTSIDE the CameraBoundsVolume!"));
            bIsBoundsActive = true; 
        }
    }
    else
    {
        bIsBoundsActive = false;
    }
}

void AKausObserverPawn::ClampingCameraLocation()
{
    if (!bIsBoundsActive || !CurrentCameraBounds)
    {
        return;
    }

    FVector CurrentLocation = GetActorLocation();

    if (CurrentCameraBounds->IsInside(CurrentLocation))
    {
        LastValidLocation = CurrentLocation;
    }
    else
    {
        FVector RevertedLocation = LastValidLocation;

        SetActorLocation(RevertedLocation);

        if (UPawnMovementComponent* MovementComp = GetMovementComponent())
        {
            MovementComp->StopMovementImmediately();
        }
    }
}