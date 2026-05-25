// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Layout/MounteaDialogueGraphLayoutStrategy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphLayoutStrategy() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueGraphLayoutStrategy
void UMounteaDialogueGraphLayoutStrategy::StaticRegisterNativesUMounteaDialogueGraphLayoutStrategy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphLayoutStrategy);
UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_NoRegister()
{
	return UMounteaDialogueGraphLayoutStrategy::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Layout/MounteaDialogueGraphLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/Layout/MounteaDialogueGraphLayoutStrategy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphLayoutStrategy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::ClassParams = {
	&UMounteaDialogueGraphLayoutStrategy::StaticClass,
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
	0x001000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphLayoutStrategy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphLayoutStrategy.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphLayoutStrategy.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueGraphLayoutStrategy>()
{
	return UMounteaDialogueGraphLayoutStrategy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphLayoutStrategy);
// End Class UMounteaDialogueGraphLayoutStrategy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_MounteaDialogueGraphLayoutStrategy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy, UMounteaDialogueGraphLayoutStrategy::StaticClass, TEXT("UMounteaDialogueGraphLayoutStrategy"), &Z_Registration_Info_UClass_UMounteaDialogueGraphLayoutStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphLayoutStrategy), 3635274530U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_MounteaDialogueGraphLayoutStrategy_h_4150872250(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_MounteaDialogueGraphLayoutStrategy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_MounteaDialogueGraphLayoutStrategy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
