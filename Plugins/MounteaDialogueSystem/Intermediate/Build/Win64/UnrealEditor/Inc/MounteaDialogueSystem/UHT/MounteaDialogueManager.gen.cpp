// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Components/MounteaDialogueManager.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueManagerInterface.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManager() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManager();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManager_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipants();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueManager Function CleanupDialogue_Server
static const FName NAME_UMounteaDialogueManager_CleanupDialogue_Server = FName(TEXT("CleanupDialogue_Server"));
void UMounteaDialogueManager::CleanupDialogue_Server()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_CleanupDialogue_Server);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "CleanupDialogue_Server", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execCleanupDialogue_Server)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupDialogue_Server_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function CleanupDialogue_Server

// Begin Class UMounteaDialogueManager Function DialogueFailed
struct Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics
{
	struct MounteaDialogueManager_eventDialogueFailed_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventDialogueFailed_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "DialogueFailed", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::MounteaDialogueManager_eventDialogueFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::MounteaDialogueManager_eventDialogueFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execDialogueFailed)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_ErrorMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueFailed(Z_Param_ErrorMessage);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function DialogueFailed

// Begin Class UMounteaDialogueManager Function DialogueStartRequestReceived
struct Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics
{
	struct MounteaDialogueManager_eventDialogueStartRequestReceived_Parms
	{
		bool bResult;
		FString ResultMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bResult_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResultMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((MounteaDialogueManager_eventDialogueStartRequestReceived_Parms*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManager_eventDialogueStartRequestReceived_Parms), &Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bResult_MetaData), NewProp_bResult_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_ResultMessage = { "ResultMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventDialogueStartRequestReceived_Parms, ResultMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultMessage_MetaData), NewProp_ResultMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_bResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::NewProp_ResultMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "DialogueStartRequestReceived", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::MounteaDialogueManager_eventDialogueStartRequestReceived_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::MounteaDialogueManager_eventDialogueStartRequestReceived_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execDialogueStartRequestReceived)
{
	P_GET_UBOOL(Z_Param_bResult);
	P_GET_PROPERTY(FStrProperty,Z_Param_ResultMessage);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueStartRequestReceived(Z_Param_bResult,Z_Param_ResultMessage);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function DialogueStartRequestReceived

// Begin Class UMounteaDialogueManager Function OnRep_DialogueContext
struct Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnRep_DialogueContext", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execOnRep_DialogueContext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DialogueContext();
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function OnRep_DialogueContext

// Begin Class UMounteaDialogueManager Function OnRep_ManagerState
struct Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "OnRep_ManagerState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execOnRep_ManagerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ManagerState();
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function OnRep_ManagerState

// Begin Class UMounteaDialogueManager Function RequestBroadcastContext
struct Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics
{
	struct MounteaDialogueManager_eventRequestBroadcastContext_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventRequestBroadcastContext_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "RequestBroadcastContext", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::MounteaDialogueManager_eventRequestBroadcastContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::MounteaDialogueManager_eventRequestBroadcastContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execRequestBroadcastContext)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestBroadcastContext(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function RequestBroadcastContext

// Begin Class UMounteaDialogueManager Function RequestBroadcastContext_Server
struct MounteaDialogueManager_eventRequestBroadcastContext_Server_Parms
{
	FMounteaDialogueContextReplicatedStruct Context;
};
static const FName NAME_UMounteaDialogueManager_RequestBroadcastContext_Server = FName(TEXT("RequestBroadcastContext_Server"));
void UMounteaDialogueManager::RequestBroadcastContext_Server(FMounteaDialogueContextReplicatedStruct const& Context)
{
	MounteaDialogueManager_eventRequestBroadcastContext_Server_Parms Parms;
	Parms.Context=Context;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_RequestBroadcastContext_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventRequestBroadcastContext_Server_Parms, Context), Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 913484787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "RequestBroadcastContext_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventRequestBroadcastContext_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventRequestBroadcastContext_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execRequestBroadcastContext_Server)
{
	P_GET_STRUCT(FMounteaDialogueContextReplicatedStruct,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestBroadcastContext_Server_Implementation(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function RequestBroadcastContext_Server

// Begin Class UMounteaDialogueManager Function RequestStartDialogue_Server
struct MounteaDialogueManager_eventRequestStartDialogue_Server_Parms
{
	AActor* DialogueInitiator;
	FDialogueParticipants InitialParticipants;
};
static const FName NAME_UMounteaDialogueManager_RequestStartDialogue_Server = FName(TEXT("RequestStartDialogue_Server"));
void UMounteaDialogueManager::RequestStartDialogue_Server(AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants)
{
	MounteaDialogueManager_eventRequestStartDialogue_Server_Parms Parms;
	Parms.DialogueInitiator=DialogueInitiator;
	Parms.InitialParticipants=InitialParticipants;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_RequestStartDialogue_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInitiator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::NewProp_DialogueInitiator = { "DialogueInitiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventRequestStartDialogue_Server_Parms, DialogueInitiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::NewProp_InitialParticipants = { "InitialParticipants", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventRequestStartDialogue_Server_Parms, InitialParticipants), Z_Construct_UScriptStruct_FDialogueParticipants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParticipants_MetaData), NewProp_InitialParticipants_MetaData) }; // 3488827423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::NewProp_DialogueInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::NewProp_InitialParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "RequestStartDialogue_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventRequestStartDialogue_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventRequestStartDialogue_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execRequestStartDialogue_Server)
{
	P_GET_OBJECT(AActor,Z_Param_DialogueInitiator);
	P_GET_STRUCT(FDialogueParticipants,Z_Param_InitialParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStartDialogue_Server_Implementation(Z_Param_DialogueInitiator,Z_Param_InitialParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function RequestStartDialogue_Server

// Begin Class UMounteaDialogueManager Function SetDefaultManagerState_Server
struct MounteaDialogueManager_eventSetDefaultManagerState_Server_Parms
{
	EDialogueManagerState NewState;
};
static const FName NAME_UMounteaDialogueManager_SetDefaultManagerState_Server = FName(TEXT("SetDefaultManagerState_Server"));
void UMounteaDialogueManager::SetDefaultManagerState_Server(const EDialogueManagerState NewState)
{
	MounteaDialogueManager_eventSetDefaultManagerState_Server_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_SetDefaultManagerState_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventSetDefaultManagerState_Server_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "SetDefaultManagerState_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventSetDefaultManagerState_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240C41, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventSetDefaultManagerState_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execSetDefaultManagerState_Server)
{
	P_GET_ENUM(EDialogueManagerState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultManagerState_Server_Implementation(EDialogueManagerState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function SetDefaultManagerState_Server

// Begin Class UMounteaDialogueManager Function SetDialogueContext_Server
struct MounteaDialogueManager_eventSetDialogueContext_Server_Parms
{
	UMounteaDialogueContext* NewContext;
};
static const FName NAME_UMounteaDialogueManager_SetDialogueContext_Server = FName(TEXT("SetDialogueContext_Server"));
void UMounteaDialogueManager::SetDialogueContext_Server(UMounteaDialogueContext* NewContext)
{
	MounteaDialogueManager_eventSetDialogueContext_Server_Parms Parms;
	Parms.NewContext=NewContext;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_SetDialogueContext_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::NewProp_NewContext = { "NewContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventSetDialogueContext_Server_Parms, NewContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::NewProp_NewContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "SetDialogueContext_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventSetDialogueContext_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventSetDialogueContext_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execSetDialogueContext_Server)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_NewContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueContext_Server_Implementation(Z_Param_NewContext);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function SetDialogueContext_Server

// Begin Class UMounteaDialogueManager Function SetManagerState_Server
struct MounteaDialogueManager_eventSetManagerState_Server_Parms
{
	EDialogueManagerState NewState;
};
static const FName NAME_UMounteaDialogueManager_SetManagerState_Server = FName(TEXT("SetManagerState_Server"));
void UMounteaDialogueManager::SetManagerState_Server(const EDialogueManagerState NewState)
{
	MounteaDialogueManager_eventSetManagerState_Server_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_SetManagerState_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventSetManagerState_Server_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "SetManagerState_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventSetManagerState_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventSetManagerState_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execSetManagerState_Server)
{
	P_GET_ENUM(EDialogueManagerState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetManagerState_Server_Implementation(EDialogueManagerState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function SetManagerState_Server

// Begin Class UMounteaDialogueManager Function StartParticipants_Server
static const FName NAME_UMounteaDialogueManager_StartParticipants_Server = FName(TEXT("StartParticipants_Server"));
void UMounteaDialogueManager::StartParticipants_Server()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_StartParticipants_Server);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "StartParticipants_Server", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execStartParticipants_Server)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartParticipants_Server_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function StartParticipants_Server

// Begin Class UMounteaDialogueManager Function StopParticipants_Server
static const FName NAME_UMounteaDialogueManager_StopParticipants_Server = FName(TEXT("StopParticipants_Server"));
void UMounteaDialogueManager::StopParticipants_Server() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_StopParticipants_Server);
		const_cast<UMounteaDialogueManager*>(this)->ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "StopParticipants_Server", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execStopParticipants_Server)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopParticipants_Server_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function StopParticipants_Server

// Begin Class UMounteaDialogueManager Function UpdateDialogueContext_Server
struct MounteaDialogueManager_eventUpdateDialogueContext_Server_Parms
{
	UMounteaDialogueContext* NewContext;
};
static const FName NAME_UMounteaDialogueManager_UpdateDialogueContext_Server = FName(TEXT("UpdateDialogueContext_Server"));
void UMounteaDialogueManager::UpdateDialogueContext_Server(UMounteaDialogueContext* NewContext)
{
	MounteaDialogueManager_eventUpdateDialogueContext_Server_Parms Parms;
	Parms.NewContext=NewContext;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueManager_UpdateDialogueContext_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::NewProp_NewContext = { "NewContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManager_eventUpdateDialogueContext_Server_Parms, NewContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::NewProp_NewContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManager, nullptr, "UpdateDialogueContext_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::PropPointers), sizeof(MounteaDialogueManager_eventUpdateDialogueContext_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00240CC1, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManager_eventUpdateDialogueContext_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManager::execUpdateDialogueContext_Server)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_NewContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDialogueContext_Server_Implementation(Z_Param_NewContext);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManager Function UpdateDialogueContext_Server

// Begin Class UMounteaDialogueManager
void UMounteaDialogueManager::StaticRegisterNativesUMounteaDialogueManager()
{
	UClass* Class = UMounteaDialogueManager::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanupDialogue_Server", &UMounteaDialogueManager::execCleanupDialogue_Server },
		{ "DialogueFailed", &UMounteaDialogueManager::execDialogueFailed },
		{ "DialogueStartRequestReceived", &UMounteaDialogueManager::execDialogueStartRequestReceived },
		{ "OnRep_DialogueContext", &UMounteaDialogueManager::execOnRep_DialogueContext },
		{ "OnRep_ManagerState", &UMounteaDialogueManager::execOnRep_ManagerState },
		{ "RequestBroadcastContext", &UMounteaDialogueManager::execRequestBroadcastContext },
		{ "RequestBroadcastContext_Server", &UMounteaDialogueManager::execRequestBroadcastContext_Server },
		{ "RequestStartDialogue_Server", &UMounteaDialogueManager::execRequestStartDialogue_Server },
		{ "SetDefaultManagerState_Server", &UMounteaDialogueManager::execSetDefaultManagerState_Server },
		{ "SetDialogueContext_Server", &UMounteaDialogueManager::execSetDialogueContext_Server },
		{ "SetManagerState_Server", &UMounteaDialogueManager::execSetManagerState_Server },
		{ "StartParticipants_Server", &UMounteaDialogueManager::execStartParticipants_Server },
		{ "StopParticipants_Server", &UMounteaDialogueManager::execStopParticipants_Server },
		{ "UpdateDialogueContext_Server", &UMounteaDialogueManager::execUpdateDialogueContext_Server },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueManager);
UClass* Z_Construct_UClass_UMounteaDialogueManager_NoRegister()
{
	return UMounteaDialogueManager::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *  Mountea Dialogue Manager Component\n * \n * Should be attached to Player State in order to be replication ready.\n * \xe2\x9d\x94 Allows any Actor to be Dialogue Manager\n * \xe2\x9d\x94 Implements 'IMounteaDialogueManagerInterface'.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Manager" },
		{ "IncludePath", "Components/MounteaDialogueManager.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Manager Component\n\nShould be attached to Player State in order to be replication ready.\n\xe2\x9d\x94 Allows any Actor to be Dialogue Manager\n\xe2\x9d\x94 Implements 'IMounteaDialogueManagerInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStartRequested_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStartRequestedResult_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Even called when Dialogue is Initialized.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Even called when Dialogue is Initialized." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue has started.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue has started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueClosed_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue has been closed.\n\x09 * Could be either manual or automatic.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue has been closed.\nCould be either manual or automatic." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueContextUpdated_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Context is updated.\n\x09 * \xe2\x9d\x97 Could be Null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Context is updated.\n\xe2\x9d\x97 Could be Null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueUserInterfaceChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Widget Class or Widget have changed.\n\x09 *\xe2\x9d\x97 Dialogue Widget Could be Null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Widget Class or Widget have changed.\n\xe2\x9d\x97 Dialogue Widget Could be Null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeSelected_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when new Dialogue Node has been selected.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when new Dialogue Node has been selected." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has started.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Node has started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueNodeFinished_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Node has finished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Node has finished." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRowStarted_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Row has started.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Row has started." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueRowFinished_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue Row has finished.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue Row has finished." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnNextDialogueRowDataRequested_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Dialogue Row Data update has been requested.\n\x09 * Is never called from Code and is bound to `FinishedExecuteDialogueRow` function.\n\x09 * Should be used carefully. Suggested usage is with Dialogue Row Data which are using `RowDurationMode::Manual`.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Dialogue Row Data update has been requested.\nIs never called from Code and is bound to `FinishedExecuteDialogueRow` function.\nShould be used carefully. Suggested usage is with Dialogue Row Data which are using `RowDurationMode::Manual`." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueFailed_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called if Dialogue fails to execute.\n\x09 * Provides Error Message with explanation.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called if Dialogue fails to execute.\nProvides Error Message with explanation." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueManagerStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called when Dialogue State changes.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called when Dialogue State changes." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueWidgetCommandRequested_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Event called for all listening Dialogue Objects.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called for all listening Dialogue Objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueInstigator_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Manager based Dialogue Widget Class.\n\x09 * \xe2\x9d\x94 Could be left empty if Project Settings are setup properly\n\x09 * \xe2\x9d\x97 Must implement MounteaDialogueWBPInterface\n\x09 */" },
#endif
		{ "DisplayName", "Dialogue Widget Class Override" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Manager based Dialogue Widget Class.\n\xe2\x9d\x94 Could be left empty if Project Settings are setup properly\n\xe2\x9d\x97 Must implement MounteaDialogueWBPInterface" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetZOrder_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The Z-order of the dialogue widget.\n\x09 * \xe2\x9d\x94 This determines the order in which the widget is rendered relative to other UI elements.\n\x09 * \xe2\x9d\x94 A higher Z-order means the widget will be rendered on top of others with lower Z-orders.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The Z-order of the dialogue widget.\n\xe2\x9d\x94 This determines the order in which the widget is rendered relative to other UI elements.\n\xe2\x9d\x94 A higher Z-order means the widget will be rendered on top of others with lower Z-orders." },
#endif
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultManagerState_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mountea Dialogue Manager Default State.\n\x09 * \xe2\x9d\x94 Is used in BeginPlay to set ManagerState.\n\x09 * \xe2\x9d\x94 Is used as fallback value once Dialogue Ends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Manager Default State.\n\xe2\x9d\x94 Is used in BeginPlay to set ManagerState.\n\xe2\x9d\x94 Is used as fallback value once Dialogue Ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ManagerState_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* State of the Dialogue Manager.\n\x09* \xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\x09* \xe2\x9d\x94 Can be updated using SetDialogueManagerState function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State of the Dialogue Manager.\n\xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\xe2\x9d\x94 Can be updated using SetDialogueManagerState function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManagerType_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueObjects_MetaData[] = {
		{ "Category", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An array of dialogue objects. Serves purpose of listeners who receive information about UI events.\n\x09 * Each must implement `IMounteaDialogueWBPInterface` interface.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An array of dialogue objects. Serves purpose of listeners who receive information about UI events.\nEach must implement `IMounteaDialogueWBPInterface` interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dialogue Widget which has been created.\n\x09 * \xe2\x9d\x94 Transient, for actual runtime only.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Widget which has been created.\n\xe2\x9d\x94 Transient, for actual runtime only." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueContext_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dialogue Context which is used to contain temporary data.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Context which is used to contain temporary data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_RowTimer_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * TimerHandle managing Dialogue Row.\n\x09 * Once expires, Dialogue Row is finished.\n\x09 * \n\x09 * \xe2\x9d\x94 Expiration is driven by Dialogue data Duration variable\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TimerHandle managing Dialogue Row.\nOnce expires, Dialogue Row is finished.\n\n\xe2\x9d\x94 Expiration is driven by Dialogue data Duration variable" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastDialogueCommand_MetaData[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TransientDialogueContext_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Replication helper to move Dialogue Context round\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueManager.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replication helper to move Dialogue Context round" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStartRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStartRequestedResult;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueClosed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueContextUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueUserInterfaceChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueNodeFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRowStarted;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueRowFinished;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnNextDialogueRowDataRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueFailed;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueManagerStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueWidgetCommandRequested;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInstigator;
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
	static const UECodeGen_Private::FIntPropertyParams NewProp_DialogueWidgetZOrder;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultManagerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultManagerState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ManagerState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ManagerState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueManagerType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueManagerType;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueObjects;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueContext;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_RowTimer;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastDialogueCommand;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TransientDialogueContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueManager_CleanupDialogue_Server, "CleanupDialogue_Server" }, // 242230538
		{ &Z_Construct_UFunction_UMounteaDialogueManager_DialogueFailed, "DialogueFailed" }, // 882758364
		{ &Z_Construct_UFunction_UMounteaDialogueManager_DialogueStartRequestReceived, "DialogueStartRequestReceived" }, // 1412344784
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnRep_DialogueContext, "OnRep_DialogueContext" }, // 3220287093
		{ &Z_Construct_UFunction_UMounteaDialogueManager_OnRep_ManagerState, "OnRep_ManagerState" }, // 754960954
		{ &Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext, "RequestBroadcastContext" }, // 116751320
		{ &Z_Construct_UFunction_UMounteaDialogueManager_RequestBroadcastContext_Server, "RequestBroadcastContext_Server" }, // 3486571363
		{ &Z_Construct_UFunction_UMounteaDialogueManager_RequestStartDialogue_Server, "RequestStartDialogue_Server" }, // 3180331640
		{ &Z_Construct_UFunction_UMounteaDialogueManager_SetDefaultManagerState_Server, "SetDefaultManagerState_Server" }, // 1082621476
		{ &Z_Construct_UFunction_UMounteaDialogueManager_SetDialogueContext_Server, "SetDialogueContext_Server" }, // 2086636200
		{ &Z_Construct_UFunction_UMounteaDialogueManager_SetManagerState_Server, "SetManagerState_Server" }, // 3265704587
		{ &Z_Construct_UFunction_UMounteaDialogueManager_StartParticipants_Server, "StartParticipants_Server" }, // 3386211174
		{ &Z_Construct_UFunction_UMounteaDialogueManager_StopParticipants_Server, "StopParticipants_Server" }, // 2153219446
		{ &Z_Construct_UFunction_UMounteaDialogueManager_UpdateDialogueContext_Server, "UpdateDialogueContext_Server" }, // 855278082
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueManager>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStartRequested = { "OnDialogueStartRequested", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueStartRequested), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStartRequested_MetaData), NewProp_OnDialogueStartRequested_MetaData) }; // 2439711037
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStartRequestedResult = { "OnDialogueStartRequestedResult", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueStartRequestedResult), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStartRequestedResult_MetaData), NewProp_OnDialogueStartRequestedResult_MetaData) }; // 2794431526
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted = { "OnDialogueStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueStarted_MetaData), NewProp_OnDialogueStarted_MetaData) }; // 3586227868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed = { "OnDialogueClosed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueClosed), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueClosed_MetaData), NewProp_OnDialogueClosed_MetaData) }; // 3586227868
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated = { "OnDialogueContextUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueContextUpdated), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueContextUpdated_MetaData), NewProp_OnDialogueContextUpdated_MetaData) }; // 3656123153
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged = { "OnDialogueUserInterfaceChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueUserInterfaceChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueUserInterfaceChanged_MetaData), NewProp_OnDialogueUserInterfaceChanged_MetaData) }; // 3758494809
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected = { "OnDialogueNodeSelected", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeSelected), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueNodeSelected_MetaData), NewProp_OnDialogueNodeSelected_MetaData) }; // 841488475
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted = { "OnDialogueNodeStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueNodeStarted_MetaData), NewProp_OnDialogueNodeStarted_MetaData) }; // 841488475
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished = { "OnDialogueNodeFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueNodeFinished), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueNodeFinished_MetaData), NewProp_OnDialogueNodeFinished_MetaData) }; // 841488475
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted = { "OnDialogueRowStarted", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueRowStarted), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueRowStarted_MetaData), NewProp_OnDialogueRowStarted_MetaData) }; // 1151876637
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished = { "OnDialogueRowFinished", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueRowFinished), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueRowFinished_MetaData), NewProp_OnDialogueRowFinished_MetaData) }; // 1151876637
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnNextDialogueRowDataRequested = { "OnNextDialogueRowDataRequested", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnNextDialogueRowDataRequested), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnNextDialogueRowDataRequested_MetaData), NewProp_OnNextDialogueRowDataRequested_MetaData) }; // 1151876637
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed = { "OnDialogueFailed", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueFailed), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueFailed_MetaData), NewProp_OnDialogueFailed_MetaData) }; // 1055491037
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged = { "OnDialogueManagerStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueManagerStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueManagerStateChanged_MetaData), NewProp_OnDialogueManagerStateChanged_MetaData) }; // 1971793156
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueWidgetCommandRequested = { "OnDialogueWidgetCommandRequested", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, OnDialogueWidgetCommandRequested), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueWidgetCommandRequested_MetaData), NewProp_OnDialogueWidgetCommandRequested_MetaData) }; // 1845727504
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueInstigator = { "DialogueInstigator", nullptr, (EPropertyFlags)0x0124080000022001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueInstigator), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueInstigator_MetaData), NewProp_DialogueInstigator_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0024080001000001, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetClass_MetaData), NewProp_DialogueWidgetClass_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetZOrder = { "DialogueWidgetZOrder", nullptr, (EPropertyFlags)0x0020080001000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueWidgetZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetZOrder_MetaData), NewProp_DialogueWidgetZOrder_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState = { "DefaultManagerState", nullptr, (EPropertyFlags)0x0020080001000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DefaultManagerState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultManagerState_MetaData), NewProp_DefaultManagerState_MetaData) }; // 767330634
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState = { "ManagerState", "OnRep_ManagerState", (EPropertyFlags)0x0020080101020021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, ManagerState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ManagerState_MetaData), NewProp_ManagerState_MetaData) }; // 767330634
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueManagerType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueManagerType = { "DialogueManagerType", nullptr, (EPropertyFlags)0x0020080001020001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueManagerType), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManagerType_MetaData), NewProp_DialogueManagerType_MetaData) }; // 2228663124
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueObjects_Inner = { "DialogueObjects", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueObjects = { "DialogueObjects", nullptr, (EPropertyFlags)0x01240c0000020001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueObjects_MetaData), NewProp_DialogueObjects_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x01240c00000a2009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidget_MetaData), NewProp_DialogueWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext = { "DialogueContext", nullptr, (EPropertyFlags)0x01240c0000020001, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, DialogueContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueContext_MetaData), NewProp_DialogueContext_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer = { "TimerHandle_RowTimer", nullptr, (EPropertyFlags)0x00200c0000022001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, TimerHandle_RowTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_RowTimer_MetaData), NewProp_TimerHandle_RowTimer_MetaData) }; // 756291145
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_LastDialogueCommand = { "LastDialogueCommand", nullptr, (EPropertyFlags)0x0020080000002000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, LastDialogueCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastDialogueCommand_MetaData), NewProp_LastDialogueCommand_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TransientDialogueContext = { "TransientDialogueContext", "OnRep_DialogueContext", (EPropertyFlags)0x0040000100002020, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueManager, TransientDialogueContext), Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TransientDialogueContext_MetaData), NewProp_TransientDialogueContext_MetaData) }; // 913484787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStartRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStartRequestedResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueClosed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueContextUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueUserInterfaceChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueNodeFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowStarted,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueRowFinished,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnNextDialogueRowDataRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueFailed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueManagerStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_OnDialogueWidgetCommandRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueInstigator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidgetZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DefaultManagerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_ManagerState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueManagerType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueManagerType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_DialogueContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TimerHandle_RowTimer,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_LastDialogueCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueManager_Statics::NewProp_TransientDialogueContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueManager_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueManager_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueManager, IMounteaDialogueManagerInterface), false },  // 2152742877
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueManager_Statics::ClassParams = {
	&UMounteaDialogueManager::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManager_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueManager_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueManager()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton, Z_Construct_UClass_UMounteaDialogueManager_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueManager.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueManager>()
{
	return UMounteaDialogueManager::StaticClass();
}
void UMounteaDialogueManager::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ManagerState(TEXT("ManagerState"));
	static const FName Name_TransientDialogueContext(TEXT("TransientDialogueContext"));
	const bool bIsValid = true
		&& Name_ManagerState == ClassReps[(int32)ENetFields_Private::ManagerState].Property->GetFName()
		&& Name_TransientDialogueContext == ClassReps[(int32)ENetFields_Private::TransientDialogueContext].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMounteaDialogueManager"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueManager);
UMounteaDialogueManager::~UMounteaDialogueManager() {}
// End Class UMounteaDialogueManager

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueManager, UMounteaDialogueManager::StaticClass, TEXT("UMounteaDialogueManager"), &Z_Registration_Info_UClass_UMounteaDialogueManager, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueManager), 3737358358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_2212983405(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
