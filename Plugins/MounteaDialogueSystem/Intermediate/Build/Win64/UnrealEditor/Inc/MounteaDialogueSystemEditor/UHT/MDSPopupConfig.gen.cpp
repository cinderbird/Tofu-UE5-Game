// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Popups/MDSPopupConfig.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMDSPopupConfig() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMDSPopupConfig();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMDSPopupConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMDSPopupConfig
void UMDSPopupConfig::StaticRegisterNativesUMDSPopupConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMDSPopupConfig);
UClass* Z_Construct_UClass_UMDSPopupConfig_NoRegister()
{
	return UMDSPopupConfig::StaticClass();
}
struct Z_Construct_UClass_UMDSPopupConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Popups/MDSPopupConfig.h" },
		{ "ModuleRelativePath", "Private/Popups/MDSPopupConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PluginVersionUpdate_MetaData[] = {
		{ "ModuleRelativePath", "Private/Popups/MDSPopupConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_PluginVersionUpdate;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMDSPopupConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMDSPopupConfig_Statics::NewProp_PluginVersionUpdate = { "PluginVersionUpdate", nullptr, (EPropertyFlags)0x0010000000004000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMDSPopupConfig, PluginVersionUpdate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PluginVersionUpdate_MetaData), NewProp_PluginVersionUpdate_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMDSPopupConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMDSPopupConfig_Statics::NewProp_PluginVersionUpdate,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSPopupConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMDSPopupConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSPopupConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMDSPopupConfig_Statics::ClassParams = {
	&UMDSPopupConfig::StaticClass,
	"EditorPerProjectUserSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMDSPopupConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMDSPopupConfig_Statics::PropPointers),
	0,
	0x000000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMDSPopupConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMDSPopupConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMDSPopupConfig()
{
	if (!Z_Registration_Info_UClass_UMDSPopupConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMDSPopupConfig.OuterSingleton, Z_Construct_UClass_UMDSPopupConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMDSPopupConfig.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMDSPopupConfig>()
{
	return UMDSPopupConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMDSPopupConfig);
UMDSPopupConfig::~UMDSPopupConfig() {}
// End Class UMDSPopupConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Popups_MDSPopupConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMDSPopupConfig, UMDSPopupConfig::StaticClass, TEXT("UMDSPopupConfig"), &Z_Registration_Info_UClass_UMDSPopupConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMDSPopupConfig), 3117939866U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Popups_MDSPopupConfig_h_3537430747(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Popups_MDSPopupConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Popups_MDSPopupConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
