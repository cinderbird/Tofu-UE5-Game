#include "UI/GameSetting/KausSettingScreen.h"
#include "Input/CommonUIInputTypes.h"
#include "Setting/KausGameSettingRegistry.h"
#include "Player/KausLocalPlayer.h"

#include "GameSetting.h"
#include "GameSettingValue.h"
#include "GameSettingFilterState.h"
#include "GameSettingRegistry.h"

void UKausSettingScreen::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	BackHandle = RegisterUIActionBinding(FBindUIActionArgs(BackInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleBackAction)));
	ApplyHandle = RegisterUIActionBinding(FBindUIActionArgs(ApplyInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleApplyAction)));
	CancelChangesHandle = RegisterUIActionBinding(FBindUIActionArgs(CancelChangesInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleCancelChangesAction)));
	ResetHandle = RegisterUIActionBinding(FBindUIActionArgs(ResetInputActionData, true, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleResetAction)));
}

UGameSettingRegistry* UKausSettingScreen::CreateRegistry()
{
	UKausGameSettingRegistry* NewRegistry = NewObject<UKausGameSettingRegistry>();
	
	if (UKausLocalPlayer* LocalPlayer = CastChecked<UKausLocalPlayer>(GetOwningLocalPlayer()))
	{
		NewRegistry->Initialize(LocalPlayer);
	}
	
	return NewRegistry;
}

void UKausSettingScreen::HandleBackAction()
{
	if (AttemptToPopNavigation())
	{
		return;
	}

	ApplyChanges();

	DeactivateWidget();
}

void UKausSettingScreen::HandleApplyAction()
{
	ApplyChanges();
}

void UKausSettingScreen::HandleCancelChangesAction()
{
	CancelChanges();
}

void UKausSettingScreen::HandleResetAction()
{
	ResetVisibleSettingsToDefault();
}

void UKausSettingScreen::ResetVisibleSettingsToDefault()
{
	UGameSettingRegistry* SettingRegistry = GetRegistry<UGameSettingRegistry>();
	if (!SettingRegistry)
	{
		return;
	}

	// Gather all resettable, non-hidden settings the registry currently holds.
	// We deliberately include nested pages so that pressing Reset from the top level
	// also resets sub-pages (e.g. Keybinds). If you want page-scoped reset later,
	// the panel's filter state can be inspected via BP and a filtered list passed in.
	FGameSettingFilterState FilterState;
	FilterState.bIncludeDisabled = false;
	FilterState.bIncludeHidden = false;
	FilterState.bIncludeResetable = true;
	FilterState.bIncludeNestedPages = true;

	TArray<UGameSetting*> Candidates;
	SettingRegistry->GetSettingsForFilter(FilterState, Candidates);

	for (UGameSetting* Setting : Candidates)
	{
		if (UGameSettingValue* ValueSetting = Cast<UGameSettingValue>(Setting))
		{
			ValueSetting->ResetToDefault();
		}
	}
}

void UKausSettingScreen::OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty)
{
	if (bSettingsDirty)
	{
		if (!GetActionBindings().Contains(ApplyHandle))
		{
			AddActionBinding(ApplyHandle);
		}
		if (!GetActionBindings().Contains(CancelChangesHandle))
		{
			AddActionBinding(CancelChangesHandle);
		}
	}
	//else
	//{
	//	RemoveActionBinding(ApplyHandle);
	//	RemoveActionBinding(CancelChangesHandle);
	//}
}
