#include "Camera/KausZZZCameraInputComponent.h"
#include "Camera/KausCameraComponent.h"
#include "Camera/KausCameraMode_ZZZ.h"
#include "Input/KausInputComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Character/KausPlayerUnitComponent.h"
#include "Tags/KausGameplayTags.h"

UKausZZZCameraInputComponent::UKausZZZCameraInputComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    bWantsInitializeComponent = true;
}

void UKausZZZCameraInputComponent::InitializeComponent()
{
    Super::InitializeComponent();
}

void UKausZZZCameraInputComponent::SetupInputBindings(UKausInputComponent* KausIC)
{
    if (!KausIC) return;

    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ZZZ_Move, ETriggerEvent::Triggered, this, &UKausZZZCameraInputComponent::Input_MoveXY, false);
    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ZZZ_Zoom, ETriggerEvent::Triggered, this, &UKausZZZCameraInputComponent::Input_Zoom, false);
    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ZZZ_RotateSnap, ETriggerEvent::Triggered, this, &UKausZZZCameraInputComponent::Input_RotateSnap, false);
    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ZZZ_Look, ETriggerEvent::Triggered, this, &UKausZZZCameraInputComponent::Input_Look, false);
    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ZZZ_Reset, ETriggerEvent::Started, this, &UKausZZZCameraInputComponent::Input_Reset, false);
}

UKausCameraMode_ZZZ* UKausZZZCameraInputComponent::GetTargetCameraMode() const
{
    if (AActor* Owner = GetOwner())
    {
        if (UKausCameraComponent* CamComp = UKausCameraComponent::FindCameraComponent(Owner))
        {
            return CamComp->GetCameraModeInstance<UKausCameraMode_ZZZ>();
        }
    }
    return nullptr;
}

// --- Handlers ---
void UKausZZZCameraInputComponent::Input_MoveXY(const FInputActionValue& Value)
{
    if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
    {
        Mode->AddMoveInput(Value.Get<FVector2D>());
    }
}

void UKausZZZCameraInputComponent::Input_Zoom(const FInputActionValue& Value)
{
    if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
    {
        Mode->AddZoomInput(Value.Get<float>());
    }
}

void UKausZZZCameraInputComponent::Input_Look(const FInputActionValue& Value)
{
    FVector2D LookInput = Value.Get<FVector2D>();

    if (LookInput.SizeSquared() > 0.0f)
    {
        if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
        {
            Mode->AddLookInput(LookInput);
        }
    }
}

void UKausZZZCameraInputComponent::Input_RotateSnap(const FInputActionValue& Value)
{
    float Direction = Value.Get<float>();
    
    if (Direction != 0.0f)
    {
        if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
        {
            Mode->AddRotationStep(Direction);
        }
    }
}

void UKausZZZCameraInputComponent::Input_Reset(const FInputActionValue& Value)
{
    if (UKausCameraMode_ZZZ* Mode = GetTargetCameraMode())
    {
        Mode->ResetCamera();
    }
}

void UKausZZZCameraInputComponent::Input_SwitchCamera(const FInputActionValue& Value)
{
    if (AActor* Owner = GetOwner())
    {
        if (UKausPlayerUnitComponent* PlayerUnitComp = UKausPlayerUnitComponent::FindPlayerUnitComponent(Owner))
        {
            PlayerUnitComp->ToggleCameraState();
        }
    }

    //이거는 InputComponent의 Controller인 KausPlayerUnitComponent가 담당하자.
}