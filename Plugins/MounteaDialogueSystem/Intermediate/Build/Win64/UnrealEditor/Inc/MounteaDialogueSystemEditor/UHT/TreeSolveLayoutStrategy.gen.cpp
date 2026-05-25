// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Layout/TreeSolveLayoutStrategy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeTreeSolveLayoutStrategy() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UTreeSolveLayoutStrategy();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UTreeSolveLayoutStrategy_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UTreeSolveLayoutStrategy
void UTreeSolveLayoutStrategy::StaticRegisterNativesUTreeSolveLayoutStrategy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UTreeSolveLayoutStrategy);
UClass* Z_Construct_UClass_UTreeSolveLayoutStrategy_NoRegister()
{
	return UTreeSolveLayoutStrategy::StaticClass();
}
struct Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Layout/TreeSolveLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/Layout/TreeSolveLayoutStrategy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UTreeSolveLayoutStrategy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::ClassParams = {
	&UTreeSolveLayoutStrategy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::Class_MetaDataParams), Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UTreeSolveLayoutStrategy()
{
	if (!Z_Registration_Info_UClass_UTreeSolveLayoutStrategy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UTreeSolveLayoutStrategy.OuterSingleton, Z_Construct_UClass_UTreeSolveLayoutStrategy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UTreeSolveLayoutStrategy.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UTreeSolveLayoutStrategy>()
{
	return UTreeSolveLayoutStrategy::StaticClass();
}
UTreeSolveLayoutStrategy::UTreeSolveLayoutStrategy() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UTreeSolveLayoutStrategy);
UTreeSolveLayoutStrategy::~UTreeSolveLayoutStrategy() {}
// End Class UTreeSolveLayoutStrategy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_TreeSolveLayoutStrategy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UTreeSolveLayoutStrategy, UTreeSolveLayoutStrategy::StaticClass, TEXT("UTreeSolveLayoutStrategy"), &Z_Registration_Info_UClass_UTreeSolveLayoutStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UTreeSolveLayoutStrategy), 3592052157U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_TreeSolveLayoutStrategy_h_651712589(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_TreeSolveLayoutStrategy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_TreeSolveLayoutStrategy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
