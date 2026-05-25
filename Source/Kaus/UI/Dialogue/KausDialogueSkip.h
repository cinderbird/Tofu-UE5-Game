#pragma once

#include "CoreMinimal.h"
#include "UI/KausActivatableWidget.h"
#include "Interfaces/UMG/MounteaDialogueSkipInterface.h"
#include "KausDialogueSkip.generated.h"

/**
 * UKausDialogueSkip
 * UI displayed when requesting to skip a conversation.
 * Receives a request from the Mountea system and switches to the active state of Common UI.
 */
UCLASS()
class KAUS_API UKausDialogueSkip : public UKausActivatableWidget, public IMounteaDialogueSkipInterface
{
    GENERATED_BODY()

public:
    UKausDialogueSkip(const FObjectInitializer& ObjectInitializer);

    //~ Begin IMounteaDialogueSkipInterface Implementation
    virtual void RequestShowWidget_Implementation(const FVector2D& FadeProgressDuration) override;
    virtual void RequestHideWidget_Implementation() override;
    //~ End IMounteaDialogueSkipInterface Implementation

protected:
    /**
    * Called by BP to handle animation when the widget is activated (Show).
    * @param FadeTime The time it takes to appear.
    * @param Duration The hold time required for the skip to complete.
    */
    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Dialogue")
    void OnSkipUIRequested(float FadeTime, float Duration);
};