// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Actors/MounteaDialogueManagerActor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManagerActor() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AActor();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_AMounteaDialogueManagerActor();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_AMounteaDialogueManagerActor_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManager_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class AMounteaDialogueManagerActor
void AMounteaDialogueManagerActor::StaticRegisterNativesAMounteaDialogueManagerActor()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMounteaDialogueManagerActor);
UClass* Z_Construct_UClass_AMounteaDialogueManagerActor_NoRegister()
{
	return AMounteaDialogueManagerActor::StaticClass();
}
struct Z_Construct_UClass_AMounteaDialogueManagerActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "DisplayName", "Dialogue Manager Actor" },
		{ "IncludePath", "Actors/MounteaDialogueManagerActor.h" },
		{ "ModuleRelativePath", "Public/Actors/MounteaDialogueManagerActor.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Actors/MounteaDialogueManagerActor.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMounteaDialogueManagerActor>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x01440000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AMounteaDialogueManagerActor, DialogueManager), Z_Construct_UClass_UMounteaDialogueManager_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::NewProp_DialogueManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AActor,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::ClassParams = {
	&AMounteaDialogueManagerActor::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::Class_MetaDataParams), Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AMounteaDialogueManagerActor()
{
	if (!Z_Registration_Info_UClass_AMounteaDialogueManagerActor.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMounteaDialogueManagerActor.OuterSingleton, Z_Construct_UClass_AMounteaDialogueManagerActor_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AMounteaDialogueManagerActor.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<AMounteaDialogueManagerActor>()
{
	return AMounteaDialogueManagerActor::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AMounteaDialogueManagerActor);
AMounteaDialogueManagerActor::~AMounteaDialogueManagerActor() {}
// End Class AMounteaDialogueManagerActor

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Actors_MounteaDialogueManagerActor_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AMounteaDialogueManagerActor, AMounteaDialogueManagerActor::StaticClass, TEXT("AMounteaDialogueManagerActor"), &Z_Registration_Info_UClass_AMounteaDialogueManagerActor, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMounteaDialogueManagerActor), 3308556646U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Actors_MounteaDialogueManagerActor_h_2941769958(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Actors_MounteaDialogueManagerActor_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Actors_MounteaDialogueManagerActor_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
