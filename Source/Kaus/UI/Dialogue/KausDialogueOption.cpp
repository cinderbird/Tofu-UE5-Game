#include "KausDialogueOption.h"

UKausDialogueOption::UKausDialogueOption(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer), DialogueOptionState(EDialogueOptionState::EDOS_Unfocused)
{
	SetIsFocusable(true);
}

void UKausDialogueOption::NativeConstruct()
{
	Super::NativeConstruct();

	OnOptionFocusChanged.AddUniqueDynamic(this, &UKausDialogueOption::OnOptionFocused);
}

FReply UKausDialogueOption::NativeOnFocusReceived(const FGeometry& InGeometry, const FFocusEvent& InFocusEvent)
{
	Execute_SetFocusState(this, true);
	return Super::NativeOnFocusReceived(InGeometry, InFocusEvent);
}

FDialogueOptionData UKausDialogueOption::GetDialogueOptionData_Implementation() const
{
	return DialogueOptionData;
}

void UKausDialogueOption::SetNewDialogueOptionData_Implementation(const FDialogueOptionData& NewData)
{
	if (NewData != DialogueOptionData)
	{
		DialogueOptionData = NewData;
		Execute_InitializeDialogueOption(this);
	}
}

void UKausDialogueOption::ResetDialogueOptionData_Implementation()
{
	DialogueOptionData.ResetOption();
}

void UKausDialogueOption::ProcessOptionSelected_Implementation()
{
	OnDialogueOptionSelected.Broadcast(DialogueOptionData.OptionGuid, this);
}

void UKausDialogueOption::InitializeDialogueOption_Implementation()
{
	// ...
}

void UKausDialogueOption::SetFocusState_Implementation(const bool IsSelected)
{
	DialogueOptionState = IsSelected ? EDialogueOptionState::EDOS_Focused : EDialogueOptionState::EDOS_Unfocused;

	OnOptionFocusChanged.Broadcast(this, IsSelected);
}
