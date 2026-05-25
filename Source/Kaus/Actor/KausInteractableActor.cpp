#include "Actor/KausInteractableActor.h"
#include "Node/KausNodeComponent.h"

AKausInteractableActor::AKausInteractableActor()
{
	PrimaryActorTick.bCanEverTick = false;
}

void AKausInteractableActor::GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder)
{
	UKausNodeComponent* NodeComponent = UKausNodeComponent::FindNodeComponent(this);
	if(NodeComponent)
	{
		NodeComponent->GatherInteractionOptions(InteractQuery, OptionBuilder);
	}
}

void AKausInteractableActor::CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData)
{
	UKausNodeComponent* NodeComponent = UKausNodeComponent::FindNodeComponent(this);
	if(NodeComponent)
	{
		NodeComponent->CustomizeInteractionEventData(InteractionEventTag, InOutEventData);
	}
}

void AKausInteractableActor::BeginPlay()
{
	Super::BeginPlay();
	
}