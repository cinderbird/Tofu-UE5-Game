#pragma once
#include "Kismet/BlueprintFunctionLibrary.h"
#include "KausInventoryItemDefinition.generated.h"

template <typename T> class TSubclassOf;

class UKausInventoryItemInstance;
struct FFrame;

//////////////////////////////////////////////////////////////////////

// Represents a fragment of an item definition
UCLASS(DefaultToInstanced, EditInlineNew, Abstract)
class KAUS_API UKausInventoryItemFragment : public UObject
{
	GENERATED_BODY()

public:
	virtual void OnInstanceCreated(UKausInventoryItemInstance* Instance) const {}
};

//////////////////////////////////////////////////////////////////////

/**
 * UKausInventoryItemDefinition
 */
UCLASS(Blueprintable, Const, Abstract)
class UKausInventoryItemDefinition : public UObject
{
	GENERATED_BODY()

public:
	UKausInventoryItemDefinition(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display)
	FText DisplayName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category=Display, Instanced)
	TArray<TObjectPtr<UKausInventoryItemFragment>> Fragments;

public:
	const UKausInventoryItemFragment* FindFragmentByClass(TSubclassOf<UKausInventoryItemFragment> FragmentClass) const;
};

//@TODO: Make into a subsystem instead?
UCLASS()
class UKausInventoryFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

	UFUNCTION(BlueprintCallable, meta=(DeterminesOutputType=FragmentClass))
	static const UKausInventoryItemFragment* FindItemDefinitionFragment(TSubclassOf<UKausInventoryItemDefinition> ItemDef, TSubclassOf<UKausInventoryItemFragment> FragmentClass);
};
