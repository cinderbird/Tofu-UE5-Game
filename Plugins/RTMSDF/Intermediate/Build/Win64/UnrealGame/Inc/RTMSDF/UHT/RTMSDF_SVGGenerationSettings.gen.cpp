// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_SVGGenerationSettings() {}

// Begin Cross Module References
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin ScriptStruct FRTMSDF_SVGGenerationSettings
static_assert(std::is_polymorphic<FRTMSDF_SVGGenerationSettings>() == std::is_polymorphic<FRTMSDF_CommonGenerationSettings>(), "USTRUCT FRTMSDF_SVGGenerationSettings cannot be polymorphic unless super FRTMSDF_CommonGenerationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings;
class UScriptStruct* FRTMSDF_SVGGenerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("RTMSDF_SVGGenerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.OuterSingleton;
}
template<> RTMSDF_API UScriptStruct* StaticStruct<FRTMSDF_SVGGenerationSettings>()
{
	return FRTMSDF_SVGGenerationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "SVG to SDF Import Settings [RTMSDF]" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
		{ "ValidEnumValues", "SingleChannel, SingleChannelPseudo, Multichannel, MultichannelPlusAlpha" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Output size of generated SDF texture - for non-square textures this will be the shortest edge - recommend power of 2 sizes only */" },
#endif
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Output size of generated SDF texture - for non-square textures this will be the shortest edge - recommend power of 2 sizes only" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColoringMode_MetaData[] = {
		{ "Category", "Import" },
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeColoringSeed_MetaData[] = {
		{ "Category", "Import" },
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxCornerAngle_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMax", "179" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Maximum angle to treat a corner as a corner for the sake of edge coloring / preserving sharpness*/" },
#endif
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Maximum angle to treat a corner as a corner for the sake of edge coloring / preserving sharpness" },
#endif
		{ "UIMax", "179" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorCorrectionMode_MetaData[] = {
		{ "Category", "Import" },
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinErrorDeviation_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMax", "2" },
		{ "ClampMin", "1" },
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
		{ "UIMax", "2" },
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MinErrorImprovement_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMax", "2" },
		{ "ClampMin", "1" },
		{ "DisplayAfter", "InvertDistance" },
		{ "EditCondition", "Format == ERTMSDFFormat::Multichannel || Format == ERTMSDFFormat::MultichannelPlusAlpha" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h" },
		{ "UIMax", "2" },
		{ "UIMin", "1" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FBytePropertyParams NewProp_EdgeColoringMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_EdgeColoringMode;
	static const UECodeGen_Private::FIntPropertyParams NewProp_EdgeColoringSeed;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MaxCornerAngle;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ErrorCorrectionMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ErrorCorrectionMode;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinErrorDeviation;
	static const UECodeGen_Private::FDoublePropertyParams NewProp_MinErrorImprovement;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTMSDF_SVGGenerationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, VersionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionNumber_MetaData), NewProp_VersionNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, Format), Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1283093119
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringMode = { "EdgeColoringMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, EdgeColoringMode), Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeColoringMode_MetaData), NewProp_EdgeColoringMode_MetaData) }; // 1670724600
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringSeed = { "EdgeColoringSeed", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, EdgeColoringSeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeColoringSeed_MetaData), NewProp_EdgeColoringSeed_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MaxCornerAngle = { "MaxCornerAngle", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, MaxCornerAngle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxCornerAngle_MetaData), NewProp_MaxCornerAngle_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_ErrorCorrectionMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_ErrorCorrectionMode = { "ErrorCorrectionMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, ErrorCorrectionMode), Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorCorrectionMode_MetaData), NewProp_ErrorCorrectionMode_MetaData) }; // 2032443714
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MinErrorDeviation = { "MinErrorDeviation", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, MinErrorDeviation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinErrorDeviation_MetaData), NewProp_MinErrorDeviation_MetaData) };
const UECodeGen_Private::FDoublePropertyParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MinErrorImprovement = { "MinErrorImprovement", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_SVGGenerationSettings, MinErrorImprovement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MinErrorImprovement_MetaData), NewProp_MinErrorImprovement_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_VersionNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_EdgeColoringSeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MaxCornerAngle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_ErrorCorrectionMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_ErrorCorrectionMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MinErrorDeviation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewProp_MinErrorImprovement,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
	Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings,
	&NewStructOps,
	"RTMSDF_SVGGenerationSettings",
	Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::PropPointers),
	sizeof(FRTMSDF_SVGGenerationSettings),
	alignof(FRTMSDF_SVGGenerationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings.InnerSingleton;
}
// End ScriptStruct FRTMSDF_SVGGenerationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationSettings_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTMSDF_SVGGenerationSettings::StaticStruct, Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings_Statics::NewStructOps, TEXT("RTMSDF_SVGGenerationSettings"), &Z_Registration_Info_UScriptStruct_RTMSDF_SVGGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTMSDF_SVGGenerationSettings), 1414530385U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationSettings_h_2250947455(TEXT("/Script/RTMSDF"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationSettings_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
