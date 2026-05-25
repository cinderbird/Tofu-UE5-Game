// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/WBP/MounteaDialogueSkip.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSkip() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSkip();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSkip_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSkipInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueSkip
void UMounteaDialogueSkip::StaticRegisterNativesUMounteaDialogueSkip()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSkip);
UClass* Z_Construct_UClass_UMounteaDialogueSkip_NoRegister()
{
	return UMounteaDialogueSkip::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSkip_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "WBP/MounteaDialogueSkip.h" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueSkip.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSkip>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSkip_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSkip_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueSkip_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueSkipInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueSkip, IMounteaDialogueSkipInterface), false },  // 2328547598
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSkip_Statics::ClassParams = {
	&UMounteaDialogueSkip::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSkip_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSkip_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSkip()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSkip.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSkip.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSkip_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSkip.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSkip>()
{
	return UMounteaDialogueSkip::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSkip);
UMounteaDialogueSkip::~UMounteaDialogueSkip() {}
// End Class UMounteaDialogueSkip

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueSkip_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSkip, UMounteaDialogueSkip::StaticClass, TEXT("UMounteaDialogueSkip"), &Z_Registration_Info_UClass_UMounteaDialogueSkip, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSkip), 3314585374U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueSkip_h_1616340949(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueSkip_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueSkip_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
