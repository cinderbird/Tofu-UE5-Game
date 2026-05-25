// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/ImportConfig/MounteaDialogueImportConfig.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphExtraDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueImportConfig() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportSourceData();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueImportConfig();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueImportConfig_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueImportConfig
void UMounteaDialogueImportConfig::StaticRegisterNativesUMounteaDialogueImportConfig()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueImportConfig);
UClass* Z_Construct_UClass_UMounteaDialogueImportConfig_NoRegister()
{
	return UMounteaDialogueImportConfig::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueImportConfig_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue System (Import)\n *\n * This is read-only config file.\n * This file stores information about import history. This way you can keep info about imports.\n * Serves also purpose of storing data for reimports, so we can map existing graph from folder A to imported graph in folder B.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue System (Import)" },
		{ "IncludePath", "ImportConfig/MounteaDialogueImportConfig.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Private/ImportConfig/MounteaDialogueImportConfig.h" },
		{ "NotBlueprintType", "true" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue System (Import)\n\nThis is read-only config file.\nThis file stores information about import history. This way you can keep info about imports.\nServes also purpose of storing data for reimports, so we can map existing graph from folder A to imported graph in folder B." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportHistory_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Private/ImportConfig/MounteaDialogueImportConfig.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportHistory_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportHistory_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ImportHistory;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueImportConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory_ValueProp = { "ImportHistory", nullptr, (EPropertyFlags)0x0000000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogueImportSourceData, METADATA_PARAMS(0, nullptr) }; // 2208357014
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory_Key_KeyProp = { "ImportHistory_Key", nullptr, (EPropertyFlags)0x0000000000024001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory = { "ImportHistory", nullptr, (EPropertyFlags)0x0010000000034001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueImportConfig, ImportHistory), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportHistory_MetaData), NewProp_ImportHistory_MetaData) }; // 2208357014
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::NewProp_ImportHistory,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::ClassParams = {
	&UMounteaDialogueImportConfig::StaticClass,
	"MounteaDialogueImportConfig",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::PropPointers),
	0,
	0x001000E6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueImportConfig()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueImportConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueImportConfig.OuterSingleton, Z_Construct_UClass_UMounteaDialogueImportConfig_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueImportConfig.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueImportConfig>()
{
	return UMounteaDialogueImportConfig::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueImportConfig);
UMounteaDialogueImportConfig::~UMounteaDialogueImportConfig() {}
// End Class UMounteaDialogueImportConfig

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_ImportConfig_MounteaDialogueImportConfig_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueImportConfig, UMounteaDialogueImportConfig::StaticClass, TEXT("UMounteaDialogueImportConfig"), &Z_Registration_Info_UClass_UMounteaDialogueImportConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueImportConfig), 740390210U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_ImportConfig_MounteaDialogueImportConfig_h_1581523892(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_ImportConfig_MounteaDialogueImportConfig_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_ImportConfig_MounteaDialogueImportConfig_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
