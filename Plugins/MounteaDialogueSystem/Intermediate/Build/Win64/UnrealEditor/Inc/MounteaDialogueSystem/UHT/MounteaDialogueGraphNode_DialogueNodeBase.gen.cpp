// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_DialogueNodeBase() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetDataTable
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics
{
	struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms
	{
		UDataTable* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Dialogue Data Table for this graph node.\n\x09 * \xe2\x9d\x97 Might be null\n\x09 *\n\x09 * @return The Dialogue Data Table for this graph node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Dialogue Data Table for this graph node.\n\xe2\x9d\x97 Might be null\n\n@return The Dialogue Data Table for this graph node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms, ReturnValue), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetDataTable", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetDataTable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UDataTable**)Z_Param__Result=P_THIS->GetDataTable();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetDataTable

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetRowName
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics
{
	struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms
	{
		FName ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the Dialogue Data Row name.\n\x09 * \xe2\x9d\x97 Might be invalid\n\x09 *\n\x09 * @return The Dialogue Data Row name.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the Dialogue Data Row name.\n\xe2\x9d\x97 Might be invalid\n\n@return The Dialogue Data Row name." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetRowName", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FName*)Z_Param__Result=P_THIS->GetRowName();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetRowName

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetRowNames
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics
{
	struct MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "GetRowNames", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventGetRowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetRowNames();
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase Function GetRowNames

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase Function SetDataTable
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics
{
	struct MounteaDialogueGraphNode_DialogueNodeBase_eventSetDataTable_Parms
	{
		UDataTable* NewDataTable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BlueprintCallable,*/" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintCallable," },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDataTable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::NewProp_NewDataTable = { "NewDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventSetDataTable_Parms, NewDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::NewProp_NewDataTable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "SetDataTable", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventSetDataTable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventSetDataTable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execSetDataTable)
{
	P_GET_OBJECT(UDataTable,Z_Param_NewDataTable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDataTable(Z_Param_NewDataTable);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase Function SetDataTable

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase Function SetRowName
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics
{
	struct MounteaDialogueGraphNode_DialogueNodeBase_eventSetRowName_Parms
	{
		FName NewRowName;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*BlueprintCallable,*/" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "BlueprintCallable," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewRowName_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_NewRowName;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::NewProp_NewRowName = { "NewRowName", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_DialogueNodeBase_eventSetRowName_Parms, NewRowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewRowName_MetaData), NewProp_NewRowName_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::NewProp_NewRowName,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, nullptr, "SetRowName", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventSetRowName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020400, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::MounteaDialogueGraphNode_DialogueNodeBase_eventSetRowName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_DialogueNodeBase::execSetRowName)
{
	P_GET_PROPERTY(FNameProperty,Z_Param_NewRowName);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetRowName(Z_Param_NewRowName);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase Function SetRowName

// Begin Class UMounteaDialogueGraphNode_DialogueNodeBase
void UMounteaDialogueGraphNode_DialogueNodeBase::StaticRegisterNativesUMounteaDialogueGraphNode_DialogueNodeBase()
{
	UClass* Class = UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDataTable", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetDataTable },
		{ "GetRowName", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowName },
		{ "GetRowNames", &UMounteaDialogueGraphNode_DialogueNodeBase::execGetRowNames },
		{ "SetDataTable", &UMounteaDialogueGraphNode_DialogueNodeBase::execSetDataTable },
		{ "SetRowName", &UMounteaDialogueGraphNode_DialogueNodeBase::execSetRowName },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_DialogueNodeBase);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister()
{
	return UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Graph Node abstract Base class.\n * \n * Enhances 'MounteaDialogueGraphNode' Base class with Dialogue data.\n * Provides DataTable and Row options that define the Dialogue data which will be displayed in UI.\n */" },
#endif
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Graph Node abstract Base class.\n\nEnhances 'MounteaDialogueGraphNode' Base class with Dialogue data.\nProvides DataTable and Row options that define the Dialogue data which will be displayed in UI." },
#endif
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Preview_MetaData[] = {
		{ "Category", "Base" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shows read-only Texts with localization of selected Dialogue Row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "MultiLine", "TRUE" },
		{ "ShowOnlyInnerProperties", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shows read-only Texts with localization of selected Dialogue Row." },
#endif
	};
#endif // WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The data table containing the dialogue rows.\n\x09 * \xe2\x9d\x97 Strongly suggested to use 'DialogueRow' based Data Tables\n\x09 */" },
#endif
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "NoResetToDefault", "" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/MounteaDialogueSystem.DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The data table containing the dialogue rows.\n\xe2\x9d\x97 Strongly suggested to use 'DialogueRow' based Data Tables" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of row in the table that we want */" },
#endif
		{ "EditCondition", "DataTable!=nullptr" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of row in the table that we want" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseGameplayTags_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Flag defining how the Participant is searched for.\n\x09 * Default: False\n\x09 * \n\x09 * If True:\n\x09 * * Participant will be found by its Gameplay Tag, compared to Dialogue Row Data.\n\x09 * * \xe2\x9d\x97Only exact match is considered success\n\x09 * * \xe2\x9d\x97 First found is used, so use unique Tags when working with multiple Participants (Player01, Player02, NPC.Andrew etc.)\n\x09 * \n\x09 * If False:\n\x09 * * Participant will be found using Node Type\n\x09 * * Lead Node will use NPC\n\x09 * * Answer Node will use Player\n\x09 * * \xe2\x9d\x97 This system will be deprecated\n\x09 * \n\x09 * \xe2\x9d\x97 New feature in version 1.0.5.X.\n\x09 * \xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Flag defining how the Participant is searched for.\nDefault: False\n\nIf True:\n* Participant will be found by its Gameplay Tag, compared to Dialogue Row Data.\n* \xe2\x9d\x97Only exact match is considered success\n* \xe2\x9d\x97 First found is used, so use unique Tags when working with multiple Participants (Player01, Player02, NPC.Andrew etc.)\n\nIf False:\n* Participant will be found using Node Type\n* Lead Node will use NPC\n* Answer Node will use Player\n* \xe2\x9d\x97 This system will be deprecated\n\n\xe2\x9d\x97 New feature in version 1.0.5.X.\n\xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`" },
#endif
	};
#endif // WITH_METADATA
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_Preview_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_Preview;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static void NewProp_bUseGameplayTags_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseGameplayTags;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetDataTable, "GetDataTable" }, // 2249378067
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowName, "GetRowName" }, // 435984274
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_GetRowNames, "GetRowNames" }, // 4214426480
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetDataTable, "SetDataTable" }, // 934935222
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_DialogueNodeBase_SetRowName, "SetRowName" }, // 3665078244
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_DialogueNodeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_Inner = { "Preview", nullptr, (EPropertyFlags)0x0000000800020000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview = { "Preview", nullptr, (EPropertyFlags)0x0010000800022001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, Preview), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Preview_MetaData), NewProp_Preview_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0124080001000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_DialogueNodeBase, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_bUseGameplayTags_SetBit(void* Obj)
{
	((UMounteaDialogueGraphNode_DialogueNodeBase*)Obj)->bUseGameplayTags = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_bUseGameplayTags = { "bUseGameplayTags", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphNode_DialogueNodeBase), &Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_bUseGameplayTags_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseGameplayTags_MetaData), NewProp_bUseGameplayTags_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers[] = {
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_Preview,
#endif // WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::NewProp_bUseGameplayTags,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::ClassParams = {
	&UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::PropPointers),
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_DialogueNodeBase>()
{
	return UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_DialogueNodeBase);
UMounteaDialogueGraphNode_DialogueNodeBase::~UMounteaDialogueGraphNode_DialogueNodeBase() {}
// End Class UMounteaDialogueGraphNode_DialogueNodeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, UMounteaDialogueGraphNode_DialogueNodeBase::StaticClass, TEXT("UMounteaDialogueGraphNode_DialogueNodeBase"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_DialogueNodeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_DialogueNodeBase), 2862609976U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_4228178347(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
