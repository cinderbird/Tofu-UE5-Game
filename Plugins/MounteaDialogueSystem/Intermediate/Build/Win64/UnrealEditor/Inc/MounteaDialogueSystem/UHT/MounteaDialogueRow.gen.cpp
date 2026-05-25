// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/WBP/MounteaDialogueRow.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueRowInterface.h"
#include "Runtime/Engine/Classes/Engine/TimerHandle.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueRow() {}

// Begin Cross Module References
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueRow();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueRow_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueRowInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueUIBaseInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetDialogueRow();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueRow Function CompleteTypeWriterEffect_Callback
struct Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics
{
	struct MounteaDialogueRow_eventCompleteTypeWriterEffect_Callback_Parms
	{
		FText SourceText;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventCompleteTypeWriterEffect_Callback_Parms, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::NewProp_SourceText,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRow, nullptr, "CompleteTypeWriterEffect_Callback", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::MounteaDialogueRow_eventCompleteTypeWriterEffect_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::MounteaDialogueRow_eventCompleteTypeWriterEffect_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueRow::execCompleteTypeWriterEffect_Callback)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SourceText);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CompleteTypeWriterEffect_Callback(Z_Param_Out_SourceText);
	P_NATIVE_END;
}
// End Class UMounteaDialogueRow Function CompleteTypeWriterEffect_Callback

// Begin Class UMounteaDialogueRow Function OnTypeWriterEffectFinished
static const FName NAME_UMounteaDialogueRow_OnTypeWriterEffectFinished = FName(TEXT("OnTypeWriterEffectFinished"));
void UMounteaDialogueRow::OnTypeWriterEffectFinished()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueRow_OnTypeWriterEffectFinished);
	ProcessEvent(Func,NULL);
}
struct Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Monutea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n     * Called when the typewriter effect is finished.\n     */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when the typewriter effect is finished." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRow, nullptr, "OnTypeWriterEffectFinished", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMounteaDialogueRow Function OnTypeWriterEffectFinished

// Begin Class UMounteaDialogueRow Function OnTypeWriterEffectUpdated
struct MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms
{
	FText UpdatedText;
	float Alpha;
};
static const FName NAME_UMounteaDialogueRow_OnTypeWriterEffectUpdated = FName(TEXT("OnTypeWriterEffectUpdated"));
void UMounteaDialogueRow::OnTypeWriterEffectUpdated(FText const& UpdatedText, float Alpha)
{
	MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms Parms;
	Parms.UpdatedText=UpdatedText;
	Parms.Alpha=Alpha;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueRow_OnTypeWriterEffectUpdated);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Monutea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called every time the text is updated during the typewriter effect.\n\x09 * @param UpdatedText\x09\x09The text that has been updated.\n\x09 * @param Alpha\x09\x09\x09\x09\x09The progress of the typewriter effect (0 to 1).\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called every time the text is updated during the typewriter effect.\n@param UpdatedText           The text that has been updated.\n@param Alpha                                 The progress of the typewriter effect (0 to 1)." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UpdatedText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_UpdatedText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Alpha;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::NewProp_UpdatedText = { "UpdatedText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms, UpdatedText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UpdatedText_MetaData), NewProp_UpdatedText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::NewProp_Alpha = { "Alpha", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms, Alpha), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::NewProp_UpdatedText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::NewProp_Alpha,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRow, nullptr, "OnTypeWriterEffectUpdated", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::PropPointers), sizeof(MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08480800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueRow_eventOnTypeWriterEffectUpdated_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMounteaDialogueRow Function OnTypeWriterEffectUpdated

// Begin Class UMounteaDialogueRow Function UpdateTypeWriterEffect_Callback
struct Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics
{
	struct MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms
	{
		FText SourceText;
		int32 CurrentCharacterIndex;
		float TotalDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentCharacterIndex;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_TotalDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_CurrentCharacterIndex = { "CurrentCharacterIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms, CurrentCharacterIndex), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_TotalDuration = { "TotalDuration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms, TotalDuration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_SourceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_CurrentCharacterIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::NewProp_TotalDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueRow, nullptr, "UpdateTypeWriterEffect_Callback", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::MounteaDialogueRow_eventUpdateTypeWriterEffect_Callback_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueRow::execUpdateTypeWriterEffect_Callback)
{
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SourceText);
	P_GET_PROPERTY(FIntProperty,Z_Param_CurrentCharacterIndex);
	P_GET_PROPERTY(FFloatProperty,Z_Param_TotalDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UpdateTypeWriterEffect_Callback(Z_Param_Out_SourceText,Z_Param_CurrentCharacterIndex,Z_Param_TotalDuration);
	P_NATIVE_END;
}
// End Class UMounteaDialogueRow Function UpdateTypeWriterEffect_Callback

// Begin Class UMounteaDialogueRow
void UMounteaDialogueRow::StaticRegisterNativesUMounteaDialogueRow()
{
	UClass* Class = UMounteaDialogueRow::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CompleteTypeWriterEffect_Callback", &UMounteaDialogueRow::execCompleteTypeWriterEffect_Callback },
		{ "UpdateTypeWriterEffect_Callback", &UMounteaDialogueRow::execUpdateTypeWriterEffect_Callback },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueRow);
UClass* Z_Construct_UClass_UMounteaDialogueRow_NoRegister()
{
	return UMounteaDialogueRow::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMounteaDialogueRow\n *\n * A UserWidget class that implements the 'MounteaDialogueRowInterface', providing functionalities for dialogue rows in the Mountea Dialogue System.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Row" },
		{ "IncludePath", "WBP/MounteaDialogueRow.h" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMounteaDialogueRow\n\nA UserWidget class that implements the 'MounteaDialogueRowInterface', providing functionalities for dialogue rows in the Mountea Dialogue System." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_TypeWriterDuration_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer Handle responsible for the whole Duration of the effect\n" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer Handle responsible for the whole Duration of the effect" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TimerHandle_TypeWriterUpdateInterval_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Timer Handle responsible for each character update\n" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Timer Handle responsible for each character update" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowData_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dialogue Row Data.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Row Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseTypeWriterEffect_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines whether the Row is using Type-Writer effect to display text.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether the Row is using Type-Writer effect to display text." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnTypeWriterEffectChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event triggered upon updating 'bUseTypeWriterEffect'\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Delegate" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event triggered upon updating 'bUseTypeWriterEffect'" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_TypeWriterDuration;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TimerHandle_TypeWriterUpdateInterval;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueRowData;
	static void NewProp_bUseTypeWriterEffect_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseTypeWriterEffect;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnTypeWriterEffectChanged;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueRow_CompleteTypeWriterEffect_Callback, "CompleteTypeWriterEffect_Callback" }, // 1025843602
		{ &Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectFinished, "OnTypeWriterEffectFinished" }, // 3342964960
		{ &Z_Construct_UFunction_UMounteaDialogueRow_OnTypeWriterEffectUpdated, "OnTypeWriterEffectUpdated" }, // 3656623838
		{ &Z_Construct_UFunction_UMounteaDialogueRow_UpdateTypeWriterEffect_Callback, "UpdateTypeWriterEffect_Callback" }, // 3651203676
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_TimerHandle_TypeWriterDuration = { "TimerHandle_TypeWriterDuration", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueRow, TimerHandle_TypeWriterDuration), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_TypeWriterDuration_MetaData), NewProp_TimerHandle_TypeWriterDuration_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_TimerHandle_TypeWriterUpdateInterval = { "TimerHandle_TypeWriterUpdateInterval", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueRow, TimerHandle_TypeWriterUpdateInterval), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TimerHandle_TypeWriterUpdateInterval_MetaData), NewProp_TimerHandle_TypeWriterUpdateInterval_MetaData) }; // 756291145
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_DialogueRowData = { "DialogueRowData", nullptr, (EPropertyFlags)0x0021080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueRow, DialogueRowData), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowData_MetaData), NewProp_DialogueRowData_MetaData) }; // 3704941342
void Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_bUseTypeWriterEffect_SetBit(void* Obj)
{
	((UMounteaDialogueRow*)Obj)->bUseTypeWriterEffect = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_bUseTypeWriterEffect = { "bUseTypeWriterEffect", nullptr, (EPropertyFlags)0x0021080000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueRow), &Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_bUseTypeWriterEffect_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseTypeWriterEffect_MetaData), NewProp_bUseTypeWriterEffect_MetaData) };
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_OnTypeWriterEffectChanged = { "OnTypeWriterEffectChanged", nullptr, (EPropertyFlags)0x0020080010080014, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueRow, OnTypeWriterEffectChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnTypeWriterEffectChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnTypeWriterEffectChanged_MetaData), NewProp_OnTypeWriterEffectChanged_MetaData) }; // 3845823645
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_TimerHandle_TypeWriterDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_TimerHandle_TypeWriterUpdateInterval,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_DialogueRowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_bUseTypeWriterEffect,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueRow_Statics::NewProp_OnTypeWriterEffectChanged,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueRow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueRow_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueRowInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueRow, IMounteaDialogueRowInterface), false },  // 41698810
	{ Z_Construct_UClass_UMounteaDialogueUIBaseInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueRow, IMounteaDialogueUIBaseInterface), false },  // 4118823433
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueRow_Statics::ClassParams = {
	&UMounteaDialogueRow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueRow_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRow_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueRow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueRow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueRow()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueRow.OuterSingleton, Z_Construct_UClass_UMounteaDialogueRow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueRow.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueRow>()
{
	return UMounteaDialogueRow::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueRow);
UMounteaDialogueRow::~UMounteaDialogueRow() {}
// End Class UMounteaDialogueRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueRow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueRow, UMounteaDialogueRow::StaticClass, TEXT("UMounteaDialogueRow"), &Z_Registration_Info_UClass_UMounteaDialogueRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueRow), 943975245U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueRow_h_4045145049(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueRow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
