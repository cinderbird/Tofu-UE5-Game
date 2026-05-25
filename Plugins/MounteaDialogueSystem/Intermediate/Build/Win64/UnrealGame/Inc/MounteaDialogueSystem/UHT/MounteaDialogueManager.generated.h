// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MounteaDialogueManager.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UMounteaDialogueContext;
enum class EDialogueManagerState : uint8;
struct FDialogueParticipants;
struct FMounteaDialogueContextReplicatedStruct;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueManager_generated_h
#error "MounteaDialogueManager.generated.h already included, missing '#pragma once' in MounteaDialogueManager.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueManager_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void CleanupDialogue_Server_Implementation(); \
	virtual void RequestStartDialogue_Server_Implementation(AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants); \
	virtual void UpdateDialogueContext_Server_Implementation(UMounteaDialogueContext* NewContext); \
	virtual void SetDialogueContext_Server_Implementation(UMounteaDialogueContext* NewContext); \
	virtual void SetDefaultManagerState_Server_Implementation(const EDialogueManagerState NewState); \
	virtual void SetManagerState_Server_Implementation(const EDialogueManagerState NewState); \
	virtual void StopParticipants_Server_Implementation() const; \
	virtual void StartParticipants_Server_Implementation(); \
	virtual void RequestBroadcastContext_Server_Implementation(FMounteaDialogueContextReplicatedStruct const& Context); \
	DECLARE_FUNCTION(execOnRep_DialogueContext); \
	DECLARE_FUNCTION(execOnRep_ManagerState); \
	DECLARE_FUNCTION(execCleanupDialogue_Server); \
	DECLARE_FUNCTION(execRequestStartDialogue_Server); \
	DECLARE_FUNCTION(execUpdateDialogueContext_Server); \
	DECLARE_FUNCTION(execSetDialogueContext_Server); \
	DECLARE_FUNCTION(execSetDefaultManagerState_Server); \
	DECLARE_FUNCTION(execSetManagerState_Server); \
	DECLARE_FUNCTION(execDialogueStartRequestReceived); \
	DECLARE_FUNCTION(execStopParticipants_Server); \
	DECLARE_FUNCTION(execStartParticipants_Server); \
	DECLARE_FUNCTION(execDialogueFailed); \
	DECLARE_FUNCTION(execRequestBroadcastContext_Server); \
	DECLARE_FUNCTION(execRequestBroadcastContext);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueManager(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManager_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManager, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManager) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueManager*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		ManagerState=NETFIELD_REP_START, \
		TransientDialogueContext, \
		NETFIELD_REP_END=TransientDialogueContext	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueManager(UMounteaDialogueManager&&); \
	UMounteaDialogueManager(const UMounteaDialogueManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueManager) \
	NO_API virtual ~UMounteaDialogueManager();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_19_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
