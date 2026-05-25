// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManagerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
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
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin ScriptStruct FDialogueParticipants
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueParticipants;
class UScriptStruct* FDialogueParticipants::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueParticipants.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueParticipants.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueParticipants, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueParticipants"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueParticipants.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueParticipants>()
{
	return FDialogueParticipants::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueParticipants_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A helper structure that provides easy way to move Participants around.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A helper structure that provides easy way to move Participants around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MainParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OtherParticipants_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MainParticipant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OtherParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_OtherParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueParticipants>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_MainParticipant = { "MainParticipant", nullptr, (EPropertyFlags)0x0114000000020005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueParticipants, MainParticipant), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MainParticipant_MetaData), NewProp_MainParticipant_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_OtherParticipants_Inner = { "OtherParticipants", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_OtherParticipants = { "OtherParticipants", nullptr, (EPropertyFlags)0x0114000000020005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueParticipants, OtherParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OtherParticipants_MetaData), NewProp_OtherParticipants_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_MainParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_OtherParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewProp_OtherParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueParticipants_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueParticipants",
	Z_Construct_UScriptStruct_FDialogueParticipants_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipants_Statics::PropPointers),
	sizeof(FDialogueParticipants),
	alignof(FDialogueParticipants),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipants_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueParticipants_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipants()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueParticipants.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueParticipants.InnerSingleton, Z_Construct_UScriptStruct_FDialogueParticipants_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueParticipants.InnerSingleton;
}
// End ScriptStruct FDialogueParticipants

// Begin Delegate FDialogueEvent
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueEvent, UMounteaDialogueContext* Context)
{
	struct _Script_MounteaDialogueSystem_eventDialogueEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	_Script_MounteaDialogueSystem_eventDialogueEvent_Parms Parms;
	Parms.Context=Context;
	DialogueEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueEvent

// Begin Delegate FDialogueStartRequested
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> CallingManager;
		AActor* DialogueInitiator;
		FDialogueParticipants InitialParticipants;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingManager_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_CallingManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInitiator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_CallingManager = { "CallingManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms, CallingManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingManager_MetaData), NewProp_CallingManager_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_DialogueInitiator = { "DialogueInitiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms, DialogueInitiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_InitialParticipants = { "InitialParticipants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms, InitialParticipants), Z_Construct_UScriptStruct_FDialogueParticipants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParticipants_MetaData), NewProp_InitialParticipants_MetaData) }; // 3488827423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_CallingManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_DialogueInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::NewProp_InitialParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueStartRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueStartRequested_DelegateWrapper(const FMulticastScriptDelegate& DialogueStartRequested, TScriptInterface<IMounteaDialogueManagerInterface> const& CallingManager, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants)
{
	struct _Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> CallingManager;
		AActor* DialogueInitiator;
		FDialogueParticipants InitialParticipants;
	};
	_Script_MounteaDialogueSystem_eventDialogueStartRequested_Parms Parms;
	Parms.CallingManager=CallingManager;
	Parms.DialogueInitiator=DialogueInitiator;
	Parms.InitialParticipants=InitialParticipants;
	DialogueStartRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueStartRequested

// Begin Delegate FDialogueStartRequestedResult
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms
	{
		bool Result;
		FString ResultMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResultMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_Result_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ResultMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_Result_SetBit(void* Obj)
{
	((_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms*)Obj)->Result = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms), &Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_Result_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Result_MetaData), NewProp_Result_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_ResultMessage = { "ResultMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms, ResultMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResultMessage_MetaData), NewProp_ResultMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_Result,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::NewProp_ResultMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueStartRequestedResult__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueStartRequestedResult__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueStartRequestedResult_DelegateWrapper(const FMulticastScriptDelegate& DialogueStartRequestedResult, bool Result, const FString& ResultMessage)
{
	struct _Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms
	{
		bool Result;
		FString ResultMessage;
	};
	_Script_MounteaDialogueSystem_eventDialogueStartRequestedResult_Parms Parms;
	Parms.Result=Result ? true : false;
	Parms.ResultMessage=ResultMessage;
	DialogueStartRequestedResult.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueStartRequestedResult

// Begin Delegate FDialogueContextUpdated
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueContextUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueContextUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdated, UMounteaDialogueContext* Context)
{
	struct _Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms
	{
		UMounteaDialogueContext* Context;
	};
	_Script_MounteaDialogueSystem_eventDialogueContextUpdated_Parms Parms;
	Parms.Context=Context;
	DialogueContextUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueContextUpdated

// Begin Delegate FDialogueUserInterfaceChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms
	{
		TSubclassOf<UUserWidget> DialogueWidgetClass;
		UUserWidget* DialogueWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_DialogueWidgetClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidgetClass = { "DialogueWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms, DialogueWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget = { "DialogueWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms, DialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidget_MetaData), NewProp_DialogueWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidgetClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::NewProp_DialogueWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueUserInterfaceChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUserInterfaceChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueUserInterfaceChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueUserInterfaceChanged, TSubclassOf<UUserWidget> DialogueWidgetClass, UUserWidget* DialogueWidget)
{
	struct _Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms
	{
		TSubclassOf<UUserWidget> DialogueWidgetClass;
		UUserWidget* DialogueWidget;
	};
	_Script_MounteaDialogueSystem_eventDialogueUserInterfaceChanged_Parms Parms;
	Parms.DialogueWidgetClass=DialogueWidgetClass;
	Parms.DialogueWidget=DialogueWidget;
	DialogueUserInterfaceChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueUserInterfaceChanged

// Begin Delegate FDialogueNodeEvent
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueNodeEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueNodeEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueNodeEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueNodeEvent, UMounteaDialogueContext* Context)
{
	struct _Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	_Script_MounteaDialogueSystem_eventDialogueNodeEvent_Parms Parms;
	Parms.Context=Context;
	DialogueNodeEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueNodeEvent

// Begin Delegate FDialogueRowEvent
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueRowEvent__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueRowEvent__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueRowEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueRowEvent, UMounteaDialogueContext* Context)
{
	struct _Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms
	{
		UMounteaDialogueContext* Context;
	};
	_Script_MounteaDialogueSystem_eventDialogueRowEvent_Parms Parms;
	Parms.Context=Context;
	DialogueRowEvent.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueRowEvent

// Begin Delegate FDialogueFailed
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueFailed_Parms
	{
		FString ErrorMessage;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ErrorMessage_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ErrorMessage;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage = { "ErrorMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueFailed_Parms, ErrorMessage), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ErrorMessage_MetaData), NewProp_ErrorMessage_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::NewProp_ErrorMessage,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueFailed__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueFailed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueFailed_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueFailed__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueFailed_DelegateWrapper(const FMulticastScriptDelegate& DialogueFailed, const FString& ErrorMessage)
{
	struct _Script_MounteaDialogueSystem_eventDialogueFailed_Parms
	{
		FString ErrorMessage;
	};
	_Script_MounteaDialogueSystem_eventDialogueFailed_Parms Parms;
	Parms.ErrorMessage=ErrorMessage;
	DialogueFailed.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueFailed

// Begin Delegate FDialogueManagerStateChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms
	{
		EDialogueManagerState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueManagerStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueManagerStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueManagerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueManagerStateChanged, EDialogueManagerState const& NewState)
{
	struct _Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms
	{
		EDialogueManagerState NewState;
	};
	_Script_MounteaDialogueSystem_eventDialogueManagerStateChanged_Parms Parms;
	Parms.NewState=NewState;
	DialogueManagerStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueManagerStateChanged

// Begin Delegate FDialogueWidgetCommand
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> DialogueManager;
		FString WidgetCommand;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetCommand_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FStrPropertyParams NewProp_WidgetCommand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms, DialogueManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::NewProp_WidgetCommand = { "WidgetCommand", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms, WidgetCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetCommand_MetaData), NewProp_WidgetCommand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::NewProp_DialogueManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::NewProp_WidgetCommand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueWidgetCommand__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueWidgetCommand__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueWidgetCommand_DelegateWrapper(const FMulticastScriptDelegate& DialogueWidgetCommand, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& WidgetCommand)
{
	struct _Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> DialogueManager;
		FString WidgetCommand;
	};
	_Script_MounteaDialogueSystem_eventDialogueWidgetCommand_Parms Parms;
	Parms.DialogueManager=DialogueManager;
	Parms.WidgetCommand=WidgetCommand;
	DialogueWidgetCommand.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueWidgetCommand

// Begin Interface UMounteaDialogueManagerInterface Function AddDialogueUIObject
struct MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms
{
	UObject* NewDialogueObject;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::AddDialogueUIObject(UObject* NewDialogueObject)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddDialogueUIObject instead.");
	MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_AddDialogueUIObject = FName(TEXT("AddDialogueUIObject"));
bool IMounteaDialogueManagerInterface::Execute_AddDialogueUIObject(UObject* O, UObject* NewDialogueObject)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_AddDialogueUIObject);
	if (Func)
	{
		Parms.NewDialogueObject=NewDialogueObject;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->AddDialogueUIObject_Implementation(NewDialogueObject);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a single dialogue UI object to the manager.\n\x09 * @param NewDialogueObject The object to add.\n\x09 * @return True if the object was successfully added, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a single dialogue UI object to the manager.\n@param NewDialogueObject The object to add.\n@return True if the object was successfully added, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_NewDialogueObject = { "NewDialogueObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms, NewDialogueObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_NewDialogueObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "AddDialogueUIObject", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execAddDialogueUIObject)
{
	P_GET_OBJECT(UObject,Z_Param_NewDialogueObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddDialogueUIObject_Implementation(Z_Param_NewDialogueObject);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function AddDialogueUIObject

// Begin Interface UMounteaDialogueManagerInterface Function AddDialogueUIObjects
struct MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms
{
	TArray<UObject*> NewDialogueObjects;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::AddDialogueUIObjects(TArray<UObject*> const& NewDialogueObjects)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddDialogueUIObjects instead.");
	MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_AddDialogueUIObjects = FName(TEXT("AddDialogueUIObjects"));
bool IMounteaDialogueManagerInterface::Execute_AddDialogueUIObjects(UObject* O, TArray<UObject*> const& NewDialogueObjects)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_AddDialogueUIObjects);
	if (Func)
	{
		Parms.NewDialogueObjects=NewDialogueObjects;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->AddDialogueUIObjects_Implementation(NewDialogueObjects);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an array of dialogue UI objects to the manager.\n\x09 * @param NewDialogueObjects Array of objects to add.\n\x09 * @return Number of objects successfully added.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an array of dialogue UI objects to the manager.\n@param NewDialogueObjects Array of objects to add.\n@return Number of objects successfully added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueObjects;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms, NewDialogueObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueObjects_MetaData), NewProp_NewDialogueObjects_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "AddDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventAddDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execAddDialogueUIObjects)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_NewDialogueObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddDialogueUIObjects_Implementation(Z_Param_Out_NewDialogueObjects);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function AddDialogueUIObjects

// Begin Interface UMounteaDialogueManagerInterface Function CanStartDialogue
struct MounteaDialogueManagerInterface_eventCanStartDialogue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventCanStartDialogue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::CanStartDialogue() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanStartDialogue instead.");
	MounteaDialogueManagerInterface_eventCanStartDialogue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_CanStartDialogue = FName(TEXT("CanStartDialogue"));
bool IMounteaDialogueManagerInterface::Execute_CanStartDialogue(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventCanStartDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CanStartDialogue);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanStartDialogue_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Dialogue Lifecycle functions ------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Dialogue Lifecycle functions ------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CanStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventCanStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventCanStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCanStartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function CanStartDialogue

// Begin Interface UMounteaDialogueManagerInterface Function CleanupDialogue
void IMounteaDialogueManagerInterface::CleanupDialogue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CleanupDialogue instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_CleanupDialogue = FName(TEXT("CleanupDialogue"));
void IMounteaDialogueManagerInterface::Execute_CleanupDialogue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CleanupDialogue);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->CleanupDialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- Dialogue Loop functions ------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- Dialogue Loop functions ------------------------------" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CleanupDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCleanupDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function CleanupDialogue

// Begin Interface UMounteaDialogueManagerInterface Function CloseDialogue
void IMounteaDialogueManagerInterface::CloseDialogue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseDialogue instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_CloseDialogue = FName(TEXT("CloseDialogue"));
void IMounteaDialogueManagerInterface::Execute_CloseDialogue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CloseDialogue);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->CloseDialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Closes the Dialogue if is active.\n\x09 */" },
#endif
		{ "Keywords", "exit,close" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes the Dialogue if is active." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CloseDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCloseDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CloseDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function CloseDialogue

// Begin Interface UMounteaDialogueManagerInterface Function CloseDialogueUI
struct MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::CloseDialogueUI()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CloseDialogueUI instead.");
	MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_CloseDialogueUI = FName(TEXT("CloseDialogueUI"));
bool IMounteaDialogueManagerInterface::Execute_CloseDialogueUI(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CloseDialogueUI);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CloseDialogueUI_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Close Dialogue UI.\n\x09 * This function servers a purpose to try tear down Dialogue UI from player.\n\x09 * \n\x09 * @return true if UI can be removed from screen, false if cannot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Close Dialogue UI.\nThis function servers a purpose to try tear down Dialogue UI from player.\n\n@return true if UI can be removed from screen, false if cannot" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CloseDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventCloseDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCloseDialogueUI)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CloseDialogueUI_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function CloseDialogueUI

// Begin Interface UMounteaDialogueManagerInterface Function CreateDialogueUI
struct MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms
{
	FString Message;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::CreateDialogueUI(FString& Message)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CreateDialogueUI instead.");
	MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_CreateDialogueUI = FName(TEXT("CreateDialogueUI"));
bool IMounteaDialogueManagerInterface::Execute_CreateDialogueUI(UObject* O, FString& Message)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_CreateDialogueUI);
	if (Func)
	{
		Parms.Message=Message;
		O->ProcessEvent(Func, &Parms);
		Message=Parms.Message;
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CreateDialogueUI_Implementation(Message);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Create Dialogue UI.\n\x09 * This function servers a purpose to try showing Dialogue UI to player.\n\x09 * \xe2\x9d\x94 If this function fails, Message will be populated with error message explaining what went wrong.\n\x09 * \n\x09 * @param Message InMessage to be populated with error message explaining why returns false\n\x09 * @return true if UI can be added to screen, false if cannot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Create Dialogue UI.\nThis function servers a purpose to try showing Dialogue UI to player.\n\xe2\x9d\x94 If this function fails, Message will be populated with error message explaining what went wrong.\n\n@param Message InMessage to be populated with error message explaining why returns false\n@return true if UI can be added to screen, false if cannot" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "CreateDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventCreateDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execCreateDialogueUI)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CreateDialogueUI_Implementation(Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function CreateDialogueUI

// Begin Interface UMounteaDialogueManagerInterface Function DialogueRowProcessed
struct MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms
{
	bool bForceFinish;
};
void IMounteaDialogueManagerInterface::DialogueRowProcessed(bool bForceFinish)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_DialogueRowProcessed instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_DialogueRowProcessed = FName(TEXT("DialogueRowProcessed"));
void IMounteaDialogueManagerInterface::Execute_DialogueRowProcessed(UObject* O, bool bForceFinish)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_DialogueRowProcessed);
	if (Func)
	{
		Parms.bForceFinish=bForceFinish;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->DialogueRowProcessed_Implementation(bForceFinish);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function responsible for cleanup once Dialogue Row is finished.\n\x09 * \n\x09 * \xe2\x9d\x94 Dialogue Data contain Dialogue Data Rows, which are individual dialogue lines, which can be skipped.\n\x09 * \xe2\x9d\x94 Once all Dialogue Data Rows are finished, Dialogue Data is finished as well.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function responsible for cleanup once Dialogue Row is finished.\n\n\xe2\x9d\x94 Dialogue Data contain Dialogue Data Rows, which are individual dialogue lines, which can be skipped.\n\xe2\x9d\x94 Once all Dialogue Data Rows are finished, Dialogue Data is finished as well." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForceFinish_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bForceFinish_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForceFinish;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::NewProp_bForceFinish_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms*)Obj)->bForceFinish = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::NewProp_bForceFinish = { "bForceFinish", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::NewProp_bForceFinish_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForceFinish_MetaData), NewProp_bForceFinish_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::NewProp_bForceFinish,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "DialogueRowProcessed", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventDialogueRowProcessed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execDialogueRowProcessed)
{
	P_GET_UBOOL(Z_Param_bForceFinish);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->DialogueRowProcessed_Implementation(Z_Param_bForceFinish);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function DialogueRowProcessed

// Begin Interface UMounteaDialogueManagerInterface Function ExecuteWidgetCommand
struct MounteaDialogueManagerInterface_eventExecuteWidgetCommand_Parms
{
	FString Command;
};
void IMounteaDialogueManagerInterface::ExecuteWidgetCommand(const FString& Command)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ExecuteWidgetCommand instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_ExecuteWidgetCommand = FName(TEXT("ExecuteWidgetCommand"));
void IMounteaDialogueManagerInterface::Execute_ExecuteWidgetCommand(UObject* O, const FString& Command)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventExecuteWidgetCommand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_ExecuteWidgetCommand);
	if (Func)
	{
		Parms.Command=Command;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->ExecuteWidgetCommand_Implementation(Command);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Executes a specified command on a dialogue UI widget within the target object, if it supports the required interface.\n\x09 * \n\x09 * This function allows developers to send specific commands to a dialogue widget, enabling customization or control over UI\n\x09 * elements, provided the target implements the MounteaDialogueManagerInterface.\n\x09 *\n\x09 * @param Command\x09""A string representing the command to be executed on the target widget (e.g., \"Open\", \"Close\", \"Refresh\").\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes a specified command on a dialogue UI widget within the target object, if it supports the required interface.\n\nThis function allows developers to send specific commands to a dialogue widget, enabling customization or control over UI\nelements, provided the target implements the MounteaDialogueManagerInterface.\n\n@param Command       A string representing the command to be executed on the target widget (e.g., \"Open\", \"Close\", \"Refresh\")." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventExecuteWidgetCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "ExecuteWidgetCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventExecuteWidgetCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventExecuteWidgetCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execExecuteWidgetCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteWidgetCommand_Implementation(Z_Param_Command);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function ExecuteWidgetCommand

// Begin Interface UMounteaDialogueManagerInterface Function GetDefaultManagerState
struct MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms
{
	EDialogueManagerState ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms()
		: ReturnValue((EDialogueManagerState)0)
	{
	}
};
EDialogueManagerState IMounteaDialogueManagerInterface::GetDefaultManagerState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultManagerState instead.");
	MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetDefaultManagerState = FName(TEXT("GetDefaultManagerState"));
EDialogueManagerState IMounteaDialogueManagerInterface::Execute_GetDefaultManagerState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDefaultManagerState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDefaultManagerState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Default Dialogue Manager State.\n\x09 * Default Dialogue Manager State sets Dialogue Manager state upon BeginPlay and is used as fallback once Dialogue ends.\n\x09 * \n\x09 * @return ManagerState\x09""Default Manager state value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Default Dialogue Manager State.\nDefault Dialogue Manager State sets Dialogue Manager state upon BeginPlay and is used as fallback once Dialogue ends.\n\n@return ManagerState Default Manager state value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(0, nullptr) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDefaultManagerState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetDefaultManagerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDefaultManagerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueManagerState*)Z_Param__Result=P_THIS->GetDefaultManagerState_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetDefaultManagerState

// Begin Interface UMounteaDialogueManagerInterface Function GetDialogueContext
struct MounteaDialogueManagerInterface_eventGetDialogueContext_Parms
{
	UMounteaDialogueContext* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetDialogueContext_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMounteaDialogueContext* IMounteaDialogueManagerInterface::GetDialogueContext() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueContext instead.");
	MounteaDialogueManagerInterface_eventGetDialogueContext_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetDialogueContext = FName(TEXT("GetDialogueContext"));
UMounteaDialogueContext* IMounteaDialogueManagerInterface::Execute_GetDialogueContext(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetDialogueContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDialogueContext);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueContext_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Dialogue Context.\n\x09 * \n\x09 * \xe2\x9d\x97 Could be null\n\x09 * @return DialogueContext\x09""Dialogue Context is transient data holder for current dialogue instance.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Dialogue Context.\n\n\xe2\x9d\x97 Could be null\n@return DialogueContext      Dialogue Context is transient data holder for current dialogue instance." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDialogueContext_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDialogueContext", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetDialogueContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetDialogueContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDialogueContext)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueContext**)Z_Param__Result=P_THIS->GetDialogueContext_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetDialogueContext

// Begin Interface UMounteaDialogueManagerInterface Function GetDialogueWidget
struct MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms
{
	UUserWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UUserWidget* IMounteaDialogueManagerInterface::GetDialogueWidget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueWidget instead.");
	MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetDialogueWidget = FName(TEXT("GetDialogueWidget"));
UUserWidget* IMounteaDialogueManagerInterface::Execute_GetDialogueWidget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDialogueWidget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueWidget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the widget used to display the current dialogue.\n\x09 *\n\x09 * @return The widget used to display the current dialogue.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the widget used to display the current dialogue.\n\n@return The widget used to display the current dialogue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDialogueWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetDialogueWidget_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetDialogueWidget

// Begin Interface UMounteaDialogueManagerInterface Function GetDialogueWidgetZOrder
struct MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IMounteaDialogueManagerInterface::GetDialogueWidgetZOrder() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueWidgetZOrder instead.");
	MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder = FName(TEXT("GetDialogueWidgetZOrder"));
int32 IMounteaDialogueManagerInterface::Execute_GetDialogueWidgetZOrder(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueWidgetZOrder_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the Z-order of the dialogue widget.\n\x09 * The Z-order determines the rendering order of the widget, with higher values rendering on top of lower values.\n\x09 *\n\x09 * @return The current Z-order value of the dialogue widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the Z-order of the dialogue widget.\nThe Z-order determines the rendering order of the widget, with higher values rendering on top of lower values.\n\n@return The current Z-order value of the dialogue widget." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetDialogueWidgetZOrder", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetDialogueWidgetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetDialogueWidgetZOrder)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetDialogueWidgetZOrder_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetDialogueWidgetZOrder

// Begin Interface UMounteaDialogueManagerInterface Function GetManagerState
struct MounteaDialogueManagerInterface_eventGetManagerState_Parms
{
	EDialogueManagerState ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetManagerState_Parms()
		: ReturnValue((EDialogueManagerState)0)
	{
	}
};
EDialogueManagerState IMounteaDialogueManagerInterface::GetManagerState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetManagerState instead.");
	MounteaDialogueManagerInterface_eventGetManagerState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetManagerState = FName(TEXT("GetManagerState"));
EDialogueManagerState IMounteaDialogueManagerInterface::Execute_GetManagerState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetManagerState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetManagerState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetManagerState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Dialogue Manager State.\n\x09 * State defines whether Manager can start/close dialogue or not.\n\x09 * \n\x09 * @return ManagerState\x09Manager state value\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Dialogue Manager State.\nState defines whether Manager can start/close dialogue or not.\n\n@return ManagerState Manager state value" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(0, nullptr) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetManagerState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetManagerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetManagerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetManagerState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueManagerState*)Z_Param__Result=P_THIS->GetManagerState_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetManagerState

// Begin Interface UMounteaDialogueManagerInterface Function GetOwningActor
struct MounteaDialogueManagerInterface_eventGetOwningActor_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventGetOwningActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* IMounteaDialogueManagerInterface::GetOwningActor() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOwningActor instead.");
	MounteaDialogueManagerInterface_eventGetOwningActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_GetOwningActor = FName(TEXT("GetOwningActor"));
AActor* IMounteaDialogueManagerInterface::Execute_GetOwningActor(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventGetOwningActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_GetOwningActor);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetOwningActor_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the owning actor for this Dialogue Manager Component.\n\x09 *\n\x09 * @return The owning actor for this Dialogue Manager Component.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning actor for this Dialogue Manager Component.\n\n@return The owning actor for this Dialogue Manager Component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventGetOwningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execGetOwningActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwningActor_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function GetOwningActor

// Begin Interface UMounteaDialogueManagerInterface Function NodePrepared
void IMounteaDialogueManagerInterface::NodePrepared()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NodePrepared instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_NodePrepared = FName(TEXT("NodePrepared"));
void IMounteaDialogueManagerInterface::Execute_NodePrepared(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_NodePrepared);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->NodePrepared_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "NodePrepared", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execNodePrepared)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NodePrepared_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function NodePrepared

// Begin Interface UMounteaDialogueManagerInterface Function NodeProcessed
void IMounteaDialogueManagerInterface::NodeProcessed()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_NodeProcessed instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_NodeProcessed = FName(TEXT("NodeProcessed"));
void IMounteaDialogueManagerInterface::Execute_NodeProcessed(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_NodeProcessed);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->NodeProcessed_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "NodeProcessed", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execNodeProcessed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->NodeProcessed_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function NodeProcessed

// Begin Interface UMounteaDialogueManagerInterface Function PrepareNode
void IMounteaDialogueManagerInterface::PrepareNode()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PrepareNode instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_PrepareNode = FName(TEXT("PrepareNode"));
void IMounteaDialogueManagerInterface::Execute_PrepareNode(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_PrepareNode);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->PrepareNode_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prepares the node for execution.\n\x09 * Asks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\n\x09 * In this preparation stage, Nodes are asked to process all Decorators.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepares the node for execution.\nAsks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\nIn this preparation stage, Nodes are asked to process all Decorators." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "PrepareNode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execPrepareNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PrepareNode_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function PrepareNode

// Begin Interface UMounteaDialogueManagerInterface Function ProcessDialogueRow
void IMounteaDialogueManagerInterface::ProcessDialogueRow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessDialogueRow instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_ProcessDialogueRow = FName(TEXT("ProcessDialogueRow"));
void IMounteaDialogueManagerInterface::Execute_ProcessDialogueRow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_ProcessDialogueRow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->ProcessDialogueRow_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts Dialogue Row execution.\n\x09 * \n\x09 * \xe2\x9d\x94 Once all Dialogue Data Rows are finished, Dialogue Data is finished as well.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts Dialogue Row execution.\n\n\xe2\x9d\x94 Once all Dialogue Data Rows are finished, Dialogue Data is finished as well." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "ProcessDialogueRow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execProcessDialogueRow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessDialogueRow_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function ProcessDialogueRow

// Begin Interface UMounteaDialogueManagerInterface Function ProcessNode
void IMounteaDialogueManagerInterface::ProcessNode()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessNode instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_ProcessNode = FName(TEXT("ProcessNode"));
void IMounteaDialogueManagerInterface::Execute_ProcessNode(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_ProcessNode);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->ProcessNode_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calls to the Node to Process it.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls to the Node to Process it." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "ProcessNode", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execProcessNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessNode_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function ProcessNode

// Begin Interface UMounteaDialogueManagerInterface Function RemoveDialogueUIObject
struct MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms
{
	UObject* DialogueObjectToRemove;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::RemoveDialogueUIObject(UObject* DialogueObjectToRemove)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveDialogueUIObject instead.");
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_RemoveDialogueUIObject = FName(TEXT("RemoveDialogueUIObject"));
bool IMounteaDialogueManagerInterface::Execute_RemoveDialogueUIObject(UObject* O, UObject* DialogueObjectToRemove)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_RemoveDialogueUIObject);
	if (Func)
	{
		Parms.DialogueObjectToRemove=DialogueObjectToRemove;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->RemoveDialogueUIObject_Implementation(DialogueObjectToRemove);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a single dialogue UI object from the manager.\n\x09 * @param DialogueObjectToRemove The object to remove.\n\x09 * @return True if the object was successfully removed, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a single dialogue UI object from the manager.\n@param DialogueObjectToRemove The object to remove.\n@return True if the object was successfully removed, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObjectToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_DialogueObjectToRemove = { "DialogueObjectToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms, DialogueObjectToRemove), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_DialogueObjectToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "RemoveDialogueUIObject", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execRemoveDialogueUIObject)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueObjectToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveDialogueUIObject_Implementation(Z_Param_DialogueObjectToRemove);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function RemoveDialogueUIObject

// Begin Interface UMounteaDialogueManagerInterface Function RemoveDialogueUIObjects
struct MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms
{
	TArray<UObject*> DialogueObjectsToRemove;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::RemoveDialogueUIObjects(TArray<UObject*> const& DialogueObjectsToRemove)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveDialogueUIObjects instead.");
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects = FName(TEXT("RemoveDialogueUIObjects"));
bool IMounteaDialogueManagerInterface::Execute_RemoveDialogueUIObjects(UObject* O, TArray<UObject*> const& DialogueObjectsToRemove)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects);
	if (Func)
	{
		Parms.DialogueObjectsToRemove=DialogueObjectsToRemove;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->RemoveDialogueUIObjects_Implementation(DialogueObjectsToRemove);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes multiple dialogue UI objects from the manager.\n\x09 * @param DialogueObjectsToRemove Array of objects to remove.\n\x09 * @return Number of objects successfully removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes multiple dialogue UI objects from the manager.\n@param DialogueObjectsToRemove Array of objects to remove.\n@return Number of objects successfully removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueObjectsToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObjectsToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueObjectsToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove_Inner = { "DialogueObjectsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove = { "DialogueObjectsToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms, DialogueObjectsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueObjectsToRemove_MetaData), NewProp_DialogueObjectsToRemove_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "RemoveDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventRemoveDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execRemoveDialogueUIObjects)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_DialogueObjectsToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveDialogueUIObjects_Implementation(Z_Param_Out_DialogueObjectsToRemove);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function RemoveDialogueUIObjects

// Begin Interface UMounteaDialogueManagerInterface Function RequestCloseDialogue
void IMounteaDialogueManagerInterface::RequestCloseDialogue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestCloseDialogue instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_RequestCloseDialogue = FName(TEXT("RequestCloseDialogue"));
void IMounteaDialogueManagerInterface::Execute_RequestCloseDialogue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_RequestCloseDialogue);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->RequestCloseDialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "RequestCloseDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execRequestCloseDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestCloseDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function RequestCloseDialogue

// Begin Interface UMounteaDialogueManagerInterface Function RequestStartDialogue
struct MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms
{
	AActor* DialogueInitiator;
	FDialogueParticipants InitialParticipants;
};
void IMounteaDialogueManagerInterface::RequestStartDialogue(AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestStartDialogue instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_RequestStartDialogue = FName(TEXT("RequestStartDialogue"));
void IMounteaDialogueManagerInterface::Execute_RequestStartDialogue(UObject* O, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_RequestStartDialogue);
	if (Func)
	{
		Parms.DialogueInitiator=DialogueInitiator;
		Parms.InitialParticipants=InitialParticipants;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->RequestStartDialogue_Implementation(DialogueInitiator,InitialParticipants);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::NewProp_DialogueInitiator = { "DialogueInitiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms, DialogueInitiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::NewProp_InitialParticipants = { "InitialParticipants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms, InitialParticipants), Z_Construct_UScriptStruct_FDialogueParticipants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParticipants_MetaData), NewProp_InitialParticipants_MetaData) }; // 3488827423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::NewProp_DialogueInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::NewProp_InitialParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "RequestStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventRequestStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execRequestStartDialogue)
{
	P_GET_OBJECT(AActor,Z_Param_DialogueInitiator);
	P_GET_STRUCT_REF(FDialogueParticipants,Z_Param_Out_InitialParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RequestStartDialogue_Implementation(Z_Param_DialogueInitiator,Z_Param_Out_InitialParticipants);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function RequestStartDialogue

// Begin Interface UMounteaDialogueManagerInterface Function ResetDialogueUIObjects
void IMounteaDialogueManagerInterface::ResetDialogueUIObjects()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetDialogueUIObjects instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_ResetDialogueUIObjects = FName(TEXT("ResetDialogueUIObjects"));
void IMounteaDialogueManagerInterface::Execute_ResetDialogueUIObjects(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_ResetDialogueUIObjects);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->ResetDialogueUIObjects_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the dialogue manager, removing all dialogue UI objects.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the dialogue manager, removing all dialogue UI objects." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "ResetDialogueUIObjects", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execResetDialogueUIObjects)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDialogueUIObjects_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function ResetDialogueUIObjects

// Begin Interface UMounteaDialogueManagerInterface Function SelectNode
struct MounteaDialogueManagerInterface_eventSelectNode_Parms
{
	FGuid NodeGuid;
};
void IMounteaDialogueManagerInterface::SelectNode(FGuid const& NodeGuid)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SelectNode instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_SelectNode = FName(TEXT("SelectNode"));
void IMounteaDialogueManagerInterface::Execute_SelectNode(UObject* O, FGuid const& NodeGuid)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventSelectNode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_SelectNode);
	if (Func)
	{
		Parms.NodeGuid=NodeGuid;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->SelectNode_Implementation(NodeGuid);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notifies the Dialogue  that a node has been selected.\n\x09 *\n\x09 * @param NodeGuid The GUID of the selected node.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies the Dialogue  that a node has been selected.\n\n@param NodeGuid The GUID of the selected node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventSelectNode_Parms, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::NewProp_NodeGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execSelectNode)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGuid);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SelectNode_Implementation(Z_Param_Out_NodeGuid);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function SelectNode

// Begin Interface UMounteaDialogueManagerInterface Function SetDialogueUIObjects
struct MounteaDialogueManagerInterface_eventSetDialogueUIObjects_Parms
{
	TArray<UObject*> NewDialogueObjects;
};
void IMounteaDialogueManagerInterface::SetDialogueUIObjects(TArray<UObject*> const& NewDialogueObjects)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDialogueUIObjects instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_SetDialogueUIObjects = FName(TEXT("SetDialogueUIObjects"));
void IMounteaDialogueManagerInterface::Execute_SetDialogueUIObjects(UObject* O, TArray<UObject*> const& NewDialogueObjects)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventSetDialogueUIObjects_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_SetDialogueUIObjects);
	if (Func)
	{
		Parms.NewDialogueObjects=NewDialogueObjects;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->SetDialogueUIObjects_Implementation(NewDialogueObjects);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the entire array of dialogue UI objects, replacing any existing objects.\n\x09 * @param NewDialogueObjects The new array of dialogue UI objects.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the entire array of dialogue UI objects, replacing any existing objects.\n@param NewDialogueObjects The new array of dialogue UI objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventSetDialogueUIObjects_Parms, NewDialogueObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueObjects_MetaData), NewProp_NewDialogueObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "SetDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventSetDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventSetDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execSetDialogueUIObjects)
{
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_NewDialogueObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueUIObjects_Implementation(Z_Param_Out_NewDialogueObjects);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function SetDialogueUIObjects

// Begin Interface UMounteaDialogueManagerInterface Function SetDialogueWidget
struct MounteaDialogueManagerInterface_eventSetDialogueWidget_Parms
{
	UUserWidget* DialogueUIPtr;
};
void IMounteaDialogueManagerInterface::SetDialogueWidget(UUserWidget* DialogueUIPtr)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDialogueWidget instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_SetDialogueWidget = FName(TEXT("SetDialogueWidget"));
void IMounteaDialogueManagerInterface::Execute_SetDialogueWidget(UObject* O, UUserWidget* DialogueUIPtr)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventSetDialogueWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_SetDialogueWidget);
	if (Func)
	{
		Parms.DialogueUIPtr=DialogueUIPtr;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->SetDialogueWidget_Implementation(DialogueUIPtr);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets Dialogue UI pointer.\n\x09 * \n\x09 * \xe2\x9d\x94 Using null value resets saved value\n\x09 * @param DialogueUIPtr\x09UserWidget pointer to be saved as Dialogue UI\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Dialogue UI pointer.\n\n\xe2\x9d\x94 Using null value resets saved value\n@param DialogueUIPtr UserWidget pointer to be saved as Dialogue UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueUIPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueUIPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::NewProp_DialogueUIPtr = { "DialogueUIPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventSetDialogueWidget_Parms, DialogueUIPtr), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueUIPtr_MetaData), NewProp_DialogueUIPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::NewProp_DialogueUIPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "SetDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventSetDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventSetDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execSetDialogueWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_DialogueUIPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueWidget_Implementation(Z_Param_DialogueUIPtr);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function SetDialogueWidget

// Begin Interface UMounteaDialogueManagerInterface Function SetDialogueWidgetZOrder
struct MounteaDialogueManagerInterface_eventSetDialogueWidgetZOrder_Parms
{
	int32 NewZOrder;
};
void IMounteaDialogueManagerInterface::SetDialogueWidgetZOrder(const int32 NewZOrder)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDialogueWidgetZOrder instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder = FName(TEXT("SetDialogueWidgetZOrder"));
void IMounteaDialogueManagerInterface::Execute_SetDialogueWidgetZOrder(UObject* O, const int32 NewZOrder)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventSetDialogueWidgetZOrder_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder);
	if (Func)
	{
		Parms.NewZOrder=NewZOrder;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->SetDialogueWidgetZOrder_Implementation(NewZOrder);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a new Z-order for the dialogue widget.\n\x09 * The Z-order determines the rendering order of the widget, with higher values rendering on top of lower values.\n\x09 * \xe2\x9d\x97 Runtime changes are not allowed!\n\x09 *\n\x09 * @param NewZOrder The new Z-order value to be applied to the dialogue widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new Z-order for the dialogue widget.\nThe Z-order determines the rendering order of the widget, with higher values rendering on top of lower values.\n\xe2\x9d\x97 Runtime changes are not allowed!\n\n@param NewZOrder The new Z-order value to be applied to the dialogue widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::NewProp_NewZOrder = { "NewZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventSetDialogueWidgetZOrder_Parms, NewZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewZOrder_MetaData), NewProp_NewZOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::NewProp_NewZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "SetDialogueWidgetZOrder", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventSetDialogueWidgetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventSetDialogueWidgetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execSetDialogueWidgetZOrder)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueWidgetZOrder_Implementation(Z_Param_NewZOrder);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function SetDialogueWidgetZOrder

// Begin Interface UMounteaDialogueManagerInterface Function SkipDialogueRow
void IMounteaDialogueManagerInterface::SkipDialogueRow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SkipDialogueRow instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_SkipDialogueRow = FName(TEXT("SkipDialogueRow"));
void IMounteaDialogueManagerInterface::Execute_SkipDialogueRow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_SkipDialogueRow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->SkipDialogueRow_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Skips the current dialogue row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the current dialogue row." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "SkipDialogueRow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execSkipDialogueRow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SkipDialogueRow_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function SkipDialogueRow

// Begin Interface UMounteaDialogueManagerInterface Function StartDialogue
void IMounteaDialogueManagerInterface::StartDialogue()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartDialogue instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_StartDialogue = FName(TEXT("StartDialogue"));
void IMounteaDialogueManagerInterface::Execute_StartDialogue(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_StartDialogue);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->StartDialogue_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "StartDialogue", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execStartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function StartDialogue

// Begin Interface UMounteaDialogueManagerInterface Function UpdateDialogueContext
struct MounteaDialogueManagerInterface_eventUpdateDialogueContext_Parms
{
	UMounteaDialogueContext* NewContext;
};
void IMounteaDialogueManagerInterface::UpdateDialogueContext(UMounteaDialogueContext* NewContext)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateDialogueContext instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_UpdateDialogueContext = FName(TEXT("UpdateDialogueContext"));
void IMounteaDialogueManagerInterface::Execute_UpdateDialogueContext(UObject* O, UMounteaDialogueContext* NewContext)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventUpdateDialogueContext_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_UpdateDialogueContext);
	if (Func)
	{
		Parms.NewContext=NewContext;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->UpdateDialogueContext_Implementation(NewContext);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewContext;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::NewProp_NewContext = { "NewContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventUpdateDialogueContext_Parms, NewContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::NewProp_NewContext,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "UpdateDialogueContext", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventUpdateDialogueContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventUpdateDialogueContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execUpdateDialogueContext)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_NewContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDialogueContext_Implementation(Z_Param_NewContext);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function UpdateDialogueContext

// Begin Interface UMounteaDialogueManagerInterface Function UpdateDialogueUI
struct MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms
{
	FString Message;
	FString Command;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueManagerInterface::UpdateDialogueUI(FString& Message, const FString& Command)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateDialogueUI instead.");
	MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueManagerInterface_UpdateDialogueUI = FName(TEXT("UpdateDialogueUI"));
bool IMounteaDialogueManagerInterface::Execute_UpdateDialogueUI(UObject* O, FString& Message, const FString& Command)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_UpdateDialogueUI);
	if (Func)
	{
		Parms.Message=Message;
		Parms.Command=Command;
		O->ProcessEvent(Func, &Parms);
		Message=Parms.Message;
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->UpdateDialogueUI_Implementation(Message,Command);
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Update Dialogue UI.\n\x09 * This function servers a purpose to try update Dialogue UI to player using given command.\n\x09 * \xe2\x9d\x94 If this function fails, Message will be populated with error message explaining what went wrong.\n\x09 * \n\x09 * @param Message\x09\x09\x09\x09InMessage to be populated with error message explaining why returns false\n\x09 * @param Command\x09\x09\x09\x09""Command to be processed.\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09true if UI can be update, false if cannot\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Update Dialogue UI.\nThis function servers a purpose to try update Dialogue UI to player using given command.\n\xe2\x9d\x94 If this function fails, Message will be populated with error message explaining what went wrong.\n\n@param Message                               InMessage to be populated with error message explaining why returns false\n@param Command                               Command to be processed.\n@return                                                              true if UI can be update, false if cannot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "UpdateDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventUpdateDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execUpdateDialogueUI)
{
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UpdateDialogueUI_Implementation(Z_Param_Out_Message,Z_Param_Command);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function UpdateDialogueUI

// Begin Interface UMounteaDialogueManagerInterface Function UpdateWorldDialogueUI
struct MounteaDialogueManagerInterface_eventUpdateWorldDialogueUI_Parms
{
	FString Command;
};
void IMounteaDialogueManagerInterface::UpdateWorldDialogueUI(const FString& Command)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UpdateWorldDialogueUI instead.");
}
static FName NAME_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI = FName(TEXT("UpdateWorldDialogueUI"));
void IMounteaDialogueManagerInterface::Execute_UpdateWorldDialogueUI(UObject* O, const FString& Command)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueManagerInterface::StaticClass()));
	MounteaDialogueManagerInterface_eventUpdateWorldDialogueUI_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI);
	if (Func)
	{
		Parms.Command=Command;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueManagerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueManagerInterface::StaticClass())))
	{
		I->UpdateWorldDialogueUI_Implementation(Command);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- World UI functions ------------------------------\n" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- World UI functions ------------------------------" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerInterface_eventUpdateWorldDialogueUI_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerInterface, nullptr, "UpdateWorldDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::PropPointers), sizeof(MounteaDialogueManagerInterface_eventUpdateWorldDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueManagerInterface_eventUpdateWorldDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueManagerInterface::execUpdateWorldDialogueUI)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateWorldDialogueUI_Implementation(Z_Param_Command);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueManagerInterface Function UpdateWorldDialogueUI

// Begin Interface UMounteaDialogueManagerInterface
void UMounteaDialogueManagerInterface::StaticRegisterNativesUMounteaDialogueManagerInterface()
{
	UClass* Class = UMounteaDialogueManagerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialogueUIObject", &IMounteaDialogueManagerInterface::execAddDialogueUIObject },
		{ "AddDialogueUIObjects", &IMounteaDialogueManagerInterface::execAddDialogueUIObjects },
		{ "CanStartDialogue", &IMounteaDialogueManagerInterface::execCanStartDialogue },
		{ "CleanupDialogue", &IMounteaDialogueManagerInterface::execCleanupDialogue },
		{ "CloseDialogue", &IMounteaDialogueManagerInterface::execCloseDialogue },
		{ "CloseDialogueUI", &IMounteaDialogueManagerInterface::execCloseDialogueUI },
		{ "CreateDialogueUI", &IMounteaDialogueManagerInterface::execCreateDialogueUI },
		{ "DialogueRowProcessed", &IMounteaDialogueManagerInterface::execDialogueRowProcessed },
		{ "ExecuteWidgetCommand", &IMounteaDialogueManagerInterface::execExecuteWidgetCommand },
		{ "GetDefaultManagerState", &IMounteaDialogueManagerInterface::execGetDefaultManagerState },
		{ "GetDialogueContext", &IMounteaDialogueManagerInterface::execGetDialogueContext },
		{ "GetDialogueWidget", &IMounteaDialogueManagerInterface::execGetDialogueWidget },
		{ "GetDialogueWidgetZOrder", &IMounteaDialogueManagerInterface::execGetDialogueWidgetZOrder },
		{ "GetManagerState", &IMounteaDialogueManagerInterface::execGetManagerState },
		{ "GetOwningActor", &IMounteaDialogueManagerInterface::execGetOwningActor },
		{ "NodePrepared", &IMounteaDialogueManagerInterface::execNodePrepared },
		{ "NodeProcessed", &IMounteaDialogueManagerInterface::execNodeProcessed },
		{ "PrepareNode", &IMounteaDialogueManagerInterface::execPrepareNode },
		{ "ProcessDialogueRow", &IMounteaDialogueManagerInterface::execProcessDialogueRow },
		{ "ProcessNode", &IMounteaDialogueManagerInterface::execProcessNode },
		{ "RemoveDialogueUIObject", &IMounteaDialogueManagerInterface::execRemoveDialogueUIObject },
		{ "RemoveDialogueUIObjects", &IMounteaDialogueManagerInterface::execRemoveDialogueUIObjects },
		{ "RequestCloseDialogue", &IMounteaDialogueManagerInterface::execRequestCloseDialogue },
		{ "RequestStartDialogue", &IMounteaDialogueManagerInterface::execRequestStartDialogue },
		{ "ResetDialogueUIObjects", &IMounteaDialogueManagerInterface::execResetDialogueUIObjects },
		{ "SelectNode", &IMounteaDialogueManagerInterface::execSelectNode },
		{ "SetDialogueUIObjects", &IMounteaDialogueManagerInterface::execSetDialogueUIObjects },
		{ "SetDialogueWidget", &IMounteaDialogueManagerInterface::execSetDialogueWidget },
		{ "SetDialogueWidgetZOrder", &IMounteaDialogueManagerInterface::execSetDialogueWidgetZOrder },
		{ "SkipDialogueRow", &IMounteaDialogueManagerInterface::execSkipDialogueRow },
		{ "StartDialogue", &IMounteaDialogueManagerInterface::execStartDialogue },
		{ "UpdateDialogueContext", &IMounteaDialogueManagerInterface::execUpdateDialogueContext },
		{ "UpdateDialogueUI", &IMounteaDialogueManagerInterface::execUpdateDialogueUI },
		{ "UpdateWorldDialogueUI", &IMounteaDialogueManagerInterface::execUpdateWorldDialogueUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueManagerInterface);
UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister()
{
	return UMounteaDialogueManagerInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueManagerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObject, "AddDialogueUIObject" }, // 3709296170
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_AddDialogueUIObjects, "AddDialogueUIObjects" }, // 631967834
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CanStartDialogue, "CanStartDialogue" }, // 3642182164
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CleanupDialogue, "CleanupDialogue" }, // 2275096201
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogue, "CloseDialogue" }, // 3053933266
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CloseDialogueUI, "CloseDialogueUI" }, // 1475770888
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_CreateDialogueUI, "CreateDialogueUI" }, // 2777589672
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_DialogueRowProcessed, "DialogueRowProcessed" }, // 1504546187
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_ExecuteWidgetCommand, "ExecuteWidgetCommand" }, // 668669005
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDefaultManagerState, "GetDefaultManagerState" }, // 3627303119
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueContext, "GetDialogueContext" }, // 57348987
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidget, "GetDialogueWidget" }, // 2437970559
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetDialogueWidgetZOrder, "GetDialogueWidgetZOrder" }, // 2902662406
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetManagerState, "GetManagerState" }, // 3392252113
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_GetOwningActor, "GetOwningActor" }, // 1867667009
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodePrepared, "NodePrepared" }, // 2667020199
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_NodeProcessed, "NodeProcessed" }, // 277074569
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_PrepareNode, "PrepareNode" }, // 240466851
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessDialogueRow, "ProcessDialogueRow" }, // 1687523194
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_ProcessNode, "ProcessNode" }, // 2584925228
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObject, "RemoveDialogueUIObject" }, // 3565921585
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RemoveDialogueUIObjects, "RemoveDialogueUIObjects" }, // 1043883204
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestCloseDialogue, "RequestCloseDialogue" }, // 773344895
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_RequestStartDialogue, "RequestStartDialogue" }, // 381935713
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_ResetDialogueUIObjects, "ResetDialogueUIObjects" }, // 3100737743
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_SelectNode, "SelectNode" }, // 714967258
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueUIObjects, "SetDialogueUIObjects" }, // 4023539521
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidget, "SetDialogueWidget" }, // 2125833380
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_SetDialogueWidgetZOrder, "SetDialogueWidgetZOrder" }, // 3353315808
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_SkipDialogueRow, "SkipDialogueRow" }, // 2567794079
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_StartDialogue, "StartDialogue" }, // 3128732935
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueContext, "UpdateDialogueContext" }, // 798394785
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateDialogueUI, "UpdateDialogueUI" }, // 48649776
		{ &Z_Construct_UFunction_UMounteaDialogueManagerInterface_UpdateWorldDialogueUI, "UpdateWorldDialogueUI" }, // 2218775335
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueManagerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::ClassParams = {
	&UMounteaDialogueManagerInterface::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueManagerInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueManagerInterface>()
{
	return UMounteaDialogueManagerInterface::StaticClass();
}
UMounteaDialogueManagerInterface::UMounteaDialogueManagerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueManagerInterface);
UMounteaDialogueManagerInterface::~UMounteaDialogueManagerInterface() {}
// End Interface UMounteaDialogueManagerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueParticipants::StaticStruct, Z_Construct_UScriptStruct_FDialogueParticipants_Statics::NewStructOps, TEXT("DialogueParticipants"), &Z_Registration_Info_UScriptStruct_DialogueParticipants, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueParticipants), 3488827423U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueManagerInterface, UMounteaDialogueManagerInterface::StaticClass, TEXT("UMounteaDialogueManagerInterface"), &Z_Registration_Info_UClass_UMounteaDialogueManagerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueManagerInterface), 2152742877U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_1270474519(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
