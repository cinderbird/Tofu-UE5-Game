#pragma once

#include "CoreMinimal.h"
#include "Camera/KausCameraMode.h"
#include "KausCameraMode_Observer.generated.h"

/**
 * UKausCameraMode_Observer
 * ObserverUnitComponent의 데이터를 참조하여 카메라의 위치와 회전을 계산.
 */
UCLASS(Abstract, Blueprintable)
class KAUS_API UKausCameraMode_Observer : public UKausCameraMode
{
	GENERATED_BODY()

public:
	UKausCameraMode_Observer();

protected:
	virtual void UpdateView(float DeltaTime) override;

protected:
	// --- [Configuration] ---
	// 기본 내려다보는 각도
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer")
	float DefaultPitch = -45.0f;

	// 줌 보간 속도
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer")
	float ZoomInterpSpeed = 10.0f;

	// 회전 보간 속도
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer")
	float RotationInterpSpeed = 8.0f;
	
	// 위치 추적 보간 속도
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer")
	float LocationInterpSpeed = 10.0f;

	// 줌 레벨에 따른 피치 보정 곡선
	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer")
	TObjectPtr<UCurveFloat> ZoomToPitchCurve;

	UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer|FOV")
    TObjectPtr<UCurveFloat> ZoomToFOVCurve;

    UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer|FOV")
    float DefaultFOV = 90.0f;

    // FOV 보간 속도
    UPROPERTY(EditDefaultsOnly, Category = "Kaus|Observer|FOV")
    float FOVInterpSpeed = 10.0f;


	// --- 런타임 상태 변수 (Runtime State) ---
	// 현재 보간 중인 줌 거리
	float CurrentDistance;

	// 현재 보간 중인 Yaw 회전 값
	float CurrentYaw;

	// 현재 보간 중인 FOV 값
	float CurrentFOV;

	// 현재 보간 중인 피벗 위치
	FVector CurrentPivotLocation;
};
