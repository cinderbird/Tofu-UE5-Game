#include "KausGameSettingRegistry.h"
#include "GameSettingCollection.h"
#include "KausSettingsLocal.h"
#include "KausSettingsShared.h"
#include "Player/KausLocalPlayer.h"

#include UE_INLINE_GENERATED_CPP_BY_NAME(KausGameSettingRegistry)

DEFINE_LOG_CATEGORY(LogKausGameSettingRegistry);

#define LOCTEXT_NAMESPACE "Kaus"

//--------------------------------------
// UKausGameSettingRegistry
//--------------------------------------

UKausGameSettingRegistry::UKausGameSettingRegistry()
{
}

UKausGameSettingRegistry* UKausGameSettingRegistry::Get(UKausLocalPlayer* InLocalPlayer)
{
	UKausGameSettingRegistry* Registry = FindObject<UKausGameSettingRegistry>(InLocalPlayer, TEXT("KausGameSettingRegistry"), true);
	if (Registry == nullptr)
	{
		Registry = NewObject<UKausGameSettingRegistry>(InLocalPlayer, TEXT("KausGameSettingRegistry"));
		Registry->Initialize(InLocalPlayer);
	}

	return Registry;
}

bool UKausGameSettingRegistry::IsFinishedInitializing() const
{
	if (Super::IsFinishedInitializing())
	{
		if (UKausLocalPlayer* LocalPlayer = Cast<UKausLocalPlayer>(OwningLocalPlayer))
		{
			if (LocalPlayer->GetSharedSettings() == nullptr)
			{
				return false;
			}
		}

		return true;
	}

	return false;
}

UGameSettingCollection* UKausGameSettingRegistry::InitializeMouseAndKeyboardSettings(UKausLocalPlayer* InLocalPlayer)
{
	return nullptr;
}

UGameSettingCollection* UKausGameSettingRegistry::InitializeGamepadSettings(UKausLocalPlayer* InLocalPlayer)
{
	return nullptr;
}

void UKausGameSettingRegistry::OnInitialize(ULocalPlayer* InLocalPlayer)
{
	UKausLocalPlayer* KausLocalPlayer = Cast<UKausLocalPlayer>(InLocalPlayer);

	GeneralSettings = InitializeGeneralSettings(KausLocalPlayer);
	RegisterSetting(GeneralSettings);

	GameplaySettings = InitializeGameplaySettings(KausLocalPlayer);
	RegisterSetting(GameplaySettings);

	GraphicsSettings = InitializeGraphicsSettings(KausLocalPlayer);
	RegisterSetting(GraphicsSettings);

	AudioSettings = InitializeAudioSettings(KausLocalPlayer);
	RegisterSetting(AudioSettings);
	
	AccessibilitySettings = InitializeAccessibilitySettings(KausLocalPlayer);
	RegisterSetting(AccessibilitySettings);

	ControlsSettings = InitializeControlsSettings(KausLocalPlayer);
	RegisterSetting(ControlsSettings);
	
	//Control Setting's SubSetting Option
	//MouseAndKeyboardSettings = InitializeMouseAndKeyboardSettings(KausLocalPlayer);
	//RegisterSetting(MouseAndKeyboardSettings);
	//
	//GamepadSettings = InitializeGamepadSettings(KausLocalPlayer);
	//RegisterSetting(GamepadSettings);
}

void UKausGameSettingRegistry::SaveChanges()
{
	Super::SaveChanges();
	
	if (UKausLocalPlayer* LocalPlayer = Cast<UKausLocalPlayer>(OwningLocalPlayer))
	{
		// Game user settings need to be applied to handle things like resolution, this saves indirectly
		LocalPlayer->GetLocalSettings()->ApplySettings(false);
		
		LocalPlayer->GetSharedSettings()->ApplySettings();
		LocalPlayer->GetSharedSettings()->SaveSettings();
	}
}

#undef LOCTEXT_NAMESPACE

