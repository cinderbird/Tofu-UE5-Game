// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/Bitmap/RTMSDF_BitmapGenerationAssetData.h"
#include "RTMSDF/Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_BitmapGenerationAssetData() {}

// Begin Cross Module References
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_NoRegister();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Class URTMSDF_BitmapGenerationAssetData
void URTMSDF_BitmapGenerationAssetData::StaticRegisterNativesURTMSDF_BitmapGenerationAssetData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_BitmapGenerationAssetData);
UClass* Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_NoRegister()
{
	return URTMSDF_BitmapGenerationAssetData::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Bitmap to SDF Generation Asset Data [RTMSDF]" },
		{ "IncludePath", "Generation/Bitmap/RTMSDF_BitmapGenerationAssetData.h" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationAssetData.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GenerationSettings_MetaData[] = {
		{ "Category", "Generation" },
		{ "FullyExpand", "TRUE" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationAssetData.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GenerationSettings;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_BitmapGenerationAssetData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::NewProp_GenerationSettings = { "GenerationSettings", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_BitmapGenerationAssetData, GenerationSettings), Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GenerationSettings_MetaData), NewProp_GenerationSettings_MetaData) }; // 1358992823
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::NewProp_GenerationSettings,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_URTMSDF_GenerationAssetData_Base,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::ClassParams = {
	&URTMSDF_BitmapGenerationAssetData::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::PropPointers),
	0,
	0x003010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData()
{
	if (!Z_Registration_Info_UClass_URTMSDF_BitmapGenerationAssetData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_BitmapGenerationAssetData.OuterSingleton, Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_BitmapGenerationAssetData.OuterSingleton;
}
template<> RTMSDF_API UClass* StaticClass<URTMSDF_BitmapGenerationAssetData>()
{
	return URTMSDF_BitmapGenerationAssetData::StaticClass();
}
URTMSDF_BitmapGenerationAssetData::URTMSDF_BitmapGenerationAssetData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_BitmapGenerationAssetData);
URTMSDF_BitmapGenerationAssetData::~URTMSDF_BitmapGenerationAssetData() {}
// End Class URTMSDF_BitmapGenerationAssetData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationAssetData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_BitmapGenerationAssetData, URTMSDF_BitmapGenerationAssetData::StaticClass, TEXT("URTMSDF_BitmapGenerationAssetData"), &Z_Registration_Info_UClass_URTMSDF_BitmapGenerationAssetData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_BitmapGenerationAssetData), 3014892546U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationAssetData_h_801505302(TEXT("/Script/RTMSDF"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationAssetData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationAssetData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
