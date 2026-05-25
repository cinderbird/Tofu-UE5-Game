// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Private/Importer/Common/RTMSDF_AssetTaggingEditorSubsystem.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_AssetTaggingEditorSubsystem() {}

// Begin Cross Module References
EDITORSUBSYSTEM_API UClass* Z_Construct_UClass_UEditorSubsystem();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_AssetTaggingEditorSubsystem
void URTMSDF_AssetTaggingEditorSubsystem::StaticRegisterNativesURTMSDF_AssetTaggingEditorSubsystem()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_AssetTaggingEditorSubsystem);
UClass* Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_NoRegister()
{
	return URTMSDF_AssetTaggingEditorSubsystem::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Importer/Common/RTMSDF_AssetTaggingEditorSubsystem.h" },
		{ "ModuleRelativePath", "Private/Importer/Common/RTMSDF_AssetTaggingEditorSubsystem.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_AssetTaggingEditorSubsystem>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEditorSubsystem,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::ClassParams = {
	&URTMSDF_AssetTaggingEditorSubsystem::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem()
{
	if (!Z_Registration_Info_UClass_URTMSDF_AssetTaggingEditorSubsystem.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_AssetTaggingEditorSubsystem.OuterSingleton, Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_AssetTaggingEditorSubsystem.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_AssetTaggingEditorSubsystem>()
{
	return URTMSDF_AssetTaggingEditorSubsystem::StaticClass();
}
URTMSDF_AssetTaggingEditorSubsystem::URTMSDF_AssetTaggingEditorSubsystem() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_AssetTaggingEditorSubsystem);
URTMSDF_AssetTaggingEditorSubsystem::~URTMSDF_AssetTaggingEditorSubsystem() {}
// End Class URTMSDF_AssetTaggingEditorSubsystem

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Common_RTMSDF_AssetTaggingEditorSubsystem_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_AssetTaggingEditorSubsystem, URTMSDF_AssetTaggingEditorSubsystem::StaticClass, TEXT("URTMSDF_AssetTaggingEditorSubsystem"), &Z_Registration_Info_UClass_URTMSDF_AssetTaggingEditorSubsystem, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_AssetTaggingEditorSubsystem), 187807233U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Common_RTMSDF_AssetTaggingEditorSubsystem_h_4145406282(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Common_RTMSDF_AssetTaggingEditorSubsystem_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_Importer_Common_RTMSDF_AssetTaggingEditorSubsystem_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
