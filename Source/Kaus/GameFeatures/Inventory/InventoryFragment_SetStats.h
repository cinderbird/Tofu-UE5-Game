#pragma once
#include "GameplayTagContainer.h"
#include "Inventory/KausInventoryItemDefinition.h"
#include "InventoryFragment_SetStats.generated.h"

class UKausInventoryItemInstance;
class UObject;
struct FGameplayTag;

UCLASS()
class UInventoryFragment_SetStats : public UKausInventoryItemFragment
{
	GENERATED_BODY()

protected:
	UPROPERTY(EditDefaultsOnly, Category=Equipment)
	TMap<FGameplayTag, int32> InitialItemStats;

public:
	virtual void OnInstanceCreated(UKausInventoryItemInstance* Instance) const override;
	int32 GetItemStatByTag(FGameplayTag Tag) const;
};
