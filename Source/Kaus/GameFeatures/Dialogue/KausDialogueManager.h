// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/MounteaDialogueManager.h"
#include "KausDialogueManager.generated.h"


UCLASS(ClassGroup = (Kaus), Blueprintable,
       meta = (BlueprintSpawnableComponent, DisplayName = "Kaus Dialogue Manager"))
class KAUS_API UKausDialogueManager : public UMounteaDialogueManager
{
    GENERATED_BODY()

public:
    UKausDialogueManager();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
};
