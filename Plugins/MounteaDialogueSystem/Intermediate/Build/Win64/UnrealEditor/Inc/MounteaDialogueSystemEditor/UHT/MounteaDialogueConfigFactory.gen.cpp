// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Factories/MounteaDialogueConfigFactory.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueConfigFactory() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueConfigFactory();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueConfigFactory_NoRegister();
UNREALED_API UClass* Z_Construct_UClass_UFactory();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UMounteaDialogueConfigFactory
void UMounteaDialogueConfigFactory::StaticRegisterNativesUMounteaDialogueConfigFactory()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueConfigFactory);
UClass* Z_Construct_UClass_UMounteaDialogueConfigFactory_NoRegister()
{
	return UMounteaDialogueConfigFactory::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Factories/MounteaDialogueConfigFactory.h" },
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueConfigFactory.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentClass_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Holds the template of the class we are building\n" },
#endif
		{ "ModuleRelativePath", "Private/Factories/MounteaDialogueConfigFactory.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Holds the template of the class we are building" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ParentClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueConfigFactory>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::NewProp_ParentClass = { "ParentClass", nullptr, (EPropertyFlags)0x0044000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueConfigFactory, ParentClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentClass_MetaData), NewProp_ParentClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::NewProp_ParentClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UFactory,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::ClassParams = {
	&UMounteaDialogueConfigFactory::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueConfigFactory()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueConfigFactory.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueConfigFactory.OuterSingleton, Z_Construct_UClass_UMounteaDialogueConfigFactory_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueConfigFactory.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueConfigFactory>()
{
	return UMounteaDialogueConfigFactory::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueConfigFactory);
UMounteaDialogueConfigFactory::~UMounteaDialogueConfigFactory() {}
// End Class UMounteaDialogueConfigFactory

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueConfigFactory_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueConfigFactory, UMounteaDialogueConfigFactory::StaticClass, TEXT("UMounteaDialogueConfigFactory"), &Z_Registration_Info_UClass_UMounteaDialogueConfigFactory, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueConfigFactory), 1624205738U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueConfigFactory_h_2070225497(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueConfigFactory_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Factories_MounteaDialogueConfigFactory_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
