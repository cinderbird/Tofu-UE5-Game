#pragma once

#include "Components/ActorComponent.h"
#include "Net/Serialization/FastArraySerializer.h"
#include "KausInventoryManagerComponent.generated.h"

class UKausInventoryItemDefinition;
class UKausInventoryItemInstance;
class UKausInventoryManagerComponent;
class UObject;
struct FFrame;
struct FKausInventoryList;
struct FNetDeltaSerializeInfo;
struct FReplicationFlags;

/** A message when an item is added to the inventory */
USTRUCT(BlueprintType)
struct FKausInventoryChangeMessage
{
	GENERATED_BODY()

	//@TODO: Tag based names+owning actors for inventories instead of directly exposing the component?
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	TObjectPtr<UActorComponent> InventoryOwner = nullptr;

	UPROPERTY(BlueprintReadOnly, Category = Inventory)
	TObjectPtr<UKausInventoryItemInstance> Instance = nullptr;
	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 NewCount = 0;

	UPROPERTY(BlueprintReadOnly, Category=Inventory)
	int32 Delta = 0;
};

/** A single entry in an inventory */
USTRUCT(BlueprintType)
struct FKausInventoryEntry : public FFastArraySerializerItem
{
	GENERATED_BODY()

	FKausInventoryEntry()
	{}

	FString GetDebugString() const;

private:
	friend FKausInventoryList;
	friend UKausInventoryManagerComponent;

	UPROPERTY()
	TObjectPtr<UKausInventoryItemInstance> Instance = nullptr;

	UPROPERTY()
	int32 StackCount = 0;

	UPROPERTY(NotReplicated)
	int32 LastObservedCount = INDEX_NONE;
};

/** List of inventory items */
USTRUCT(BlueprintType)
struct FKausInventoryList : public FFastArraySerializer
{
	GENERATED_BODY()

	FKausInventoryList()
		: OwnerComponent(nullptr)
	{
	}

	FKausInventoryList(UActorComponent* InOwnerComponent)
		: OwnerComponent(InOwnerComponent)
	{
	}

	TArray<UKausInventoryItemInstance*> GetAllItems() const;

public:
	//~FFastArraySerializer contract
	void PreReplicatedRemove(const TArrayView<int32> RemovedIndices, int32 FinalSize);
	void PostReplicatedAdd(const TArrayView<int32> AddedIndices, int32 FinalSize);
	void PostReplicatedChange(const TArrayView<int32> ChangedIndices, int32 FinalSize);
	//~End of FFastArraySerializer contract

	bool NetDeltaSerialize(FNetDeltaSerializeInfo& DeltaParms)
	{
		return FFastArraySerializer::FastArrayDeltaSerialize<FKausInventoryEntry, FKausInventoryList>(Entries, DeltaParms, *this);
	}

	UKausInventoryItemInstance* AddEntry(TSubclassOf<UKausInventoryItemDefinition> ItemClass, int32 StackCount);
	void AddEntry(UKausInventoryItemInstance* Instance);

	void RemoveEntry(UKausInventoryItemInstance* Instance);

private:
	void BroadcastChangeMessage(FKausInventoryEntry& Entry, int32 OldCount, int32 NewCount);
private:
	friend UKausInventoryManagerComponent;

private:
	// Replicated list of items
	UPROPERTY()
	TArray<FKausInventoryEntry> Entries;

	UPROPERTY(NotReplicated)
	TObjectPtr<UActorComponent> OwnerComponent;
};

template<>
struct TStructOpsTypeTraits<FKausInventoryList> : public TStructOpsTypeTraitsBase2<FKausInventoryList>
{
	enum { WithNetDeltaSerializer = true };
};

/**
 * Manages an inventory
 */
UCLASS(BlueprintType, Blueprintable)
class KAUS_API UKausInventoryManagerComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	UKausInventoryManagerComponent(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	bool CanAddItemDefinition(TSubclassOf<UKausInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	UKausInventoryItemInstance* AddItemDefinition(TSubclassOf<UKausInventoryItemDefinition> ItemDef, int32 StackCount = 1);

	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void AddItemInstance(UKausInventoryItemInstance* ItemInstance);
	UFUNCTION(BlueprintCallable, BlueprintAuthorityOnly, Category=Inventory)
	void RemoveItemInstance(UKausInventoryItemInstance* ItemInstance);

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure=false)
	TArray<UKausInventoryItemInstance*> GetAllItems() const;

	UFUNCTION(BlueprintCallable, Category=Inventory, BlueprintPure)
	UKausInventoryItemInstance* FindFirstItemStackByDefinition(TSubclassOf<UKausInventoryItemDefinition> ItemDef) const;

	int32 GetTotalItemCountByDefinition(TSubclassOf<UKausInventoryItemDefinition> ItemDef) const;
	bool ConsumeItemsByDefinition(TSubclassOf<UKausInventoryItemDefinition> ItemDef, int32 NumToConsume);
	//~UObject interface
	virtual bool ReplicateSubobjects(class UActorChannel* Channel, class FOutBunch* Bunch, FReplicationFlags* RepFlags) override;
	virtual void ReadyForReplication() override;
	//~End of UObject interface

private:
	UPROPERTY(Replicated)
	FKausInventoryList InventoryList;
};
