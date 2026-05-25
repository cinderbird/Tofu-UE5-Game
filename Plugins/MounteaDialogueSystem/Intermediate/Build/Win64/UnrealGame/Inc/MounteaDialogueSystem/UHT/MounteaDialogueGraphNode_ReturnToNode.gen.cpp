// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_ReturnToNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphNode_ReturnToNode Function GetRowNames
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics
{
	struct MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms
	{
		TArray<FString> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode, nullptr, "GetRowNames", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::MounteaDialogueGraphNode_ReturnToNode_eventGetRowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_ReturnToNode::execGetRowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FString>*)Z_Param__Result=P_THIS->GetRowNames();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_ReturnToNode Function GetRowNames

// Begin Class UMounteaDialogueGraphNode_ReturnToNode
void UMounteaDialogueGraphNode_ReturnToNode::StaticRegisterNativesUMounteaDialogueGraphNode_ReturnToNode()
{
	UClass* Class = UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRowNames", &UMounteaDialogueGraphNode_ReturnToNode::execGetRowNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_ReturnToNode);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_NoRegister()
{
	return UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Graph Node Return To Node\n * \n * Provides ability to return from Dialogue Node to different one.\n * Useful when dialogue branching disallows pin connections.\n */" },
#endif
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Graph Node Return To Node\n\nProvides ability to return from Dialogue Node to different one.\nUseful when dialogue branching disallows pin connections." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNodeIndex_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shows list of Node Indexes.\n\x09 * This is not very user friendly, however, to combat this Preview is generated with ability to click on it and get focused on selected Node.\n\x09 */" },
#endif
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows list of Node Indexes.\nThis is not very user friendly, however, to combat this Preview is generated with ability to click on it and get focused on selected Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoCompleteSelectedNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "EditCondition", "SelectedNode!=nullptr" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedNode_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dialogue Node to which this Node leads to.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "false" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Node to which this Node leads to." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedNodesFilter_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Filters OUT all nodes by that class.\n\x09 */" },
#endif
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_ReturnToNode.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters OUT all nodes by that class." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_SelectedNodeIndex;
	static void NewProp_bAutoCompleteSelectedNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoCompleteSelectedNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelectedNode;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedNodesFilter_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedNodesFilter;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_ReturnToNode_GetRowNames, "GetRowNames" }, // 4141414935
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_ReturnToNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex = { "SelectedNodeIndex", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, SelectedNodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedNodeIndex_MetaData), NewProp_SelectedNodeIndex_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_bAutoCompleteSelectedNode_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode_ReturnToNode*)Obj)->bAutoCompleteSelectedNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_bAutoCompleteSelectedNode = { "bAutoCompleteSelectedNode", nullptr, (EPropertyFlags)0x0010000001000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphNode_ReturnToNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_bAutoCompleteSelectedNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoCompleteSelectedNode_MetaData), NewProp_bAutoCompleteSelectedNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode = { "SelectedNode", nullptr, (EPropertyFlags)0x0114000001020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, SelectedNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedNode_MetaData), NewProp_SelectedNode_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_Inner = { "AllowedNodesFilter", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter = { "AllowedNodesFilter", nullptr, (EPropertyFlags)0x0014000001000015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_ReturnToNode, AllowedNodesFilter), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedNodesFilter_MetaData), NewProp_AllowedNodesFilter_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_bAutoCompleteSelectedNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_SelectedNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::NewProp_AllowedNodesFilter,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::ClassParams = {
	&UMounteaDialogueGraphNode_ReturnToNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_ReturnToNode>()
{
	return UMounteaDialogueGraphNode_ReturnToNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_ReturnToNode);
UMounteaDialogueGraphNode_ReturnToNode::~UMounteaDialogueGraphNode_ReturnToNode() {}
// End Class UMounteaDialogueGraphNode_ReturnToNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_ReturnToNode, UMounteaDialogueGraphNode_ReturnToNode::StaticClass, TEXT("UMounteaDialogueGraphNode_ReturnToNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_ReturnToNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_ReturnToNode), 1793930026U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_1178165893(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_ReturnToNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
