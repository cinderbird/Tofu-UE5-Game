// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_OverrideParticipants() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_OverrideParticipants
void UMounteaDialogueDecorator_OverrideParticipants::StaticRegisterNativesUMounteaDialogueDecorator_OverrideParticipants()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_OverrideParticipants);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_NoRegister()
{
	return UMounteaDialogueDecorator_OverrideParticipants::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support for selecting new Participants for selected Dialogue.\n * Useful when Multiple participants are present, for example:\n * * 2 NPCs are talking\n *\n * This Decorator allows skipping from one NPC to another.\n */" },
#endif
		{ "DisplayName", "Override Dialogue Participants" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support for selecting new Participants for selected Dialogue.\nUseful when Multiple participants are present, for example:\n* 2 NPCs are talking\n\nThis Decorator allows skipping from one NPC to another." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverridePlayerParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables setting NewPlayerParticipant to a value\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables setting NewPlayerParticipant to a value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewPlayerParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface.\n" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "EditCondition", "bOverridePlayerParticipant" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideDialogueParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables setting NewDialogueParticipant to a value\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables setting NewDialogueParticipant to a value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface.\n" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "EditCondition", "bOverrideDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bOverrideActiveParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables setting NewActiveParticipant to a value\n" },
#endif
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables setting NewActiveParticipant to a value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActiveParticipant_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface.\n" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "EditCondition", "bOverrideActiveParticipant" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Non-nullable reference to Actor from Level. Either must implement 'MounteaDialogueParticipantInterface' or must contain at least 1 component which implements such interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideParticipants.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bOverridePlayerParticipant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverridePlayerParticipant;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewPlayerParticipant;
	static void NewProp_bOverrideDialogueParticipant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideDialogueParticipant;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewDialogueParticipant;
	static void NewProp_bOverrideActiveParticipant_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bOverrideActiveParticipant;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_NewActiveParticipant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_OverrideParticipants>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverridePlayerParticipant_SetBit(void* Obj)
{
	((UMounteaDialogueDecorator_OverrideParticipants*)Obj)->bOverridePlayerParticipant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverridePlayerParticipant = { "bOverridePlayerParticipant", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueDecorator_OverrideParticipants), &Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverridePlayerParticipant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverridePlayerParticipant_MetaData), NewProp_bOverridePlayerParticipant_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewPlayerParticipant = { "NewPlayerParticipant", nullptr, (EPropertyFlags)0x0024080001000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideParticipants, NewPlayerParticipant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewPlayerParticipant_MetaData), NewProp_NewPlayerParticipant_MetaData) };
void Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideDialogueParticipant_SetBit(void* Obj)
{
	((UMounteaDialogueDecorator_OverrideParticipants*)Obj)->bOverrideDialogueParticipant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideDialogueParticipant = { "bOverrideDialogueParticipant", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueDecorator_OverrideParticipants), &Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideDialogueParticipant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideDialogueParticipant_MetaData), NewProp_bOverrideDialogueParticipant_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewDialogueParticipant = { "NewDialogueParticipant", nullptr, (EPropertyFlags)0x0024080001000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideParticipants, NewDialogueParticipant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueParticipant_MetaData), NewProp_NewDialogueParticipant_MetaData) };
void Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideActiveParticipant_SetBit(void* Obj)
{
	((UMounteaDialogueDecorator_OverrideParticipants*)Obj)->bOverrideActiveParticipant = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideActiveParticipant = { "bOverrideActiveParticipant", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueDecorator_OverrideParticipants), &Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideActiveParticipant_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bOverrideActiveParticipant_MetaData), NewProp_bOverrideActiveParticipant_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewActiveParticipant = { "NewActiveParticipant", nullptr, (EPropertyFlags)0x0024080001000015, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideParticipants, NewActiveParticipant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActiveParticipant_MetaData), NewProp_NewActiveParticipant_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideParticipants, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverridePlayerParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewPlayerParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_bOverrideActiveParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_NewActiveParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::ClassParams = {
	&UMounteaDialogueDecorator_OverrideParticipants::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideParticipants.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideParticipants.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideParticipants.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_OverrideParticipants>()
{
	return UMounteaDialogueDecorator_OverrideParticipants::StaticClass();
}
UMounteaDialogueDecorator_OverrideParticipants::UMounteaDialogueDecorator_OverrideParticipants() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_OverrideParticipants);
UMounteaDialogueDecorator_OverrideParticipants::~UMounteaDialogueDecorator_OverrideParticipants() {}
// End Class UMounteaDialogueDecorator_OverrideParticipants

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideParticipants_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_OverrideParticipants, UMounteaDialogueDecorator_OverrideParticipants::StaticClass, TEXT("UMounteaDialogueDecorator_OverrideParticipants"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideParticipants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_OverrideParticipants), 1719443216U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideParticipants_h_869828705(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideParticipants_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideParticipants_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
