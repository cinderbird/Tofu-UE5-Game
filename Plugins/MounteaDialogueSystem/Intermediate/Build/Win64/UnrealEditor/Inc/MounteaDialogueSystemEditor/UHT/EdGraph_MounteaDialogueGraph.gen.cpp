// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Ed/EdGraph_MounteaDialogueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdGraph_MounteaDialogueGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraph();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdGraph_MounteaDialogueGraph();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UEdGraph_MounteaDialogueGraph
void UEdGraph_MounteaDialogueGraph::StaticRegisterNativesUEdGraph_MounteaDialogueGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdGraph_MounteaDialogueGraph);
UClass* Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_NoRegister()
{
	return UEdGraph_MounteaDialogueGraph::StaticClass();
}
struct Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Ed/EdGraph_MounteaDialogueGraph.h" },
		{ "ModuleRelativePath", "Private/Ed/EdGraph_MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Ed/EdGraph_MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeMap_MetaData[] = {
		{ "ModuleRelativePath", "Private/Ed/EdGraph_MounteaDialogueGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NodeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_NodeMap;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeMap_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdgeMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_EdgeMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdGraph_MounteaDialogueGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap_ValueProp = { "NodeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap_Key_KeyProp = { "NodeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap = { "NodeMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph_MounteaDialogueGraph, NodeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeMap_MetaData), NewProp_NodeMap_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap_ValueProp = { "EdgeMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UEdNode_MounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap_Key_KeyProp = { "EdgeMap_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap = { "EdgeMap", nullptr, (EPropertyFlags)0x0010000000002000, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdGraph_MounteaDialogueGraph, EdgeMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeMap_MetaData), NewProp_EdgeMap_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_NodeMap,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::NewProp_EdgeMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraph,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::ClassParams = {
	&UEdGraph_MounteaDialogueGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdGraph_MounteaDialogueGraph()
{
	if (!Z_Registration_Info_UClass_UEdGraph_MounteaDialogueGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdGraph_MounteaDialogueGraph.OuterSingleton, Z_Construct_UClass_UEdGraph_MounteaDialogueGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdGraph_MounteaDialogueGraph.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UEdGraph_MounteaDialogueGraph>()
{
	return UEdGraph_MounteaDialogueGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdGraph_MounteaDialogueGraph);
// End Class UEdGraph_MounteaDialogueGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdGraph_MounteaDialogueGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdGraph_MounteaDialogueGraph, UEdGraph_MounteaDialogueGraph::StaticClass, TEXT("UEdGraph_MounteaDialogueGraph"), &Z_Registration_Info_UClass_UEdGraph_MounteaDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdGraph_MounteaDialogueGraph), 2259140547U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdGraph_MounteaDialogueGraph_h_1344068669(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdGraph_MounteaDialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdGraph_MounteaDialogueGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
