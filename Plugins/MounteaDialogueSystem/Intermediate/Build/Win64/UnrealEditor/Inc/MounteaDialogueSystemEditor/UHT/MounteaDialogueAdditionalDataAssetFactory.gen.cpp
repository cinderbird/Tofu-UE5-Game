// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Factories/MounteaDialogueAdditionalDataAssetFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueAdditionalDataAssetFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueAdditionalDataAssetFactory
void UMounteaDialogueAdditionalDataAssetFactory::StaticRegisterNativesUMounteaDialogueAdditionalDataAssetFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueAdditionalDataAssetFactory);
UClass* Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_NoRegister()
{
	return UMounteaDialogueAdditionalDataAssetFactory::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/MounteaDialogueAdditionalDataAssetFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueAdditionalDataAssetFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds the template of the class we are building\n" },
#endif
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueAdditionalDataAssetFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the template of the class we are building" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueAdditionalDataAssetFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueAdditionalDataAssetFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UDialogueAdditionalData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::ClassParams = {
	&UMounteaDialogueAdditionalDataAssetFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueAdditionalDataAssetFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueAdditionalDataAssetFactory.OuterSingleton, Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueAdditionalDataAssetFactory.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueAdditionalDataAssetFactory>()
{
	return UMounteaDialogueAdditionalDataAssetFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueAdditionalDataAssetFactory);
UMounteaDialogueAdditionalDataAssetFactory::~UMounteaDialogueAdditionalDataAssetFactory() {}
// End Class UMounteaDialogueAdditionalDataAssetFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueAdditionalDataAssetFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueAdditionalDataAssetFactory, UMounteaDialogueAdditionalDataAssetFactory::StaticClass, TEXT("UMounteaDialogueAdditionalDataAssetFactory"), &Z_Registration_Info_UClass_UMounteaDialogueAdditionalDataAssetFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueAdditionalDataAssetFactory), 4126076226U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueAdditionalDataAssetFactory_h_3122284927(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueAdditionalDataAssetFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueAdditionalDataAssetFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
