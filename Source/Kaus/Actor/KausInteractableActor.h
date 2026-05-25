#pragma once
#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Interaction/IInteractableTarget.h"
#include "KausInteractableActor.generated.h"

UCLASS()
class KAUS_API AKausInteractableActor : public AActor, public IInteractableTarget
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	AKausInteractableActor();

	//Begin of IInteractableTarget ~
	virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) override;

	virtual void CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData) override;
	//End of IInteractableTarget ~

protected:
	virtual void BeginPlay() override;
};
