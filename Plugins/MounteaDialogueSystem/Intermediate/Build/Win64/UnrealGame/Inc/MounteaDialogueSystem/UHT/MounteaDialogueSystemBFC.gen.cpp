// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueSystemBFC.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemBFC() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UActorComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueSystemBFC Function AddParticipants
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics
{
	struct MounteaDialogueSystemBFC_eventAddParticipants_Parms
	{
		AActor* WorldContextObject;
		TArray<TScriptInterface<IMounteaDialogueParticipantInterface> > NewParticipants;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds new participants to the Dialogue Manager.\n\x09 * \n\x09 * @param WorldContextObject The context within which the world exists.\n\x09 * @param NewParticipants A list of dialogue participants to be added.\n\x09 * @return Returns true if the participants were successfully added, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Dialogue Manager" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "manager, dialogue, master, initialize" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds new participants to the Dialogue Manager.\n\n@param WorldContextObject The context within which the world exists.\n@param NewParticipants A list of dialogue participants to be added.\n@return Returns true if the participants were successfully added, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewParticipants;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventAddParticipants_Parms, WorldContextObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_NewParticipants_Inner = { "NewParticipants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_NewParticipants = { "NewParticipants", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventAddParticipants_Parms, NewParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipants_MetaData), NewProp_NewParticipants_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventAddParticipants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventAddParticipants_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_NewParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_NewParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "AddParticipants", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::MounteaDialogueSystemBFC_eventAddParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::MounteaDialogueSystemBFC_eventAddParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execAddParticipants)
{
	P_GET_OBJECT(AActor,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(TScriptInterface<IMounteaDialogueParticipantInterface>,Z_Param_Out_NewParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::AddParticipants(Z_Param_WorldContextObject,Z_Param_Out_NewParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function AddParticipants

// Begin Class UMounteaDialogueSystemBFC Function DoesRowMatchParticipant
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics
{
	struct MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> ParticipantInterface;
		FDialogueRow Row;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParticipantInterface;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ParticipantInterface = { "ParticipantInterface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms, ParticipantInterface), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantInterface_MetaData), NewProp_ParticipantInterface_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms, Row), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 3048168484
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ParticipantInterface,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "DoesRowMatchParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::MounteaDialogueSystemBFC_eventDoesRowMatchParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execDoesRowMatchParticipant)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_ParticipantInterface);
	P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_Row);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::DoesRowMatchParticipant(Z_Param_Out_ParticipantInterface,Z_Param_Out_Row);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function DoesRowMatchParticipant

// Begin Class UMounteaDialogueSystemBFC Function FindAudioComponentByName
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics
{
	struct MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms
	{
		const AActor* ActorContext;
		FName Arg;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "audio, tag, search" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext = { "ActorContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, ActorContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorContext_MetaData), NewProp_ActorContext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, Arg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg_MetaData), NewProp_Arg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ActorContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_Arg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindAudioComponentByName", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindAudioComponentByName)
{
	P_GET_OBJECT(AActor,Z_Param_ActorContext);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=UMounteaDialogueSystemBFC::FindAudioComponentByName(Z_Param_ActorContext,Z_Param_Out_Arg);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindAudioComponentByName

// Begin Class UMounteaDialogueSystemBFC Function FindAudioComponentByTag
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics
{
	struct MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms
	{
		const AActor* ActorContext;
		FName Arg;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "audio, tag, search" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActorContext_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorContext;
	static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext = { "ActorContext", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, ActorContext), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActorContext_MetaData), NewProp_ActorContext_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, Arg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg_MetaData), NewProp_Arg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ActorContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_Arg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindAudioComponentByTag", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::MounteaDialogueSystemBFC_eventFindAudioComponentByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindAudioComponentByTag)
{
	P_GET_OBJECT(AActor,Z_Param_ActorContext);
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=UMounteaDialogueSystemBFC::FindAudioComponentByTag(Z_Param_ActorContext,Z_Param_Out_Arg);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindAudioComponentByTag

// Begin Class UMounteaDialogueSystemBFC Function FindBestMatchingParticipant
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics
{
	struct MounteaDialogueSystemBFC_eventFindBestMatchingParticipant_Parms
	{
		const UMounteaDialogueContext* Context;
		TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Find the best matching dialogue participant based on the active dialogue node and context.\n\x09 *\n\x09 * This static function searches for the best matching dialogue participant given the active dialogue node and context.\n\x09 * It checks the compatibility of each participant's gameplay tag with the tags specified in the active dialogue node's dialogue row.\n\x09 * The participant with a compatible tag is considered the best match and returned as a TScriptInterface<IMounteaDialogueParticipantInterface>.\n\x09 *\n\x09 * @param WorldContextObject The world context object from which to retrieve the dialogue participants.\n\x09 * @param Context The Mountea dialogue context containing the active node and participants.\n\x09 * @return The best matching dialogue participant, or nullptr if no match is found.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "get" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Find the best matching dialogue participant based on the active dialogue node and context.\n\nThis static function searches for the best matching dialogue participant given the active dialogue node and context.\nIt checks the compatibility of each participant's gameplay tag with the tags specified in the active dialogue node's dialogue row.\nThe participant with a compatible tag is considered the best match and returned as a TScriptInterface<IMounteaDialogueParticipantInterface>.\n\n@param WorldContextObject The world context object from which to retrieve the dialogue participants.\n@param Context The Mountea dialogue context containing the active node and participants.\n@return The best matching dialogue participant, or nullptr if no match is found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindBestMatchingParticipant_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindBestMatchingParticipant_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindBestMatchingParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::MounteaDialogueSystemBFC_eventFindBestMatchingParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::MounteaDialogueSystemBFC_eventFindBestMatchingParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindBestMatchingParticipant)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::FindBestMatchingParticipant(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindBestMatchingParticipant

// Begin Class UMounteaDialogueSystemBFC Function FindDialogueParticipantInterface
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics
{
	struct MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms
	{
		UObject* ParticipantActor;
		bool bResult;
		TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function to retrieve Dialogue Participant Interface reference from any Actor.\n\x09 * Actors can implement that interface themselves or contain a child component that implements the interface.\n\x09 * If none is found null is returned and error is printed to console.\n\x09 * \n\x09 * @param ParticipantActor\x09""Actor who should implement the Participant interface\n\x09 * @return\x09\x09\x09\x09\x09\x09\x09\x09Mountea Dialogue Participant reference\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "get, find, retrieve" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function to retrieve Dialogue Participant Interface reference from any Actor.\nActors can implement that interface themselves or contain a child component that implements the interface.\nIf none is found null is returned and error is printed to console.\n\n@param ParticipantActor      Actor who should implement the Participant interface\n@return                                                              Mountea Dialogue Participant reference" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParticipantActor;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_ParticipantActor = { "ParticipantActor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms, ParticipantActor), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_ParticipantActor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_bResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindDialogueParticipantInterface", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::MounteaDialogueSystemBFC_eventFindDialogueParticipantInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindDialogueParticipantInterface)
{
	P_GET_OBJECT(UObject,Z_Param_ParticipantActor);
	P_GET_UBOOL_REF(Z_Param_Out_bResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::FindDialogueParticipantInterface(Z_Param_ParticipantActor,Z_Param_Out_bResult);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindDialogueParticipantInterface

// Begin Class UMounteaDialogueSystemBFC Function FindDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics
{
	struct MounteaDialogueSystemBFC_eventFindDialogueRow_Parms
	{
		const UDataTable* Table;
		FName RowName;
		FDialogueRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds a specific dialogue row in a DataTable.\n\x09 * \n\x09 * @param Table The DataTable where the dialogue row is stored.\n\x09 * @param RowName The name of the row to find.\n\x09 * @return The found dialogue row, or an empty dialogue row if not found.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Find Dialogue Row" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "row, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds a specific dialogue row in a DataTable.\n\n@param Table The DataTable where the dialogue row is stored.\n@param RowName The name of the row to find.\n@return The found dialogue row, or an empty dialogue row if not found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Table_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Table;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table = { "Table", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, Table), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Table_MetaData), NewProp_Table_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindDialogueRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3048168484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_Table,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::MounteaDialogueSystemBFC_eventFindDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::MounteaDialogueSystemBFC_eventFindDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindDialogueRow)
{
	P_GET_OBJECT(UDataTable,Z_Param_Table);
	P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueRow*)Z_Param__Result=UMounteaDialogueSystemBFC::FindDialogueRow(Z_Param_Table,Z_Param_RowName);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindDialogueRow

// Begin Class UMounteaDialogueSystemBFC Function FindNodeByGUID
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics
{
	struct MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms
	{
		const UMounteaDialogueGraph* FromGraph;
		FGuid ByGUID;
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Searches in Graph for Node by GUID.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "guid, node, find, search, get" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches in Graph for Node by GUID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ByGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ByGUID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph = { "FromGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, FromGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromGraph_MetaData), NewProp_FromGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID = { "ByGUID", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, ByGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ByGUID_MetaData), NewProp_ByGUID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_FromGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ByGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindNodeByGUID", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::MounteaDialogueSystemBFC_eventFindNodeByGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindNodeByGUID)
{
	P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_FromGraph);
	P_GET_STRUCT(FGuid,Z_Param_ByGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::FindNodeByGUID(Z_Param_FromGraph,Z_Param_ByGUID);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindNodeByGUID

// Begin Class UMounteaDialogueSystemBFC Function FindNodesByGUID
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics
{
	struct MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms
	{
		const UMounteaDialogueGraph* FromGraph;
		TArray<FGuid> Guids;
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Searches in Graph for Node by GUID.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "guid, node, find, search, get" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Searches in Graph for Node by GUID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FromGraph_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Guids_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromGraph;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Guids_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Guids;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_FromGraph = { "FromGraph", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms, FromGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FromGraph_MetaData), NewProp_FromGraph_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_Guids_Inner = { "Guids", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_Guids = { "Guids", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms, Guids), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Guids_MetaData), NewProp_Guids_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_FromGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_Guids_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_Guids,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "FindNodesByGUID", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::MounteaDialogueSystemBFC_eventFindNodesByGUID_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execFindNodesByGUID)
{
	P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_FromGraph);
	P_GET_TARRAY(FGuid,Z_Param_Guids);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=UMounteaDialogueSystemBFC::FindNodesByGUID(Z_Param_FromGraph,Z_Param_Guids);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function FindNodesByGUID

// Begin Class UMounteaDialogueSystemBFC Function GetActiveDialogueData
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics
{
	struct MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms
	{
		const UMounteaDialogueContext* Context;
		bool bResult;
		FDialogueRowData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(0, nullptr) }; // 4030428912
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_bResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetActiveDialogueData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::MounteaDialogueSystemBFC_eventGetActiveDialogueData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetActiveDialogueData)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
	P_GET_UBOOL_REF(Z_Param_Out_bResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueRowData*)Z_Param__Result=UMounteaDialogueSystemBFC::GetActiveDialogueData(Z_Param_Context,Z_Param_Out_bResult);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetActiveDialogueData

// Begin Class UMounteaDialogueSystemBFC Function GetActiveRowExecutionMode
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics
{
	struct MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms
	{
		UMounteaDialogueContext* DialogueContext;
		int32 RowIndex;
		ERowExecutionMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the execution mode of a specific row within the dialogue context.\n\x09 * \n\x09 * @param DialogueContext The current dialogue context.\n\x09 * @param RowIndex The index of the row to retrieve the execution mode for.\n\x09 * @return The execution mode of the specified row.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "get, find, retrieve" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the execution mode of a specific row within the dialogue context.\n\n@param DialogueContext The current dialogue context.\n@param RowIndex The index of the row to retrieve the execution mode for.\n@return The execution mode of the specified row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_DialogueContext = { "DialogueContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms, DialogueContext), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms, RowIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowIndex_MetaData), NewProp_RowIndex_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode, METADATA_PARAMS(0, nullptr) }; // 1058750223
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_DialogueContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_RowIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetActiveRowExecutionMode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::MounteaDialogueSystemBFC_eventGetActiveRowExecutionMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetActiveRowExecutionMode)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_DialogueContext);
	P_GET_PROPERTY(FIntProperty,Z_Param_RowIndex);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERowExecutionMode*)Z_Param__Result=UMounteaDialogueSystemBFC::GetActiveRowExecutionMode(Z_Param_DialogueContext,Z_Param_RowIndex);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetActiveRowExecutionMode

// Begin Class UMounteaDialogueSystemBFC Function GetAllowedChildNodes
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics
{
	struct MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms
	{
		const UMounteaDialogueGraphNode* ParentNode;
		TArray<UMounteaDialogueGraphNode*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns all Allowed Child Nodes for given Parent Node\n\x09 *\xe2\x9d\x97Might return empty array\xe2\x9d\x97\n\x09 * \n\x09 * @param ParentNode\x09Node to get all Children From\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "diaogue, child, nodes" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all Allowed Child Nodes for given Parent Node\n\xe2\x9d\x97Might return empty array\xe2\x9d\x97\n\n@param ParentNode    Node to get all Children From" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetAllowedChildNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::MounteaDialogueSystemBFC_eventGetAllowedChildNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetAllowedChildNodes)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode*>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetAllowedChildNodes(Z_Param_ParentNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetAllowedChildNodes

// Begin Class UMounteaDialogueSystemBFC Function GetChildrenNodeFromIndex
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics
{
	struct MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms
	{
		int32 Index;
		const UMounteaDialogueGraphNode* ParentNode;
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to get Child Node from Dialogue Node at given Index. If none is found, returns null.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param Index\x09\x09\x09Index of the Node to be returned.\n\x09 * @param ParentNode\x09Parent Node which should contain the Node to be returned.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "dialogue, child, node, index" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to get Child Node from Dialogue Node at given Index. If none is found, returns null.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param Index                 Index of the Node to be returned.\n@param ParentNode    Parent Node which should contain the Node to be returned." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Index_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, Index), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Index_MetaData), NewProp_Index_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_Index,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetChildrenNodeFromIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::MounteaDialogueSystemBFC_eventGetChildrenNodeFromIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetChildrenNodeFromIndex)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_Index);
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::GetChildrenNodeFromIndex(Z_Param_Index,Z_Param_ParentNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetChildrenNodeFromIndex

// Begin Class UMounteaDialogueSystemBFC Function GetDefaultDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics
{
	struct MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms
	{
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to get default Dialogue Widget from Project Settings.\n\x09 * \n\x09 * \xe2\x9d\x97 Will return null if settings are not accessible\xe2\x9d\x97\n\x09 * \xe2\x9d\x97 Will return null if no Default Widget is selected\xe2\x9d\x97\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "widget, UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to get default Dialogue Widget from Project Settings.\n\n\xe2\x9d\x97 Will return null if settings are not accessible\xe2\x9d\x97\n\xe2\x9d\x97 Will return null if no Default Widget is selected\xe2\x9d\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDefaultDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemBFC_eventGetDefaultDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDefaultDialogueWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetDefaultDialogueWidget();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetDefaultDialogueWidget

// Begin Class UMounteaDialogueSystemBFC Function GetDialogueManager
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics
{
	struct MounteaDialogueSystemBFC_eventGetDialogueManager_Parms
	{
		UObject* WorldContextObject;
		TScriptInterface<IMounteaDialogueManagerInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns first 'Mountea Dialogue Manager' Component from Player State.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param WorldContextObject\x09World Context Object \n\x09 */" },
#endif
		{ "CompactNodeTitle", "Dialogue Manager" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "manager, dialogue, master, initialize" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns first 'Mountea Dialogue Manager' Component from Player State.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param WorldContextObject    World Context Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueManager_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueManager_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueManager", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::MounteaDialogueSystemBFC_eventGetDialogueManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::MounteaDialogueSystemBFC_eventGetDialogueManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueManager)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueManagerInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueManager(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetDialogueManager

// Begin Class UMounteaDialogueSystemBFC Function GetDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics
{
	struct MounteaDialogueSystemBFC_eventGetDialogueRow_Parms
	{
		const UMounteaDialogueGraphNode* Node;
		FDialogueRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Dialogue Row for Given Node.\n\x09 * \xe2\x9d\x97 Might return invalid Row\xe2\x9d\x97\n\x09 * \xe2\x9d\x97Only 'UMounteaDialogueGraphNode_DialogueNodeBase' classes have Dialogue data\xe2\x9d\x97\n\x09 * \n\x09 * @param Node\x09Node to get Data from.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Get Dialogue Row" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "row, dialogue" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Dialogue Row for Given Node.\n\xe2\x9d\x97 Might return invalid Row\xe2\x9d\x97\n\xe2\x9d\x97Only 'UMounteaDialogueGraphNode_DialogueNodeBase' classes have Dialogue data\xe2\x9d\x97\n\n@param Node  Node to get Data from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueRow_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3048168484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::MounteaDialogueSystemBFC_eventGetDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::MounteaDialogueSystemBFC_eventGetDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueRow)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueRow*)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueRow(Z_Param_Node);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetDialogueRow

// Begin Class UMounteaDialogueSystemBFC Function GetDialogueSystemSettings
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics
{
	struct MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms
	{
		UMounteaDialogueSystemSettings* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Dialogue System Settings.\n\x09 * \xe2\x9d\x97 Might return null\xe2\x9d\x97\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "settings, setup, config" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Dialogue System Settings.\n\xe2\x9d\x97 Might return null\xe2\x9d\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetDialogueSystemSettings", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::MounteaDialogueSystemBFC_eventGetDialogueSystemSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetDialogueSystemSettings)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueSystemSettings**)Z_Param__Result=UMounteaDialogueSystemBFC::GetDialogueSystemSettings();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetDialogueSystemSettings

// Begin Class UMounteaDialogueSystemBFC Function GetFirstChildNode
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics
{
	struct MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms
	{
		const UMounteaDialogueGraphNode* ParentNode;
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to get first Dialogue Node from Children Nodes. If none is found, returns null.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param ParentNode\x09Node to read from.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "dialogue, child, node, first" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to get first Dialogue Node from Children Nodes. If none is found, returns null.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param ParentNode    Node to read from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentNode_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentNode;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode = { "ParentNode", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms, ParentNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentNode_MetaData), NewProp_ParentNode_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ParentNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetFirstChildNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::MounteaDialogueSystemBFC_eventGetFirstChildNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetFirstChildNode)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_ParentNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=UMounteaDialogueSystemBFC::GetFirstChildNode(Z_Param_ParentNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetFirstChildNode

// Begin Class UMounteaDialogueSystemBFC Function GetObjectByClass
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics
{
	struct MounteaDialogueSystemBFC_eventGetObjectByClass_Parms
	{
		UObject* Object;
		const TSubclassOf<UObject> ClassFilter;
		bool bResult;
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "ClassFilter", "Object" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the given object if it is of the specified class type.\n\x09 *\n\x09 * This function checks whether the provided `Object` is of the class type specified by `ClassFilter`.\n\x09 * If the `Object` is of the specified class or a subclass thereof, it returns the `Object` of the specified class and sets `bResult` to `true`.\n\x09 * Otherwise, it returns `nullptr` and sets `bResult` to `false`.\n\x09 *\n\x09 * @param Object\x09\x09The object to check and potentially retrieve.\n\x09 * @param ClassFilter\x09The class type to check against. Only objects of this class or subclasses will be returned.\n\x09 * @param bResult\x09\x09(Out) `true` if the object is of the specified class type; `false` otherwise.\n\x09 * @return\x09\x09\x09\x09\x09The casted `Object` if it is of the specified class type; otherwise, `nullptr`.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DeterminesOutputType", "ClassFilter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the given object if it is of the specified class type.\n\nThis function checks whether the provided `Object` is of the class type specified by `ClassFilter`.\nIf the `Object` is of the specified class or a subclass thereof, it returns the `Object` of the specified class and sets `bResult` to `true`.\nOtherwise, it returns `nullptr` and sets `bResult` to `false`.\n\n@param Object                The object to check and potentially retrieve.\n@param ClassFilter   The class type to check against. Only objects of this class or subclasses will be returned.\n@param bResult               (Out) `true` if the object is of the specified class type; `false` otherwise.\n@return                                      The casted `Object` if it is of the specified class type; otherwise, `nullptr`." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ClassFilter_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Object;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ClassFilter;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_Object = { "Object", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetObjectByClass_Parms, Object), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_ClassFilter = { "ClassFilter", nullptr, (EPropertyFlags)0x0014000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetObjectByClass_Parms, ClassFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ClassFilter_MetaData), NewProp_ClassFilter_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventGetObjectByClass_Parms*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventGetObjectByClass_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetObjectByClass_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_Object,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_ClassFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_bResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetObjectByClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::MounteaDialogueSystemBFC_eventGetObjectByClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::MounteaDialogueSystemBFC_eventGetObjectByClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetObjectByClass)
{
	P_GET_OBJECT(UObject,Z_Param_Object);
	P_GET_OBJECT(UClass,Z_Param_ClassFilter);
	P_GET_UBOOL_REF(Z_Param_Out_bResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=UMounteaDialogueSystemBFC::GetObjectByClass(Z_Param_Object,Z_Param_ClassFilter,Z_Param_Out_bResult);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetObjectByClass

// Begin Class UMounteaDialogueSystemBFC Function GetPlayerDialogueParticipant
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics
{
	struct MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms
	{
		AActor* WorldContextObject;
		TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns first 'Mountea Dialogue Particiapnt' Component from Player Pawn.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 * \n\x09 * @param WorldContextObject\x09World Context Object \n\x09 */" },
#endif
		{ "CompactNodeTitle", "Player Participant" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "participant, dialogue, player" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns first 'Mountea Dialogue Particiapnt' Component from Player Pawn.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\n@param WorldContextObject    World Context Object" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms, WorldContextObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetPlayerDialogueParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::MounteaDialogueSystemBFC_eventGetPlayerDialogueParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetPlayerDialogueParticipant)
{
	P_GET_OBJECT(AActor,Z_Param_WorldContextObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=UMounteaDialogueSystemBFC::GetPlayerDialogueParticipant(Z_Param_WorldContextObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetPlayerDialogueParticipant

// Begin Class UMounteaDialogueSystemBFC Function GetRowDuration
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics
{
	struct MounteaDialogueSystemBFC_eventGetRowDuration_Parms
	{
		FDialogueRowData Row;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Duration for each Dialogue Row.\n\x09 * \n\x09 * @param Row\x09Row for the Duration to be calculated from.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Duration" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "dialogue, duration, long, time" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Duration for each Dialogue Row.\n\n@param Row   Row for the Duration to be calculated from." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetRowDuration_Parms, Row), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 4030428912
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetRowDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetRowDuration", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::MounteaDialogueSystemBFC_eventGetRowDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::MounteaDialogueSystemBFC_eventGetRowDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetRowDuration)
{
	P_GET_STRUCT_REF(FDialogueRowData,Z_Param_Out_Row);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=UMounteaDialogueSystemBFC::GetRowDuration(Z_Param_Out_Row);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetRowDuration

// Begin Class UMounteaDialogueSystemBFC Function GetSingleComponentByInterface
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics
{
	struct MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms
	{
		const AActor* Target;
		TSubclassOf<UInterface> InterfaceFilter;
		bool bResult;
		UActorComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "ClassFilter", "Interface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves a single component from an actor that implements a specified interface.\n\x09 * \n\x09 * @param Target The actor from which to retrieve the component.\n\x09 * @param InterfaceFilter The interface type used to filter components.\n\x09 * @param bResult\x09\x09(Out) `true` if the Component is of the specified Interface type; `false` otherwise.\n\x09 * @return The actor component that implements the specified interface, or null if none found.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "DeterminesOutputType", "InterfaceFilter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves a single component from an actor that implements a specified interface.\n\n@param Target The actor from which to retrieve the component.\n@param InterfaceFilter The interface type used to filter components.\n@param bResult               (Out) `true` if the Component is of the specified Interface type; `false` otherwise.\n@return The actor component that implements the specified interface, or null if none found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_InterfaceFilter;
	static void NewProp_bResult_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms, Target), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_InterfaceFilter = { "InterfaceFilter", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms, InterfaceFilter), Z_Construct_UClass_UClass, Z_Construct_UClass_UInterface, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_bResult_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms*)Obj)->bResult = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms, ReturnValue), Z_Construct_UClass_UActorComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_InterfaceFilter,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_bResult,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetSingleComponentByInterface", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::MounteaDialogueSystemBFC_eventGetSingleComponentByInterface_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetSingleComponentByInterface)
{
	P_GET_OBJECT(AActor,Z_Param_Target);
	P_GET_OBJECT(UClass,Z_Param_InterfaceFilter);
	P_GET_UBOOL_REF(Z_Param_Out_bResult);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UActorComponent**)Z_Param__Result=UMounteaDialogueSystemBFC::GetSingleComponentByInterface(Z_Param_Target,Z_Param_InterfaceFilter,Z_Param_Out_bResult);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetSingleComponentByInterface

// Begin Class UMounteaDialogueSystemBFC Function GetSubtitlesSettings
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics
{
	struct MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms
	{
		const UObject* WorldContextObject;
		FUIRowID OptionalFilterClass;
		FSubtitlesSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the subtitles settings for the dialogue system.\n\x09 * \n\x09 * @param WorldContextObject The context within which the world exists.\n\x09 * @param OptionalFilterClass An optional filter class used to refine the subtitles settings.\n\x09 * @return Returns the settings related to dialogue subtitles, or default settings if none are found.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Subtitles Settings" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "settings, subtitles, font" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the subtitles settings for the dialogue system.\n\n@param WorldContextObject The context within which the world exists.\n@param OptionalFilterClass An optional filter class used to refine the subtitles settings.\n@return Returns the settings related to dialogue subtitles, or default settings if none are found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WorldContextObject_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalFilterClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionalFilterClass;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, WorldContextObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WorldContextObject_MetaData), NewProp_WorldContextObject_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass = { "OptionalFilterClass", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, OptionalFilterClass), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalFilterClass_MetaData), NewProp_OptionalFilterClass_MetaData) }; // 2459096273
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(0, nullptr) }; // 1339227483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_OptionalFilterClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "GetSubtitlesSettings", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::MounteaDialogueSystemBFC_eventGetSubtitlesSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execGetSubtitlesSettings)
{
	P_GET_OBJECT(UObject,Z_Param_WorldContextObject);
	P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_OptionalFilterClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubtitlesSettings*)Z_Param__Result=UMounteaDialogueSystemBFC::GetSubtitlesSettings(Z_Param_WorldContextObject,Z_Param_Out_OptionalFilterClass);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function GetSubtitlesSettings

// Begin Class UMounteaDialogueSystemBFC Function HasNodeBeenTraversed
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics
{
	struct MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms
	{
		const UMounteaDialogueGraphNode* Node;
		TScriptInterface<IMounteaDialogueParticipantInterface> Participant;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether selected Node for selected Participant has been already Traversed or not.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "node, traverse, open, active" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether selected Node for selected Participant has been already Traversed or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Participant_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Participant;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant = { "Participant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms, Participant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Participant_MetaData), NewProp_Participant_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_Participant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "HasNodeBeenTraversed", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::MounteaDialogueSystemBFC_eventHasNodeBeenTraversed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execHasNodeBeenTraversed)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_Participant);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::HasNodeBeenTraversed(Z_Param_Node,Z_Param_Out_Participant);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function HasNodeBeenTraversed

// Begin Class UMounteaDialogueSystemBFC Function HasNodeBeenTraversedV2
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics
{
	struct MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms
	{
		const UMounteaDialogueGraphNode* Node;
		const UMounteaDialogueContext* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether selected Node has been already Traversed or not.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "node, traverse, open, active" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether selected Node has been already Traversed or not." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Node;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms, Node), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "HasNodeBeenTraversedV2", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::MounteaDialogueSystemBFC_eventHasNodeBeenTraversedV2_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execHasNodeBeenTraversedV2)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode,Z_Param_Node);
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::HasNodeBeenTraversedV2(Z_Param_Node,Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function HasNodeBeenTraversedV2

// Begin Class UMounteaDialogueSystemBFC Function IsContextValid
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics
{
	struct MounteaDialogueSystemBFC_eventIsContextValid_Parms
	{
		const UMounteaDialogueContext* Context;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to validate given Dialogue Context.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Is Dialogue Context Valid" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "dialogue, null, validate, valid, check" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to validate given Dialogue Context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsContextValid_Parms, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventIsContextValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsContextValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_Context,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsContextValid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::MounteaDialogueSystemBFC_eventIsContextValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::MounteaDialogueSystemBFC_eventIsContextValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsContextValid)
{
	P_GET_OBJECT(UMounteaDialogueContext,Z_Param_Context);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsContextValid(Z_Param_Context);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function IsContextValid

// Begin Class UMounteaDialogueSystemBFC Function IsDialogueRowDataValid
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics
{
	struct MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms
	{
		FDialogueRowData Data;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether Dialogue Row Data is valid or not.\n\x09 * \n\x09 * @param Data\x09""Data to be validated.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Is Dialogue Data Valid" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "dialogue, check, valid, null" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether Dialogue Row Data is valid or not.\n\n@param Data  Data to be validated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Data;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms, Data), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Data_MetaData), NewProp_Data_MetaData) }; // 4030428912
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_Data,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsDialogueRowDataValid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowDataValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsDialogueRowDataValid)
{
	P_GET_STRUCT_REF(FDialogueRowData,Z_Param_Out_Data);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsDialogueRowDataValid(Z_Param_Out_Data);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function IsDialogueRowDataValid

// Begin Class UMounteaDialogueSystemBFC Function IsDialogueRowValid
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics
{
	struct MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms
	{
		FDialogueRow Row;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether Dialogue Row is valid or not.\n\x09 * \n\x09 * @param Row\x09Row to be validated.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Is Dialogue Row Valid" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "dialogue, check, valid, null" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether Dialogue Row is valid or not.\n\n@param Row   Row to be validated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Row_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Row;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row = { "Row", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms, Row), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Row_MetaData), NewProp_Row_MetaData) }; // 3048168484
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_Row,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsDialogueRowValid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::MounteaDialogueSystemBFC_eventIsDialogueRowValid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsDialogueRowValid)
{
	P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_Row);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsDialogueRowValid(Z_Param_Out_Row);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function IsDialogueRowValid

// Begin Class UMounteaDialogueSystemBFC Function IsEditor
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics
{
	struct MounteaDialogueSystemBFC_eventIsEditor_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventIsEditor_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventIsEditor_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "IsEditor", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::MounteaDialogueSystemBFC_eventIsEditor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::MounteaDialogueSystemBFC_eventIsEditor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execIsEditor)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::IsEditor();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function IsEditor

// Begin Class UMounteaDialogueSystemBFC Function NodesToGuids
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics
{
	struct MounteaDialogueSystemBFC_eventNodesToGuids_Parms
	{
		TArray<UMounteaDialogueGraphNode*> Nodes;
		TArray<FGuid> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Converts an array of dialogue nodes to their respective GUIDs.\n\x09 * \n\x09 * @param Nodes The array of dialogue graph nodes to be converted.\n\x09 * @return An array of GUIDs corresponding to the provided dialogue nodes.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "guid, node, convert, transform" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Converts an array of dialogue nodes to their respective GUIDs.\n\n@param Nodes The array of dialogue graph nodes to be converted.\n@return An array of GUIDs corresponding to the provided dialogue nodes." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Nodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Nodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_Nodes_Inner = { "Nodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_Nodes = { "Nodes", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventNodesToGuids_Parms, Nodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventNodesToGuids_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_Nodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_Nodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "NodesToGuids", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::MounteaDialogueSystemBFC_eventNodesToGuids_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::MounteaDialogueSystemBFC_eventNodesToGuids_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execNodesToGuids)
{
	P_GET_TARRAY(UMounteaDialogueGraphNode*,Z_Param_Nodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FGuid>*)Z_Param__Result=UMounteaDialogueSystemBFC::NodesToGuids(Z_Param_Nodes);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function NodesToGuids

// Begin Class UMounteaDialogueSystemBFC Function RemoveParticipants
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics
{
	struct MounteaDialogueSystemBFC_eventRemoveParticipants_Parms
	{
		AActor* WorldContextObject;
		TArray<TScriptInterface<IMounteaDialogueParticipantInterface> > NewParticipants;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes participants from the Dialogue Manager.\n\x09 * \n\x09 * @param WorldContextObject The context within which the world exists.\n\x09 * @param NewParticipants A list of dialogue participants to be removed.\n\x09 * @return Returns true if the participants were successfully removed, false otherwise.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Dialogue Manager" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "manager, dialogue, master, initialize" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes participants from the Dialogue Manager.\n\n@param WorldContextObject The context within which the world exists.\n@param NewParticipants A list of dialogue participants to be removed.\n@return Returns true if the participants were successfully removed, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContextObject;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewParticipants;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_WorldContextObject = { "WorldContextObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventRemoveParticipants_Parms, WorldContextObject), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_NewParticipants_Inner = { "NewParticipants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_NewParticipants = { "NewParticipants", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventRemoveParticipants_Parms, NewParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParticipants_MetaData), NewProp_NewParticipants_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemBFC_eventRemoveParticipants_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemBFC_eventRemoveParticipants_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_WorldContextObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_NewParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_NewParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "RemoveParticipants", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::MounteaDialogueSystemBFC_eventRemoveParticipants_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::MounteaDialogueSystemBFC_eventRemoveParticipants_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execRemoveParticipants)
{
	P_GET_OBJECT(AActor,Z_Param_WorldContextObject);
	P_GET_TARRAY_REF(TScriptInterface<IMounteaDialogueParticipantInterface>,Z_Param_Out_NewParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueSystemBFC::RemoveParticipants(Z_Param_WorldContextObject,Z_Param_Out_NewParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function RemoveParticipants

// Begin Class UMounteaDialogueSystemBFC Function SortNodes
struct Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics
{
	struct MounteaDialogueSystemBFC_eventSortNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> SortedNodes;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sorts given array of Dialogue Nodes based on their Execution Order.\n\x09 * \n\x09 * @param SortedNodes OUT Nodes array that will be sorted\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "sort,order,diaogue,child,nodes" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sorts given array of Dialogue Nodes based on their Execution Order.\n\n@param SortedNodes OUT Nodes array that will be sorted" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SortedNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_SortedNodes;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::NewProp_SortedNodes_Inner = { "SortedNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::NewProp_SortedNodes = { "SortedNodes", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemBFC_eventSortNodes_Parms, SortedNodes), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::NewProp_SortedNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::NewProp_SortedNodes,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemBFC, nullptr, "SortNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::MounteaDialogueSystemBFC_eventSortNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::MounteaDialogueSystemBFC_eventSortNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemBFC::execSortNodes)
{
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode*,Z_Param_Out_SortedNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueSystemBFC::SortNodes(Z_Param_Out_SortedNodes);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemBFC Function SortNodes

// Begin Class UMounteaDialogueSystemBFC
void UMounteaDialogueSystemBFC::StaticRegisterNativesUMounteaDialogueSystemBFC()
{
	UClass* Class = UMounteaDialogueSystemBFC::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddParticipants", &UMounteaDialogueSystemBFC::execAddParticipants },
		{ "DoesRowMatchParticipant", &UMounteaDialogueSystemBFC::execDoesRowMatchParticipant },
		{ "FindAudioComponentByName", &UMounteaDialogueSystemBFC::execFindAudioComponentByName },
		{ "FindAudioComponentByTag", &UMounteaDialogueSystemBFC::execFindAudioComponentByTag },
		{ "FindBestMatchingParticipant", &UMounteaDialogueSystemBFC::execFindBestMatchingParticipant },
		{ "FindDialogueParticipantInterface", &UMounteaDialogueSystemBFC::execFindDialogueParticipantInterface },
		{ "FindDialogueRow", &UMounteaDialogueSystemBFC::execFindDialogueRow },
		{ "FindNodeByGUID", &UMounteaDialogueSystemBFC::execFindNodeByGUID },
		{ "FindNodesByGUID", &UMounteaDialogueSystemBFC::execFindNodesByGUID },
		{ "GetActiveDialogueData", &UMounteaDialogueSystemBFC::execGetActiveDialogueData },
		{ "GetActiveRowExecutionMode", &UMounteaDialogueSystemBFC::execGetActiveRowExecutionMode },
		{ "GetAllowedChildNodes", &UMounteaDialogueSystemBFC::execGetAllowedChildNodes },
		{ "GetChildrenNodeFromIndex", &UMounteaDialogueSystemBFC::execGetChildrenNodeFromIndex },
		{ "GetDefaultDialogueWidget", &UMounteaDialogueSystemBFC::execGetDefaultDialogueWidget },
		{ "GetDialogueManager", &UMounteaDialogueSystemBFC::execGetDialogueManager },
		{ "GetDialogueRow", &UMounteaDialogueSystemBFC::execGetDialogueRow },
		{ "GetDialogueSystemSettings", &UMounteaDialogueSystemBFC::execGetDialogueSystemSettings },
		{ "GetFirstChildNode", &UMounteaDialogueSystemBFC::execGetFirstChildNode },
		{ "GetObjectByClass", &UMounteaDialogueSystemBFC::execGetObjectByClass },
		{ "GetPlayerDialogueParticipant", &UMounteaDialogueSystemBFC::execGetPlayerDialogueParticipant },
		{ "GetRowDuration", &UMounteaDialogueSystemBFC::execGetRowDuration },
		{ "GetSingleComponentByInterface", &UMounteaDialogueSystemBFC::execGetSingleComponentByInterface },
		{ "GetSubtitlesSettings", &UMounteaDialogueSystemBFC::execGetSubtitlesSettings },
		{ "HasNodeBeenTraversed", &UMounteaDialogueSystemBFC::execHasNodeBeenTraversed },
		{ "HasNodeBeenTraversedV2", &UMounteaDialogueSystemBFC::execHasNodeBeenTraversedV2 },
		{ "IsContextValid", &UMounteaDialogueSystemBFC::execIsContextValid },
		{ "IsDialogueRowDataValid", &UMounteaDialogueSystemBFC::execIsDialogueRowDataValid },
		{ "IsDialogueRowValid", &UMounteaDialogueSystemBFC::execIsDialogueRowValid },
		{ "IsEditor", &UMounteaDialogueSystemBFC::execIsEditor },
		{ "NodesToGuids", &UMounteaDialogueSystemBFC::execNodesToGuids },
		{ "RemoveParticipants", &UMounteaDialogueSystemBFC::execRemoveParticipants },
		{ "SortNodes", &UMounteaDialogueSystemBFC::execSortNodes },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemBFC);
UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC_NoRegister()
{
	return UMounteaDialogueSystemBFC::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Runtime helper functions library for Mountea Dialogue System.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Blueprint Function Library" },
		{ "IncludePath", "Helpers/MounteaDialogueSystemBFC.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueSystemBFC.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Runtime helper functions library for Mountea Dialogue System." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_AddParticipants, "AddParticipants" }, // 3594441582
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_DoesRowMatchParticipant, "DoesRowMatchParticipant" }, // 617125380
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByName, "FindAudioComponentByName" }, // 3124041229
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindAudioComponentByTag, "FindAudioComponentByTag" }, // 2706552587
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindBestMatchingParticipant, "FindBestMatchingParticipant" }, // 1945789812
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueParticipantInterface, "FindDialogueParticipantInterface" }, // 862629409
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindDialogueRow, "FindDialogueRow" }, // 1261004390
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodeByGUID, "FindNodeByGUID" }, // 2397987526
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_FindNodesByGUID, "FindNodesByGUID" }, // 530329191
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveDialogueData, "GetActiveDialogueData" }, // 4012023424
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetActiveRowExecutionMode, "GetActiveRowExecutionMode" }, // 824795831
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetAllowedChildNodes, "GetAllowedChildNodes" }, // 218295141
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetChildrenNodeFromIndex, "GetChildrenNodeFromIndex" }, // 2398881964
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDefaultDialogueWidget, "GetDefaultDialogueWidget" }, // 3174878709
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueManager, "GetDialogueManager" }, // 331789795
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueRow, "GetDialogueRow" }, // 2436632748
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetDialogueSystemSettings, "GetDialogueSystemSettings" }, // 1089746391
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetFirstChildNode, "GetFirstChildNode" }, // 1641719264
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetObjectByClass, "GetObjectByClass" }, // 3688011911
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetPlayerDialogueParticipant, "GetPlayerDialogueParticipant" }, // 2631894548
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetRowDuration, "GetRowDuration" }, // 1513926466
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSingleComponentByInterface, "GetSingleComponentByInterface" }, // 3463074985
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_GetSubtitlesSettings, "GetSubtitlesSettings" }, // 2605028381
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversed, "HasNodeBeenTraversed" }, // 4216593903
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_HasNodeBeenTraversedV2, "HasNodeBeenTraversedV2" }, // 2854805729
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsContextValid, "IsContextValid" }, // 3390538579
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowDataValid, "IsDialogueRowDataValid" }, // 3990935941
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsDialogueRowValid, "IsDialogueRowValid" }, // 710117802
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_IsEditor, "IsEditor" }, // 688479645
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_NodesToGuids, "NodesToGuids" }, // 2901956343
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_RemoveParticipants, "RemoveParticipants" }, // 2790831967
		{ &Z_Construct_UFunction_UMounteaDialogueSystemBFC_SortNodes, "SortNodes" }, // 3167665056
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemBFC>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::ClassParams = {
	&UMounteaDialogueSystemBFC::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSystemBFC()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemBFC_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSystemBFC.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSystemBFC>()
{
	return UMounteaDialogueSystemBFC::StaticClass();
}
UMounteaDialogueSystemBFC::UMounteaDialogueSystemBFC(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemBFC);
UMounteaDialogueSystemBFC::~UMounteaDialogueSystemBFC() {}
// End Class UMounteaDialogueSystemBFC

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemBFC, UMounteaDialogueSystemBFC::StaticClass, TEXT("UMounteaDialogueSystemBFC"), &Z_Registration_Info_UClass_UMounteaDialogueSystemBFC, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemBFC), 1493568927U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_1878269974(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueSystemBFC_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
