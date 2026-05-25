// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Helpers/MounteaDialogueSystemImportExportHelpers.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemImportExportHelpers() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueSystemImportExportHelpers
void UMounteaDialogueSystemImportExportHelpers::StaticRegisterNativesUMounteaDialogueSystemImportExportHelpers()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemImportExportHelpers);
UClass* Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_NoRegister()
{
	return UMounteaDialogueSystemImportExportHelpers::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\n */" },
#endif
		{ "IncludePath", "Helpers/MounteaDialogueSystemImportExportHelpers.h" },
		{ "ModuleRelativePath", "Private/Helpers/MounteaDialogueSystemImportExportHelpers.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemImportExportHelpers>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::ClassParams = {
	&UMounteaDialogueSystemImportExportHelpers::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSystemImportExportHelpers.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemImportExportHelpers.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSystemImportExportHelpers.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueSystemImportExportHelpers>()
{
	return UMounteaDialogueSystemImportExportHelpers::StaticClass();
}
UMounteaDialogueSystemImportExportHelpers::UMounteaDialogueSystemImportExportHelpers(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemImportExportHelpers);
UMounteaDialogueSystemImportExportHelpers::~UMounteaDialogueSystemImportExportHelpers() {}
// End Class UMounteaDialogueSystemImportExportHelpers

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemImportExportHelpers_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemImportExportHelpers, UMounteaDialogueSystemImportExportHelpers::StaticClass, TEXT("UMounteaDialogueSystemImportExportHelpers"), &Z_Registration_Info_UClass_UMounteaDialogueSystemImportExportHelpers, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemImportExportHelpers), 3496314020U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemImportExportHelpers_h_1367467738(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemImportExportHelpers_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemImportExportHelpers_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
