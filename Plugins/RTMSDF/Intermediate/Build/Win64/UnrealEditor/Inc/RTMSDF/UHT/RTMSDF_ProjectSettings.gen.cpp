// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Settings/RTMSDF_ProjectSettings.h"
#include "RTMSDF/Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h"
#include "RTMSDF/Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_ProjectSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UEnum* Z_Construct_UEnum_Engine_TextureGroup();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_ProjectSettings();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_ProjectSettings_NoRegister();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Class URTMSDF_ProjectSettings
void URTMSDF_ProjectSettings::StaticRegisterNativesURTMSDF_ProjectSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_ProjectSettings);
UClass* Z_Construct_UClass_URTMSDF_ProjectSettings_NoRegister()
{
	return URTMSDF_ProjectSettings::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_ProjectSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Settings/RTMSDF_ProjectSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SVGFilenameSuffix_MetaData[] = {
		{ "Category", "File Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Selected Suffix to interpret svg files as SDF\n" },
#endif
		{ "DisplayName", "SVG Filename Suffix" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selected Suffix to interpret svg files as SDF" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitmapFilenameSuffix_MetaData[] = {
		{ "Category", "File Rules" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Selected suffix to interpret bitmap (png, tiff, psd etc.) files as SDF\n" },
#endif
		{ "DisplayName", "Bitmap Filename Suffix" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Selected suffix to interpret bitmap (png, tiff, psd etc.) files as SDF" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SVGTextureGroup_MetaData[] = {
		{ "Category", "SVG Default Import Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Default Group applied to SDF textures that are imported from SVGs\n" },
#endif
		{ "DisplayName", "SVG Texture Group" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Default Group applied to SDF textures that are imported from SVGs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultSVGImportSettings_MetaData[] = {
		{ "Category", "SVG Default Import Settings" },
		{ "DisplayName", "Default SVG Import Settings" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BitmapTextureGroup_MetaData[] = {
		{ "Category", "Bitmap Default Import Settings" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBitmapImportSettings_SingleChannel_MetaData[] = {
		{ "Category", "Bitmap Default Import Settings|Single Channel" },
		{ "DisplayName", "Default Bitmap Import Settings (single channel)" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultBitmapImportSettings_MultiChannel_MetaData[] = {
		{ "Category", "Bitmap Default Import Settings|Multi Channel" },
		{ "DisplayName", "Default Bitmap Import Settings (multi channel)" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_ProjectSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SVGFilenameSuffix;
	static const UECodeGen_Private::FStrPropertyParams NewProp_BitmapFilenameSuffix;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SVGTextureGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultSVGImportSettings;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BitmapTextureGroup;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBitmapImportSettings_SingleChannel;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DefaultBitmapImportSettings_MultiChannel;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_ProjectSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_SVGFilenameSuffix = { "SVGFilenameSuffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, SVGFilenameSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SVGFilenameSuffix_MetaData), NewProp_SVGFilenameSuffix_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_BitmapFilenameSuffix = { "BitmapFilenameSuffix", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, BitmapFilenameSuffix), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitmapFilenameSuffix_MetaData), NewProp_BitmapFilenameSuffix_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_SVGTextureGroup = { "SVGTextureGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, SVGTextureGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SVGTextureGroup_MetaData), NewProp_SVGTextureGroup_MetaData) }; // 2065735531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultSVGImportSettings = { "DefaultSVGImportSettings", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, DefaultSVGImportSettings), Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultSVGImportSettings_MetaData), NewProp_DefaultSVGImportSettings_MetaData) }; // 1414530385
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_BitmapTextureGroup = { "BitmapTextureGroup", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, BitmapTextureGroup), Z_Construct_UEnum_Engine_TextureGroup, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BitmapTextureGroup_MetaData), NewProp_BitmapTextureGroup_MetaData) }; // 2065735531
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultBitmapImportSettings_SingleChannel = { "DefaultBitmapImportSettings_SingleChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, DefaultBitmapImportSettings_SingleChannel), Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBitmapImportSettings_SingleChannel_MetaData), NewProp_DefaultBitmapImportSettings_SingleChannel_MetaData) }; // 1358992823
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultBitmapImportSettings_MultiChannel = { "DefaultBitmapImportSettings_MultiChannel", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_ProjectSettings, DefaultBitmapImportSettings_MultiChannel), Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultBitmapImportSettings_MultiChannel_MetaData), NewProp_DefaultBitmapImportSettings_MultiChannel_MetaData) }; // 1358992823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_SVGFilenameSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_BitmapFilenameSuffix,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_SVGTextureGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultSVGImportSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_BitmapTextureGroup,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultBitmapImportSettings_SingleChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::NewProp_DefaultBitmapImportSettings_MultiChannel,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::ClassParams = {
	&URTMSDF_ProjectSettings::StaticClass,
	"RTMSDF",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_ProjectSettings()
{
	if (!Z_Registration_Info_UClass_URTMSDF_ProjectSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_ProjectSettings.OuterSingleton, Z_Construct_UClass_URTMSDF_ProjectSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_ProjectSettings.OuterSingleton;
}
template<> RTMSDF_API UClass* StaticClass<URTMSDF_ProjectSettings>()
{
	return URTMSDF_ProjectSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_ProjectSettings);
URTMSDF_ProjectSettings::~URTMSDF_ProjectSettings() {}
// End Class URTMSDF_ProjectSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Settings_RTMSDF_ProjectSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_ProjectSettings, URTMSDF_ProjectSettings::StaticClass, TEXT("URTMSDF_ProjectSettings"), &Z_Registration_Info_UClass_URTMSDF_ProjectSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_ProjectSettings), 252523334U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Settings_RTMSDF_ProjectSettings_h_1508982348(TEXT("/Script/RTMSDF"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Settings_RTMSDF_ProjectSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Settings_RTMSDF_ProjectSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
