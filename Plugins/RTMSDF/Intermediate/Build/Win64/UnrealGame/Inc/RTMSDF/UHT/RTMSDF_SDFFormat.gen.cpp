// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/Common/RTMSDF_SDFFormat.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_SDFFormat() {}

// Begin Cross Module References
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Enum ERTMSDF_SDFFormat
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_SDFFormat;
static UEnum* ERTMSDF_SDFFormat_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_SDFFormat"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_SDFFormat>()
{
	return ERTMSDF_SDFFormat_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "DisplayName", "SDF Format [RTMSDF]" },
		{ "Invalid.Name", "ERTMSDF_SDFFormat::Invalid" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ERTMSDF_SDFFormat::MAX" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_SDFFormat.h" },
		{ "Multichannel.Comment", "// MSDF in RGB\n" },
		{ "Multichannel.Name", "ERTMSDF_SDFFormat::Multichannel" },
		{ "Multichannel.ToolTip", "MSDF in RGB" },
		{ "MultichannelPlusAlpha.Comment", "// MSDF in RGBA with true SDF in the Alpha channel\n" },
		{ "MultichannelPlusAlpha.Name", "ERTMSDF_SDFFormat::MultichannelPlusAlpha" },
		{ "MultichannelPlusAlpha.ToolTip", "MSDF in RGBA with true SDF in the Alpha channel" },
		{ "SeparateChannels.Comment", "/* Treat each channel (RGBA) separately - either as an SDF, the original source data or discard */" },
		{ "SeparateChannels.Name", "ERTMSDF_SDFFormat::SeparateChannels" },
		{ "SeparateChannels.ToolTip", "Treat each channel (RGBA) separately - either as an SDF, the original source data or discard" },
		{ "SingleChannel.Comment", "// Traditional 'true' SDF\n" },
		{ "SingleChannel.Name", "ERTMSDF_SDFFormat::SingleChannel" },
		{ "SingleChannel.ToolTip", "Traditional 'true' SDF" },
		{ "SingleChannelPseudo.Comment", "// Pseudo SDF - single channel SDF with features similar to MSDF / Multichannel (sharp corners etc.)\n" },
		{ "SingleChannelPseudo.Name", "ERTMSDF_SDFFormat::SingleChannelPseudo" },
		{ "SingleChannelPseudo.ToolTip", "Pseudo SDF - single channel SDF with features similar to MSDF / Multichannel (sharp corners etc.)" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_SDFFormat::SingleChannel", (int64)ERTMSDF_SDFFormat::SingleChannel },
		{ "ERTMSDF_SDFFormat::SingleChannelPseudo", (int64)ERTMSDF_SDFFormat::SingleChannelPseudo },
		{ "ERTMSDF_SDFFormat::SeparateChannels", (int64)ERTMSDF_SDFFormat::SeparateChannels },
		{ "ERTMSDF_SDFFormat::Multichannel", (int64)ERTMSDF_SDFFormat::Multichannel },
		{ "ERTMSDF_SDFFormat::MultichannelPlusAlpha", (int64)ERTMSDF_SDFFormat::MultichannelPlusAlpha },
		{ "ERTMSDF_SDFFormat::MAX", (int64)ERTMSDF_SDFFormat::MAX },
		{ "ERTMSDF_SDFFormat::Invalid", (int64)ERTMSDF_SDFFormat::Invalid },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_SDFFormat",
	"ERTMSDF_SDFFormat",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_SDFFormat.InnerSingleton;
}
// End Enum ERTMSDF_SDFFormat

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_SDFFormat_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTMSDF_SDFFormat_StaticEnum, TEXT("ERTMSDF_SDFFormat"), &Z_Registration_Info_UEnum_ERTMSDF_SDFFormat, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1283093119U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_SDFFormat_h_2934243390(TEXT("/Script/RTMSDF"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_SDFFormat_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_SDFFormat_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
