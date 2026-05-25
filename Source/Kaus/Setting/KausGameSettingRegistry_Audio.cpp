#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenCondition.h"
#include "EditCondition/WhenPlatformHasTrait.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingCollection.h"
#include "GameSettingValueScalarDynamic.h"
#include "KausGameSettingRegistry.h"
#include "KausSettingsLocal.h"
#include "KausSettingsShared.h"
#include "NativeGameplayTags.h"
#include "Player/KausLocalPlayer.h"

class ULocalPlayer;

#define LOCTEXT_NAMESPACE "Kaus"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_SupportsChangingAudioOutputDevice, "Platform.Trait.SupportsChangingAudioOutputDevice");
UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_Platform_Trait_SupportsBackgroundAudio, "Platform.Trait.SupportsBackgroundAudio");

UGameSettingCollection* UKausGameSettingRegistry::InitializeAudioSettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("SoundCollection"));
	Screen->SetDisplayName(LOCTEXT("SoundCollection_Name", "Sound"));
	Screen->Initialize(InLocalPlayer);

	// Volume
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* Volume = NewObject<UGameSettingCollection>();
		Volume->SetDevName(TEXT("VolumeCollection"));
		Volume->SetDisplayName(LOCTEXT("VolumeCollection_Name", "Volume"));
		Screen->AddSetting(Volume);

		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("OverallVolume"));
			Setting->SetDisplayName(LOCTEXT("OverallVolume_Name", "Overall"));
			Setting->SetDescriptionRichText(LOCTEXT("OverallVolume_Description", "Adjusts the volume of everything."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetOverallVolume));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetOverallVolume));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->GetOverallVolume());
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Volume->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("MusicVolume"));
			Setting->SetDisplayName(LOCTEXT("MusicVolume_Name", "Music"));
			Setting->SetDescriptionRichText(LOCTEXT("MusicVolume_Description", "Adjusts the volume of music."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetMusicVolume));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetMusicVolume));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->GetMusicVolume());
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Volume->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("SoundEffectsVolume"));
			Setting->SetDisplayName(LOCTEXT("SoundEffectsVolume_Name", "Sound Effects"));
			Setting->SetDescriptionRichText(LOCTEXT("SoundEffectsVolume_Description", "Adjusts the volume of sound effects."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetSoundFXVolume));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetSoundFXVolume));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->GetSoundFXVolume());
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Volume->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("DialogueVolume"));
			Setting->SetDisplayName(LOCTEXT("DialogueVolume_Name", "Dialogue"));
			Setting->SetDescriptionRichText(LOCTEXT("DialogueVolume_Description", "Adjusts the volume of dialogue for game characters and voice overs."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDialogueVolume));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDialogueVolume));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->GetDialogueVolume());
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Volume->AddSetting(Setting);
		}
	}


	return Screen;
}

#undef LOCTEXT_NAMESPACE
