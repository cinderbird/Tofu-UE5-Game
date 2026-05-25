#include "KausInventoryItemDefinition.h"
#include "Templates/SubclassOf.h"
#include "UObject/ObjectPtr.h"

//////////////////////////////////////////////////////////////////////
// UKausInventoryItemDefinition

UKausInventoryItemDefinition::UKausInventoryItemDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

const UKausInventoryItemFragment* UKausInventoryItemDefinition::FindFragmentByClass(TSubclassOf<UKausInventoryItemFragment> FragmentClass) const
{
	if (FragmentClass != nullptr)
	{
		for (UKausInventoryItemFragment* Fragment : Fragments)
		{
			if (Fragment && Fragment->IsA(FragmentClass))
			{
				return Fragment;
			}
		}
	}

	return nullptr;
}

//////////////////////////////////////////////////////////////////////
// UKausInventoryItemDefinition

const UKausInventoryItemFragment* UKausInventoryFunctionLibrary::FindItemDefinitionFragment(TSubclassOf<UKausInventoryItemDefinition> ItemDef, TSubclassOf<UKausInventoryItemFragment> FragmentClass)
{
	if ((ItemDef != nullptr) && (FragmentClass != nullptr))
	{
		return GetDefault<UKausInventoryItemDefinition>(ItemDef)->FindFragmentByClass(FragmentClass);
	}
	return nullptr;
}

