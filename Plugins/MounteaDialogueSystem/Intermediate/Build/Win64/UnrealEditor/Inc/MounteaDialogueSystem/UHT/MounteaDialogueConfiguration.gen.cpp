// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Settings/MounteaDialogueConfiguration.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueConfiguration() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataAsset();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueConfiguration();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueConfiguration
void UMounteaDialogueConfiguration::StaticRegisterNativesUMounteaDialogueConfiguration()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueConfiguration);
UClass* Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister()
{
	return UMounteaDialogueConfiguration::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueConfiguration_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMounteaDialogueConfiguration\n *\n * A data asset that provides configuration settings for the Mountea Dialogue System.\n * This includes settings for the default dialogue widget, input mode, dialogue skip behavior,\n * timing coefficients, and various other user interface and subtitle parameters.\n *\n * This configuration asset is designed to be customizable within the editor, allowing fine-tuned\n * control over dialogue behavior, including skip fade durations, update frequencies, and input handling.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Config" },
		{ "IncludePath", "Settings/MounteaDialogueConfiguration.h" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMounteaDialogueConfiguration\n\nA data asset that provides configuration settings for the Mountea Dialogue System.\nThis includes settings for the default dialogue widget, input mode, dialogue skip behavior,\ntiming coefficients, and various other user interface and subtitle parameters.\n\nThis configuration asset is designed to be customizable within the editor, allowing fine-tuned\ncontrol over dialogue behavior, including skip fade durations, update frequencies, and input handling." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultDialogueWidgetClass_MetaData[] = {
		{ "Category", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * User Widget class to be set as default one if requested.\n\x09 * \xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\xe2\x9d\x97\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User Widget class to be set as default one if requested.\n\xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\xe2\x9d\x97" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMode_MetaData[] = {
		{ "Category", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets Input mode when in Dialogue.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Input mode when in Dialogue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowSubtitles_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Whether subtitles are allowed or not.\n\x09 * If subtitles are not allowed, C++ requests won't request showing subtitles.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Whether subtitles are allowed or not.\nIf subtitles are not allowed, C++ requests won't request showing subtitles." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipDuration_MetaData[] = {
		{ "Category", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines how long a Skip Key must be held in order to start the Skip\n" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how long a Skip Key must be held in order to start the Skip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bSkipRowWithAudioSkip_MetaData[] = {
		{ "Category", "Audio" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines whether whole Dialogue Row is skipped when audio skip is requested.\n\x09 * This setting defines behaviour for all Nodes. Each Node allows different behaviour, so in special cases Node inversion can be used.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether whole Dialogue Row is skipped when audio skip is requested.\nThis setting defines behaviour for all Nodes. Each Node allows different behaviour, so in special cases Node inversion can be used." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DurationCoefficient_MetaData[] = {
		{ "Category", "UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines coefficient of speed per 100 characters for `Automatic` `RowDurationMode`.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines coefficient of speed per 100 characters for `Automatic` `RowDurationMode`." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdateFrequency_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines how often Dialogue Widgets update per second.\n\x09 * Effectively can replaces Tick.\n\x09 * \xe2\x9d\x94 Units: seconds\n\x09 * \xe2\x9d\x97Lower the value higher the performance impact\xe2\x9d\x97\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines how often Dialogue Widgets update per second.\nEffectively can replaces Tick.\n\xe2\x9d\x94 Units: seconds\n\xe2\x9d\x97Lower the value higher the performance impact\xe2\x9d\x97" },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
		{ "Units", "seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkipFadeDuration_MetaData[] = {
		{ "Category", "Subtitles" },
		{ "ClampMax", "1.000000" },
		{ "ClampMin", "0.010000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines fading duration to naturally stop voice when anything is playing.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines fading duration to naturally stop voice when anything is playing." },
#endif
		{ "UIMax", "1.000000" },
		{ "UIMin", "0.010000" },
		{ "Units", "seconds" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettings_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of General Dialogue Settings.\n\x09 * Defines font, sizes etc. for all subtitles.\n\x09 * If any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of General Dialogue Settings.\nDefines font, sizes etc. for all subtitles.\nIf any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettingsOverrides_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Map of Widget Classes and their Subtitles Settings.\n\x09 * Used for overriding General Defaults.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueConfiguration.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of Widget Classes and their Subtitles Settings.\nUsed for overriding General Defaults." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DefaultDialogueWidgetClass;
	static const UECodeGen_Private::FBytePropertyParams NewProp_InputMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_InputMode;
	static void NewProp_bAllowSubtitles_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowSubtitles;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipDuration;
	static void NewProp_bSkipRowWithAudioSkip_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bSkipRowWithAudioSkip;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DurationCoefficient;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UpdateFrequency;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_SkipFadeDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubtitlesSettingsOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueConfiguration>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_DefaultDialogueWidgetClass = { "DefaultDialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000010001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, DefaultDialogueWidgetClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultDialogueWidgetClass_MetaData), NewProp_DefaultDialogueWidgetClass_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_InputMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_InputMode = { "InputMode", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, InputMode), Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMode_MetaData), NewProp_InputMode_MetaData) }; // 3790143152
void Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bAllowSubtitles_SetBit(void* Obj)
{
	((UMounteaDialogueConfiguration*)Obj)->bAllowSubtitles = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bAllowSubtitles = { "bAllowSubtitles", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueConfiguration), &Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bAllowSubtitles_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowSubtitles_MetaData), NewProp_bAllowSubtitles_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SkipDuration = { "SkipDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, SkipDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipDuration_MetaData), NewProp_SkipDuration_MetaData) };
void Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bSkipRowWithAudioSkip_SetBit(void* Obj)
{
	((UMounteaDialogueConfiguration*)Obj)->bSkipRowWithAudioSkip = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bSkipRowWithAudioSkip = { "bSkipRowWithAudioSkip", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueConfiguration), &Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bSkipRowWithAudioSkip_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bSkipRowWithAudioSkip_MetaData), NewProp_bSkipRowWithAudioSkip_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_DurationCoefficient = { "DurationCoefficient", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, DurationCoefficient), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DurationCoefficient_MetaData), NewProp_DurationCoefficient_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_UpdateFrequency = { "UpdateFrequency", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, UpdateFrequency), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdateFrequency_MetaData), NewProp_UpdateFrequency_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SkipFadeDuration = { "SkipFadeDuration", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, SkipFadeDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkipFadeDuration_MetaData), NewProp_SkipFadeDuration_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettings = { "SubtitlesSettings", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, SubtitlesSettings), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesSettings_MetaData), NewProp_SubtitlesSettings_MetaData) }; // 1339227483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(0, nullptr) }; // 1339227483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp = { "SubtitlesSettingsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(0, nullptr) }; // 2459096273
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfiguration, SubtitlesSettingsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesSettingsOverrides_MetaData), NewProp_SubtitlesSettingsOverrides_MetaData) }; // 2459096273 1339227483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_DefaultDialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_InputMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_InputMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bAllowSubtitles,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SkipDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_bSkipRowWithAudioSkip,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_DurationCoefficient,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_UpdateFrequency,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SkipFadeDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::NewProp_SubtitlesSettingsOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataAsset,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::ClassParams = {
	&UMounteaDialogueConfiguration::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueConfiguration()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueConfiguration.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueConfiguration.OuterSingleton, Z_Construct_UClass_UMounteaDialogueConfiguration_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueConfiguration.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueConfiguration>()
{
	return UMounteaDialogueConfiguration::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueConfiguration);
UMounteaDialogueConfiguration::~UMounteaDialogueConfiguration() {}
// End Class UMounteaDialogueConfiguration

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueConfiguration_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueConfiguration, UMounteaDialogueConfiguration::StaticClass, TEXT("UMounteaDialogueConfiguration"), &Z_Registration_Info_UClass_UMounteaDialogueConfiguration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueConfiguration), 3260070691U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueConfiguration_h_4097821424(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueConfiguration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueConfiguration_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
