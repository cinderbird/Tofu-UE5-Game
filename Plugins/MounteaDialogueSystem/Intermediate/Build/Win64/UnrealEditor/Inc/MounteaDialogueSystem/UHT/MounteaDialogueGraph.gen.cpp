// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Graph/MounteaDialogueGraph.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphExtraDataTypes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraph() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UEdGraph_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FOnDialogueGraphStateChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms
	{
		const UMounteaDialogueGraph* Graph;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms, Graph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::NewProp_Graph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnDialogueGraphStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueGraphStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueGraphStateChanged, const UMounteaDialogueGraph* Graph)
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms
	{
		const UMounteaDialogueGraph* Graph;
	};
	_Script_MounteaDialogueSystem_eventOnDialogueGraphStateChanged_Parms Parms;
	Parms.Graph=Graph;
	OnDialogueGraphStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueGraphStateChanged

// Begin Delegate FOnDialogueGraphNodeStateChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms
	{
		const UMounteaDialogueGraphNode* Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnDialogueGraphNodeStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueGraphNodeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueGraphNodeStateChanged, const UMounteaDialogueGraphNode* Node)
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms
	{
		const UMounteaDialogueGraphNode* Node;
	};
	_Script_MounteaDialogueSystem_eventOnDialogueGraphNodeStateChanged_Parms Parms;
	Parms.Node=Node;
	OnDialogueGraphNodeStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueGraphNodeStateChanged

// Begin Class UMounteaDialogueGraph Function FindNodeByGuid
struct Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics
{
	struct MounteaDialogueGraph_eventFindNodeByGuid_Parms
	{
		FGuid NodeGuid;
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds a dialogue node by its GUID.\n\x09 * \n\x09 * @param NodeGuid The GUID of the node to find.\n\x09 * @return The dialogue node with the specified GUID, or nullptr if not found.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a dialogue node by its GUID.\n\n@param NodeGuid The GUID of the node to find.\n@return The dialogue node with the specified GUID, or nullptr if not found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventFindNodeByGuid_Parms, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventFindNodeByGuid_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::NewProp_NodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "FindNodeByGuid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::MounteaDialogueGraph_eventFindNodeByGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C20401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::MounteaDialogueGraph_eventFindNodeByGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execFindNodeByGuid)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->FindNodeByGuid(Z_Param_Out_NodeGuid);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function FindNodeByGuid

// Begin Class UMounteaDialogueGraph Function GetAllDecorators
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics
{
	struct MounteaDialogueGraph_eventGetAllDecorators_Parms
	{
		TArray<FMounteaDialogueDecorator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the array of decorators that are associated with this graph and its nodes.\n\x09 *\n\x09 * @return The array of decorators.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the array of decorators that are associated with this graph and its nodes.\n\n@return The array of decorators." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetAllDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetAllDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::MounteaDialogueGraph_eventGetAllDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::MounteaDialogueGraph_eventGetAllDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetAllDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetAllDecorators();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetAllDecorators

// Begin Class UMounteaDialogueGraph Function GetAllNodes
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics
{
	struct MounteaDialogueGraph_eventGetAllNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns an array containing all nodes in the dialogue graph.\n\x09 * \n\x09 * @return An array of all nodes in the dialogue graph.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns an array containing all nodes in the dialogue graph.\n\n@return An array of all nodes in the dialogue graph." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetAllNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetAllNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::MounteaDialogueGraph_eventGetAllNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::MounteaDialogueGraph_eventGetAllNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetAllNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetAllNodes();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetAllNodes

// Begin Class UMounteaDialogueGraph Function GetGraphDecorators
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics
{
	struct MounteaDialogueGraph_eventGetGraphDecorators_Parms
	{
		TArray<FMounteaDialogueDecorator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the array of decorators that are associated with this graph.\n\x09 *\n\x09 * @return The array of decorators.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the array of decorators that are associated with this graph.\n\n@return The array of decorators." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetGraphDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetGraphDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::MounteaDialogueGraph_eventGetGraphDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::MounteaDialogueGraph_eventGetGraphDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetGraphDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetGraphDecorators();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetGraphDecorators

// Begin Class UMounteaDialogueGraph Function GetGraphGUID
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics
{
	struct MounteaDialogueGraph_eventGetGraphGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the GUID of the graph.\n\x09 *\n\x09 * @return The GUID of the graph.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the GUID of the graph.\n\n@return The GUID of the graph." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetGraphGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetGraphGUID", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::MounteaDialogueGraph_eventGetGraphGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::MounteaDialogueGraph_eventGetGraphGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetGraphGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetGraphGUID();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetGraphGUID

// Begin Class UMounteaDialogueGraph Function GetGraphScopeDecorators
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics
{
	struct MounteaDialogueGraph_eventGetGraphScopeDecorators_Parms
	{
		TArray<FMounteaDialogueDecorator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetGraphScopeDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetGraphScopeDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::MounteaDialogueGraph_eventGetGraphScopeDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::MounteaDialogueGraph_eventGetGraphScopeDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetGraphScopeDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetGraphScopeDecorators();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetGraphScopeDecorators

// Begin Class UMounteaDialogueGraph Function GetRootNodes
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics
{
	struct MounteaDialogueGraph_eventGetRootNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the root nodes of the dialogue graph.\n\x09 * \n\x09 * @return An array of all root nodes in the graph.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the root nodes of the dialogue graph.\n\n@return An array of all root nodes in the graph." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetRootNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetRootNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::MounteaDialogueGraph_eventGetRootNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::MounteaDialogueGraph_eventGetRootNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetRootNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetRootNodes();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetRootNodes

// Begin Class UMounteaDialogueGraph Function GetStartNode
struct Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics
{
	struct MounteaDialogueGraph_eventGetStartNode_Parms
	{
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the root nodes of the dialogue graph.\n\x09 *\n\x09 * @return An array of all root nodes.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the root nodes of the dialogue graph.\n\n@return An array of all root nodes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventGetStartNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "GetStartNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::MounteaDialogueGraph_eventGetStartNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::MounteaDialogueGraph_eventGetStartNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execGetStartNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetStartNode();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function GetStartNode

// Begin Class UMounteaDialogueGraph Function ProcessNodeStateChanged
struct Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics
{
	struct MounteaDialogueGraph_eventProcessNodeStateChanged_Parms
	{
		const UMounteaDialogueGraphNode* Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraph_eventProcessNodeStateChanged_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraph, nullptr, "ProcessNodeStateChanged", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::MounteaDialogueGraph_eventProcessNodeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::MounteaDialogueGraph_eventProcessNodeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraph::execProcessNodeStateChanged)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessNodeStateChanged(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraph Function ProcessNodeStateChanged

// Begin Class UMounteaDialogueGraph
void UMounteaDialogueGraph::StaticRegisterNativesUMounteaDialogueGraph()
{
	UClass* Class = UMounteaDialogueGraph::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindNodeByGuid", &UMounteaDialogueGraph::execFindNodeByGuid },
		{ "GetAllDecorators", &UMounteaDialogueGraph::execGetAllDecorators },
		{ "GetAllNodes", &UMounteaDialogueGraph::execGetAllNodes },
		{ "GetGraphDecorators", &UMounteaDialogueGraph::execGetGraphDecorators },
		{ "GetGraphGUID", &UMounteaDialogueGraph::execGetGraphGUID },
		{ "GetGraphScopeDecorators", &UMounteaDialogueGraph::execGetGraphScopeDecorators },
		{ "GetRootNodes", &UMounteaDialogueGraph::execGetRootNodes },
		{ "GetStartNode", &UMounteaDialogueGraph::execGetStartNode },
		{ "ProcessNodeStateChanged", &UMounteaDialogueGraph::execProcessNodeStateChanged },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraph);
UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister()
{
	return UMounteaDialogueGraph::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Graph.\n * \n * Can be manually created from Content Browser, using Mountea Dialogue category.\n * Comes with Node editor, which provides easy to follow visual way to create Dialogue Trees.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Tree" },
		{ "HideCategories", "Hidden Private Base" },
		{ "IncludePath", "Graph/MounteaDialogueGraph.h" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Graph.\n\nCan be manually created from Content Browser, using Mountea Dialogue category.\nComes with Node editor, which provides easy to follow visual way to create Dialogue Trees." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The list of decorators for the dialogue graph.\n\x09 * Decorators are used to add extra functionality or behavior to the nodes in the graph.\n\x09 * This array should contain an instance of each decorator used in the graph.\n\x09 * The order of the decorators in this array determines the order in which they will be applied to the nodes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of decorators for the dialogue graph.\nDecorators are used to add extra functionality or behavior to the nodes in the graph.\nThis array should contain an instance of each decorator used in the graph.\nThe order of the decorators in this array determines the order in which they will be applied to the nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphScopeDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The list of decorators for the dialogue graph. Those decorators will be executed in beginning of the graph only!\n\x09 * Those decorators will not be inherited by Graph Nodes!\n\x09 * Decorators are used to add extra functionality or behavior to the nodes in the graph.\n\x09 * This array should contain an instance of each decorator used in the graph.\n\x09 * The order of the decorators in this array determines the order in which they will be applied to the nodes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The list of decorators for the dialogue graph. Those decorators will be executed in beginning of the graph only!\nThose decorators will not be inherited by Graph Nodes!\nDecorators are used to add extra functionality or behavior to the nodes in the graph.\nThis array should contain an instance of each decorator used in the graph.\nThe order of the decorators in this array determines the order in which they will be applied to the nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphTags_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * A set of gameplay tags associated with this dialogue graph.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A set of gameplay tags associated with this dialogue graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphGUID_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* GUID for this Mountea Dialogue Graph.\n\x09*\xe2\x9d\x97 Unique identifier for this Dialogue Graph instance.\n\x09*\xe2\x9d\x94 Can be used for debugging and tracing purposes.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "GUID for this Mountea Dialogue Graph.\n\xe2\x9d\x97 Unique identifier for this Dialogue Graph instance.\n\xe2\x9d\x94 Can be used for debugging and tracing purposes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Pointer to the starting node of the dialogue graph.\n" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the starting node of the dialogue graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class of the dialogue node represented by this instance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of the dialogue node represented by this instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdgeType_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class of the dialogue edge represented by this instance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class of the dialogue edge represented by this instance." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RootNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An array of root nodes in the dialogue graph. These are the nodes that do not have any incoming connections.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of root nodes in the dialogue graph. These are the nodes that do not have any incoming connections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Array containing all the nodes in the graph, including both root nodes and child nodes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array containing all the nodes in the graph, including both root nodes and child nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEdgeEnabled_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Flag indicating whether an edge is enabled\n" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag indicating whether an edge is enabled" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGraphStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnGraphNodeStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Graph" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bIsGraphActive_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphTickEvent_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_EdGraph_MetaData[] = {
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceFile_MetaData[] = {
		{ "Category", "Mountea|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Source file from import.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source file from import." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceData_MetaData[] = {
		{ "Category", "Mountea|Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Source data from import.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
		{ "NoResetToDefault", "" },
		{ "ShowOnlyInnerProperties", "" },
		{ "TitleProperty", "Json file: {JsonFile}" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Source data from import." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Editor" },
		{ "ModuleRelativePath", "Public/Graph/MounteaDialogueGraph.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphDecorators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphDecorators;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphScopeDecorators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_GraphScopeDecorators;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphTags;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartNode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FClassPropertyParams NewProp_EdgeType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RootNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RootNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllNodes;
	static void NewProp_bEdgeEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEdgeEnabled;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGraphStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnGraphNodeStateChanged;
	static void NewProp_bIsGraphActive_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsGraphActive;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_GraphTickEvent;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_EdGraph;
	static const UECodeGen_Private::FStrPropertyParams NewProp_SourceFile;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceData_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SourceData;
	static void NewProp_bCanRenameNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_FindNodeByGuid, "FindNodeByGuid" }, // 240920211
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetAllDecorators, "GetAllDecorators" }, // 639721166
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetAllNodes, "GetAllNodes" }, // 3219274374
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphDecorators, "GetGraphDecorators" }, // 3185860772
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphGUID, "GetGraphGUID" }, // 631959425
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetGraphScopeDecorators, "GetGraphScopeDecorators" }, // 1971180194
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetRootNodes, "GetRootNodes" }, // 3934067470
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_GetStartNode, "GetStartNode" }, // 3077950064
		{ &Z_Construct_UFunction_UMounteaDialogueGraph_ProcessNodeStateChanged, "ProcessNodeStateChanged" }, // 2774886134
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraph>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_Inner = { "GraphDecorators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators = { "GraphDecorators", nullptr, (EPropertyFlags)0x0020088002010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, GraphDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphDecorators_MetaData), NewProp_GraphDecorators_MetaData) }; // 2684795600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphScopeDecorators_Inner = { "GraphScopeDecorators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphScopeDecorators = { "GraphScopeDecorators", nullptr, (EPropertyFlags)0x0020088002010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, GraphScopeDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphScopeDecorators_MetaData), NewProp_GraphScopeDecorators_MetaData) }; // 2684795600
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags = { "GraphTags", nullptr, (EPropertyFlags)0x0020080000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, GraphTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphTags_MetaData), NewProp_GraphTags_MetaData) }; // 3352185621
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID = { "GraphGUID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, GraphGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphGUID_MetaData), NewProp_GraphGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode = { "StartNode", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, StartNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartNode_MetaData), NewProp_StartNode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, NodeType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType = { "EdgeType", nullptr, (EPropertyFlags)0x0014000000000014, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, EdgeType), Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdgeType_MetaData), NewProp_EdgeType_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_Inner = { "RootNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes = { "RootNodes", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, RootNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RootNodes_MetaData), NewProp_RootNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_Inner = { "AllNodes", nullptr, (EPropertyFlags)0x0104000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes = { "AllNodes", nullptr, (EPropertyFlags)0x0114000000000014, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, AllNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllNodes_MetaData), NewProp_AllNodes_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_SetBit(void* Obj)
{
	((UMounteaDialogueGraph*)Obj)->bEdgeEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled = { "bEdgeEnabled", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraph), &Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEdgeEnabled_MetaData), NewProp_bEdgeEnabled_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_OnGraphStateChanged = { "OnGraphStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, OnGraphStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGraphStateChanged_MetaData), NewProp_OnGraphStateChanged_MetaData) }; // 3762214385
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_OnGraphNodeStateChanged = { "OnGraphNodeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, OnGraphNodeStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueGraphNodeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnGraphNodeStateChanged_MetaData), NewProp_OnGraphNodeStateChanged_MetaData) }; // 1862020149
void Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bIsGraphActive_SetBit(void* Obj)
{
	((UMounteaDialogueGraph*)Obj)->bIsGraphActive = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bIsGraphActive = { "bIsGraphActive", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraph), &Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bIsGraphActive_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bIsGraphActive_MetaData), NewProp_bIsGraphActive_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTickEvent = { "GraphTickEvent", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, GraphTickEvent), Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphTickEvent_MetaData), NewProp_GraphTickEvent_MetaData) }; // 364774892
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph = { "EdGraph", nullptr, (EPropertyFlags)0x0010000800000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, EdGraph), Z_Construct_UClass_UEdGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_EdGraph_MetaData), NewProp_EdGraph_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceFile = { "SourceFile", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, SourceFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceFile_MetaData), NewProp_SourceFile_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceData_Inner = { "SourceData", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueImportData, METADATA_PARAMS(0, nullptr) }; // 1632661691
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceData = { "SourceData", nullptr, (EPropertyFlags)0x0010000800020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraph, SourceData), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceData_MetaData), NewProp_SourceData_MetaData) }; // 1632661691
void Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
{
	((UMounteaDialogueGraph*)Obj)->bCanRenameNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraph), &Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRenameNode_MetaData), NewProp_bCanRenameNode_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphScopeDecorators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphScopeDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_StartNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdgeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_RootNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_AllNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bEdgeEnabled,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_OnGraphStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_OnGraphNodeStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bIsGraphActive,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_GraphTickEvent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_EdGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceData_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_SourceData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraph_Statics::NewProp_bCanRenameNode,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraph_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueGraph, IMounteaDialogueTickableObject), false },  // 2602973918
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraph_Statics::ClassParams = {
	&UMounteaDialogueGraph::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraph_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraph_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraph()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraph_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraph.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraph>()
{
	return UMounteaDialogueGraph::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraph);
UMounteaDialogueGraph::~UMounteaDialogueGraph() {}
// End Class UMounteaDialogueGraph

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraph, UMounteaDialogueGraph::StaticClass, TEXT("UMounteaDialogueGraph"), &Z_Registration_Info_UClass_UMounteaDialogueGraph, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraph), 4220135464U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_686587331(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
