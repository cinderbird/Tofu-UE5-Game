// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/WBP/MounteaDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogue() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogue();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogue_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueWBPInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogue
void UMounteaDialogue::StaticRegisterNativesUMounteaDialogue()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogue);
UClass* Z_Construct_UClass_UMounteaDialogue_NoRegister()
{
	return UMounteaDialogue::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMounteaDialogueOptionsContainer\n *\n * \n */" },
#endif
		{ "DisplayName", "Mountea Dialogue" },
		{ "IncludePath", "WBP/MounteaDialogue.h" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogue.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMounteaDialogueOptionsContainer" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionsContainerClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class type of the dialogue options container widget. Must Implement 'MounteaDialogueOptionsContainerInterface'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogue.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueOptionsContainerInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the dialogue options container widget. Must Implement 'MounteaDialogueOptionsContainerInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class type of the dialogue option widget. Must Implement 'MounteaDialogueOptionInterface'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogue.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueOptionInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the dialogue option widget. Must Implement 'MounteaDialogueOptionInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class type of the dialogue row widget. Must Implement 'MounteaDialogueRowInterface'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogue.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueRowInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the dialogue row widget. Must Implement 'MounteaDialogueRowInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSkipClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class type of the dialogue row widget. Must Implement 'MounteaDialogueRowInterface'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogue.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueSkipInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the dialogue row widget. Must Implement 'MounteaDialogueRowInterface'." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DialogueOptionsContainerClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DialogueOptionClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DialogueRowClass;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DialogueSkipClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueOptionsContainerClass = { "DialogueOptionsContainerClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogue, DialogueOptionsContainerClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptionsContainerClass_MetaData), NewProp_DialogueOptionsContainerClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueOptionClass = { "DialogueOptionClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogue, DialogueOptionClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptionClass_MetaData), NewProp_DialogueOptionClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueRowClass = { "DialogueRowClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogue, DialogueRowClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowClass_MetaData), NewProp_DialogueRowClass_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueSkipClass = { "DialogueSkipClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogue, DialogueSkipClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSkipClass_MetaData), NewProp_DialogueSkipClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueOptionsContainerClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueOptionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueRowClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogue_Statics::NewProp_DialogueSkipClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogue_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueWBPInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogue, IMounteaDialogueWBPInterface), false },  // 511491430
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogue_Statics::ClassParams = {
	&UMounteaDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogue_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogue_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogue()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogue.OuterSingleton, Z_Construct_UClass_UMounteaDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogue.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogue>()
{
	return UMounteaDialogue::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogue);
UMounteaDialogue::~UMounteaDialogue() {}
// End Class UMounteaDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogue, UMounteaDialogue::StaticClass, TEXT("UMounteaDialogue"), &Z_Registration_Info_UClass_UMounteaDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogue), 3763911685U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogue_h_3558487167(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
