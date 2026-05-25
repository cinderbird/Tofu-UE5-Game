// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FOnNodeStateChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms
	{
		const UMounteaDialogueGraphNode* Node;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::NewProp_Node,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnNodeStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnNodeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnNodeStateChanged, const UMounteaDialogueGraphNode* Node)
{
	struct _Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms
	{
		const UMounteaDialogueGraphNode* Node;
	};
	_Script_MounteaDialogueSystem_eventOnNodeStateChanged_Parms Parms;
	Parms.Node=Node;
	OnNodeStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnNodeStateChanged

// Begin Class UMounteaDialogueGraphNode Function CanStartNode
struct MounteaDialogueGraphNode_eventCanStartNode_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueGraphNode_eventCanStartNode_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueGraphNode_CanStartNode = FName(TEXT("CanStartNode"));
bool UMounteaDialogueGraphNode::CanStartNode() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_CanStartNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventCanStartNode_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueGraphNode*>(this)->CanStartNode_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns true if the node can be started.\n\x09 *\xe2\x9d\x97 The implementation of this function is up to the subclass.\n\x09 *\xe2\x9d\x94 Can be used to validate if a node can be started before attempting to start it.\n\x09 *\xe2\x9d\x94 This can be further enhanced by Decorators.\n\x09 * @return True if the node can be started, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the node can be started.\n\xe2\x9d\x97 The implementation of this function is up to the subclass.\n\xe2\x9d\x94 Can be used to validate if a node can be started before attempting to start it.\n\xe2\x9d\x94 This can be further enhanced by Decorators.\n@return True if the node can be started, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueGraphNode_eventCanStartNode_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventCanStartNode_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "CanStartNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventCanStartNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventCanStartNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execCanStartNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartNode_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function CanStartNode

// Begin Class UMounteaDialogueGraphNode Function CleanupNode
static const FName NAME_UMounteaDialogueGraphNode_CleanupNode = FName(TEXT("CleanupNode"));
void UMounteaDialogueGraphNode::CleanupNode()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_CleanupNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CleanupNode_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "CleanupNode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execCleanupNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupNode_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function CleanupNode

// Begin Class UMounteaDialogueGraphNode Function DoesAutoStart
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics
{
	struct MounteaDialogueGraphNode_eventDoesAutoStart_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Checks if the node should automatically start when the dialogue is played.\n\x09 * @return true if the node should automatically start, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Checks if the node should automatically start when the dialogue is played.\n@return true if the node should automatically start, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueGraphNode_eventDoesAutoStart_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventDoesAutoStart_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "DoesAutoStart", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::MounteaDialogueGraphNode_eventDoesAutoStart_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::MounteaDialogueGraphNode_eventDoesAutoStart_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execDoesAutoStart)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesAutoStart();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function DoesAutoStart

// Begin Class UMounteaDialogueGraphNode Function DoesInheritDecorators
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics
{
	struct MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether this node inherits decorators from the dialogue graph.\n\x09 * If this is set to true, this node will receive all decorators assigned to the graph.\n\x09 * If it's set to false, the node will only have its own decorators.\n\x09 *\n\x09 * @return Whether this node inherits decorators from the graph.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether this node inherits decorators from the dialogue graph.\nIf this is set to true, this node will receive all decorators assigned to the graph.\nIf it's set to false, the node will only have its own decorators.\n\n@return Whether this node inherits decorators from the graph." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "DoesInheritDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::MounteaDialogueGraphNode_eventDoesInheritDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execDoesInheritDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->DoesInheritDecorators();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function DoesInheritDecorators

// Begin Class UMounteaDialogueGraphNode Function EvaluateDecorators
struct MounteaDialogueGraphNode_eventEvaluateDecorators_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueGraphNode_eventEvaluateDecorators_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueGraphNode_EvaluateDecorators = FName(TEXT("EvaluateDecorators"));
bool UMounteaDialogueGraphNode::EvaluateDecorators() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_EvaluateDecorators);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventEvaluateDecorators_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueGraphNode*>(this)->EvaluateDecorators_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Evaluates all decorators attached to the dialogue node and the owning graph, if applicable.\n\x09 * This function checks each decorator and returns whether they are satisfied, indicating that the node can be executed.\n\x09 * Inherited graph decorators are also considered if applicable.\n\x09 * \n\x09 * @return Returns true if all node and graph decorators are valid, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluates all decorators attached to the dialogue node and the owning graph, if applicable.\nThis function checks each decorator and returns whether they are satisfied, indicating that the node can be executed.\nInherited graph decorators are also considered if applicable.\n\n@return Returns true if all node and graph decorators are valid, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueGraphNode_eventEvaluateDecorators_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventEvaluateDecorators_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "EvaluateDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventEvaluateDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventEvaluateDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execEvaluateDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EvaluateDecorators_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function EvaluateDecorators

// Begin Class UMounteaDialogueGraphNode Function GetChildrenNodes
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics
{
	struct MounteaDialogueGraphNode_eventGetChildrenNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets children Nodes this one has,\n\x09 *\xe2\x9d\x97 Might be empty\n\x09 *\n\x09 * @return Amount of children Nodes\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets children Nodes this one has,\n\xe2\x9d\x97 Might be empty\n\n@return Amount of children Nodes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetChildrenNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetChildrenNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::MounteaDialogueGraphNode_eventGetChildrenNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::MounteaDialogueGraphNode_eventGetChildrenNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetChildrenNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetChildrenNodes();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetChildrenNodes

// Begin Class UMounteaDialogueGraphNode Function GetDefaultTooltipBody
#if WITH_EDITOR
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics
{
	struct MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms
	{
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Generates default Tooltip body text used for all Nodes\n" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generates default Tooltip body text used for all Nodes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetDefaultTooltipBody", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x74020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::MounteaDialogueGraphNode_eventGetDefaultTooltipBody_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetDefaultTooltipBody)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDefaultTooltipBody();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMounteaDialogueGraphNode Function GetDefaultTooltipBody

// Begin Class UMounteaDialogueGraphNode Function GetDescription
struct MounteaDialogueGraphNode_eventGetDescription_Parms
{
	FText ReturnValue;
};
#if WITH_EDITOR
static const FName NAME_UMounteaDialogueGraphNode_GetDescription = FName(TEXT("GetDescription"));
FText UMounteaDialogueGraphNode::GetDescription() const
{
	MounteaDialogueGraphNode_eventGetDescription_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetDescription);
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Description text for this graph node.\n\x09 *\n\x09 * @return The Description text for this node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Description text for this graph node.\n\n@return The Description text for this node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetDescription_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetDescription", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventGetDescription_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventGetDescription_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetDescription)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDescription_Implementation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMounteaDialogueGraphNode Function GetDescription

// Begin Class UMounteaDialogueGraphNode Function GetGraph
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics
{
	struct MounteaDialogueGraphNode_eventGetGraph_Parms
	{
		UMounteaDialogueGraph* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the owning Graph of the node.\n\x09 *\xe2\x9d\x97 Might be null\n\x09 *\n\x09 * @return The owning Graph of the node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the owning Graph of the node.\n\xe2\x9d\x97 Might be null\n\n@return The owning Graph of the node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::MounteaDialogueGraphNode_eventGetGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::MounteaDialogueGraphNode_eventGetGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetGraph();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetGraph

// Begin Class UMounteaDialogueGraphNode Function GetGraphGUID
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics
{
	struct MounteaDialogueGraphNode_eventGetGraphGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If node is owned by graph, then it will return guid of the owning graph.\n\x09 * @return Guid of the owning Graph\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If node is owned by graph, then it will return guid of the owning graph.\n@return Guid of the owning Graph" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetGraphGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetGraphGUID", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::MounteaDialogueGraphNode_eventGetGraphGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::MounteaDialogueGraphNode_eventGetGraphGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetGraphGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetGraphGUID();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetGraphGUID

// Begin Class UMounteaDialogueGraphNode Function GetMaxChildNodes
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics
{
	struct MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns how many Children Nodes this Node allows to have.\n\x09 *\xe2\x9d\x94 -1 means no limits.\n\x09 *\n\x09 * @return MaxChildrenNodes\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns how many Children Nodes this Node allows to have.\n\xe2\x9d\x94 -1 means no limits.\n\n@return MaxChildrenNodes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetMaxChildNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::MounteaDialogueGraphNode_eventGetMaxChildNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetMaxChildNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetMaxChildNodes();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetMaxChildNodes

// Begin Class UMounteaDialogueGraphNode Function GetNodeCategory
struct MounteaDialogueGraphNode_eventGetNodeCategory_Parms
{
	FText ReturnValue;
};
#if WITH_EDITOR
static const FName NAME_UMounteaDialogueGraphNode_GetNodeCategory = FName(TEXT("GetNodeCategory"));
FText UMounteaDialogueGraphNode::GetNodeCategory() const
{
	MounteaDialogueGraphNode_eventGetNodeCategory_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeCategory);
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Node Category text for this graph node.\n\x09 *\n\x09 * @return The Node Category text for this node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Node Category text for this graph node.\n\n@return The Node Category text for this node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeCategory_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeCategory", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventGetNodeCategory_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventGetNodeCategory_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeCategory)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNodeCategory_Implementation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMounteaDialogueGraphNode Function GetNodeCategory

// Begin Class UMounteaDialogueGraphNode Function GetNodeDecorators
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics
{
	struct MounteaDialogueGraphNode_eventGetNodeDecorators_Parms
	{
		TArray<FMounteaDialogueDecorator> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the decorators for this Dialogue Graph Node.\n\x09 *\xe2\x9d\x94 Returns only Valid decorators!\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the decorators for this Dialogue Graph Node.\n\xe2\x9d\x94 Returns only Valid decorators!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeDecorators_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeDecorators", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::MounteaDialogueGraphNode_eventGetNodeDecorators_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::MounteaDialogueGraphNode_eventGetNodeDecorators_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeDecorators)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FMounteaDialogueDecorator>*)Z_Param__Result=P_THIS->GetNodeDecorators();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetNodeDecorators

// Begin Class UMounteaDialogueGraphNode Function GetNodeDocumentationLink
struct MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms
{
	FString ReturnValue;
};
#if WITH_EDITOR
static const FName NAME_UMounteaDialogueGraphNode_GetNodeDocumentationLink = FName(TEXT("GetNodeDocumentationLink"));
FString UMounteaDialogueGraphNode::GetNodeDocumentationLink() const
{
	MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeDocumentationLink);
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Documentation Link for this graph node.\n\x09 *\n\x09 * @return The Documentation Link for this node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Documentation Link for this graph node.\n\n@return The Documentation Link for this node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeDocumentationLink", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventGetNodeDocumentationLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeDocumentationLink)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetNodeDocumentationLink_Implementation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMounteaDialogueGraphNode Function GetNodeDocumentationLink

// Begin Class UMounteaDialogueGraphNode Function GetNodeGUID
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics
{
	struct MounteaDialogueGraphNode_eventGetNodeGUID_Parms
	{
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the GUID of the node.\n\x09 *\n\x09 * @return The GUID of the node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the GUID of the node.\n\n@return The GUID of the node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeGUID_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeGUID", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::MounteaDialogueGraphNode_eventGetNodeGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::MounteaDialogueGraphNode_eventGetNodeGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeGUID)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=P_THIS->GetNodeGUID();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetNodeGUID

// Begin Class UMounteaDialogueGraphNode Function GetNodeIndex
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics
{
	struct MounteaDialogueGraphNode_eventGetNodeIndex_Parms
	{
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the index of the node within the dialogue graph.\n\x09 *\n\x09 * @return The index of the node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the index of the node within the dialogue graph.\n\n@return The index of the node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::MounteaDialogueGraphNode_eventGetNodeIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::MounteaDialogueGraphNode_eventGetNodeIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetNodeIndex();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetNodeIndex

// Begin Class UMounteaDialogueGraphNode Function GetNodeTitle
struct MounteaDialogueGraphNode_eventGetNodeTitle_Parms
{
	FText ReturnValue;
};
static const FName NAME_UMounteaDialogueGraphNode_GetNodeTitle = FName(TEXT("GetNodeTitle"));
FText UMounteaDialogueGraphNode::GetNodeTitle() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeTitle);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventGetNodeTitle_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueGraphNode*>(this)->GetNodeTitle_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Title text for this graph node.\n\x09 *\n\x09 * @return The Title text for this node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Title text for this graph node.\n\n@return The Title text for this node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeTitle_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeTitle", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventGetNodeTitle_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventGetNodeTitle_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeTitle)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNodeTitle_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetNodeTitle

// Begin Class UMounteaDialogueGraphNode Function GetNodeTooltipText
struct MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms
{
	FText ReturnValue;
};
#if WITH_EDITOR
static const FName NAME_UMounteaDialogueGraphNode_GetNodeTooltipText = FName(TEXT("GetNodeTooltipText"));
FText UMounteaDialogueGraphNode::GetNodeTooltipText() const
{
	MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms Parms;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_GetNodeTooltipText);
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
	return Parms.ReturnValue;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the tooltip text for this graph node.\n\x09 *\n\x09 * @return The tooltip text for this node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DevelopmentOnly", "TRUE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the tooltip text for this graph node.\n\n@return The tooltip text for this node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetNodeTooltipText", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x7C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventGetNodeTooltipText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetNodeTooltipText)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetNodeTooltipText_Implementation();
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UMounteaDialogueGraphNode Function GetNodeTooltipText

// Begin Class UMounteaDialogueGraphNode Function GetParentNodes
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics
{
	struct MounteaDialogueGraphNode_eventGetParentNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets how many parent Nodes point to this one\n\x09 *\xe2\x9d\x97 Might be empty\n\x09 *\n\x09 * @return Amount of how parent Nodes\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets how many parent Nodes point to this one\n\xe2\x9d\x97 Might be empty\n\n@return Amount of how parent Nodes" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventGetParentNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "GetParentNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::MounteaDialogueGraphNode_eventGetParentNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::MounteaDialogueGraphNode_eventGetParentNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execGetParentNodes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=P_THIS->GetParentNodes();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function GetParentNodes

// Begin Class UMounteaDialogueGraphNode Function InitializeNode
struct MounteaDialogueGraphNode_eventInitializeNode_Parms
{
	UWorld* InWorld;
};
static const FName NAME_UMounteaDialogueGraphNode_InitializeNode = FName(TEXT("InitializeNode"));
void UMounteaDialogueGraphNode::InitializeNode(UWorld* InWorld)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_InitializeNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventInitializeNode_Parms Parms;
		Parms.InWorld=InWorld;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeNode_Implementation(InWorld);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the node with the given world.\n\x09 *\n\x09 * @param InWorld The world to use for initialization.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the node with the given world.\n\n@param InWorld The world to use for initialization." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::NewProp_InWorld = { "InWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventInitializeNode_Parms, InWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::NewProp_InWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "InitializeNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventInitializeNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventInitializeNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execInitializeNode)
{
	P_GET_OBJECT(UWorld,Z_Param_InWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeNode_Implementation(Z_Param_InWorld);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function InitializeNode

// Begin Class UMounteaDialogueGraphNode Function PreProcessNode
struct MounteaDialogueGraphNode_eventPreProcessNode_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> Manager;
};
static const FName NAME_UMounteaDialogueGraphNode_PreProcessNode = FName(TEXT("PreProcessNode"));
void UMounteaDialogueGraphNode::PreProcessNode(TScriptInterface<IMounteaDialogueManagerInterface> const& Manager)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_PreProcessNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventPreProcessNode_Parms Parms;
		Parms.Manager=Manager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		PreProcessNode_Implementation(Manager);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pre-processes the dialogue node before it is activated.\n\x09 * This function is called before the main processing of the node.\n\x09 * \n\x09 * @param Manager The dialogue manager interface responsible for managing the current dialogue.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pre-processes the dialogue node before it is activated.\nThis function is called before the main processing of the node.\n\n@param Manager The dialogue manager interface responsible for managing the current dialogue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventPreProcessNode_Parms, Manager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "PreProcessNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventPreProcessNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventPreProcessNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execPreProcessNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PreProcessNode_Implementation(Z_Param_Out_Manager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function PreProcessNode

// Begin Class UMounteaDialogueGraphNode Function ProcessNode
struct MounteaDialogueGraphNode_eventProcessNode_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> Manager;
};
static const FName NAME_UMounteaDialogueGraphNode_ProcessNode = FName(TEXT("ProcessNode"));
void UMounteaDialogueGraphNode::ProcessNode(TScriptInterface<IMounteaDialogueManagerInterface> const& Manager)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_ProcessNode);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventProcessNode_Parms Parms;
		Parms.Manager=Manager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		ProcessNode_Implementation(Manager);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the dialogue node by evaluating the dialogue context and executing node logic.\n\x09 * This function broadcasts relevant events and checks for valid dialogue context, world, and graph ownership.\n\x09 * If conditions are satisfied, it executes the node decorators and notifies the manager.\n\x09 * \n\x09 * @param Manager The dialogue manager interface responsible for managing the current dialogue. \n\x09 *                It handles context and broadcasts events such as dialogue failure or node start.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the dialogue node by evaluating the dialogue context and executing node logic.\nThis function broadcasts relevant events and checks for valid dialogue context, world, and graph ownership.\nIf conditions are satisfied, it executes the node decorators and notifies the manager.\n\n@param Manager The dialogue manager interface responsible for managing the current dialogue.\n               It handles context and broadcasts events such as dialogue failure or node start." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventProcessNode_Parms, Manager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "ProcessNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventProcessNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventProcessNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execProcessNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessNode_Implementation(Z_Param_Out_Manager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function ProcessNode

// Begin Class UMounteaDialogueGraphNode Function SetNewWorld
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics
{
	struct MounteaDialogueGraphNode_eventSetNewWorld_Parms
	{
		UWorld* NewWorld;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Provides a way to update Node's owning World.\n\x09 * Useful for Loading sub-levels.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides a way to update Node's owning World.\nUseful for Loading sub-levels." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewWorld;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::NewProp_NewWorld = { "NewWorld", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_eventSetNewWorld_Parms, NewWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::NewProp_NewWorld,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "SetNewWorld", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::MounteaDialogueGraphNode_eventSetNewWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::MounteaDialogueGraphNode_eventSetNewWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execSetNewWorld)
{
	P_GET_OBJECT(UWorld,Z_Param_NewWorld);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewWorld(Z_Param_NewWorld);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function SetNewWorld

// Begin Class UMounteaDialogueGraphNode Function ValidateNodeRuntime
struct MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueGraphNode_ValidateNodeRuntime = FName(TEXT("ValidateNodeRuntime"));
bool UMounteaDialogueGraphNode::ValidateNodeRuntime() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueGraphNode_ValidateNodeRuntime);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms Parms;
		const_cast<UMounteaDialogueGraphNode*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueGraphNode*>(this)->ValidateNodeRuntime_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Node" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Serves purpose of validating Node before Dialogue gets Started.\n\x09 * Any broken Node results in non-starting Dialogue to avoid crashes.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Serves purpose of validating Node before Dialogue gets Started.\nAny broken Node results in non-starting Dialogue to avoid crashes." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms), &Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode, nullptr, "ValidateNodeRuntime", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::PropPointers), sizeof(MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueGraphNode_eventValidateNodeRuntime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode::execValidateNodeRuntime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateNodeRuntime_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode Function ValidateNodeRuntime

// Begin Class UMounteaDialogueGraphNode
void UMounteaDialogueGraphNode::StaticRegisterNativesUMounteaDialogueGraphNode()
{
	UClass* Class = UMounteaDialogueGraphNode::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanStartNode", &UMounteaDialogueGraphNode::execCanStartNode },
		{ "CleanupNode", &UMounteaDialogueGraphNode::execCleanupNode },
		{ "DoesAutoStart", &UMounteaDialogueGraphNode::execDoesAutoStart },
		{ "DoesInheritDecorators", &UMounteaDialogueGraphNode::execDoesInheritDecorators },
		{ "EvaluateDecorators", &UMounteaDialogueGraphNode::execEvaluateDecorators },
		{ "GetChildrenNodes", &UMounteaDialogueGraphNode::execGetChildrenNodes },
#if WITH_EDITOR
		{ "GetDefaultTooltipBody", &UMounteaDialogueGraphNode::execGetDefaultTooltipBody },
		{ "GetDescription", &UMounteaDialogueGraphNode::execGetDescription },
#endif // WITH_EDITOR
		{ "GetGraph", &UMounteaDialogueGraphNode::execGetGraph },
		{ "GetGraphGUID", &UMounteaDialogueGraphNode::execGetGraphGUID },
		{ "GetMaxChildNodes", &UMounteaDialogueGraphNode::execGetMaxChildNodes },
#if WITH_EDITOR
		{ "GetNodeCategory", &UMounteaDialogueGraphNode::execGetNodeCategory },
#endif // WITH_EDITOR
		{ "GetNodeDecorators", &UMounteaDialogueGraphNode::execGetNodeDecorators },
#if WITH_EDITOR
		{ "GetNodeDocumentationLink", &UMounteaDialogueGraphNode::execGetNodeDocumentationLink },
#endif // WITH_EDITOR
		{ "GetNodeGUID", &UMounteaDialogueGraphNode::execGetNodeGUID },
		{ "GetNodeIndex", &UMounteaDialogueGraphNode::execGetNodeIndex },
		{ "GetNodeTitle", &UMounteaDialogueGraphNode::execGetNodeTitle },
#if WITH_EDITOR
		{ "GetNodeTooltipText", &UMounteaDialogueGraphNode::execGetNodeTooltipText },
#endif // WITH_EDITOR
		{ "GetParentNodes", &UMounteaDialogueGraphNode::execGetParentNodes },
		{ "InitializeNode", &UMounteaDialogueGraphNode::execInitializeNode },
		{ "PreProcessNode", &UMounteaDialogueGraphNode::execPreProcessNode },
		{ "ProcessNode", &UMounteaDialogueGraphNode::execProcessNode },
		{ "SetNewWorld", &UMounteaDialogueGraphNode::execSetNewWorld },
		{ "ValidateNodeRuntime", &UMounteaDialogueGraphNode::execValidateNodeRuntime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister()
{
	return UMounteaDialogueGraphNode::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Graph Node abstract Base class.\n * \n * Provides generic functionality to be enhanced or overriden by Child Classes.\n * Does come with ability to define Colours, Name, Description and Title.\n * Contains information about Parent and Children Nodes.\n */" },
#endif
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Graph Node abstract Base class.\n\nProvides generic functionality to be enhanced or overriden by Child Classes.\nDoes come with ability to define Colours, Name, Description and Title.\nContains information about Parent and Children Nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNodes_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Array of parent nodes for the current active node in the dialogue traversal.\n\x09 *\xe2\x9d\x97 Parent nodes are nodes that have a directed edge pointing to the current active node.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Array of parent nodes for the current active node in the dialogue traversal.\n\xe2\x9d\x97 Parent nodes are nodes that have a directed edge pointing to the current active node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildrenNodes_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The array of child nodes of the current dialogue node.\n\x09 *\xe2\x9d\x97 The order of the children nodes matter and determines the order in which the options are presented to the player.\n\x09 *\xe2\x9d\x94 Can be used to traverse the graph and to create UI to display the dialogue options.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of child nodes of the current dialogue node.\n\xe2\x9d\x97 The order of the children nodes matter and determines the order in which the options are presented to the player.\n\xe2\x9d\x94 Can be used to traverse the graph and to create UI to display the dialogue options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Edges_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Map of edges connecting this Node in the Mountea Dialogue Graph.\n\x09 *\xe2\x9d\x97 The key of the map is the source node, and the value is the edge connecting it to its target node.\n\x09 *\xe2\x9d\x94 Can be used to traverse the graph, get information about node connections...\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of edges connecting this Node in the Mountea Dialogue Graph.\n\xe2\x9d\x97 The key of the map is the source node, and the value is the edge connecting it to its target node.\n\xe2\x9d\x94 Can be used to traverse the graph, get information about node connections..." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Graph_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pointer to the parent dialogue graph of this node.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the parent dialogue graph of this node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeIndex_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Temporary NodeIndex.\n\x09 * This variable will be deleted.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Temporary NodeIndex.\nThis variable will be deleted." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ExecutionOrder_MetaData[] = {
		{ "Category", "Private" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Execution order within Parent's scope */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Execution order within Parent's scope" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The unique identifier for this Dialogue Graph Node.\n\x09 *\xe2\x9d\x97 This is used to differentiate between nodes, and must be unique within the graph.\n\x09 *\xe2\x9d\x94 Can be used for debugging and tracing purposes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique identifier for this Dialogue Graph Node.\n\xe2\x9d\x97 This is used to differentiate between nodes, and must be unique within the graph.\n\xe2\x9d\x94 Can be used for debugging and tracing purposes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The world that owns this Dialogue Graph Node.\n\x09 *\xe2\x9d\x97 This is the world in which this Dialogue Graph Node is currently running.\n\x09 *\xe2\x9d\x94 Can be used for accessing world-related functionality.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The world that owns this Dialogue Graph Node.\n\xe2\x9d\x97 This is the world in which this Dialogue Graph Node is currently running.\n\xe2\x9d\x94 Can be used for accessing world-related functionality." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGameplayTags_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Every Node has its own Tags. Those Tags can be used to Match Participants\n\x09 * or to find specific Nodes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Every Node has its own Tags. Those Tags can be used to Match Participants\nor to find specific Nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedInputClasses_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The array of allowed input classes for this Dialogue Node.\n\x09 *\xe2\x9d\x97 Only nodes with classes from this array can be connected as inputs to this node.\n\x09 *\xe2\x9d\x94 Can be used to restrict the types of inputs this node can accept.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The array of allowed input classes for this Dialogue Node.\n\xe2\x9d\x97 Only nodes with classes from this array can be connected as inputs to this node.\n\xe2\x9d\x94 Can be used to restrict the types of inputs this node can accept." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAutoStarts_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Defines whether this Node will start automatically or if requires input.*/" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node will start automatically or if requires input." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxChildrenNodes_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The maximum number of children nodes that this node can have.\n\x09 *\xe2\x9d\x97 If this value is -1, then there is no limit on the number of children nodes.\n\x09 *\xe2\x9d\x94 Can be used to enforce a maximum number of connections for certain types of nodes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The maximum number of children nodes that this node can have.\n\xe2\x9d\x97 If this value is -1, then there is no limit on the number of children nodes.\n\xe2\x9d\x94 Can be used to enforce a maximum number of connections for certain types of nodes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInheritGraphDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Indicates whether this node inherits the decorators from its parent Graph.\n\x09 *\xe2\x9d\x97 If true, the decorators of the parent Graph will be inherited and applied to this node during processing.\n\x09 *\xe2\x9d\x94 This flag can be used to control the inheritance of decorators for nodes in the dialogue graph.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Indicates whether this node inherits the decorators from its parent Graph.\n\xe2\x9d\x97 If true, the decorators of the parent Graph will be inherited and applied to this node during processing.\n\xe2\x9d\x94 This flag can be used to control the inheritance of decorators for nodes in the dialogue graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bInvertSkipRowSetting_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Provides a node-based inversion of global skip settings.\n\x09 * If global settings are changed, inversion behaviour stays the same, so keep this in mined when changing this setting for nodes!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides a node-based inversion of global skip settings.\nIf global settings are changed, inversion behaviour stays the same, so keep this in mined when changing this setting for nodes!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeDecorators_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * A list of Decorators that can help out with enhancing the Dialogue flow.\n\x09 * Those Decorators are instanced and exist only as \"triggers\".\n\x09 * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A list of Decorators that can help out with enhancing the Dialogue flow.\nThose Decorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTickEvent_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowInputNodes_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node type allows inputs\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node type allows inputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowOutputNodes_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node type allows outputs\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node type allows outputs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCopy_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node can be copied\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node can be copied" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowCut_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node can be cut\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node can be cut" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowPaste_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node can be pasted\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node can be pasted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowDelete_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node can be deleted\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node can be deleted" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowManualCreate_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether this Node can be manually created\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Node can be manually created" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bCanRenameNode_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines whether Node can be renamed\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether Node can be renamed" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ContextMenuName_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display name of the Node menu category\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display name of the Node menu category" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleGraphType_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// List of compatible graph types\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of compatible graph types" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundColor_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Defines background colour of this Node\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines background colour of this Node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTooltipText_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Contains Node Tooltip text\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains Node Tooltip text" },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTypeName_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// User friendly node type name\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "User friendly node type name" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTitle_MetaData[] = {
		{ "Category", "Editor" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Display title of the Node\n" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Display title of the Node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNodeStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Node" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ParentNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildrenNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ChildrenNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Edges_ValueProp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Edges_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_Edges;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Graph;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NodeIndex;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ExecutionOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGameplayTags;
	static const UECodeGen_Private::FClassPropertyParams NewProp_AllowedInputClasses_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedInputClasses;
	static void NewProp_bAutoStarts_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutoStarts;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxChildrenNodes;
	static void NewProp_bInheritGraphDecorators_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInheritGraphDecorators;
	static void NewProp_bInvertSkipRowSetting_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bInvertSkipRowSetting;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeDecorators_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NodeDecorators;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_NodeTickEvent;
#if WITH_EDITORONLY_DATA
	static void NewProp_bAllowInputNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowInputNodes;
	static void NewProp_bAllowOutputNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowOutputNodes;
	static void NewProp_bAllowCopy_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCopy;
	static void NewProp_bAllowCut_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowCut;
	static void NewProp_bAllowPaste_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowPaste;
	static void NewProp_bAllowDelete_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowDelete;
	static void NewProp_bAllowManualCreate_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowManualCreate;
	static void NewProp_bCanRenameNode_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRenameNode;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ContextMenuName;
	static const UECodeGen_Private::FClassPropertyParams NewProp_CompatibleGraphType;
	static const UECodeGen_Private::FStructPropertyParams NewProp_BackgroundColor;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTooltipText;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTypeName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_NodeTitle;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNodeStateChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_CanStartNode, "CanStartNode" }, // 3857193977
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_CleanupNode, "CleanupNode" }, // 3271090331
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesAutoStart, "DoesAutoStart" }, // 1188977361
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DoesInheritDecorators, "DoesInheritDecorators" }, // 4225671826
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_EvaluateDecorators, "EvaluateDecorators" }, // 1714760982
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetChildrenNodes, "GetChildrenNodes" }, // 1829635707
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDefaultTooltipBody, "GetDefaultTooltipBody" }, // 4117654993
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetDescription, "GetDescription" }, // 732676817
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraph, "GetGraph" }, // 2444883669
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetGraphGUID, "GetGraphGUID" }, // 1628811075
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetMaxChildNodes, "GetMaxChildNodes" }, // 3034048761
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeCategory, "GetNodeCategory" }, // 808384719
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDecorators, "GetNodeDecorators" }, // 1274336348
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeDocumentationLink, "GetNodeDocumentationLink" }, // 1327121038
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeGUID, "GetNodeGUID" }, // 1240268997
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeIndex, "GetNodeIndex" }, // 150085467
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTitle, "GetNodeTitle" }, // 264788288
#if WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetNodeTooltipText, "GetNodeTooltipText" }, // 2553502645
#endif // WITH_EDITOR
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_GetParentNodes, "GetParentNodes" }, // 3852019422
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_InitializeNode, "InitializeNode" }, // 2532624317
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_PreProcessNode, "PreProcessNode" }, // 3022054884
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_ProcessNode, "ProcessNode" }, // 1299993565
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_SetNewWorld, "SetNewWorld" }, // 2169084085
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_ValidateNodeRuntime, "ValidateNodeRuntime" }, // 1840046107
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_Inner = { "ParentNodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes = { "ParentNodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, ParentNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNodes_MetaData), NewProp_ParentNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_Inner = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes = { "ChildrenNodes", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, ChildrenNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildrenNodes_MetaData), NewProp_ChildrenNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_ValueProp = { "Edges", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UMounteaDialogueGraphEdge_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_Key_KeyProp = { "Edges_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges = { "Edges", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, Edges), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Edges_MetaData), NewProp_Edges_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph = { "Graph", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, Graph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Graph_MetaData), NewProp_Graph_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex = { "NodeIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeIndex_MetaData), NewProp_NodeIndex_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ExecutionOrder = { "ExecutionOrder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, ExecutionOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ExecutionOrder_MetaData), NewProp_ExecutionOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0144040000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningWorld_MetaData), NewProp_OwningWorld_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGameplayTags = { "NodeGameplayTags", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeGameplayTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGameplayTags_MetaData), NewProp_NodeGameplayTags_MetaData) }; // 3352185621
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_Inner = { "AllowedInputClasses", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses = { "AllowedInputClasses", nullptr, (EPropertyFlags)0x0014000001010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, AllowedInputClasses), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedInputClasses_MetaData), NewProp_AllowedInputClasses_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAutoStarts = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts = { "bAutoStarts", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAutoStarts_MetaData), NewProp_bAutoStarts_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes = { "MaxChildrenNodes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, MaxChildrenNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxChildrenNodes_MetaData), NewProp_MaxChildrenNodes_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bInheritGraphDecorators = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators = { "bInheritGraphDecorators", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInheritGraphDecorators_MetaData), NewProp_bInheritGraphDecorators_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInvertSkipRowSetting_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bInvertSkipRowSetting = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInvertSkipRowSetting = { "bInvertSkipRowSetting", nullptr, (EPropertyFlags)0x0010000001010015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInvertSkipRowSetting_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bInvertSkipRowSetting_MetaData), NewProp_bInvertSkipRowSetting_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_Inner = { "NodeDecorators", nullptr, (EPropertyFlags)0x0000008000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FMounteaDialogueDecorator, METADATA_PARAMS(0, nullptr) }; // 2684795600
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators = { "NodeDecorators", nullptr, (EPropertyFlags)0x0010008002010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeDecorators), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeDecorators_MetaData), NewProp_NodeDecorators_MetaData) }; // 2684795600
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTickEvent = { "NodeTickEvent", nullptr, (EPropertyFlags)0x0010000000080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTickEvent), Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTickEvent_MetaData), NewProp_NodeTickEvent_MetaData) }; // 364774892
#if WITH_EDITORONLY_DATA
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowInputNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes = { "bAllowInputNodes", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowInputNodes_MetaData), NewProp_bAllowInputNodes_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowOutputNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes = { "bAllowOutputNodes", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowOutputNodes_MetaData), NewProp_bAllowOutputNodes_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowCopy = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy = { "bAllowCopy", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCopy_MetaData), NewProp_bAllowCopy_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowCut = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut = { "bAllowCut", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowCut_MetaData), NewProp_bAllowCut_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowPaste = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste = { "bAllowPaste", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowPaste_MetaData), NewProp_bAllowPaste_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowDelete = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete = { "bAllowDelete", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowDelete_MetaData), NewProp_bAllowDelete_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bAllowManualCreate = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate = { "bAllowManualCreate", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowManualCreate_MetaData), NewProp_bAllowManualCreate_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bCanRenameNode_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode*)Obj)->bCanRenameNode = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bCanRenameNode = { "bCanRenameNode", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphNode), &Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bCanRenameNode_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bCanRenameNode_MetaData), NewProp_bCanRenameNode_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName = { "ContextMenuName", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, ContextMenuName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ContextMenuName_MetaData), NewProp_ContextMenuName_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType = { "CompatibleGraphType", nullptr, (EPropertyFlags)0x0014000800020015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, CompatibleGraphType), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleGraphType_MetaData), NewProp_CompatibleGraphType_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor = { "BackgroundColor", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, BackgroundColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BackgroundColor_MetaData), NewProp_BackgroundColor_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText = { "NodeTooltipText", nullptr, (EPropertyFlags)0x0010000800010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTooltipText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTooltipText_MetaData), NewProp_NodeTooltipText_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName = { "NodeTypeName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTypeName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTypeName_MetaData), NewProp_NodeTypeName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle = { "NodeTitle", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, NodeTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTitle_MetaData), NewProp_NodeTitle_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OnNodeStateChanged = { "OnNodeStateChanged", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode, OnNodeStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnNodeStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNodeStateChanged_MetaData), NewProp_OnNodeStateChanged_MetaData) }; // 816844275
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ParentNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ChildrenNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Edges,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_Graph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ExecutionOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OwningWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeGameplayTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_AllowedInputClasses,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAutoStarts,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_MaxChildrenNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInheritGraphDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bInvertSkipRowSetting,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTickEvent,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowInputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowOutputNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCopy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowCut,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowPaste,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowDelete,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bAllowManualCreate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_bCanRenameNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_ContextMenuName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_CompatibleGraphType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_BackgroundColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTooltipText,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTypeName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_NodeTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::NewProp_OnNodeStateChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueGraphNode, IMounteaDialogueTickableObject), false },  // 2602973918
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::ClassParams = {
	&UMounteaDialogueGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode>()
{
	return UMounteaDialogueGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode);
UMounteaDialogueGraphNode::~UMounteaDialogueGraphNode() {}
// End Class UMounteaDialogueGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode, UMounteaDialogueGraphNode::StaticClass, TEXT("UMounteaDialogueGraphNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode), 1322184441U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_1505029707(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
