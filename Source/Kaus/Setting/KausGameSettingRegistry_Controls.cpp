// Project Kaus - Controls Settings Registry
// Mouse Sensitivity, Camera Invert Vertical, Keybinds (placeholder)

#include "KausGameSettingRegistry.h"

#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "GameSettingValueScalarDynamic.h"
#include "KausSettingsShared.h"
#include "Player/KausLocalPlayer.h"

#define LOCTEXT_NAMESPACE "Kaus"

UGameSettingCollection* UKausGameSettingRegistry::InitializeControlsSettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("ControlsCollection"));
	Screen->SetDisplayName(LOCTEXT("ControlsCollection_Name", "Controls"));
	Screen->Initialize(InLocalPlayer);

	// Mouse & Camera (Lyra-style: duplicates of Gameplay sliders so users
	// can find them either in "Gameplay > Camera" or "Controls".
	// DevNames are suffixed with _Controls to keep registry uniqueness.)
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* MouseAndCameraCollection = NewObject<UGameSettingCollection>();
		MouseAndCameraCollection->SetDevName(TEXT("Controls_MouseAndCameraCollection"));
		MouseAndCameraCollection->SetDisplayName(LOCTEXT("Controls_MouseAndCameraCollection_Name", "Mouse & Camera"));
		Screen->AddSetting(MouseAndCameraCollection);

		//----------------------------------------------------------------------------------
		// Mouse Sensitivity
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("MouseSensitivity_Controls"));
			Setting->SetDisplayName(LOCTEXT("MouseSensitivity_Controls_Name", "Mouse Sensitivity"));
			Setting->SetDescriptionRichText(LOCTEXT("MouseSensitivity_Controls_Description", "Adjusts how sensitive the camera is to mouse movement."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetMouseSensitivity));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetMouseSensitivity));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetMouseSensitivity());

			Setting->SetSourceRangeAndStep(TRange<double>(0, 100), 1);
			Setting->SetMinimumLimit(1);
			Setting->SetMaximumLimit(100);
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::SourceAsInteger);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			MouseAndCameraCollection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		// Camera Invert Vertical
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("CameraInvertVertical_Controls"));
			Setting->SetDisplayName(LOCTEXT("CameraInvertVertical_Controls_Name", "Invert Vertical Look"));
			Setting->SetDescriptionRichText(LOCTEXT("CameraInvertVertical_Controls_Description", "Invert the camera's vertical look axis."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetCameraInvertVerticalEnabled));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetCameraInvertVerticalEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetCameraInvertVerticalEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			MouseAndCameraCollection->AddSetting(Setting);
		}
	}

	// Keybinds
	////////////////////////////////////////////////////////////////////////////////////
	// Empty container kept as a navigation anchor. Lyra populates this dynamically by
	// reflecting Enhanced Input mappings via UEnhancedActionKeyMapping. Wiring that up
	// belongs in Step 3 once the Kaus input config is finalized.
	{
		UGameSettingCollection* Controls_KeybindsCollection = NewObject<UGameSettingCollection>();
		Controls_KeybindsCollection->SetDevName(TEXT("Controls_KeybindsCollection"));
		Controls_KeybindsCollection->SetDisplayName(LOCTEXT("KeybindsCollection", "Keybinds"));
		Screen->AddSetting(Controls_KeybindsCollection);
	}

	return Screen;
}

#undef LOCTEXT_NAMESPACE
