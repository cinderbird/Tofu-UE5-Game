// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Settings/MounteaDialogueSystemSettings.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemSettings() {}

// Begin Cross Module References
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueSystemSettings Function CanSkipWholeRow
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics
{
	struct MounteaDialogueSystemSettings_eventCanSkipWholeRow_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether skipping a dialogue row skips the whole row or only the audio.\n\x09 * \n\x09 * @return True if skipping finishes the entire row, false if it only skips the audio.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether skipping a dialogue row skips the whole row or only the audio.\n\n@return True if skipping finishes the entire row, false if it only skips the audio." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemSettings_eventCanSkipWholeRow_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemSettings_eventCanSkipWholeRow_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "CanSkipWholeRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::MounteaDialogueSystemSettings_eventCanSkipWholeRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::MounteaDialogueSystemSettings_eventCanSkipWholeRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execCanSkipWholeRow)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->CanSkipWholeRow();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function CanSkipWholeRow

// Begin Class UMounteaDialogueSystemSettings Function GetAllowedLoggVerbosity
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics
{
	struct MounteaDialogueSystemSettings_eventGetAllowedLoggVerbosity_Parms
	{
		EMounteaDialogueLoggingVerbosity ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetAllowedLoggVerbosity_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity, METADATA_PARAMS(0, nullptr) }; // 2664919773
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetAllowedLoggVerbosity", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::MounteaDialogueSystemSettings_eventGetAllowedLoggVerbosity_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::MounteaDialogueSystemSettings_eventGetAllowedLoggVerbosity_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetAllowedLoggVerbosity)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMounteaDialogueLoggingVerbosity*)Z_Param__Result=P_THIS->GetAllowedLoggVerbosity();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetAllowedLoggVerbosity

// Begin Class UMounteaDialogueSystemSettings Function GetDefaultDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics
{
	struct MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms
	{
		TSoftClassPtr<UUserWidget>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Default Dialogue Widget if any is defined.\n\x09 * \xe2\x9d\x97 Might return Null\xe2\x9d\x97\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Default Dialogue Widget if any is defined.\n\xe2\x9d\x97 Might return Null\xe2\x9d\x97" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDefaultDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::MounteaDialogueSystemSettings_eventGetDefaultDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDefaultDialogueWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=P_THIS->GetDefaultDialogueWidget();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetDefaultDialogueWidget

// Begin Class UMounteaDialogueSystemSettings Function GetDialogueConfiguration
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics
{
	struct MounteaDialogueSystemSettings_eventGetDialogueConfiguration_Parms
	{
		TSoftObjectPtr<UMounteaDialogueConfiguration> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDialogueConfiguration_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDialogueConfiguration", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::MounteaDialogueSystemSettings_eventGetDialogueConfiguration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::MounteaDialogueSystemSettings_eventGetDialogueConfiguration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDialogueConfiguration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftObjectPtr<UMounteaDialogueConfiguration>*)Z_Param__Result=P_THIS->GetDialogueConfiguration();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetDialogueConfiguration

// Begin Class UMounteaDialogueSystemSettings Function GetDialogueInputMode
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics
{
	struct MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms
	{
		EMounteaInputMode ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the current input mode used during dialogue.\n\x09 * \n\x09 * @return The input mode (e.g., Game Only, UI Only, or Game and UI) set for dialogue interaction.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the current input mode used during dialogue.\n\n@return The input mode (e.g., Game Only, UI Only, or Game and UI) set for dialogue interaction." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode, METADATA_PARAMS(0, nullptr) }; // 3790143152
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDialogueInputMode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::MounteaDialogueSystemSettings_eventGetDialogueInputMode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDialogueInputMode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EMounteaInputMode*)Z_Param__Result=P_THIS->GetDialogueInputMode();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetDialogueInputMode

// Begin Class UMounteaDialogueSystemSettings Function GetDurationCoefficient
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics
{
	struct MounteaDialogueSystemSettings_eventGetDurationCoefficient_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the duration coefficient used for automatic dialogue row progression.\n\x09 * \n\x09 * @return The speed coefficient per 100 characters for the `Automatic` RowDurationMode.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the duration coefficient used for automatic dialogue row progression.\n\n@return The speed coefficient per 100 characters for the `Automatic` RowDurationMode." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetDurationCoefficient_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetDurationCoefficient", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::MounteaDialogueSystemSettings_eventGetDurationCoefficient_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::MounteaDialogueSystemSettings_eventGetDurationCoefficient_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetDurationCoefficient)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetDurationCoefficient();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetDurationCoefficient

// Begin Class UMounteaDialogueSystemSettings Function GetSkipDuration
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics
{
	struct MounteaDialogueSystemSettings_eventGetSkipDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSkipDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetSkipDuration", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::MounteaDialogueSystemSettings_eventGetSkipDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::MounteaDialogueSystemSettings_eventGetSkipDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetSkipDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSkipDuration();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetSkipDuration

// Begin Class UMounteaDialogueSystemSettings Function GetSkipFadeDuration
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics
{
	struct MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the fade duration when skipping voice or audio in the dialogue.\n\x09 * \n\x09 * @return The duration, in seconds, of the fade-out effect when audio is skipped.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "SkipFadeDuration" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "skip, fade, easy, smooth" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the fade duration when skipping voice or audio in the dialogue.\n\n@return The duration, in seconds, of the fade-out effect when audio is skipped." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetSkipFadeDuration", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::MounteaDialogueSystemSettings_eventGetSkipFadeDuration_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetSkipFadeDuration)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetSkipFadeDuration();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetSkipFadeDuration

// Begin Class UMounteaDialogueSystemSettings Function GetSubtitlesSettings
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics
{
	struct MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms
	{
		FUIRowID RowID;
		FSubtitlesSettings ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Subtitles Settings.\n\x09 * If given 'RowID' then it will search for Subtitles Settings override for this class, if any is specified.\n\x09 * \n\x09 * If 'SubtitlesSettingsOverrides' are specified but invalid, 'SubtitlesSettings' are returned instead like no optional filters were provided.\n\x09 * \n\x09 * @param RowID Optional row ID of the UserWidget for which to search for override settings.\n\x09 * @return The subtitles settings for the given row or the default settings if no override is found.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Subtitles Settings.\nIf given 'RowID' then it will search for Subtitles Settings override for this class, if any is specified.\n\nIf 'SubtitlesSettingsOverrides' are specified but invalid, 'SubtitlesSettings' are returned instead like no optional filters were provided.\n\n@param RowID Optional row ID of the UserWidget for which to search for override settings.\n@return The subtitles settings for the given row or the default settings if no override is found." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID = { "RowID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms, RowID), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowID_MetaData), NewProp_RowID_MetaData) }; // 2459096273
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms, ReturnValue), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(0, nullptr) }; // 1339227483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_RowID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetSubtitlesSettings", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventGetSubtitlesSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetSubtitlesSettings)
{
	P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_RowID);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FSubtitlesSettings*)Z_Param__Result=P_THIS->GetSubtitlesSettings(Z_Param_Out_RowID);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetSubtitlesSettings

// Begin Class UMounteaDialogueSystemSettings Function GetWidgetUpdateFrequency
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics
{
	struct MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms
	{
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns the update frequency of the dialogue widgets.\n\x09 * \n\x09 * @return The frequency, in seconds, at which the widgets are updated.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Update Frequency" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "Keywords", "update, refresh, tick, frequency" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the update frequency of the dialogue widgets.\n\n@return The frequency, in seconds, at which the widgets are updated." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "GetWidgetUpdateFrequency", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::MounteaDialogueSystemSettings_eventGetWidgetUpdateFrequency_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execGetWidgetUpdateFrequency)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=P_THIS->GetWidgetUpdateFrequency();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function GetWidgetUpdateFrequency

// Begin Class UMounteaDialogueSystemSettings Function SetSubtitlesSettings
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics
{
	struct MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms
	{
		FSubtitlesSettings NewSettings;
		FUIRowID RowID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new subtitles settings for a specific widget or applies them globally.\n\x09 * \n\x09 * If a valid `RowID` is provided, the new settings will override the subtitles settings for that widget. \n\x09 * If no `RowID` is specified or it is invalid, the new settings are applied globally to all widgets.\n\x09 * \n\x09 * @param NewSettings The new subtitles settings to apply.\n\x09 * @param RowID The row ID of the UserWidget for which to apply the settings. If not provided, the settings apply globally.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new subtitles settings for a specific widget or applies them globally.\n\nIf a valid `RowID` is provided, the new settings will override the subtitles settings for that widget.\nIf no `RowID` is specified or it is invalid, the new settings are applied globally to all widgets.\n\n@param NewSettings The new subtitles settings to apply.\n@param RowID The row ID of the UserWidget for which to apply the settings. If not provided, the settings apply globally." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewSettings_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings = { "NewSettings", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms, NewSettings), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewSettings_MetaData), NewProp_NewSettings_MetaData) }; // 1339227483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_RowID = { "RowID", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms, RowID), Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(0, nullptr) }; // 2459096273
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_NewSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::NewProp_RowID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "SetSubtitlesSettings", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::MounteaDialogueSystemSettings_eventSetSubtitlesSettings_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execSetSubtitlesSettings)
{
	P_GET_STRUCT_REF(FSubtitlesSettings,Z_Param_Out_NewSettings);
	P_GET_STRUCT_REF(FUIRowID,Z_Param_Out_RowID);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetSubtitlesSettings(Z_Param_Out_NewSettings,Z_Param_Out_RowID);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function SetSubtitlesSettings

// Begin Class UMounteaDialogueSystemSettings Function SubtitlesAllowed
struct Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics
{
	struct MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Settings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns whether subtitles are allowed or not.\n\x09 * \n\x09 * @return True if subtitles are allowed, false otherwise.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether subtitles are allowed or not.\n\n@return True if subtitles are allowed, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms), &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemSettings, nullptr, "SubtitlesAllowed", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::MounteaDialogueSystemSettings_eventSubtitlesAllowed_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemSettings::execSubtitlesAllowed)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->SubtitlesAllowed();
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemSettings Function SubtitlesAllowed

// Begin Class UMounteaDialogueSystemSettings
void UMounteaDialogueSystemSettings::StaticRegisterNativesUMounteaDialogueSystemSettings()
{
	UClass* Class = UMounteaDialogueSystemSettings::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CanSkipWholeRow", &UMounteaDialogueSystemSettings::execCanSkipWholeRow },
		{ "GetAllowedLoggVerbosity", &UMounteaDialogueSystemSettings::execGetAllowedLoggVerbosity },
		{ "GetDefaultDialogueWidget", &UMounteaDialogueSystemSettings::execGetDefaultDialogueWidget },
		{ "GetDialogueConfiguration", &UMounteaDialogueSystemSettings::execGetDialogueConfiguration },
		{ "GetDialogueInputMode", &UMounteaDialogueSystemSettings::execGetDialogueInputMode },
		{ "GetDurationCoefficient", &UMounteaDialogueSystemSettings::execGetDurationCoefficient },
		{ "GetSkipDuration", &UMounteaDialogueSystemSettings::execGetSkipDuration },
		{ "GetSkipFadeDuration", &UMounteaDialogueSystemSettings::execGetSkipFadeDuration },
		{ "GetSubtitlesSettings", &UMounteaDialogueSystemSettings::execGetSubtitlesSettings },
		{ "GetWidgetUpdateFrequency", &UMounteaDialogueSystemSettings::execGetWidgetUpdateFrequency },
		{ "SetSubtitlesSettings", &UMounteaDialogueSystemSettings::execSetSubtitlesSettings },
		{ "SubtitlesAllowed", &UMounteaDialogueSystemSettings::execSubtitlesAllowed },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemSettings);
UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings_NoRegister()
{
	return UMounteaDialogueSystemSettings::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue System Runtime Settigns.\n * \n * Holds a list of settings that are used to further improve and tweak Dialogues.\n */" },
#endif
		{ "IncludePath", "Settings/MounteaDialogueSystemSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue System Runtime Settigns.\n\nHolds a list of settings that are used to further improve and tweak Dialogues." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueConfiguration_MetaData[] = {
		{ "Category", "Configuration" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Mountea Dialogue Configuration.\n\x09 * Contains all gameplay configuration that was stored in settings.\n\x09 * Defines update frequency, Widget classes etc.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Configuration.\nContains all gameplay configuration that was stored in settings.\nDefines update frequency, Widget classes etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueWidgetCommands_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of Dialogue commands.\n\x09 * Dialogue Commands are used to provide information what action should happen.\n\x09 * \xe2\x9d\x94 Some values are hardcoded and cannot be deleted, thos are used for C++ requests\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Dialogue commands.\nDialogue Commands are used to provide information what action should happen.\n\xe2\x9d\x94 Some values are hardcoded and cannot be deleted, thos are used for C++ requests" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LogVerbosity_MetaData[] = {
		{ "Bitmask", "" },
		{ "BitmaskEnum", "/Script/MounteaDialogueSystem.EMounteaDialogueLoggingVerbosity" },
		{ "Category", "Logging" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines logging level that is allowed to be shown.\n\x09 * Affects on-screen messages.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines logging level that is allowed to be shown.\nAffects on-screen messages." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettings_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of General Dialogue Settings.\n\x09 * Defines font, sizes etc. for all subtitles.\n\x09 * If any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of General Dialogue Settings.\nDefines font, sizes etc. for all subtitles.\nIf any Widget is supposed to be overriden and use different setup for subtitles, just add that override to 'SubtitlesSettingsOverrides'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesSettingsOverrides_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Map of Widget Classes and their Subtitles Settings.\n\x09 * Used for overriding General Defaults.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Settings/MounteaDialogueSystemSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Map of Widget Classes and their Subtitles Settings.\nUsed for overriding General Defaults." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_DialogueConfiguration;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueWidgetCommands_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DialogueWidgetCommands;
	static const UECodeGen_Private::FBytePropertyParams NewProp_LogVerbosity;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettings;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesSettingsOverrides_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_SubtitlesSettingsOverrides;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_CanSkipWholeRow, "CanSkipWholeRow" }, // 3649896380
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetAllowedLoggVerbosity, "GetAllowedLoggVerbosity" }, // 1217034332
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDefaultDialogueWidget, "GetDefaultDialogueWidget" }, // 566254942
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueConfiguration, "GetDialogueConfiguration" }, // 204264048
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDialogueInputMode, "GetDialogueInputMode" }, // 2665989953
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetDurationCoefficient, "GetDurationCoefficient" }, // 2696304266
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipDuration, "GetSkipDuration" }, // 787669521
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSkipFadeDuration, "GetSkipFadeDuration" }, // 3720059629
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetSubtitlesSettings, "GetSubtitlesSettings" }, // 3976558200
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_GetWidgetUpdateFrequency, "GetWidgetUpdateFrequency" }, // 1417279652
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SetSubtitlesSettings, "SetSubtitlesSettings" }, // 3402400362
		{ &Z_Construct_UFunction_UMounteaDialogueSystemSettings_SubtitlesAllowed, "SubtitlesAllowed" }, // 2170964701
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueConfiguration = { "DialogueConfiguration", nullptr, (EPropertyFlags)0x0024080000014001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueSystemSettings, DialogueConfiguration), Z_Construct_UClass_UMounteaDialogueConfiguration_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueConfiguration_MetaData), NewProp_DialogueConfiguration_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_ElementProp = { "DialogueWidgetCommands", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands = { "DialogueWidgetCommands", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueSystemSettings, DialogueWidgetCommands), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueWidgetCommands_MetaData), NewProp_DialogueWidgetCommands_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_LogVerbosity = { "LogVerbosity", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueSystemSettings, LogVerbosity), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LogVerbosity_MetaData), NewProp_LogVerbosity_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings = { "SubtitlesSettings", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueSystemSettings, SubtitlesSettings), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesSettings_MetaData), NewProp_SubtitlesSettings_MetaData) }; // 1339227483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(0, nullptr) }; // 1339227483
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp = { "SubtitlesSettingsOverrides_Key", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FUIRowID, METADATA_PARAMS(0, nullptr) }; // 2459096273
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides = { "SubtitlesSettingsOverrides", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueSystemSettings, SubtitlesSettingsOverrides), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesSettingsOverrides_MetaData), NewProp_SubtitlesSettingsOverrides_MetaData) }; // 2459096273 1339227483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueConfiguration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_DialogueWidgetCommands,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_LogVerbosity,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettings,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::NewProp_SubtitlesSettingsOverrides,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::ClassParams = {
	&UMounteaDialogueSystemSettings::StaticClass,
	"MounteaSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::PropPointers),
	0,
	0x001000E6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSystemSettings()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSystemSettings.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSystemSettings>()
{
	return UMounteaDialogueSystemSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemSettings);
UMounteaDialogueSystemSettings::~UMounteaDialogueSystemSettings() {}
// End Class UMounteaDialogueSystemSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemSettings, UMounteaDialogueSystemSettings::StaticClass, TEXT("UMounteaDialogueSystemSettings"), &Z_Registration_Info_UClass_UMounteaDialogueSystemSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemSettings), 3920775236U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_249440181(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Settings_MounteaDialogueSystemSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
