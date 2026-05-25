#include "KausDialogueOptionsContainer.h"
#include "Data/MounteaDialogueGraphDataTypes.h"
#include "Helpers/MounteaDialogueGraphHelpers.h"
#include "Helpers/MounteaDialogueHUDStatics.h"
#include "Interfaces/HUD/MounteaDialogueWBPInterface.h"
#include "Interfaces/UMG/MounteaDialogueOptionInterface.h"
#include "Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h"

UKausDialogueOptionsContainer::UKausDialogueOptionsContainer(const FObjectInitializer& ObjectInitializer) :
	Super(ObjectInitializer), FocusedOption(INDEX_NONE), LastFocusedOption(INDEX_NONE), bForcedFocusEnabled(true)
{
	SetIsFocusable(true);
}

void UKausDialogueOptionsContainer::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);

	if (bForcedFocusEnabled)
	{
		TArray<TObjectPtr<UUserWidget>> dialogueOptions;
		DialogueOptions.GenerateValueArray(dialogueOptions);

		TObjectPtr<UUserWidget> focusableWidget = nullptr;
		if (dialogueOptions.Num() > 0)
		{
			if (dialogueOptions.IsValidIndex(FocusedOption))
				focusableWidget = dialogueOptions[FocusedOption];
			else if (dialogueOptions.IsValidIndex(LastFocusedOption))
				focusableWidget = dialogueOptions[LastFocusedOption];
			else
				focusableWidget = nullptr;

			if (focusableWidget != nullptr)
			{
				IMounteaFocusableWidgetInterface::Execute_SetFocusState(focusableWidget, true);
			}
		}
	}
}

//UWidget* UKausDialogueOptionsContainer::NativeGetDesiredFocusTarget() const
//{
//	if (DialogueOptions.IsEmpty())
//	{
//		return Super::NativeGetDesiredFocusTarget();
//	}
//
//	TArray<TObjectPtr<UUserWidget>> OptionWidgets;
//	DialogueOptions.GenerateValueArray(OptionWidgets);
//
//	UWidget* TargetWidget = nullptr;
//
//	if (OptionWidgets.IsValidIndex(FocusedOption) && OptionWidgets[FocusedOption])
//	{
//		TargetWidget = Cast<UWidget>(OptionWidgets[FocusedOption]);
//	}
//	else if (OptionWidgets.IsValidIndex(LastFocusedOption) && OptionWidgets[LastFocusedOption])
//	{
//		TargetWidget = Cast<UWidget>(OptionWidgets[LastFocusedOption]);
//	}
//	else if (OptionWidgets.Num() > 0)
//	{
//		TargetWidget = Cast<UWidget>(OptionWidgets[0]);
//	}
//
//	if (TargetWidget)
//	{
//		return TargetWidget;
//	}
//
//	return Super::NativeGetDesiredFocusTarget();
//}

void UKausDialogueOptionsContainer::ClearChildOptionFocus(UUserWidget* Target)
{
	if (!IsValid(Target))
		return;

	if (Target && Target->Implements<UMounteaFocusableWidgetInterface>())
		IMounteaFocusableWidgetInterface::Execute_SetFocusState(Target, false);
}

void UKausDialogueOptionsContainer::ClearChildOptionsFocus()
{
	TArray<TObjectPtr<UUserWidget>> optionWidgets;
	DialogueOptions.GenerateValueArray(optionWidgets);

	for (const auto& optionWidget : optionWidgets)
	{
		ClearChildOptionFocus(optionWidget);
	}
}

void UKausDialogueOptionsContainer::ResetFocus(const UUserWidget* Requestor)
{
	ClearChildOptionsFocus();

	auto newFocus = UMounteaDialogueHUDStatics::GetOptionIndex(this, Requestor);
	if (newFocus == INDEX_NONE)
		return;

	Execute_SetFocusedOption(this, newFocus);
}

void UKausDialogueOptionsContainer::SetParentDialogueWidget_Implementation(UUserWidget* NewParentDialogueWidget)
{
	if (NewParentDialogueWidget != ParentDialogueWidget)
	{
		ParentDialogueWidget = NewParentDialogueWidget;
	}
}

UUserWidget* UKausDialogueOptionsContainer::GetParentDialogueWidget_Implementation() const
{
	return ParentDialogueWidget;
}

TSoftClassPtr<UUserWidget> UKausDialogueOptionsContainer::GetDialogueOptionClass_Implementation() const
{
	return DialogueOptionClass;
}

void UKausDialogueOptionsContainer::SetDialogueOptionClass_Implementation(const TSoftClassPtr<UUserWidget>& NewDialogueOptionClass)
{
	if (NewDialogueOptionClass.LoadSynchronous() != DialogueOptionClass.LoadSynchronous())
		DialogueOptionClass = NewDialogueOptionClass;
}

void UKausDialogueOptionsContainer::AddNewDialogueOption_Implementation(UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption)
{
	if (!NewDialogueOption)
	{
		UE_LOG(LogTemp, Error, TEXT("[UKausDialogueOptionsContainer] AddNewDialogueOption: Invalid Dialogue Option (Node)!"));
		return;
	}

	TObjectPtr<UUserWidget> dialogueOptionWidget =
		DialogueOptions.Contains(NewDialogueOption->GetNodeGUID())
		? DialogueOptions.FindRef(NewDialogueOption->GetNodeGUID())
		: TObjectPtr<UUserWidget>(CreateWidget<UUserWidget>(GetOwningPlayer(), DialogueOptionClass.LoadSynchronous()));


	if (dialogueOptionWidget)
	{
		TScriptInterface<IMounteaDialogueOptionInterface> dialogueOption = dialogueOptionWidget;
		if (dialogueOption.GetObject() && dialogueOption.GetInterface())
		{
			dialogueOption->GetDialogueOptionSelectedHandle().AddUniqueDynamic(this, &UKausDialogueOptionsContainer::ProcessOptionSelected);
			dialogueOption->Execute_SetNewDialogueOptionData(dialogueOptionWidget, FDialogueOptionData(UMounteaDialogueHUDStatics::GetDialogueNodeGuid(NewDialogueOption), UMounteaDialogueHUDStatics::GetDialogueNodeRow(NewDialogueOption)));
			dialogueOption->Execute_InitializeDialogueOption(dialogueOptionWidget);
		}
		TScriptInterface<IMounteaFocusableWidgetInterface> focusableDialogueOption = dialogueOptionWidget;
		{
			if (focusableDialogueOption.GetObject() && focusableDialogueOption.GetInterface())
			{
				focusableDialogueOption->GetOnMounteaFocusClearRequestedEventHandle().AddUniqueDynamic(this, &UKausDialogueOptionsContainer::ResetFocus);
			}
		}
	}
	else
	{
		UE_LOG(LogTemp, Error, TEXT("[UKausDialogueOptionsContainer] AddNewDialogueOption: Failed to create new dialogue option!"));
		return;
	}

	DialogueOptions.Add(UMounteaDialogueHUDStatics::GetDialogueNodeGuid(NewDialogueOption), dialogueOptionWidget);
}

void UKausDialogueOptionsContainer::AddNewDialogueOptions_Implementation(const TArray<UMounteaDialogueGraphNode_DialogueNodeBase*>& NewDialogueOptions)
{
	for (const auto& Itr : NewDialogueOptions)
	{
		Execute_AddNewDialogueOption(this, Itr);
	}
}

void UKausDialogueOptionsContainer::RemoveDialogueOption_Implementation(UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption)
{
	if (DirtyDialogueOption)
	{
		if (TObjectPtr<UUserWidget> dirtyOptionWidget = DialogueOptions.FindRef(UMounteaDialogueHUDStatics::GetDialogueNodeGuid(DirtyDialogueOption)))
		{
			TScriptInterface<IMounteaDialogueOptionInterface> dialogueOption = dirtyOptionWidget;
			if (dialogueOption.GetObject() && dialogueOption.GetInterface())
			{
				dialogueOption->GetDialogueOptionSelectedHandle().RemoveDynamic(this, &UKausDialogueOptionsContainer::ProcessOptionSelected);
				dialogueOption->Execute_ResetDialogueOptionData(dirtyOptionWidget);
			}
			TScriptInterface<IMounteaFocusableWidgetInterface> focusableDialogueOption = dirtyOptionWidget;
			{
				if (focusableDialogueOption.GetObject() && focusableDialogueOption.GetInterface())
				{
					focusableDialogueOption->GetOnMounteaFocusClearRequestedEventHandle().RemoveDynamic(this, &UKausDialogueOptionsContainer::ResetFocus);
				}

			}
		}

	}
	DialogueOptions.Remove(UMounteaDialogueHUDStatics::GetDialogueNodeGuid(DirtyDialogueOption));
}

void UKausDialogueOptionsContainer::RemoveDialogueOptions_Implementation(const TArray<UMounteaDialogueGraphNode_DialogueNodeBase*>& DirtyDialogueOptions)
{
	for (const auto& Itr : DirtyDialogueOptions)
	{
		Execute_RemoveDialogueOption(this, Itr);
	}
}

void UKausDialogueOptionsContainer::ClearDialogueOptions_Implementation()
{
	for (const auto& Itr : DialogueOptions)
	{
		TScriptInterface<IMounteaDialogueOptionInterface> dialogueOption = Itr.Value;

		if (dialogueOption.GetObject() && dialogueOption.GetInterface())
		{
			dialogueOption->GetDialogueOptionSelectedHandle().RemoveDynamic(this, &UKausDialogueOptionsContainer::ProcessOptionSelected);
			dialogueOption->Execute_ResetDialogueOptionData(Itr.Value);
		}
	}

	DialogueOptions.Empty();
}

void UKausDialogueOptionsContainer::ProcessOptionSelected_Implementation(const FGuid& SelectedOption, UUserWidget* CallingWidget)
{
	if (ParentDialogueWidget)
	{
		TScriptInterface<IMounteaDialogueWBPInterface> dialogueInterface = ParentDialogueWidget;
		dialogueInterface->Execute_OnOptionSelected(ParentDialogueWidget, SelectedOption);
	}
}

TArray<UUserWidget*> UKausDialogueOptionsContainer::GetDialogueOptions_Implementation() const
{
	TArray<TObjectPtr<UUserWidget>> dialogueOptions;
	for (const auto dialogueOption : DialogueOptions)
		dialogueOptions.Add(dialogueOption.Value);

	return dialogueOptions;
}

int32 UKausDialogueOptionsContainer::GetFocusedOptionIndex_Implementation() const
{
	return FocusedOption;
}

void UKausDialogueOptionsContainer::SetFocusedOption_Implementation(const int32 NewFocusedOption)
{
	if (NewFocusedOption == FocusedOption)
		return;

	LastFocusedOption = FocusedOption;

	TArray<TObjectPtr<UUserWidget>> optionWidgets;
	DialogueOptions.GenerateValueArray(optionWidgets);

	if (!optionWidgets.IsValidIndex(NewFocusedOption))
		return;

	UUserWidget* foundWidget = optionWidgets[NewFocusedOption].Get();
	if (!IsValid(foundWidget))
		return;

	FocusedOption = NewFocusedOption;

	ClearChildOptionsFocus();

	if (foundWidget->Implements<UMounteaFocusableWidgetInterface>())
		IMounteaFocusableWidgetInterface::Execute_SetFocusState(foundWidget, true);
}

void UKausDialogueOptionsContainer::ToggleForcedFocus_Implementation(const bool bEnable)
{
	bForcedFocusEnabled = bEnable;
}
