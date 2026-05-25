// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/SVG/RTM_MSDFEnums.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTM_MSDFEnums() {}

// Begin Cross Module References
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Enum ERTMSDF_MSDFColoringMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode;
static UEnum* ERTMSDF_MSDFColoringMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_MSDFColoringMode"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_MSDFColoringMode>()
{
	return ERTMSDF_MSDFColoringMode_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DisplayName", "MSDF Coloring Mode [RTMSDF]" },
		{ "Distance.Comment", "// Theoretically best, but slowest\n" },
		{ "Distance.Name", "ERTMSDF_MSDFColoringMode::Distance" },
		{ "Distance.ToolTip", "Theoretically best, but slowest" },
		{ "InkTrap.Comment", "// Specialized for fonts with ink traps as features\n" },
		{ "InkTrap.Name", "ERTMSDF_MSDFColoringMode::InkTrap" },
		{ "InkTrap.ToolTip", "Specialized for fonts with ink traps as features" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ERTMSDF_MSDFColoringMode::MAX" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTM_MSDFEnums.h" },
		{ "None.Comment", "// None just produces a PSDF in BGRA, so effectively useless\n" },
		{ "None.Hidden", "" },
		{ "None.Name", "ERTMSDF_MSDFColoringMode::None" },
		{ "None.ToolTip", "None just produces a PSDF in BGRA, so effectively useless" },
		{ "Simple.Comment", "// Simplest method, uses angle threshold (3 rads) to test for corners.\n" },
		{ "Simple.Name", "ERTMSDF_MSDFColoringMode::Simple" },
		{ "Simple.ToolTip", "Simplest method, uses angle threshold (3 rads) to test for corners." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_MSDFColoringMode::None", (int64)ERTMSDF_MSDFColoringMode::None },
		{ "ERTMSDF_MSDFColoringMode::Simple", (int64)ERTMSDF_MSDFColoringMode::Simple },
		{ "ERTMSDF_MSDFColoringMode::InkTrap", (int64)ERTMSDF_MSDFColoringMode::InkTrap },
		{ "ERTMSDF_MSDFColoringMode::Distance", (int64)ERTMSDF_MSDFColoringMode::Distance },
		{ "ERTMSDF_MSDFColoringMode::MAX", (int64)ERTMSDF_MSDFColoringMode::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_MSDFColoringMode",
	"ERTMSDF_MSDFColoringMode",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFColoringMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode.InnerSingleton;
}
// End Enum ERTMSDF_MSDFColoringMode

// Begin Enum ERTMSDF_MSDFErrorCorrectionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode;
static UEnum* ERTMSDF_MSDFErrorCorrectionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_MSDFErrorCorrectionMode"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_MSDFErrorCorrectionMode>()
{
	return ERTMSDF_MSDFErrorCorrectionMode_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "DisplayName", "MSDF Error Correction Mode [RTMSDF]" },
		{ "EdgeOnlyBalanced.Comment", "// Only correct artifacts at edges, Distance checks at edges only\n" },
		{ "EdgeOnlyBalanced.DisplayName", "Edge Only - Balanced" },
		{ "EdgeOnlyBalanced.Name", "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyBalanced" },
		{ "EdgeOnlyBalanced.ToolTip", "Only correct artifacts at edges, Distance checks at edges only" },
		{ "EdgeOnlyFast.Comment", "// Only correct artifacts at edges. No distance checks\n" },
		{ "EdgeOnlyFast.DisplayName", "Edge Only - Fast" },
		{ "EdgeOnlyFast.Name", "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFast" },
		{ "EdgeOnlyFast.ToolTip", "Only correct artifacts at edges. No distance checks" },
		{ "EdgeOnlyFull.Comment", "// Only correct artifacts at edges. Full distance checks\n" },
		{ "EdgeOnlyFull.DisplayName", "Edge Only - Full" },
		{ "EdgeOnlyFull.Name", "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFull" },
		{ "EdgeOnlyFull.ToolTip", "Only correct artifacts at edges. Full distance checks" },
		{ "EdgePriorityFast.Comment", "// Correct all artifacts, but prioritise preserving edges and corners. No distance checks\n" },
		{ "EdgePriorityFast.DisplayName", "Edge Priority - Fast" },
		{ "EdgePriorityFast.Name", "ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFast" },
		{ "EdgePriorityFast.ToolTip", "Correct all artifacts, but prioritise preserving edges and corners. No distance checks" },
		{ "EdgePriorityFull.Comment", "// Correct all artifacts, but prioritise preserving edges and corners. Full distance checks\n" },
		{ "EdgePriorityFull.DisplayName", "Edge Priority - Full" },
		{ "EdgePriorityFull.Name", "ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFull" },
		{ "EdgePriorityFull.ToolTip", "Correct all artifacts, but prioritise preserving edges and corners. Full distance checks" },
		{ "IndiscriminateFast.Comment", "// Correct all artifacts. No distance checks\n" },
		{ "IndiscriminateFast.DisplayName", "Indiscriminate - Fast" },
		{ "IndiscriminateFast.Name", "ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFast" },
		{ "IndiscriminateFast.ToolTip", "Correct all artifacts. No distance checks" },
		{ "IndiscriminateFull.Comment", "// Correct all artifacts. Full distance checks\n" },
		{ "IndiscriminateFull.DisplayName", "Indiscriminate - Full" },
		{ "IndiscriminateFull.Name", "ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFull" },
		{ "IndiscriminateFull.ToolTip", "Correct all artifacts. Full distance checks" },
		{ "MAX.Hidden", "" },
		{ "MAX.Name", "ERTMSDF_MSDFErrorCorrectionMode::MAX" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTM_MSDFEnums.h" },
		{ "None.Comment", "// Error Correction Disabled\n" },
		{ "None.Name", "ERTMSDF_MSDFErrorCorrectionMode::None" },
		{ "None.ToolTip", "Error Correction Disabled" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_MSDFErrorCorrectionMode::None", (int64)ERTMSDF_MSDFErrorCorrectionMode::None },
		{ "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFast", (int64)ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFast },
		{ "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyBalanced", (int64)ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyBalanced },
		{ "ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFull", (int64)ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFull },
		{ "ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFast", (int64)ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFast },
		{ "ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFull", (int64)ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFull },
		{ "ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFast", (int64)ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFast },
		{ "ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFull", (int64)ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFull },
		{ "ERTMSDF_MSDFErrorCorrectionMode::MAX", (int64)ERTMSDF_MSDFErrorCorrectionMode::MAX },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_MSDFErrorCorrectionMode",
	"ERTMSDF_MSDFErrorCorrectionMode",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_MSDFErrorCorrectionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode.InnerSingleton;
}
// End Enum ERTMSDF_MSDFErrorCorrectionMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTM_MSDFEnums_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTMSDF_MSDFColoringMode_StaticEnum, TEXT("ERTMSDF_MSDFColoringMode"), &Z_Registration_Info_UEnum_ERTMSDF_MSDFColoringMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1670724600U) },
		{ ERTMSDF_MSDFErrorCorrectionMode_StaticEnum, TEXT("ERTMSDF_MSDFErrorCorrectionMode"), &Z_Registration_Info_UEnum_ERTMSDF_MSDFErrorCorrectionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2032443714U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTM_MSDFEnums_h_1259339454(TEXT("/Script/RTMSDF"),
	nullptr, 0,
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTM_MSDFEnums_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTM_MSDFEnums_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
