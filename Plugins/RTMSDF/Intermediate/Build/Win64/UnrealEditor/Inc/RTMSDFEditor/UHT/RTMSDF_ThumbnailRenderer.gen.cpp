// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Private/Thumbnails/RTMSDF_ThumbnailRenderer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_ThumbnailRenderer() {}

// Begin Cross Module References
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_ThumbnailRenderer();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_ThumbnailRenderer_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureThumbnailRenderer();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_ThumbnailRenderer
void URTMSDF_ThumbnailRenderer::StaticRegisterNativesURTMSDF_ThumbnailRenderer()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_ThumbnailRenderer);
UClass* Z_Construct_UClass_URTMSDF_ThumbnailRenderer_NoRegister()
{
	return URTMSDF_ThumbnailRenderer::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Thumbnails/RTMSDF_ThumbnailRenderer.h" },
		{ "ModuleRelativePath", "Private/Thumbnails/RTMSDF_ThumbnailRenderer.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_ThumbnailRenderer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureThumbnailRenderer,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::ClassParams = {
	&URTMSDF_ThumbnailRenderer::StaticClass,
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
	0x000000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_ThumbnailRenderer()
{
	if (!Z_Registration_Info_UClass_URTMSDF_ThumbnailRenderer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_ThumbnailRenderer.OuterSingleton, Z_Construct_UClass_URTMSDF_ThumbnailRenderer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_ThumbnailRenderer.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_ThumbnailRenderer>()
{
	return URTMSDF_ThumbnailRenderer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_ThumbnailRenderer);
URTMSDF_ThumbnailRenderer::~URTMSDF_ThumbnailRenderer() {}
// End Class URTMSDF_ThumbnailRenderer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Thumbnails_RTMSDF_ThumbnailRenderer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_ThumbnailRenderer, URTMSDF_ThumbnailRenderer::StaticClass, TEXT("URTMSDF_ThumbnailRenderer"), &Z_Registration_Info_UClass_URTMSDF_ThumbnailRenderer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_ThumbnailRenderer), 2065024423U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Thumbnails_RTMSDF_ThumbnailRenderer_h_333442498(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Thumbnails_RTMSDF_ThumbnailRenderer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Thumbnails_RTMSDF_ThumbnailRenderer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
