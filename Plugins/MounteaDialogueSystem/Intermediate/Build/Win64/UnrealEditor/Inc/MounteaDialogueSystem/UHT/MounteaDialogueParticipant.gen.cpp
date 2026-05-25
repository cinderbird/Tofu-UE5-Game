// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Components/MounteaDialogueParticipant.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueParticipant() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
ENGINE_API UClass* Z_Construct_UClass_UAudioComponent_NoRegister();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipant();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipant_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueParticipant Function FindAudioComponent
struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics
{
	struct MounteaDialogueParticipant_eventFindAudioComponent_Parms
	{
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds an audio component using FindAudioComponentByName or FindAudioComponentByTag.\n\x09 * \xe2\x9d\x97 Returns null if 'AudioComponentIdentification' is invalid!\n\x09 * \n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds an audio component using FindAudioComponentByName or FindAudioComponentByTag.\n\xe2\x9d\x97 Returns null if 'AudioComponentIdentification' is invalid!\n\n@return The found audio component, or nullptr if not found." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponent_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::MounteaDialogueParticipant_eventFindAudioComponent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::MounteaDialogueParticipant_eventFindAudioComponent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponent)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponent();
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function FindAudioComponent

// Begin Class UMounteaDialogueParticipant Function FindAudioComponentByName
struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics
{
	struct MounteaDialogueParticipant_eventFindAudioComponentByName_Parms
	{
		FName Arg;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds an audio component by the specified Name.\n\x09 * \n\x09 * @param Arg The Name to search for.\n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds an audio component by the specified Name.\n\n@param Arg The Name to search for.\n@return The found audio component, or nullptr if not found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByName_Parms, Arg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg_MetaData), NewProp_Arg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByName_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_Arg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponentByName", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::MounteaDialogueParticipant_eventFindAudioComponentByName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::MounteaDialogueParticipant_eventFindAudioComponentByName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponentByName)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponentByName(Z_Param_Out_Arg);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function FindAudioComponentByName

// Begin Class UMounteaDialogueParticipant Function FindAudioComponentByTag
struct Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics
{
	struct MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms
	{
		FName Arg;
		UAudioComponent* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Finds an audio component by the specified tag.\n\x09 * \n\x09 * @param Arg The tag to search for.\n\x09 * @return The found audio component, or nullptr if not found.\n \x09*/" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Finds an audio component by the specified tag.\n\n@param Arg The tag to search for.\n@return The found audio component, or nullptr if not found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Arg_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_Arg;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg = { "Arg", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms, Arg), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Arg_MetaData), NewProp_Arg_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms, ReturnValue), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_Arg,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "FindAudioComponentByTag", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::MounteaDialogueParticipant_eventFindAudioComponentByTag_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execFindAudioComponentByTag)
{
	P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_Arg);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UAudioComponent**)Z_Param__Result=P_THIS->FindAudioComponentByTag(Z_Param_Out_Arg);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function FindAudioComponentByTag

// Begin Class UMounteaDialogueParticipant Function OnDialogueGraphChangedEvent
struct MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms
{
	UMounteaDialogueGraph* NewDialogueGraph;
};
static const FName NAME_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent = FName(TEXT("OnDialogueGraphChangedEvent"));
void UMounteaDialogueParticipant::OnDialogueGraphChangedEvent(UMounteaDialogueGraph* NewDialogueGraph)
{
	MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms Parms;
	Parms.NewDialogueGraph=NewDialogueGraph;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Dialogue Graph has changed. \n\x09 * @param NewDialogueGraph\x09Value of the new Dialogue Graph. Can be null!\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Delegate" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Dialogue Graph has changed.\n@param NewDialogueGraph      Value of the new Dialogue Graph. Can be null!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::NewProp_NewDialogueGraph = { "NewDialogueGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms, NewDialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::NewProp_NewDialogueGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "OnDialogueGraphChangedEvent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::PropPointers), sizeof(MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipant_eventOnDialogueGraphChangedEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMounteaDialogueParticipant Function OnDialogueGraphChangedEvent

// Begin Class UMounteaDialogueParticipant Function OnRep_DialogueGraph
struct Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "OnRep_DialogueGraph", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execOnRep_DialogueGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_DialogueGraph();
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function OnRep_DialogueGraph

// Begin Class UMounteaDialogueParticipant Function OnRep_ParticipantState
struct Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "OnRep_ParticipantState", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execOnRep_ParticipantState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnRep_ParticipantState();
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function OnRep_ParticipantState

// Begin Class UMounteaDialogueParticipant Function SetAudioComponent_Server
struct MounteaDialogueParticipant_eventSetAudioComponent_Server_Parms
{
	UAudioComponent* NewAudioComponent;
};
static const FName NAME_UMounteaDialogueParticipant_SetAudioComponent_Server = FName(TEXT("SetAudioComponent_Server"));
void UMounteaDialogueParticipant::SetAudioComponent_Server(UAudioComponent* NewAudioComponent)
{
	MounteaDialogueParticipant_eventSetAudioComponent_Server_Parms Parms;
	Parms.NewAudioComponent=NewAudioComponent;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueParticipant_SetAudioComponent_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewAudioComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewAudioComponent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::NewProp_NewAudioComponent = { "NewAudioComponent", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetAudioComponent_Server_Parms, NewAudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewAudioComponent_MetaData), NewProp_NewAudioComponent_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::NewProp_NewAudioComponent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetAudioComponent_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::PropPointers), sizeof(MounteaDialogueParticipant_eventSetAudioComponent_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipant_eventSetAudioComponent_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetAudioComponent_Server)
{
	P_GET_OBJECT(UAudioComponent,Z_Param_NewAudioComponent);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetAudioComponent_Server_Implementation(Z_Param_NewAudioComponent);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function SetAudioComponent_Server

// Begin Class UMounteaDialogueParticipant Function SetDefaultParticipantState_Server
struct MounteaDialogueParticipant_eventSetDefaultParticipantState_Server_Parms
{
	EDialogueParticipantState NewState;
};
static const FName NAME_UMounteaDialogueParticipant_SetDefaultParticipantState_Server = FName(TEXT("SetDefaultParticipantState_Server"));
void UMounteaDialogueParticipant::SetDefaultParticipantState_Server(const EDialogueParticipantState NewState)
{
	MounteaDialogueParticipant_eventSetDefaultParticipantState_Server_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueParticipant_SetDefaultParticipantState_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetDefaultParticipantState_Server_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetDefaultParticipantState_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::PropPointers), sizeof(MounteaDialogueParticipant_eventSetDefaultParticipantState_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipant_eventSetDefaultParticipantState_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetDefaultParticipantState_Server)
{
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDefaultParticipantState_Server_Implementation(EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function SetDefaultParticipantState_Server

// Begin Class UMounteaDialogueParticipant Function SetDialogueGraph_Server
struct MounteaDialogueParticipant_eventSetDialogueGraph_Server_Parms
{
	UMounteaDialogueGraph* NewGraph;
};
static const FName NAME_UMounteaDialogueParticipant_SetDialogueGraph_Server = FName(TEXT("SetDialogueGraph_Server"));
void UMounteaDialogueParticipant::SetDialogueGraph_Server(UMounteaDialogueGraph* NewGraph)
{
	MounteaDialogueParticipant_eventSetDialogueGraph_Server_Parms Parms;
	Parms.NewGraph=NewGraph;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueParticipant_SetDialogueGraph_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewGraph;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::NewProp_NewGraph = { "NewGraph", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetDialogueGraph_Server_Parms, NewGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::NewProp_NewGraph,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetDialogueGraph_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::PropPointers), sizeof(MounteaDialogueParticipant_eventSetDialogueGraph_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipant_eventSetDialogueGraph_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetDialogueGraph_Server)
{
	P_GET_OBJECT(UMounteaDialogueGraph,Z_Param_NewGraph);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueGraph_Server_Implementation(Z_Param_NewGraph);
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function SetDialogueGraph_Server

// Begin Class UMounteaDialogueParticipant Function SetParticipantState_Server
struct MounteaDialogueParticipant_eventSetParticipantState_Server_Parms
{
	EDialogueParticipantState NewState;
};
static const FName NAME_UMounteaDialogueParticipant_SetParticipantState_Server = FName(TEXT("SetParticipantState_Server"));
void UMounteaDialogueParticipant::SetParticipantState_Server(const EDialogueParticipantState NewState)
{
	MounteaDialogueParticipant_eventSetParticipantState_Server_Parms Parms;
	Parms.NewState=NewState;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueParticipant_SetParticipantState_Server);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
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
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueParticipant_eventSetParticipantState_Server_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 2723243031
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueParticipant, nullptr, "SetParticipantState_Server", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::PropPointers), sizeof(MounteaDialogueParticipant_eventSetParticipantState_Server_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00280CC0, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueParticipant_eventSetParticipantState_Server_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueParticipant::execSetParticipantState_Server)
{
	P_GET_ENUM(EDialogueParticipantState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParticipantState_Server_Implementation(EDialogueParticipantState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueParticipant Function SetParticipantState_Server

// Begin Class UMounteaDialogueParticipant
void UMounteaDialogueParticipant::StaticRegisterNativesUMounteaDialogueParticipant()
{
	UClass* Class = UMounteaDialogueParticipant::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindAudioComponent", &UMounteaDialogueParticipant::execFindAudioComponent },
		{ "FindAudioComponentByName", &UMounteaDialogueParticipant::execFindAudioComponentByName },
		{ "FindAudioComponentByTag", &UMounteaDialogueParticipant::execFindAudioComponentByTag },
		{ "OnRep_DialogueGraph", &UMounteaDialogueParticipant::execOnRep_DialogueGraph },
		{ "OnRep_ParticipantState", &UMounteaDialogueParticipant::execOnRep_ParticipantState },
		{ "SetAudioComponent_Server", &UMounteaDialogueParticipant::execSetAudioComponent_Server },
		{ "SetDefaultParticipantState_Server", &UMounteaDialogueParticipant::execSetDefaultParticipantState_Server },
		{ "SetDialogueGraph_Server", &UMounteaDialogueParticipant::execSetDialogueGraph_Server },
		{ "SetParticipantState_Server", &UMounteaDialogueParticipant::execSetParticipantState_Server },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueParticipant);
UClass* Z_Construct_UClass_UMounteaDialogueParticipant_NoRegister()
{
	return UMounteaDialogueParticipant::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueParticipant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Participant Component.\n *\n * \xe2\x9d\x94 This Component allows any Actor to be Dialogue Participant.\n * \xe2\x9d\x97 Requires Dialogue Graph to work.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Participant" },
		{ "HideCategories", "Collision AssetUserData Cooking Activation Rendering Sockets" },
		{ "IncludePath", "Components/MounteaDialogueParticipant.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Participant Component.\n\n\xe2\x9d\x94 This Component allows any Actor to be Dialogue Participant.\n\xe2\x9d\x97 Requires Dialogue Graph to work." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraph_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mountea Dialogue Graph.\n\x09 * \xe2\x9d\x97 In order to start Dialogue, this value must be filled.\n\x09 * \xe2\x9d\x94 Can be updated using SetDialogueGraph function.\n\x09 *\n\x09 * Set Graph is allowed only outside active Dialogue.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Graph.\n\xe2\x9d\x97 In order to start Dialogue, this value must be filled.\n\xe2\x9d\x94 Can be updated using SetDialogueGraph function.\n\nSet Graph is allowed only outside active Dialogue." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DefaultParticipantState_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mountea Dialogue Participant Default State.\n\x09 * \xe2\x9d\x94 Is used in BeginPlay to set ParticipantState.\n\x09 * \xe2\x9d\x94 Is used as fallback value once Dialogue Ends.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Participant Default State.\n\xe2\x9d\x94 Is used in BeginPlay to set ParticipantState.\n\xe2\x9d\x94 Is used as fallback value once Dialogue Ends." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantState_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09* State of the Dialogue Participant.\n\x09* \xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\x09* \xe2\x9d\x94 Can be updated using SetDialogueParticipantState function.\n\x09*/" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "State of the Dialogue Participant.\n\xe2\x9d\x97 In order to start Dialogue, this value must not be Disabled.\n\xe2\x9d\x94 Can be updated using SetDialogueParticipantState function." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponentIdentification_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Provides simple way to pass down Audio Component.\n\x09 * Consumes:\n\x09 * * Actor Tag\n\x09 * * Name\n\x09 *\n\x09 * Tries to find 'UAudioComponent' by both methods in the Owner (Parent) Actor.\n\x09 * If any found, it will be set as AudioComponent.\n\x09 *\n\x09 * This is user friendly way to avoid node 'SetAudioComponent'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Provides simple way to pass down Audio Component.\nConsumes:\n* Actor Tag\n* Name\n\nTries to find 'UAudioComponent' by both methods in the Owner (Parent) Actor.\nIf any found, it will be set as AudioComponent.\n\nThis is user friendly way to avoid node 'SetAudioComponent'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AudioComponent_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Audio Component for Dialogue Participant Voice.\n\x09 * \xe2\x9d\x97 Is populated by FindAudioComponent is called.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Audio Component for Dialogue Participant Voice.\n\xe2\x9d\x97 Is populated by FindAudioComponent is called." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_StartingNode_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional Starting Node.\n\x09 *\n\x09 * If this value is selected, this Participant's Dialogue will start from Selected Node, if valid!\n\x09 * Otherwise it will start from Start Node of the Graph.\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Starting Node.\n\nIf this value is selected, this Participant's Dialogue will start from Selected Node, if valid!\nOtherwise it will start from Start Node of the Graph." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraversedPath_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Contains mapped list of Traversed Nodes by GUIDs.\n\x09 * To update Performance, this Path is updated only once Dialogue has finished. Temporary Path is stored in Dialogue Context.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Contains mapped list of Traversed Nodes by GUIDs.\nTo update Performance, this Path is updated only once Dialogue has finished. Temporary Path is stored in Dialogue Context." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantTag_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gameplay tag identifying this Participant.\n\x09 * Servers a purpose of being unique ID for Dialogues with multiple Participants.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gameplay tag identifying this Participant.\nServers a purpose of being unique ID for Dialogues with multiple Participants." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "AllowPrivateAccess", "" },
		{ "Category", "Mountea|Dialogue|Participant" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueGraphChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Dialogue Graph has changed.\n\x09 * Other events can be assigned to this one.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Dialogue Graph has changed.\nOther events can be assigned to this one." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueParticipantStateChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Participant State has changed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Participant State has changed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnAudioComponentChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Audio Component has changed.\n\x09 * \xe2\x9d\x97 Output AudioComponent could be Null\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Audio Component has changed.\n\xe2\x9d\x97 Output AudioComponent could be Null" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnStartingNodeSaved_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Starting Node has saved.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Starting Node has saved." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantCommandRequested_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic event that will usually be called from Decorator.\n\x09 * Serves purpose of passing Command and Payload from Decorator to Participant (and its owning Actor).\n\x09 *\n\x09 * Useful to retrieve data like Animations etc. from Decorators.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic event that will usually be called from Decorator.\nServes purpose of passing Command and Payload from Decorator to Participant (and its owning Actor).\n\nUseful to retrieve data like Animations etc. from Decorators." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueUpdated_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called once Dialogue updates.\n\x09 * Manager calls to Every participant. This serves as notification rather than passing any data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called once Dialogue updates.\nManager calls to Every participant. This serves as notification rather than passing any data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantTickEvent_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Participant" },
		{ "ModuleRelativePath", "Public/Components/MounteaDialogueParticipant.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraph;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DefaultParticipantState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DefaultParticipantState;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ParticipantState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ParticipantState;
	static const UECodeGen_Private::FNamePropertyParams NewProp_AudioComponentIdentification;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_AudioComponent;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_StartingNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TraversedPath_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_TraversedPath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantTag;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueGraphChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueParticipantStateChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnAudioComponentChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnStartingNodeSaved;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ParticipantCommandRequested;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueUpdated;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_ParticipantTickEvent;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponent, "FindAudioComponent" }, // 3666785714
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByName, "FindAudioComponentByName" }, // 346535122
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_FindAudioComponentByTag, "FindAudioComponentByTag" }, // 3383222345
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_OnDialogueGraphChangedEvent, "OnDialogueGraphChangedEvent" }, // 3747783970
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_DialogueGraph, "OnRep_DialogueGraph" }, // 3534316445
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_OnRep_ParticipantState, "OnRep_ParticipantState" }, // 1122499799
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetAudioComponent_Server, "SetAudioComponent_Server" }, // 3628640403
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetDefaultParticipantState_Server, "SetDefaultParticipantState_Server" }, // 2626946664
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetDialogueGraph_Server, "SetDialogueGraph_Server" }, // 4196557077
		{ &Z_Construct_UFunction_UMounteaDialogueParticipant_SetParticipantState_Server, "SetParticipantState_Server" }, // 2694454168
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueParticipant>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph = { "DialogueGraph", "OnRep_DialogueGraph", (EPropertyFlags)0x0124080101000021, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, DialogueGraph), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueGraph_MetaData), NewProp_DialogueGraph_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState = { "DefaultParticipantState", nullptr, (EPropertyFlags)0x0020080001000021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, DefaultParticipantState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DefaultParticipantState_MetaData), NewProp_DefaultParticipantState_MetaData) }; // 2723243031
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState = { "ParticipantState", "OnRep_ParticipantState", (EPropertyFlags)0x0020080100022021, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, ParticipantState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantState_MetaData), NewProp_ParticipantState_MetaData) }; // 2723243031
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification = { "AudioComponentIdentification", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, AudioComponentIdentification), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponentIdentification_MetaData), NewProp_AudioComponentIdentification_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent = { "AudioComponent", nullptr, (EPropertyFlags)0x01240c00010a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, AudioComponent), Z_Construct_UClass_UAudioComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AudioComponent_MetaData), NewProp_AudioComponent_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode = { "StartingNode", nullptr, (EPropertyFlags)0x01240c0001020021, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, StartingNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_StartingNode_MetaData), NewProp_StartingNode_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_Inner = { "TraversedPath", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueTraversePath, METADATA_PARAMS(0, nullptr) }; // 2158243501
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath = { "TraversedPath", nullptr, (EPropertyFlags)0x00200c0001020021, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, TraversedPath), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraversedPath_MetaData), NewProp_TraversedPath_MetaData) }; // 2158243501
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantTag = { "ParticipantTag", nullptr, (EPropertyFlags)0x0020080001000021, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, ParticipantTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantTag_MetaData), NewProp_ParticipantTag_MetaData) }; // 1298103297
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x0044000000002014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, DialogueManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged = { "OnDialogueGraphChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, OnDialogueGraphChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueGraphChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueGraphChanged_MetaData), NewProp_OnDialogueGraphChanged_MetaData) }; // 1271534895
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged = { "OnDialogueParticipantStateChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, OnDialogueParticipantStateChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantStateChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueParticipantStateChanged_MetaData), NewProp_OnDialogueParticipantStateChanged_MetaData) }; // 3007767589
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged = { "OnAudioComponentChanged", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, OnAudioComponentChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueParticipantAudioComponentChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnAudioComponentChanged_MetaData), NewProp_OnAudioComponentChanged_MetaData) }; // 474059551
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved = { "OnStartingNodeSaved", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, OnStartingNodeSaved), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantStartingNodeSaved__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnStartingNodeSaved_MetaData), NewProp_OnStartingNodeSaved_MetaData) }; // 1630973243
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantCommandRequested = { "ParticipantCommandRequested", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, ParticipantCommandRequested), Z_Construct_UDelegateFunction_MounteaDialogueSystem_ParticipantCommandRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantCommandRequested_MetaData), NewProp_ParticipantCommandRequested_MetaData) }; // 1282903924
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueUpdated = { "OnDialogueUpdated", nullptr, (EPropertyFlags)0x0020080010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, OnDialogueUpdated), Z_Construct_UDelegateFunction_MounteaDialogueSystem_DialogueUpdated__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueUpdated_MetaData), NewProp_OnDialogueUpdated_MetaData) }; // 1502354343
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantTickEvent = { "ParticipantTickEvent", nullptr, (EPropertyFlags)0x0010000010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueParticipant, ParticipantTickEvent), Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantTickEvent_MetaData), NewProp_ParticipantTickEvent_MetaData) }; // 364774892
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueGraph,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DefaultParticipantState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponentIdentification,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_AudioComponent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_StartingNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_TraversedPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantTag,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_DialogueManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueGraphChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueParticipantStateChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnAudioComponentChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnStartingNodeSaved,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantCommandRequested,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_OnDialogueUpdated,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueParticipant_Statics::NewProp_ParticipantTickEvent,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueParticipant_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UActorComponent,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueParticipant, IMounteaDialogueParticipantInterface), false },  // 3129146378
	{ Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueParticipant, IMounteaDialogueTickableObject), false },  // 2602973918
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueParticipant_Statics::ClassParams = {
	&UMounteaDialogueParticipant::StaticClass,
	"Engine",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueParticipant_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueParticipant_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueParticipant()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton, Z_Construct_UClass_UMounteaDialogueParticipant_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueParticipant.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueParticipant>()
{
	return UMounteaDialogueParticipant::StaticClass();
}
void UMounteaDialogueParticipant::ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const
{
	static const FName Name_DialogueGraph(TEXT("DialogueGraph"));
	static const FName Name_DefaultParticipantState(TEXT("DefaultParticipantState"));
	static const FName Name_ParticipantState(TEXT("ParticipantState"));
	static const FName Name_StartingNode(TEXT("StartingNode"));
	static const FName Name_TraversedPath(TEXT("TraversedPath"));
	static const FName Name_ParticipantTag(TEXT("ParticipantTag"));
	const bool bIsValid = true
		&& Name_DialogueGraph == ClassReps[(int32)ENetFields_Private::DialogueGraph].Property->GetFName()
		&& Name_DefaultParticipantState == ClassReps[(int32)ENetFields_Private::DefaultParticipantState].Property->GetFName()
		&& Name_ParticipantState == ClassReps[(int32)ENetFields_Private::ParticipantState].Property->GetFName()
		&& Name_StartingNode == ClassReps[(int32)ENetFields_Private::StartingNode].Property->GetFName()
		&& Name_TraversedPath == ClassReps[(int32)ENetFields_Private::TraversedPath].Property->GetFName()
		&& Name_ParticipantTag == ClassReps[(int32)ENetFields_Private::ParticipantTag].Property->GetFName();
	checkf(bIsValid, TEXT("UHT Generated Rep Indices do not match runtime populated Rep Indices for properties in UMounteaDialogueParticipant"));
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueParticipant);
UMounteaDialogueParticipant::~UMounteaDialogueParticipant() {}
// End Class UMounteaDialogueParticipant

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueParticipant, UMounteaDialogueParticipant::StaticClass, TEXT("UMounteaDialogueParticipant"), &Z_Registration_Info_UClass_UMounteaDialogueParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueParticipant), 1186957941U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_3782057446(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
