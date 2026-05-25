// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueParticipantStatics.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueParticipantStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantStatics();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantStatics_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueParticipantStatics Function CanParticipateInDialogue
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics
{
	struct MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "CanParticipateInDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::MounteaDialogueParticipantStatics_eventCanParticipateInDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execCanParticipateInDialogue)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueParticipantStatics::CanParticipateInDialogue(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function CanParticipateInDialogue

// Begin Class UMounteaDialogueParticipantStatics Function CanStartDialogue
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics
{
	struct MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * A way to determine whether the Dialogue can even start.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return True if dialogue can start, false otherwise\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A way to determine whether the Dialogue can even start.\n\n@param Target        Dialogue Participant interface.\n@return True if dialogue can start, false otherwise" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "CanStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::MounteaDialogueParticipantStatics_eventCanStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execCanStartDialogue)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueParticipantStatics::CanStartDialogue(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function CanStartDialogue

// Begin Class UMounteaDialogueParticipantStatics Function GetAudioComponent
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetAudioComponent_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the audio component of the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The audio component used for dialogue\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the audio component of the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return The audio component used for dialogue" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetAudioComponent_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::MounteaDialogueParticipantStatics_eventGetAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::MounteaDialogueParticipantStatics_eventGetAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetAudioComponent)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=UMounteaDialogueParticipantStatics::GetAudioComponent(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetAudioComponent

// Begin Class UMounteaDialogueParticipantStatics Function GetDefaultParticipantState
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetDefaultParticipantState_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		EDialogueParticipantState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* Gets the default state of the Dialogue Participant.\n\x09*\n\x09* @param Target\x09""Dialogue Participant interface.\n\x09* @return The default participant state\n\x09*/" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the default state of the Dialogue Participant.\n\n@param Target Dialogue Participant interface.\n@return The default participant state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDefaultParticipantState_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDefaultParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(0, nullptr) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetDefaultParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::MounteaDialogueParticipantStatics_eventGetDefaultParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::MounteaDialogueParticipantStatics_eventGetDefaultParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetDefaultParticipantState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueParticipantState*)Z_Param__Result=UMounteaDialogueParticipantStatics::GetDefaultParticipantState(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetDefaultParticipantState

// Begin Class UMounteaDialogueParticipantStatics Function GetDialogueGraph
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetDialogueGraph_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UMounteaDialogueGraph* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the dialogue graph for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The dialogue graph\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the dialogue graph for the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return The dialogue graph" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDialogueGraph_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDialogueGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetDialogueGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::MounteaDialogueParticipantStatics_eventGetDialogueGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::MounteaDialogueParticipantStatics_eventGetDialogueGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetDialogueGraph)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraph**)Z_Param__Result=UMounteaDialogueParticipantStatics::GetDialogueGraph(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetDialogueGraph

// Begin Class UMounteaDialogueParticipantStatics Function GetDialogueManager
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetDialogueManager_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		TScriptInterface<IMounteaDialogueManagerInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Dialogue Manager who updated this Dialogue Participant..\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Dialogue Manager who updated this Dialogue Participant..\n\n@param Target        Dialogue Participant interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDialogueManager_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetDialogueManager_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetDialogueManager", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::MounteaDialogueParticipantStatics_eventGetDialogueManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::MounteaDialogueParticipantStatics_eventGetDialogueManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetDialogueManager)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueManagerInterface>*)Z_Param__Result=UMounteaDialogueParticipantStatics::GetDialogueManager(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetDialogueManager

// Begin Class UMounteaDialogueParticipantStatics Function GetOwningActor
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetOwningActor_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the owning actor for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The owning actor for this Dialogue Participant\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning actor for the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return The owning actor for this Dialogue Participant" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetOwningActor_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::MounteaDialogueParticipantStatics_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::MounteaDialogueParticipantStatics_eventGetOwningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetOwningActor)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UMounteaDialogueParticipantStatics::GetOwningActor(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetOwningActor

// Begin Class UMounteaDialogueParticipantStatics Function GetParticipantState
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetParticipantState_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		EDialogueParticipantState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current state of the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The current participant state\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current state of the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return The current participant state" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetParticipantState_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetParticipantState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(0, nullptr) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::MounteaDialogueParticipantStatics_eventGetParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::MounteaDialogueParticipantStatics_eventGetParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetParticipantState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueParticipantState*)Z_Param__Result=UMounteaDialogueParticipantStatics::GetParticipantState(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetParticipantState

// Begin Class UMounteaDialogueParticipantStatics Function GetParticipantTag
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetParticipantTag_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		FGameplayTag ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the participant's gameplay tag.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The participant's gameplay tag\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the participant's gameplay tag.\n\n@param Target        Dialogue Participant interface.\n@return The participant's gameplay tag" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetParticipantTag_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetParticipantTag_Parms, ReturnValue), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(0, nullptr) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetParticipantTag", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::MounteaDialogueParticipantStatics_eventGetParticipantTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::MounteaDialogueParticipantStatics_eventGetParticipantTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetParticipantTag)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGameplayTag*)Z_Param__Result=UMounteaDialogueParticipantStatics::GetParticipantTag(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetParticipantTag

// Begin Class UMounteaDialogueParticipantStatics Function GetSavedStartingNode
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetSavedStartingNode_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the saved starting node for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return The saved starting node\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the saved starting node for the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return The saved starting node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetSavedStartingNode_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetSavedStartingNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetSavedStartingNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::MounteaDialogueParticipantStatics_eventGetSavedStartingNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::MounteaDialogueParticipantStatics_eventGetSavedStartingNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetSavedStartingNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueParticipantStatics::GetSavedStartingNode(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetSavedStartingNode

// Begin Class UMounteaDialogueParticipantStatics Function GetTraversedPath
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics
{
	struct MounteaDialogueParticipantStatics_eventGetTraversedPath_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		TArray<FDialogueTraversePath> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the traversed path of the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @return Array of traversed dialogue paths\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the traversed path of the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@return Array of traversed dialogue paths" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetTraversedPath_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventGetTraversedPath_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "GetTraversedPath", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::MounteaDialogueParticipantStatics_eventGetTraversedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::MounteaDialogueParticipantStatics_eventGetTraversedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execGetTraversedPath)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FDialogueTraversePath>*)Z_Param__Result=UMounteaDialogueParticipantStatics::GetTraversedPath(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function GetTraversedPath

// Begin Class UMounteaDialogueParticipantStatics Function InitializeParticipant
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics
{
	struct MounteaDialogueParticipantStatics_eventInitializeParticipant_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		TScriptInterface<IMounteaDialogueManagerInterface> Manager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @param Manager\x09""Dialogue Manager who owns this Initialization process.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@param Manager       Dialogue Manager who owns this Initialization process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Manager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Manager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventInitializeParticipant_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::NewProp_Manager = { "Manager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventInitializeParticipant_Parms, Manager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Manager_MetaData), NewProp_Manager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::NewProp_Manager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "InitializeParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::MounteaDialogueParticipantStatics_eventInitializeParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::MounteaDialogueParticipantStatics_eventInitializeParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execInitializeParticipant)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Manager);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::InitializeParticipant(Z_Param_Out_Target,Z_Param_Out_Manager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function InitializeParticipant

// Begin Class UMounteaDialogueParticipantStatics Function PlayParticipantVoice
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics
{
	struct MounteaDialogueParticipantStatics_eventPlayParticipantVoice_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		USoundBase* ParticipantVoice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Plays voice sound for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09\x09\x09""Dialogue Participant interface.\n\x09 * @param ParticipantVoice  The sound to play\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Plays voice sound for the Dialogue Participant.\n\n@param Target                        Dialogue Participant interface.\n@param ParticipantVoice  The sound to play" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantVoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventPlayParticipantVoice_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::NewProp_ParticipantVoice = { "ParticipantVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventPlayParticipantVoice_Parms, ParticipantVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::NewProp_ParticipantVoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "PlayParticipantVoice", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::MounteaDialogueParticipantStatics_eventPlayParticipantVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::MounteaDialogueParticipantStatics_eventPlayParticipantVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execPlayParticipantVoice)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_OBJECT(USoundBase,Z_Param_ParticipantVoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::PlayParticipantVoice(Z_Param_Out_Target,Z_Param_ParticipantVoice);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function PlayParticipantVoice

// Begin Class UMounteaDialogueParticipantStatics Function ProcessDialogueCommand
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics
{
	struct MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		FString Command;
		UObject* Payload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes a dialogue command for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @param Command   The command to process\n\x09 * @param Payload   Optional payload object for the command\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes a dialogue command for the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@param Command   The command to process\n@param Payload   Optional payload object for the command" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Payload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Payload = { "Payload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms, Payload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::NewProp_Payload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "ProcessDialogueCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::MounteaDialogueParticipantStatics_eventProcessDialogueCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execProcessDialogueCommand)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_OBJECT(UObject,Z_Param_Payload);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::ProcessDialogueCommand(Z_Param_Out_Target,Z_Param_Command,Z_Param_Payload);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function ProcessDialogueCommand

// Begin Class UMounteaDialogueParticipantStatics Function SaveStartingNode
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics
{
	struct MounteaDialogueParticipantStatics_eventSaveStartingNode_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UMounteaDialogueGraphNode* NewStartingNode;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the starting node for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09\x09\x09""Dialogue Participant interface.\n\x09 * @param NewStartingNode   The node to set as the starting node\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the starting node for the Dialogue Participant.\n\n@param Target                        Dialogue Participant interface.\n@param NewStartingNode   The node to set as the starting node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewStartingNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSaveStartingNode_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::NewProp_NewStartingNode = { "NewStartingNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSaveStartingNode_Parms, NewStartingNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::NewProp_NewStartingNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SaveStartingNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::MounteaDialogueParticipantStatics_eventSaveStartingNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::MounteaDialogueParticipantStatics_eventSaveStartingNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSaveStartingNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_NewStartingNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SaveStartingNode(Z_Param_Out_Target,Z_Param_NewStartingNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SaveStartingNode

// Begin Class UMounteaDialogueParticipantStatics Function SaveTraversedPath
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics
{
	struct MounteaDialogueParticipantStatics_eventSaveTraversedPath_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		TArray<FDialogueTraversePath> InPath;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Saves the traversed path for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @param InPath\x09The traversed path to save\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Saves the traversed path for the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@param InPath        The traversed path to save" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_InPath;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSaveTraversedPath_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_InPath_Inner = { "InPath", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_InPath = { "InPath", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSaveTraversedPath_Parms, InPath), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_InPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::NewProp_InPath,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SaveTraversedPath", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::MounteaDialogueParticipantStatics_eventSaveTraversedPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::MounteaDialogueParticipantStatics_eventSaveTraversedPath_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSaveTraversedPath)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_TARRAY_REF(FDialogueTraversePath,Z_Param_Out_InPath);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SaveTraversedPath(Z_Param_Out_Target,Z_Param_Out_InPath);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SaveTraversedPath

// Begin Class UMounteaDialogueParticipantStatics Function SetAudioComponent
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics
{
	struct MounteaDialogueParticipantStatics_eventSetAudioComponent_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UAudioComponent* NewAudioComponent;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the audio component for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09\x09\x09""Dialogue Participant interface.\n\x09 * @param NewAudioComponent The audio component to set\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the audio component for the Dialogue Participant.\n\n@param Target                        Dialogue Participant interface.\n@param NewAudioComponent The audio component to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetAudioComponent_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::NewProp_NewAudioComponent = { "NewAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetAudioComponent_Parms, NewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAudioComponent_MetaData), NewProp_NewAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::NewProp_NewAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SetAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::MounteaDialogueParticipantStatics_eventSetAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::MounteaDialogueParticipantStatics_eventSetAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSetAudioComponent)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UAudioComponent,Z_Param_NewAudioComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SetAudioComponent(Z_Param_Out_Target,Z_Param_NewAudioComponent);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SetAudioComponent

// Begin Class UMounteaDialogueParticipantStatics Function SetDefaultParticipantState
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics
{
	struct MounteaDialogueParticipantStatics_eventSetDefaultParticipantState_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		EDialogueParticipantState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the default state of the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @param NewState  The default state to set\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the default state of the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@param NewState  The default state to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetDefaultParticipantState_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetDefaultParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SetDefaultParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::MounteaDialogueParticipantStatics_eventSetDefaultParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::MounteaDialogueParticipantStatics_eventSetDefaultParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSetDefaultParticipantState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SetDefaultParticipantState(Z_Param_Out_Target,EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SetDefaultParticipantState

// Begin Class UMounteaDialogueParticipantStatics Function SetDialogueGraph
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics
{
	struct MounteaDialogueParticipantStatics_eventSetDialogueGraph_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		UMounteaDialogueGraph* NewDialogueGraph;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the dialogue graph for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09\x09\x09""Dialogue Participant interface.\n\x09 * @param NewDialogueGraph  The dialogue graph to set\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the dialogue graph for the Dialogue Participant.\n\n@param Target                        Dialogue Participant interface.\n@param NewDialogueGraph  The dialogue graph to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetDialogueGraph_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::NewProp_NewDialogueGraph = { "NewDialogueGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetDialogueGraph_Parms, NewDialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::NewProp_NewDialogueGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SetDialogueGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::MounteaDialogueParticipantStatics_eventSetDialogueGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::MounteaDialogueParticipantStatics_eventSetDialogueGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSetDialogueGraph)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_NewDialogueGraph);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SetDialogueGraph(Z_Param_Out_Target,Z_Param_NewDialogueGraph);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SetDialogueGraph

// Begin Class UMounteaDialogueParticipantStatics Function SetParticipantState
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics
{
	struct MounteaDialogueParticipantStatics_eventSetParticipantState_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		EDialogueParticipantState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the state of the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09""Dialogue Participant interface.\n\x09 * @param NewState  The state to set\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the state of the Dialogue Participant.\n\n@param Target        Dialogue Participant interface.\n@param NewState  The state to set" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewState_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NewState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NewState;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetParticipantState_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSetParticipantState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SetParticipantState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::MounteaDialogueParticipantStatics_eventSetParticipantState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::MounteaDialogueParticipantStatics_eventSetParticipantState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSetParticipantState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SetParticipantState(Z_Param_Out_Target,EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SetParticipantState

// Begin Class UMounteaDialogueParticipantStatics Function SkipParticipantVoice
struct Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics
{
	struct MounteaDialogueParticipantStatics_eventSkipParticipantVoice_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> Target;
		USoundBase* ParticipantVoice;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Skips the current voice sound for the Dialogue Participant.\n\x09 *\n\x09 * @param Target\x09\x09\x09""Dialogue Participant interface.\n\x09 * @param ParticipantVoice  The sound to skip\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the current voice sound for the Dialogue Participant.\n\n@param Target                        Dialogue Participant interface.\n@param ParticipantVoice  The sound to skip" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantVoice;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSkipParticipantVoice_Parms, Target), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::NewProp_ParticipantVoice = { "ParticipantVoice", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipantStatics_eventSkipParticipantVoice_Parms, ParticipantVoice), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::NewProp_ParticipantVoice,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipantStatics, nullptr, "SkipParticipantVoice", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::MounteaDialogueParticipantStatics_eventSkipParticipantVoice_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::MounteaDialogueParticipantStatics_eventSkipParticipantVoice_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipantStatics::execSkipParticipantVoice)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Target);
	P_GET_OBJECT(USoundBase,Z_Param_ParticipantVoice);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueParticipantStatics::SkipParticipantVoice(Z_Param_Out_Target,Z_Param_ParticipantVoice);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipantStatics Function SkipParticipantVoice

// Begin Class UMounteaDialogueParticipantStatics
void UMounteaDialogueParticipantStatics::StaticRegisterNativesUMounteaDialogueParticipantStatics()
{
	UClass* Class = UMounteaDialogueParticipantStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanParticipateInDialogue", &UMounteaDialogueParticipantStatics::execCanParticipateInDialogue },
		{ "CanStartDialogue", &UMounteaDialogueParticipantStatics::execCanStartDialogue },
		{ "GetAudioComponent", &UMounteaDialogueParticipantStatics::execGetAudioComponent },
		{ "GetDefaultParticipantState", &UMounteaDialogueParticipantStatics::execGetDefaultParticipantState },
		{ "GetDialogueGraph", &UMounteaDialogueParticipantStatics::execGetDialogueGraph },
		{ "GetDialogueManager", &UMounteaDialogueParticipantStatics::execGetDialogueManager },
		{ "GetOwningActor", &UMounteaDialogueParticipantStatics::execGetOwningActor },
		{ "GetParticipantState", &UMounteaDialogueParticipantStatics::execGetParticipantState },
		{ "GetParticipantTag", &UMounteaDialogueParticipantStatics::execGetParticipantTag },
		{ "GetSavedStartingNode", &UMounteaDialogueParticipantStatics::execGetSavedStartingNode },
		{ "GetTraversedPath", &UMounteaDialogueParticipantStatics::execGetTraversedPath },
		{ "InitializeParticipant", &UMounteaDialogueParticipantStatics::execInitializeParticipant },
		{ "PlayParticipantVoice", &UMounteaDialogueParticipantStatics::execPlayParticipantVoice },
		{ "ProcessDialogueCommand", &UMounteaDialogueParticipantStatics::execProcessDialogueCommand },
		{ "SaveStartingNode", &UMounteaDialogueParticipantStatics::execSaveStartingNode },
		{ "SaveTraversedPath", &UMounteaDialogueParticipantStatics::execSaveTraversedPath },
		{ "SetAudioComponent", &UMounteaDialogueParticipantStatics::execSetAudioComponent },
		{ "SetDefaultParticipantState", &UMounteaDialogueParticipantStatics::execSetDefaultParticipantState },
		{ "SetDialogueGraph", &UMounteaDialogueParticipantStatics::execSetDialogueGraph },
		{ "SetParticipantState", &UMounteaDialogueParticipantStatics::execSetParticipantState },
		{ "SkipParticipantVoice", &UMounteaDialogueParticipantStatics::execSkipParticipantVoice },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueParticipantStatics);
UClass* Z_Construct_UClass_UMounteaDialogueParticipantStatics_NoRegister()
{
	return UMounteaDialogueParticipantStatics::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This library contains implementations of Dialogue Participant Functions.\n * Dialogue Participant Interface does not have any BlueprintCallable functions.\n */" },
#endif
		{ "IncludePath", "Helpers/MounteaDialogueParticipantStatics.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueParticipantStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This library contains implementations of Dialogue Participant Functions.\nDialogue Participant Interface does not have any BlueprintCallable functions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanParticipateInDialogue, "CanParticipateInDialogue" }, // 1142520891
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_CanStartDialogue, "CanStartDialogue" }, // 4140479069
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetAudioComponent, "GetAudioComponent" }, // 689626865
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDefaultParticipantState, "GetDefaultParticipantState" }, // 2380725519
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueGraph, "GetDialogueGraph" }, // 1151897311
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetDialogueManager, "GetDialogueManager" }, // 4165022840
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetOwningActor, "GetOwningActor" }, // 2670288264
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantState, "GetParticipantState" }, // 2841311158
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetParticipantTag, "GetParticipantTag" }, // 1565989227
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetSavedStartingNode, "GetSavedStartingNode" }, // 450320475
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_GetTraversedPath, "GetTraversedPath" }, // 68195509
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_InitializeParticipant, "InitializeParticipant" }, // 109572492
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_PlayParticipantVoice, "PlayParticipantVoice" }, // 3028310738
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_ProcessDialogueCommand, "ProcessDialogueCommand" }, // 1926616231
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveStartingNode, "SaveStartingNode" }, // 192448094
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SaveTraversedPath, "SaveTraversedPath" }, // 3216698031
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetAudioComponent, "SetAudioComponent" }, // 817228459
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDefaultParticipantState, "SetDefaultParticipantState" }, // 730399542
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetDialogueGraph, "SetDialogueGraph" }, // 2101549196
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SetParticipantState, "SetParticipantState" }, // 2911732835
		{ &Z_Construct_UFunction_UMounteaDialogueParticipantStatics_SkipParticipantVoice, "SkipParticipantVoice" }, // 2450385132
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueParticipantStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::ClassParams = {
	&UMounteaDialogueParticipantStatics::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueParticipantStatics()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueParticipantStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueParticipantStatics.OuterSingleton, Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueParticipantStatics.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueParticipantStatics>()
{
	return UMounteaDialogueParticipantStatics::StaticClass();
}
UMounteaDialogueParticipantStatics::UMounteaDialogueParticipantStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueParticipantStatics);
UMounteaDialogueParticipantStatics::~UMounteaDialogueParticipantStatics() {}
// End Class UMounteaDialogueParticipantStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueParticipantStatics, UMounteaDialogueParticipantStatics::StaticClass, TEXT("UMounteaDialogueParticipantStatics"), &Z_Registration_Info_UClass_UMounteaDialogueParticipantStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueParticipantStatics), 524156694U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_3613594052(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
