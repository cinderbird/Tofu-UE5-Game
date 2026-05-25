#include "KausEquipmentDefinition.h"
#include "KausEquipmentInstance.h"

UKausEquipmentDefinition::UKausEquipmentDefinition(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	InstanceType = UKausEquipmentInstance::StaticClass();
}

