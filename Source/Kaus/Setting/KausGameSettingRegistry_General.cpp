// Project Kaus - General Settings Registry
// Subtitles ON/OFF, Subtitle Text Size, Display Speaker Name
// Language entry kept commented out for future activation when localization is ready.

#include "KausGameSettingRegistry.h"

#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "KausSettingsLocal.h"
#include "KausSettingsShared.h"
#include "Player/KausLocalPlayer.h"
#include "SubtitleDisplayOptions.h"

#define LOCTEXT_NAMESPACE "Kaus"

UGameSettingCollection* UKausGameSettingRegistry::InitializeGeneralSettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("GeneralCollection"));
	Screen->SetDisplayName(LOCTEXT("GeneralCollection_Name", "General"));
	Screen->Initialize(InLocalPlayer);

	// Subtitles
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* SubtitleCollection = NewObject<UGameSettingCollection>();
		SubtitleCollection->SetDevName(TEXT("SubtitlesCollection"));
		SubtitleCollection->SetDisplayName(LOCTEXT("SubtitlesCollection_Name", "Subtitles"));
		Screen->AddSetting(SubtitleCollection);

		//----------------------------------------------------------------------------------
		// Subtitles ON/OFF
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("Subtitles"));
			Setting->SetDisplayName(LOCTEXT("Subtitles_Name", "Subtitles"));
			Setting->SetDescriptionRichText(LOCTEXT("Subtitles_Description", "Toggles subtitles for dialogue and narration on or off."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesEnabled));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetSubtitlesEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			SubtitleCollection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		// Subtitle Text Size (enum -> Discrete options)
		{
			UGameSettingValueDiscreteDynamic_Enum* Setting = NewObject<UGameSettingValueDiscreteDynamic_Enum>();
			Setting->SetDevName(TEXT("SubtitleTextSize"));
			Setting->SetDisplayName(LOCTEXT("SubtitleTextSize_Name", "Text Size"));
			Setting->SetDescriptionRichText(LOCTEXT("SubtitleTextSize_Description", "Adjusts the size of subtitle text."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetSubtitlesTextSize));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetSubtitlesTextSize));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetSubtitlesTextSize());

			Setting->AddEnumOption(ESubtitleDisplayTextSize::ExtraSmall, LOCTEXT("ESubtitleTextSize_ExtraSmall", "Extra Small"));
			Setting->AddEnumOption(ESubtitleDisplayTextSize::Small, LOCTEXT("ESubtitleTextSize_Small", "Small"));
			Setting->AddEnumOption(ESubtitleDisplayTextSize::Medium, LOCTEXT("ESubtitleTextSize_Medium", "Medium"));
			Setting->AddEnumOption(ESubtitleDisplayTextSize::Large, LOCTEXT("ESubtitleTextSize_Large", "Large"));
			Setting->AddEnumOption(ESubtitleDisplayTextSize::ExtraLarge, LOCTEXT("ESubtitleTextSize_ExtraLarge", "Extra Large"));

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			SubtitleCollection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		// Display Speaker Name ON/OFF
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("DisplaySpeakerName"));
			Setting->SetDisplayName(LOCTEXT("DisplaySpeakerName_Name", "Display Speaker Name"));
			Setting->SetDescriptionRichText(LOCTEXT("DisplaySpeakerName_Description", "Show the name of the character who is currently speaking."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetDisplaySpeakerNameEnabled));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetDisplaySpeakerNameEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetDisplaySpeakerNameEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			SubtitleCollection->AddSetting(Setting);
		}
	}

	// Language
	////////////////////////////////////////////////////////////////////////////////////
	// NOTE: Language picker is intentionally deferred. Lyra ships UKausSettingValueDiscrete_Language,
	// a dedicated UGameSettingValueDiscrete subclass that enumerates available cultures via
	// FInternationalization. It needs to be ported separately when localization is added to Kaus.
	// See "Phase G" in the Settings Analysis document.

	return Screen;
}

#undef LOCTEXT_NAMESPACE
