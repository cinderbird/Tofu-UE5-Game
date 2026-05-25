// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueManagerStatics.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueManagerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueManagerStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerStatics();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerStatics_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipants();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueManagerStatics Function AddDialogueUIObject
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics
{
	struct MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		UObject* NewDialogueObject;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a single dialogue UI object to the manager.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NewDialogueObject The object to add.\n\x09 * @return True if the object was successfully added, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a single dialogue UI object to the manager.\n\n@param Target        Dialogue Manager interface.\n@param NewDialogueObject The object to add.\n@return True if the object was successfully added, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObject;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_NewDialogueObject = { "NewDialogueObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms, NewDialogueObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_NewDialogueObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "AddDialogueUIObject", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::MounteaDialogueManagerStatics_eventAddDialogueUIObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execAddDialogueUIObject)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UObject,Z_Param_NewDialogueObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::AddDialogueUIObject(Z_Param_Out_Target,Z_Param_NewDialogueObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function AddDialogueUIObject

// Begin Class UMounteaDialogueManagerStatics Function AddDialogueUIObjects
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics
{
	struct MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		TArray<UObject*> NewDialogueObjects;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds an array of dialogue UI objects to the manager.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NewDialogueObjects Array of objects to add.\n\x09 * @return Number of objects successfully added.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds an array of dialogue UI objects to the manager.\n\n@param Target        Dialogue Manager interface.\n@param NewDialogueObjects Array of objects to add.\n@return Number of objects successfully added." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueObjects;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms, NewDialogueObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueObjects_MetaData), NewProp_NewDialogueObjects_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_NewDialogueObjects,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "AddDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventAddDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execAddDialogueUIObjects)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_NewDialogueObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::AddDialogueUIObjects(Z_Param_Out_Target,Z_Param_Out_NewDialogueObjects);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function AddDialogueUIObjects

// Begin Class UMounteaDialogueManagerStatics Function CanStartDialogue
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics
{
	struct MounteaDialogueManagerStatics_eventCanStartDialogue_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "CustomTag", "MounteaK2Validate" },
		{ "Keywords", "UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventCanStartDialogue_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventCanStartDialogue_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventCanStartDialogue_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "CanStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::MounteaDialogueManagerStatics_eventCanStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::MounteaDialogueManagerStatics_eventCanStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execCanStartDialogue)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::CanStartDialogue(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function CanStartDialogue

// Begin Class UMounteaDialogueManagerStatics Function CloseDialogueUI
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics
{
	struct MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Close Dialogue UI.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return\x09\x09\x09true if UI can be removed from screen, false if cannot\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "close,exit,stop,widget" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Close Dialogue UI.\n\n@param Target        Dialogue Manager interface.\n@return                      true if UI can be removed from screen, false if cannot" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "CloseDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::MounteaDialogueManagerStatics_eventCloseDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execCloseDialogueUI)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::CloseDialogueUI(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function CloseDialogueUI

// Begin Class UMounteaDialogueManagerStatics Function CreateDialogueUI
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics
{
	struct MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		FString Message;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Create Dialogue UI.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param Message\x09InMessage to be populated with error message explaining why returns false\n\x09 * @return\x09\x09\x09true if UI can be added to screen, false if cannot\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "show,widget" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Create Dialogue UI.\n\n@param Target        Dialogue Manager interface.\n@param Message       InMessage to be populated with error message explaining why returns false\n@return                      true if UI can be added to screen, false if cannot" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms, Message), METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "CreateDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::MounteaDialogueManagerStatics_eventCreateDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execCreateDialogueUI)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::CreateDialogueUI(Z_Param_Out_Target,Z_Param_Out_Message);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function CreateDialogueUI

// Begin Class UMounteaDialogueManagerStatics Function DialogueRowProcessed
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics
{
	struct MounteaDialogueManagerStatics_eventDialogueRowProcessed_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Function responsible for cleanup once Dialogue Row is finished.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Function responsible for cleanup once Dialogue Row is finished.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventDialogueRowProcessed_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "DialogueRowProcessed", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::MounteaDialogueManagerStatics_eventDialogueRowProcessed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::MounteaDialogueManagerStatics_eventDialogueRowProcessed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execDialogueRowProcessed)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::DialogueRowProcessed(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function DialogueRowProcessed

// Begin Class UMounteaDialogueManagerStatics Function ExecuteWidgetCommand
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics
{
	struct MounteaDialogueManagerStatics_eventExecuteWidgetCommand_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Executes a specified command on a dialogue UI widget.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param Command\x09""A string representing the command to be executed.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "UI,process" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes a specified command on a dialogue UI widget.\n\n@param Target        Dialogue Manager interface.\n@param Command       A string representing the command to be executed." },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventExecuteWidgetCommand_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventExecuteWidgetCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "ExecuteWidgetCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::MounteaDialogueManagerStatics_eventExecuteWidgetCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::MounteaDialogueManagerStatics_eventExecuteWidgetCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execExecuteWidgetCommand)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::ExecuteWidgetCommand(Z_Param_Out_Target,Z_Param_Command);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function ExecuteWidgetCommand

// Begin Class UMounteaDialogueManagerStatics Function GetDefaultDialogueManagerState
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDefaultDialogueManagerState_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		EDialogueManagerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Default Dialogue Manager State.\n\x09 * Default Dialogue Manager State sets Dialogue Manager state upon BeginPlay and is used as fallback once Dialogue ends.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return ManagerState\x09""Default Manager state value\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Default Dialogue Manager State.\nDefault Dialogue Manager State sets Dialogue Manager state upon BeginPlay and is used as fallback once Dialogue ends.\n\n@param Target        Dialogue Manager interface.\n@return ManagerState Default Manager state value" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDefaultDialogueManagerState_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDefaultDialogueManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(0, nullptr) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDefaultDialogueManagerState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::MounteaDialogueManagerStatics_eventGetDefaultDialogueManagerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::MounteaDialogueManagerStatics_eventGetDefaultDialogueManagerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDefaultDialogueManagerState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueManagerState*)Z_Param__Result=UMounteaDialogueManagerStatics::GetDefaultDialogueManagerState(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDefaultDialogueManagerState

// Begin Class UMounteaDialogueManagerStatics Function GetDialogueContext
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDialogueContext_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		UMounteaDialogueContext* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Dialogue Context.\n\x09 * \n\x09 * \xe2\x9d\x97 Could be null\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return DialogueContext\x09""Dialogue Context is transient data holder for current dialogue instance.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Dialogue Context.\n\n\xe2\x9d\x97 Could be null\n@param Target        Dialogue Manager interface.\n@return DialogueContext      Dialogue Context is transient data holder for current dialogue instance." },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueContext_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueContext_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDialogueContext", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::MounteaDialogueManagerStatics_eventGetDialogueContext_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::MounteaDialogueManagerStatics_eventGetDialogueContext_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDialogueContext)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueContext**)Z_Param__Result=UMounteaDialogueManagerStatics::GetDialogueContext(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDialogueContext

// Begin Class UMounteaDialogueManagerStatics Function GetDialogueManagerType
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDialogueManagerType_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		EDialogueManagerType ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueManagerType_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueManagerType_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType, METADATA_PARAMS(0, nullptr) }; // 2228663124
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDialogueManagerType", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::MounteaDialogueManagerStatics_eventGetDialogueManagerType_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::MounteaDialogueManagerStatics_eventGetDialogueManagerType_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDialogueManagerType)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueManagerType*)Z_Param__Result=UMounteaDialogueManagerStatics::GetDialogueManagerType(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDialogueManagerType

// Begin Class UMounteaDialogueManagerStatics Function GetDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDialogueWidget_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the widget used to display the current dialogue.\n\x09 * \n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return The widget used to display the current dialogue.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the widget used to display the current dialogue.\n\n@param Target        Dialogue Manager interface.\n@return The widget used to display the current dialogue." },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidget_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDialogueWidget)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UMounteaDialogueManagerStatics::GetDialogueWidget(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDialogueWidget

// Begin Class UMounteaDialogueManagerStatics Function GetDialogueWidgetClass
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDialogueWidgetClass_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the widget class used to display Dialogue UI.\n\x09 * \n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return The widget class used to display Dialogue UI.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the widget class used to display Dialogue UI.\n\n@param Target        Dialogue Manager interface.\n@return The widget class used to display Dialogue UI." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidgetClass_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidgetClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDialogueWidgetClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidgetClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidgetClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDialogueWidgetClass)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=UMounteaDialogueManagerStatics::GetDialogueWidgetClass(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDialogueWidgetClass

// Begin Class UMounteaDialogueManagerStatics Function GetDialogueWidgetZOrder
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics
{
	struct MounteaDialogueManagerStatics_eventGetDialogueWidgetZOrder_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the Z-order of the dialogue widget.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return The current Z-order value of the dialogue widget.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the Z-order of the dialogue widget.\n\n@param Target        Dialogue Manager interface.\n@return The current Z-order value of the dialogue widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidgetZOrder_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetDialogueWidgetZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetDialogueWidgetZOrder", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidgetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::MounteaDialogueManagerStatics_eventGetDialogueWidgetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetDialogueWidgetZOrder)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMounteaDialogueManagerStatics::GetDialogueWidgetZOrder(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetDialogueWidgetZOrder

// Begin Class UMounteaDialogueManagerStatics Function GetManagerState
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics
{
	struct MounteaDialogueManagerStatics_eventGetManagerState_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		EDialogueManagerState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves current Dialogue Manager State.\n\x09 * State defines whether Manager can start/close dialogue or not.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return ManagerState\x09Manager state value\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves current Dialogue Manager State.\nState defines whether Manager can start/close dialogue or not.\n\n@param Target        Dialogue Manager interface.\n@return ManagerState Manager state value" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetManagerState_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetManagerState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(0, nullptr) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetManagerState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::MounteaDialogueManagerStatics_eventGetManagerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::MounteaDialogueManagerStatics_eventGetManagerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetManagerState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueManagerState*)Z_Param__Result=UMounteaDialogueManagerStatics::GetManagerState(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetManagerState

// Begin Class UMounteaDialogueManagerStatics Function GetOwningActor
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics
{
	struct MounteaDialogueManagerStatics_eventGetOwningActor_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		AActor* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the owning actor for this Dialogue Manager.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @return The owning actor for this Dialogue Manager.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the owning actor for this Dialogue Manager.\n\n@param Target        Dialogue Manager interface.\n@return The owning actor for this Dialogue Manager." },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetOwningActor_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventGetOwningActor_Parms, ReturnValue), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "GetOwningActor", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::MounteaDialogueManagerStatics_eventGetOwningActor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::MounteaDialogueManagerStatics_eventGetOwningActor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execGetOwningActor)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(AActor**)Z_Param__Result=UMounteaDialogueManagerStatics::GetOwningActor(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function GetOwningActor

// Begin Class UMounteaDialogueManagerStatics Function PrepareNode
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics
{
	struct MounteaDialogueManagerStatics_eventPrepareNode_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Prepares the node for execution.\n\x09 * Asks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\n\x09 * In this preparation stage, Nodes are asked to process all Decorators.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Prepares the node for execution.\nAsks Active Node to 'PreProcessNode' and then to 'ProcessNode'.\nIn this preparation stage, Nodes are asked to process all Decorators.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventPrepareNode_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "PrepareNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::MounteaDialogueManagerStatics_eventPrepareNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::MounteaDialogueManagerStatics_eventPrepareNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execPrepareNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::PrepareNode(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function PrepareNode

// Begin Class UMounteaDialogueManagerStatics Function ProcessDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics
{
	struct MounteaDialogueManagerStatics_eventProcessDialogueRow_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts Dialogue Row execution.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts Dialogue Row execution.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventProcessDialogueRow_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "ProcessDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::MounteaDialogueManagerStatics_eventProcessDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::MounteaDialogueManagerStatics_eventProcessDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execProcessDialogueRow)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::ProcessDialogueRow(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function ProcessDialogueRow

// Begin Class UMounteaDialogueManagerStatics Function ProcessNode
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics
{
	struct MounteaDialogueManagerStatics_eventProcessNode_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Calls to the Node to Process it.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calls to the Node to Process it.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventProcessNode_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "ProcessNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::MounteaDialogueManagerStatics_eventProcessNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::MounteaDialogueManagerStatics_eventProcessNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execProcessNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::ProcessNode(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function ProcessNode

// Begin Class UMounteaDialogueManagerStatics Function RemoveDialogueUIObject
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics
{
	struct MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		UObject* DialogueObjectToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a single dialogue UI object from the manager.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param DialogueObjectToRemove The object to remove.\n\x09 * @return True if the object was successfully removed, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a single dialogue UI object from the manager.\n\n@param Target        Dialogue Manager interface.\n@param DialogueObjectToRemove The object to remove.\n@return True if the object was successfully removed, false otherwise." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObjectToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_DialogueObjectToRemove = { "DialogueObjectToRemove", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms, DialogueObjectToRemove), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_DialogueObjectToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "RemoveDialogueUIObject", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::MounteaDialogueManagerStatics_eventRemoveDialogueUIObject_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execRemoveDialogueUIObject)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UObject,Z_Param_DialogueObjectToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::RemoveDialogueUIObject(Z_Param_Out_Target,Z_Param_DialogueObjectToRemove);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function RemoveDialogueUIObject

// Begin Class UMounteaDialogueManagerStatics Function RemoveDialogueUIObjects
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics
{
	struct MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		TArray<UObject*> DialogueObjectsToRemove;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes multiple dialogue UI objects from the manager.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param DialogueObjectsToRemove Array of objects to remove.\n\x09 * @return Number of objects successfully removed.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes multiple dialogue UI objects from the manager.\n\n@param Target        Dialogue Manager interface.\n@param DialogueObjectsToRemove Array of objects to remove.\n@return Number of objects successfully removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueObjectsToRemove_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueObjectsToRemove_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueObjectsToRemove;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove_Inner = { "DialogueObjectsToRemove", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove = { "DialogueObjectsToRemove", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms, DialogueObjectsToRemove), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueObjectsToRemove_MetaData), NewProp_DialogueObjectsToRemove_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_DialogueObjectsToRemove,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "RemoveDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventRemoveDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execRemoveDialogueUIObjects)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_DialogueObjectsToRemove);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::RemoveDialogueUIObjects(Z_Param_Out_Target,Z_Param_Out_DialogueObjectsToRemove);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function RemoveDialogueUIObjects

// Begin Class UMounteaDialogueManagerStatics Function RequestCloseDialogue
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics
{
	struct MounteaDialogueManagerStatics_eventRequestCloseDialogue_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Closes the Dialogue if is active.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "exit,close" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Closes the Dialogue if is active.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRequestCloseDialogue_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "RequestCloseDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::MounteaDialogueManagerStatics_eventRequestCloseDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::MounteaDialogueManagerStatics_eventRequestCloseDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execRequestCloseDialogue)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::RequestCloseDialogue(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function RequestCloseDialogue

// Begin Class UMounteaDialogueManagerStatics Function RequestStartDialogue
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics
{
	struct MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		AActor* DialogueInitiator;
		FDialogueParticipants InitialParticipants;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitialParticipants_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueInitiator;
	static const UECodeGen_Private::FStructPropertyParams NewProp_InitialParticipants;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_DialogueInitiator = { "DialogueInitiator", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms, DialogueInitiator), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_InitialParticipants = { "InitialParticipants", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms, InitialParticipants), Z_Construct_UScriptStruct_FDialogueParticipants, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitialParticipants_MetaData), NewProp_InitialParticipants_MetaData) }; // 3488827423
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_DialogueInitiator,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::NewProp_InitialParticipants,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "RequestStartDialogue", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::MounteaDialogueManagerStatics_eventRequestStartDialogue_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execRequestStartDialogue)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_OBJECT(AActor,Z_Param_DialogueInitiator);
	P_GET_STRUCT_REF(FDialogueParticipants,Z_Param_Out_InitialParticipants);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::RequestStartDialogue(Z_Param_Out_Target,Z_Param_DialogueInitiator,Z_Param_Out_InitialParticipants);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function RequestStartDialogue

// Begin Class UMounteaDialogueManagerStatics Function ResetDialogueUIObjects
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics
{
	struct MounteaDialogueManagerStatics_eventResetDialogueUIObjects_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the dialogue manager, removing all dialogue UI objects.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the dialogue manager, removing all dialogue UI objects.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventResetDialogueUIObjects_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "ResetDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventResetDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventResetDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execResetDialogueUIObjects)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::ResetDialogueUIObjects(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function ResetDialogueUIObjects

// Begin Class UMounteaDialogueManagerStatics Function SelectNode
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics
{
	struct MounteaDialogueManagerStatics_eventSelectNode_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		FGuid NodeGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Notifies the Dialogue that a node has been selected.\n\x09 * \n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NodeGUID\x09The GUID of the selected node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "select,chosen,option" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Notifies the Dialogue that a node has been selected.\n\n@param Target        Dialogue Manager interface.\n@param NodeGUID      The GUID of the selected node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSelectNode_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::NewProp_NodeGUID = { "NodeGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSelectNode_Parms, NodeGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGUID_MetaData), NewProp_NodeGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::NewProp_NodeGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SelectNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::MounteaDialogueManagerStatics_eventSelectNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::MounteaDialogueManagerStatics_eventSelectNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSelectNode)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_NodeGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SelectNode(Z_Param_Out_Target,Z_Param_Out_NodeGUID);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SelectNode

// Begin Class UMounteaDialogueManagerStatics Function SetDialogueUIObjects
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics
{
	struct MounteaDialogueManagerStatics_eventSetDialogueUIObjects_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		TArray<UObject*> NewDialogueObjects;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the entire array of dialogue UI objects, replacing any existing objects.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NewDialogueObjects The new array of dialogue UI objects.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the entire array of dialogue UI objects, replacing any existing objects.\n\n@param Target        Dialogue Manager interface.\n@param NewDialogueObjects The new array of dialogue UI objects." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueObjects_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueObjects_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueObjects;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueUIObjects_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects = { "NewDialogueObjects", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueUIObjects_Parms, NewDialogueObjects), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueObjects_MetaData), NewProp_NewDialogueObjects_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::NewProp_NewDialogueObjects,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SetDialogueUIObjects", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventSetDialogueUIObjects_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::MounteaDialogueManagerStatics_eventSetDialogueUIObjects_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSetDialogueUIObjects)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_TARRAY_REF(UObject*,Z_Param_Out_NewDialogueObjects);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SetDialogueUIObjects(Z_Param_Out_Target,Z_Param_Out_NewDialogueObjects);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SetDialogueUIObjects

// Begin Class UMounteaDialogueManagerStatics Function SetDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics
{
	struct MounteaDialogueManagerStatics_eventSetDialogueWidget_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		UUserWidget* DialogueUIPtr;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets Dialogue UI pointer.\n\x09 * \n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param DialogueUIPtr\x09UserWidget pointer to be saved as Dialogue UI\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets Dialogue UI pointer.\n\n@param Target        Dialogue Manager interface.\n@param DialogueUIPtr UserWidget pointer to be saved as Dialogue UI" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueUIPtr_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueUIPtr;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueWidget_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::NewProp_DialogueUIPtr = { "DialogueUIPtr", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueWidget_Parms, DialogueUIPtr), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueUIPtr_MetaData), NewProp_DialogueUIPtr_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::NewProp_DialogueUIPtr,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SetDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::MounteaDialogueManagerStatics_eventSetDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::MounteaDialogueManagerStatics_eventSetDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSetDialogueWidget)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_OBJECT(UUserWidget,Z_Param_DialogueUIPtr);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SetDialogueWidget(Z_Param_Out_Target,Z_Param_DialogueUIPtr);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SetDialogueWidget

// Begin Class UMounteaDialogueManagerStatics Function SetDialogueWidgetZOrder
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics
{
	struct MounteaDialogueManagerStatics_eventSetDialogueWidgetZOrder_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		int32 NewZOrder;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets a new Z-order for the dialogue widget.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NewZOrder The new Z-order value to be applied to the dialogue widget.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets a new Z-order for the dialogue widget.\n\n@param Target        Dialogue Manager interface.\n@param NewZOrder The new Z-order value to be applied to the dialogue widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewZOrder;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueWidgetZOrder_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::NewProp_NewZOrder = { "NewZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetDialogueWidgetZOrder_Parms, NewZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewZOrder_MetaData), NewProp_NewZOrder_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::NewProp_NewZOrder,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SetDialogueWidgetZOrder", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::MounteaDialogueManagerStatics_eventSetDialogueWidgetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::MounteaDialogueManagerStatics_eventSetDialogueWidgetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSetDialogueWidgetZOrder)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewZOrder);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SetDialogueWidgetZOrder(Z_Param_Out_Target,Z_Param_NewZOrder);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SetDialogueWidgetZOrder

// Begin Class UMounteaDialogueManagerStatics Function SetManagerState
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics
{
	struct MounteaDialogueManagerStatics_eventSetManagerState_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		EDialogueManagerState NewState;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new Dialogue Manager State.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param NewState\x09Manager State to be set as Manager State\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new Dialogue Manager State.\n\n@param Target        Dialogue Manager interface.\n@param NewState      Manager State to be set as Manager State" },
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
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetManagerState_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_NewState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_NewState = { "NewState", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSetManagerState_Parms, NewState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewState_MetaData), NewProp_NewState_MetaData) }; // 767330634
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_NewState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::NewProp_NewState,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SetManagerState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::MounteaDialogueManagerStatics_eventSetManagerState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::MounteaDialogueManagerStatics_eventSetManagerState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSetManagerState)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_ENUM(EDialogueManagerState,Z_Param_NewState);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SetManagerState(Z_Param_Out_Target,EDialogueManagerState(Z_Param_NewState));
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SetManagerState

// Begin Class UMounteaDialogueManagerStatics Function SkipDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics
{
	struct MounteaDialogueManagerStatics_eventSkipDialogueRow_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Skips the current dialogue row.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Skips the current dialogue row.\n\n@param Target        Dialogue Manager interface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventSkipDialogueRow_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "SkipDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::MounteaDialogueManagerStatics_eventSkipDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::MounteaDialogueManagerStatics_eventSkipDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execSkipDialogueRow)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::SkipDialogueRow(Z_Param_Out_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function SkipDialogueRow

// Begin Class UMounteaDialogueManagerStatics Function UpdateDialogueUI
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics
{
	struct MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		FString Message;
		FString Command;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Tries to Update Dialogue UI.\n\x09 *\n\x09 * @param Target\x09""Dialogue Manager interface.\n\x09 * @param Message\x09InMessage to be populated with error message explaining why returns false\n\x09 * @param Command\x09""Command to be processed.\n\x09 * @return\x09\x09\x09true if UI can be updated, false if cannot\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "Keywords", "show,widget" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Tries to Update Dialogue UI.\n\n@param Target        Dialogue Manager interface.\n@param Message       InMessage to be populated with error message explaining why returns false\n@param Command       Command to be processed.\n@return                      true if UI can be updated, false if cannot" },
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
	static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms, Message), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms), &Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Message,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "UpdateDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::MounteaDialogueManagerStatics_eventUpdateDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execUpdateDialogueUI)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_Message);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueManagerStatics::UpdateDialogueUI(Z_Param_Out_Target,Z_Param_Out_Message,Z_Param_Command);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function UpdateDialogueUI

// Begin Class UMounteaDialogueManagerStatics Function UpdateWorldDialogueUI
struct Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics
{
	struct MounteaDialogueManagerStatics_eventUpdateWorldDialogueUI_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> Target;
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Manager" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// --- World UI functions ------------------------------\n" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "--- World UI functions ------------------------------" },
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
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventUpdateWorldDialogueUI_Parms, Target), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueManagerStatics_eventUpdateWorldDialogueUI_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueManagerStatics, nullptr, "UpdateWorldDialogueUI", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::MounteaDialogueManagerStatics_eventUpdateWorldDialogueUI_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::MounteaDialogueManagerStatics_eventUpdateWorldDialogueUI_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueManagerStatics::execUpdateWorldDialogueUI)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueManagerStatics::UpdateWorldDialogueUI(Z_Param_Out_Target,Z_Param_Command);
	P_NATIVE_END;
}
// End Class UMounteaDialogueManagerStatics Function UpdateWorldDialogueUI

// Begin Class UMounteaDialogueManagerStatics
void UMounteaDialogueManagerStatics::StaticRegisterNativesUMounteaDialogueManagerStatics()
{
	UClass* Class = UMounteaDialogueManagerStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddDialogueUIObject", &UMounteaDialogueManagerStatics::execAddDialogueUIObject },
		{ "AddDialogueUIObjects", &UMounteaDialogueManagerStatics::execAddDialogueUIObjects },
		{ "CanStartDialogue", &UMounteaDialogueManagerStatics::execCanStartDialogue },
		{ "CloseDialogueUI", &UMounteaDialogueManagerStatics::execCloseDialogueUI },
		{ "CreateDialogueUI", &UMounteaDialogueManagerStatics::execCreateDialogueUI },
		{ "DialogueRowProcessed", &UMounteaDialogueManagerStatics::execDialogueRowProcessed },
		{ "ExecuteWidgetCommand", &UMounteaDialogueManagerStatics::execExecuteWidgetCommand },
		{ "GetDefaultDialogueManagerState", &UMounteaDialogueManagerStatics::execGetDefaultDialogueManagerState },
		{ "GetDialogueContext", &UMounteaDialogueManagerStatics::execGetDialogueContext },
		{ "GetDialogueManagerType", &UMounteaDialogueManagerStatics::execGetDialogueManagerType },
		{ "GetDialogueWidget", &UMounteaDialogueManagerStatics::execGetDialogueWidget },
		{ "GetDialogueWidgetClass", &UMounteaDialogueManagerStatics::execGetDialogueWidgetClass },
		{ "GetDialogueWidgetZOrder", &UMounteaDialogueManagerStatics::execGetDialogueWidgetZOrder },
		{ "GetManagerState", &UMounteaDialogueManagerStatics::execGetManagerState },
		{ "GetOwningActor", &UMounteaDialogueManagerStatics::execGetOwningActor },
		{ "PrepareNode", &UMounteaDialogueManagerStatics::execPrepareNode },
		{ "ProcessDialogueRow", &UMounteaDialogueManagerStatics::execProcessDialogueRow },
		{ "ProcessNode", &UMounteaDialogueManagerStatics::execProcessNode },
		{ "RemoveDialogueUIObject", &UMounteaDialogueManagerStatics::execRemoveDialogueUIObject },
		{ "RemoveDialogueUIObjects", &UMounteaDialogueManagerStatics::execRemoveDialogueUIObjects },
		{ "RequestCloseDialogue", &UMounteaDialogueManagerStatics::execRequestCloseDialogue },
		{ "RequestStartDialogue", &UMounteaDialogueManagerStatics::execRequestStartDialogue },
		{ "ResetDialogueUIObjects", &UMounteaDialogueManagerStatics::execResetDialogueUIObjects },
		{ "SelectNode", &UMounteaDialogueManagerStatics::execSelectNode },
		{ "SetDialogueUIObjects", &UMounteaDialogueManagerStatics::execSetDialogueUIObjects },
		{ "SetDialogueWidget", &UMounteaDialogueManagerStatics::execSetDialogueWidget },
		{ "SetDialogueWidgetZOrder", &UMounteaDialogueManagerStatics::execSetDialogueWidgetZOrder },
		{ "SetManagerState", &UMounteaDialogueManagerStatics::execSetManagerState },
		{ "SkipDialogueRow", &UMounteaDialogueManagerStatics::execSkipDialogueRow },
		{ "UpdateDialogueUI", &UMounteaDialogueManagerStatics::execUpdateDialogueUI },
		{ "UpdateWorldDialogueUI", &UMounteaDialogueManagerStatics::execUpdateWorldDialogueUI },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueManagerStatics);
UClass* Z_Construct_UClass_UMounteaDialogueManagerStatics_NoRegister()
{
	return UMounteaDialogueManagerStatics::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * This library contains implementations of Dialogue Manager Functions.\n * Dialogue Manager Interface does not have any BlueprintCallable functions.\n */" },
#endif
		{ "IncludePath", "Helpers/MounteaDialogueManagerStatics.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueManagerStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This library contains implementations of Dialogue Manager Functions.\nDialogue Manager Interface does not have any BlueprintCallable functions." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObject, "AddDialogueUIObject" }, // 2499617525
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_AddDialogueUIObjects, "AddDialogueUIObjects" }, // 2657682254
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CanStartDialogue, "CanStartDialogue" }, // 306580347
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CloseDialogueUI, "CloseDialogueUI" }, // 2106070172
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_CreateDialogueUI, "CreateDialogueUI" }, // 2062677391
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_DialogueRowProcessed, "DialogueRowProcessed" }, // 2462941838
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_ExecuteWidgetCommand, "ExecuteWidgetCommand" }, // 3877809290
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDefaultDialogueManagerState, "GetDefaultDialogueManagerState" }, // 1970548800
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueContext, "GetDialogueContext" }, // 3087928361
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueManagerType, "GetDialogueManagerType" }, // 1166729251
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidget, "GetDialogueWidget" }, // 530467269
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetClass, "GetDialogueWidgetClass" }, // 264520103
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetDialogueWidgetZOrder, "GetDialogueWidgetZOrder" }, // 2653864947
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetManagerState, "GetManagerState" }, // 4052864093
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_GetOwningActor, "GetOwningActor" }, // 2479424053
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_PrepareNode, "PrepareNode" }, // 97838413
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessDialogueRow, "ProcessDialogueRow" }, // 1473049517
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_ProcessNode, "ProcessNode" }, // 1987980584
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObject, "RemoveDialogueUIObject" }, // 4054613830
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RemoveDialogueUIObjects, "RemoveDialogueUIObjects" }, // 46678889
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestCloseDialogue, "RequestCloseDialogue" }, // 3704908774
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_RequestStartDialogue, "RequestStartDialogue" }, // 2081521228
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_ResetDialogueUIObjects, "ResetDialogueUIObjects" }, // 2156820030
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SelectNode, "SelectNode" }, // 2844469055
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueUIObjects, "SetDialogueUIObjects" }, // 2458974451
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidget, "SetDialogueWidget" }, // 3515024365
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetDialogueWidgetZOrder, "SetDialogueWidgetZOrder" }, // 2140410720
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SetManagerState, "SetManagerState" }, // 3145741852
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_SkipDialogueRow, "SkipDialogueRow" }, // 1912946549
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateDialogueUI, "UpdateDialogueUI" }, // 4148159042
		{ &Z_Construct_UFunction_UMounteaDialogueManagerStatics_UpdateWorldDialogueUI, "UpdateWorldDialogueUI" }, // 3325946194
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueManagerStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::ClassParams = {
	&UMounteaDialogueManagerStatics::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueManagerStatics()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueManagerStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueManagerStatics.OuterSingleton, Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueManagerStatics.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueManagerStatics>()
{
	return UMounteaDialogueManagerStatics::StaticClass();
}
UMounteaDialogueManagerStatics::UMounteaDialogueManagerStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueManagerStatics);
UMounteaDialogueManagerStatics::~UMounteaDialogueManagerStatics() {}
// End Class UMounteaDialogueManagerStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueManagerStatics, UMounteaDialogueManagerStatics::StaticClass, TEXT("UMounteaDialogueManagerStatics"), &Z_Registration_Info_UClass_UMounteaDialogueManagerStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueManagerStatics), 1002695302U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_3975199982(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
