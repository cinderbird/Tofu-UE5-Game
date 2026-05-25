// Project Kaus - Gameplay Settings Registry
// Tutorials Enabled, Camera Invert Vertical, Mouse Sensitivity

#include "KausGameSettingRegistry.h"

#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "GameSettingValueScalarDynamic.h"
#include "KausSettingsLocal.h"
#include "KausSettingsShared.h"
#include "Player/KausLocalPlayer.h"

#define LOCTEXT_NAMESPACE "Kaus"

UGameSettingCollection* UKausGameSettingRegistry::InitializeGameplaySettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("GameplayCollection"));
	Screen->SetDisplayName(LOCTEXT("GameplayCollection_Name", "Gameplay"));
	Screen->Initialize(InLocalPlayer);

	// Game
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* GameCollection = NewObject<UGameSettingCollection>();
		GameCollection->SetDevName(TEXT("GameCollection"));
		GameCollection->SetDisplayName(LOCTEXT("GameCollection_Name", "Game"));
		Screen->AddSetting(GameCollection);

		//----------------------------------------------------------------------------------
		// Tutorials Enabled
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("Tutorials"));
			Setting->SetDisplayName(LOCTEXT("Tutorials_Name", "Tutorials"));
			Setting->SetDescriptionRichText(LOCTEXT("Tutorials_Description", "Enables in-game tutorial prompts."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetTurotialsEnabled));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetTurotialsEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetTurotialsEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			GameCollection->AddSetting(Setting);
		}
	}

	// Camera
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* CameraCollection = NewObject<UGameSettingCollection>();
		CameraCollection->SetDevName(TEXT("Gameplay_CameraCollection"));
		CameraCollection->SetDisplayName(LOCTEXT("Gameplay_CameraCollection_Name", "Camera"));
		Screen->AddSetting(CameraCollection);

		//----------------------------------------------------------------------------------
		// Camera Invert Vertical
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("CameraInvertVertical"));
			Setting->SetDisplayName(LOCTEXT("CameraInvertVertical_Name", "Invert Vertical Look"));
			Setting->SetDescriptionRichText(LOCTEXT("CameraInvertVertical_Description", "Invert the camera's vertical look axis."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetCameraInvertVerticalEnabled));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetCameraInvertVerticalEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetCameraInvertVerticalEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			CameraCollection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		// Mouse Sensitivity (uint8 0..100, treated as a slider)
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("MouseSensitivity"));
			Setting->SetDisplayName(LOCTEXT("MouseSensitivity_Name", "Mouse Sensitivity"));
			Setting->SetDescriptionRichText(LOCTEXT("MouseSensitivity_Description", "Adjusts how sensitive the camera is to mouse movement."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetMouseSensitivity));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetMouseSensitivity));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetMouseSensitivity());

			Setting->SetSourceRangeAndStep(TRange<double>(0, 100), 1);
			Setting->SetMinimumLimit(1);
			Setting->SetMaximumLimit(100);
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::SourceAsInteger);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			CameraCollection->AddSetting(Setting);
		}
	}

	return Screen;
}

#undef LOCTEXT_NAMESPACE
