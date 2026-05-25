// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueRowInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueRowInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueRowInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueRowInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetDialogueRow();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FOnTypeWriterEffectChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms
	{
		bool bEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
	};
#endif // WITH_METADATA
	static void NewProp_bEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::NewProp_bEnabled_SetBit(void* Obj)
{
	((_Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms*)Obj)->bEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::NewProp_bEnabled = { "bEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms), &Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::NewProp_bEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::NewProp_bEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnTypeWriterEffectChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnTypeWriterEffectChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeWriterEffectChanged, bool bEnabled)
{
	struct _Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms
	{
		bool bEnabled;
	};
	_Script_MounteaDialogueSystem_eventOnTypeWriterEffectChanged_Parms Parms;
	Parms.bEnabled=bEnabled ? true : false;
	OnTypeWriterEffectChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnTypeWriterEffectChanged

// Begin ScriptStruct FWidgetDialogueRow
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetDialogueRow;
class UScriptStruct* FWidgetDialogueRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetDialogueRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetDialogueRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetDialogueRow, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("WidgetDialogueRow"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetDialogueRow.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FWidgetDialogueRow>()
{
	return FWidgetDialogueRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * A helper struct to move Dialogue Row data around.\n */" },
#endif
		{ "HasNativeMake", "/Script/MounteaDialogueSystem.MounteaDialogueHUDStatics.NewDialogueWidgetRowData" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "A helper struct to move Dialogue Row data around." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowParticipantName_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The name of the dialogue participant.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The name of the dialogue participant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowTitle_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The title of the dialogue row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The title of the dialogue row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowBody_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The text of the dialogue row body.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The text of the dialogue row body." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowDuration_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The duration of the dialogue row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The duration of the dialogue row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The UI row ID.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The UI row ID." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowOptionalIcon_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * An optional icon for the dialogue row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "An optional icon for the dialogue row." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowGuid_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The unique identifier for the dialogue row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The unique identifier for the dialogue row." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueRowParticipantName;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueRowTitle;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueRowBody;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowDuration;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowOptionalIcon;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowGuid;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetDialogueRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowParticipantName = { "DialogueRowParticipantName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, DialogueRowParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowParticipantName_MetaData), NewProp_DialogueRowParticipantName_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowTitle = { "DialogueRowTitle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, DialogueRowTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowTitle_MetaData), NewProp_DialogueRowTitle_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowBody = { "DialogueRowBody", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, DialogueRowBody), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowBody_MetaData), NewProp_DialogueRowBody_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowDuration = { "RowDuration", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, RowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowDuration_MetaData), NewProp_RowDuration_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, UIRowID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIRowID_MetaData), NewProp_UIRowID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowOptionalIcon = { "RowOptionalIcon", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, RowOptionalIcon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowOptionalIcon_MetaData), NewProp_RowOptionalIcon_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowGuid = { "RowGuid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetDialogueRow, RowGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowGuid_MetaData), NewProp_RowGuid_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_DialogueRowBody,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_UIRowID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowOptionalIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewProp_RowGuid,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"WidgetDialogueRow",
	Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::PropPointers),
	sizeof(FWidgetDialogueRow),
	alignof(FWidgetDialogueRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetDialogueRow()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetDialogueRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetDialogueRow.InnerSingleton, Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetDialogueRow.InnerSingleton;
}
// End ScriptStruct FWidgetDialogueRow

// Begin Interface UMounteaDialogueRowInterface Function EnableTypeWriterEffect
struct MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms
{
	bool bEnable;
};
void IMounteaDialogueRowInterface::EnableTypeWriterEffect(bool bEnable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_EnableTypeWriterEffect instead.");
}
static FName NAME_UMounteaDialogueRowInterface_EnableTypeWriterEffect = FName(TEXT("EnableTypeWriterEffect"));
void IMounteaDialogueRowInterface::Execute_EnableTypeWriterEffect(UObject* O, bool bEnable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_EnableTypeWriterEffect);
	if (Func)
	{
		Parms.bEnable=bEnable;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->EnableTypeWriterEffect_Implementation(bEnable);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables the typewriter effect based on the specified parameter.\n\x09 *\n\x09 * @param bEnable Whether to enable or disable the effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the typewriter effect based on the specified parameter.\n\n@param bEnable Whether to enable or disable the effect." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms), &Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "EnableTypeWriterEffect", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::PropPointers), sizeof(MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueRowInterface_eventEnableTypeWriterEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execEnableTypeWriterEffect)
{
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->EnableTypeWriterEffect_Implementation(Z_Param_bEnable);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function EnableTypeWriterEffect

// Begin Interface UMounteaDialogueRowInterface Function GetDialogueWidgetRowData
struct MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms
{
	FWidgetDialogueRow ReturnValue;
};
FWidgetDialogueRow IMounteaDialogueRowInterface::GetDialogueWidgetRowData() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetDialogueWidgetRowData instead.");
	MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueRowInterface_GetDialogueWidgetRowData = FName(TEXT("GetDialogueWidgetRowData"));
FWidgetDialogueRow IMounteaDialogueRowInterface::Execute_GetDialogueWidgetRowData(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_GetDialogueWidgetRowData);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetDialogueWidgetRowData_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the dialogue row data associated with the widget.\n\x09 *\n\x09 * @return FWidgetDialogueRow containing the dialogue row data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the dialogue row data associated with the widget.\n\n@return FWidgetDialogueRow containing the dialogue row data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3704941342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "GetDialogueWidgetRowData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::PropPointers), sizeof(MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueRowInterface_eventGetDialogueWidgetRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execGetDialogueWidgetRowData)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWidgetDialogueRow*)Z_Param__Result=P_THIS->GetDialogueWidgetRowData_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function GetDialogueWidgetRowData

// Begin Interface UMounteaDialogueRowInterface Function InitializeWidgetDialogueRow
void IMounteaDialogueRowInterface::InitializeWidgetDialogueRow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeWidgetDialogueRow instead.");
}
static FName NAME_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow = FName(TEXT("InitializeWidgetDialogueRow"));
void IMounteaDialogueRowInterface::Execute_InitializeWidgetDialogueRow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->InitializeWidgetDialogueRow_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the widget's dialogue row data.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the widget's dialogue row data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "InitializeWidgetDialogueRow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execInitializeWidgetDialogueRow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeWidgetDialogueRow_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function InitializeWidgetDialogueRow

// Begin Interface UMounteaDialogueRowInterface Function ResetWidgetDialogueRow
void IMounteaDialogueRowInterface::ResetWidgetDialogueRow()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ResetWidgetDialogueRow instead.");
}
static FName NAME_UMounteaDialogueRowInterface_ResetWidgetDialogueRow = FName(TEXT("ResetWidgetDialogueRow"));
void IMounteaDialogueRowInterface::Execute_ResetWidgetDialogueRow(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_ResetWidgetDialogueRow);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->ResetWidgetDialogueRow_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the widget's dialogue row data to the default state.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the widget's dialogue row data to the default state." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "ResetWidgetDialogueRow", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execResetWidgetDialogueRow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetWidgetDialogueRow_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function ResetWidgetDialogueRow

// Begin Interface UMounteaDialogueRowInterface Function SetNewWidgetDialogueRowData
struct MounteaDialogueRowInterface_eventSetNewWidgetDialogueRowData_Parms
{
	FWidgetDialogueRow NewData;
};
void IMounteaDialogueRowInterface::SetNewWidgetDialogueRowData(FWidgetDialogueRow const& NewData)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetNewWidgetDialogueRowData instead.");
}
static FName NAME_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData = FName(TEXT("SetNewWidgetDialogueRowData"));
void IMounteaDialogueRowInterface::Execute_SetNewWidgetDialogueRowData(UObject* O, FWidgetDialogueRow const& NewData)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	MounteaDialogueRowInterface_eventSetNewWidgetDialogueRowData_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData);
	if (Func)
	{
		Parms.NewData=NewData;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->SetNewWidgetDialogueRowData_Implementation(NewData);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new dialogue row data for the widget.\n\x09 *\n\x09 * @param NewData The new dialogue row data to set.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new dialogue row data for the widget.\n\n@param NewData The new dialogue row data to set." },
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
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRowInterface_eventSetNewWidgetDialogueRowData_Parms, NewData), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewData_MetaData), NewProp_NewData_MetaData) }; // 3704941342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::NewProp_NewData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "SetNewWidgetDialogueRowData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::PropPointers), sizeof(MounteaDialogueRowInterface_eventSetNewWidgetDialogueRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueRowInterface_eventSetNewWidgetDialogueRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execSetNewWidgetDialogueRowData)
{
	P_GET_STRUCT_REF(FWidgetDialogueRow,Z_Param_Out_NewData);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetNewWidgetDialogueRowData_Implementation(Z_Param_Out_NewData);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function SetNewWidgetDialogueRowData

// Begin Interface UMounteaDialogueRowInterface Function StartTypeWriterEffect
struct MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms
{
	FText SourceText;
	float Duration;
};
void IMounteaDialogueRowInterface::StartTypeWriterEffect(FText const& SourceText, float Duration)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StartTypeWriterEffect instead.");
}
static FName NAME_UMounteaDialogueRowInterface_StartTypeWriterEffect = FName(TEXT("StartTypeWriterEffect"));
void IMounteaDialogueRowInterface::Execute_StartTypeWriterEffect(UObject* O, FText const& SourceText, float Duration)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_StartTypeWriterEffect);
	if (Func)
	{
		Parms.SourceText=SourceText;
		Parms.Duration=Duration;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->StartTypeWriterEffect_Implementation(SourceText,Duration);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the typewriter effect on the specified text for a given duration.\n\x09 *\n\x09 * @param SourceText The full text to display.\n\x09 * @param Duration The duration over which the typewriter effect should play.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the typewriter effect on the specified text for a given duration.\n\n@param SourceText The full text to display.\n@param Duration The duration over which the typewriter effect should play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::NewProp_SourceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "StartTypeWriterEffect", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::PropPointers), sizeof(MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueRowInterface_eventStartTypeWriterEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execStartTypeWriterEffect)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SourceText);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StartTypeWriterEffect_Implementation(Z_Param_Out_SourceText,Z_Param_Duration);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function StartTypeWriterEffect

// Begin Interface UMounteaDialogueRowInterface Function StopTypeWriterEffect
void IMounteaDialogueRowInterface::StopTypeWriterEffect()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_StopTypeWriterEffect instead.");
}
static FName NAME_UMounteaDialogueRowInterface_StopTypeWriterEffect = FName(TEXT("StopTypeWriterEffect"));
void IMounteaDialogueRowInterface::Execute_StopTypeWriterEffect(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueRowInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueRowInterface_StopTypeWriterEffect);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueRowInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueRowInterface::StaticClass())))
	{
		I->StopTypeWriterEffect_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops the typewriter effect and finishes displaying the text.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the typewriter effect and finishes displaying the text." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRowInterface, nullptr, "StopTypeWriterEffect", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueRowInterface::execStopTypeWriterEffect)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StopTypeWriterEffect_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueRowInterface Function StopTypeWriterEffect

// Begin Interface UMounteaDialogueRowInterface
void UMounteaDialogueRowInterface::StaticRegisterNativesUMounteaDialogueRowInterface()
{
	UClass* Class = UMounteaDialogueRowInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "EnableTypeWriterEffect", &IMounteaDialogueRowInterface::execEnableTypeWriterEffect },
		{ "GetDialogueWidgetRowData", &IMounteaDialogueRowInterface::execGetDialogueWidgetRowData },
		{ "InitializeWidgetDialogueRow", &IMounteaDialogueRowInterface::execInitializeWidgetDialogueRow },
		{ "ResetWidgetDialogueRow", &IMounteaDialogueRowInterface::execResetWidgetDialogueRow },
		{ "SetNewWidgetDialogueRowData", &IMounteaDialogueRowInterface::execSetNewWidgetDialogueRowData },
		{ "StartTypeWriterEffect", &IMounteaDialogueRowInterface::execStartTypeWriterEffect },
		{ "StopTypeWriterEffect", &IMounteaDialogueRowInterface::execStopTypeWriterEffect },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueRowInterface);
UClass* Z_Construct_UClass_UMounteaDialogueRowInterface_NoRegister()
{
	return UMounteaDialogueRowInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueRowInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueRowInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_EnableTypeWriterEffect, "EnableTypeWriterEffect" }, // 17293900
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_GetDialogueWidgetRowData, "GetDialogueWidgetRowData" }, // 3987557396
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_InitializeWidgetDialogueRow, "InitializeWidgetDialogueRow" }, // 2065362810
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_ResetWidgetDialogueRow, "ResetWidgetDialogueRow" }, // 3499170170
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_SetNewWidgetDialogueRowData, "SetNewWidgetDialogueRowData" }, // 3396694167
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_StartTypeWriterEffect, "StartTypeWriterEffect" }, // 2866297684
		{ &Z_Construct_UFunction_UMounteaDialogueRowInterface_StopTypeWriterEffect, "StopTypeWriterEffect" }, // 231559910
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueRowInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::ClassParams = {
	&UMounteaDialogueRowInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueRowInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueRowInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueRowInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueRowInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueRowInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueRowInterface>()
{
	return UMounteaDialogueRowInterface::StaticClass();
}
UMounteaDialogueRowInterface::UMounteaDialogueRowInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueRowInterface);
UMounteaDialogueRowInterface::~UMounteaDialogueRowInterface() {}
// End Interface UMounteaDialogueRowInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetDialogueRow::StaticStruct, Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics::NewStructOps, TEXT("WidgetDialogueRow"), &Z_Registration_Info_UScriptStruct_WidgetDialogueRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetDialogueRow), 3704941342U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueRowInterface, UMounteaDialogueRowInterface::StaticClass, TEXT("UMounteaDialogueRowInterface"), &Z_Registration_Info_UClass_UMounteaDialogueRowInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueRowInterface), 41698810U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_2925274562(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
