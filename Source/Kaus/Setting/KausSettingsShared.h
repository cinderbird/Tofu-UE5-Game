#pragma once

#include "GameFramework/SaveGame.h"
#include "SubtitleDisplayOptions.h"
#include "UObject/ObjectPtr.h"
#include "KausSettingsShared.generated.h"

class UObject;
struct FFrame;
class UKausLocalPlayer;

UENUM(BlueprintType)
enum class ESprintInputMode : uint8
{
	Toggle,
	Hold,
};

UENUM(BlueprintType)
enum class EAimInputMode : uint8
{
	Toggle,
	Hold,
};

UENUM(BlueprintType)
enum class EColorBlindMode : uint8
{
	Off,
	// Deuteranope (green weak/blind)
	Deuteranope,
	// Protanope (red weak/blind)
	Protanope,
	// Tritanope(blue weak / bind)
	Tritanope
};

/**
 * UKausSettingsShared - The "Shared" settings are stored as part of the USaveGame system, these settings are not machine
 * specific like the local settings, and are safe to store in the cloud - and 'share' them.  Using the save game system
 * we can also store settings per player, so things like controller keybind preferences should go here, because if those
 * are stored in the local settings all users would get them.
 *
 */
UCLASS()
class UKausSettingsShared : public ULocalPlayerSaveGame
{
	GENERATED_BODY()

public:
	DECLARE_EVENT_OneParam(UKausSettingsShared, FOnSettingChangedEvent, UKausSettingsShared* Settings);
	FOnSettingChangedEvent OnSettingChanged;

public:
	UKausSettingsShared();

	//~ULocalPlayerSaveGame interface
	int32 GetLatestDataVersion() const override;
	//~End of ULocalPlayerSaveGame interface

	bool IsDirty() const { return bIsDirty; }
	void ClearDirtyFlag() { bIsDirty = false; }

	/** Creates a temporary settings object, this will be replaced by one loaded from the user's save game */
	static UKausSettingsShared* CreateTemporarySettings(const UKausLocalPlayer* LocalPlayer);

	/** Synchronously loads a settings object, this is not valid to call before login */
	static UKausSettingsShared* LoadOrCreateSettings(const UKausLocalPlayer* LocalPlayer);

	DECLARE_DELEGATE_OneParam(FOnSettingsLoadedEvent, UKausSettingsShared* Settings);

	/** Starts an async load of the settings object, calls Delegate on completion */
	static bool AsyncLoadOrCreateSettings(const UKausLocalPlayer* LocalPlayer, FOnSettingsLoadedEvent Delegate);

	/** Saves the settings to disk */
	void SaveSettings();

	/** Applies the current settings to the player */
	void ApplySettings();


	////////////////////////////////////////////////////////
	//Begin of General Option~
	// General - language
public:
	/** Gets the pending text culture (Language) */
	const FString& GetPendingTextCulture() const;

	/** Sets the pending text culture to apply */
	void SetPendingTextCulture(const FString& NewCulture);

	/** Gets the pending audio culture (Voice) */
	const FString& GetPendingAudioCulture() const;

	/** Sets the pending audio culture to apply */
	void SetPendingAudioCulture(const FString& NewCulture);

	// Called when the culture changes.
	void OnCultureChanged();

	/** Clears the pending cultures */
	void ClearPendingCultures();

	bool IsUsingDefaultTextCulture() const;

	bool IsUsingDefaultAudioCulture() const;

	void ResetTextCultureToDefault();

	void ResetAudioCultureToDefault();

	bool ShouldResetTextCultureToDefault() const;

	bool ShouldResetAudioCultureToDefault() const;

	void ApplyCultureSettings();

	void ResetCultureToCurrentSettings();

private:
	/** The pending text culture to apply */
	UPROPERTY(Transient)
	FString PendingTextCulture;

	/** The pending audio culture to apply */
	UPROPERTY(Transient)
	FString PendingAudioCulture;

	/* If true, resets the text culture to default. */
	bool bResetTextCultureToDefault = false;

	/* If true, resets the audio culture to default. */
	bool bResetAudioCultureToDefault = false;

	////////////////////////////////////////////////////////
	//General - Subtitles
public:
	UFUNCTION() bool GetSubtitlesEnabled() const;
	UFUNCTION() void SetSubtitlesEnabled(bool Value);

	UFUNCTION() ESubtitleDisplayTextSize GetSubtitlesTextSize() const;
	UFUNCTION() void SetSubtitlesTextSize(ESubtitleDisplayTextSize Value);

	UFUNCTION() ESubtitleDisplayTextColor GetSubtitlesTextColor() const;
	UFUNCTION() void SetSubtitlesTextColor(ESubtitleDisplayTextColor Value);

	UFUNCTION() ESubtitleDisplayTextBorder GetSubtitlesTextBorder() const;
	UFUNCTION() void SetSubtitlesTextBorder(ESubtitleDisplayTextBorder Value);

	UFUNCTION() ESubtitleDisplayBackgroundOpacity GetSubtitlesBackgroundOpacity() const;
	UFUNCTION() void SetSubtitlesBackgroundOpacity(ESubtitleDisplayBackgroundOpacity Value);

	UFUNCTION() bool GetDisplaySpeakerNameEnabled() const;
	UFUNCTION() void SetDisplaySpeakerNameEnabled(bool Value);

	UFUNCTION() bool GetSpeakerPersonalColorEnabled() const;
	UFUNCTION() void SetSpeakerPersonalColorEnabled(bool Value);

protected:
	void ApplySubtitleOptions();

private:
	UPROPERTY() bool bEnableSubtitles = true;

	UPROPERTY() ESubtitleDisplayTextSize SubtitleTextSize = ESubtitleDisplayTextSize::Medium;

	UPROPERTY() ESubtitleDisplayTextColor SubtitleTextColor = ESubtitleDisplayTextColor::White;

	UPROPERTY() ESubtitleDisplayTextBorder SubtitleTextBorder = ESubtitleDisplayTextBorder::None;

	UPROPERTY() ESubtitleDisplayBackgroundOpacity SubtitleBackgroundOpacity = ESubtitleDisplayBackgroundOpacity::Medium;

	UPROPERTY() bool bDisplaySpeakerName = true;

	UPROPERTY() bool bSpeakerPersonalColor = true;

	//End of General Option~
	////////////////////////////////////////////////////////
public:
	////////////////////////////////////////////////////////
	//Begine of Gameplay Option~
	//Gameplay - Game
	UFUNCTION() bool GetTurotialsEnabled() const;
	UFUNCTION() void SetTurotialsEnabled(bool InValue);

	UFUNCTION() bool GetAutoplayDialogueEnabled() const;
	UFUNCTION() void SetAutoplayDialogueEnabled(bool InValue);

	UFUNCTION() bool GetControllerVibrationEnabled() const;
	UFUNCTION() void SetControllerVibrationEnabled(bool InValue);

	UFUNCTION() uint8 GetStickDeadZone() const;
	UFUNCTION() void SetStickDeadZone(uint8 InValue);

	UFUNCTION() ESprintInputMode GetSprintInputMode() const;
	UFUNCTION() void SetSprintInputMode(ESprintInputMode InValueMode);

	UFUNCTION() EAimInputMode GetAimInputMode() const;
	UFUNCTION() void SetAimInputMode(EAimInputMode InValueMode);

	UFUNCTION() bool GetCameraInvertVerticalEnabled() const;
	UFUNCTION() void SetCameraInvertVerticalEnabled(bool InValue);

	UFUNCTION() bool GetCameraInvertHorizontalEnabled() const;
	UFUNCTION() void SetCameraInvertHorizontalEnabled(bool InValue);

	UFUNCTION() uint8 GetVerticalSensitivity() const;
	UFUNCTION() void SetVerticalSensitivity(uint8 InValue);

	UFUNCTION() uint8 GetHorizontalSensitivity() const;
	UFUNCTION() void SetHorizontalSensitivity(uint8 InValue);

	UFUNCTION() uint8 GetMouseSensitivity() const;
	UFUNCTION() void SetMouseSensitivity(uint8 InValue);

protected:
	void ApplyGameplayGameOption();

	void ApplyGameplayControllerOption();

	void ApplyGameplayCameraOption();

private:
	UPROPERTY() bool bEnableGameTutorials = true;

	UPROPERTY() bool bEnableGameAutoplayDialogue = true;

	UPROPERTY() bool bEnableControllerVibration = true;

	UPROPERTY() uint8 ContorllerStickDeadZone = 0;

	UPROPERTY() ESprintInputMode ControllerSprintInputMode = ESprintInputMode::Hold;

	UPROPERTY() EAimInputMode ControllerAimInputMode = EAimInputMode::Hold;

	UPROPERTY() bool bEnableCameraInvertVertical = false;

	UPROPERTY() bool bEnableCameraInvertHorizontal = false;

	UPROPERTY() uint8 CameraVerticalSensitivity = 0;

	UPROPERTY() uint8 CameraHorizontalSensitivity = 0;

	UPROPERTY() uint8 CameraMouseSensitivity = 0;
	//End of Gameplay Option~
	////////////////////////////////////////////////////////
public:
	////////////////////////////////////////////////////////
	//Begin of Accessibility Option~
	UFUNCTION() bool GetEnabledCameraShake() const;
	UFUNCTION() void SetEnabledCameraShake(bool InValue);

	UFUNCTION() bool GetEnabledCameraMovement() const;
	UFUNCTION() void SetEnabledCameraMovement(bool InValue);

	UFUNCTION() bool GetEnabledBattleAutomaticQTE() const;
	UFUNCTION() void SetEnabledBattleAutomaticQTE(bool InValue);

	UFUNCTION() uint8 GetImageHUDScale() const;
	UFUNCTION() void SetImageHUDScale(uint8 InValue);

	UFUNCTION() EColorBlindMode GetColorBlindMode() const;
	UFUNCTION() void SetColorBlindMode(EColorBlindMode InValueMode);

	UFUNCTION() uint8 GetColorBlindModeIntensity() const;
	UFUNCTION() void SetColorBlindModeIntensity(uint8 InValue);

protected:
	void ApplyAccessibilityCameraOptions();

	void ApplyAccessibilityBattleOptions();

	void ApplyAccessibilityImageOptions();

private:
	UPROPERTY() bool bEnableCameraShake = true;
	
	UPROPERTY() bool bEnableCameraMovement = true;

	UPROPERTY() bool bEnableBattleAutomaticQTE = false;

	UPROPERTY() uint8 ImageHUDScale = 1;

	UPROPERTY() EColorBlindMode ImageColorBlindMode = EColorBlindMode::Off;

	UPROPERTY() uint8 ImageColorBlindModeIntensity = 1;

	//End of Accessibility Option~
	////////////////////////////////////////////////////////
	/// Dirty and Change Reporting
private:
	template<typename T>
	bool ChangeValueAndDirty(T& CurrentValue, const T& NewValue)
	{
		if (CurrentValue != NewValue)
		{
			CurrentValue = NewValue;
			bIsDirty = true;
			OnSettingChanged.Broadcast(this);

			return true;
		}

		return false;
	}

	bool bIsDirty = false;
};
