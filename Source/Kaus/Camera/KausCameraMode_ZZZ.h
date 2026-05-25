#pragma once

#include "Camera/KausCameraMode.h"
#include "KausPenetrationAvoidanceFeeler.h"
#include "DrawDebugHelpers.h"
#include "KausCameraMode_ZZZ.generated.h"

/**
 * UKausCameraMode_ZZZ
 */
UCLASS(Abstract, Blueprintable)
class KAUS_API UKausCameraMode_ZZZ : public UKausCameraMode
{
    GENERATED_BODY()

public:
    UKausCameraMode_ZZZ();

    // --- [Core Interface for Pawn] ---
    void AddMoveInput(FVector2D MoveInput);
    
    void AddZoomInput(float ZoomAmount);
    
    void AddRotationStep(float Direction); // +1(Right), -1(Left)
    
    void AddLookInput(FVector2D LookInput);

    void ResetCamera();

protected:
    //Begin KausCameraMode interface~
    virtual void UpdateView(float DeltaTime) override;

    virtual void OnActivation() override;

    virtual void OnDeactivation() override;
    //End KausCameraMode interface~
    
	void UpdateForTarget(float DeltaTime);

	void UpdatePreventPenetration(float DeltaTime);
    
    void UpdateCrouchOffset(float DeltaTime);

    void SetTargetCrouchOffset(FVector NewTargetOffset);

	void PreventCameraPenetration(class AActor const& ViewTarget, FVector const& SafeLoc, FVector& CameraLoc, float const& DeltaTime, float& DistBlockedPct, bool bSingleRayOnly);

	virtual void DrawDebug(UCanvas* Canvas) const override;

protected:
    // --- [Settings] ---
    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Movement")
    float MoveSpeed = 10.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Movement")
    FVector2D MovementBoundsX = FVector2D(-500.0f, 500.0f); // Min, Max

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Movement")
    FVector2D MovementBoundsY = FVector2D(-500.0f, 500.0f);

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Zoom")
    float DefaultArmLength = 1000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Zoom")
    float MinArmLength = 300.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Zoom")
    float MaxArmLength = 2000.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Zoom")
    float ZoomSpeed = 100.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float RotationStepAngle = 45.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float RotationInterpSpeed = 10.0f;

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float LookSpeedX = 2.0f; // 마우스 좌우 회전 속도

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float LookSpeedY = 2.0f; // 마우스 상하 회전 속도

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float MinPitch = -85.0f; // 카메라가 위에서 아래로 내려다보는 최대 각도 (수직에 가깝게)

    UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Rotation")
    float MaxPitch = -5.0f;  // 카메라가 지면에 붙어서 보는 최소 각도 (땅을 파고들지 않게 제한)

	// Alters the speed that a crouch offset is blended in or out
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Crouch")
	float CrouchOffsetBlendMultiplier = 5.0f;
    
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Crouch")
	FVector InitialCrouchOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Crouch")
	FVector TargetCrouchOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Crouch")
	float CrouchOffsetBlendPct = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Crouch")
	FVector CurrentCrouchOffset = FVector::ZeroVector;

// Penetration prevention
public:
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZZ|Collision")
	float PenetrationBlendInTime = 0.1f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZZ|Collision")
	float PenetrationBlendOutTime = 0.15f;

	/** If true, does collision checks to keep the camera out of the world. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZZ|Collision")
	bool bPreventPenetration = true;

	/** If true, try to detect nearby walls and move the camera in anticipation.  Helps prevent popping. */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category="ZZZ|Collision")
	bool bDoPredictiveAvoidance = true;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Collision")
	float CollisionPushOutDistance = 2.f;

	/** When the camera's distance is pushed into this percentage of its full distance due to penetration */
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "ZZZ|Collision")
	float ReportPenetrationPercent = 0.f;

	/**
	 * These are the feeler rays that are used to find where to place the camera.
	 * Index: 0  : This is the normal feeler we use to prevent collisions.
	 * Index: 1+ : These feelers are used if you bDoPredictiveAvoidance=true, to scan for potential impacts if the player
	 *             were to rotate towards that direction and primitively collide the camera so that it pulls in before
	 *             impacting the occluder.
	 */
	UPROPERTY(EditDefaultsOnly, Category = "ZZZ|Collision")
	TArray<FKausPenetrationAvoidanceFeeler> PenetrationAvoidanceFeelers;

	UPROPERTY(Transient)
	float AimLineToDesiredPosBlockedPct;

	UPROPERTY(Transient)
	TArray<TObjectPtr<const AActor>> DebugActorsHitDuringCameraPenetration;

#if ENABLE_DRAW_DEBUG
	mutable float LastDrawDebugTime = -MAX_FLT;
#endif

private:
    // --- [Runtime State] ---
    FVector TargetPivotOffset;
    FVector CurrentPivotOffset;

    float TargetYaw;
    float CurrentYaw;

    float TargetArmLength;
    float CurrentArmLength;

    float TargetPitch;
    float CurrentPitch;
};