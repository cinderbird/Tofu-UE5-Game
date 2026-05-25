#pragma once

#include "CoreMinimal.h"
#include "UI/KausActivatableWidget.h"
#include "Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h"
#include "Components/PanelWidget.h"
#include "KausDialogueOptionsContainer.generated.h"

class UMounteaDialogueGraphNode_DialogueNodeBase;

/**
 * UKausDialogueOptionsContainer
 * Container that manages the options list for the Mountea Dialogue System.
 * Integrated with Common UI, supporting automatic focus management and input routing.
 */
UCLASS()
class KAUS_API UKausDialogueOptionsContainer : public UKausActivatableWidget, public IMounteaDialogueOptionsContainerInterface
{
    GENERATED_BODY()

public:
	UKausDialogueOptionsContainer(const FObjectInitializer& ObjectInitializer);
	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

	//virtual UWidget* NativeGetDesiredFocusTarget() const override;

protected:

	UFUNCTION()
	void ClearChildOptionFocus(UUserWidget* Target);

	void ClearChildOptionsFocus();

	UFUNCTION()
	void ResetFocus(const UUserWidget* Requestor);

protected:

	// IMounteaDialogueOptionsContainerInterface implementation
	virtual void SetParentDialogueWidget_Implementation(UUserWidget* NewParentDialogueWidget) override;
	virtual UUserWidget* GetParentDialogueWidget_Implementation() const override;
	virtual TSoftClassPtr<UUserWidget> GetDialogueOptionClass_Implementation() const override;
	virtual void SetDialogueOptionClass_Implementation(const TSoftClassPtr<UUserWidget>& NewDialogueOptionClass) override;
	virtual void AddNewDialogueOption_Implementation(UMounteaDialogueGraphNode_DialogueNodeBase* Node) override;
	virtual void AddNewDialogueOptions_Implementation(const TArray<UMounteaDialogueGraphNode_DialogueNodeBase*>& NewDialogueOptions) override;
	virtual void RemoveDialogueOption_Implementation(UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption) override;
	virtual void RemoveDialogueOptions_Implementation(const TArray<UMounteaDialogueGraphNode_DialogueNodeBase*>& DirtyDialogueOptions) override;
	virtual void ClearDialogueOptions_Implementation() override;
	virtual void ProcessOptionSelected_Implementation(const FGuid& SelectedOption, UUserWidget* CallingWidget) override;
	virtual TArray<UUserWidget*> GetDialogueOptions_Implementation() const override;
	virtual int32 GetFocusedOptionIndex_Implementation() const override;
	virtual void SetFocusedOption_Implementation(const int32 NewFocusedOption) override;
	virtual void ToggleForcedFocus_Implementation(const bool bEnable) override;

protected:

	/**
	 * The class type of the dialogue option widget. Must Implement 'MounteaDialogueOptionInterface'.
	 */
	UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kaus|Dialogue", meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueOptionInterface", NoResetToDefault))
	TSoftClassPtr<UUserWidget> DialogueOptionClass;

	/**
	 * The parent dialogue widget. Must implement 'MounteaDialogueWBPInterface'.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue", meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface", NoResetToDefault))
	TObjectPtr<UUserWidget> ParentDialogueWidget;

	/**
	 * All Dialogue options associated with this container.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue")
	TMap<FGuid, TObjectPtr<UUserWidget>> DialogueOptions;

	/**
	 * Index of focused option.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue")
	int32 FocusedOption;

	/**
	 * Index of last focused option. Used for fallbacks.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue")
	int32 LastFocusedOption;

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue")
	uint8 bForcedFocusEnabled : 1;
};