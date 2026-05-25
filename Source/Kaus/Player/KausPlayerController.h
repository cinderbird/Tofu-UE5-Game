#pragma once
#include "CommonPlayerController.h"
#include "GameplayTagContainer.h"
#include "KausPlayerController.generated.h"

class UKausInputConfig;
class UKausSettingsShared;
class AKausPlayerState;
class UKausAbilitySystemComponent;
class AKausHUD;
class UKausInventoryManagerComponent;
class UKausIndicatorManagerComponent;
class UKausQuickBarComponent;
class UKausNumberPopComponent;
class UInputMappingContext;
class AKausObserverPawn;
class UKausNodeComponent;

struct FInputActionValue;

/**
 * AKausPlayerController
 *
 *	The base player controller class used by this project.
 */
UCLASS(Config = Game, Meta = (ShortTooltip = "The base player controller class used by this project."))
class KAUS_API AKausPlayerController : public ACommonPlayerController
{
	GENERATED_BODY()
	
	
public:
	AKausPlayerController(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Kaus|PlayerController")
	AKausPlayerState* GetKausPlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|PlayerController")
	UKausAbilitySystemComponent* GetKausAbilitySystemComponent() const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|PlayerController")
	AKausHUD* GetKausHUD() const;

	//상호작용 가능한 대상에 대해 마우스를 올렸을때 NodeComponent의 State에 맞는 Indicator를 호출하는 함수 - 빠른 작업을 위해 하드 코딩됨.
	UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
	void UpdateHoveredInteractableByChannel(ECollisionChannel TraceChannel, bool bTraceComplex = false);

	//상호작용 가능한 대상에 대해 마우스를 올렸을때 NodeComponent의 State에 맞는 Indicator를 호출하는 함수 - 빠른 작업을 위해 하드 코딩됨.
	UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
	void UpdateHoveredInteractableByObjectTypes(const TArray<TEnumAsByte<EObjectTypeQuery>>& ObjectTypes, bool bTraceComplex = false);

	//~AActor interface
	virtual void PreInitializeComponents() override;

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
	//~End of AActor interface

	//~AController interface
	virtual void OnPossess(APawn* InPawn) override;

	virtual void OnUnPossess() override;

	virtual void InitPlayerState() override;
	
	virtual void CleanupPlayerState() override;

	virtual void OnRep_PlayerState() override;
	//~End of AController interface

	//~APlayerController interface
	virtual void ReceivedPlayer() override;

	virtual void PlayerTick(float DeltaTime) override;

	virtual void SetPlayer(UPlayer* InPlayer) override;

	virtual void AddCheats(bool bForce) override;

	//virtual void UpdateForceFeedback(IInputInterface* InputInterface, const int32 ControllerId) override;

	virtual void UpdateHiddenComponents(const FVector& ViewLocation, TSet<FPrimitiveComponentId>& OutHiddenComponents) override;

	virtual void PreProcessInput(const float DeltaTime, const bool bGamePaused) override;

	virtual void PostProcessInput(const float DeltaTime, const bool bGamePaused) override;
	//~End of APlayerController interface

	//Maybe unused
	virtual void SetupInputComponent() override;

protected:
	void OnSettingsChanged(UKausSettingsShared* Settings);

public:
	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Inventory")
	TObjectPtr<UKausInventoryManagerComponent> InventoryComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Indicator")
	TObjectPtr<UKausIndicatorManagerComponent> IndicatorComponent;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Quickbar")
	TObjectPtr<UKausQuickBarComponent> QuickBarComponent;

	UPROPERTY(EditDefaultsOnly, Category = "Kaus|NumberPop")
	TSubclassOf<UKausNumberPopComponent> NumberPopComponentClass;

	UPROPERTY(Transient)
	TObjectPtr<UKausNumberPopComponent> ActiveNumberPopComponent;

private:
	//상호작용 가능한 대상에 대해 마우스를 올렸을때 NodeComponent의 State에 맞는 Indicator를 호출하는 함수 - 빠른 작업을 위해 하드 코딩됨.
    void ProcessHoverHitResult(const struct FHitResult& HitResult, bool bHit);

	//상호작용 가능한 대상에 대해 마우스를 올렸을때 NodeComponent의 State에 맞는 Indicator를 호출하는 함수 - 빠른 작업을 위해 하드 코딩됨.
    UPROPERTY(Transient)
    TWeakObjectPtr<UKausNodeComponent> CurrentHoveredNodeComponent;
	
};
