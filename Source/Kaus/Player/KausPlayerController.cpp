#include "KausPlayerController.h"
#include <Input/KausInputComponent.h>
#include "Tags/KausGameplayTags.h"
#include "Input/KausInputConfig.h"
#include <UI/Subsystem/KausUIManagerSubsystem.h>
#include <AbilitySystemGlobals.h>
#include "AbilitySystem/KausAbilitySystemComponent.h"
#include "KausLocalPlayer.h"
#include "Setting/KausSettingsShared.h"
#include "Player/KausPlayerState.h"
#include "Character/KausCharacter.h"
#include "Character/KausUnitExtensionComponent.h"
#include "UI/KausHUD.h"
#include "Inventory/KausInventoryManagerComponent.h"
#include "GameEffects/NumberPopsEffects/KausNumberPopComponent.h"
#include "GameFramework/PlayerInput.h"
#include "UI/IndicatorSystem/KausIndicatorManagerComponent.h" 
#include "Equipment/KausQuickBarComponent.h"
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionOption.h"
#include "Interaction/InteractionQuery.h"
#include "Interaction/InteractionStatics.h"
#include "Node/KausNodeComponent.h"


AKausPlayerController::AKausPlayerController(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	//todo: logic
	InventoryComponent = CreateDefaultSubobject<UKausInventoryManagerComponent>(TEXT("InventoryComponent"));

	//todo: logic
	QuickBarComponent = CreateDefaultSubobject<UKausQuickBarComponent>(TEXT("QuickBarComponent"));

	IndicatorComponent = CreateDefaultSubobject<UKausIndicatorManagerComponent>(TEXT("IndicatorComponent"));
}

AKausPlayerState* AKausPlayerController::GetKausPlayerState() const
{
	return CastChecked<AKausPlayerState>(PlayerState, ECastCheckedType::NullAllowed);
}

UKausAbilitySystemComponent* AKausPlayerController::GetKausAbilitySystemComponent() const
{
	if (AKausCharacter* KausCharacter = GetPawn<AKausCharacter>())
	{
		if (UKausAbilitySystemComponent* KausASC = KausCharacter->GetKausAbilitySystemComponent())
		{
			return KausCharacter->GetKausAbilitySystemComponent();
		}
	}

	return nullptr;
}

AKausHUD* AKausPlayerController::GetKausHUD() const
{
	return CastChecked<AKausHUD>(GetHUD(), ECastCheckedType::NullAllowed);
}

void AKausPlayerController::PreInitializeComponents()
{
	Super::PreInitializeComponents();
}

void AKausPlayerController::BeginPlay()
{
	Super::BeginPlay();
	SetActorHiddenInGame(false);

	if (NumberPopComponentClass)
	{
		ActiveNumberPopComponent = NewObject<UKausNumberPopComponent>(this, NumberPopComponentClass);

		if (ActiveNumberPopComponent)
		{
			ActiveNumberPopComponent->RegisterComponent();
		}
	}

}

void AKausPlayerController::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
	Super::EndPlay(EndPlayReason);
}

void AKausPlayerController::OnPossess(APawn* InPawn)
{
	Super::OnPossess(InPawn);

	//todo: Cheat(God) Mod
}

void AKausPlayerController::OnUnPossess()
{
	if (APawn* PawnBeingUnpossessed = GetPawn())
	{
		if (UAbilitySystemComponent* ASC = UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(PlayerState))
		{
			if (ASC->GetAvatarActor() == PawnBeingUnpossessed)
			{
				ASC->SetAvatarActor(nullptr);
			}
		}
	}

	Super::OnUnPossess();
}

void AKausPlayerController::InitPlayerState()
{
	Super::InitPlayerState();
}

void AKausPlayerController::CleanupPlayerState()
{
	Super::CleanupPlayerState();
}

void AKausPlayerController::OnRep_PlayerState()
{
	Super::OnRep_PlayerState();
}

void AKausPlayerController::ReceivedPlayer()
{
	Super::ReceivedPlayer();
}

void AKausPlayerController::PlayerTick(float DeltaTime)
{
	Super::PlayerTick(DeltaTime);
}

void AKausPlayerController::SetPlayer(UPlayer* InPlayer)
{
	Super::SetPlayer(InPlayer);

	if (const UKausLocalPlayer* KausLocalPlayer = Cast<UKausLocalPlayer>(InPlayer))
	{
		UKausSettingsShared* UserSettings = KausLocalPlayer->GetSharedSettings();
		UserSettings->OnSettingChanged.AddUObject(this, &ThisClass::OnSettingsChanged);

		OnSettingsChanged(UserSettings);
	}
}

void AKausPlayerController::AddCheats(bool bForce)
{
	Super::AddCheats(bForce);
}

void AKausPlayerController::UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents)
{
	Super::UpdateHiddenComponents(ViewLocation, OutHiddenComponents);
	//todo: check lyra code and if you need, make it
}

void AKausPlayerController::PreProcessInput(const float DeltaTime, const bool bGamePaused)
{
	Super::PreProcessInput(DeltaTime, bGamePaused);
}

void AKausPlayerController::PostProcessInput(const float DeltaTime, const bool bGamePaused)
{
	if (AKausCharacter* KausCharacter = GetPawn<AKausCharacter>())
	{
		if (UKausAbilitySystemComponent* KausASC = KausCharacter->GetKausAbilitySystemComponent())
		{
			KausASC->ProcessAbilityInput(DeltaTime, bGamePaused);
		}
	}


	Super::PostProcessInput(DeltaTime, bGamePaused);
}

void AKausPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();
}

void AKausPlayerController::OnSettingsChanged(UKausSettingsShared* InSettings)
{
	//todo
	//bForceFeedbackEnabled = InSettings->GetForceFeedbackEnabled();
	bForceFeedbackEnabled = false;
}

// ============================================================================
// Hover Interaction
// ============================================================================

void AKausPlayerController::UpdateHoveredInteractableByChannel(ECollisionChannel TraceChannel, bool bTraceComplex)
{
    FHitResult HitResult;
    const bool bHit = GetHitResultUnderCursor(TraceChannel, bTraceComplex, HitResult);
    ProcessHoverHitResult(HitResult, bHit);
}

void AKausPlayerController::UpdateHoveredInteractableByObjectTypes(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex)
{
    FHitResult HitResult;
    const bool bHit = GetHitResultUnderCursorForObjects(ObjectTypes, bTraceComplex, HitResult);
    ProcessHoverHitResult(HitResult, bHit);
}

void AKausPlayerController::ProcessHoverHitResult(const FHitResult& HitResult, bool bHit)
{
    UKausNodeComponent* NewHovered = nullptr;

    // 트레이스가 맞은 경우에만 InteractableTarget 수집 및 InteractionQuery 수행
    if (bHit && HitResult.GetActor())
    {
        TArray<TScriptInterface<IInteractableTarget>> InteractableTargets;
        UInteractionStatics::AppendInteractableTargetsFromHitResult(HitResult, InteractableTargets);

        if (InteractableTargets.Num() > 0)
        {
            FInteractionQuery Query;
            Query.RequestingAvatar = GetPawn();
            Query.RequestingController = this;

            TArray<FInteractionOption> Options;
            for (const TScriptInterface<IInteractableTarget>& Target : InteractableTargets)
            {
                FInteractionOptionBuilder Builder(Target, Options);
                Target->GatherInteractionOptions(Query, Builder);
            }

            // 옵션이 하나라도 있으면 첫 대상에서 NodeComponent 추출
            if (Options.Num() > 0)
            {
                if (UObject* TargetObj = Options[0].InteractableTarget.GetObject())
                {
                    // InteractableTarget이 NodeComponent 자체인 경우와 Actor를 통한 간접 경유 모두 처리
                    NewHovered = Cast<UKausNodeComponent>(TargetObj);
                    if (!NewHovered)
                    {
                        if (AActor* TargetActor = Cast<AActor>(TargetObj))
                        {
                            NewHovered = UKausNodeComponent::FindNodeComponent(TargetActor);
                        }
                        else if (UActorComponent* TargetComp = Cast<UActorComponent>(TargetObj))
                        {
                            NewHovered = UKausNodeComponent::FindNodeComponent(TargetComp->GetOwner());
                        }
                    }
                }
            }
        }
    }

    // 호버 대상이 변경되지 않았으면 종료
    UKausNodeComponent* PrevHovered = CurrentHoveredNodeComponent.Get();
    if (PrevHovered == NewHovered)
    {
        return;
    }

    // 이전 호버 대상 Deactivate
    if (PrevHovered)
    {
        PrevHovered->DeactivateIndicatorForCurrentState();
    }

    // 새 호버 대상 Activate
    if (NewHovered)
    {
        NewHovered->ActivateIndicatorForCurrentState();
    }

    CurrentHoveredNodeComponent = NewHovered;
}
