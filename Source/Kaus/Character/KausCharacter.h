#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "AbilitySystemInterface.h"
#include "GameplayTagAssetInterface.h"
#include "GameFramework/GameplayMessageSubsystem.h" 
#include "Interaction/IInteractableTarget.h"
#include "Interaction/InteractionOption.h"
#include "KausCharacter.generated.h"

class UKausEquipmentManagerComponent;
class UKausCameraComponent;
class UKausCharacterMovementComponent;
class UKausPlayerUnitComponent;
class USpringArmComponent;
class UAbilitySystemComponent;
class AKausPlayerController;
class AKausPlayerState;
class UKausUnitExtensionComponent;
class UKausCameraMode;


/**
 * FKausReplicatedAcceleration: Compressed representation of acceleration
 */
USTRUCT()
struct FKausReplicatedAcceleration
{
	GENERATED_BODY()

	UPROPERTY()
	uint8 AccelXYRadians = 0;	// Direction of XY accel component, quantized to represent [0, 2*pi]

	UPROPERTY()
	uint8 AccelXYMagnitude = 0;	//Accel rate of XY component, quantized to represent [0, MaxAcceleration]

	UPROPERTY()
	int8 AccelZ = 0;	// Raw Z accel rate component, quantized to represent [-MaxAcceleration, MaxAcceleration]
};

/**
 * AKausCharacter
 *
 *	The base character pawn class used by this project.
 *	Responsible for sending events to pawn components.
 *	New behavior should be added via pawn components when possible.
 */
UCLASS(Config = Game, Meta = (ShortTooltip = "The base character pawn class used by this project."))
class KAUS_API AKausCharacter : public ACharacter, public IAbilitySystemInterface, public IGameplayTagAssetInterface, public IInteractableTarget
{
	GENERATED_BODY()

public:
	AKausCharacter(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category = "Kaus|Character")
	AKausPlayerController* GetKausPlayerController() const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|Character")
	AKausPlayerState* GetKausPlayerState() const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|Character")
	UKausAbilitySystemComponent* GetKausAbilitySystemComponent() const;

	virtual UAbilitySystemComponent* GetAbilitySystemComponent() const override;

	virtual void GetOwnedGameplayTags(FGameplayTagContainer& TagContainer) const override;

	virtual bool HasMatchingGameplayTag(FGameplayTag TagToCheck) const override;

	virtual bool HasAllMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	virtual bool HasAnyMatchingGameplayTags(const FGameplayTagContainer& TagContainer) const override;

	//~AActor interface
	virtual void PostInitializeComponents() override;

	virtual void PreInitializeComponents() override;

	virtual void BeginPlay() override;

	virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

	virtual void Reset() override;

	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreReplication(IRepChangedPropertyTracker& ChangedPropertyTracker) override;

	//virtual void OnConstruction(const FTransform& Transform) override;
	//~End of AActor interface

	//~APawn interface
	virtual void NotifyControllerChanged() override;
	//~End of APawn interface

	//Begin of IInteractableTarget ~
	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) override;

	virtual void CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData) override;
	//End of IInteractableTarget ~

	void OnAbilitySystemInitialized();
	
	void OnAbilitySystemUninitialized();

	virtual void PossessedBy(AController* NewController) override;
	
	virtual void UnPossessed() override;

	virtual void OnRep_PlayerState() override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent) override;

private:
	UFUNCTION()
	void OnRep_ReplicatedAcceleration();

public:
	UPROPERTY(VisibleAnywhere, Category = "Kaus|GAS")
	TObjectPtr<UKausAbilitySystemComponent> AbilitySystemComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Character", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UKausCameraComponent> CameraComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Character", Meta = (AllowPrivateAccess = "true"))
	TObjectPtr<UKausUnitExtensionComponent> UnitExtComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Input")
	TObjectPtr<UKausPlayerUnitComponent> PlayerUnitComponent;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Input")
	TObjectPtr<UKausEquipmentManagerComponent> EquipmentComponent;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Config")
	FGameplayTag UnitID;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Interaction")
	FInteractionOption Option;

public:
	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Character|Collision", meta = (ClampMin = "0.0"))
	//float DefaultCapsuleRadius = 40.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Character|Collision", meta = (ClampMin = "0.0"))
	//float DefaultCapsuleHalfHeight = 90.0f;

	//UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Character|Collision")
	//bool bAutoAdjustMeshZOffset = true;

private:
	UPROPERTY(Transient, ReplicatedUsing = OnRep_ReplicatedAcceleration)
	FKausReplicatedAcceleration ReplicatedAcceleration;

	FGameplayMessageListenerHandle PhaseChangeListenerHandle;
};
