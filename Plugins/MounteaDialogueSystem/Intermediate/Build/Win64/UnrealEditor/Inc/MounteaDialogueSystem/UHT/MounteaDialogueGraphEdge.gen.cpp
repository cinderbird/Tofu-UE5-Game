// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Edges/MounteaDialogueGraphEdge.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphEdge() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphEdge Function GetGraph
struct Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics
{
	struct MounteaDialogueGraphEdge_eventGetGraph_Parms
	{
		UMounteaDialogueGraph* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Edge" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the dialogue graph this edge is part of.\n\x09 * \n\x09 * @return The dialogue graph that the edge belongs to.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the dialogue graph this edge is part of.\n\n@return The dialogue graph that the edge belongs to." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphEdge_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphEdge, nullptr, "GetGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::MounteaDialogueGraphEdge_eventGetGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::MounteaDialogueGraphEdge_eventGetGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphEdge::execGetGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetGraph();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphEdge Function GetGraph

// Begin Class UMounteaDialogueGraphEdge
void UMounteaDialogueGraphEdge::StaticRegisterNativesUMounteaDialogueGraphEdge()
{
	UClass* Class = UMounteaDialogueGraphEdge::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetGraph", &UMounteaDialogueGraphEdge::execGetGraph },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphEdge);
UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister()
{
	return UMounteaDialogueGraphEdge::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Edges.\n *\n * Currently those Edges are just connecting objects with no advanced logic.\n */" },
#endif
		{ "IncludePath", "Edges/MounteaDialogueGraphEdge.h" },
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
		{ "NotBlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Edges.\n\nCurrently those Edges are just connecting objects with no advanced logic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The dialogue graph this edge belongs to.\n\x09 * This represents the graph that the edge connects nodes within.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The dialogue graph this edge belongs to.\nThis represents the graph that the edge connects nodes within." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The starting node for this edge.\n\x09 * This node represents where the dialogue transition begins.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The starting node for this edge.\nThis node represents where the dialogue transition begins." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EndNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The ending node for this edge.\n\x09 * This node represents where the dialogue transition ends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Edges/MounteaDialogueGraphEdge.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The ending node for this edge.\nThis node represents where the dialogue transition ends." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EndNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphEdge_GetGraph, "GetGraph" }, // 3094275130
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphEdge>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0114000000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEdge, Graph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEdge, StartNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNode_MetaData), NewProp_StartNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode = { "EndNode", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEdge, EndNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EndNode_MetaData), NewProp_EndNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_StartNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::NewProp_EndNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::ClassParams = {
	&UMounteaDialogueGraphEdge::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::PropPointers),
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphEdge_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphEdge.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphEdge>()
{
	return UMounteaDialogueGraphEdge::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphEdge);
UMounteaDialogueGraphEdge::~UMounteaDialogueGraphEdge() {}
// End Class UMounteaDialogueGraphEdge

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphEdge, UMounteaDialogueGraphEdge::StaticClass, TEXT("UMounteaDialogueGraphEdge"), &Z_Registration_Info_UClass_UMounteaDialogueGraphEdge, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphEdge), 2596116748U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_3858434968(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Edges_MounteaDialogueGraphEdge_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
