#pragma once
#include "Inventory/KausInventoryItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "InventoryFragment_EquippableItem.generated.h"

class UKausEquipmentDefinition;
class UObject;

UCLASS()
class UInventoryFragment_EquippableItem : public UKausInventoryItemFragment
{
	GENERATED_BODY()

public:
	UPROPERTY(EditAnywhere, Category=Kaus)
	TSubclassOf<UKausEquipmentDefinition> EquipmentDefinition;
};
