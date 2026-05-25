// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAssetGraphScheme_MounteaDialogueGraph() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphSchema();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FEdGraphSchemaAction();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge();
MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin ScriptStruct FAssetSchemaAction_MounteaDialogueGraph_NewNode
static_assert(std::is_polymorphic<FAssetSchemaAction_MounteaDialogueGraph_NewNode>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_MounteaDialogueGraph_NewNode cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode;
class UScriptStruct* FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("AssetSchemaAction_MounteaDialogueGraph_NewNode"));
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_MounteaDialogueGraph_NewNode>()
{
	return FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Action to add a node to the graph */" },
#endif
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Action to add a node to the graph" },
#endif
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_MounteaDialogueGraph_NewNode>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"AssetSchemaAction_MounteaDialogueGraph_NewNode",
	nullptr,
	0,
	sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewNode),
	alignof(FAssetSchemaAction_MounteaDialogueGraph_NewNode),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode.InnerSingleton;
}
// End ScriptStruct FAssetSchemaAction_MounteaDialogueGraph_NewNode

// Begin ScriptStruct FAssetSchemaAction_MounteaDialogueGraph_NewEdge
static_assert(std::is_polymorphic<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>() == std::is_polymorphic<FEdGraphSchemaAction>(), "USTRUCT FAssetSchemaAction_MounteaDialogueGraph_NewEdge cannot be polymorphic unless super FEdGraphSchemaAction is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge;
class UScriptStruct* FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("AssetSchemaAction_MounteaDialogueGraph_NewEdge"));
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UScriptStruct* StaticStruct<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>()
{
	return FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct();
}
struct Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
	};
#endif // WITH_METADATA
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FAssetSchemaAction_MounteaDialogueGraph_NewEdge>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	Z_Construct_UScriptStruct_FEdGraphSchemaAction,
	&NewStructOps,
	"AssetSchemaAction_MounteaDialogueGraph_NewEdge",
	nullptr,
	0,
	sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge),
	alignof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge()
{
	if (!Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge.InnerSingleton;
}
// End ScriptStruct FAssetSchemaAction_MounteaDialogueGraph_NewEdge

// Begin Class UAssetGraphScheme_MounteaDialogueGraph
void UAssetGraphScheme_MounteaDialogueGraph::StaticRegisterNativesUAssetGraphScheme_MounteaDialogueGraph()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UAssetGraphScheme_MounteaDialogueGraph);
UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_NoRegister()
{
	return UAssetGraphScheme_MounteaDialogueGraph::StaticClass();
}
struct Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
		{ "ModuleRelativePath", "Private/GraphScheme/AssetGraphScheme_MounteaDialogueGraph.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UAssetGraphScheme_MounteaDialogueGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphSchema,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::ClassParams = {
	&UAssetGraphScheme_MounteaDialogueGraph::StaticClass,
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
	0x000800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph()
{
	if (!Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton, Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UAssetGraphScheme_MounteaDialogueGraph>()
{
	return UAssetGraphScheme_MounteaDialogueGraph::StaticClass();
}
UAssetGraphScheme_MounteaDialogueGraph::UAssetGraphScheme_MounteaDialogueGraph(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UAssetGraphScheme_MounteaDialogueGraph);
UAssetGraphScheme_MounteaDialogueGraph::~UAssetGraphScheme_MounteaDialogueGraph() {}
// End Class UAssetGraphScheme_MounteaDialogueGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FAssetSchemaAction_MounteaDialogueGraph_NewNode::StaticStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewNode_Statics::NewStructOps, TEXT("AssetSchemaAction_MounteaDialogueGraph_NewNode"), &Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewNode), 683084675U) },
		{ FAssetSchemaAction_MounteaDialogueGraph_NewEdge::StaticStruct, Z_Construct_UScriptStruct_FAssetSchemaAction_MounteaDialogueGraph_NewEdge_Statics::NewStructOps, TEXT("AssetSchemaAction_MounteaDialogueGraph_NewEdge"), &Z_Registration_Info_UScriptStruct_AssetSchemaAction_MounteaDialogueGraph_NewEdge, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FAssetSchemaAction_MounteaDialogueGraph_NewEdge), 3056649724U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UAssetGraphScheme_MounteaDialogueGraph, UAssetGraphScheme_MounteaDialogueGraph::StaticClass, TEXT("UAssetGraphScheme_MounteaDialogueGraph"), &Z_Registration_Info_UClass_UAssetGraphScheme_MounteaDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UAssetGraphScheme_MounteaDialogueGraph), 3310165198U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_4171613287(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_GraphScheme_AssetGraphScheme_MounteaDialogueGraph_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
