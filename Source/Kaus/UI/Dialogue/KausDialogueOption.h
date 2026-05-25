#pragma once

#include "CoreMinimal.h"
#include "UI/Foundation/KausButtonBase.h"
#include "Interfaces/UMG/MounteaDialogueOptionInterface.h"
#include "Interfaces/UMG/MounteaFocusableWidgetInterface.h"
#include "KausDialogueOption.generated.h"

/**
 * UKausDialogueOption
 * Utilizes Common UI button functionality.
 * A class that implements the data and logic interfaces of the Mountea Dialogue System.
 */
UCLASS()
class KAUS_API UKausDialogueOption : public UKausButtonBase, public IMounteaDialogueOptionInterface, public IMounteaFocusableWidgetInterface
{
	GENERATED_BODY()

public:
	UKausDialogueOption(const FObjectInitializer& ObjectInitializer);

public:

	virtual bool NativeSupportsKeyboardFocus() const override { return true; };
	virtual void NativeConstruct() override;
	virtual FReply NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent) override;

protected:

	// IMounteaDialogueOptionInterface implementation
	virtual	FDialogueOptionData	GetDialogueOptionData_Implementation() const	override;
	virtual	void	SetNewDialogueOptionData_Implementation(const FDialogueOptionData& NewData)	override;
	virtual	void	ResetDialogueOptionData_Implementation()	override;
	virtual	void	ProcessOptionSelected_Implementation()	override;
	virtual	void	InitializeDialogueOption_Implementation()	override;

	virtual	FOnDialogueOptionSelected& GetDialogueOptionSelectedHandle()	override
	{
		return OnDialogueOptionSelected;
	};

public:

	virtual EDialogueOptionState GetFocusState_Implementation() const override
	{
		return DialogueOptionState;
	};
	virtual void SetFocusState_Implementation(const bool IsSelected) override;

	virtual FOnMounteaFocusChanged& GetOnMounteaFocusChangedEventHandle() override
	{
		return OnOptionFocusChanged;
	};
	virtual FOnMounteaFocusClearRequested& GetOnMounteaFocusClearRequestedEventHandle() override
	{
		return OnMounteaFocusClearRequested;
	};

protected:

	UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Dialogue|Focus")
	void OnOptionFocused(UUserWidget* FocusedWidget, const bool IsFocused);

protected:

	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue|Data")
	EDialogueOptionState DialogueOptionState;

	/**
	 * Dialogue Option Data.
	 */
	UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Kaus|Dialogue", meta = (ExposeOnSpawn = true))
	FDialogueOptionData	DialogueOptionData;

	/**
	 * Event called upon selecting Dialogue Option.
	 */
	UPROPERTY(BlueprintReadOnly, BlueprintCallable, VisibleAnywhere, Category = "Kaus|Dialogue", meta = (CustomTag = "MounteaK2Delegate"))
	FOnDialogueOptionSelected	OnDialogueOptionSelected;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, VisibleAnywhere, Category = "Kaus|Dialogue", meta = (CustomTag = "MounteaK2Delegate"))
	FOnMounteaFocusChanged OnOptionFocusChanged;

	UPROPERTY(BlueprintAssignable, BlueprintCallable, VisibleAnywhere, Category = "Kaus|Dialogue", meta = (CustomTag = "MounteaK2Delegate"))
	FOnMounteaFocusClearRequested OnMounteaFocusClearRequested;
};