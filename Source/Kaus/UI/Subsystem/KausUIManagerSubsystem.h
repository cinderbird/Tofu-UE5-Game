#pragma once

#include "CoreMinimal.h"
#include "GameUIManagerSubsystem.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "KausUIManagerSubsystem.generated.h"

class UKausActivatableWidget;
class UKausUILayerConfig;


/**
 * 
 */
UCLASS()
class KAUS_API UKausUIManagerSubsystem : public UGameUIManagerSubsystem
{
	GENERATED_BODY()
	
public:
	UKausUIManagerSubsystem();

	virtual void Initialize(FSubsystemCollectionBase& Collection) override;
	virtual void Deinitialize() override;

private:
	void SetRootLayoutVisibility(bool bVisible);

protected:

	UPROPERTY(Transient)
	TMap<FGameplayTag, TWeakObjectPtr<UKausActivatableWidget>> ActiveWidgets;


private:
	FGameplayMessageListenerHandle UIToggleListenerHandle;

};
