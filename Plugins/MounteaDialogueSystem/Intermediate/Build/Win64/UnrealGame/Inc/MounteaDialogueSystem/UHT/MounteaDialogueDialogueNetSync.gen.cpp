// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Components/MounteaDialogueDialogueNetSync.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDialogueNetSync() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDialogueNetSync();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDialogueNetSync_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipants();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDialogueNetSync Function ReceiveBroadcastContextRequest_Server
struct MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms
{
	UObject* CallingManager;
	FMounteaDialogueContextReplicatedStruct Context;
};
static const FName NAME_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server = FName(TEXT("ReceiveBroadcastContextRequest_Server"));
void UMounteaDialogueDialogueNetSync::ReceiveBroadcastContextRequest_Server(UObject* CallingManager, FMounteaDialogueContextReplicatedStruct const& Context)
{
	MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms Parms;
	Parms.CallingManager=CallingManager;
	Parms.Context=Context;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms, CallingManager), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms, Context), Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) }; // 913484787
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::NewProp_CallingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDialogueNetSync, nullptr, "ReceiveBroadcastContextRequest_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::PropPointers), sizeof(MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDialogueNetSync_eventReceiveBroadcastContextRequest_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDialogueNetSync::execReceiveBroadcastContextRequest_Server)
{
	P_GET_OBJECT(UObject,Z_Param_CallingManager);
	P_GET_STRUCT(FMounteaDialogueContextReplicatedStruct,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveBroadcastContextRequest_Server_Implementation(Z_Param_CallingManager,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDialogueNetSync Function ReceiveBroadcastContextRequest_Server

// Begin Class UMounteaDialogueDialogueNetSync Function ReceiveCloseDialogue_Server
struct MounteaDialogueDialogueNetSync_eventReceiveCloseDialogue_Server_Parms
{
	UObject* CallingManager;
};
static const FName NAME_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server = FName(TEXT("ReceiveCloseDialogue_Server"));
void UMounteaDialogueDialogueNetSync::ReceiveCloseDialogue_Server(UObject* CallingManager)
{
	MounteaDialogueDialogueNetSync_eventReceiveCloseDialogue_Server_Parms Parms;
	Parms.CallingManager=CallingManager;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveCloseDialogue_Server_Parms, CallingManager), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::NewProp_CallingManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDialogueNetSync, nullptr, "ReceiveCloseDialogue_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::PropPointers), sizeof(MounteaDialogueDialogueNetSync_eventReceiveCloseDialogue_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDialogueNetSync_eventReceiveCloseDialogue_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDialogueNetSync::execReceiveCloseDialogue_Server)
{
	P_GET_OBJECT(UObject,Z_Param_CallingManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveCloseDialogue_Server_Implementation(Z_Param_CallingManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDialogueNetSync Function ReceiveCloseDialogue_Server

// Begin Class UMounteaDialogueDialogueNetSync Function ReceiveCloseRequest_Server
struct MounteaDialogueDialogueNetSync_eventReceiveCloseRequest_Server_Parms
{
	UObject* CallingManager;
};
static const FName NAME_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server = FName(TEXT("ReceiveCloseRequest_Server"));
void UMounteaDialogueDialogueNetSync::ReceiveCloseRequest_Server(UObject* CallingManager)
{
	MounteaDialogueDialogueNetSync_eventReceiveCloseRequest_Server_Parms Parms;
	Parms.CallingManager=CallingManager;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveCloseRequest_Server_Parms, CallingManager), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::NewProp_CallingManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDialogueNetSync, nullptr, "ReceiveCloseRequest_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::PropPointers), sizeof(MounteaDialogueDialogueNetSync_eventReceiveCloseRequest_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDialogueNetSync_eventReceiveCloseRequest_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDialogueNetSync::execReceiveCloseRequest_Server)
{
	P_GET_OBJECT(UObject,Z_Param_CallingManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveCloseRequest_Server_Implementation(Z_Param_CallingManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDialogueNetSync Function ReceiveCloseRequest_Server

// Begin Class UMounteaDialogueDialogueNetSync Function ReceiveSetState_Server
struct MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms
{
	UObject* CallingManager;
	EDialogueManagerState NewState;
};
static const FName NAME_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server = FName(TEXT("ReceiveSetState_Server"));
void UMounteaDialogueDialogueNetSync::ReceiveSetState_Server(UObject* CallingManager, const EDialogueManagerState NewState)
{
	MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms Parms;
	Parms.CallingManager=CallingManager;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms, CallingManager), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_CallingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDialogueNetSync, nullptr, "ReceiveSetState_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::PropPointers), sizeof(MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDialogueNetSync_eventReceiveSetState_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDialogueNetSync::execReceiveSetState_Server)
{
	P_GET_OBJECT(UObject,Z_Param_CallingManager);
	P_GET_ENUM(EDialogueManagerState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveSetState_Server_Implementation(Z_Param_CallingManager,EDialogueManagerState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueDialogueNetSync Function ReceiveSetState_Server

// Begin Class UMounteaDialogueDialogueNetSync Function ReceiveStartRequest_Server
struct MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms
{
	UObject* CallingManager;
	AActor* DialogueInitiator;
	FDialogueParticipants InitialParticipants;
};
static const FName NAME_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server = FName(TEXT("ReceiveStartRequest_Server"));
void UMounteaDialogueDialogueNetSync::ReceiveStartRequest_Server(UObject* CallingManager, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants)
{
	MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms Parms;
	Parms.CallingManager=CallingManager;
	Parms.DialogueInitiator=DialogueInitiator;
	Parms.InitialParticipants=InitialParticipants;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Manager functions ------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Manager functions ------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInitiator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms, CallingManager), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_DialogueInitiator = { "DialogueInitiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms, DialogueInitiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_InitialParticipants = { "InitialParticipants", nullptr, (EPropertyFlags)0x0010000008000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms, InitialParticipants), Z_Construct_UScriptStruct_FDialogueParticipants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParticipants_MetaData), NewProp_InitialParticipants_MetaData) }; // 3488827423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_CallingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_DialogueInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::NewProp_InitialParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDialogueNetSync, nullptr, "ReceiveStartRequest_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::PropPointers), sizeof(MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDialogueNetSync_eventReceiveStartRequest_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDialogueNetSync::execReceiveStartRequest_Server)
{
	P_GET_OBJECT(UObject,Z_Param_CallingManager);
	P_GET_OBJECT(AActor,Z_Param_DialogueInitiator);
	P_GET_STRUCT(FDialogueParticipants,Z_Param_InitialParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ReceiveStartRequest_Server_Implementation(Z_Param_CallingManager,Z_Param_DialogueInitiator,Z_Param_InitialParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDialogueNetSync Function ReceiveStartRequest_Server

// Begin Class UMounteaDialogueDialogueNetSync
void UMounteaDialogueDialogueNetSync::StaticRegisterNativesUMounteaDialogueDialogueNetSync()
{
	UClass* Class = UMounteaDialogueDialogueNetSync::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ReceiveBroadcastContextRequest_Server", &UMounteaDialogueDialogueNetSync::execReceiveBroadcastContextRequest_Server },
		{ "ReceiveCloseDialogue_Server", &UMounteaDialogueDialogueNetSync::execReceiveCloseDialogue_Server },
		{ "ReceiveCloseRequest_Server", &UMounteaDialogueDialogueNetSync::execReceiveCloseRequest_Server },
		{ "ReceiveSetState_Server", &UMounteaDialogueDialogueNetSync::execReceiveSetState_Server },
		{ "ReceiveStartRequest_Server", &UMounteaDialogueDialogueNetSync::execReceiveStartRequest_Server },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDialogueNetSync);
UClass* Z_Construct_UClass_UMounteaDialogueDialogueNetSync_NoRegister()
{
	return UMounteaDialogueDialogueNetSync::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Component that enables network synchronization for Mountea Dialogue Managers and Participants.\n * Handles RPC routing through PlayerController's network connection and manages dialogue manager registration and updates to participants.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Dialogue Sync" },
		{ "IncludePath", "Components/MounteaDialogueDialogueNetSync.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueDialogueNetSync.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Component that enables network synchronization for Mountea Dialogue Managers and Participants.\nHandles RPC routing through PlayerController's network connection and manages dialogue manager registration and updates to participants." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveBroadcastContextRequest_Server, "ReceiveBroadcastContextRequest_Server" }, // 3837095876
		{ &Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseDialogue_Server, "ReceiveCloseDialogue_Server" }, // 833084025
		{ &Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveCloseRequest_Server, "ReceiveCloseRequest_Server" }, // 3152867499
		{ &Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveSetState_Server, "ReceiveSetState_Server" }, // 3066291931
		{ &Z_Construct_UFunction_UMounteaDialogueDialogueNetSync_ReceiveStartRequest_Server, "ReceiveStartRequest_Server" }, // 2163577624
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDialogueNetSync>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::ClassParams = {
	&UMounteaDialogueDialogueNetSync::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDialogueNetSync()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDialogueNetSync.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDialogueNetSync.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDialogueNetSync.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDialogueNetSync>()
{
	return UMounteaDialogueDialogueNetSync::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDialogueNetSync);
UMounteaDialogueDialogueNetSync::~UMounteaDialogueDialogueNetSync() {}
// End Class UMounteaDialogueDialogueNetSync

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDialogueNetSync, UMounteaDialogueDialogueNetSync::StaticClass, TEXT("UMounteaDialogueDialogueNetSync"), &Z_Registration_Info_UClass_UMounteaDialogueDialogueNetSync, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDialogueNetSync), 2316678316U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_1221580190(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
