#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "KausSequenceSubsystem.generated.h"

class UKausSequenceDirector;


UCLASS()
class KAUS_API UKausSequenceSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // === Director 등록/해제 ===

    void RegisterDirector(UKausSequenceDirector* Director);
    void UnregisterDirector(UKausSequenceDirector* Director);

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    UKausSequenceDirector* GetActiveDirector() const;

private:
    UPROPERTY(Transient)
    TArray<TWeakObjectPtr<UKausSequenceDirector>> ActiveDirectors;
};
