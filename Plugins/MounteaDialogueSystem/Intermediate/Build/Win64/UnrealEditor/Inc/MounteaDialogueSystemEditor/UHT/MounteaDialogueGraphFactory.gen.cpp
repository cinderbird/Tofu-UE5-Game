// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Factories/MounteaDialogueGraphFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphFactory() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphFactory();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueGraphFactory
void UMounteaDialogueGraphFactory::StaticRegisterNativesUMounteaDialogueGraphFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphFactory);
UClass* Z_Construct_UClass_UMounteaDialogueGraphFactory_NoRegister()
{
	return UMounteaDialogueGraphFactory::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Factories/MounteaDialogueGraphFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueGraphFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::ClassParams = {
	&UMounteaDialogueGraphFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphFactory()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphFactory.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphFactory.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueGraphFactory>()
{
	return UMounteaDialogueGraphFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphFactory);
UMounteaDialogueGraphFactory::~UMounteaDialogueGraphFactory() {}
// End Class UMounteaDialogueGraphFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueGraphFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphFactory, UMounteaDialogueGraphFactory::StaticClass, TEXT("UMounteaDialogueGraphFactory"), &Z_Registration_Info_UClass_UMounteaDialogueGraphFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphFactory), 3016151411U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueGraphFactory_h_1624346008(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueGraphFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueGraphFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
