#include "Camera/KausCameraMode_Observer.h"
#include "Pawn/KausObserverUnitComponent.h"
#include "GameFramework/Pawn.h"
#include "Curves/CurveFloat.h"

UKausCameraMode_Observer::UKausCameraMode_Observer()
{
	CurrentDistance = 1000.0f;
	CurrentYaw = 0.0f;
	CurrentPivotLocation = FVector::ZeroVector;

    CurrentFOV = 90.0f;
}

void UKausCameraMode_Observer::UpdateView(float DeltaTime)
{
	AActor* TargetActor = GetTargetActor();
    if (!TargetActor) return;

    const UKausObserverUnitComponent* ObserverComp = UKausObserverUnitComponent::FindObserverUnitComponent(TargetActor);
    if (!ObserverComp)
    {
        Super::UpdateView(DeltaTime);
        return;
    }

    //목표 데이터 가져오기
    FVector TargetPivotLocation = TargetActor->GetActorLocation();
    float TargetDist = ObserverComp->GetCameraRangeZoom();
    float TargetYaw = (float)ObserverComp->GetCameraRotateAngle();

    //기본 보간 (위치, 거리, 회전)
    CurrentPivotLocation = FMath::VInterpTo(CurrentPivotLocation, TargetPivotLocation, DeltaTime, LocationInterpSpeed);
    CurrentDistance = FMath::FInterpTo(CurrentDistance, TargetDist, DeltaTime, ZoomInterpSpeed);
    
    FRotator CurrentRot(0.0f, CurrentYaw, 0.0f);
    FRotator TargetRot(0.0f, TargetYaw, 0.0f);
    FRotator NewRot = FMath::RInterpTo(CurrentRot, TargetRot, DeltaTime, RotationInterpSpeed);
    CurrentYaw = NewRot.Yaw;

    float TargetFOV = DefaultFOV;

	if (ObserverComp->IsDollyZoomEnabled() && ZoomToFOVCurve)
	{
		TargetFOV = ZoomToFOVCurve->GetFloatValue(CurrentDistance);
	}

	CurrentFOV = FMath::FInterpTo(CurrentFOV, TargetFOV, DeltaTime, FOVInterpSpeed);
	
    //View 계산
    float FinalPitch = DefaultPitch;
    if (ZoomToPitchCurve)
    {
        FinalPitch = ZoomToPitchCurve->GetFloatValue(CurrentDistance);
    }

    FRotator ViewRotation(FinalPitch, CurrentYaw, 0.0f);
    FVector ViewLocation = CurrentPivotLocation - (ViewRotation.Vector() * CurrentDistance);

    View.Location = ViewLocation;
    View.Rotation = ViewRotation;
    View.ControlRotation = ViewRotation;
    View.FieldOfView = CurrentFOV;
}