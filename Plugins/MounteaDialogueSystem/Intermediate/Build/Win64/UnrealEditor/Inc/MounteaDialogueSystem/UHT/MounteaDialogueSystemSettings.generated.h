// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/MounteaDialogueSystemSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMounteaDialogueConfiguration;
class UUserWidget;
enum class EMounteaDialogueLoggingVerbosity : uint8;
enum class EMounteaInputMode : uint8;
struct FSubtitlesSettings;
struct FUIRowID;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueSystemSettings_generated_h
#error "MounteaDialogueSystemSettings.generated.h already included, missing '#pragma once' in MounteaDialogueSystemSettings.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueSystemSettings_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSkipDuration); \
	DECLARE_FUNCTION(execGetAllowedLoggVerbosity); \
	DECLARE_FUNCTION(execSetSubtitlesSettings); \
	DECLARE_FUNCTION(execGetSubtitlesSettings); \
	DECLARE_FUNCTION(execGetSkipFadeDuration); \
	DECLARE_FUNCTION(execGetWidgetUpdateFrequency); \
	DECLARE_FUNCTION(execSubtitlesAllowed); \
	DECLARE_FUNCTION(execGetDurationCoefficient); \
	DECLARE_FUNCTION(execGetDialogueInputMode); \
	DECLARE_FUNCTION(execCanSkipWholeRow); \
	DECLARE_FUNCTION(execGetDefaultDialogueWidget); \
	DECLARE_FUNCTION(execGetDialogueConfiguration);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueSystemSettings(); \
	friend struct Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueSystemSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_ProjectUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueSystemSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MounteaSettings");} \



#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueSystemSettings(UMounteaDialogueSystemSettings&&); \
	UMounteaDialogueSystemSettings(const UMounteaDialogueSystemSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueSystemSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueSystemSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueSystemSettings) \
	NO_API virtual ~UMounteaDialogueSystemSettings();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_29_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueSystemSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
