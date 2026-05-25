// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MounteaDialogueGraphDataTypes.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphDataTypes_generated_h
#error "MounteaDialogueGraphDataTypes.generated.h already included, missing '#pragma once' in MounteaDialogueGraphDataTypes.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphDataTypes_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_125_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FSubtitlesSettings_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FSubtitlesSettings>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_182_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueParticipant_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueParticipant>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_204_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueRowData_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueRowData>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_336_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueRow_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct(); \
	typedef FTableRowBase Super;


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueRow>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_531_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FUIRowID_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FUIRowID>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_569_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueTraversePath_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueTraversePath>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h_632_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMounteaDialogueContextReplicatedStruct_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FMounteaDialogueContextReplicatedStruct>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphDataTypes_h


#define FOREACH_ENUM_EMOUNTEADIALOGUELOGGINGVERBOSITY(op) \
	op(EMounteaDialogueLoggingVerbosity::None) \
	op(EMounteaDialogueLoggingVerbosity::Info) \
	op(EMounteaDialogueLoggingVerbosity::Warning) \
	op(EMounteaDialogueLoggingVerbosity::Error) 

enum class EMounteaDialogueLoggingVerbosity : uint8;
template<> struct TIsUEnumClass<EMounteaDialogueLoggingVerbosity> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EMounteaDialogueLoggingVerbosity>();

#define FOREACH_ENUM_EDIALOGUEMANAGERTYPE(op) \
	op(EDialogueManagerType::EDMT_PlayerDialogue) \
	op(EDialogueManagerType::EDMT_EnvironmentDialogue) \
	op(EDialogueManagerType::Default) 

enum class EDialogueManagerType : uint8;
template<> struct TIsUEnumClass<EDialogueManagerType> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerType>();

#define FOREACH_ENUM_EDIALOGUEMANAGERSTATE(op) \
	op(EDialogueManagerState::EDMS_Disabled) \
	op(EDialogueManagerState::EDMS_Enabled) \
	op(EDialogueManagerState::EDMS_Active) \
	op(EDialogueManagerState::Default) 

enum class EDialogueManagerState : uint8;
template<> struct TIsUEnumClass<EDialogueManagerState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueManagerState>();

#define FOREACH_ENUM_EDIALOGUEPARTICIPANTSTATE(op) \
	op(EDialogueParticipantState::EDPS_Disabled) \
	op(EDialogueParticipantState::EDPS_Enabled) \
	op(EDialogueParticipantState::EDPS_Active) \
	op(EDialogueParticipantState::Default) 

enum class EDialogueParticipantState : uint8;
template<> struct TIsUEnumClass<EDialogueParticipantState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueParticipantState>();

#define FOREACH_ENUM_EROWDURATIONMODE(op) \
	op(ERowDurationMode::ERDM_Manual) \
	op(ERowDurationMode::ERDM_Duration) \
	op(ERowDurationMode::EDRM_Override) \
	op(ERowDurationMode::EDRM_Add) \
	op(ERowDurationMode::ERDM_AutoCalculate) \
	op(ERowDurationMode::Default) 

enum class ERowDurationMode : uint8;
template<> struct TIsUEnumClass<ERowDurationMode> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowDurationMode>();

#define FOREACH_ENUM_EROWEXECUTIONMODE(op) \
	op(ERowExecutionMode::EREM_Automatic) \
	op(ERowExecutionMode::EREM_AwaitInput) \
	op(ERowExecutionMode::EREM_Stopping) \
	op(ERowExecutionMode::Default) 

enum class ERowExecutionMode : uint8;
template<> struct TIsUEnumClass<ERowExecutionMode> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<ERowExecutionMode>();

#define FOREACH_ENUM_EMOUNTEAINPUTMODE(op) \
	op(EMounteaInputMode::EIM_UIOnly) \
	op(EMounteaInputMode::EIM_UIAndGame) 

enum class EMounteaInputMode : uint8;
template<> struct TIsUEnumClass<EMounteaInputMode> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EMounteaInputMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
