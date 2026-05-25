// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueContext.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueContext() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FOnDialogueContextUpdated
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnDialogueContextUpdated__DelegateSignature", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueContextUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueContextUpdated)
{
	OnDialogueContextUpdated.ProcessMulticastDelegate<UObject>(NULL);
}
// End Delegate FOnDialogueContextUpdated

// Begin Delegate FDialogueContextUpdatedFromBlueprint
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms
	{
		UMounteaDialogueContext* Context;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "DialogueContextUpdatedFromBlueprint__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueContextUpdatedFromBlueprint__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FDialogueContextUpdatedFromBlueprint_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdatedFromBlueprint, UMounteaDialogueContext* Context)
{
	struct _Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms
	{
		UMounteaDialogueContext* Context;
	};
	_Script_MounteaDialogueSystem_eventDialogueContextUpdatedFromBlueprint_Parms Parms;
	Parms.Context=Context;
	DialogueContextUpdatedFromBlueprint.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FDialogueContextUpdatedFromBlueprint

// Begin Class UMounteaDialogueContext Function AddDialogueParticipantBP
struct Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics
{
	struct MounteaDialogueContext_eventAddDialogueParticipantBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "AddDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventAddDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipant_MetaData), NewProp_NewParticipant_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueContext_eventAddDialogueParticipantBP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueContext_eventAddDialogueParticipantBP_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_NewParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "AddDialogueParticipantBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::MounteaDialogueContext_eventAddDialogueParticipantBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::MounteaDialogueContext_eventAddDialogueParticipantBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execAddDialogueParticipantBP)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_NewParticipant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddDialogueParticipantBP(Z_Param_Out_NewParticipant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function AddDialogueParticipantBP

// Begin Class UMounteaDialogueContext Function AddDialogueParticipantsBP
struct Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics
{
	struct MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms
	{
		TArray<TScriptInterface<IMounteaDialogueParticipantInterface> > NewParticipants;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "AddDialogueParticipants" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewParticipants;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_NewParticipants_Inner = { "NewParticipants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_NewParticipants = { "NewParticipants", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms, NewParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipants_MetaData), NewProp_NewParticipants_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_NewParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_NewParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "AddDialogueParticipantsBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::MounteaDialogueContext_eventAddDialogueParticipantsBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execAddDialogueParticipantsBP)
{
	P_GET_TARRAY_REF(TScriptInterface<IMounteaDialogueParticipantInterface>,Z_Param_Out_NewParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->AddDialogueParticipantsBP(Z_Param_Out_NewParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function AddDialogueParticipantsBP

// Begin Class UMounteaDialogueContext Function IsValid
struct Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics
{
	struct MounteaDialogueContext_eventIsValid_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueContext_eventIsValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueContext_eventIsValid_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "IsValid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::MounteaDialogueContext_eventIsValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::MounteaDialogueContext_eventIsValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_IsValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_IsValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execIsValid)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsValid();
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function IsValid

// Begin Class UMounteaDialogueContext Function RemoveDialogueParticipantBP
struct Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics
{
	struct MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "RemoveDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipant_MetaData), NewProp_NewParticipant_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_NewParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "RemoveDialogueParticipantBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::MounteaDialogueContext_eventRemoveDialogueParticipantBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execRemoveDialogueParticipantBP)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_NewParticipant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveDialogueParticipantBP(Z_Param_Out_NewParticipant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function RemoveDialogueParticipantBP

// Begin Class UMounteaDialogueContext Function RemoveDialogueParticipantsBP
struct Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics
{
	struct MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms
	{
		TArray<TScriptInterface<IMounteaDialogueParticipantInterface> > NewParticipants;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "RemoveDialogueParticipants" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewParticipants;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_NewParticipants_Inner = { "NewParticipants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_NewParticipants = { "NewParticipants", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms, NewParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipants_MetaData), NewProp_NewParticipants_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms), &Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_NewParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_NewParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "RemoveDialogueParticipantsBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::MounteaDialogueContext_eventRemoveDialogueParticipantsBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execRemoveDialogueParticipantsBP)
{
	P_GET_TARRAY_REF(TScriptInterface<IMounteaDialogueParticipantInterface>,Z_Param_Out_NewParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->RemoveDialogueParticipantsBP(Z_Param_Out_NewParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function RemoveDialogueParticipantsBP

// Begin Class UMounteaDialogueContext Function SetDialogueContextBP
struct Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics
{
	struct MounteaDialogueContext_eventSetDialogueContextBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
		UMounteaDialogueGraphNode* NewActiveNode;
		TArray<UMounteaDialogueGraphNode*> NewAllowedChildNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the dialogue context.\n\x09 *\n\x09 * @param NewParticipant The new dialogue participant.\n\x09 * @param NewActiveNode The new active dialogue node.\n\x09 * @param NewAllowedChildNodes The new allowed child dialogue nodes.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "SetDialogueContext" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the dialogue context.\n\n@param NewParticipant The new dialogue participant.\n@param NewActiveNode The new active dialogue node.\n@param NewAllowedChildNodes The new allowed child dialogue nodes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAllowedChildNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewAllowedChildNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewActiveNode = { "NewActiveNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes_Inner = { "NewAllowedChildNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes = { "NewAllowedChildNodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventSetDialogueContextBP_Parms, NewAllowedChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewActiveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::NewProp_NewAllowedChildNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "SetDialogueContextBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::MounteaDialogueContext_eventSetDialogueContextBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::MounteaDialogueContext_eventSetDialogueContextBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execSetDialogueContextBP)
{
	P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewActiveNode);
	P_GET_TARRAY(UMounteaDialogueGraphNode*,Z_Param_NewAllowedChildNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueContextBP(Z_Param_NewParticipant,Z_Param_NewActiveNode,Z_Param_NewAllowedChildNodes);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function SetDialogueContextBP

// Begin Class UMounteaDialogueContext Function ToString
struct Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics
{
	struct MounteaDialogueContext_eventToString_Parms
	{
		FString ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CompactNodeTitle", "To String" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventToString_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "ToString", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::MounteaDialogueContext_eventToString_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::MounteaDialogueContext_eventToString_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_ToString()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_ToString_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execToString)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->ToString();
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function ToString

// Begin Class UMounteaDialogueContext Function UpdateActiveDialogueNodeBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics
{
	struct MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms
	{
		UMounteaDialogueGraphNode* NewActiveNode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates Active Dialogue Node in Context.\n\x09 * \n\x09 * @param NewActiveNode - New Active Dialogue Node to update to.\n\x09 * \xe2\x9d\x97 Must not be Null\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateActiveDialogueNode" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Active Dialogue Node in Context.\n\n@param NewActiveNode - New Active Dialogue Node to update to.\n\xe2\x9d\x97 Must not be Null" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewActiveNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::NewProp_NewActiveNode = { "NewActiveNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms, NewActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::NewProp_NewActiveNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueNodeBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueNodeBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueNodeBP)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewActiveNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveDialogueNodeBP(Z_Param_NewActiveNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateActiveDialogueNodeBP

// Begin Class UMounteaDialogueContext Function UpdateActiveDialogueParticipantBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics
{
	struct MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates Dialogue Active Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Active Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateActiveDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Dialogue Active Participant.\n\n@param NewParticipant - new Dialogue Active Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::NewProp_NewParticipant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueParticipantBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueParticipantBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueParticipantBP)
{
	P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveDialogueParticipantBP(Z_Param_NewParticipant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateActiveDialogueParticipantBP

// Begin Class UMounteaDialogueContext Function UpdateActiveDialogueRowBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics
{
	struct MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms
	{
		FDialogueRow NewActiveRow;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates the active dialogue row.\n\x09 * \n\x09 * @param NewActiveRow - The new active dialogue row.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateActiveDialogueRow" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the active dialogue row.\n\n@param NewActiveRow - The new active dialogue row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewActiveRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewActiveRow;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow = { "NewActiveRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms, NewActiveRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewActiveRow_MetaData), NewProp_NewActiveRow_MetaData) }; // 3048168484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::NewProp_NewActiveRow,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueRowBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueRowBP)
{
	P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_NewActiveRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveDialogueRowBP(Z_Param_Out_NewActiveRow);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateActiveDialogueRowBP

// Begin Class UMounteaDialogueContext Function UpdateActiveDialogueRowDataIndexBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics
{
	struct MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms
	{
		int32 NewIndex;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateActiveDialogueRowDataIndex" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewIndex;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::NewProp_NewIndex = { "NewIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms, NewIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::NewProp_NewIndex,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueRowDataIndexBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueRowDataIndexBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueRowDataIndexBP)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveDialogueRowDataIndexBP(Z_Param_NewIndex);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateActiveDialogueRowDataIndexBP

// Begin Class UMounteaDialogueContext Function UpdateActiveDialogueTableBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics
{
	struct MounteaDialogueContext_eventUpdateActiveDialogueTableBP_Parms
	{
		FDataTableRowHandle NewTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates the active dialogue Table.\n\x09 * \n\x09 * @param NewTable - New table to be used\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateActiveDialogueRowDataIndex" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates the active dialogue Table.\n\n@param NewTable - New table to be used" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewTable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::NewProp_NewTable = { "NewTable", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateActiveDialogueTableBP_Parms, NewTable), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewTable_MetaData), NewProp_NewTable_MetaData) }; // 1360917958
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::NewProp_NewTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateActiveDialogueTableBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueTableBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::MounteaDialogueContext_eventUpdateActiveDialogueTableBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateActiveDialogueTableBP)
{
	P_GET_STRUCT_REF(FDataTableRowHandle,Z_Param_Out_NewTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateActiveDialogueTableBP(Z_Param_Out_NewTable);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateActiveDialogueTableBP

// Begin Class UMounteaDialogueContext Function UpdateDialogueParticipantBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics
{
	struct MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates Dialogue Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateDialogueParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Dialogue Participant.\n\n@param NewParticipant - new Dialogue Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::NewProp_NewParticipant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateDialogueParticipantBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialogueParticipantBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateDialogueParticipantBP)
{
	P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDialogueParticipantBP(Z_Param_NewParticipant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateDialogueParticipantBP

// Begin Class UMounteaDialogueContext Function UpdateDialoguePlayerParticipantBP
struct Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics
{
	struct MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> NewParticipant;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Context" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Updates Dialogue Player Participant.\n\x09 *\n\x09 * @param NewParticipant - new Dialogue Player Participant.\n\x09 * \xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "DisplayName", "UpdateDialoguePlayerParticipant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Dialogue Player Participant.\n\n@param NewParticipant - new Dialogue Player Participant.\n\xe2\x9d\x97 Must implement IMounteaDialogueParticipantInterface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipant;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::NewProp_NewParticipant = { "NewParticipant", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms, NewParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::NewProp_NewParticipant,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueContext, nullptr, "UpdateDialoguePlayerParticipantBP", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::MounteaDialogueContext_eventUpdateDialoguePlayerParticipantBP_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueContext::execUpdateDialoguePlayerParticipantBP)
{
	P_GET_TINTERFACE(IMounteaDialogueParticipantInterface,Z_Param_NewParticipant);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateDialoguePlayerParticipantBP(Z_Param_NewParticipant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueContext Function UpdateDialoguePlayerParticipantBP

// Begin Class UMounteaDialogueContext
void UMounteaDialogueContext::StaticRegisterNativesUMounteaDialogueContext()
{
	UClass* Class = UMounteaDialogueContext::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialogueParticipantBP", &UMounteaDialogueContext::execAddDialogueParticipantBP },
		{ "AddDialogueParticipantsBP", &UMounteaDialogueContext::execAddDialogueParticipantsBP },
		{ "IsValid", &UMounteaDialogueContext::execIsValid },
		{ "RemoveDialogueParticipantBP", &UMounteaDialogueContext::execRemoveDialogueParticipantBP },
		{ "RemoveDialogueParticipantsBP", &UMounteaDialogueContext::execRemoveDialogueParticipantsBP },
		{ "SetDialogueContextBP", &UMounteaDialogueContext::execSetDialogueContextBP },
		{ "ToString", &UMounteaDialogueContext::execToString },
		{ "UpdateActiveDialogueNodeBP", &UMounteaDialogueContext::execUpdateActiveDialogueNodeBP },
		{ "UpdateActiveDialogueParticipantBP", &UMounteaDialogueContext::execUpdateActiveDialogueParticipantBP },
		{ "UpdateActiveDialogueRowBP", &UMounteaDialogueContext::execUpdateActiveDialogueRowBP },
		{ "UpdateActiveDialogueRowDataIndexBP", &UMounteaDialogueContext::execUpdateActiveDialogueRowDataIndexBP },
		{ "UpdateActiveDialogueTableBP", &UMounteaDialogueContext::execUpdateActiveDialogueTableBP },
		{ "UpdateDialogueParticipantBP", &UMounteaDialogueContext::execUpdateDialogueParticipantBP },
		{ "UpdateDialoguePlayerParticipantBP", &UMounteaDialogueContext::execUpdateDialoguePlayerParticipantBP },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueContext);
UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister()
{
	return UMounteaDialogueContext::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueContext_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Context.\n * \n * Contains information needed to successfully start Dialogue.\n * Also helps tracking Dialogue Specific data. Is recycled for whole Dialogue Graph.\n * \n * In Dialogue Manager Component is used as Transient object, which is nullified once Dialogue ends and is never saved.\n */" },
#endif
		{ "IncludePath", "Data/MounteaDialogueContext.h" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Context.\n\nContains information needed to successfully start Dialogue.\nAlso helps tracking Dialogue Specific data. Is recycled for whole Dialogue Graph.\n\nIn Dialogue Manager Component is used as Transient object, which is nullified once Dialogue ends and is never saved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Active Dialogue Participant Interface reference.\n\x09 * \n\x09 * This is the Participant who is Active right now.\n\x09 * \xe2\x9d\x94 Lead Node sets this value to Dialogue Participant.\n\x09 * \xe2\x9d\x94 Answer Node sets this value to Player Participant.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active Dialogue Participant Interface reference.\n\nThis is the Participant who is Active right now.\n\xe2\x9d\x94 Lead Node sets this value to Dialogue Participant.\n\xe2\x9d\x94 Answer Node sets this value to Player Participant.\n\xe2\x9d\x97 Might be invalid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Player Dialogue Participant Interface reference.\n\x09 * \n\x09 * This is the Participant who represent the Player.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Player Dialogue Participant Interface reference.\n\nThis is the Participant who represent the Player.\n\xe2\x9d\x97 Might be invalid" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipants_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Pointer to the Node which is currently active.\n\x09 * \xe2\x9d\x97 Might be null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Pointer to the Node which is currently active.\n\xe2\x9d\x97 Might be null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousActiveNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Keeps info about the Previous Active Node.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Keeps info about the Previous Active Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedChildNodes_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of Nodes that can be accessed from Active Node.\n\x09 * Already filtered to contain only those that can be triggered.\n\x09 * \n\x09 * \xe2\x9d\x94 Filter is done by 'CanStartNode', which can have its own logic and can be driven by Decorators as well.\n\x09 * \xe2\x9d\x97 Might be empty\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Nodes that can be accessed from Active Node.\nAlready filtered to contain only those that can be triggered.\n\n\xe2\x9d\x94 Filter is done by 'CanStartNode', which can have its own logic and can be driven by Decorators as well.\n\xe2\x9d\x97 Might be empty" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueTableHandle_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueRow_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Active Dialogue Row from Active Node. \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Active Dialogue Row from Active Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueRowDataIndex_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Index of currently used Dialogue Row Data row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of currently used Dialogue Row Data row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversedPath_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contains mapped list of Traversed Nodes by GUIDs.\n\x09 * Each time Dialogue is updated, like node is selected or starts itself, this Path is updated.\n\x09 * Updates Participant once Dialogue is done.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains mapped list of Traversed Nodes by GUIDs.\nEach time Dialogue is updated, like node is selected or starts itself, this Path is updated.\nUpdates Participant once Dialogue is done." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastWidgetCommand_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Should be the last command provided on auth. side. Could be outdated on clients! Use with caution!\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Should be the last command provided on auth. side. Could be outdated on clients! Use with caution!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueContextUpdated_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Context" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueContext.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ActiveDialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlayerDialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueParticipants;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActiveNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousActiveNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AllowedChildNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedChildNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogueTableHandle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogueRow;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDialogueRowDataIndex;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraversedPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraversedPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastWidgetCommand;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueContextUpdated;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantBP, "AddDialogueParticipantBP" }, // 3431170189
		{ &Z_Construct_UFunction_UMounteaDialogueContext_AddDialogueParticipantsBP, "AddDialogueParticipantsBP" }, // 636480784
		{ &Z_Construct_UFunction_UMounteaDialogueContext_IsValid, "IsValid" }, // 2432795170
		{ &Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantBP, "RemoveDialogueParticipantBP" }, // 1275393948
		{ &Z_Construct_UFunction_UMounteaDialogueContext_RemoveDialogueParticipantsBP, "RemoveDialogueParticipantsBP" }, // 3070454983
		{ &Z_Construct_UFunction_UMounteaDialogueContext_SetDialogueContextBP, "SetDialogueContextBP" }, // 474952345
		{ &Z_Construct_UFunction_UMounteaDialogueContext_ToString, "ToString" }, // 437049203
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueNodeBP, "UpdateActiveDialogueNodeBP" }, // 1184074989
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueParticipantBP, "UpdateActiveDialogueParticipantBP" }, // 3314327983
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowBP, "UpdateActiveDialogueRowBP" }, // 661014471
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueRowDataIndexBP, "UpdateActiveDialogueRowDataIndexBP" }, // 3360398503
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateActiveDialogueTableBP, "UpdateActiveDialogueTableBP" }, // 9449444
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialogueParticipantBP, "UpdateDialogueParticipantBP" }, // 370210692
		{ &Z_Construct_UFunction_UMounteaDialogueContext_UpdateDialoguePlayerParticipantBP, "UpdateDialoguePlayerParticipantBP" }, // 3358246609
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueContext>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant = { "ActiveDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020035, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueParticipant_MetaData), NewProp_ActiveDialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant = { "PlayerDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020035, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, PlayerDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDialogueParticipant_MetaData), NewProp_PlayerDialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0014000000020035, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, DialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueParticipant_MetaData), NewProp_DialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipants_Inner = { "DialogueParticipants", nullptr, (EPropertyFlags)0x0004000000020000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipants = { "DialogueParticipants", nullptr, (EPropertyFlags)0x0014000000020035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, DialogueParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueParticipants_MetaData), NewProp_DialogueParticipants_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode = { "ActiveNode", nullptr, (EPropertyFlags)0x0114000000020035, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, ActiveNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNode_MetaData), NewProp_ActiveNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PreviousActiveNode = { "PreviousActiveNode", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, PreviousActiveNode), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousActiveNode_MetaData), NewProp_PreviousActiveNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_Inner = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0104000000020000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0114000000020035, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, AllowedChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedChildNodes_MetaData), NewProp_AllowedChildNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueTableHandle = { "ActiveDialogueTableHandle", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueTableHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueTableHandle_MetaData), NewProp_ActiveDialogueTableHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow = { "ActiveDialogueRow", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueRow_MetaData), NewProp_ActiveDialogueRow_MetaData) }; // 3048168484
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex = { "ActiveDialogueRowDataIndex", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, ActiveDialogueRowDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueRowDataIndex_MetaData), NewProp_ActiveDialogueRowDataIndex_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_Inner = { "TraversedPath", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath = { "TraversedPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, TraversedPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversedPath_MetaData), NewProp_TraversedPath_MetaData) }; // 2158243501
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_LastWidgetCommand = { "LastWidgetCommand", nullptr, (EPropertyFlags)0x0010000000020035, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, LastWidgetCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastWidgetCommand_MetaData), NewProp_LastWidgetCommand_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_OnDialogueContextUpdated = { "OnDialogueContextUpdated", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueContext, OnDialogueContextUpdated), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueContextUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueContextUpdated_MetaData), NewProp_OnDialogueContextUpdated_MetaData) }; // 4262811724
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PlayerDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_DialogueParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_PreviousActiveNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_AllowedChildNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueTableHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_ActiveDialogueRowDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_TraversedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_LastWidgetCommand,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueContext_Statics::NewProp_OnDialogueContextUpdated,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueContext_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueContext_Statics::ClassParams = {
	&UMounteaDialogueContext::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueContext_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueContext_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueContext()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton, Z_Construct_UClass_UMounteaDialogueContext_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueContext.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueContext>()
{
	return UMounteaDialogueContext::StaticClass();
}
void UMounteaDialogueContext::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_ActiveDialogueParticipant(TEXT("ActiveDialogueParticipant"));
	static const FName Name_PlayerDialogueParticipant(TEXT("PlayerDialogueParticipant"));
	static const FName Name_DialogueParticipant(TEXT("DialogueParticipant"));
	static const FName Name_DialogueParticipants(TEXT("DialogueParticipants"));
	static const FName Name_ActiveNode(TEXT("ActiveNode"));
	static const FName Name_PreviousActiveNode(TEXT("PreviousActiveNode"));
	static const FName Name_AllowedChildNodes(TEXT("AllowedChildNodes"));
	static const FName Name_ActiveDialogueTableHandle(TEXT("ActiveDialogueTableHandle"));
	static const FName Name_ActiveDialogueRow(TEXT("ActiveDialogueRow"));
	static const FName Name_ActiveDialogueRowDataIndex(TEXT("ActiveDialogueRowDataIndex"));
	static const FName Name_LastWidgetCommand(TEXT("LastWidgetCommand"));
	const bool bIsValid = true
		&& Name_ActiveDialogueParticipant == ClassReps[(int32)ENetFields_Private::ActiveDialogueParticipant].Property->GetFName()
		&& Name_PlayerDialogueParticipant == ClassReps[(int32)ENetFields_Private::PlayerDialogueParticipant].Property->GetFName()
		&& Name_DialogueParticipant == ClassReps[(int32)ENetFields_Private::DialogueParticipant].Property->GetFName()
		&& Name_DialogueParticipants == ClassReps[(int32)ENetFields_Private::DialogueParticipants].Property->GetFName()
		&& Name_ActiveNode == ClassReps[(int32)ENetFields_Private::ActiveNode].Property->GetFName()
		&& Name_PreviousActiveNode == ClassReps[(int32)ENetFields_Private::PreviousActiveNode].Property->GetFName()
		&& Name_AllowedChildNodes == ClassReps[(int32)ENetFields_Private::AllowedChildNodes].Property->GetFName()
		&& Name_ActiveDialogueTableHandle == ClassReps[(int32)ENetFields_Private::ActiveDialogueTableHandle].Property->GetFName()
		&& Name_ActiveDialogueRow == ClassReps[(int32)ENetFields_Private::ActiveDialogueRow].Property->GetFName()
		&& Name_ActiveDialogueRowDataIndex == ClassReps[(int32)ENetFields_Private::ActiveDialogueRowDataIndex].Property->GetFName()
		&& Name_LastWidgetCommand == ClassReps[(int32)ENetFields_Private::LastWidgetCommand].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMounteaDialogueContext"));
}
UMounteaDialogueContext::UMounteaDialogueContext(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueContext);
UMounteaDialogueContext::~UMounteaDialogueContext() {}
// End Class UMounteaDialogueContext

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueContext, UMounteaDialogueContext::StaticClass, TEXT("UMounteaDialogueContext"), &Z_Registration_Info_UClass_UMounteaDialogueContext, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueContext), 3937948526U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_308227322(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
