// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Layout/ForceDirectedSolveLayoutStrategy.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeForceDirectedSolveLayoutStrategy() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UForceDirectedSolveLayoutStrategy();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UForceDirectedSolveLayoutStrategy
void UForceDirectedSolveLayoutStrategy::StaticRegisterNativesUForceDirectedSolveLayoutStrategy()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UForceDirectedSolveLayoutStrategy);
UClass* Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_NoRegister()
{
	return UForceDirectedSolveLayoutStrategy::StaticClass();
}
struct Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Layout/ForceDirectedSolveLayoutStrategy.h" },
		{ "ModuleRelativePath", "Private/Layout/ForceDirectedSolveLayoutStrategy.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UForceDirectedSolveLayoutStrategy>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphLayoutStrategy,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::ClassParams = {
	&UForceDirectedSolveLayoutStrategy::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::Class_MetaDataParams), Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UForceDirectedSolveLayoutStrategy()
{
	if (!Z_Registration_Info_UClass_UForceDirectedSolveLayoutStrategy.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UForceDirectedSolveLayoutStrategy.OuterSingleton, Z_Construct_UClass_UForceDirectedSolveLayoutStrategy_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UForceDirectedSolveLayoutStrategy.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UForceDirectedSolveLayoutStrategy>()
{
	return UForceDirectedSolveLayoutStrategy::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UForceDirectedSolveLayoutStrategy);
UForceDirectedSolveLayoutStrategy::~UForceDirectedSolveLayoutStrategy() {}
// End Class UForceDirectedSolveLayoutStrategy

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_ForceDirectedSolveLayoutStrategy_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UForceDirectedSolveLayoutStrategy, UForceDirectedSolveLayoutStrategy::StaticClass, TEXT("UForceDirectedSolveLayoutStrategy"), &Z_Registration_Info_UClass_UForceDirectedSolveLayoutStrategy, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UForceDirectedSolveLayoutStrategy), 3890753254U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_ForceDirectedSolveLayoutStrategy_h_75127239(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_ForceDirectedSolveLayoutStrategy_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Layout_ForceDirectedSolveLayoutStrategy_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
