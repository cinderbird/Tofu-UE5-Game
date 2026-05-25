// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Private/Importer/Bitmap/RTMSDF_BitmapFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_BitmapFactory() {}

// Begin Cross Module References
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_BitmapFactory();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_BitmapFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UTextureFactory();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_BitmapFactory
void URTMSDF_BitmapFactory::StaticRegisterNativesURTMSDF_BitmapFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_BitmapFactory);
UClass* Z_Construct_UClass_URTMSDF_BitmapFactory_NoRegister()
{
	return URTMSDF_BitmapFactory::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_BitmapFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Object" },
		{ "IncludePath", "Importer/Bitmap/RTMSDF_BitmapFactory.h" },
		{ "ModuleRelativePath", "Private/Importer/Bitmap/RTMSDF_BitmapFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_BitmapFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UTextureFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::ClassParams = {
	&URTMSDF_BitmapFactory::StaticClass,
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
	0x000020A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_BitmapFactory()
{
	if (!Z_Registration_Info_UClass_URTMSDF_BitmapFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_BitmapFactory.OuterSingleton, Z_Construct_UClass_URTMSDF_BitmapFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_BitmapFactory.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_BitmapFactory>()
{
	return URTMSDF_BitmapFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_BitmapFactory);
URTMSDF_BitmapFactory::~URTMSDF_BitmapFactory() {}
// End Class URTMSDF_BitmapFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Bitmap_RTMSDF_BitmapFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_BitmapFactory, URTMSDF_BitmapFactory::StaticClass, TEXT("URTMSDF_BitmapFactory"), &Z_Registration_Info_UClass_URTMSDF_BitmapFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_BitmapFactory), 2726373559U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Bitmap_RTMSDF_BitmapFactory_h_996423147(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Bitmap_RTMSDF_BitmapFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Bitmap_RTMSDF_BitmapFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
