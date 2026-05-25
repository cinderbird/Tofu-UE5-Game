#pragma once

#include "GameFramework/GameUserSettings.h"
#include "InputCoreTypes.h"
#include "KausSettingsLocal.generated.h"

enum class ECommonInputType : uint8;
enum class EKausDisplayablePerformanceStat : uint8;
enum class EKausStatDisplayMode : uint8;

class UKausLocalPlayer;
class UObject;
class USoundControlBus;
class USoundControlBusMix;
struct FFrame;

USTRUCT()
struct FKausScalabilitySnapshot
{
	GENERATED_BODY()

	FKausScalabilitySnapshot();

	Scalability::FQualityLevels Qualities;
	bool bActive = false;
	bool bHasOverrides = false;
};

/**
 * UKausSettingsLocal
 *
 * Local (machine-specific) game user settings.
 * Stored in GameUserSettings.ini.
 *
 * Kaus is Windows desktop-only and single-player, so mobile/console/safezone/voicechat
 * and runtime audio output device switching are intentionally excluded.
 */
UCLASS()
class UKausSettingsLocal : public UGameUserSettings
{
	GENERATED_BODY()

public:

	UKausSettingsLocal();

	static UKausSettingsLocal* Get();

	//~UObject interface
	virtual void BeginDestroy() override;
	//~End of UObject interface

	//~UGameUserSettings interface
	virtual void SetToDefaults() override;

	virtual void LoadSettings(bool bForceReload) override;

	virtual void ConfirmVideoMode() override;

	virtual float GetEffectiveFrameRateLimit() override;

	virtual void ResetToCurrentSettings() override;

	virtual void ApplyNonResolutionSettings() override;
	//~End of UGameUserSettings interface

	void OnExperienceLoaded();
	void OnHotfixDeviceProfileApplied();

	//////////////////////////////////////////////////////////////////
	// Frontend state

public:
	void SetShouldUseFrontendPerformanceSettings(bool bInFrontEnd);
protected:
	bool ShouldUseFrontendPerformanceSettings() const;
private:
	bool bInFrontEndForPerformancePurposes = false;

	//////////////////////////////////////////////////////////////////
	// Performance stats
public:
	/** Returns the display mode for the specified performance stat */
	EKausStatDisplayMode GetPerfStatDisplayState(EKausDisplayablePerformanceStat Stat) const;
	
	/** Sets the display mode for the specified performance stat */
	void SetPerfStatDisplayState(EKausDisplayablePerformanceStat Stat, EKausStatDisplayMode DisplayMode);

	/** Fired when the display state for a performance stat has changed, or the settings are applied */
	DECLARE_EVENT(UKausSettingsLocal, FPerfStatSettingsChanged);
	FPerfStatSettingsChanged& OnPerfStatDisplayStateChanged() { return PerfStatSettingsChangedEvent; }

private:
	// List of stats to display in the HUD
	UPROPERTY(Config)
	TMap<EKausDisplayablePerformanceStat, EKausStatDisplayMode> DisplayStatList;

	// Event for display stat widget containers to bind to
	FPerfStatSettingsChanged PerfStatSettingsChangedEvent;

	//////////////////////////////////////////////////////////////////
	// Brightness/Gamma
public:
	UFUNCTION()
	float GetDisplayGamma() const;

	UFUNCTION()
	void SetDisplayGamma(float InGamma);

private:
	void ApplyDisplayGamma();
	
	UPROPERTY(Config)
	float DisplayGamma = 2.2;

	//////////////////////////////////////////////////////////////////
	// Display - Frame rate limits (Always only on desktop)
public:
	UFUNCTION()
	float GetFrameRateLimit_InMenu() const;

	UFUNCTION()
	void SetFrameRateLimit_InMenu(float NewLimitFPS);

	UFUNCTION()
	float GetFrameRateLimit_WhenBackgrounded() const;

	UFUNCTION()
	void SetFrameRateLimit_WhenBackgrounded(float NewLimitFPS);

	UFUNCTION()
	float GetFrameRateLimit_Always() const;

	UFUNCTION()
	void SetFrameRateLimit_Always(float NewLimitFPS);

protected:
	void UpdateEffectiveFrameRateLimit();

private:
	UPROPERTY(Config)
	float FrameRateLimit_InMenu;

	UPROPERTY(Config)
	float FrameRateLimit_WhenBackgrounded;

	//////////////////////////////////////////////////////////////////
	// Audio - Volume
public:
	/** Returns if we're using headphone mode (HRTF) **/
	UFUNCTION()
	bool IsHeadphoneModeEnabled() const;

	/** Enables or disables headphone mode (HRTF) - NOTE this setting will be overruled if au.DisableBinauralSpatialization is set */
	UFUNCTION()
	void SetHeadphoneModeEnabled(bool bEnabled);

	/** Returns if we can enable/disable headphone mode (i.e., if it's not forced on or off by the platform) */
	UFUNCTION()
	bool CanModifyHeadphoneModeEnabled() const;

public:
	/** Whether we *want* to use headphone mode (HRTF); may or may not actually be applied **/
	UPROPERTY(Transient)
	bool bDesiredHeadphoneMode;

private:
	/** Whether to use headphone mode (HRTF) **/
	UPROPERTY(config)
	bool bUseHeadphoneMode;

public:
	/** Returns if we're using High Dynamic Range Audio mode (HDR Audio) **/
	UFUNCTION()
	bool IsHDRAudioModeEnabled() const;

	/** Enables or disables High Dynamic Range Audio mode (HDR Audio) */
	UFUNCTION()
	void SetHDRAudioModeEnabled(bool bEnabled);

	/** Whether to use High Dynamic Range Audio mode (HDR Audio) **/
	UPROPERTY(config)
	bool bUseHDRAudioMode;

public:
	/** Returns true if this platform can run the auto benchmark */
	UFUNCTION(BlueprintCallable, Category = Settings)
	bool CanRunAutoBenchmark() const;

	/** Returns true if this user should run the auto benchmark as it has never been run */
	UFUNCTION(BlueprintCallable, Category = Settings)
	bool ShouldRunAutoBenchmarkAtStartup() const;

	/** Run the auto benchmark, optionally saving right away */
	UFUNCTION(BlueprintCallable, Category = Settings)
	void RunAutoBenchmark(bool bSaveImmediately);

	/** Apply just the quality scalability settings */
	void ApplyScalabilitySettings();

	UFUNCTION()
	float GetOverallVolume() const;

	UFUNCTION()
	void SetOverallVolume(float InVolume);

	UFUNCTION()
	float GetMusicVolume() const;

	UFUNCTION()
	void SetMusicVolume(float InVolume);

	UFUNCTION()
	float GetSoundFXVolume() const;

	UFUNCTION()
	void SetSoundFXVolume(float InVolume);

	UFUNCTION()
	float GetDialogueVolume() const;

	UFUNCTION()
	void SetDialogueVolume(float InVolume);

	//////////////////////////////////////////////////////////////////
	// Keybindings
public:
	
	// Sets the controller representation to use, a single platform might support multiple kinds of controllers.  For
	// example, Win64 games could be played with both an XBox or Playstation controller.
	UFUNCTION()
	void SetControllerPlatform(const FName InControllerPlatform);
	UFUNCTION()
	FName GetControllerPlatform() const;

private:
	void LoadUserControlBusMix();

	void SetVolumeForControlBus(USoundControlBus* InSoundControlBus, float InVolume);

	UPROPERTY(Config)
	float OverallVolume = 1.0f;

	UPROPERTY(Config)
	float MusicVolume = 1.0f;

	UPROPERTY(Config)
	float SoundFXVolume = 1.0f;

	UPROPERTY(Config)
	float DialogueVolume = 1.0f;

	UPROPERTY(Transient)
	TMap<FName/*SoundClassName*/, TObjectPtr<USoundControlBus>> ControlBusMap;

	UPROPERTY(Transient)
	TObjectPtr<USoundControlBusMix> ControlBusMix = nullptr;

	UPROPERTY(Transient)
	bool bSoundControlBusMixLoaded;

	/**
	 * The name of the controller the player is using.  This is maps to the name of a UCommonInputBaseControllerData
	 * that is available on this current platform.  The gamepad data are registered per platform, you'll find them
	 * in <Platform>Game.ini files listed under +ControllerData=...
	 */
	UPROPERTY(Config)
	FName ControllerPlatform;

	UPROPERTY(Config)
	FName ControllerPreset = TEXT("Default");

	/** The name of the current input config that the user has selected. */
	UPROPERTY(Config)
	FName InputConfigName = TEXT("Default");

private:
	void OnAppActivationStateChanged(bool bIsActive);

	void ReapplyThingsDueToPossibleDeviceProfileChange();

private:
	FDelegateHandle OnApplicationActivationStateChangedHandle;
};
