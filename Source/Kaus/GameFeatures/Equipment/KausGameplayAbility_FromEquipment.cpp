#include "KausGameplayAbility_FromEquipment.h"
#include "KausEquipmentInstance.h"
#include "Inventory/KausInventoryItemInstance.h"

#if WITH_EDITOR
#include "Misc/DataValidation.h"
#endif

UKausGameplayAbility_FromEquipment::UKausGameplayAbility_FromEquipment(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

UKausEquipmentInstance* UKausGameplayAbility_FromEquipment::GetAssociatedEquipment() const
{
	if (FGameplayAbilitySpec* Spec = UGameplayAbility::GetCurrentAbilitySpec())
	{
		return Cast<UKausEquipmentInstance>(Spec->SourceObject.Get());
	}

	return nullptr;
}

UKausInventoryItemInstance* UKausGameplayAbility_FromEquipment::GetAssociatedItem() const
{
	if (UKausEquipmentInstance* Equipment = GetAssociatedEquipment())
	{
		return Cast<UKausInventoryItemInstance>(Equipment->GetInstigator());
	}
	return nullptr;
}


#if WITH_EDITOR
EDataValidationResult UKausGameplayAbility_FromEquipment::IsDataValid(FDataValidationContext& Context) const
{
	EDataValidationResult Result = Super::IsDataValid(Context);

PRAGMA_DISABLE_DEPRECATION_WARNINGS
	if (InstancingPolicy == EGameplayAbilityInstancingPolicy::NonInstanced)
PRAGMA_ENABLE_DEPRECATION_WARNINGS
	{
		Context.AddError(NSLOCTEXT("Kaus", "EquipmentAbilityMustBeInstanced", "Equipment ability must be instanced"));
		Result = EDataValidationResult::Invalid;
	}

	return Result;
}

#endif
