// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueOptionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueOptionInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueOptionData();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin ScriptStruct FDialogueOptionData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueOptionData;
class UScriptStruct* FDialogueOptionData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueOptionData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueOptionData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueOptionData, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueOptionData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueOptionData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueOptionData>()
{
	return FDialogueOptionData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A helper struct to move Dialogue Option data around.\n */" },
#endif
		{ "HasNativeMake", "/Script/MounteaDialogueSystem.MounteaDialogueHUDStatics.NewDialogueOptionData" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A helper struct to move Dialogue Option data around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionGuid_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The unique identifier for this dialogue option parent Node.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique identifier for this dialogue option parent Node." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionTitle_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The title of the dialogue option, displayed to the user.\n\x09 * Default value: \"This is dialogue option title text.\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The title of the dialogue option, displayed to the user.\nDefault value: \"This is dialogue option title text.\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionBody_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The body text of the dialogue option, can be used as tooltip or additional information.\n\x09 * Default value: \"This is dialogue option body text.\\nCan be used as tooltip text etc.\"\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The body text of the dialogue option, can be used as tooltip or additional information.\nDefault value: \"This is dialogue option body text.\\nCan be used as tooltip text etc.\"" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionIcon_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An optional icon for the dialogue option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional icon for the dialogue option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The UI row ID for this dialogue option, used to order or identify the option in the UI.\n\x09 * Default value: 0.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI row ID for this dialogue option, used to order or identify the option in the UI.\nDefault value: 0." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_OptionGuid;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OptionTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_OptionBody;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionIcon;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueOptionData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionGuid = { "OptionGuid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueOptionData, OptionGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionGuid_MetaData), NewProp_OptionGuid_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionTitle = { "OptionTitle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueOptionData, OptionTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionTitle_MetaData), NewProp_OptionTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionBody = { "OptionBody", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueOptionData, OptionBody), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionBody_MetaData), NewProp_OptionBody_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionIcon = { "OptionIcon", nullptr, (EPropertyFlags)0x0114000000020015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueOptionData, OptionIcon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionIcon_MetaData), NewProp_OptionIcon_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueOptionData, UIRowID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIRowID_MetaData), NewProp_UIRowID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_OptionIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewProp_UIRowID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueOptionData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueOptionData",
	Z_Construct_UScriptStruct_FDialogueOptionData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueOptionData_Statics::PropPointers),
	sizeof(FDialogueOptionData),
	alignof(FDialogueOptionData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueOptionData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueOptionData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueOptionData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueOptionData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueOptionData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueOptionData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueOptionData.InnerSingleton;
}
// End ScriptStruct FDialogueOptionData

// Begin Delegate FOnDialogueOptionSelected
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms
	{
		FGuid SelectedOption;
		UUserWidget* CallingWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms, SelectedOption), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::NewProp_CallingWidget = { "CallingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms, CallingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingWidget_MetaData), NewProp_CallingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::NewProp_SelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::NewProp_CallingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnDialogueOptionSelected__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueOptionSelected, FGuid const& SelectedOption, UUserWidget* CallingWidget)
{
	struct _Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms
	{
		FGuid SelectedOption;
		UUserWidget* CallingWidget;
	};
	_Script_MounteaDialogueSystem_eventOnDialogueOptionSelected_Parms Parms;
	Parms.SelectedOption=SelectedOption;
	Parms.CallingWidget=CallingWidget;
	OnDialogueOptionSelected.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnDialogueOptionSelected

// Begin Interface UMounteaDialogueOptionInterface Function GetDialogueOptionData
struct MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms
{
	FDialogueOptionData ReturnValue;
};
FDialogueOptionData IMounteaDialogueOptionInterface::GetDialogueOptionData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueOptionData instead.");
	MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueOptionInterface_GetDialogueOptionData = FName(TEXT("GetDialogueOptionData"));
FDialogueOptionData IMounteaDialogueOptionInterface::Execute_GetDialogueOptionData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionInterface::StaticClass()));
	MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionInterface_GetDialogueOptionData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueOptionInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueOptionData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current dialogue option data.\n\x09 * \n\x09 * @return The current dialogue option data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current dialogue option data.\n\n@return The current dialogue option data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(0, nullptr) }; // 3746218195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionInterface, nullptr, "GetDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::PropPointers), sizeof(MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionInterface_eventGetDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionInterface::execGetDialogueOptionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueOptionData*)Z_Param__Result=P_THIS->GetDialogueOptionData_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionInterface Function GetDialogueOptionData

// Begin Interface UMounteaDialogueOptionInterface Function InitializeDialogueOption
void IMounteaDialogueOptionInterface::InitializeDialogueOption()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeDialogueOption instead.");
}
static FName NAME_UMounteaDialogueOptionInterface_InitializeDialogueOption = FName(TEXT("InitializeDialogueOption"));
void IMounteaDialogueOptionInterface::Execute_InitializeDialogueOption(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionInterface_InitializeDialogueOption);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueOptionInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionInterface::StaticClass())))
	{
		I->InitializeDialogueOption_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Responsible for setting visual data from Dialogue Option data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Responsible for setting visual data from Dialogue Option data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionInterface, nullptr, "InitializeDialogueOption", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionInterface::execInitializeDialogueOption)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDialogueOption_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionInterface Function InitializeDialogueOption

// Begin Interface UMounteaDialogueOptionInterface Function ProcessOptionSelected
void IMounteaDialogueOptionInterface::ProcessOptionSelected()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessOptionSelected instead.");
}
static FName NAME_UMounteaDialogueOptionInterface_ProcessOptionSelected = FName(TEXT("ProcessOptionSelected"));
void IMounteaDialogueOptionInterface::Execute_ProcessOptionSelected(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionInterface_ProcessOptionSelected);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueOptionInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionInterface::StaticClass())))
	{
		I->ProcessOptionSelected_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the event of a dialogue option being selected.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the event of a dialogue option being selected." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionInterface, nullptr, "ProcessOptionSelected", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionInterface::execProcessOptionSelected)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessOptionSelected_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionInterface Function ProcessOptionSelected

// Begin Interface UMounteaDialogueOptionInterface Function ResetDialogueOptionData
void IMounteaDialogueOptionInterface::ResetDialogueOptionData()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetDialogueOptionData instead.");
}
static FName NAME_UMounteaDialogueOptionInterface_ResetDialogueOptionData = FName(TEXT("ResetDialogueOptionData"));
void IMounteaDialogueOptionInterface::Execute_ResetDialogueOptionData(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionInterface_ResetDialogueOptionData);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueOptionInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionInterface::StaticClass())))
	{
		I->ResetDialogueOptionData_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the dialogue option data to its default state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the dialogue option data to its default state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionInterface, nullptr, "ResetDialogueOptionData", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionInterface::execResetDialogueOptionData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetDialogueOptionData_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionInterface Function ResetDialogueOptionData

// Begin Interface UMounteaDialogueOptionInterface Function SetNewDialogueOptionData
struct MounteaDialogueOptionInterface_eventSetNewDialogueOptionData_Parms
{
	FDialogueOptionData NewData;
};
void IMounteaDialogueOptionInterface::SetNewDialogueOptionData(FDialogueOptionData const& NewData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNewDialogueOptionData instead.");
}
static FName NAME_UMounteaDialogueOptionInterface_SetNewDialogueOptionData = FName(TEXT("SetNewDialogueOptionData"));
void IMounteaDialogueOptionInterface::Execute_SetNewDialogueOptionData(UObject* O, FDialogueOptionData const& NewData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueOptionInterface::StaticClass()));
	MounteaDialogueOptionInterface_eventSetNewDialogueOptionData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueOptionInterface_SetNewDialogueOptionData);
	if (Func)
	{
		Parms.NewData=NewData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueOptionInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueOptionInterface::StaticClass())))
	{
		I->SetNewDialogueOptionData_Implementation(NewData);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new dialogue option data.\n\x09 * \n\x09 * @param NewData The new data to set for the dialogue option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new dialogue option data.\n\n@param NewData The new data to set for the dialogue option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionInterface_eventSetNewDialogueOptionData_Parms, NewData), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewData_MetaData), NewProp_NewData_MetaData) }; // 3746218195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::NewProp_NewData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionInterface, nullptr, "SetNewDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::PropPointers), sizeof(MounteaDialogueOptionInterface_eventSetNewDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOptionInterface_eventSetNewDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueOptionInterface::execSetNewDialogueOptionData)
{
	P_GET_STRUCT_REF(FDialogueOptionData,Z_Param_Out_NewData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewDialogueOptionData_Implementation(Z_Param_Out_NewData);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueOptionInterface Function SetNewDialogueOptionData

// Begin Interface UMounteaDialogueOptionInterface
void UMounteaDialogueOptionInterface::StaticRegisterNativesUMounteaDialogueOptionInterface()
{
	UClass* Class = UMounteaDialogueOptionInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetDialogueOptionData", &IMounteaDialogueOptionInterface::execGetDialogueOptionData },
		{ "InitializeDialogueOption", &IMounteaDialogueOptionInterface::execInitializeDialogueOption },
		{ "ProcessOptionSelected", &IMounteaDialogueOptionInterface::execProcessOptionSelected },
		{ "ResetDialogueOptionData", &IMounteaDialogueOptionInterface::execResetDialogueOptionData },
		{ "SetNewDialogueOptionData", &IMounteaDialogueOptionInterface::execSetNewDialogueOptionData },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueOptionInterface);
UClass* Z_Construct_UClass_UMounteaDialogueOptionInterface_NoRegister()
{
	return UMounteaDialogueOptionInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueOptionInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueOptionInterface_GetDialogueOptionData, "GetDialogueOptionData" }, // 2780817315
		{ &Z_Construct_UFunction_UMounteaDialogueOptionInterface_InitializeDialogueOption, "InitializeDialogueOption" }, // 1171876660
		{ &Z_Construct_UFunction_UMounteaDialogueOptionInterface_ProcessOptionSelected, "ProcessOptionSelected" }, // 1027075690
		{ &Z_Construct_UFunction_UMounteaDialogueOptionInterface_ResetDialogueOptionData, "ResetDialogueOptionData" }, // 880716097
		{ &Z_Construct_UFunction_UMounteaDialogueOptionInterface_SetNewDialogueOptionData, "SetNewDialogueOptionData" }, // 3845887599
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueOptionInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::ClassParams = {
	&UMounteaDialogueOptionInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueOptionInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueOptionInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueOptionInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueOptionInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueOptionInterface>()
{
	return UMounteaDialogueOptionInterface::StaticClass();
}
UMounteaDialogueOptionInterface::UMounteaDialogueOptionInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueOptionInterface);
UMounteaDialogueOptionInterface::~UMounteaDialogueOptionInterface() {}
// End Interface UMounteaDialogueOptionInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueOptionData::StaticStruct, Z_Construct_UScriptStruct_FDialogueOptionData_Statics::NewStructOps, TEXT("DialogueOptionData"), &Z_Registration_Info_UScriptStruct_DialogueOptionData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueOptionData), 3746218195U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueOptionInterface, UMounteaDialogueOptionInterface::StaticClass, TEXT("UMounteaDialogueOptionInterface"), &Z_Registration_Info_UClass_UMounteaDialogueOptionInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueOptionInterface), 286951956U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_2748652961(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
