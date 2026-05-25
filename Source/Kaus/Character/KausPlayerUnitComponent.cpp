#include "KausPlayerUnitComponent.h"
#include "Player/KausLocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "Input/KausInputComponent.h"
#include "Tags/KausGameplayTags.h"
#include "Camera/KausCameraMode.h"
#include "Camera/KausZZZCameraInputComponent.h"
#include "Camera/KausThirdPersonCameraInputComponent.h"
#include "KausUnitExtensionComponent.h" 
#include "AbilitySystemComponent.h"

namespace KausPlayerUnit
{
	static const float LookYawRate = 300.0f;
	static const float LookPitchRate = 165.0f;
};

UKausPlayerUnitComponent::UKausPlayerUnitComponent(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UKausPlayerUnitComponent::SetCameraState(EKausCameraState NewState)
{
    CurrentCameraState = NewState;
}

void UKausPlayerUnitComponent::ToggleCameraState()
{
    if (CurrentCameraState == EKausCameraState::ThirdPerson_Mode)
    {
        CurrentCameraState = EKausCameraState::ZZZ_Mode;
    }
    else
    {
        CurrentCameraState = EKausCameraState::ThirdPerson_Mode;
    }
}

void UKausPlayerUnitComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
	check(PlayerInputComponent);
	check(DefaultMappingContext);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	const APlayerController* PC = GetController<APlayerController>();
	check(PC);

	const UKausLocalPlayer* LP = Cast<UKausLocalPlayer>(PC->GetLocalPlayer());
	check(LP);

	UEnhancedInputLocalPlayerSubsystem* Subsystem = LP->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>();
	check(Subsystem);

	Subsystem->ClearAllMappings();
	Subsystem->AddMappingContext(DefaultMappingContext, 0);

	UKausInputComponent* KausIC = Cast<UKausInputComponent>(PlayerInputComponent);
	if (ensureMsgf(KausIC, TEXT("Unexpected Input Component class! The Gameplay Abilities will not be bound to their inputs. Change the input component to UKausInputComponent or a subclass of it.")))
	{
		TArray<uint32> BindHandles;
		//Defalut Input config bindings
		KausIC->BindAbilityActions(InputConfig, this, &ThisClass::Input_AbilityInputTagPressed, &ThisClass::Input_AbilityInputTagReleased, /*out*/ BindHandles);

		KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_Switch_TPAndZZZ, ETriggerEvent::Triggered, this, &UKausPlayerUnitComponent::Input_CameraSwitch_ZZZAndThirdPerson, false);
		KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Move, ETriggerEvent::Triggered, this, &UKausPlayerUnitComponent::Input_Move, false);
		KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_UI_Interaction_MultipleTarget_Wheel, ETriggerEvent::Triggered, this, &UKausPlayerUnitComponent::Input_CycleInteraction, false);

		if (UKausZZZCameraInputComponent* ZZZInputComp = GetOwner()->FindComponentByClass<UKausZZZCameraInputComponent>())
		{
    		ZZZInputComp->SetupInputBindings(KausIC);
		}

		if (UKausThirdPersonCameraInputComponent* TPInputComp = GetOwner()->FindComponentByClass<UKausThirdPersonCameraInputComponent>())
		{
			TPInputComp->SetupInputBindings(KausIC);
		}
	}

	ReadyToBindInputs();
}

TSubclassOf<UKausCameraMode> UKausPlayerUnitComponent::DetermineCameraMode() const
{
	switch (CurrentCameraState)
	{
		case EKausCameraState::ZZZ_Mode:
		{
			if (ZZZCameraModeClass.Get() != nullptr)
			{
				return ZZZCameraModeClass;
			}
		}
		case EKausCameraState::ThirdPerson_Mode:
		{
			if(ThirdPersonCameraModeClass.Get() != nullptr)
			{
				return ThirdPersonCameraModeClass;
			}
		}
		case EKausCameraState::None:
		default:
		{
			return nullptr;
		}

	}
}

void UKausPlayerUnitComponent::Input_CameraSwitch_ZZZAndThirdPerson()
{
	ToggleCameraState();
}

void UKausPlayerUnitComponent::Input_Move(const FInputActionValue& Value)
{
	APawn* Pawn = GetPawn<APawn>();
	if (!Pawn) return;

	const FVector2D MoveValue = Value.Get<FVector2D>();
	if (MoveValue.IsNearlyZero()) return;

	// The active camera mode writes its yaw into ControlRotation each frame (View.ControlRotation = View.Rotation).
	// So GetControlRotation().Yaw is the current camera yaw.
	const float CameraYaw = Pawn->GetControlRotation().Yaw;

	// Input direction angle (degrees), measured clockwise from camera-forward:
	//   W (0, +1) ->    0   (forward)
	//   D (+1, 0) ->  +90   (right)
	//   S (0, -1) -> +-180  (back)
	//   A (-1, 0) ->  -90   (left)
	// Diagonals fall out of atan2 automatically.
	const float InputAngle = FMath::RadiansToDegrees(FMath::Atan2(MoveValue.X, MoveValue.Y));

	// World-space target yaw and movement direction.
	const FRotator TargetYawRot(0.0f, CameraYaw + InputAngle, 0.0f);
	const FVector  MoveDir = TargetYawRot.Vector();

	// CMC has bOrientRotationToMovement = true, so the character rotates toward Velocity
	// at RotationRate (720 deg/s). Pressing a key instantly redefines the target yaw,
	// producing the ZZZ feel: rotate-and-move simultaneously.
	Pawn->AddMovementInput(MoveDir, 1.0f);
}
UE_DISABLE_OPTIMIZATION
void UKausPlayerUnitComponent::Input_CycleInteraction(const FInputActionValue& Value)
{
    const float AxisValue = Value.Get<float>();
    
    // 유효한 입력(상/하)이 아닐 경우 무시
    if (FMath::IsNearlyZero(AxisValue)) return;

    APawn* Pawn = GetPawn<APawn>();
    if (!Pawn) return;

    UKausUnitExtensionComponent* ExtComp = UKausUnitExtensionComponent::FindPawnExtensionComponent(Pawn);
    if (ExtComp && ExtComp->GetAbilitySystemComponent())
    {
        FGameplayEventData Payload;
        Payload.Instigator = Pawn;
        
        // 입력 값에 따라 발송할 Gameplay Event 태그 동적 결정
        FGameplayTag EventTag = AxisValue > 0.0f 
            ? KausGameplayTags::UI_Event_Interaction_CycleNext 
            : KausGameplayTags::UI_Event_Interaction_CyclePrev;

        // 플레이어의 ASC로 이벤트를 방송
        ExtComp->GetAbilitySystemComponent()->HandleGameplayEvent(EventTag, &Payload);
    }
}
UE_ENABLE_OPTIMIZATION
