#pragma once
#include "KausNumberPopComponent.h"
#include "KausNumberPopComponent_NiagaraText.generated.h"

class UKausDamagePopStyleNiagara;
class UNiagaraComponent;
class UObject;

UCLASS(Blueprintable)
class UKausNumberPopComponent_NiagaraText : public UKausNumberPopComponent
{
	GENERATED_BODY()

public:
	UKausNumberPopComponent_NiagaraText(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

	//~UKausNumberPopComponent interface
	virtual void AddNumberPop(const FKausNumberPopRequest& NewRequest) override;
	//~End of UKausNumberPopComponent interface

protected:
	TArray<int32> DamageNumberArray;

	/** Style patterns to attempt to apply to the incoming number pops */
	UPROPERTY(EditDefaultsOnly, Category = "Number Pop|Style")
	TObjectPtr<UKausDamagePopStyleNiagara> Style;

	//Niagara Component used to display the damage
	UPROPERTY(EditDefaultsOnly, Category = "Number Pop|Style")
	TObjectPtr<UNiagaraComponent> NiagaraComp;
};
