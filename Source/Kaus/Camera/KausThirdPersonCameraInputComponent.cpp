#include "Camera/KausThirdPersonCameraInputComponent.h"
#include "Camera/KausCameraComponent.h"
#include "Camera/KausCameraMode_ThirdPerson.h"
#include "Input/KausInputComponent.h"
#include "GameFramework/Pawn.h"
#include "GameFramework/PlayerController.h"
#include "Character/KausPlayerUnitComponent.h"
#include "Tags/KausGameplayTags.h"

UKausThirdPersonCameraInputComponent::UKausThirdPersonCameraInputComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
    bWantsInitializeComponent = true;
}

void UKausThirdPersonCameraInputComponent::InitializeComponent()
{
    Super::InitializeComponent();
}

void UKausThirdPersonCameraInputComponent::SetupInputBindings(UKausInputComponent* KausIC)
{
    if (!KausIC) return;

    KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_ThirdPerson_Look, ETriggerEvent::Triggered, this, &UKausThirdPersonCameraInputComponent::Input_Look, false);
}

UKausCameraMode_ThirdPerson* UKausThirdPersonCameraInputComponent::GetTargetCameraMode() const
{
    if (AActor* Owner = GetOwner())
    {
        if (UKausCameraComponent* CamComp = UKausCameraComponent::FindCameraComponent(Owner))
        {
            return CamComp->GetCameraModeInstance<UKausCameraMode_ThirdPerson>();
        }
    }
    return nullptr;
}

// --- Handlers ---
void UKausThirdPersonCameraInputComponent::Input_Look(const FInputActionValue& Value)
{
   FVector2D LookInput = Value.Get<FVector2D>();

    if (LookInput.SizeSquared() > 0.0f)
    {
        if (UKausCameraMode_ThirdPerson* Mode = GetTargetCameraMode())
        {
            Mode->AddLookInput(LookInput);
        }
    }
}
