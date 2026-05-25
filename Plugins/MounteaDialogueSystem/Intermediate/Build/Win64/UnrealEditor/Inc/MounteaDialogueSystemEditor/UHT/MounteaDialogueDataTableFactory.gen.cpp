// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Factories/MounteaDialogueDataTableFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDataTableFactory() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueDataTableFactory();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueDataTableFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueDataTableFactory
void UMounteaDialogueDataTableFactory::StaticRegisterNativesUMounteaDialogueDataTableFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDataTableFactory);
UClass* Z_Construct_UClass_UMounteaDialogueDataTableFactory_NoRegister()
{
	return UMounteaDialogueDataTableFactory::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/MounteaDialogueDataTableFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueDataTableFactory.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDataTableFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::ClassParams = {
	&UMounteaDialogueDataTableFactory::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDataTableFactory()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDataTableFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDataTableFactory.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDataTableFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDataTableFactory.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueDataTableFactory>()
{
	return UMounteaDialogueDataTableFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDataTableFactory);
UMounteaDialogueDataTableFactory::~UMounteaDialogueDataTableFactory() {}
// End Class UMounteaDialogueDataTableFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDataTableFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDataTableFactory, UMounteaDialogueDataTableFactory::StaticClass, TEXT("UMounteaDialogueDataTableFactory"), &Z_Registration_Info_UClass_UMounteaDialogueDataTableFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDataTableFactory), 2145889940U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDataTableFactory_h_1378081760(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDataTableFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueDataTableFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
