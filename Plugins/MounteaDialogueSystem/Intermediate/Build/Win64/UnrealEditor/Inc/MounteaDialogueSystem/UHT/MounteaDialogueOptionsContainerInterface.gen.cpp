// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueOptionsContainerInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueOptionsContainerInterface Function AddNewDialogueOption
struct MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOption_Parms
{
	UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption;
};
void IMounteaDialogueOptionsContainerInterface::AddNewDialogueOption(UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddNewDialogueOption instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption = FName(TEXT("AddNewDialogueOption"));
void IMounteaDialogueOptionsContainerInterface::Execute_AddNewDialogueOption(UObject* O, UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption);
	if (Func)
	{
		Parms.NewDialogueOption=NewDialogueOption;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->AddNewDialogueOption_Implementation(NewDialogueOption);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a new dialogue option widget.\n\x09 * \n\x09 * @param NewDialogueOption The UUserWidget instance to be added as a new dialogue option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a new dialogue option widget.\n\n@param NewDialogueOption The UUserWidget instance to be added as a new dialogue option." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::NewProp_NewDialogueOption = { "NewDialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOption_Parms, NewDialogueOption), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::NewProp_NewDialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "AddNewDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execAddNewDialogueOption)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_NewDialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewDialogueOption_Implementation(Z_Param_NewDialogueOption);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function AddNewDialogueOption

// Begin Interface UMounteaDialogueOptionsContainerInterface Function AddNewDialogueOptions
struct MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOptions_Parms
{
	TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> NewDialogueOptions;
};
void IMounteaDialogueOptionsContainerInterface::AddNewDialogueOptions(TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& NewDialogueOptions)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddNewDialogueOptions instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions = FName(TEXT("AddNewDialogueOptions"));
void IMounteaDialogueOptionsContainerInterface::Execute_AddNewDialogueOptions(UObject* O, TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& NewDialogueOptions)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOptions_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions);
	if (Func)
	{
		Parms.NewDialogueOptions=NewDialogueOptions;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->AddNewDialogueOptions_Implementation(NewDialogueOptions);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds multiple new dialogue option widgets.\n\x09 * \n\x09 * @param NewDialogueOptions An array of UUserWidget instances to be added as new dialogue options.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds multiple new dialogue option widgets.\n\n@param NewDialogueOptions An array of UUserWidget instances to be added as new dialogue options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions_Inner = { "NewDialogueOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions = { "NewDialogueOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOptions_Parms, NewDialogueOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueOptions_MetaData), NewProp_NewDialogueOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "AddNewDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventAddNewDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execAddNewDialogueOptions)
{
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode_DialogueNodeBase*,Z_Param_Out_NewDialogueOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddNewDialogueOptions_Implementation(Z_Param_Out_NewDialogueOptions);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function AddNewDialogueOptions

// Begin Interface UMounteaDialogueOptionsContainerInterface Function ClearDialogueOptions
void IMounteaDialogueOptionsContainerInterface::ClearDialogueOptions()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ClearDialogueOptions instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions = FName(TEXT("ClearDialogueOptions"));
void IMounteaDialogueOptionsContainerInterface::Execute_ClearDialogueOptions(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->ClearDialogueOptions_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears all dialogue option widgets.\n\x09 * \n\x09 * Removes all currently stored dialogue options, effectively resetting the container.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all dialogue option widgets.\n\nRemoves all currently stored dialogue options, effectively resetting the container." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "ClearDialogueOptions", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execClearDialogueOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearDialogueOptions_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function ClearDialogueOptions

// Begin Interface UMounteaDialogueOptionsContainerInterface Function GetDialogueOptionClass
struct MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms
{
	TSoftClassPtr<UUserWidget>  ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSoftClassPtr<UUserWidget>  IMounteaDialogueOptionsContainerInterface::GetDialogueOptionClass() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueOptionClass instead.");
	MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass = FName(TEXT("GetDialogueOptionClass"));
TSoftClassPtr<UUserWidget>  IMounteaDialogueOptionsContainerInterface::Execute_GetDialogueOptionClass(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueOptionClass_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the class type of the dialogue option widget.\n\x09 * \n\x09 * @return A soft class pointer to the UUserWidget that represents the dialogue option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the class type of the dialogue option widget.\n\n@return A soft class pointer to the UUserWidget that represents the dialogue option." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "GetDialogueOptionClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptionClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execGetDialogueOptionClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=P_THIS->GetDialogueOptionClass_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function GetDialogueOptionClass

// Begin Interface UMounteaDialogueOptionsContainerInterface Function GetDialogueOptions
struct MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms
{
	TArray<UUserWidget*> ReturnValue;
};
TArray<UUserWidget*> IMounteaDialogueOptionsContainerInterface::GetDialogueOptions() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueOptions instead.");
	MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions = FName(TEXT("GetDialogueOptions"));
TArray<UUserWidget*> IMounteaDialogueOptionsContainerInterface::Execute_GetDialogueOptions(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueOptions_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns all Dialogue Options from the specified Dialogue Options Container parent widget that implements the MounteaDialogueOptionsContainerInterface.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all Dialogue Options from the specified Dialogue Options Container parent widget that implements the MounteaDialogueOptionsContainerInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "GetDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventGetDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execGetDialogueOptions)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UUserWidget*>*)Z_Param__Result=P_THIS->GetDialogueOptions_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function GetDialogueOptions

// Begin Interface UMounteaDialogueOptionsContainerInterface Function GetFocusedOptionIndex
struct MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms
{
	int32 ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms()
		: ReturnValue(0)
	{
	}
};
int32 IMounteaDialogueOptionsContainerInterface::GetFocusedOptionIndex() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFocusedOptionIndex instead.");
	MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex = FName(TEXT("GetFocusedOptionIndex"));
int32 IMounteaDialogueOptionsContainerInterface::Execute_GetFocusedOptionIndex(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetFocusedOptionIndex_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Gets focused option. If options are empty then -1 is returned.\n\x09 * \n\x09 * @return Index of currently focused Option\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets focused option. If options are empty then -1 is returned.\n\n@return Index of currently focused Option" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "GetFocusedOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventGetFocusedOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execGetFocusedOptionIndex)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=P_THIS->GetFocusedOptionIndex_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function GetFocusedOptionIndex

// Begin Interface UMounteaDialogueOptionsContainerInterface Function GetParentDialogueWidget
struct MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms
{
	UUserWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UUserWidget* IMounteaDialogueOptionsContainerInterface::GetParentDialogueWidget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetParentDialogueWidget instead.");
	MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget = FName(TEXT("GetParentDialogueWidget"));
UUserWidget* IMounteaDialogueOptionsContainerInterface::Execute_GetParentDialogueWidget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetParentDialogueWidget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the parent dialogue widget.\n\x09 * \n\x09 * @return A UUserWidget instance that serves as the parent dialogue widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the parent dialogue widget.\n\n@return A UUserWidget instance that serves as the parent dialogue widget." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "GetParentDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventGetParentDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execGetParentDialogueWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetParentDialogueWidget_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function GetParentDialogueWidget

// Begin Interface UMounteaDialogueOptionsContainerInterface Function ProcessOptionSelected
struct MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms
{
	FGuid SelectedOption;
	UUserWidget* CallingWidget;
};
void IMounteaDialogueOptionsContainerInterface::ProcessOptionSelected(FGuid const& SelectedOption, UUserWidget* CallingWidget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessOptionSelected instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected = FName(TEXT("ProcessOptionSelected"));
void IMounteaDialogueOptionsContainerInterface::Execute_ProcessOptionSelected(UObject* O, FGuid const& SelectedOption, UUserWidget* CallingWidget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected);
	if (Func)
	{
		Parms.SelectedOption=SelectedOption;
		Parms.CallingWidget=CallingWidget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->ProcessOptionSelected_Implementation(SelectedOption,CallingWidget);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the selected option.\n\x09 * \n\x09 * @param SelectedOption The selected option's identifier.\n\x09 * @param CallingWidget The widget that triggered the selection process.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the selected option.\n\n@param SelectedOption The selected option's identifier.\n@param CallingWidget The widget that triggered the selection process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms, SelectedOption), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::NewProp_CallingWidget = { "CallingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms, CallingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingWidget_MetaData), NewProp_CallingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::NewProp_SelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::NewProp_CallingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "ProcessOptionSelected", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventProcessOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execProcessOptionSelected)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SelectedOption);
	P_GET_OBJECT(UUserWidget,Z_Param_CallingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessOptionSelected_Implementation(Z_Param_Out_SelectedOption,Z_Param_CallingWidget);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function ProcessOptionSelected

// Begin Interface UMounteaDialogueOptionsContainerInterface Function RemoveDialogueOption
struct MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOption_Parms
{
	UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption;
};
void IMounteaDialogueOptionsContainerInterface::RemoveDialogueOption(UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveDialogueOption instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption = FName(TEXT("RemoveDialogueOption"));
void IMounteaDialogueOptionsContainerInterface::Execute_RemoveDialogueOption(UObject* O, UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption);
	if (Func)
	{
		Parms.DirtyDialogueOption=DirtyDialogueOption;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->RemoveDialogueOption_Implementation(DirtyDialogueOption);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a specific dialogue option widget.\n\x09 * \n\x09 * @param DirtyDialogueOption The UUserWidget instance to be removed from the dialogue options.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specific dialogue option widget.\n\n@param DirtyDialogueOption The UUserWidget instance to be removed from the dialogue options." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirtyDialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::NewProp_DirtyDialogueOption = { "DirtyDialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOption_Parms, DirtyDialogueOption), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::NewProp_DirtyDialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "RemoveDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execRemoveDialogueOption)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_DirtyDialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDialogueOption_Implementation(Z_Param_DirtyDialogueOption);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function RemoveDialogueOption

// Begin Interface UMounteaDialogueOptionsContainerInterface Function RemoveDialogueOptions
struct MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOptions_Parms
{
	TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> DirtyDialogueOptions;
};
void IMounteaDialogueOptionsContainerInterface::RemoveDialogueOptions(TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& DirtyDialogueOptions)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveDialogueOptions instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions = FName(TEXT("RemoveDialogueOptions"));
void IMounteaDialogueOptionsContainerInterface::Execute_RemoveDialogueOptions(UObject* O, TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& DirtyDialogueOptions)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOptions_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions);
	if (Func)
	{
		Parms.DirtyDialogueOptions=DirtyDialogueOptions;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->RemoveDialogueOptions_Implementation(DirtyDialogueOptions);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes multiple dialogue option widgets.\n\x09 * \n\x09 * @param DirtyDialogueOptions An array of UUserWidget instances to be removed from the dialogue options.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes multiple dialogue option widgets.\n\n@param DirtyDialogueOptions An array of UUserWidget instances to be removed from the dialogue options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirtyDialogueOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirtyDialogueOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirtyDialogueOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions_Inner = { "DirtyDialogueOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions = { "DirtyDialogueOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOptions_Parms, DirtyDialogueOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirtyDialogueOptions_MetaData), NewProp_DirtyDialogueOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "RemoveDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventRemoveDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execRemoveDialogueOptions)
{
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode_DialogueNodeBase*,Z_Param_Out_DirtyDialogueOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveDialogueOptions_Implementation(Z_Param_Out_DirtyDialogueOptions);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function RemoveDialogueOptions

// Begin Interface UMounteaDialogueOptionsContainerInterface Function SetDialogueOptionClass
struct MounteaDialogueOptionsContainerInterface_eventSetDialogueOptionClass_Parms
{
	TSoftClassPtr<UUserWidget>  NewDialogueOptionClass;
};
void IMounteaDialogueOptionsContainerInterface::SetDialogueOptionClass(TSoftClassPtr<UUserWidget>  const& NewDialogueOptionClass)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetDialogueOptionClass instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass = FName(TEXT("SetDialogueOptionClass"));
void IMounteaDialogueOptionsContainerInterface::Execute_SetDialogueOptionClass(UObject* O, TSoftClassPtr<UUserWidget>  const& NewDialogueOptionClass)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventSetDialogueOptionClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass);
	if (Func)
	{
		Parms.NewDialogueOptionClass=NewDialogueOptionClass;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->SetDialogueOptionClass_Implementation(NewDialogueOptionClass);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the class type of the dialogue option widget.\n\x09 * \n\x09 * @param NewDialogueOptionClass A soft class pointer to the new UUserWidget class to be used for dialogue options.\n\x09 * The class must implement the MounteaDialogueOptionInterface.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the class type of the dialogue option widget.\n\n@param NewDialogueOptionClass A soft class pointer to the new UUserWidget class to be used for dialogue options.\nThe class must implement the MounteaDialogueOptionInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueOptionClass_MetaData[] = {
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueOptionInterface" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewDialogueOptionClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::NewProp_NewDialogueOptionClass = { "NewDialogueOptionClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventSetDialogueOptionClass_Parms, NewDialogueOptionClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueOptionClass_MetaData), NewProp_NewDialogueOptionClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::NewProp_NewDialogueOptionClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "SetDialogueOptionClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventSetDialogueOptionClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventSetDialogueOptionClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execSetDialogueOptionClass)
{
	P_GET_SOFTCLASS_REF(TSoftClassPtr<UUserWidget> ,Z_Param_Out_NewDialogueOptionClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetDialogueOptionClass_Implementation(Z_Param_Out_NewDialogueOptionClass);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function SetDialogueOptionClass

// Begin Interface UMounteaDialogueOptionsContainerInterface Function SetFocusedOption
struct MounteaDialogueOptionsContainerInterface_eventSetFocusedOption_Parms
{
	int32 NewFocusedOption;
};
void IMounteaDialogueOptionsContainerInterface::SetFocusedOption(const int32 NewFocusedOption)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFocusedOption instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_SetFocusedOption = FName(TEXT("SetFocusedOption"));
void IMounteaDialogueOptionsContainerInterface::Execute_SetFocusedOption(UObject* O, const int32 NewFocusedOption)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventSetFocusedOption_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_SetFocusedOption);
	if (Func)
	{
		Parms.NewFocusedOption=NewFocusedOption;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->SetFocusedOption_Implementation(NewFocusedOption);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Set focus to new Option.\n\x09 * \n\x09 * @param NewFocusedOption Index of newly focused Option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set focus to new Option.\n\n@param NewFocusedOption Index of newly focused Option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusedOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFocusedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::NewProp_NewFocusedOption = { "NewFocusedOption", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventSetFocusedOption_Parms, NewFocusedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFocusedOption_MetaData), NewProp_NewFocusedOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::NewProp_NewFocusedOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "SetFocusedOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventSetFocusedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventSetFocusedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execSetFocusedOption)
{
	P_GET_PROPERTY(FIntProperty,Z_Param_NewFocusedOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusedOption_Implementation(Z_Param_NewFocusedOption);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function SetFocusedOption

// Begin Interface UMounteaDialogueOptionsContainerInterface Function SetParentDialogueWidget
struct MounteaDialogueOptionsContainerInterface_eventSetParentDialogueWidget_Parms
{
	UUserWidget* NewParentDialogueWidget;
};
void IMounteaDialogueOptionsContainerInterface::SetParentDialogueWidget(UUserWidget* NewParentDialogueWidget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetParentDialogueWidget instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget = FName(TEXT("SetParentDialogueWidget"));
void IMounteaDialogueOptionsContainerInterface::Execute_SetParentDialogueWidget(UObject* O, UUserWidget* NewParentDialogueWidget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventSetParentDialogueWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget);
	if (Func)
	{
		Parms.NewParentDialogueWidget=NewParentDialogueWidget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->SetParentDialogueWidget_Implementation(NewParentDialogueWidget);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the parent dialogue widget.\n\x09 * \n\x09 * @param NewParentDialogueWidget The UUserWidget instance to be set as the parent dialogue widget. The widget must implement the MounteaDialogueWBPInterface.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the parent dialogue widget.\n\n@param NewParentDialogueWidget The UUserWidget instance to be set as the parent dialogue widget. The widget must implement the MounteaDialogueWBPInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParentDialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParentDialogueWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::NewProp_NewParentDialogueWidget = { "NewParentDialogueWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainerInterface_eventSetParentDialogueWidget_Parms, NewParentDialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParentDialogueWidget_MetaData), NewProp_NewParentDialogueWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::NewProp_NewParentDialogueWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "SetParentDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventSetParentDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventSetParentDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execSetParentDialogueWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_NewParentDialogueWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetParentDialogueWidget_Implementation(Z_Param_NewParentDialogueWidget);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function SetParentDialogueWidget

// Begin Interface UMounteaDialogueOptionsContainerInterface Function ToggleForcedFocus
struct MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms
{
	bool bEnable;
};
void IMounteaDialogueOptionsContainerInterface::ToggleForcedFocus(bool bEnable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ToggleForcedFocus instead.");
}
static FName NAME_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus = FName(TEXT("ToggleForcedFocus"));
void IMounteaDialogueOptionsContainerInterface::Execute_ToggleForcedFocus(UObject* O, bool bEnable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionsContainerInterface::StaticClass()));
	MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus);
	if (Func)
	{
		Parms.bEnable=bEnable;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionsContainerInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionsContainerInterface::StaticClass())))
	{
		I->ToggleForcedFocus_Implementation(bEnable);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms), &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnable_MetaData), NewProp_bEnable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, nullptr, "ToggleForcedFocus", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::PropPointers), sizeof(MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionsContainerInterface_eventToggleForcedFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionsContainerInterface::execToggleForcedFocus)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ToggleForcedFocus_Implementation(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionsContainerInterface Function ToggleForcedFocus

// Begin Interface UMounteaDialogueOptionsContainerInterface
void UMounteaDialogueOptionsContainerInterface::StaticRegisterNativesUMounteaDialogueOptionsContainerInterface()
{
	UClass* Class = UMounteaDialogueOptionsContainerInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddNewDialogueOption", &IMounteaDialogueOptionsContainerInterface::execAddNewDialogueOption },
		{ "AddNewDialogueOptions", &IMounteaDialogueOptionsContainerInterface::execAddNewDialogueOptions },
		{ "ClearDialogueOptions", &IMounteaDialogueOptionsContainerInterface::execClearDialogueOptions },
		{ "GetDialogueOptionClass", &IMounteaDialogueOptionsContainerInterface::execGetDialogueOptionClass },
		{ "GetDialogueOptions", &IMounteaDialogueOptionsContainerInterface::execGetDialogueOptions },
		{ "GetFocusedOptionIndex", &IMounteaDialogueOptionsContainerInterface::execGetFocusedOptionIndex },
		{ "GetParentDialogueWidget", &IMounteaDialogueOptionsContainerInterface::execGetParentDialogueWidget },
		{ "ProcessOptionSelected", &IMounteaDialogueOptionsContainerInterface::execProcessOptionSelected },
		{ "RemoveDialogueOption", &IMounteaDialogueOptionsContainerInterface::execRemoveDialogueOption },
		{ "RemoveDialogueOptions", &IMounteaDialogueOptionsContainerInterface::execRemoveDialogueOptions },
		{ "SetDialogueOptionClass", &IMounteaDialogueOptionsContainerInterface::execSetDialogueOptionClass },
		{ "SetFocusedOption", &IMounteaDialogueOptionsContainerInterface::execSetFocusedOption },
		{ "SetParentDialogueWidget", &IMounteaDialogueOptionsContainerInterface::execSetParentDialogueWidget },
		{ "ToggleForcedFocus", &IMounteaDialogueOptionsContainerInterface::execToggleForcedFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueOptionsContainerInterface);
UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_NoRegister()
{
	return UMounteaDialogueOptionsContainerInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOption, "AddNewDialogueOption" }, // 782649272
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_AddNewDialogueOptions, "AddNewDialogueOptions" }, // 433829870
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ClearDialogueOptions, "ClearDialogueOptions" }, // 3236966146
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptionClass, "GetDialogueOptionClass" }, // 691311743
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetDialogueOptions, "GetDialogueOptions" }, // 2569305730
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetFocusedOptionIndex, "GetFocusedOptionIndex" }, // 1659003014
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_GetParentDialogueWidget, "GetParentDialogueWidget" }, // 1271997332
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ProcessOptionSelected, "ProcessOptionSelected" }, // 1027480564
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOption, "RemoveDialogueOption" }, // 2277204367
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_RemoveDialogueOptions, "RemoveDialogueOptions" }, // 4070641685
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetDialogueOptionClass, "SetDialogueOptionClass" }, // 2739138956
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetFocusedOption, "SetFocusedOption" }, // 2562053542
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_SetParentDialogueWidget, "SetParentDialogueWidget" }, // 443826823
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainerInterface_ToggleForcedFocus, "ToggleForcedFocus" }, // 1262984462
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueOptionsContainerInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::ClassParams = {
	&UMounteaDialogueOptionsContainerInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueOptionsContainerInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueOptionsContainerInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueOptionsContainerInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueOptionsContainerInterface>()
{
	return UMounteaDialogueOptionsContainerInterface::StaticClass();
}
UMounteaDialogueOptionsContainerInterface::UMounteaDialogueOptionsContainerInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueOptionsContainerInterface);
UMounteaDialogueOptionsContainerInterface::~UMounteaDialogueOptionsContainerInterface() {}
// End Interface UMounteaDialogueOptionsContainerInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface, UMounteaDialogueOptionsContainerInterface::StaticClass, TEXT("UMounteaDialogueOptionsContainerInterface"), &Z_Registration_Info_UClass_UMounteaDialogueOptionsContainerInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueOptionsContainerInterface), 886590037U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_21499208(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
