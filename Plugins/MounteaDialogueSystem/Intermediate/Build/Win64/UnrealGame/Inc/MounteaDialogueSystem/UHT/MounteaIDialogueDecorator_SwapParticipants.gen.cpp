// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaIDialogueDecorator_SwapParticipants() {}

// Begin Cross Module References
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_SwapParticipants
void UMounteaDialogueDecorator_SwapParticipants::StaticRegisterNativesUMounteaDialogueDecorator_SwapParticipants()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_SwapParticipants);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_NoRegister()
{
	return UMounteaDialogueDecorator_SwapParticipants::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support swap Dialogue Participants, like switching whether the Player or NPC is the Active one.\n */" },
#endif
		{ "DisplayName", "Swap Participants" },
		{ "IncludePath", "Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support swap Dialogue Participants, like switching whether the Player or NPC is the Active one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipantTag_MetaData[] = {
		{ "Category", "Settings" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaIDialogueDecorator_SwapParticipants.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewParticipantTag;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_SwapParticipants>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::NewProp_NewParticipantTag = { "NewParticipantTag", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_SwapParticipants, NewParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipantTag_MetaData), NewProp_NewParticipantTag_MetaData) }; // 1298103297
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_SwapParticipants, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::NewProp_NewParticipantTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::ClassParams = {
	&UMounteaDialogueDecorator_SwapParticipants::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_SwapParticipants>()
{
	return UMounteaDialogueDecorator_SwapParticipants::StaticClass();
}
UMounteaDialogueDecorator_SwapParticipants::UMounteaDialogueDecorator_SwapParticipants() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_SwapParticipants);
UMounteaDialogueDecorator_SwapParticipants::~UMounteaDialogueDecorator_SwapParticipants() {}
// End Class UMounteaDialogueDecorator_SwapParticipants

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_SwapParticipants, UMounteaDialogueDecorator_SwapParticipants::StaticClass, TEXT("UMounteaDialogueDecorator_SwapParticipants"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_SwapParticipants, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_SwapParticipants), 1180664025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_3613227648(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaIDialogueDecorator_SwapParticipants_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
