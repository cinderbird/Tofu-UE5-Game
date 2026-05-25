#pragma once
#include "Engine/DataAsset.h"
#include "Equipment/KausPickupDefinition.h"
#include "KausWeaponPickupDefinition.generated.h"

/**
 * 
 */
UCLASS(Blueprintable, BlueprintType, Const, Meta = (DisplayName = "Kaus Weapon Pickup Data", ShortTooltip = "Data asset used to configure a weapon pickup."))
class KAUS_API UKausWeaponPickupDefinition : public UKausPickupDefinition
{
	GENERATED_BODY()

public:

	//Sets the height of the display mesh above the Weapon spawner
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Pickup|Mesh")
	FVector WeaponMeshOffset;

	//Sets the height of the display mesh above the Weapon spawner
	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Pickup|Mesh")
	FVector WeaponMeshScale = FVector(1.0f, 1.0f, 1.0f);
};
