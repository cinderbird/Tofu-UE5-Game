#pragma once
#include "AbilitySystem/Abilities/KausGameplayAbility.h"
#include "KausGameplayAbility_FromEquipment.generated.h"

class UKausEquipmentInstance;
class UKausInventoryItemInstance;
/**
 * UKausGameplayAbility_FromEquipment
 *
 * An ability granted by and associated with an equipment instance
 */
UCLASS()
class UKausGameplayAbility_FromEquipment : public UKausGameplayAbility
{
	GENERATED_BODY()

public:
	UKausGameplayAbility_FromEquipment(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UFUNCTION(BlueprintCallable, Category="Kaus|Ability")
	UKausEquipmentInstance* GetAssociatedEquipment() const;

	UFUNCTION(BlueprintCallable, Category = "Kaus|Ability")
	UKausInventoryItemInstance* GetAssociatedItem() const;

#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif

};
