// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Public/Runtime/Interchange/RTMSDF_InterchangePipeline_Texture.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_InterchangePipeline_Texture() {}

// Begin Cross Module References
INTERCHANGECORE_API UClass* Z_Construct_UClass_UInterchangePipelineBase();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_InterchangePipeline_Texture
void URTMSDF_InterchangePipeline_Texture::StaticRegisterNativesURTMSDF_InterchangePipeline_Texture()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_InterchangePipeline_Texture);
UClass* Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_NoRegister()
{
	return URTMSDF_InterchangePipeline_Texture::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "Runtime/Interchange/RTMSDF_InterchangePipeline_Texture.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Runtime/Interchange/RTMSDF_InterchangePipeline_Texture.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_InterchangePipeline_Texture>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterchangePipelineBase,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::ClassParams = {
	&URTMSDF_InterchangePipeline_Texture::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture()
{
	if (!Z_Registration_Info_UClass_URTMSDF_InterchangePipeline_Texture.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_InterchangePipeline_Texture.OuterSingleton, Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_InterchangePipeline_Texture.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_InterchangePipeline_Texture>()
{
	return URTMSDF_InterchangePipeline_Texture::StaticClass();
}
URTMSDF_InterchangePipeline_Texture::URTMSDF_InterchangePipeline_Texture(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_InterchangePipeline_Texture);
URTMSDF_InterchangePipeline_Texture::~URTMSDF_InterchangePipeline_Texture() {}
// End Class URTMSDF_InterchangePipeline_Texture

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Runtime_Interchange_RTMSDF_InterchangePipeline_Texture_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_InterchangePipeline_Texture, URTMSDF_InterchangePipeline_Texture::StaticClass, TEXT("URTMSDF_InterchangePipeline_Texture"), &Z_Registration_Info_UClass_URTMSDF_InterchangePipeline_Texture, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_InterchangePipeline_Texture), 2517159999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Runtime_Interchange_RTMSDF_InterchangePipeline_Texture_h_537309523(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Runtime_Interchange_RTMSDF_InterchangePipeline_Texture_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Runtime_Interchange_RTMSDF_InterchangePipeline_Texture_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
