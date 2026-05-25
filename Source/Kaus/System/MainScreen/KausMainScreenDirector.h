#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameplayTagContainer.h"
#include "KausMainScreenDirector.generated.h"

class UKausMainScreenConfigDA;
class UKausMainScreenInteractionSetDA;
class UKausSequenceDirector;

UCLASS()
class KAUS_API AKausMainScreenDirector : public AActor
{
    GENERATED_BODY()

public:
    AKausMainScreenDirector();

    UFUNCTION(BlueprintPure, Category = "Kaus|MainScreen")
    UKausSequenceDirector* GetSequenceDirector() const { return SequenceDirector; }

    UFUNCTION(BlueprintPure, Category = "Kaus|MainScreen")
    const UKausMainScreenConfigDA* GetMainScreenConfig() const { return MainScreenConfig; }

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    UFUNCTION()
    void OnPhaseChanged(const FGameplayTag& NewPhase);

    UFUNCTION(BlueprintCallable, Category = "Kaus|MainScreen")
    void ApplyInteractionSet();

    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|MainScreen")
    void OnSequenceSetupComplete(const UKausMainScreenInteractionSetDA* AppliedSet);

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|MainScreen")
    TObjectPtr<UKausMainScreenConfigDA> MainScreenConfig;

private:
    UPROPERTY(VisibleAnywhere, Category = "Kaus|MainScreen")
    TObjectPtr<UKausSequenceDirector> SequenceDirector;
};
