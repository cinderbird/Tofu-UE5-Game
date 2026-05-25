// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/Common/RTMSDF_CommonGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_CommonGenerationSettings() {}

// Begin Cross Module References
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Enum ERTMSDFDistanceMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDFDistanceMode;
static UEnum* ERTMSDFDistanceMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDFDistanceMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDFDistanceMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDFDistanceMode"));
	}
	return Z_Registration_Info_UEnum_ERTMSDFDistanceMode.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDFDistanceMode>()
{
	return ERTMSDFDistanceMode_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Absolute.Comment", "// Absolute range in source file\n" },
		{ "Absolute.Name", "ERTMSDFDistanceMode::Absolute" },
		{ "Absolute.ToolTip", "Absolute range in source file" },
		{ "DisplayName", "MSDF Distance Mode [RTMSDF]" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
		{ "Normalized.Comment", "/* Normalized against source file (shortest edge)\n\x09 * Recommended as this will give consistent results in materials if you change the source or target resolution of the data */" },
		{ "Normalized.Name", "ERTMSDFDistanceMode::Normalized" },
		{ "Normalized.ToolTip", "Normalized against source file (shortest edge)\n       * Recommended as this will give consistent results in materials if you change the source or target resolution of the data" },
		{ "Pixels.Comment", "// Absolute range in output SDF\n" },
		{ "Pixels.Name", "ERTMSDFDistanceMode::Pixels" },
		{ "Pixels.ToolTip", "Absolute range in output SDF" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDFDistanceMode::Normalized", (int64)ERTMSDFDistanceMode::Normalized },
		{ "ERTMSDFDistanceMode::Absolute", (int64)ERTMSDFDistanceMode::Absolute },
		{ "ERTMSDFDistanceMode::Pixels", (int64)ERTMSDFDistanceMode::Pixels },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDFDistanceMode",
	"ERTMSDFDistanceMode",
	Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode()
{
	if (!Z_Registration_Info_UEnum_ERTMSDFDistanceMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDFDistanceMode.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDFDistanceMode.InnerSingleton;
}
// End Enum ERTMSDFDistanceMode

// Begin ScriptStruct FRTMSDF_CommonGenerationSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings;
class UScriptStruct* FRTMSDF_CommonGenerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("RTMSDF_CommonGenerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.OuterSingleton;
}
template<> RTMSDF_API UScriptStruct* StaticStruct<FRTMSDF_CommonGenerationSettings>()
{
	return FRTMSDF_CommonGenerationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Common SDF Import Settings [RTMSDF]" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DistanceMode_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How the distance field size is determined */" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How the distance field size is determined" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NormalizedDistance_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMax", "0.450000" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Distance field size normalized against shortest edge of texture, used if distance mode = Normalized\n\x09 * Recommended as this will give consistent results in materials if you change the source or target resolution of the data */" },
#endif
		{ "EditCondition", "DistanceMode == ERTMSDFDistanceMode::Normalized || bIsInProjectSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance field size normalized against shortest edge of texture, used if distance mode = Normalized\n       * Recommended as this will give consistent results in materials if you change the source or target resolution of the data" },
#endif
		{ "UIMax", "0.450000" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AbsoluteDistance_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Distance field size as an absolute size in the source file, used if distance mode = Absolute */" },
#endif
		{ "EditCondition", "DistanceMode == ERTMSDFDistanceMode::Absolute || bIsInProjectSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance field size as an absolute size in the source file, used if distance mode = Absolute" },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PixelDistance_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMin", "1" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Distance field size as pixels in the output SDF texture, used if distance mode =  Pixels */" },
#endif
		{ "EditCondition", "DistanceMode == ERTMSDFDistanceMode::Pixels || bIsInProjectSettings" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Distance field size as pixels in the output SDF texture, used if distance mode =  Pixels" },
#endif
		{ "UIMin", "1" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertDistance_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Invert distance? (pixels inside the shape will be +ve, outside -ve) */" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Invert distance? (pixels inside the shape will be +ve, outside -ve)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bScaleToFitDistance_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Adjusts the size of the output distance field to accomodate the distance field. If false, source assets will need to be authored to contain suitable margins\n" },
#endif
		{ "DisplayAfter", "bInvertDistance" },
		{ "EditCondition", "True" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adjusts the size of the output distance field to accomodate the distance field. If false, source assets will need to be authored to contain suitable margins" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsInProjectSettings_MetaData[] = {
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_CommonGenerationSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DistanceMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DistanceMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_NormalizedDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_AbsoluteDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_PixelDistance;
	static void NewProp_bInvertDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertDistance;
	static void NewProp_bScaleToFitDistance_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bScaleToFitDistance;
	static void NewProp_bIsInProjectSettings_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsInProjectSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTMSDF_CommonGenerationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_DistanceMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_DistanceMode = { "DistanceMode", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_CommonGenerationSettings, DistanceMode), Z_Construct_UEnum_RTMSDF_ERTMSDFDistanceMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DistanceMode_MetaData), NewProp_DistanceMode_MetaData) }; // 3866696092
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_NormalizedDistance = { "NormalizedDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_CommonGenerationSettings, NormalizedDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NormalizedDistance_MetaData), NewProp_NormalizedDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_AbsoluteDistance = { "AbsoluteDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_CommonGenerationSettings, AbsoluteDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AbsoluteDistance_MetaData), NewProp_AbsoluteDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_PixelDistance = { "PixelDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_CommonGenerationSettings, PixelDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PixelDistance_MetaData), NewProp_PixelDistance_MetaData) };
void Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bInvertDistance_SetBit(void* Obj)
{
	((FRTMSDF_CommonGenerationSettings*)Obj)->bInvertDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bInvertDistance = { "bInvertDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRTMSDF_CommonGenerationSettings), &Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bInvertDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertDistance_MetaData), NewProp_bInvertDistance_MetaData) };
void Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bScaleToFitDistance_SetBit(void* Obj)
{
	((FRTMSDF_CommonGenerationSettings*)Obj)->bScaleToFitDistance = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bScaleToFitDistance = { "bScaleToFitDistance", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRTMSDF_CommonGenerationSettings), &Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bScaleToFitDistance_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bScaleToFitDistance_MetaData), NewProp_bScaleToFitDistance_MetaData) };
void Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bIsInProjectSettings_SetBit(void* Obj)
{
	((FRTMSDF_CommonGenerationSettings*)Obj)->bIsInProjectSettings = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bIsInProjectSettings = { "bIsInProjectSettings", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(FRTMSDF_CommonGenerationSettings), &Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bIsInProjectSettings_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsInProjectSettings_MetaData), NewProp_bIsInProjectSettings_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_DistanceMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_DistanceMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_NormalizedDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_AbsoluteDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_PixelDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bInvertDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bScaleToFitDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewProp_bIsInProjectSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	&NewStructOps,
	"RTMSDF_CommonGenerationSettings",
	Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::PropPointers),
	sizeof(FRTMSDF_CommonGenerationSettings),
	alignof(FRTMSDF_CommonGenerationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings.InnerSingleton;
}
// End ScriptStruct FRTMSDF_CommonGenerationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTMSDFDistanceMode_StaticEnum, TEXT("ERTMSDFDistanceMode"), &Z_Registration_Info_UEnum_ERTMSDFDistanceMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3866696092U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTMSDF_CommonGenerationSettings::StaticStruct, Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics::NewStructOps, TEXT("RTMSDF_CommonGenerationSettings"), &Z_Registration_Info_UScriptStruct_RTMSDF_CommonGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTMSDF_CommonGenerationSettings), 2230420113U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_725477005(TEXT("/Script/RTMSDF"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
