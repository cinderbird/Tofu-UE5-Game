// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/Common/RTMSDF_GenerationAssetData_Base.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_GenerationAssetData_Base() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UAssetUserData();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Class URTMSDF_GenerationAssetData_Base
void URTMSDF_GenerationAssetData_Base::StaticRegisterNativesURTMSDF_GenerationAssetData_Base()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_GenerationAssetData_Base);
UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_NoRegister()
{
	return URTMSDF_GenerationAssetData_Base::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Bitmap to SDF Generation Asset Data [RTMSDF]" },
		{ "IncludePath", "Generation/Common/RTMSDF_GenerationAssetData_Base.h" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_GenerationAssetData_Base.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UVRange_MetaData[] = {
		{ "Category", "Cached" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically calculated property. Useful for calculations in materials. Can be accessed using the Blueprint Function Library\n" },
#endif
		{ "DisplayName", "UV Range" },
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_GenerationAssetData_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically calculated property. Useful for calculations in materials. Can be accessed using the Blueprint Function Library" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceDimensions_MetaData[] = {
		{ "Category", "Cached" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Automatically calculated property. Useful for calculations in materials. Can be accessed using the Blueprint Function Library\n" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Common/RTMSDF_GenerationAssetData_Base.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Automatically calculated property. Useful for calculations in materials. Can be accessed using the Blueprint Function Library" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_UVRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceDimensions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_GenerationAssetData_Base>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::NewProp_UVRange = { "UVRange", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_GenerationAssetData_Base, UVRange), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UVRange_MetaData), NewProp_UVRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::NewProp_SourceDimensions = { "SourceDimensions", nullptr, (EPropertyFlags)0x0010040000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_GenerationAssetData_Base, SourceDimensions), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceDimensions_MetaData), NewProp_SourceDimensions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::NewProp_UVRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::NewProp_SourceDimensions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UAssetUserData,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::ClassParams = {
	&URTMSDF_GenerationAssetData_Base::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::PropPointers),
	0,
	0x003010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_GenerationAssetData_Base()
{
	if (!Z_Registration_Info_UClass_URTMSDF_GenerationAssetData_Base.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_GenerationAssetData_Base.OuterSingleton, Z_Construct_UClass_URTMSDF_GenerationAssetData_Base_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_GenerationAssetData_Base.OuterSingleton;
}
template<> RTMSDF_API UClass* StaticClass<URTMSDF_GenerationAssetData_Base>()
{
	return URTMSDF_GenerationAssetData_Base::StaticClass();
}
URTMSDF_GenerationAssetData_Base::URTMSDF_GenerationAssetData_Base(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_GenerationAssetData_Base);
URTMSDF_GenerationAssetData_Base::~URTMSDF_GenerationAssetData_Base() {}
// End Class URTMSDF_GenerationAssetData_Base

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_GenerationAssetData_Base_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_GenerationAssetData_Base, URTMSDF_GenerationAssetData_Base::StaticClass, TEXT("URTMSDF_GenerationAssetData_Base"), &Z_Registration_Info_UClass_URTMSDF_GenerationAssetData_Base, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_GenerationAssetData_Base), 3895470690U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_GenerationAssetData_Base_h_93024748(TEXT("/Script/RTMSDF"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_GenerationAssetData_Base_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_GenerationAssetData_Base_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
