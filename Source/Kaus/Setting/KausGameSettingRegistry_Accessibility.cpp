// Project Kaus - Accessibility Settings Registry
// Camera Shake ON/OFF, Camera Movement (bob) ON/OFF

#include "KausGameSettingRegistry.h"

#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "KausSettingsShared.h"
#include "Player/KausLocalPlayer.h"

#define LOCTEXT_NAMESPACE "Kaus"

UGameSettingCollection* UKausGameSettingRegistry::InitializeAccessibilitySettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("AccessibilityCollection"));
	Screen->SetDisplayName(LOCTEXT("AccessibilityCollection_Name", "Accessibility"));
	Screen->Initialize(InLocalPlayer);

	// Camera (motion sickness mitigation)
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* Accessibility_CameraCollection = NewObject<UGameSettingCollection>();
		Accessibility_CameraCollection->SetDevName(TEXT("Accessibility_CameraSubCollection"));
		Accessibility_CameraCollection->SetDisplayName(LOCTEXT("CameraSubCollection", "Camera"));
		Screen->AddSetting(Accessibility_CameraCollection);

		//----------------------------------------------------------------------------------
		// Camera Shake
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("CameraShake"));
			Setting->SetDisplayName(LOCTEXT("CameraShake_Name", "Camera Shake"));
			Setting->SetDescriptionRichText(LOCTEXT("CameraShake_Description", "Enables camera shake effects. Disable to reduce motion sickness."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetEnabledCameraShake));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetEnabledCameraShake));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetEnabledCameraShake());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Accessibility_CameraCollection->AddSetting(Setting);
		}
		//----------------------------------------------------------------------------------
		// Camera Movement (head bob etc.)
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("CameraMovement"));
			Setting->SetDisplayName(LOCTEXT("CameraMovement_Name", "Camera Movement"));
			Setting->SetDescriptionRichText(LOCTEXT("CameraMovement_Description", "Enables camera movement effects such as head bob. Disable to reduce motion sickness."));

			Setting->SetDynamicGetter(GET_SHARED_SETTINGS_FUNCTION_PATH(GetEnabledCameraMovement));
			Setting->SetDynamicSetter(GET_SHARED_SETTINGS_FUNCTION_PATH(SetEnabledCameraMovement));
			Setting->SetDefaultValue(GetDefault<UKausSettingsShared>()->GetEnabledCameraMovement());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			Accessibility_CameraCollection->AddSetting(Setting);
		}
	}

	// Battle / Image sub-sections are intentionally left as empty group containers
	// for future expansion (QTE auto, color blind mode, HUD scale).
	// See "Phase D/E/F" in the Settings Analysis document.

	return Screen;
}

#undef LOCTEXT_NAMESPACE
