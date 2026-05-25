// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "Runtime/Engine/Classes/Engine/DataTable.h"
#include "Runtime/GameplayTags/Classes/GameplayTagContainer.h"
#include "Runtime/SlateCore/Public/Fonts/SlateFontInfo.h"
#include "Runtime/SlateCore/Public/Styling/SlateColor.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_USoundBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UTexture_NoRegister();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FDataTableRowHandle();
ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTag();
GAMEPLAYTAGS_API UScriptStruct* Z_Construct_UScriptStruct_FGameplayTagContainer();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UDialogueAdditionalData_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipant();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FUIRowID();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateColor();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FSlateFontInfo();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Enum EMounteaDialogueLoggingVerbosity
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity;
static UEnum* EMounteaDialogueLoggingVerbosity_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EMounteaDialogueLoggingVerbosity"));
	}
	return Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EMounteaDialogueLoggingVerbosity>()
{
	return EMounteaDialogueLoggingVerbosity_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Bitflags", "" },
		{ "BlueprintType", "true" },
		{ "Error.Comment", "// Toggle Error On/Off. Error level provides information about issues that will block dialogue.\n" },
		{ "Error.Name", "EMounteaDialogueLoggingVerbosity::Error" },
		{ "Error.ToolTip", "Toggle Error On/Off. Error level provides information about issues that will block dialogue." },
		{ "Info.Comment", "// Toggle Info On/Off. Info level provides most basic information. Color is green.\n" },
		{ "Info.Name", "EMounteaDialogueLoggingVerbosity::Info" },
		{ "Info.ToolTip", "Toggle Info On/Off. Info level provides most basic information. Color is green." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "None.hidden", "" },
		{ "None.Name", "EMounteaDialogueLoggingVerbosity::None" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
		{ "Warning.Comment", "// Toggle Warning On/Off. Warning level provides information about issues that might affect dialogue, but are not blockers.\n" },
		{ "Warning.Name", "EMounteaDialogueLoggingVerbosity::Warning" },
		{ "Warning.ToolTip", "Toggle Warning On/Off. Warning level provides information about issues that might affect dialogue, but are not blockers." },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMounteaDialogueLoggingVerbosity::None", (int64)EMounteaDialogueLoggingVerbosity::None },
		{ "EMounteaDialogueLoggingVerbosity::Info", (int64)EMounteaDialogueLoggingVerbosity::Info },
		{ "EMounteaDialogueLoggingVerbosity::Warning", (int64)EMounteaDialogueLoggingVerbosity::Warning },
		{ "EMounteaDialogueLoggingVerbosity::Error", (int64)EMounteaDialogueLoggingVerbosity::Error },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EMounteaDialogueLoggingVerbosity",
	"EMounteaDialogueLoggingVerbosity",
	Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity()
{
	if (!Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EMounteaDialogueLoggingVerbosity_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity.InnerSingleton;
}
// End Enum EMounteaDialogueLoggingVerbosity

// Begin Enum EDialogueManagerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueManagerType;
static UEnum* EDialogueManagerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueManagerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueManagerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueManagerType"));
	}
	return Z_Registration_Info_UEnum_EDialogueManagerType.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerType>()
{
	return EDialogueManagerType_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.hidden", "" },
		{ "Default.Name", "EDialogueManagerType::Default" },
		{ "EDMT_EnvironmentDialogue.DisplayName", "Environment (Passive) Dialogue" },
		{ "EDMT_EnvironmentDialogue.Name", "EDialogueManagerType::EDMT_EnvironmentDialogue" },
		{ "EDMT_PlayerDialogue.DisplayName", "Player (Active) Dialogue" },
		{ "EDMT_PlayerDialogue.Name", "EDialogueManagerType::EDMT_PlayerDialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueManagerType::EDMT_PlayerDialogue", (int64)EDialogueManagerType::EDMT_PlayerDialogue },
		{ "EDialogueManagerType::EDMT_EnvironmentDialogue", (int64)EDialogueManagerType::EDMT_EnvironmentDialogue },
		{ "EDialogueManagerType::Default", (int64)EDialogueManagerType::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EDialogueManagerType",
	"EDialogueManagerType",
	Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType()
{
	if (!Z_Registration_Info_UEnum_EDialogueManagerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueManagerType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueManagerType.InnerSingleton;
}
// End Enum EDialogueManagerType

// Begin Enum EDialogueManagerState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueManagerState;
static UEnum* EDialogueManagerState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueManagerState"));
	}
	return Z_Registration_Info_UEnum_EDialogueManagerState.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerState>()
{
	return EDialogueManagerState_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Manager State\n * \n * Define state of Dialogue Manager.\n */" },
#endif
		{ "Default.hidden", "" },
		{ "Default.Name", "EDialogueManagerState::Default" },
		{ "EDMS_Active.DisplayName", "Active" },
		{ "EDMS_Active.Name", "EDialogueManagerState::EDMS_Active" },
		{ "EDMS_Active.Tooltip", "Active. Is in Diaologue." },
		{ "EDMS_Disabled.DisplayName", "Disabled" },
		{ "EDMS_Disabled.Name", "EDialogueManagerState::EDMS_Disabled" },
		{ "EDMS_Disabled.Tooltip", "Disabled. Dialogue cannot start." },
		{ "EDMS_Enabled.DisplayName", "Enabled" },
		{ "EDMS_Enabled.Name", "EDialogueManagerState::EDMS_Enabled" },
		{ "EDMS_Enabled.Tooltip", "Enabled. Dialogue can start." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Manager State\n\nDefine state of Dialogue Manager." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueManagerState::EDMS_Disabled", (int64)EDialogueManagerState::EDMS_Disabled },
		{ "EDialogueManagerState::EDMS_Enabled", (int64)EDialogueManagerState::EDMS_Enabled },
		{ "EDialogueManagerState::EDMS_Active", (int64)EDialogueManagerState::EDMS_Active },
		{ "EDialogueManagerState::Default", (int64)EDialogueManagerState::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EDialogueManagerState",
	"EDialogueManagerState",
	Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState()
{
	if (!Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueManagerState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueManagerState.InnerSingleton;
}
// End Enum EDialogueManagerState

// Begin Enum EDialogueParticipantState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueParticipantState;
static UEnum* EDialogueParticipantState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueParticipantState"));
	}
	return Z_Registration_Info_UEnum_EDialogueParticipantState.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueParticipantState>()
{
	return EDialogueParticipantState_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Participant State\n * \n * Define state of Dialogue Participant. \n */" },
#endif
		{ "Default.hidden", "" },
		{ "Default.Name", "EDialogueParticipantState::Default" },
		{ "EDPS_Active.DisplayName", "Active" },
		{ "EDPS_Active.Name", "EDialogueParticipantState::EDPS_Active" },
		{ "EDPS_Active.Tooltip", "Active. Is in Diaologue." },
		{ "EDPS_Disabled.DisplayName", "Disabled" },
		{ "EDPS_Disabled.Name", "EDialogueParticipantState::EDPS_Disabled" },
		{ "EDPS_Disabled.Tooltip", "Disabled. Dialogue cannot start." },
		{ "EDPS_Enabled.DisplayName", "Enabled" },
		{ "EDPS_Enabled.Name", "EDialogueParticipantState::EDPS_Enabled" },
		{ "EDPS_Enabled.Tooltip", "Enabled. Dialogue can start." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Participant State\n\nDefine state of Dialogue Participant." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueParticipantState::EDPS_Disabled", (int64)EDialogueParticipantState::EDPS_Disabled },
		{ "EDialogueParticipantState::EDPS_Enabled", (int64)EDialogueParticipantState::EDPS_Enabled },
		{ "EDialogueParticipantState::EDPS_Active", (int64)EDialogueParticipantState::EDPS_Active },
		{ "EDialogueParticipantState::Default", (int64)EDialogueParticipantState::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EDialogueParticipantState",
	"EDialogueParticipantState",
	Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState()
{
	if (!Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueParticipantState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueParticipantState.InnerSingleton;
}
// End Enum EDialogueParticipantState

// Begin Enum ERowDurationMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERowDurationMode;
static UEnum* ERowDurationMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("ERowDurationMode"));
	}
	return Z_Registration_Info_UEnum_ERowDurationMode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowDurationMode>()
{
	return ERowDurationMode_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Row Duration Mode\n * \n * Used for calculation of the Row Duration.\n */" },
#endif
		{ "Default.hidden", "" },
		{ "Default.Name", "ERowDurationMode::Default" },
		{ "EDRM_Add.DisplayName", "Add Time" },
		{ "EDRM_Add.Name", "ERowDurationMode::EDRM_Add" },
		{ "EDRM_Add.Tooltip", "Adds 'Duration Override' value to 'Duration'." },
		{ "EDRM_Override.DisplayName", "Override" },
		{ "EDRM_Override.Name", "ERowDurationMode::EDRM_Override" },
		{ "EDRM_Override.Tooltip", "Uses 'Duration Override' value." },
		{ "ERDM_AutoCalculate.DisplayName", "Calculate" },
		{ "ERDM_AutoCalculate.Name", "ERowDurationMode::ERDM_AutoCalculate" },
		{ "ERDM_AutoCalculate.Tooltip", "Calculates Duration automatically. Base value is: 100 characters per 8 seconds." },
		{ "ERDM_Duration.DisplayName", "Duration" },
		{ "ERDM_Duration.Name", "ERowDurationMode::ERDM_Duration" },
		{ "ERDM_Duration.Tooltip", "Uses either duration of 'Row Sound' or value from 'Duration'." },
		{ "ERDM_Manual.DisplayName", "Manual" },
		{ "ERDM_Manual.hidden", "" },
		{ "ERDM_Manual.Name", "ERowDurationMode::ERDM_Manual" },
		{ "ERDM_Manual.Tooltip", "Row won't start automatically and will wait for `NextDialogueRow` request." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Duration Mode\n\nUsed for calculation of the Row Duration." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERowDurationMode::ERDM_Manual", (int64)ERowDurationMode::ERDM_Manual },
		{ "ERowDurationMode::ERDM_Duration", (int64)ERowDurationMode::ERDM_Duration },
		{ "ERowDurationMode::EDRM_Override", (int64)ERowDurationMode::EDRM_Override },
		{ "ERowDurationMode::EDRM_Add", (int64)ERowDurationMode::EDRM_Add },
		{ "ERowDurationMode::ERDM_AutoCalculate", (int64)ERowDurationMode::ERDM_AutoCalculate },
		{ "ERowDurationMode::Default", (int64)ERowDurationMode::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"ERowDurationMode",
	"ERowDurationMode",
	Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode()
{
	if (!Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERowDurationMode.InnerSingleton;
}
// End Enum ERowDurationMode

// Begin Enum ERowExecutionMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERowExecutionMode;
static UEnum* ERowExecutionMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERowExecutionMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERowExecutionMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("ERowExecutionMode"));
	}
	return Z_Registration_Info_UEnum_ERowExecutionMode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowExecutionMode>()
{
	return ERowExecutionMode_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Row execution mode. Defines\n */" },
#endif
		{ "Default.hidden", "" },
		{ "Default.Name", "ERowExecutionMode::Default" },
		{ "EREM_Automatic.DisplayName", "Automatic" },
		{ "EREM_Automatic.Name", "ERowExecutionMode::EREM_Automatic" },
		{ "EREM_Automatic.Tooltip", "Next row will be executed if any is present." },
		{ "EREM_AwaitInput.DisplayName", "Await Input" },
		{ "EREM_AwaitInput.Name", "ERowExecutionMode::EREM_AwaitInput" },
		{ "EREM_AwaitInput.Tooltip", "Next row will be executed once request is triggered." },
		{ "EREM_Stopping.DisplayName", "Stopping" },
		{ "EREM_Stopping.Name", "ERowExecutionMode::EREM_Stopping" },
		{ "EREM_Stopping.Tooltip", "Row will stop execution of whole Node and will finish both." },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row execution mode. Defines" },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERowExecutionMode::EREM_Automatic", (int64)ERowExecutionMode::EREM_Automatic },
		{ "ERowExecutionMode::EREM_AwaitInput", (int64)ERowExecutionMode::EREM_AwaitInput },
		{ "ERowExecutionMode::EREM_Stopping", (int64)ERowExecutionMode::EREM_Stopping },
		{ "ERowExecutionMode::Default", (int64)ERowExecutionMode::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"ERowExecutionMode",
	"ERowExecutionMode",
	Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode()
{
	if (!Z_Registration_Info_UEnum_ERowExecutionMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERowExecutionMode.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERowExecutionMode.InnerSingleton;
}
// End Enum ERowExecutionMode

// Begin Enum EMounteaInputMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EMounteaInputMode;
static UEnum* EMounteaInputMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EMounteaInputMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EMounteaInputMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EMounteaInputMode"));
	}
	return Z_Registration_Info_UEnum_EMounteaInputMode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EMounteaInputMode>()
{
	return EMounteaInputMode_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Input Mode type.\n * When Dialogue starts, this value defines what effect it has on Player.\n * Player can be stopped and forced to dialogue 'cinematic' or not affected at all.\n */" },
#endif
		{ "EIM_UIAndGame.DisplayName", "UI & Game" },
		{ "EIM_UIAndGame.Name", "EMounteaInputMode::EIM_UIAndGame" },
		{ "EIM_UIOnly.DisplayName", "UI Only" },
		{ "EIM_UIOnly.Name", "EMounteaInputMode::EIM_UIOnly" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Input Mode type.\nWhen Dialogue starts, this value defines what effect it has on Player.\nPlayer can be stopped and forced to dialogue 'cinematic' or not affected at all." },
#endif
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EMounteaInputMode::EIM_UIOnly", (int64)EMounteaInputMode::EIM_UIOnly },
		{ "EMounteaInputMode::EIM_UIAndGame", (int64)EMounteaInputMode::EIM_UIAndGame },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EMounteaInputMode",
	"EMounteaInputMode",
	Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode()
{
	if (!Z_Registration_Info_UEnum_EMounteaInputMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EMounteaInputMode.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EMounteaInputMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EMounteaInputMode.InnerSingleton;
}
// End Enum EMounteaInputMode

// Begin ScriptStruct FSubtitlesSettings
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubtitlesSettings;
class UScriptStruct* FSubtitlesSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubtitlesSettings, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("SubtitlesSettings"));
	}
	return Z_Registration_Info_UScriptStruct_SubtitlesSettings.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FSubtitlesSettings>()
{
	return FSubtitlesSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FSubtitlesSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Helper structure exposing Widget text settings to set them globally in Dialogue Settings.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper structure exposing Widget text settings to set them globally in Dialogue Settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FontColor_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Slate Color Settings.\n\x09 * Defines color of the Font for UI.\n\x09 * Default:\n\x09 * * Color: White\n\x09 */" },
#endif
		{ "DisplayName", "Color and Oppacity" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slate Color Settings.\nDefines color of the Font for UI.\nDefault:\n* Color: White" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SubtitlesFont_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Slate Font Info settings.\n\x09 * Should be filled by default with:\n\x09 * * Font: Roboot\n\x09 * * Size 16\n\x09 * * Typeface: 'Regular'\n\x09 * * Outline: 1\n\x09 */" },
#endif
		{ "ForceShowEngineContent", "" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Slate Font Info settings.\nShould be filled by default with:\n* Font: Roboot\n* Size 16\n* Typeface: 'Regular'\n* Outline: 1" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowOffset_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shadow Offset Settings.\n\x09 * Defines shadow offset on X and Y axis.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shadow Offset Settings.\nDefines shadow offset on X and Y axis." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ShadowColor_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Shadow Color Settings.\n\x09 * Default:\n\x09 * * Color: Black\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Shadow Color Settings.\nDefault:\n* Color: Black" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SettingsGUID_MetaData[] = {
		{ "Category", "Subtitles" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Settings GUID.\n\x09 * Defines whether settings are valid or not.\n\x09 * Invalid settings are:\n\x09 * * With no Font\n\x09 * \n\x09 * Invalid settings are ignored!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Settings GUID.\nDefines whether settings are valid or not.\nInvalid settings are:\n* With no Font\n\nInvalid settings are ignored!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FontColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SubtitlesFont;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowOffset;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ShadowColor;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SettingsGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubtitlesSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor = { "FontColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubtitlesSettings, FontColor), Z_Construct_UScriptStruct_FSlateColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FontColor_MetaData), NewProp_FontColor_MetaData) }; // 2024315916
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont = { "SubtitlesFont", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubtitlesSettings, SubtitlesFont), Z_Construct_UScriptStruct_FSlateFontInfo, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SubtitlesFont_MetaData), NewProp_SubtitlesFont_MetaData) }; // 1633227880
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset = { "ShadowOffset", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubtitlesSettings, ShadowOffset), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowOffset_MetaData), NewProp_ShadowOffset_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor = { "ShadowColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubtitlesSettings, ShadowColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ShadowColor_MetaData), NewProp_ShadowColor_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID = { "SettingsGUID", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FSubtitlesSettings, SettingsGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SettingsGUID_MetaData), NewProp_SettingsGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_FontColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SubtitlesFont,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowOffset,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_ShadowColor,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewProp_SettingsGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"SubtitlesSettings",
	Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::PropPointers),
	sizeof(FSubtitlesSettings),
	alignof(FSubtitlesSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FSubtitlesSettings()
{
	if (!Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton, Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_SubtitlesSettings.InnerSingleton;
}
// End ScriptStruct FSubtitlesSettings

// Begin ScriptStruct FDialogueParticipant
static_assert(std::is_polymorphic<FDialogueParticipant>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueParticipant cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueParticipant;
class UScriptStruct* FDialogueParticipant::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueParticipant.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueParticipant.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueParticipant, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueParticipant"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueParticipant.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueParticipant>()
{
	return FDialogueParticipant::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueParticipant_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantName_MetaData[] = {
		{ "Category", "Participant" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParticipantCategoryTag_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ParticipantName;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ParticipantCategoryTag;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueParticipant>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FDialogueParticipant_Statics::NewProp_ParticipantName = { "ParticipantName", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueParticipant, ParticipantName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantName_MetaData), NewProp_ParticipantName_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueParticipant_Statics::NewProp_ParticipantCategoryTag = { "ParticipantCategoryTag", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueParticipant, ParticipantCategoryTag), Z_Construct_UScriptStruct_FGameplayTag, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParticipantCategoryTag_MetaData), NewProp_ParticipantCategoryTag_MetaData) }; // 1298103297
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueParticipant_Statics::NewProp_ParticipantName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueParticipant_Statics::NewProp_ParticipantCategoryTag,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueParticipant_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogueParticipant",
	Z_Construct_UScriptStruct_FDialogueParticipant_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipant_Statics::PropPointers),
	sizeof(FDialogueParticipant),
	alignof(FDialogueParticipant),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueParticipant_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueParticipant_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueParticipant()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueParticipant.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueParticipant.InnerSingleton, Z_Construct_UScriptStruct_FDialogueParticipant_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueParticipant.InnerSingleton;
}
// End ScriptStruct FDialogueParticipant

// Begin ScriptStruct FDialogueRowData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueRowData;
class UScriptStruct* FDialogueRowData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueRowData, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueRowData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueRowData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueRowData>()
{
	return FDialogueRowData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueRowData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Row Data\n * \n * Structure which contains Dialogue Row data, which will be displayed in UI and/or played.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Row Data\n\nStructure which contains Dialogue Row data, which will be displayed in UI and/or played." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowText_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row Text.\n\x09 * \n\x09 * \xe2\x9d\x97 Required value\n\x09 * \xe2\x9d\x94 Localizable \n\x09 * Row Text contains data Players will see in the UI.\n\x09 * \n\x09 * \xe2\x9d\x97 This Text should not be displayed as option to be selected, for that use 'DialogueRow.RowTitle' value\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "MultiLine", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Text.\n\n\xe2\x9d\x97 Required value\n\xe2\x9d\x94 Localizable\nRow Text contains data Players will see in the UI.\n\n\xe2\x9d\x97 This Text should not be displayed as option to be selected, for that use 'DialogueRow.RowTitle' value" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowSound_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row Sound.\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Sound to be triggered once this Row Data has been displayed in UI.\n\x09 * \n\x09 * \xe2\x9d\x97 Is not directly used in any C++ code\n\x09 * \xe2\x9d\x94 Could be used with 'DP_PlayDialogueSound' or as Sound Value for any better way of handling synced animations and sounds (to get more info how to do that, join the Support Discord)\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Sound.\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Sound to be triggered once this Row Data has been displayed in UI.\n\n\xe2\x9d\x97 Is not directly used in any C++ code\n\xe2\x9d\x94 Could be used with 'DP_PlayDialogueSound' or as Sound Value for any better way of handling synced animations and sounds (to get more info how to do that, join the Support Discord)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowDurationMode_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row Duration Mode\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Determines how the 'Row Duration' is calculated.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Duration Mode\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Determines how the 'Row Duration' is calculated." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowDuration_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMin", "0.000000" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row Duration\n\x09 * \n\x09 * \xe2\x9d\x97 Recommended value\n\x09 * \xe2\x9d\x94 Determines for how long the UI will display this Row Data.\n\x09 */" },
#endif
		{ "EditCondition", "RowSound==nullptr" },
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Duration\n\n\xe2\x9d\x97 Recommended value\n\xe2\x9d\x94 Determines for how long the UI will display this Row Data." },
#endif
		{ "UIMin", "0.000000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowDurationOverride_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row Duration Override\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value\n\x09 * \xe2\x9d\x94 Determines how much time is added to the Row Duration if any.\n\x09 * \n\x09 * \xe2\x9d\x97 No validation applied here, so using value of -4684 will result in weird behaviour.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row Duration Override\n\n\xe2\x9d\x97 Optional value\n\xe2\x9d\x94 Determines how much time is added to the Row Duration if any.\n\n\xe2\x9d\x97 No validation applied here, so using value of -4684 will result in weird behaviour." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowExecutionBehaviour_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * If set to true this Row will stop the whole Node execution and next row won't start.\n\x09 * Default is false.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "If set to true this Row will stop the whole Node execution and next row won't start.\nDefault is false." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowGUID_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Row GUID.\n\x09 * \n\x09 * Unique Key when searching and binding this Row.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Row GUID.\n\nUnique Key when searching and binding this Row." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_RowText;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowSound;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RowDurationMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RowDurationMode;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowDuration;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RowDurationOverride;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RowExecutionBehaviour_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RowExecutionBehaviour;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueRowData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText = { "RowText", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowText_MetaData), NewProp_RowText_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound = { "RowSound", nullptr, (EPropertyFlags)0x0115000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowSound), Z_Construct_UClass_USoundBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowSound_MetaData), NewProp_RowSound_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode = { "RowDurationMode", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowDurationMode), Z_Construct_UEnum_MounteaDialogueSystem_ERowDurationMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowDurationMode_MetaData), NewProp_RowDurationMode_MetaData) }; // 3437583471
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration = { "RowDuration", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowDuration_MetaData), NewProp_RowDuration_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride = { "RowDurationOverride", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowDurationOverride), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowDurationOverride_MetaData), NewProp_RowDurationOverride_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowExecutionBehaviour_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowExecutionBehaviour = { "RowExecutionBehaviour", nullptr, (EPropertyFlags)0x0011000000000005, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowExecutionBehaviour), Z_Construct_UEnum_MounteaDialogueSystem_ERowExecutionMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowExecutionBehaviour_MetaData), NewProp_RowExecutionBehaviour_MetaData) }; // 1058750223
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID = { "RowGUID", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRowData, RowGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowGUID_MetaData), NewProp_RowGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowSound,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDuration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowDurationOverride,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowExecutionBehaviour_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowExecutionBehaviour,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewProp_RowGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueRowData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueRowData",
	Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::PropPointers),
	sizeof(FDialogueRowData),
	alignof(FDialogueRowData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRowData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueRowData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueRowData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueRowData.InnerSingleton;
}
// End ScriptStruct FDialogueRowData

// Begin ScriptStruct FDialogueRow
static_assert(std::is_polymorphic<FDialogueRow>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FDialogueRow cannot be polymorphic unless super FTableRowBase is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueRow;
class UScriptStruct* FDialogueRow::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueRow, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueRow"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueRow.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueRow>()
{
	return FDialogueRow::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Row\n * \n * Data Table compatible Dialogue Row.\n * Contains name of Participant and Row Data.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Row\n\nData Table compatible Dialogue Row.\nContains name of Participant and Row Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CompatibleTags_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of GameplayTags which distinguish participants. \n\x09 * \n\x09 * \xe2\x9d\x97 New feature in version 1.0.5.X.\n\x09 * \xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`\n\x09 */" },
#endif
		{ "DisplayName", "Compatible Participants Tags" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of GameplayTags which distinguish participants.\n\n\xe2\x9d\x97 New feature in version 1.0.5.X.\n\xe2\x9d\x94 Each unique dialogue Participant should be using different Tag, if generic, then use something like `Dialogue.NPC`" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional Row type ID.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * \xe2\x9d\x94 Could be used to visually differentiate rows which are using same UI Class.\n\x09 * Example: Quest dialogue options are yellow or bold, while optional dialogue options are white or regular.\n\x09 * \n\x09 * Range:\n\x09 * * Min: 0\n\x09 * * Max: 255\n\x09 */" },
#endif
		{ "DisplayName", "Row Type ID" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoSpinbox", "TRUE" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Row type ID.\n\n\xe2\x9d\x97 Optional value.\n\xe2\x9d\x94 Could be used to visually differentiate rows which are using same UI Class.\nExample: Quest dialogue options are yellow or bold, while optional dialogue options are white or regular.\n\nRange:\n* Min: 0\n* Max: 255" },
#endif
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowOptionalIcon_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Optional Row Icon.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * \xe2\x9d\x94 Could be used to mark special dialogue options, like \"Open Store\" or \"Leave conversation\" with special icon.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Optional Row Icon.\n\n\xe2\x9d\x97 Optional value.\n\xe2\x9d\x94 Could be used to mark special dialogue options, like \"Open Store\" or \"Leave conversation\" with special icon." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Name of the Dialogue Participant.\n\x09 * \n\x09 * \xe2\x9d\x97 Optional value.\n\x09 * If left empty, Dialogue will ignore it and use its default Participant name.\n\x09 * \xe2\x9d\x94 Each row might have different participant tied to it, so there can be three-way dialogues, where one player talks to 2 NPCs\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of the Dialogue Participant.\n\n\xe2\x9d\x97 Optional value.\nIf left empty, Dialogue will ignore it and use its default Participant name.\n\xe2\x9d\x94 Each row might have different participant tied to it, so there can be three-way dialogues, where one player talks to 2 NPCs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowTitle_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Title of the Dialogue Row.\n\x09 * \n\x09 * \xe2\x9d\x94 This should summarize what is this row about, let's say \"Accept offering\" is a title for \"Thank you very much, kind sir, it would be pleasure to join you on your adventure!\".\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Title of the Dialogue Row.\n\n\xe2\x9d\x94 This should summarize what is this row about, let's say \"Accept offering\" is a title for \"Thank you very much, kind sir, it would be pleasure to join you on your adventure!\"." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowData_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * List of Dialogue Row Data. Not replicated, must be found locally for each Client from replicated Active Node!\n\x09 * \n\x09 * \xe2\x9d\x94 Each Dialogue Row can contain multiple of those, where each Data Row represents:\n\x09 * * What Sound should be played\n\x09 * * What text should be displayed\n\x09 * \n\x09 * This provides easy way to have multiple dialogue lines per single Node.\n\x09 * As example, Player asks NPC what happened to its family. And each sentence could be its own Dialogue Row Data input.\n\x09 * This makes UI easier to read and sounds more managable.\n\x09 * \n\x09 * Each Data Row has its Duration, which could be based on the Sound, directly set, calculated on generic formula or added atop of the sound duration.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "TitleProperty", "RowText" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "List of Dialogue Row Data. Not replicated, must be found locally for each Client from replicated Active Node!\n\n\xe2\x9d\x94 Each Dialogue Row can contain multiple of those, where each Data Row represents:\n* What Sound should be played\n* What text should be displayed\n\nThis provides easy way to have multiple dialogue lines per single Node.\nAs example, Player asks NPC what happened to its family. And each sentence could be its own Dialogue Row Data input.\nThis makes UI easier to read and sounds more managable.\n\nEach Data Row has its Duration, which could be based on the Sound, directly set, calculated on generic formula or added atop of the sound duration." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRowAdditionalData_MetaData[] = {
		{ "AllowAbstract", "FALSE" },
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Additional Row Data\n\x09 * \n\x09 * Generic Data Asset reference which could hold some more data.\n\x09 * This data could be used for Decorators or UI in general.\n\x09 * Any Data Asset can be used here and no logic is tied to this attribute.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Additional Row Data\n\nGeneric Data Asset reference which could hold some more data.\nThis data could be used for Decorators or UI in general.\nAny Data Asset can be used here and no logic is tied to this attribute." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowGUID_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/*Transient, */" },
#endif
		{ "IgnoreForMemberInitializationTest", "" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoElementDuplicate", "" },
		{ "NoExport", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Transient," },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TitleSettingsOverride_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe2\x9d\x97 WIP\n\x09 * Title Settings Override.\n\x09 * \n\x09 * \xe2\x9d\x94 Provides ability to override this Row Title using direct settings rather than 'UIRowID'.\n\x09 * \xe2\x9d\x97 No logic is implemented yet\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9d\x97 WIP\nTitle Settings Override.\n\n\xe2\x9d\x94 Provides ability to override this Row Title using direct settings rather than 'UIRowID'.\n\xe2\x9d\x97 No logic is implemented yet" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_CompatibleTags;
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowOptionalIcon;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DialogueParticipant;
	static const UECodeGen_Private::FTextPropertyParams NewProp_RowTitle;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueRowData_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_DialogueRowData;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueRowAdditionalData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RowGUID;
	static const UECodeGen_Private::FStructPropertyParams NewProp_TitleSettingsOverride;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueRow>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags = { "CompatibleTags", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, CompatibleTags), Z_Construct_UScriptStruct_FGameplayTagContainer, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CompatibleTags_MetaData), NewProp_CompatibleTags_MetaData) }; // 3352185621
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, UIRowID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIRowID_MetaData), NewProp_UIRowID_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon = { "RowOptionalIcon", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, RowOptionalIcon), Z_Construct_UClass_UTexture_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowOptionalIcon_MetaData), NewProp_RowOptionalIcon_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, DialogueParticipant), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueParticipant_MetaData), NewProp_DialogueParticipant_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle = { "RowTitle", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, RowTitle), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowTitle_MetaData), NewProp_RowTitle_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_ElementProp = { "DialogueRowData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(0, nullptr) }; // 4030428912
static_assert(TModels_V<CGetTypeHashable, FDialogueRowData>, "The structure 'FDialogueRowData' is used in a TSet but does not have a GetValueTypeHash defined");
const UECodeGen_Private::FSetPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData = { "DialogueRowData", nullptr, (EPropertyFlags)0x0010000080000005, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, DialogueRowData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowData_MetaData), NewProp_DialogueRowData_MetaData) }; // 4030428912
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData = { "DialogueRowAdditionalData", nullptr, (EPropertyFlags)0x0114000000000005, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, DialogueRowAdditionalData), Z_Construct_UClass_UDialogueAdditionalData_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRowAdditionalData_MetaData), NewProp_DialogueRowAdditionalData_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID = { "RowGUID", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, RowGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowGUID_MetaData), NewProp_RowGUID_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride = { "TitleSettingsOverride", nullptr, (EPropertyFlags)0x0010040000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueRow, TitleSettingsOverride), Z_Construct_UScriptStruct_FSubtitlesSettings, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TitleSettingsOverride_MetaData), NewProp_TitleSettingsOverride_MetaData) }; // 1339227483
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_CompatibleTags,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_UIRowID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowOptionalIcon,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowTitle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_DialogueRowAdditionalData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_RowGUID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueRow_Statics::NewProp_TitleSettingsOverride,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueRow_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	Z_Construct_UScriptStruct_FTableRowBase,
	&NewStructOps,
	"DialogueRow",
	Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::PropPointers),
	sizeof(FDialogueRow),
	alignof(FDialogueRow),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueRow_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueRow_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton, Z_Construct_UScriptStruct_FDialogueRow_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueRow.InnerSingleton;
}
// End ScriptStruct FDialogueRow

// Begin ScriptStruct FUIRowID
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_UIRowID;
class UScriptStruct* FUIRowID::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FUIRowID, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("UIRowID"));
	}
	return Z_Registration_Info_UScriptStruct_UIRowID.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FUIRowID>()
{
	return FUIRowID::StaticStruct();
}
struct Z_Construct_UScriptStruct_FUIRowID_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_UIRowID_MetaData[] = {
		{ "Category", "Dialogue" },
		{ "ClampMax", "255" },
		{ "ClampMin", "0" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
		{ "NoSpinbox", "TRUE" },
		{ "UIMax", "255" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowWidgetClass_MetaData[] = {
		{ "Category", "Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_UIRowID;
	static const UECodeGen_Private::FClassPropertyParams NewProp_RowWidgetClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FUIRowID>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID = { "UIRowID", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIRowID, UIRowID), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_UIRowID_MetaData), NewProp_UIRowID_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass = { "RowWidgetClass", nullptr, (EPropertyFlags)0x0014000000000005, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FUIRowID, RowWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowWidgetClass_MetaData), NewProp_RowWidgetClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_UIRowID,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FUIRowID_Statics::NewProp_RowWidgetClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FUIRowID_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"UIRowID",
	Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::PropPointers),
	sizeof(FUIRowID),
	alignof(FUIRowID),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FUIRowID_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FUIRowID_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FUIRowID()
{
	if (!Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton, Z_Construct_UScriptStruct_FUIRowID_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_UIRowID.InnerSingleton;
}
// End ScriptStruct FUIRowID

// Begin ScriptStruct FDialogueTraversePath
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueTraversePath;
class UScriptStruct* FDialogueTraversePath::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueTraversePath.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueTraversePath.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueTraversePath, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueTraversePath"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueTraversePath.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueTraversePath>()
{
	return FDialogueTraversePath::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueTraversePath_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeGuid_MetaData[] = {
		{ "Category", "Mountea|Dialogue|TraversePath" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GraphGuid_MetaData[] = {
		{ "Category", "Mountea|Dialogue|TraversePath" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TraverseCount_MetaData[] = {
		{ "Category", "Mountea|Dialogue|TraversePath" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_NodeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_GraphGuid;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TraverseCount;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueTraversePath>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_NodeGuid = { "NodeGuid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueTraversePath, NodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeGuid_MetaData), NewProp_NodeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_GraphGuid = { "GraphGuid", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueTraversePath, GraphGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GraphGuid_MetaData), NewProp_GraphGuid_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_TraverseCount = { "TraverseCount", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueTraversePath, TraverseCount), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TraverseCount_MetaData), NewProp_TraverseCount_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_NodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_GraphGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewProp_TraverseCount,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueTraversePath",
	Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::PropPointers),
	sizeof(FDialogueTraversePath),
	alignof(FDialogueTraversePath),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueTraversePath()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueTraversePath.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueTraversePath.InnerSingleton, Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueTraversePath.InnerSingleton;
}
// End ScriptStruct FDialogueTraversePath

// Begin ScriptStruct FMounteaDialogueContextReplicatedStruct
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct;
class UScriptStruct* FMounteaDialogueContextReplicatedStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("MounteaDialogueContextReplicatedStruct"));
	}
	return Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FMounteaDialogueContextReplicatedStruct>()
{
	return FMounteaDialogueContextReplicatedStruct::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueParticipant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PlayerDialogueParticipant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueParticipants_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_PreviousActiveNodeGuid_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AllowedChildNodes_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueTableHandle_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ActiveDialogueRowDataIndex_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastWidgetCommand_MetaData[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphDataTypes.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ActiveDialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_PlayerDialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueParticipants_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DialogueParticipants;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveNodeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_PreviousActiveNodeGuid;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AllowedChildNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_AllowedChildNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveDialogueTableHandle;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ActiveDialogueRowDataIndex;
	static const UECodeGen_Private::FStrPropertyParams NewProp_LastWidgetCommand;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMounteaDialogueContextReplicatedStruct>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueParticipant = { "ActiveDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, ActiveDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueParticipant_MetaData), NewProp_ActiveDialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_PlayerDialogueParticipant = { "PlayerDialogueParticipant", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, PlayerDialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PlayerDialogueParticipant_MetaData), NewProp_PlayerDialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipant = { "DialogueParticipant", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, DialogueParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueParticipant_MetaData), NewProp_DialogueParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipants_Inner = { "DialogueParticipants", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipants = { "DialogueParticipants", nullptr, (EPropertyFlags)0x0014000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, DialogueParticipants), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueParticipants_MetaData), NewProp_DialogueParticipants_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveNodeGuid = { "ActiveNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, ActiveNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveNodeGuid_MetaData), NewProp_ActiveNodeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_PreviousActiveNodeGuid = { "PreviousActiveNodeGuid", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, PreviousActiveNodeGuid), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_PreviousActiveNodeGuid_MetaData), NewProp_PreviousActiveNodeGuid_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_AllowedChildNodes_Inner = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_AllowedChildNodes = { "AllowedChildNodes", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, AllowedChildNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AllowedChildNodes_MetaData), NewProp_AllowedChildNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueTableHandle = { "ActiveDialogueTableHandle", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, ActiveDialogueTableHandle), Z_Construct_UScriptStruct_FDataTableRowHandle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueTableHandle_MetaData), NewProp_ActiveDialogueTableHandle_MetaData) }; // 1360917958
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueRowDataIndex = { "ActiveDialogueRowDataIndex", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, ActiveDialogueRowDataIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ActiveDialogueRowDataIndex_MetaData), NewProp_ActiveDialogueRowDataIndex_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_LastWidgetCommand = { "LastWidgetCommand", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueContextReplicatedStruct, LastWidgetCommand), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastWidgetCommand_MetaData), NewProp_LastWidgetCommand_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_PlayerDialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipants_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_DialogueParticipants,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveNodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_PreviousActiveNodeGuid,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_AllowedChildNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_AllowedChildNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueTableHandle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_ActiveDialogueRowDataIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewProp_LastWidgetCommand,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"MounteaDialogueContextReplicatedStruct",
	Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::PropPointers),
	sizeof(FMounteaDialogueContextReplicatedStruct),
	alignof(FMounteaDialogueContextReplicatedStruct),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.InnerSingleton, Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct.InnerSingleton;
}
// End ScriptStruct FMounteaDialogueContextReplicatedStruct

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EMounteaDialogueLoggingVerbosity_StaticEnum, TEXT("EMounteaDialogueLoggingVerbosity"), &Z_Registration_Info_UEnum_EMounteaDialogueLoggingVerbosity, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2664919773U) },
		{ EDialogueManagerType_StaticEnum, TEXT("EDialogueManagerType"), &Z_Registration_Info_UEnum_EDialogueManagerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2228663124U) },
		{ EDialogueManagerState_StaticEnum, TEXT("EDialogueManagerState"), &Z_Registration_Info_UEnum_EDialogueManagerState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 767330634U) },
		{ EDialogueParticipantState_StaticEnum, TEXT("EDialogueParticipantState"), &Z_Registration_Info_UEnum_EDialogueParticipantState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2723243031U) },
		{ ERowDurationMode_StaticEnum, TEXT("ERowDurationMode"), &Z_Registration_Info_UEnum_ERowDurationMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3437583471U) },
		{ ERowExecutionMode_StaticEnum, TEXT("ERowExecutionMode"), &Z_Registration_Info_UEnum_ERowExecutionMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1058750223U) },
		{ EMounteaInputMode_StaticEnum, TEXT("EMounteaInputMode"), &Z_Registration_Info_UEnum_EMounteaInputMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3790143152U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FSubtitlesSettings::StaticStruct, Z_Construct_UScriptStruct_FSubtitlesSettings_Statics::NewStructOps, TEXT("SubtitlesSettings"), &Z_Registration_Info_UScriptStruct_SubtitlesSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubtitlesSettings), 1339227483U) },
		{ FDialogueParticipant::StaticStruct, Z_Construct_UScriptStruct_FDialogueParticipant_Statics::NewStructOps, TEXT("DialogueParticipant"), &Z_Registration_Info_UScriptStruct_DialogueParticipant, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueParticipant), 2262618838U) },
		{ FDialogueRowData::StaticStruct, Z_Construct_UScriptStruct_FDialogueRowData_Statics::NewStructOps, TEXT("DialogueRowData"), &Z_Registration_Info_UScriptStruct_DialogueRowData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueRowData), 4030428912U) },
		{ FDialogueRow::StaticStruct, Z_Construct_UScriptStruct_FDialogueRow_Statics::NewStructOps, TEXT("DialogueRow"), &Z_Registration_Info_UScriptStruct_DialogueRow, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueRow), 3048168484U) },
		{ FUIRowID::StaticStruct, Z_Construct_UScriptStruct_FUIRowID_Statics::NewStructOps, TEXT("UIRowID"), &Z_Registration_Info_UScriptStruct_UIRowID, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FUIRowID), 2459096273U) },
		{ FDialogueTraversePath::StaticStruct, Z_Construct_UScriptStruct_FDialogueTraversePath_Statics::NewStructOps, TEXT("DialogueTraversePath"), &Z_Registration_Info_UScriptStruct_DialogueTraversePath, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueTraversePath), 2158243501U) },
		{ FMounteaDialogueContextReplicatedStruct::StaticStruct, Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics::NewStructOps, TEXT("MounteaDialogueContextReplicatedStruct"), &Z_Registration_Info_UScriptStruct_MounteaDialogueContextReplicatedStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMounteaDialogueContextReplicatedStruct), 913484787U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_1199235184(TEXT("/Script/MounteaDialogueSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
