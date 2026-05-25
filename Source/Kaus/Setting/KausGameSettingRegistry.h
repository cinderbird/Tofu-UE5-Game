#pragma once

#include "DataSource/GameSettingDataSourceDynamic.h" // IWYU pragma: keep
#include "GameSettingRegistry.h"
#include "Setting/KausSettingsLocal.h" // IWYU pragma: keep
#include "KausGameSettingRegistry.generated.h"

class ULocalPlayer;
class UObject;

//--------------------------------------
// UKausGameSettingRegistry
//--------------------------------------

class UGameSettingCollection;
class UKausLocalPlayer;

DECLARE_LOG_CATEGORY_EXTERN(LogKausGameSettingRegistry, Log, Log);

#define GET_SHARED_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)							\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UKausLocalPlayer, GetSharedSettings),				\
		GET_FUNCTION_NAME_STRING_CHECKED(UKausSettingsShared, FunctionOrPropertyName)		\
	}))

#define GET_LOCAL_SETTINGS_FUNCTION_PATH(FunctionOrPropertyName)							\
	MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>({								\
		GET_FUNCTION_NAME_STRING_CHECKED(UKausLocalPlayer, GetLocalSettings),				\
		GET_FUNCTION_NAME_STRING_CHECKED(UKausSettingsLocal, FunctionOrPropertyName)		\
	}))

/**
 * 
 */
UCLASS()
class UKausGameSettingRegistry : public UGameSettingRegistry
{
	GENERATED_BODY()

public:
	UKausGameSettingRegistry();

	static UKausGameSettingRegistry* Get(UKausLocalPlayer* InLocalPlayer);
	
	virtual void SaveChanges() override;

protected:
	virtual void OnInitialize(ULocalPlayer* InLocalPlayer) override;
	virtual bool IsFinishedInitializing() const override;

	//void InitializeVideoSettings_FrameRates(UGameSettingCollection* Screen, UKausLocalPlayer* InLocalPlayer);
	//void AddPerformanceStatPage(UGameSettingCollection* Screen, UKausLocalPlayer* InLocalPlayer);
	
	
	UGameSettingCollection* InitializeMouseAndKeyboardSettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeGamepadSettings(UKausLocalPlayer* InLocalPlayer);
	
	//OptionSetting - 33 Expedition Style
	UGameSettingCollection* InitializeGeneralSettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeGameplaySettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeGraphicsSettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeAudioSettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeAccessibilitySettings(UKausLocalPlayer* InLocalPlayer);
	UGameSettingCollection* InitializeControlsSettings(UKausLocalPlayer* InLocalPlayer);

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GeneralSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GameplaySettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GraphicsSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> AudioSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> AccessibilitySettings;
	
	UPROPERTY()
	TObjectPtr<UGameSettingCollection> ControlsSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> MouseAndKeyboardSettings;

	UPROPERTY()
	TObjectPtr<UGameSettingCollection> GamepadSettings;
};
