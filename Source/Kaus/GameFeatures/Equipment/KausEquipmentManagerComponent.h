#pragma once
#include "AbilitySystem/KausUnitAbilityData.h"
#include "Components/PawnComponent.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "KausEquipmentManagerComponent.generated.h"

class UActorComponent;
class UKausAbilitySystemComponent;
class UKausEquipmentDefinition;
class UKausEquipmentInstance;
class UKausEquipmentManagerComponent;
class UObject;
struct FFrame;
struct FKausEquipmentList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

/** A single piece of applied equipment */
USTRUCT(BlueprintType)
struct FKausAppliedEquipmentEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FKausAppliedEquipmentEntry()
	{}

	FString GetDebugString() const;

private:
	friend FKausEquipmentList;
	friend UKausEquipmentManagerComponent;

	// The equipment class that got equipped
	UPROPERTY()
	TSubclassOf<UKausEquipmentDefinition> EquipmentDefinition;

	UPROPERTY()
	TObjectPtr<UKausEquipmentInstance> Instance = nullptr;

	// Authority-only list of granted handles
	UPROPERTY(NotReplicated)
	FKausAbilitySet_GrantedHandles GrantedHandles;
};

/** List of applied equipment */
USTRUCT(BlueprintType)
struct FKausEquipmentList : public FFastArraySerializer
{
	GENERATED_BODY()

	FKausEquipmentList()
		: OwnerComponent(nullptr)
	{
	}

	FKausEquipmentList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FKausAppliedEquipmentEntry, FKausEquipmentList>(Entries, DeltaParms, *this);
	}

	UKausEquipmentInstance* AddEntry(TSubclassOf<UKausEquipmentDefinition> EquipmentDefinition);
	void RemoveEntry(UKausEquipmentInstance* Instance);
private:
	UKausAbilitySystemComponent* GetAbilitySystemComponent() const;

	friend UKausEquipmentManagerComponent;

private:
	// Replicated list of equipment entries
	UPROPERTY()
	TArray<FKausAppliedEquipmentEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FKausEquipmentList> : public TStructOpsTypeTraitsBase2<FKausEquipmentList>
{
	enum { WithNetDeltaSerializer = true };
};


/**
 * Manages equipment applied to a pawn
 */
UCLASS(BlueprintType, Const)
class KAUS_API UKausEquipmentManagerComponent : public UPawnComponent
{
	GENERATED_BODY()

public:
	UKausEquipmentManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	UKausEquipmentInstance* EquipItem(TSubclassOf<UKausEquipmentDefinition> EquipmentDefinition);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly)
	void UnequipItem(UKausEquipmentInstance* ItemInstance);

	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	//~End of UObject interface

	//~UActorComponent interface
	//virtual void EndPlay() override;
	virtual void InitializeComponent() override;
	virtual void UninitializeComponent() override;
	virtual void ReadyForReplication() override;
	//~End of UActorComponent interface

	/** Returns the first equipped instance of a given type, or nullptr if none are found */
	UFUNCTION(BlueprintCallable, BlueprintPure)
	UKausEquipmentInstance* GetFirstInstanceOfType(TSubclassOf<UKausEquipmentInstance> InstanceType);

 	/** Returns all equipped instances of a given type, or an empty array if none are found */
 	UFUNCTION(BlueprintCallable, BlueprintPure)
	TArray<UKausEquipmentInstance*> GetEquipmentInstancesOfType(TSubclassOf<UKausEquipmentInstance> InstanceType) const;

	template <typename T>
	T* GetFirstInstanceOfType()
	{
		return (T*)GetFirstInstanceOfType(T::StaticClass());
	}

private:
	UPROPERTY(Replicated)
	FKausEquipmentList EquipmentList;
};
