// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/DialogueAdditionalData.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDialogueAdditionalData() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UDialogueAdditionalData
void UDialogueAdditionalData::StaticRegisterNativesUDialogueAdditionalData()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UDialogueAdditionalData);
UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister()
{
	return UDialogueAdditionalData::StaticClass();
}
struct Z_Construct_UClass_UDialogueAdditionalData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Predefined list of Additional Data for Mountea Dialogue Rows.\n * Provides easy to use way to enhance Dialogues with extra details, like Animation to play etc.\n *\n * To make variable for this DataAsset, create a new Blueprint Class using `DialogueAdditionalData` as Parent class.\n * Add variables to that new Blueprint Class.\n * Then you can create this Dialogue Additional Data using the newly defined Blueprint class.\n */" },
#endif
		{ "DisplayName", "Dialogue Additional Data" },
		{ "IncludePath", "Data/DialogueAdditionalData.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Data/DialogueAdditionalData.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Predefined list of Additional Data for Mountea Dialogue Rows.\nProvides easy to use way to enhance Dialogues with extra details, like Animation to play etc.\n\nTo make variable for this DataAsset, create a new Blueprint Class using `DialogueAdditionalData` as Parent class.\nAdd variables to that new Blueprint Class.\nThen you can create this Dialogue Additional Data using the newly defined Blueprint class." },
#endif
		{ "UsesHierarchy", "TRUE" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDialogueAdditionalData>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UDialogueAdditionalData_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAdditionalData_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UDialogueAdditionalData_Statics::ClassParams = {
	&UDialogueAdditionalData::StaticClass,
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
	0x001010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UDialogueAdditionalData_Statics::Class_MetaDataParams), Z_Construct_UClass_UDialogueAdditionalData_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UDialogueAdditionalData()
{
	if (!Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton, Z_Construct_UClass_UDialogueAdditionalData_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UDialogueAdditionalData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UDialogueAdditionalData>()
{
	return UDialogueAdditionalData::StaticClass();
}
UDialogueAdditionalData::UDialogueAdditionalData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UDialogueAdditionalData);
UDialogueAdditionalData::~UDialogueAdditionalData() {}
// End Class UDialogueAdditionalData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDialogueAdditionalData, UDialogueAdditionalData::StaticClass, TEXT("UDialogueAdditionalData"), &Z_Registration_Info_UClass_UDialogueAdditionalData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDialogueAdditionalData), 2881730765U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_1802344504(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_DialogueAdditionalData_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
