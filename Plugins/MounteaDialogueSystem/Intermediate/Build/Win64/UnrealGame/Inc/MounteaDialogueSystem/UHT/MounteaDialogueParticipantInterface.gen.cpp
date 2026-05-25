// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueParticipantInterface.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueParticipantInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FDialogueGraphChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms
	{
		UMounteaDialogueGraph* NewGraph;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::NewProp_NewGraph = { "NewGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms, NewGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::NewProp_NewGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueGraphChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueGraphChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueGraphChanged, UMounteaDialogueGraph* NewGraph)
{
	struct _Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms
	{
		UMounteaDialogueGraph* NewGraph;
	};
	_Script_MounteaDialogueSystem_eventDialogueGraphChanged_Parms Parms;
	Parms.NewGraph=NewGraph;
	DialogueGraphChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueGraphChanged

// Begin Delegate FDialogueParticipantStateChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms
	{
		EDialogueParticipantState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueParticipantStateChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueParticipantStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantStateChanged, EDialogueParticipantState const& NewState)
{
	struct _Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms
	{
		EDialogueParticipantState NewState;
	};
	_Script_MounteaDialogueSystem_eventDialogueParticipantStateChanged_Parms Parms;
	Parms.NewState=NewState;
	DialogueParticipantStateChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueParticipantStateChanged

// Begin Delegate FDialogueParticipantAudioComponentChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms
	{
		const UAudioComponent* NewAudioComp;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComp_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComp;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp = { "NewAudioComp", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms, NewAudioComp), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAudioComp_MetaData), NewProp_NewAudioComp_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::NewProp_NewAudioComp,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueParticipantAudioComponentChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueParticipantAudioComponentChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantAudioComponentChanged, const UAudioComponent* NewAudioComp)
{
	struct _Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms
	{
		const UAudioComponent* NewAudioComp;
	};
	_Script_MounteaDialogueSystem_eventDialogueParticipantAudioComponentChanged_Parms Parms;
	Parms.NewAudioComp=NewAudioComp;
	DialogueParticipantAudioComponentChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueParticipantAudioComponentChanged

// Begin Delegate FParticipantStartingNodeSaved
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms
	{
		const UMounteaDialogueGraphNode* NewSavedNode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSavedNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewSavedNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode = { "NewSavedNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms, NewSavedNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSavedNode_MetaData), NewProp_NewSavedNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::NewProp_NewSavedNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "ParticipantStartingNodeSaved__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FParticipantStartingNodeSaved_DelegateWrapper(const FMulticastScriptDelegate& ParticipantStartingNodeSaved, const UMounteaDialogueGraphNode* NewSavedNode)
{
	struct _Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms
	{
		const UMounteaDialogueGraphNode* NewSavedNode;
	};
	_Script_MounteaDialogueSystem_eventParticipantStartingNodeSaved_Parms Parms;
	Parms.NewSavedNode=NewSavedNode;
	ParticipantStartingNodeSaved.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FParticipantStartingNodeSaved

// Begin Delegate FParticipantCommandRequested
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms
	{
		FString Command;
		UObject* OptionalPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::NewProp_OptionalPayload = { "OptionalPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms, OptionalPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::NewProp_OptionalPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "ParticipantCommandRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FParticipantCommandRequested_DelegateWrapper(const FMulticastScriptDelegate& ParticipantCommandRequested, const FString& Command, UObject* OptionalPayload)
{
	struct _Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms
	{
		FString Command;
		UObject* OptionalPayload;
	};
	_Script_MounteaDialogueSystem_eventParticipantCommandRequested_Parms Parms;
	Parms.Command=Command;
	Parms.OptionalPayload=OptionalPayload;
	ParticipantCommandRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FParticipantCommandRequested

// Begin Delegate FDialogueUpdated
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueUpdated_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> OwningManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::NewProp_OwningManager = { "OwningManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueUpdated_Parms, OwningManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningManager_MetaData), NewProp_OwningManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::NewProp_OwningManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueUpdated__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogueUpdated, TScriptInterface<IMounteaDialogueManagerInterface> const& OwningManager)
{
	struct _Script_MounteaDialogueSystem_eventDialogueUpdated_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> OwningManager;
	};
	_Script_MounteaDialogueSystem_eventDialogueUpdated_Parms Parms;
	Parms.OwningManager=OwningManager;
	DialogueUpdated.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueUpdated

// Begin Interface UMounteaDialogueParticipantInterface Function CanParticipateInDialogue
struct MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueParticipantInterface::CanParticipateInDialogue() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanParticipateInDialogue instead.");
	MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_CanParticipateInDialogue = FName(TEXT("CanParticipateInDialogue"));
bool IMounteaDialogueParticipantInterface::Execute_CanParticipateInDialogue(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_CanParticipateInDialogue);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanParticipateInDialogue_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "CanParticipateInDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventCanParticipateInDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execCanParticipateInDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanParticipateInDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function CanParticipateInDialogue

// Begin Interface UMounteaDialogueParticipantInterface Function CanStartDialogue
struct MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueParticipantInterface::CanStartDialogue() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_CanStartDialogue instead.");
	MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_CanStartDialogue = FName(TEXT("CanStartDialogue"));
bool IMounteaDialogueParticipantInterface::Execute_CanStartDialogue(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_CanStartDialogue);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->CanStartDialogue_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*\n\x09 * A way to determine whether the Dialogue can even start.\n\x09 * It does come with Native C++ implementation, which can be overriden in child C++ classes.\n\x09 * \xe2\x9d\x97 If you are using Blueprint implementation, don't forget to call Parent Node, which contains all parent implementations.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "* A way to determine whether the Dialogue can even start.\n* It does come with Native C++ implementation, which can be overriden in child C++ classes.\n* \xe2\x9d\x97 If you are using Blueprint implementation, don't forget to call Parent Node, which contains all parent implementations." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "CanStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventCanStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execCanStartDialogue)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanStartDialogue_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function CanStartDialogue

// Begin Interface UMounteaDialogueParticipantInterface Function GetAudioComponent
struct MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms
{
	UAudioComponent* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms()
		: ReturnValue(NULL)
	{
	}
};
UAudioComponent* IMounteaDialogueParticipantInterface::GetAudioComponent() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetAudioComponent instead.");
	MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetAudioComponent = FName(TEXT("GetAudioComponent"));
UAudioComponent* IMounteaDialogueParticipantInterface::Execute_GetAudioComponent(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetAudioComponent);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetAudioComponent_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the audio component used to play the participant voices.\n\x09 * \xe2\x9d\x97 Could be null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the audio component used to play the participant voices.\n\xe2\x9d\x97 Could be null" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetAudioComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->GetAudioComponent_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetAudioComponent

// Begin Interface UMounteaDialogueParticipantInterface Function GetDefaultParticipantState
struct MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms
{
	EDialogueParticipantState ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms()
		: ReturnValue((EDialogueParticipantState)0)
	{
	}
};
EDialogueParticipantState IMounteaDialogueParticipantInterface::GetDefaultParticipantState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDefaultParticipantState instead.");
	MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetDefaultParticipantState = FName(TEXT("GetDefaultParticipantState"));
EDialogueParticipantState IMounteaDialogueParticipantInterface::Execute_GetDefaultParticipantState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetDefaultParticipantState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDefaultParticipantState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the default state of the Dialogue Participant.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the default state of the Dialogue Participant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(0, nullptr) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetDefaultParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetDefaultParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetDefaultParticipantState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueParticipantState*)Z_Param__Result=P_THIS->GetDefaultParticipantState_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetDefaultParticipantState

// Begin Interface UMounteaDialogueParticipantInterface Function GetDialogueGraph
struct MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms
{
	UMounteaDialogueGraph* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMounteaDialogueGraph* IMounteaDialogueParticipantInterface::GetDialogueGraph() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueGraph instead.");
	MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetDialogueGraph = FName(TEXT("GetDialogueGraph"));
UMounteaDialogueGraph* IMounteaDialogueParticipantInterface::Execute_GetDialogueGraph(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetDialogueGraph);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueGraph_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the dialogue graph assigned to this Participant.\n\x09 * \xe2\x9d\x94 Could be updated using 'SetDialogueGraph', providing ability to switch Dialogue graphs on fly\n\x09 * \xe2\x9d\x97 Could be null\n\x09 *\n\x09 * @return A pointer to the dialogue graph\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the dialogue graph assigned to this Participant.\n\xe2\x9d\x94 Could be updated using 'SetDialogueGraph', providing ability to switch Dialogue graphs on fly\n\xe2\x9d\x97 Could be null\n\n@return A pointer to the dialogue graph" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetDialogueGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetDialogueGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetDialogueGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetDialogueGraph_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetDialogueGraph

// Begin Interface UMounteaDialogueParticipantInterface Function GetOwningActor
struct MounteaDialogueParticipantInterface_eventGetOwningActor_Parms
{
	AActor* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetOwningActor_Parms()
		: ReturnValue(NULL)
	{
	}
};
AActor* IMounteaDialogueParticipantInterface::GetOwningActor() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetOwningActor instead.");
	MounteaDialogueParticipantInterface_eventGetOwningActor_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetOwningActor = FName(TEXT("GetOwningActor"));
AActor* IMounteaDialogueParticipantInterface::Execute_GetOwningActor(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetOwningActor_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetOwningActor);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetOwningActor_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the owning actor for this Dialogue Participant Component.\n\x09 *\n\x09 * @return The owning actor for this Dialogue Participant Component.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning actor for this Dialogue Participant Component.\n\n@return The owning actor for this Dialogue Participant Component." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetOwningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetOwningActor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=P_THIS->GetOwningActor_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetOwningActor

// Begin Interface UMounteaDialogueParticipantInterface Function GetParticipantState
struct MounteaDialogueParticipantInterface_eventGetParticipantState_Parms
{
	EDialogueParticipantState ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetParticipantState_Parms()
		: ReturnValue((EDialogueParticipantState)0)
	{
	}
};
EDialogueParticipantState IMounteaDialogueParticipantInterface::GetParticipantState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantState instead.");
	MounteaDialogueParticipantInterface_eventGetParticipantState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetParticipantState = FName(TEXT("GetParticipantState"));
EDialogueParticipantState IMounteaDialogueParticipantInterface::Execute_GetParticipantState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetParticipantState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetParticipantState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current state of the Dialogue Participant.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current state of the Dialogue Participant." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(0, nullptr) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetParticipantState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueParticipantState*)Z_Param__Result=P_THIS->GetParticipantState_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetParticipantState

// Begin Interface UMounteaDialogueParticipantInterface Function GetParticipantTag
struct MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms
{
	FGameplayTag ReturnValue;
};
FGameplayTag IMounteaDialogueParticipantInterface::GetParticipantTag() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParticipantTag instead.");
	MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetParticipantTag = FName(TEXT("GetParticipantTag"));
FGameplayTag IMounteaDialogueParticipantInterface::Execute_GetParticipantTag(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetParticipantTag);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetParticipantTag_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Getter for Participant Gameplay Tag.\n\x09 * @return Participant Gameplay Tag if any is associated.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Getter for Participant Gameplay Tag.\n@return Participant Gameplay Tag if any is associated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetParticipantTag", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetParticipantTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetParticipantTag)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=P_THIS->GetParticipantTag_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetParticipantTag

// Begin Interface UMounteaDialogueParticipantInterface Function GetSavedStartingNode
struct MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms
{
	UMounteaDialogueGraphNode* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms()
		: ReturnValue(NULL)
	{
	}
};
UMounteaDialogueGraphNode* IMounteaDialogueParticipantInterface::GetSavedStartingNode() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetSavedStartingNode instead.");
	MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetSavedStartingNode = FName(TEXT("GetSavedStartingNode"));
UMounteaDialogueGraphNode* IMounteaDialogueParticipantInterface::Execute_GetSavedStartingNode(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetSavedStartingNode);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetSavedStartingNode_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the saved starting node for this Dialogue Participant.\n\x09 * \xe2\x9d\x97 Could be null\n\x09 * \n\x09 * @return The saved starting node, or nullptr if there is none\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the saved starting node for this Dialogue Participant.\n\xe2\x9d\x97 Could be null\n\n@return The saved starting node, or nullptr if there is none" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetSavedStartingNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetSavedStartingNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetSavedStartingNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetSavedStartingNode_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetSavedStartingNode

// Begin Interface UMounteaDialogueParticipantInterface Function GetTraversedPath
struct MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms
{
	TArray<FDialogueTraversePath> ReturnValue;
};
TArray<FDialogueTraversePath> IMounteaDialogueParticipantInterface::GetTraversedPath() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetTraversedPath instead.");
	MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueParticipantInterface_GetTraversedPath = FName(TEXT("GetTraversedPath"));
TArray<FDialogueTraversePath> IMounteaDialogueParticipantInterface::Execute_GetTraversedPath(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_GetTraversedPath);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetTraversedPath_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the traversed path of the Dialogue Participant.\n\x09 *\n\x09 * @return Array of traversed dialogue paths\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the traversed path of the Dialogue Participant.\n\n@return Array of traversed dialogue paths" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "GetTraversedPath", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventGetTraversedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execGetTraversedPath)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogueTraversePath>*)Z_Param__Result=P_THIS->GetTraversedPath_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function GetTraversedPath

// Begin Interface UMounteaDialogueParticipantInterface Function InitializeParticipant
struct MounteaDialogueParticipantInterface_eventInitializeParticipant_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> Manager;
};
void IMounteaDialogueParticipantInterface::InitializeParticipant(TScriptInterface<IMounteaDialogueManagerInterface> const& Manager)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeParticipant instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_InitializeParticipant = FName(TEXT("InitializeParticipant"));
void IMounteaDialogueParticipantInterface::Execute_InitializeParticipant(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& Manager)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventInitializeParticipant_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_InitializeParticipant);
	if (Func)
	{
		Parms.Manager=Manager;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->InitializeParticipant_Implementation(Manager);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helps initialize Participant.\n\x09 * \xe2\x9d\x94 Is being called in BeginPlay.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helps initialize Participant.\n\xe2\x9d\x94 Is being called in BeginPlay." },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventInitializeParticipant_Parms, Manager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "InitializeParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventInitializeParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventInitializeParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execInitializeParticipant)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeParticipant_Implementation(Z_Param_Out_Manager);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function InitializeParticipant

// Begin Interface UMounteaDialogueParticipantInterface Function PlayParticipantVoice
struct MounteaDialogueParticipantInterface_eventPlayParticipantVoice_Parms
{
	USoundBase* ParticipantVoice;
};
void IMounteaDialogueParticipantInterface::PlayParticipantVoice(USoundBase* ParticipantVoice)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_PlayParticipantVoice instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_PlayParticipantVoice = FName(TEXT("PlayParticipantVoice"));
void IMounteaDialogueParticipantInterface::Execute_PlayParticipantVoice(UObject* O, USoundBase* ParticipantVoice)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventPlayParticipantVoice_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_PlayParticipantVoice);
	if (Func)
	{
		Parms.ParticipantVoice=ParticipantVoice;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->PlayParticipantVoice_Implementation(ParticipantVoice);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Plays the given participant voice sound.\n\x09 * @param ParticipantVoice The sound to play.\n\x09 * \xe2\x9d\x97 The sound should be a valid USoundBase object, otherwise nothing will be played.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays the given participant voice sound.\n@param ParticipantVoice The sound to play.\n\xe2\x9d\x97 The sound should be a valid USoundBase object, otherwise nothing will be played." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantVoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::NewProp_ParticipantVoice = { "ParticipantVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventPlayParticipantVoice_Parms, ParticipantVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::NewProp_ParticipantVoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "PlayParticipantVoice", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventPlayParticipantVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventPlayParticipantVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execPlayParticipantVoice)
{
	P_GET_OBJECT(USoundBase,Z_Param_ParticipantVoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->PlayParticipantVoice_Implementation(Z_Param_ParticipantVoice);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function PlayParticipantVoice

// Begin Interface UMounteaDialogueParticipantInterface Function ProcessDialogueCommand
struct MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms
{
	FString Command;
	UObject* Payload;
};
void IMounteaDialogueParticipantInterface::ProcessDialogueCommand(const FString& Command, UObject* Payload)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessDialogueCommand instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_ProcessDialogueCommand = FName(TEXT("ProcessDialogueCommand"));
void IMounteaDialogueParticipantInterface::Execute_ProcessDialogueCommand(UObject* O, const FString& Command, UObject* Payload)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_ProcessDialogueCommand);
	if (Func)
	{
		Parms.Command=Command;
		Parms.Payload=Payload;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->ProcessDialogueCommand_Implementation(Command,Payload);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes a dialogue command for the Dialogue Participant.\n\x09 *\n\x09 * @param Command   The command to process\n\x09 * @param Payload   Optional payload object for the command\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes a dialogue command for the Dialogue Participant.\n\n@param Command   The command to process\n@param Payload   Optional payload object for the command" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "ProcessDialogueCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventProcessDialogueCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execProcessDialogueCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessDialogueCommand_Implementation(Z_Param_Command,Z_Param_Payload);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function ProcessDialogueCommand

// Begin Interface UMounteaDialogueParticipantInterface Function SaveStartingNode
struct MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms
{
	UMounteaDialogueGraphNode* NewStartingNode;
};
void IMounteaDialogueParticipantInterface::SaveStartingNode(UMounteaDialogueGraphNode* NewStartingNode)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveStartingNode instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SaveStartingNode = FName(TEXT("SaveStartingNode"));
void IMounteaDialogueParticipantInterface::Execute_SaveStartingNode(UObject* O, UMounteaDialogueGraphNode* NewStartingNode)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SaveStartingNode);
	if (Func)
	{
		Parms.NewStartingNode=NewStartingNode;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SaveStartingNode_Implementation(NewStartingNode);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the starting node for this Dialogue Participant Component.\n\x09 *\n\x09 * @param NewStartingNode The node to set as the starting node\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the starting node for this Dialogue Participant Component.\n\n@param NewStartingNode The node to set as the starting node" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStartingNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::NewProp_NewStartingNode = { "NewStartingNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms, NewStartingNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::NewProp_NewStartingNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SaveStartingNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSaveStartingNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSaveStartingNode)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewStartingNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveStartingNode_Implementation(Z_Param_NewStartingNode);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SaveStartingNode

// Begin Interface UMounteaDialogueParticipantInterface Function SaveTraversedPath
struct MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms
{
	TArray<FDialogueTraversePath> InPath;
};
void IMounteaDialogueParticipantInterface::SaveTraversedPath(TArray<FDialogueTraversePath>& InPath)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SaveTraversedPath instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SaveTraversedPath = FName(TEXT("SaveTraversedPath"));
void IMounteaDialogueParticipantInterface::Execute_SaveTraversedPath(UObject* O, TArray<FDialogueTraversePath>& InPath)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SaveTraversedPath);
	if (Func)
	{
		Parms.InPath=InPath;
		O->ProcessEvent(Func, &Parms);
		InPath=Parms.InPath;
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SaveTraversedPath_Implementation(InPath);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the traversed path for this Dialogue Participant Component.\n\x09 * This function is called once Dialogue ends and is updated from Dialogue Context.\n\x09 *\n\x09 * @param InPath The traversed path of the dialogue graph to be saved.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the traversed path for this Dialogue Participant Component.\nThis function is called once Dialogue ends and is updated from Dialogue Context.\n\n@param InPath The traversed path of the dialogue graph to be saved." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_Inner = { "InPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms, InPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SaveTraversedPath", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSaveTraversedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSaveTraversedPath)
{
	P_GET_TARRAY_REF(FDialogueTraversePath,Z_Param_Out_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SaveTraversedPath_Implementation(Z_Param_Out_InPath);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SaveTraversedPath

// Begin Interface UMounteaDialogueParticipantInterface Function SetAudioComponent
struct MounteaDialogueParticipantInterface_eventSetAudioComponent_Parms
{
	UAudioComponent* NewAudioComponent;
};
void IMounteaDialogueParticipantInterface::SetAudioComponent(UAudioComponent* NewAudioComponent)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetAudioComponent instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SetAudioComponent = FName(TEXT("SetAudioComponent"));
void IMounteaDialogueParticipantInterface::Execute_SetAudioComponent(UObject* O, UAudioComponent* NewAudioComponent)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSetAudioComponent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SetAudioComponent);
	if (Func)
	{
		Parms.NewAudioComponent=NewAudioComponent;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SetAudioComponent_Implementation(NewAudioComponent);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the audio component used to play dialogue audio.\n\x09 *\n\x09 * @param NewAudioComponent The new audio component to use for dialogue audio.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the audio component used to play dialogue audio.\n\n@param NewAudioComponent The new audio component to use for dialogue audio." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::NewProp_NewAudioComponent = { "NewAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSetAudioComponent_Parms, NewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAudioComponent_MetaData), NewProp_NewAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::NewProp_NewAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SetAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSetAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSetAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSetAudioComponent)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_NewAudioComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioComponent_Implementation(Z_Param_NewAudioComponent);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SetAudioComponent

// Begin Interface UMounteaDialogueParticipantInterface Function SetDefaultParticipantState
struct MounteaDialogueParticipantInterface_eventSetDefaultParticipantState_Parms
{
	EDialogueParticipantState NewState;
};
void IMounteaDialogueParticipantInterface::SetDefaultParticipantState(const EDialogueParticipantState NewState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDefaultParticipantState instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SetDefaultParticipantState = FName(TEXT("SetDefaultParticipantState"));
void IMounteaDialogueParticipantInterface::Execute_SetDefaultParticipantState(UObject* O, const EDialogueParticipantState NewState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSetDefaultParticipantState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SetDefaultParticipantState);
	if (Func)
	{
		Parms.NewState=NewState;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SetDefaultParticipantState_Implementation(NewState);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the Default state of the dialogue participant to the given state.\n\x09 * \n\x09 * @param NewState The new state to set the dialogue participant to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the Default state of the dialogue participant to the given state.\n\n@param NewState The new state to set the dialogue participant to" },
#endif
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSetDefaultParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SetDefaultParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSetDefaultParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSetDefaultParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSetDefaultParticipantState)
{
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultParticipantState_Implementation(EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SetDefaultParticipantState

// Begin Interface UMounteaDialogueParticipantInterface Function SetDialogueGraph
struct MounteaDialogueParticipantInterface_eventSetDialogueGraph_Parms
{
	UMounteaDialogueGraph* NewDialogueGraph;
};
void IMounteaDialogueParticipantInterface::SetDialogueGraph(UMounteaDialogueGraph* NewDialogueGraph)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDialogueGraph instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SetDialogueGraph = FName(TEXT("SetDialogueGraph"));
void IMounteaDialogueParticipantInterface::Execute_SetDialogueGraph(UObject* O, UMounteaDialogueGraph* NewDialogueGraph)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSetDialogueGraph_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SetDialogueGraph);
	if (Func)
	{
		Parms.NewDialogueGraph=NewDialogueGraph;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SetDialogueGraph_Implementation(NewDialogueGraph);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new Dialogue graph for this Participant.\n\x09 * \xe2\x9d\x97 Should not be null\n\x09 *\n\x09 * @param NewDialogueGraph\x09""A pointer to the dialogue graph to be used\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new Dialogue graph for this Participant.\n\xe2\x9d\x97 Should not be null\n\n@param NewDialogueGraph      A pointer to the dialogue graph to be used" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::NewProp_NewDialogueGraph = { "NewDialogueGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSetDialogueGraph_Parms, NewDialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::NewProp_NewDialogueGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SetDialogueGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSetDialogueGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSetDialogueGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSetDialogueGraph)
{
	P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_NewDialogueGraph);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueGraph_Implementation(Z_Param_NewDialogueGraph);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SetDialogueGraph

// Begin Interface UMounteaDialogueParticipantInterface Function SetParticipantState
struct MounteaDialogueParticipantInterface_eventSetParticipantState_Parms
{
	EDialogueParticipantState NewState;
};
void IMounteaDialogueParticipantInterface::SetParticipantState(const EDialogueParticipantState NewState)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetParticipantState instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SetParticipantState = FName(TEXT("SetParticipantState"));
void IMounteaDialogueParticipantInterface::Execute_SetParticipantState(UObject* O, const EDialogueParticipantState NewState)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSetParticipantState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SetParticipantState);
	if (Func)
	{
		Parms.NewState=NewState;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SetParticipantState_Implementation(NewState);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the state of the dialogue participant to the given state.\n\x09 * \n\x09 * @param NewState The new state to set the dialogue participant to\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the state of the dialogue participant to the given state.\n\n@param NewState The new state to set the dialogue participant to" },
#endif
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSetParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SetParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSetParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSetParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSetParticipantState)
{
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticipantState_Implementation(EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SetParticipantState

// Begin Interface UMounteaDialogueParticipantInterface Function SkipParticipantVoice
struct MounteaDialogueParticipantInterface_eventSkipParticipantVoice_Parms
{
	USoundBase* ParticipantVoice;
};
void IMounteaDialogueParticipantInterface::SkipParticipantVoice(USoundBase* ParticipantVoice)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SkipParticipantVoice instead.");
}
static FName NAME_UMounteaDialogueParticipantInterface_SkipParticipantVoice = FName(TEXT("SkipParticipantVoice"));
void IMounteaDialogueParticipantInterface::Execute_SkipParticipantVoice(UObject* O, USoundBase* ParticipantVoice)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueParticipantInterface::StaticClass()));
	MounteaDialogueParticipantInterface_eventSkipParticipantVoice_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueParticipantInterface_SkipParticipantVoice);
	if (Func)
	{
		Parms.ParticipantVoice=ParticipantVoice;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueParticipantInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueParticipantInterface::StaticClass())))
	{
		I->SkipParticipantVoice_Implementation(ParticipantVoice);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Skips the given participant voice sound and whole row. Will automatically start new Row if any is available.\n\x09 * @param ParticipantVoice The sound to skip. Can be left empty.\n\x09 * \xe2\x9d\x97 The sound should be a valid USoundBase object, otherwise nothing will be skipped.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the given participant voice sound and whole row. Will automatically start new Row if any is available.\n@param ParticipantVoice The sound to skip. Can be left empty.\n\xe2\x9d\x97 The sound should be a valid USoundBase object, otherwise nothing will be skipped." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantVoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::NewProp_ParticipantVoice = { "ParticipantVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantInterface_eventSkipParticipantVoice_Parms, ParticipantVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::NewProp_ParticipantVoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantInterface, nullptr, "SkipParticipantVoice", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::PropPointers), sizeof(MounteaDialogueParticipantInterface_eventSkipParticipantVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipantInterface_eventSkipParticipantVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueParticipantInterface::execSkipParticipantVoice)
{
	P_GET_OBJECT(USoundBase,Z_Param_ParticipantVoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SkipParticipantVoice_Implementation(Z_Param_ParticipantVoice);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueParticipantInterface Function SkipParticipantVoice

// Begin Interface UMounteaDialogueParticipantInterface
void UMounteaDialogueParticipantInterface::StaticRegisterNativesUMounteaDialogueParticipantInterface()
{
	UClass* Class = UMounteaDialogueParticipantInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanParticipateInDialogue", &IMounteaDialogueParticipantInterface::execCanParticipateInDialogue },
		{ "CanStartDialogue", &IMounteaDialogueParticipantInterface::execCanStartDialogue },
		{ "GetAudioComponent", &IMounteaDialogueParticipantInterface::execGetAudioComponent },
		{ "GetDefaultParticipantState", &IMounteaDialogueParticipantInterface::execGetDefaultParticipantState },
		{ "GetDialogueGraph", &IMounteaDialogueParticipantInterface::execGetDialogueGraph },
		{ "GetOwningActor", &IMounteaDialogueParticipantInterface::execGetOwningActor },
		{ "GetParticipantState", &IMounteaDialogueParticipantInterface::execGetParticipantState },
		{ "GetParticipantTag", &IMounteaDialogueParticipantInterface::execGetParticipantTag },
		{ "GetSavedStartingNode", &IMounteaDialogueParticipantInterface::execGetSavedStartingNode },
		{ "GetTraversedPath", &IMounteaDialogueParticipantInterface::execGetTraversedPath },
		{ "InitializeParticipant", &IMounteaDialogueParticipantInterface::execInitializeParticipant },
		{ "PlayParticipantVoice", &IMounteaDialogueParticipantInterface::execPlayParticipantVoice },
		{ "ProcessDialogueCommand", &IMounteaDialogueParticipantInterface::execProcessDialogueCommand },
		{ "SaveStartingNode", &IMounteaDialogueParticipantInterface::execSaveStartingNode },
		{ "SaveTraversedPath", &IMounteaDialogueParticipantInterface::execSaveTraversedPath },
		{ "SetAudioComponent", &IMounteaDialogueParticipantInterface::execSetAudioComponent },
		{ "SetDefaultParticipantState", &IMounteaDialogueParticipantInterface::execSetDefaultParticipantState },
		{ "SetDialogueGraph", &IMounteaDialogueParticipantInterface::execSetDialogueGraph },
		{ "SetParticipantState", &IMounteaDialogueParticipantInterface::execSetParticipantState },
		{ "SkipParticipantVoice", &IMounteaDialogueParticipantInterface::execSkipParticipantVoice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueParticipantInterface);
UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister()
{
	return UMounteaDialogueParticipantInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueParticipantInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanParticipateInDialogue, "CanParticipateInDialogue" }, // 2082033549
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_CanStartDialogue, "CanStartDialogue" }, // 2783520088
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetAudioComponent, "GetAudioComponent" }, // 1839403428
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDefaultParticipantState, "GetDefaultParticipantState" }, // 1000454795
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetDialogueGraph, "GetDialogueGraph" }, // 2766168450
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetOwningActor, "GetOwningActor" }, // 3790366198
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantState, "GetParticipantState" }, // 360963040
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetParticipantTag, "GetParticipantTag" }, // 1838477460
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetSavedStartingNode, "GetSavedStartingNode" }, // 1262281660
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_GetTraversedPath, "GetTraversedPath" }, // 4146228632
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_InitializeParticipant, "InitializeParticipant" }, // 2763052559
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_PlayParticipantVoice, "PlayParticipantVoice" }, // 3348800506
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_ProcessDialogueCommand, "ProcessDialogueCommand" }, // 111647945
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveStartingNode, "SaveStartingNode" }, // 4005404814
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SaveTraversedPath, "SaveTraversedPath" }, // 3802739950
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetAudioComponent, "SetAudioComponent" }, // 3080787737
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDefaultParticipantState, "SetDefaultParticipantState" }, // 1677519357
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetDialogueGraph, "SetDialogueGraph" }, // 1332597468
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SetParticipantState, "SetParticipantState" }, // 3743359278
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantInterface_SkipParticipantVoice, "SkipParticipantVoice" }, // 4000062870
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueParticipantInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::ClassParams = {
	&UMounteaDialogueParticipantInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueParticipantInterface>()
{
	return UMounteaDialogueParticipantInterface::StaticClass();
}
UMounteaDialogueParticipantInterface::UMounteaDialogueParticipantInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueParticipantInterface);
UMounteaDialogueParticipantInterface::~UMounteaDialogueParticipantInterface() {}
// End Interface UMounteaDialogueParticipantInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueParticipantInterface, UMounteaDialogueParticipantInterface::StaticClass, TEXT("UMounteaDialogueParticipantInterface"), &Z_Registration_Info_UClass_UMounteaDialogueParticipantInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueParticipantInterface), 3129146378U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_3572693862(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
