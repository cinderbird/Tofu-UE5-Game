#include "Pawn/KausObserverUnitComponent.h"
#include "Player/KausLocalPlayer.h"
#include "EnhancedInputSubsystems.h"
#include "Input/KausInputComponent.h"
#include "Tags/KausGameplayTags.h"
#include "Camera/KausCameraMode.h"

#include "Interaction/InteractionStatics.h"
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionQuery.h"
#include "Interaction/InteractionOption.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "Blueprint/AIBlueprintHelperLibrary.h"

#include "Character/KausCharacter.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Ability_Command_Interact, "Ability.Command.Interact");

class KausObserverHelper
{
public:
    static int32 NormalizeAngle360(int32 Angle)
    {
        Angle = Angle % 360;
        if (Angle < 0)
        {
            Angle += 360;
        }
        return Angle;
    }

    static float NormalizeAngle360(float Angle)
    {
        Angle = FMath::Fmod(Angle, 360.0f);
        if (Angle < 0.0f)
        {
            Angle += 360.0f;
        }
        return Angle;
    }
};

UKausObserverUnitComponent::UKausObserverUnitComponent(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = true;

    bEnableEdgeScrolling = true;
    bEnableDollyZoom = true;
    bEnableTerrainFollowing = true;
}

void UKausObserverUnitComponent::SetDollyZoomEnabled(bool bEnable)
{
    bEnableDollyZoom = bEnable;
}

void UKausObserverUnitComponent::SetEdgeScrollingEnabled(bool bEnable)
{
    bEnableEdgeScrolling = bEnable;
}

void UKausObserverUnitComponent::SetTerrainFollowingEnabled(bool bEnable)
{
     bEnableTerrainFollowing = bEnable;
}

void UKausObserverUnitComponent::InitializePlayerInput(UInputComponent* PlayerInputComponent)
{
   	check(PlayerInputComponent);
	check(DefaultMappingContext);

	const APawn* Pawn = GetPawn<APawn>();
	if (!Pawn)
	{
		return;
	}

	APlayerController* PC = GetController<APlayerController>();
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

		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_CameraMove, ETriggerEvent::Triggered, this, &ThisClass::Input_CameraMove, /*bLogIfNotFound=*/ false);
		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_CameraLook_Mouse, ETriggerEvent::Triggered, this, &ThisClass::Input_CameraLookMouse, /*bLogIfNotFound=*/ false);
		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_CameraLook_Stick, ETriggerEvent::Triggered, this, &ThisClass::Input_CameraLookStick, /*bLogIfNotFound=*/ false);
		//
		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_CameraSnap_Left, ETriggerEvent::Started, this, &ThisClass::Input_CameraRotateLeft, /*bLogIfNotFound=*/ false);
		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_CameraSnap_Right, ETriggerEvent::Started, this, &ThisClass::Input_CameraRotateRight, /*bLogIfNotFound=*/ false);
		//KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Camera_RangeZoom, ETriggerEvent::Triggered, this, &ThisClass::Input_CameraRangeZoom, /*bLogIfNotFound=*/ false);
        
        KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Orbit_Toggle, ETriggerEvent::Started, this, &ThisClass::Input_OrbitToggle, false);
        KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Orbit_Toggle, ETriggerEvent::Completed, this, &ThisClass::Input_OrbitToggle, false);
        KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_Orbit_Toggle, ETriggerEvent::Canceled, this, &ThisClass::Input_OrbitToggle, false);
        
        KausIC->BindNativeAction(InputConfig, KausGameplayTags::InputTag_MouseClick, ETriggerEvent::Started, this, &ThisClass::Input_MouseClick, /*bLogIfNotFound=*/ false);
    }

	ReadyToBindInputs();
}

TSubclassOf<UKausCameraMode> UKausObserverUnitComponent::DetermineCameraMode() const
{
    if (TSubclassOf<UKausCameraMode> ParentCameraMode = Super::DetermineCameraMode())
    {
        return ParentCameraMode;
    }

    //If you need camera mode for observer unit, return it here.
    return nullptr;
}

void UKausObserverUnitComponent::TickComponent(float DeltaTime, enum ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    UpdateEdgeScrolling(DeltaTime);

    UpdateTerrainFollowing(DeltaTime);
}

void UKausObserverUnitComponent::Input_MouseClick(const FInputActionValue& InputActionValue)
{
    APlayerController* PC = GetController<APlayerController>();
	if (!PC) return;

	FHitResult HitResult;

	//1. Character Selection
	bool bHitUnit = PC->GetHitResultUnderCursor(UnitTraceChannel, false, HitResult);
	if (bHitUnit && HitResult.GetActor())
	{
		if (AKausCharacter* ClickedCharacter = Cast<AKausCharacter>(HitResult.GetActor()))
		{
            //todo: check clicked character is ally or enemy
			SelectCharacter(ClickedCharacter);
			return;
		}
	}

    //No Clicked Character -> return
	if (!SelectedCharacter.IsValid())
	{
		return; 
	}

	//Interaction
	bool bHitObject = PC->GetHitResultUnderCursor(InteractionTraceChannel, false, HitResult);
	if (bHitObject && HitResult.GetActor())
    {
        TArray<TScriptInterface<IInteractableTarget>> InteractableTargets;
        UInteractionStatics::AppendInteractableTargetsFromHitResult(HitResult, InteractableTargets);

        if (InteractableTargets.Num() > 0)
        {
            FInteractionQuery Query;
            Query.RequestingAvatar = SelectedCharacter.Get();
            Query.RequestingController = SelectedCharacter->GetController();
            Query.OptionalObjectData = nullptr;

            TArray<FInteractionOption> Options;

            for (const TScriptInterface<IInteractableTarget>& Target : InteractableTargets)
            {
                FInteractionOptionBuilder Builder(Target, Options);
                Target->GatherInteractionOptions(Query, Builder);
            }

            if (Options.Num() > 0)
            {
                //todo: option selection logic (ex. UI)
                const FInteractionOption& BestOption = Options[0];

                SendCommand_Interact(SelectedCharacter.Get(), HitResult.GetActor(), BestOption);

                return; 
            }
        }
    }

	//Movement Command
    //todo: retrace with movement trace channel if needed
	if (bHitObject)
	{
		IssueMoveCommand(HitResult.Location);
	}
}

void UKausObserverUnitComponent::Input_CameraMove(const FInputActionValue& InputActionValue)
{
    FVector2D MovementVector = InputActionValue.Get<FVector2D>();
    ApplyCameraMovement(MovementVector);
}

void UKausObserverUnitComponent::Input_CameraLookMouse(const FInputActionValue& InputActionValue)
{
    if (!bIsOrbiting)
    {
        return;
    }

    float LookValue = InputActionValue.Get<FVector2D>().X;
    
    if (LookValue != 0.0f)
    {
        CameraRotateAngle += LookValue * MouseOrbitSensitivity;
        
        CameraRotateAngle = KausObserverHelper::NormalizeAngle360(CameraRotateAngle);
        
        bCameraSnapDirtyFlag = true;
    }
}

void UKausObserverUnitComponent::Input_CameraLookStick(const FInputActionValue& InputActionValue)
{
    APawn* Pawn = GetPawn<APawn>();
    if (!Pawn) return;

    const FVector2D LookAxisVector = InputActionValue.Get<FVector2D>();

    if (LookAxisVector.X != 0.0f)
    {
        Pawn->AddControllerYawInput(LookAxisVector.X);
    }

    if (LookAxisVector.Y != 0.0f)
    {
        Pawn->AddControllerPitchInput(LookAxisVector.Y);
    }
}

void UKausObserverUnitComponent::Input_CameraRotateLeft(const FInputActionValue& InputActionValue)
{
    float Current = CameraRotateAngle;
    float Unit = (float)CameraRotateAngleUnit;

    float SnappedAngle = FMath::RoundToFloat(Current / Unit) * Unit;

    CameraRotateAngle = KausObserverHelper::NormalizeAngle360(SnappedAngle + Unit);
    bCameraSnapDirtyFlag = true;
}

void UKausObserverUnitComponent::Input_CameraRotateRight(const FInputActionValue& InputActionValue)
{
    float Current = CameraRotateAngle;
    float Unit = (float)CameraRotateAngleUnit;

    float SnappedAngle = FMath::RoundToFloat(Current / Unit) * Unit;

    CameraRotateAngle = KausObserverHelper::NormalizeAngle360(SnappedAngle - Unit);
    bCameraSnapDirtyFlag = true;
}

void UKausObserverUnitComponent::Input_CameraRangeZoom(const FInputActionValue& InputActionValue)
{
    float ZoomDelta = InputActionValue.Get<float>(); 
    
    CameraRangeZoom -= ZoomDelta * CameraZoomUnit;

    CameraRangeZoom = FMath::Clamp(CameraRangeZoom, MinCameraRangeZoom, MaxCameraRangeZoom);
}

void UKausObserverUnitComponent::Input_OrbitToggle(const FInputActionValue& InputActionValue)
{
    bool bIsPressed = InputActionValue.Get<bool>();

    if (bIsOrbiting == bIsPressed)
    {
        return;
    }

    bIsOrbiting = bIsPressed;

    if (APlayerController* PC = GetController<APlayerController>())
    {
        PC->bShowMouseCursor = !bIsOrbiting;

        GEngine->AddOnScreenDebugMessage(-1, 2.f, bIsOrbiting ? FColor::Green : FColor::Red, 
            FString::Printf(TEXT("Orbit Mode: %s"), bIsOrbiting ? TEXT("ON") : TEXT("OFF")));
    }
}

void UKausObserverUnitComponent::UpdateEdgeScrolling(float DeltaTime)
{
    if (!bEnableEdgeScrolling || bIsOrbiting) 
    {
        return;
    }

    APawn* Pawn = GetPawn<APawn>();
    if (!Pawn) return;

    APlayerController* PC = GetController<APlayerController>();
    if (!PC) return;

    float MouseX, MouseY;
    if (!PC->GetMousePosition(MouseX, MouseY))
    {
        return;
    }

    int32 ViewportSizeX, ViewportSizeY;
    PC->GetViewportSize(ViewportSizeX, ViewportSizeY);

    FVector2D ScrollInput(0.0f, 0.0f);
    
    if (MouseX < EdgeScrollThreshold)
    {
        float Intensity = 1.0f - (MouseX / EdgeScrollThreshold);
        ScrollInput.X = -1.0f * Intensity;
    }
    else if (MouseX > (ViewportSizeX - EdgeScrollThreshold))
    {
        float Intensity = (MouseX - (ViewportSizeX - EdgeScrollThreshold)) / EdgeScrollThreshold;
        ScrollInput.X = 1.0f * Intensity;
    }

    if (MouseY < EdgeScrollThreshold)
    {
        float Intensity = 1.0f - (MouseY / EdgeScrollThreshold);
        ScrollInput.Y = 1.0f * Intensity; // Forward
    }
    else if (MouseY > (ViewportSizeY - EdgeScrollThreshold))
    {
        float Intensity = (MouseY - (ViewportSizeY - EdgeScrollThreshold)) / EdgeScrollThreshold;
        ScrollInput.Y = -1.0f * Intensity; // Backward
    }

    if (!ScrollInput.IsZero())
    {
        ScrollInput *= EdgeScrollSpeedScalar;

        ApplyCameraMovement(ScrollInput);
    }
}

void UKausObserverUnitComponent::UpdateTerrainFollowing(float DeltaTime)
{
    if (!bEnableTerrainFollowing) return;

    APawn* Pawn = GetPawn<APawn>();
    if (!Pawn) return;

    FVector CurrentLocation = Pawn->GetActorLocation();
    
    FVector TraceStart = FVector(CurrentLocation.X, CurrentLocation.Y, CurrentLocation.Z + TraceStartHeight);
    FVector TraceEnd = FVector(CurrentLocation.X, CurrentLocation.Y, CurrentLocation.Z - TraceStartHeight);

    FHitResult HitResult;
    FCollisionQueryParams QueryParams;
    QueryParams.AddIgnoredActor(Pawn); // ignore self

    bool bHit = GetWorld()->LineTraceSingleByChannel(
        HitResult,
        TraceStart,
        TraceEnd,
        TerrainTraceChannel,
        QueryParams
    );

    float TargetZ = DefaultGroundLevel + GroundOffset;

    if (bHit)
    {
        TargetZ = HitResult.Location.Z + GroundOffset;
    }
    else
    {
        TargetZ = CurrentLocation.Z; 
    }

    float NewZ = FMath::FInterpTo(CurrentLocation.Z, TargetZ, DeltaTime, HeightInterpSpeed);

    if (!FMath::IsNearlyEqual(NewZ, CurrentLocation.Z, 0.1f))
    {
        FVector NewLocation = FVector(CurrentLocation.X, CurrentLocation.Y, NewZ);
        Pawn->SetActorLocation(NewLocation);
    }
}

void UKausObserverUnitComponent::ApplyCameraMovement(const FVector2D& MovementInput)
{
    APawn* Pawn = GetPawn<APawn>();
    if (!Pawn) return;

    if (AController* Controller = Pawn->GetController())
    {
        const FRotator Rotation = Controller->GetControlRotation();
        const FRotator YawRotation(0, Rotation.Yaw, 0);

        const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);
        const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

        float ZoomFactor = 1.0f; 
        if (MaxCameraRangeZoom > MinCameraRangeZoom)
        {
             ZoomFactor = FMath::GetMappedRangeValueClamped(
                FVector2D(MinCameraRangeZoom, MaxCameraRangeZoom),
                FVector2D(0.2f, 1.5f),
                CameraRangeZoom
            );
        }

        Pawn->AddMovementInput(ForwardDirection, MovementInput.Y * ZoomFactor);
        Pawn->AddMovementInput(RightDirection, MovementInput.X * ZoomFactor);
    }
}

void UKausObserverUnitComponent::SelectCharacter(AKausCharacter* NewCharacter)
{
	if (SelectedCharacter.Get() == NewCharacter) return;

	if (SelectedCharacter.IsValid())
	{
        //todo: outline off
		// SelectedCharacter->SetHighlight(false);
	}

	SelectedCharacter = NewCharacter;

	if (SelectedCharacter.IsValid())
	{
		// SelectedCharacter->SetHighlight(true);
	}
}

void UKausObserverUnitComponent::IssueMoveCommand(const FVector& Destination)
{
	if (!SelectedCharacter.IsValid()) return;

	if (AController* AICon = SelectedCharacter->GetController())
	{
		UAIBlueprintHelperLibrary::SimpleMoveToLocation(AICon, Destination);
		
        //todo: SFX, VFX
	}
}

void UKausObserverUnitComponent::SendCommand_Interact(AKausCharacter* Character, AActor* Target, const FInteractionOption& Option)
{
	if (!Character || !Target) return;

	FGameplayEventData Payload;
	Payload.Instigator = Character;
	Payload.Target = Target;
	
	UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
		Character, 
		TAG_Ability_Command_Interact, 
		Payload
	);
}