// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Ed/EdNode_MounteaDialogueGraphEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdNode_MounteaDialogueGraphEdge() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UEdNode_MounteaDialogueGraphEdge
void UEdNode_MounteaDialogueGraphEdge::StaticRegisterNativesUEdNode_MounteaDialogueGraphEdge()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdNode_MounteaDialogueGraphEdge);
UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_NoRegister()
{
	return UEdNode_MounteaDialogueGraphEdge::StaticClass();
}
struct Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ed/EdNode_MounteaDialogueGraphEdge.h" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphEdge.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MounteaDialogueGraphEdge_MetaData[] = {
		{ "Category", "Mountea Dialogue Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphEdge.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MounteaDialogueGraphEdge;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdNode_MounteaDialogueGraphEdge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdNode_MounteaDialogueGraphEdge, Graph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::NewProp_MounteaDialogueGraphEdge = { "MounteaDialogueGraphEdge", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdNode_MounteaDialogueGraphEdge, MounteaDialogueGraphEdge), Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MounteaDialogueGraphEdge_MetaData), NewProp_MounteaDialogueGraphEdge_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::NewProp_MounteaDialogueGraphEdge,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::ClassParams = {
	&UEdNode_MounteaDialogueGraphEdge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge()
{
	if (!Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphEdge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphEdge.OuterSingleton, Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphEdge.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UEdNode_MounteaDialogueGraphEdge>()
{
	return UEdNode_MounteaDialogueGraphEdge::StaticClass();
}
UEdNode_MounteaDialogueGraphEdge::UEdNode_MounteaDialogueGraphEdge(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdNode_MounteaDialogueGraphEdge);
UEdNode_MounteaDialogueGraphEdge::~UEdNode_MounteaDialogueGraphEdge() {}
// End Class UEdNode_MounteaDialogueGraphEdge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphEdge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge, UEdNode_MounteaDialogueGraphEdge::StaticClass, TEXT("UEdNode_MounteaDialogueGraphEdge"), &Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdNode_MounteaDialogueGraphEdge), 298020160U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphEdge_h_901304428(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphEdge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
