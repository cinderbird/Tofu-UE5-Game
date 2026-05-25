#pragma once

#include "KausCameraMode.h"
#include "Curves/CurveFloat.h"
#include "KausPenetrationAvoidanceFeeler.h"
#include "DrawDebugHelpers.h"
#include "KausCameraMode_ThirdPerson.generated.h"

class UCurveVector;

/**
 * UKausCameraMode_ThirdPerson
 *
 *	A basic third person camera mode.
 */
UCLASS(Abstract, Blueprintable)
class UKausCameraMode_ThirdPerson : public UKausCameraMode
{
	GENERATED_BODY()

public:
	UKausCameraMode_ThirdPerson();

	void AddLookInput(FVector2D LookInput);
protected:

	//Begin KausCameraMode interface~
	virtual void UpdateView(float DeltaTime) override;

	virtual void OnActivation() override;

    virtual void OnDeactivation() override;
    //End KausCameraMode interface~

	void UpdateForTarget(float DeltaTime);

	void UpdatePreventPenetration(float DeltaTime);

	void PreventCameraPenetration(class AActor const& ViewTarget, FVector const& SafeLoc, FVector& CameraLoc, float const& DeltaTime, float& DistBlockedPct, bool bSingleRayOnly);

	virtual void DrawDebug(UCanvas* Canvas) const override;

protected:
	// Alters the speed that a crouch offset is blended in or out
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Third Person")
	float CrouchOffsetBlendMultiplier = 5.0f;

	// Penetration prevention
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collision")
	float PenetrationBlendInTime = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collision")
	float PenetrationBlendOutTime = 0.15f;

	/** If true, does collision checks to keep the camera out of the world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collision")
	bool bPreventPenetration = true;

	/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="Collision")
	bool bDoPredictiveAvoidance = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	float CollisionPushOutDistance = 2.f;

	/** When the camera's distance is pushed into this percentage of its full distance due to penetration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Collision")
	float ReportPenetrationPercent = 0.f;

	/**
	 * These are the feeler rays that are used to find where to place the camera.
	 * Index: 0  : This is the normal feeler we use to prevent collisions.
	 * Index: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player
	 *             were to rotate towards that direction and primitively collide the camera so that it pulls in before
	 *             impacting the occluder.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "Collision")
	TArray<FKausPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers;

	UPROPERTY(Transient)
	float AimLineToDesiredPosBlockedPct;

	UPROPERTY(Transient)
	TArray<TObjectPtr<const AActor>> DebugActorsHitDuringCameraPenetration;

#if ENABLE_DRAW_DEBUG
	mutable float LastDrawDebugTime = -MAX_FLT;
#endif

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Zoom")
    float DefaultArmLength = 1000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Zoom")
    float MinArmLength = 300.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Zoom")
    float MaxArmLength = 2000.0f;

	UPROPERTY(EditDefaultsOnly, Category = "Third Person|Rotation")
    float RotationInterpSpeed = 10.0f;

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Rotation")
    float LookSpeedX = 2.0f; // 마우스 좌우 회전 속도

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Rotation")
    float LookSpeedY = 2.0f; // 마우스 상하 회전 속도

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Rotation")
    float MinPitch = -85.0f; // 카메라가 위에서 아래로 내려다보는 최대 각도 (수직에 가깝게)

    UPROPERTY(EditDefaultsOnly, Category = "Third Person|Rotation")
    float MaxPitch = -5.0f;  // 카메라가 지면에 붙어서 보는 최소 각도 (땅을 파고들지 않게 제한)

protected:
	void SetTargetCrouchOffset(FVector NewTargetOffset);

	void UpdateCrouchOffset(float DeltaTime);

	FVector InitialCrouchOffset = FVector::ZeroVector;

	FVector TargetCrouchOffset = FVector::ZeroVector;

	float CrouchOffsetBlendPct = 1.0f;

	FVector CurrentCrouchOffset = FVector::ZeroVector;
	
private:
	float TargetYaw;
    float CurrentYaw;

    float TargetArmLength;
    float CurrentArmLength;
	
    float TargetPitch;
    float CurrentPitch;
};
