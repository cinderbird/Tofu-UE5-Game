// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Private/Importer/SVG/RTMSDF_SVGFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_SVGFactory() {}

// Begin Cross Module References
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_SVGFactory();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_SVGFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_SVGFactory
void URTMSDF_SVGFactory::StaticRegisterNativesURTMSDF_SVGFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_SVGFactory);
UClass* Z_Construct_UClass_URTMSDF_SVGFactory_NoRegister()
{
	return URTMSDF_SVGFactory::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_SVGFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Importer/SVG/RTMSDF_SVGFactory.h" },
		{ "ModuleRelativePath", "Private/Importer/SVG/RTMSDF_SVGFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_SVGFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_SVGFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_SVGFactory_Statics::ClassParams = {
	&URTMSDF_SVGFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_SVGFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_SVGFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_SVGFactory()
{
	if (!Z_Registration_Info_UClass_URTMSDF_SVGFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_SVGFactory.OuterSingleton, Z_Construct_UClass_URTMSDF_SVGFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_SVGFactory.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_SVGFactory>()
{
	return URTMSDF_SVGFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_SVGFactory);
URTMSDF_SVGFactory::~URTMSDF_SVGFactory() {}
// End Class URTMSDF_SVGFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_SVG_RTMSDF_SVGFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_SVGFactory, URTMSDF_SVGFactory::StaticClass, TEXT("URTMSDF_SVGFactory"), &Z_Registration_Info_UClass_URTMSDF_SVGFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_SVGFactory), 374712508U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_SVG_RTMSDF_SVGFactory_h_1161998278(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_SVG_RTMSDF_SVGFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_SVG_RTMSDF_SVGFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
