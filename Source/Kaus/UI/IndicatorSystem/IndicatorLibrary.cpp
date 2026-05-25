#include "IndicatorLibrary.h"
#include "KausIndicatorManagerComponent.h"

class AController;

UIndicatorLibrary::UIndicatorLibrary()
{
}

UKausIndicatorManagerComponent* UIndicatorLibrary::GetIndicatorManagerComponent(AController* Controller)
{
	return UKausIndicatorManagerComponent::GetComponent(Controller);
}

