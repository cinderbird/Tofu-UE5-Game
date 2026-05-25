#include "Camera/KausCameraMode_ZZZ.h"
#include "GameFramework/Pawn.h"
#include "Kismet/KismetMathLibrary.h"
#include "Components/PrimitiveComponent.h"
#include "Camera/KausPenetrationAvoidanceFeeler.h"
#include "Curves/CurveVector.h"
#include "Engine/Canvas.h"
#include "GameFramework/CameraBlockingVolume.h"
#include "KausCameraAssistInterface.h"
#include "GameFramework/Controller.h"
#include "GameFramework/Character.h"
#include "Math/RotationMatrix.h"

UKausCameraMode_ZZZ::UKausCameraMode_ZZZ()
{
    TargetArmLength = DefaultArmLength;
    CurrentArmLength = DefaultArmLength;
    TargetYaw = 0.0f;
    CurrentYaw = 0.0f;

    TargetPitch = -45.0f;
    CurrentPitch = -45.0f;

    PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+00.0f, +00.0f, 0.0f), 1.00f, 1.00f, 14.f, 0));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+00.0f, +16.0f, 0.0f), 0.75f, 0.75f, 00.f, 3));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+00.0f, -16.0f, 0.0f), 0.75f, 0.75f, 00.f, 3));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+00.0f, +32.0f, 0.0f), 0.50f, 0.50f, 00.f, 5));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+00.0f, -32.0f, 0.0f), 0.50f, 0.50f, 00.f, 5));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(+20.0f, +00.0f, 0.0f), 1.00f, 1.00f, 00.f, 4));
	PenetrationAvoidanceFeelers.Add(FKausPenetrationAvoidanceFeeler(FRotator(-20.0f, +00.0f, 0.0f), 0.50f, 0.50f, 00.f, 4));
}

void UKausCameraMode_ZZZ::OnActivation()
{
    Super::OnActivation();
    
    if (AActor* TargetActor = GetTargetActor())
    {
        // Initialize camera yaw to face away from the character's back (i.e. behind the character).
        // Character rotation flags are owned by AKausCharacter and intentionally not touched here.
        CurrentYaw = TargetActor->GetActorRotation().Yaw;
        TargetYaw = CurrentYaw;
    }
}

void UKausCameraMode_ZZZ::OnDeactivation()
{
    Super::OnDeactivation();

    //if (AActor* TargetActor = GetTargetActor())
    //{
    //    if (APawn* TargetPawn = Cast<APawn>(TargetActor))
    //    {
    //        TargetPawn->bUseControllerRotationYaw = true;
    //    }
    //}
}

void UKausCameraMode_ZZZ::UpdateForTarget(float DeltaTime)
{
    if (const ACharacter* TargetCharacter = Cast<ACharacter>(GetTargetActor()))
	{
		if (TargetCharacter->bIsCrouched)
		{
			const ACharacter* TargetCharacterCDO = TargetCharacter->GetClass()->GetDefaultObject<ACharacter>();
			const float CrouchedHeightAdjustment = TargetCharacterCDO->CrouchedEyeHeight - TargetCharacterCDO->BaseEyeHeight;

			SetTargetCrouchOffset(FVector(0.f, 0.f, CrouchedHeightAdjustment));

			return;
		}
	}

	SetTargetCrouchOffset(FVector::ZeroVector);
}

void UKausCameraMode_ZZZ::UpdatePreventPenetration(float DeltaTime)
{
    if (!bPreventPenetration)
	{
		return;
	}

	AActor* TargetActor = GetTargetActor();

	APawn* TargetPawn = Cast<APawn>(TargetActor);
	AController* TargetController = TargetPawn ? TargetPawn->GetController() : nullptr;
	IKausCameraAssistInterface* TargetControllerAssist = Cast<IKausCameraAssistInterface>(TargetController);

	IKausCameraAssistInterface* TargetActorAssist = Cast<IKausCameraAssistInterface>(TargetActor);

	TOptional<AActor*> OptionalPPTarget = TargetActorAssist ? TargetActorAssist->GetCameraPreventPenetrationTarget() : TOptional<AActor*>();
	AActor* PPActor = OptionalPPTarget.IsSet() ? OptionalPPTarget.GetValue() : TargetActor;
	IKausCameraAssistInterface* PPActorAssist = OptionalPPTarget.IsSet() ? Cast<IKausCameraAssistInterface>(PPActor) : nullptr;

	const UPrimitiveComponent* PPActorRootComponent = Cast<UPrimitiveComponent>(PPActor->GetRootComponent());
	if (PPActorRootComponent)
	{
		// Attempt at picking SafeLocation automatically, so we reduce camera translation when aiming.
		// Our camera is our reticle, so we want to preserve our aim and keep that as steady and smooth as possible.
		// Pick closest point on capsule to our aim line.
		FVector ClosestPointOnLineToCapsuleCenter;
		FVector SafeLocation = PPActor->GetActorLocation();
		FMath::PointDistToLine(SafeLocation, View.Rotation.Vector(), View.Location, ClosestPointOnLineToCapsuleCenter);

		// Adjust Safe distance height to be same as aim line, but within capsule.
		float const PushInDistance = PenetrationAvoidanceFeelers[0].Extent + CollisionPushOutDistance;
		float const MaxHalfHeight = PPActor->GetSimpleCollisionHalfHeight() - PushInDistance;
		SafeLocation.Z = FMath::Clamp(ClosestPointOnLineToCapsuleCenter.Z, SafeLocation.Z - MaxHalfHeight, SafeLocation.Z + MaxHalfHeight);

		float DistanceSqr;
		PPActorRootComponent->GetSquaredDistanceToCollision(ClosestPointOnLineToCapsuleCenter, DistanceSqr, SafeLocation);
		// Push back inside capsule to avoid initial penetration when doing line checks.
		if (PenetrationAvoidanceFeelers.Num() > 0)
		{
			SafeLocation += (SafeLocation - ClosestPointOnLineToCapsuleCenter).GetSafeNormal() * PushInDistance;
		}

		// Then aim line to desired camera position
		bool const bSingleRayPenetrationCheck = !bDoPredictiveAvoidance;
		PreventCameraPenetration(*PPActor, SafeLocation, View.Location, DeltaTime, AimLineToDesiredPosBlockedPct, bSingleRayPenetrationCheck);

		IKausCameraAssistInterface* AssistArray[] = { TargetControllerAssist, TargetActorAssist, PPActorAssist };

		if (AimLineToDesiredPosBlockedPct < ReportPenetrationPercent)
		{
			for (IKausCameraAssistInterface* Assist : AssistArray)
			{
				if (Assist)
				{
					// camera is too close, tell the assists
					Assist->OnCameraPenetratingTarget();
				}
			}
		}
	}
}


void UKausCameraMode_ZZZ::UpdateCrouchOffset(float DeltaTime)
{
    if (CrouchOffsetBlendPct < 1.0f)
	{
		CrouchOffsetBlendPct = FMath::Min(CrouchOffsetBlendPct + DeltaTime * CrouchOffsetBlendMultiplier, 1.0f);
		CurrentCrouchOffset = FMath::InterpEaseInOut(InitialCrouchOffset, TargetCrouchOffset, CrouchOffsetBlendPct, 1.0f);
	}
	else
	{
		CurrentCrouchOffset = TargetCrouchOffset;
		CrouchOffsetBlendPct = 1.0f;
	}
}

void UKausCameraMode_ZZZ::SetTargetCrouchOffset(FVector NewTargetOffset)
{
    CrouchOffsetBlendPct = 0.0f;
	InitialCrouchOffset = CurrentCrouchOffset;
	TargetCrouchOffset = NewTargetOffset;
}

void UKausCameraMode_ZZZ::PreventCameraPenetration(class AActor const& ViewTarget, FVector const& SafeLoc, FVector& CameraLoc, float const& DeltaTime, float& DistBlockedPct, bool bSingleRayOnly)
{
#if ENABLE_DRAW_DEBUG
	DebugActorsHitDuringCameraPenetration.Reset();
#endif

	float HardBlockedPct = DistBlockedPct;
	float SoftBlockedPct = DistBlockedPct;

	FVector BaseRay = CameraLoc - SafeLoc;
	FRotationMatrix BaseRayMatrix(BaseRay.Rotation());
	FVector BaseRayLocalUp, BaseRayLocalFwd, BaseRayLocalRight;

	BaseRayMatrix.GetScaledAxes(BaseRayLocalFwd, BaseRayLocalRight, BaseRayLocalUp);

	float DistBlockedPctThisFrame = 1.f;

	int32 const NumRaysToShoot = bSingleRayOnly ? FMath::Min(1, PenetrationAvoidanceFeelers.Num()) : PenetrationAvoidanceFeelers.Num();
	FCollisionQueryParams SphereParams(SCENE_QUERY_STAT(CameraPen), false, nullptr/*PlayerCamera*/);

	SphereParams.AddIgnoredActor(&ViewTarget);

	//TODO IKausCameraTarget.GetIgnoredActorsForCameraPentration();
	//if (IgnoreActorForCameraPenetration)
	//{
	//	SphereParams.AddIgnoredActor(IgnoreActorForCameraPenetration);
	//}

	FCollisionShape SphereShape = FCollisionShape::MakeSphere(0.f);
	UWorld* World = GetWorld();

	for (int32 RayIdx = 0; RayIdx < NumRaysToShoot; ++RayIdx)
	{
		FKausPenetrationAvoidanceFeeler& Feeler = PenetrationAvoidanceFeelers[RayIdx];
		if (Feeler.FramesUntilNextTrace <= 0)
		{
			// calc ray target
			FVector RayTarget;
			{
				FVector RotatedRay = BaseRay.RotateAngleAxis(Feeler.AdjustmentRot.Yaw, BaseRayLocalUp);
				RotatedRay = RotatedRay.RotateAngleAxis(Feeler.AdjustmentRot.Pitch, BaseRayLocalRight);
				RayTarget = SafeLoc + RotatedRay;
			}

			// cast for world and pawn hits separately.  this is so we can safely ignore the 
			// camera's target pawn
			SphereShape.Sphere.Radius = Feeler.Extent;
			ECollisionChannel TraceChannel = ECC_Camera;		//(Feeler.PawnWeight > 0.f) ? ECC_Pawn : ECC_Camera;

			// do multi-line check to make sure the hits we throw out aren't
			// masking real hits behind (these are important rays).

			// MT-> passing camera as actor so that camerablockingvolumes know when it's the camera doing traces
			FHitResult Hit;
			const bool bHit = World->SweepSingleByChannel(Hit, SafeLoc, RayTarget, FQuat::Identity, TraceChannel, SphereShape, SphereParams);
#if ENABLE_DRAW_DEBUG
			if (World->TimeSince(LastDrawDebugTime) < 1.f)
			{
				DrawDebugSphere(World, SafeLoc, SphereShape.Sphere.Radius, 8, FColor::Red);
				DrawDebugSphere(World, bHit ? Hit.Location : RayTarget, SphereShape.Sphere.Radius, 8, FColor::Red);
				DrawDebugLine(World, SafeLoc, bHit ? Hit.Location : RayTarget, FColor::Red);
			}
#endif // ENABLE_DRAW_DEBUG

			Feeler.FramesUntilNextTrace = Feeler.TraceInterval;

			const AActor* HitActor = Hit.GetActor();

			if (bHit && HitActor)
			{
				bool bIgnoreHit = false;

				if (HitActor->ActorHasTag(KausCameraMode_Statics::NAME_IgnoreCameraCollision))
				{
					bIgnoreHit = true;
					SphereParams.AddIgnoredActor(HitActor);
				}

				// Ignore CameraBlockingVolume hits that occur in front of the ViewTarget.
				if (!bIgnoreHit && HitActor->IsA<ACameraBlockingVolume>())
				{
					const FVector ViewTargetForwardXY = ViewTarget.GetActorForwardVector().GetSafeNormal2D();
					const FVector ViewTargetLocation = ViewTarget.GetActorLocation();
					const FVector HitOffset = Hit.Location - ViewTargetLocation;
					const FVector HitDirectionXY = HitOffset.GetSafeNormal2D();
					const float DotHitDirection = FVector::DotProduct(ViewTargetForwardXY, HitDirectionXY);
					if (DotHitDirection > 0.0f)
					{
						bIgnoreHit = true;
						// Ignore this CameraBlockingVolume on the remaining sweeps.
						SphereParams.AddIgnoredActor(HitActor);
					}
					else
					{
#if ENABLE_DRAW_DEBUG
						DebugActorsHitDuringCameraPenetration.AddUnique(TObjectPtr<const AActor>(HitActor));
#endif
					}
				}
				
				if (!bIgnoreHit)
				{
					float const Weight = Cast<APawn>(Hit.GetActor()) ? Feeler.PawnWeight : Feeler.WorldWeight;
					float NewBlockPct = Hit.Time;
					NewBlockPct += (1.f - NewBlockPct) * (1.f - Weight);

					// Recompute blocked pct taking into account pushout distance.
					NewBlockPct = ((Hit.Location - SafeLoc).Size() - CollisionPushOutDistance) / (RayTarget - SafeLoc).Size();
					DistBlockedPctThisFrame = FMath::Min(NewBlockPct, DistBlockedPctThisFrame);

					// This feeler got a hit, so do another trace next frame
					Feeler.FramesUntilNextTrace = 0;

#if ENABLE_DRAW_DEBUG
					DebugActorsHitDuringCameraPenetration.AddUnique(TObjectPtr<const AActor>(HitActor));
#endif
				}
			}

			if (RayIdx == 0)
			{
				// don't interpolate toward this one, snap to it
				// assumes ray 0 is the center/main ray 
				HardBlockedPct = DistBlockedPctThisFrame;
			}
			else
			{
				SoftBlockedPct = DistBlockedPctThisFrame;
			}
		}
		else
		{
			--Feeler.FramesUntilNextTrace;
		}
	}

	if (bResetInterpolation)
	{
		DistBlockedPct = DistBlockedPctThisFrame;
	}
	else if (DistBlockedPct < DistBlockedPctThisFrame)
	{
		// interpolate smoothly out
		if (PenetrationBlendOutTime > DeltaTime)
		{
			DistBlockedPct = DistBlockedPct + DeltaTime / PenetrationBlendOutTime * (DistBlockedPctThisFrame - DistBlockedPct);
		}
		else
		{
			DistBlockedPct = DistBlockedPctThisFrame;
		}
	}
	else
	{
		if (DistBlockedPct > HardBlockedPct)
		{
			DistBlockedPct = HardBlockedPct;
		}
		else if (DistBlockedPct > SoftBlockedPct)
		{
			// interpolate smoothly in
			if (PenetrationBlendInTime > DeltaTime)
			{
				DistBlockedPct = DistBlockedPct - DeltaTime / PenetrationBlendInTime * (DistBlockedPct - SoftBlockedPct);
			}
			else
			{
				DistBlockedPct = SoftBlockedPct;
			}
		}
	}

	DistBlockedPct = FMath::Clamp<float>(DistBlockedPct, 0.f, 1.f);
	if (DistBlockedPct < (1.f - ZERO_ANIMWEIGHT_THRESH))
	{
		CameraLoc = SafeLoc + (CameraLoc - SafeLoc) * DistBlockedPct;
	}
}

void UKausCameraMode_ZZZ::DrawDebug(UCanvas* Canvas) const
{
    Super::DrawDebug(Canvas);

#if ENABLE_DRAW_DEBUG
	FDisplayDebugManager& DisplayDebugManager = Canvas->DisplayDebugManager;
	for (int i = 0; i < DebugActorsHitDuringCameraPenetration.Num(); i++)
	{
		DisplayDebugManager.DrawString(
			FString::Printf(TEXT("HitActorDuringPenetration[%d]: %s")
				, i
				, *DebugActorsHitDuringCameraPenetration[i]->GetName()));
	}

	LastDrawDebugTime = GetWorld()->GetTimeSeconds();
#endif
}

void UKausCameraMode_ZZZ::UpdateView(float DeltaTime)
{
    AActor* TargetActor = GetTargetActor();
    if (!TargetActor) return;

    // 1. 타겟의 상태(앉기 등)를 업데이트하여 오프셋을 계산합니다.
    UpdateForTarget(DeltaTime);
    UpdateCrouchOffset(DeltaTime);

    // 2. 캐릭터의 월드 위치에 웅크리기(Crouch) 오프셋을 더해 최종 피벗을 잡습니다.
    FVector PivotLocation = TargetActor->GetActorLocation() + CurrentCrouchOffset;
    
    // --- [ZZZ 회전 및 이동 보간] ---
    FRotator CurrentRot(0.0f, CurrentYaw, 0.0f);
    FRotator TargetRot(0.0f, TargetYaw, 0.0f);
    FRotator NewRot = FMath::RInterpTo(CurrentRot, TargetRot, DeltaTime, RotationInterpSpeed);
    CurrentYaw = NewRot.Yaw;

    CurrentPitch = FMath::FInterpTo(CurrentPitch, TargetPitch, DeltaTime, RotationInterpSpeed);

    FRotator YawOnlyRotation(0.0f, CurrentYaw, 0.0f);

    CurrentArmLength = FMath::FInterpTo(CurrentArmLength, TargetArmLength, DeltaTime, 10.0f);
    CurrentPivotOffset = FMath::VInterpTo(CurrentPivotOffset, TargetPivotOffset, DeltaTime, 10.0f);

    // 카메라의 최종 회전값 (Pitch 적용)
    FRotator PivotRotation = YawOnlyRotation;
    PivotRotation.Pitch = CurrentPitch; 

    // 화면 우/하단(Z, Y) 오프셋을 회전시킵니다.
    FVector RotatedOffset = PivotRotation.RotateVector(CurrentPivotOffset);
    
    // --- [View 구조체 초기 설정] ---
    View.Location = PivotLocation + RotatedOffset;
    View.Rotation = PivotRotation;
    
    // 목표 거리(ArmLength)만큼 카메라를 뒤로 뺍니다.
    View.Location -= View.Rotation.Vector() * CurrentArmLength;
    View.FieldOfView = 90.0f; 
    View.ControlRotation = View.Rotation;

    // 3. [핵심] 가장 마지막 단계에서 카메라 충돌 및 회피 처리를 수행합니다.
    // UpdatePreventPenetration 내부에서 View.Location 값을 장애물에 맞게 앞으로 당겨줍니다.
    UpdatePreventPenetration(DeltaTime);
}

//Move
void UKausCameraMode_ZZZ::AddMoveInput(FVector2D MoveInput)
{
    FVector MoveDelta = FVector(0.0f, MoveInput.X, MoveInput.Y) * MoveSpeed;
    TargetPivotOffset += MoveDelta;

    // Clamp movement within bounds
    TargetPivotOffset.Y = FMath::Clamp(TargetPivotOffset.Y, MovementBoundsX.X, MovementBoundsX.Y);
    TargetPivotOffset.Z = FMath::Clamp(TargetPivotOffset.Z, MovementBoundsY.X, MovementBoundsY.Y);
}

//Zoom
void UKausCameraMode_ZZZ::AddZoomInput(float ZoomAmount)
{
    TargetArmLength -= ZoomAmount * ZoomSpeed;
    TargetArmLength = FMath::Clamp(TargetArmLength, MinArmLength, MaxArmLength);
}

//Rotation
void UKausCameraMode_ZZZ::AddRotationStep(float Direction)
{
    float Unit = RotationStepAngle;
    
    float SnappedAngle = FMath::RoundToFloat(TargetYaw / Unit) * Unit;

    TargetYaw = SnappedAngle + (Direction * Unit);

    TargetYaw = FRotator::ClampAxis(TargetYaw);
}

void UKausCameraMode_ZZZ::AddLookInput(FVector2D LookInput)
{
    //Mouse X-axis movement -> Yaw rotation
    TargetYaw += LookInput.X * LookSpeedX;
    TargetYaw = FRotator::ClampAxis(TargetYaw); // 0~360 정규화

    //Mouse Y-axis movement -> Pitch rotation
    TargetPitch += LookInput.Y * LookSpeedY;
    
    TargetPitch = FMath::Clamp(TargetPitch, MinPitch, MaxPitch);
}

//Reset
void UKausCameraMode_ZZZ::ResetCamera()
{
    TargetPivotOffset = FVector::ZeroVector;
    TargetYaw = 0.0f;
    TargetArmLength = DefaultArmLength;

    TargetYaw = CurrentYaw; 
    TargetPitch = -45.0f;
}
