// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemDeveloper/Public/K2Nodes/K2Node_MounteaDialogueCallFunction.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeK2Node_MounteaDialogueCallFunction() {}

// Begin Cross Module References
BLUEPRINTGRAPH_API UClass* Z_Construct_UClass_UK2Node_CallFunction();
MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction();
MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemDeveloper();
// End Cross Module References

// Begin Class UK2Node_MounteaDialogueCallFunction
void UK2Node_MounteaDialogueCallFunction::StaticRegisterNativesUK2Node_MounteaDialogueCallFunction()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UK2Node_MounteaDialogueCallFunction);
UClass* Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_NoRegister()
{
	return UK2Node_MounteaDialogueCallFunction::StaticClass();
}
struct Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n * \n */" },
#endif
		{ "IncludePath", "K2Nodes/K2Node_MounteaDialogueCallFunction.h" },
		{ "ModuleRelativePath", "Public/K2Nodes/K2Node_MounteaDialogueCallFunction.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UK2Node_MounteaDialogueCallFunction>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UK2Node_CallFunction,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemDeveloper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::ClassParams = {
	&UK2Node_MounteaDialogueCallFunction::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::Class_MetaDataParams), Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction()
{
	if (!Z_Registration_Info_UClass_UK2Node_MounteaDialogueCallFunction.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UK2Node_MounteaDialogueCallFunction.OuterSingleton, Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UK2Node_MounteaDialogueCallFunction.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* StaticClass<UK2Node_MounteaDialogueCallFunction>()
{
	return UK2Node_MounteaDialogueCallFunction::StaticClass();
}
UK2Node_MounteaDialogueCallFunction::UK2Node_MounteaDialogueCallFunction(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UK2Node_MounteaDialogueCallFunction);
UK2Node_MounteaDialogueCallFunction::~UK2Node_MounteaDialogueCallFunction() {}
// End Class UK2Node_MounteaDialogueCallFunction

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Public_K2Nodes_K2Node_MounteaDialogueCallFunction_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UK2Node_MounteaDialogueCallFunction, UK2Node_MounteaDialogueCallFunction::StaticClass, TEXT("UK2Node_MounteaDialogueCallFunction"), &Z_Registration_Info_UClass_UK2Node_MounteaDialogueCallFunction, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UK2Node_MounteaDialogueCallFunction), 2080143319U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Public_K2Nodes_K2Node_MounteaDialogueCallFunction_h_696004006(TEXT("/Script/MounteaDialogueSystemDeveloper"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Public_K2Nodes_K2Node_MounteaDialogueCallFunction_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Public_K2Nodes_K2Node_MounteaDialogueCallFunction_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
