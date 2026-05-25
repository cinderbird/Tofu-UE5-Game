#include "KausSettingsShared.h"
#include "Framework/Application/SlateApplication.h"
#include "Internationalization/Culture.h"
#include "Kismet/GameplayStatics.h"
#include "Misc/App.h"
#include "Misc/ConfigCacheIni.h"
#include "Player/KausLocalPlayer.h"
#include "Rendering/SlateRenderer.h"
#include "SubtitleDisplaySubsystem.h"
#include "EnhancedInputSubsystems.h"
#include "UserSettings/EnhancedInputUserSettings.h"

static FString SHARED_SETTINGS_SLOT_NAME = TEXT("SharedGameSettings");

namespace KausSettingsSharedCVars
{
	static float DefaultGamepadLeftStickInnerDeadZone = 0.25f;
	static FAutoConsoleVariableRef CVarGamepadLeftStickInnerDeadZone(
		TEXT("gpad.DefaultLeftStickInnerDeadZone"),
		DefaultGamepadLeftStickInnerDeadZone,
		TEXT("Gamepad left stick inner deadzone")
	);

	static float DefaultGamepadRightStickInnerDeadZone = 0.25f;
	static FAutoConsoleVariableRef CVarGamepadRightStickInnerDeadZone(
		TEXT("gpad.DefaultRightStickInnerDeadZone"),
		DefaultGamepadRightStickInnerDeadZone,
		TEXT("Gamepad right stick inner deadzone")
	);
}

UKausSettingsShared::UKausSettingsShared()
{
	FInternationalization::Get().OnCultureChanged().AddUObject(this, &ThisClass::OnCultureChanged);
}

int32 UKausSettingsShared::GetLatestDataVersion() const
{
	// 0 = before subclassing ULocalPlayerSaveGame
	// 1 = first proper version
	return 1;
}

UKausSettingsShared* UKausSettingsShared::CreateTemporarySettings(const UKausLocalPlayer* LocalPlayer)
{
	// This is not loaded from disk but should be set up to save
	UKausSettingsShared* SharedSettings = Cast<UKausSettingsShared>(CreateNewSaveGameForLocalPlayer(UKausSettingsShared::StaticClass(), LocalPlayer, SHARED_SETTINGS_SLOT_NAME));

	SharedSettings->ApplySettings();

	return SharedSettings;
}

UKausSettingsShared* UKausSettingsShared::LoadOrCreateSettings(const UKausLocalPlayer* LocalPlayer)
{
	// This will stall the main thread while it loads
	UKausSettingsShared* SharedSettings = Cast<UKausSettingsShared>(LoadOrCreateSaveGameForLocalPlayer(UKausSettingsShared::StaticClass(), LocalPlayer, SHARED_SETTINGS_SLOT_NAME));

	SharedSettings->ApplySettings();

	return SharedSettings;
}

bool UKausSettingsShared::AsyncLoadOrCreateSettings(const UKausLocalPlayer* LocalPlayer, FOnSettingsLoadedEvent Delegate)
{
	FOnLocalPlayerSaveGameLoadedNative Lambda = FOnLocalPlayerSaveGameLoadedNative::CreateLambda([Delegate]
	(ULocalPlayerSaveGame* LoadedSave)
		{
			UKausSettingsShared* LoadedSettings = CastChecked<UKausSettingsShared>(LoadedSave);

			LoadedSettings->ApplySettings();

			Delegate.ExecuteIfBound(LoadedSettings);
		});

	return ULocalPlayerSaveGame::AsyncLoadOrCreateSaveGameForLocalPlayer(UKausSettingsShared::StaticClass(), LocalPlayer, SHARED_SETTINGS_SLOT_NAME, Lambda);
}

void UKausSettingsShared::SaveSettings()
{
	// Schedule an async save because it's okay if it fails
	AsyncSaveGameToSlotForLocalPlayer();

	// TODO_BH: Move this to the serialize function instead with a bumped version number
	if (UEnhancedInputLocalPlayerSubsystem* System = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(OwningPlayer))
	{
		if (UEnhancedInputUserSettings* InputSettings = System->GetUserSettings())
		{
			InputSettings->AsyncSaveSettings();
		}
	}
}

void UKausSettingsShared::ApplySettings()
{
	//General
	ApplySubtitleOptions();
	ApplyCultureSettings();
	
	//Gameplay
	ApplyGameplayGameOption();
	ApplyGameplayControllerOption();
	ApplyGameplayCameraOption();

	//Accessibility
	ApplyAccessibilityCameraOptions();
	ApplyAccessibilityBattleOptions();
	ApplyAccessibilityImageOptions();

	if (UEnhancedInputLocalPlayerSubsystem* System = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(OwningPlayer))
	{
		if (UEnhancedInputUserSettings* InputSettings = System->GetUserSettings())
		{
			InputSettings->ApplySettings();
		}
	}
}

bool UKausSettingsShared::GetSubtitlesEnabled() const
{
	return bEnableSubtitles;
}

void UKausSettingsShared::SetSubtitlesEnabled(bool Value)
{
	ChangeValueAndDirty(bEnableSubtitles, Value);
}

//////////////////////////////////////////////////////////////////////
// Culture / Language Implementation
//////////////////////////////////////////////////////////////////////

void UKausSettingsShared::ApplyCultureSettings()
{
	FInternationalization& I18N = FInternationalization::Get();

	if (bResetTextCultureToDefault)
	{
		const FCulturePtr SystemDefaultCulture = I18N.GetDefaultCulture();
		check(SystemDefaultCulture.IsValid());

		const FString CultureToApply = SystemDefaultCulture->GetName();
		if (I18N.SetCurrentLanguage(CultureToApply))
		{
			GConfig->RemoveKey(TEXT("Internationalization"), TEXT("Language"), GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
		bResetTextCultureToDefault = false;
	}
	else if (!PendingTextCulture.IsEmpty())
	{
		const FString CultureToApply = PendingTextCulture;
		if (I18N.SetCurrentLanguage(CultureToApply))
		{
			GConfig->SetString(TEXT("Internationalization"), TEXT("Language"), *CultureToApply, GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
	}

	if (bResetAudioCultureToDefault)
	{
		const FCulturePtr SystemDefaultCulture = I18N.GetDefaultCulture();
		check(SystemDefaultCulture.IsValid());

		const FString CultureToApply = SystemDefaultCulture->GetName();
		if (I18N.SetCurrentAssetGroupCulture(TEXT("Audio"), CultureToApply))
		{
			GConfig->RemoveKey(TEXT("Internationalization"), TEXT("AudioCulture"), GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
		bResetAudioCultureToDefault = false;
	}
	else if (!PendingAudioCulture.IsEmpty())
	{
		const FString CultureToApply = PendingAudioCulture;
		if (I18N.SetCurrentAssetGroupCulture(TEXT("Audio"), CultureToApply))
		{
			GConfig->SetString(TEXT("Internationalization"), TEXT("AudioCulture"), *CultureToApply, GGameUserSettingsIni);
			GConfig->Flush(false, GGameUserSettingsIni);
		}
	}

	ClearPendingCultures();
}

void UKausSettingsShared::ResetCultureToCurrentSettings()
{
	ClearPendingCultures();
	bResetTextCultureToDefault = false;
	bResetAudioCultureToDefault = false;
}

const FString& UKausSettingsShared::GetPendingTextCulture() const
{
	return PendingTextCulture;
}

void UKausSettingsShared::SetPendingTextCulture(const FString& NewCulture)
{
	PendingTextCulture = NewCulture;
	bResetTextCultureToDefault = false;
	bIsDirty = true;
}

const FString& UKausSettingsShared::GetPendingAudioCulture() const
{
	return PendingAudioCulture;
}

void UKausSettingsShared::SetPendingAudioCulture(const FString& NewCulture)
{
	PendingAudioCulture = NewCulture;
	bResetAudioCultureToDefault = false;
	bIsDirty = true;
}

void UKausSettingsShared::OnCultureChanged()
{
	ClearPendingCultures();
	bResetTextCultureToDefault = false;
	bResetAudioCultureToDefault = false;
}

void UKausSettingsShared::ClearPendingCultures()
{
	PendingTextCulture.Reset();
	PendingAudioCulture.Reset();
}

bool UKausSettingsShared::IsUsingDefaultTextCulture() const
{
	FString Culture;
	GConfig->GetString(TEXT("Internationalization"), TEXT("Language"), Culture, GGameUserSettingsIni);
	return Culture.IsEmpty();
}

bool UKausSettingsShared::IsUsingDefaultAudioCulture() const
{
	FString Culture;
	GConfig->GetString(TEXT("Internationalization"), TEXT("AudioCulture"), Culture, GGameUserSettingsIni);
	return Culture.IsEmpty();
}

void UKausSettingsShared::ResetTextCultureToDefault()
{
	PendingTextCulture.Reset();
	bResetTextCultureToDefault = true;
	bIsDirty = true;
}

void UKausSettingsShared::ResetAudioCultureToDefault()
{
	PendingAudioCulture.Reset();
	bResetAudioCultureToDefault = true;
	bIsDirty = true;
}

bool UKausSettingsShared::ShouldResetTextCultureToDefault() const
{
	return bResetTextCultureToDefault;
}

bool UKausSettingsShared::ShouldResetAudioCultureToDefault() const
{
	return bResetAudioCultureToDefault;
}

//////////////////////////////////////////////////////////////////////

ESubtitleDisplayTextSize UKausSettingsShared::GetSubtitlesTextSize() const
{
	return SubtitleTextSize;
}

void UKausSettingsShared::SetSubtitlesTextSize(ESubtitleDisplayTextSize Value)
{
	ChangeValueAndDirty(SubtitleTextSize, Value);
	ApplySubtitleOptions();
}

ESubtitleDisplayTextColor UKausSettingsShared::GetSubtitlesTextColor() const
{
	return SubtitleTextColor;
}

void UKausSettingsShared::SetSubtitlesTextColor(ESubtitleDisplayTextColor Value)
{
	ChangeValueAndDirty(SubtitleTextColor, Value);
	ApplySubtitleOptions();
}

ESubtitleDisplayTextBorder UKausSettingsShared::GetSubtitlesTextBorder() const
{
	return SubtitleTextBorder;
}

void UKausSettingsShared::SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value)
{
	ChangeValueAndDirty(SubtitleTextBorder, Value);
	ApplySubtitleOptions();
}

ESubtitleDisplayBackgroundOpacity UKausSettingsShared::GetSubtitlesBackgroundOpacity() const
{
	return SubtitleBackgroundOpacity;
}

void UKausSettingsShared::SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value)
{
	ChangeValueAndDirty(SubtitleBackgroundOpacity, Value);
	ApplySubtitleOptions();
}

bool UKausSettingsShared::GetDisplaySpeakerNameEnabled() const
{
	return bDisplaySpeakerName;
}

void UKausSettingsShared::SetDisplaySpeakerNameEnabled(bool Value)
{
	ChangeValueAndDirty(bDisplaySpeakerName, Value);
	ApplySubtitleOptions();
}

bool UKausSettingsShared::GetSpeakerPersonalColorEnabled() const
{
	return bSpeakerPersonalColor;
}

void UKausSettingsShared::SetSpeakerPersonalColorEnabled(bool Value)
{
	ChangeValueAndDirty(bSpeakerPersonalColor, Value);
	ApplySubtitleOptions();
}

void UKausSettingsShared::ApplySubtitleOptions()
{
	if (USubtitleDisplaySubsystem* SubtitleSystem = USubtitleDisplaySubsystem::Get(OwningPlayer))
	{
		FSubtitleFormat SubtitleFormat;
		SubtitleFormat.SubtitleTextSize = SubtitleTextSize;
		SubtitleFormat.SubtitleTextColor = SubtitleTextColor;
		SubtitleFormat.SubtitleTextBorder = SubtitleTextBorder;
		SubtitleFormat.SubtitleBackgroundOpacity = SubtitleBackgroundOpacity;

		SubtitleSystem->SetSubtitleDisplayOptions(SubtitleFormat);
	}
}

//////////////////////////////////////////////////////////////////////
//Begine of Gameplay Option~

bool UKausSettingsShared::GetTurotialsEnabled() const
{
	return bEnableGameTutorials;
}

void UKausSettingsShared::SetTurotialsEnabled(bool InValue)
{
	if (ChangeValueAndDirty(bEnableGameTutorials, InValue))
	{
		ApplyGameplayGameOption();
	}
}

bool UKausSettingsShared::GetAutoplayDialogueEnabled() const
{
	return bEnableGameAutoplayDialogue;
}

void UKausSettingsShared::SetAutoplayDialogueEnabled(bool InValue)
{
	if (ChangeValueAndDirty(bEnableGameAutoplayDialogue, InValue))
	{
		ApplyGameplayGameOption();
	}
}

bool UKausSettingsShared::GetControllerVibrationEnabled() const
{
	return bEnableControllerVibration;
}

void UKausSettingsShared::SetControllerVibrationEnabled(bool InValue)
{
	if (ChangeValueAndDirty(bEnableControllerVibration, InValue))
	{
		ApplyGameplayControllerOption();
	}
}

uint8 UKausSettingsShared::GetStickDeadZone() const
{
	return ContorllerStickDeadZone;
}

void UKausSettingsShared::SetStickDeadZone(uint8 InValue)
{
	if (ChangeValueAndDirty(ContorllerStickDeadZone, InValue))
	{
		ApplyGameplayControllerOption();
	}
}

ESprintInputMode UKausSettingsShared::GetSprintInputMode() const
{
	return ControllerSprintInputMode;
}

void UKausSettingsShared::SetSprintInputMode(ESprintInputMode InValueMode)
{
	if (ChangeValueAndDirty(ControllerSprintInputMode, InValueMode))
	{
		ApplyGameplayControllerOption();
	}
}

EAimInputMode UKausSettingsShared::GetAimInputMode() const
{
	return ControllerAimInputMode;
}

void UKausSettingsShared::SetAimInputMode(EAimInputMode InValueMode)
{
	if (ChangeValueAndDirty(ControllerAimInputMode, InValueMode))
	{
		ApplyGameplayControllerOption();
	}
}

bool UKausSettingsShared::GetCameraInvertVerticalEnabled() const
{
	return bEnableCameraInvertVertical;
}

void UKausSettingsShared::SetCameraInvertVerticalEnabled(bool InValue)
{
	if (ChangeValueAndDirty(bEnableCameraInvertVertical, InValue))
	{
		ApplyGameplayCameraOption();
	}
}

bool UKausSettingsShared::GetCameraInvertHorizontalEnabled() const
{
	return bEnableCameraInvertHorizontal;
}

void UKausSettingsShared::SetCameraInvertHorizontalEnabled(bool InValue)
{
	if (ChangeValueAndDirty(bEnableCameraInvertHorizontal, InValue))
	{
		ApplyGameplayCameraOption();
	}
}

uint8 UKausSettingsShared::GetVerticalSensitivity() const
{
	return CameraVerticalSensitivity;
}

void UKausSettingsShared::SetVerticalSensitivity(uint8 InValue)
{
	if (ChangeValueAndDirty(CameraVerticalSensitivity, InValue))
	{
		ApplyGameplayCameraOption();
	}
}

uint8 UKausSettingsShared::GetHorizontalSensitivity() const
{
	return CameraHorizontalSensitivity;
}

void UKausSettingsShared::SetHorizontalSensitivity(uint8 InValue)
{
	if (ChangeValueAndDirty(CameraHorizontalSensitivity, InValue))
	{
		ApplyGameplayCameraOption();
	}
}

uint8 UKausSettingsShared::GetMouseSensitivity() const
{
	return CameraMouseSensitivity;
}

void UKausSettingsShared::SetMouseSensitivity(uint8 InValue)
{
	if (ChangeValueAndDirty(CameraMouseSensitivity, InValue))
	{
		ApplyGameplayCameraOption();
	}
}

void UKausSettingsShared::ApplyGameplayGameOption()
{
	//todo
}

void UKausSettingsShared::ApplyGameplayControllerOption()
{
	//todo
}

void UKausSettingsShared::ApplyGameplayCameraOption()
{
	//todo
}

//End of Gameplay Option~
////////////////////////////////////////////////////////

////////////////////////////////////////////////////////
//Begin of Accessibility Option~
bool UKausSettingsShared::GetEnabledCameraShake() const
{
	return bEnableCameraShake;
}

void UKausSettingsShared::SetEnabledCameraShake(bool InValue)
{
	if (ChangeValueAndDirty(bEnableCameraShake, InValue))
	{
		ApplyAccessibilityCameraOptions();
	}
}

bool UKausSettingsShared::GetEnabledCameraMovement() const
{
	return bEnableCameraMovement;
}

void UKausSettingsShared::SetEnabledCameraMovement(bool InValue)
{
	if (ChangeValueAndDirty(bEnableCameraMovement, InValue))
	{
		ApplyAccessibilityCameraOptions();
	}
}

bool UKausSettingsShared::GetEnabledBattleAutomaticQTE() const
{
	return bEnableBattleAutomaticQTE;
}

void UKausSettingsShared::SetEnabledBattleAutomaticQTE(bool InValue)
{
	if (ChangeValueAndDirty(bEnableBattleAutomaticQTE, InValue))
	{
		ApplyAccessibilityBattleOptions();
	}
}

uint8 UKausSettingsShared::GetImageHUDScale() const
{
	return ImageHUDScale;
}

void UKausSettingsShared::SetImageHUDScale(uint8 InValue)
{
	if (ChangeValueAndDirty(ImageHUDScale, InValue))
	{
		ApplyAccessibilityImageOptions();
	}
}

EColorBlindMode UKausSettingsShared::GetColorBlindMode() const
{
	return ImageColorBlindMode;
}

void UKausSettingsShared::SetColorBlindMode(EColorBlindMode InValueMode)
{
	if (ChangeValueAndDirty(ImageColorBlindMode, InValueMode))
	{
		ApplyAccessibilityImageOptions();
	}
}

uint8 UKausSettingsShared::GetColorBlindModeIntensity() const
{
	return ImageColorBlindModeIntensity;
}

void UKausSettingsShared::SetColorBlindModeIntensity(uint8 InValue)
{
	if (ChangeValueAndDirty(ImageColorBlindModeIntensity, InValue))
	{
		ApplyAccessibilityImageOptions();
	}
}

void UKausSettingsShared::ApplyAccessibilityCameraOptions()
{
	//todo
}

void UKausSettingsShared::ApplyAccessibilityBattleOptions()
{
	//todo
}

void UKausSettingsShared::ApplyAccessibilityImageOptions()
{
	//todo
}

//End of Accessibility Option~
////////////////////////////////////////////////////////

