// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/SVG/RTMSDF_SVGGenerationAssetData.h"
#include "RTMSDF/Public/Generation/SVG/RTMSDF_SVGGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_SVGGenerationAssetData() {}

// Begin Cross Module References
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_SVGGenerationAssetData();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_NoRegister();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Class URTMSDF_SVGGenerationAssetData
void URTMSDF_SVGGenerationAssetData::StaticRegisterNativesURTMSDF_SVGGenerationAssetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_SVGGenerationAssetData);
UClass* Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_NoRegister()
{
	return URTMSDF_SVGGenerationAssetData::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "SVG to MSDF Generation Asset Data [RTMSDF]" },
		{ "IncludePath", "Generation/SVG/RTMSDF_SVGGenerationAssetData.h" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationAssetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSettings_MetaData[] = {
		{ "Category", "Generation" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Generation/SVG/RTMSDF_SVGGenerationAssetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_SVGGenerationAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::NewProp_GenerationSettings = { "GenerationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_SVGGenerationAssetData, GenerationSettings), Z_Construct_UScriptStruct_FRTMSDF_SVGGenerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationSettings_MetaData), NewProp_GenerationSettings_MetaData) }; // 1414530385
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::NewProp_GenerationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTMSDF_GenerationAssetData_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::ClassParams = {
	&URTMSDF_SVGGenerationAssetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_SVGGenerationAssetData()
{
	if (!Z_Registration_Info_UClass_URTMSDF_SVGGenerationAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_SVGGenerationAssetData.OuterSingleton, Z_Construct_UClass_URTMSDF_SVGGenerationAssetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_SVGGenerationAssetData.OuterSingleton;
}
template<> RTMSDF_API UClass* StaticClass<URTMSDF_SVGGenerationAssetData>()
{
	return URTMSDF_SVGGenerationAssetData::StaticClass();
}
URTMSDF_SVGGenerationAssetData::URTMSDF_SVGGenerationAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_SVGGenerationAssetData);
URTMSDF_SVGGenerationAssetData::~URTMSDF_SVGGenerationAssetData() {}
// End Class URTMSDF_SVGGenerationAssetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationAssetData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_SVGGenerationAssetData, URTMSDF_SVGGenerationAssetData::StaticClass, TEXT("URTMSDF_SVGGenerationAssetData"), &Z_Registration_Info_UClass_URTMSDF_SVGGenerationAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_SVGGenerationAssetData), 4282879286U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationAssetData_h_1022556906(TEXT("/Script/RTMSDF"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationAssetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTMSDF_SVGGenerationAssetData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
