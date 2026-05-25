#pragma once
#include "Templates/SubclassOf.h"
#include "KausEquipmentDefinition.generated.h"

class AActor;
class UKausUnitAbilityData;
class UKausEquipmentInstance;

USTRUCT()
struct FKausEquipmentActorToSpawn
{
	GENERATED_BODY()

	FKausEquipmentActorToSpawn()
	{}

	UPROPERTY(EditAnywhere, Category=Equipment)
	TSubclassOf<AActor> ActorToSpawn;

	UPROPERTY(EditAnywhere, Category=Equipment)
	FName AttachSocket;

	UPROPERTY(EditAnywhere, Category=Equipment)
	FTransform AttachTransform;
};


/**
 * UKausEquipmentDefinition
 *
 * Definition of a piece of equipment that can be applied to a pawn
 */
UCLASS(Blueprintable, Const, Abstract, BlueprintType)
class UKausEquipmentDefinition : public UObject
{
	GENERATED_BODY()

public:
	UKausEquipmentDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	// Class to spawn
	UPROPERTY(EditDefaultsOnly, Category=Equipment)
	TSubclassOf<UKausEquipmentInstance> InstanceType;

	// Gameplay ability sets to grant when this is equipped
	UPROPERTY(EditDefaultsOnly, Category=Equipment)
	TArray<TObjectPtr<const UKausUnitAbilityData>> AbilitySetsToGrant;

	// Actors to spawn on the pawn when this is equipped
	UPROPERTY(EditDefaultsOnly, Category=Equipment)
	TArray<FKausEquipmentActorToSpawn> ActorsToSpawn;
};
