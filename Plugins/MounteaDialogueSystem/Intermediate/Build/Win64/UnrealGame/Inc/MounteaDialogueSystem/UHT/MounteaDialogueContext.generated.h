// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Data/MounteaDialogueContext.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"
#include "Net/Core/PushModel/PushModelMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueParticipantInterface;
class UMounteaDialogueContext;
class UMounteaDialogueGraphNode;
struct FDataTableRowHandle;
struct FDialogueRow;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueContext_generated_h
#error "MounteaDialogueContext.generated.h already included, missing '#pragma once' in MounteaDialogueContext.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueContext_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_15_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnDialogueContextUpdated_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueContextUpdated);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_17_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueContextUpdatedFromBlueprint_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdatedFromBlueprint, UMounteaDialogueContext* Context);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveDialogueParticipantsBP); \
	DECLARE_FUNCTION(execAddDialogueParticipantsBP); \
	DECLARE_FUNCTION(execRemoveDialogueParticipantBP); \
	DECLARE_FUNCTION(execAddDialogueParticipantBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueParticipantBP); \
	DECLARE_FUNCTION(execUpdateDialoguePlayerParticipantBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueTableBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueRowDataIndexBP); \
	DECLARE_FUNCTION(execUpdateActiveDialogueNodeBP); \
	DECLARE_FUNCTION(execUpdateDialogueParticipantBP); \
	DECLARE_FUNCTION(execSetDialogueContextBP); \
	DECLARE_FUNCTION(execIsValid); \
	DECLARE_FUNCTION(execToString);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueContext(); \
	friend struct Z_Construct_UClass_UMounteaDialogueContext_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueContext, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueContext) \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ActiveDialogueParticipant=NETFIELD_REP_START, \
		PlayerDialogueParticipant, \
		DialogueParticipant, \
		DialogueParticipants, \
		ActiveNode, \
		PreviousActiveNode, \
		AllowedChildNodes, \
		ActiveDialogueTableHandle, \
		ActiveDialogueRow, \
		ActiveDialogueRowDataIndex, \
		LastWidgetCommand, \
		NETFIELD_REP_END=LastWidgetCommand	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override; \
private: \
	REPLICATED_BASE_CLASS(UMounteaDialogueContext) \
public:


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueContext(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueContext(UMounteaDialogueContext&&); \
	UMounteaDialogueContext(const UMounteaDialogueContext&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueContext); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueContext); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueContext) \
	NO_API virtual ~UMounteaDialogueContext();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_27_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h_30_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueContext>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueContext_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
