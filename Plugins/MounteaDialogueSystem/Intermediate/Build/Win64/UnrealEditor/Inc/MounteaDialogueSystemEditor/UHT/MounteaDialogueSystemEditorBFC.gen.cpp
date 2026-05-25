// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Helpers/MounteaDialogueSystemEditorBFC.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemEditorBFC() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueSystemEditorBFC();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueSystemEditorBFC
void UMounteaDialogueSystemEditorBFC::StaticRegisterNativesUMounteaDialogueSystemEditorBFC()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemEditorBFC);
UClass* Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_NoRegister()
{
	return UMounteaDialogueSystemEditorBFC::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Editor Only helper functions.\n */" },
#endif
		{ "IncludePath", "Helpers/MounteaDialogueSystemEditorBFC.h" },
		{ "ModuleRelativePath", "Private/Helpers/MounteaDialogueSystemEditorBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Editor Only helper functions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemEditorBFC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::ClassParams = {
	&UMounteaDialogueSystemEditorBFC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSystemEditorBFC()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSystemEditorBFC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemEditorBFC.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemEditorBFC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSystemEditorBFC.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueSystemEditorBFC>()
{
	return UMounteaDialogueSystemEditorBFC::StaticClass();
}
UMounteaDialogueSystemEditorBFC::UMounteaDialogueSystemEditorBFC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemEditorBFC);
UMounteaDialogueSystemEditorBFC::~UMounteaDialogueSystemEditorBFC() {}
// End Class UMounteaDialogueSystemEditorBFC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemEditorBFC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemEditorBFC, UMounteaDialogueSystemEditorBFC::StaticClass, TEXT("UMounteaDialogueSystemEditorBFC"), &Z_Registration_Info_UClass_UMounteaDialogueSystemEditorBFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemEditorBFC), 4158932841U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemEditorBFC_h_1295638117(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemEditorBFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Helpers_MounteaDialogueSystemEditorBFC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
