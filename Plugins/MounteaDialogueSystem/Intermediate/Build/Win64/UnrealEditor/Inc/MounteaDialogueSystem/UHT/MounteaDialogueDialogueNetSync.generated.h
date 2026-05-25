// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MounteaDialogueDialogueNetSync.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UObject;
enum class EDialogueManagerState : uint8;
struct FDialogueParticipants;
struct FMounteaDialogueContextReplicatedStruct;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueDialogueNetSync_generated_h
#error "MounteaDialogueDialogueNetSync.generated.h already included, missing '#pragma once' in MounteaDialogueDialogueNetSync.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueDialogueNetSync_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void ReceiveCloseDialogue_Server_Implementation(UObject* CallingManager); \
	virtual void ReceiveBroadcastContextRequest_Server_Implementation(UObject* CallingManager, FMounteaDialogueContextReplicatedStruct const& Context); \
	virtual void ReceiveSetState_Server_Implementation(UObject* CallingManager, const EDialogueManagerState NewState); \
	virtual void ReceiveCloseRequest_Server_Implementation(UObject* CallingManager); \
	virtual void ReceiveStartRequest_Server_Implementation(UObject* CallingManager, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants); \
	DECLARE_FUNCTION(execReceiveCloseDialogue_Server); \
	DECLARE_FUNCTION(execReceiveBroadcastContextRequest_Server); \
	DECLARE_FUNCTION(execReceiveSetState_Server); \
	DECLARE_FUNCTION(execReceiveCloseRequest_Server); \
	DECLARE_FUNCTION(execReceiveStartRequest_Server);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueDialogueNetSync(); \
	friend struct Z_Construct_UClass_UMounteaDialogueDialogueNetSync_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueDialogueNetSync, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueDialogueNetSync)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueDialogueNetSync(UMounteaDialogueDialogueNetSync&&); \
	UMounteaDialogueDialogueNetSync(const UMounteaDialogueDialogueNetSync&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueDialogueNetSync); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueDialogueNetSync); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueDialogueNetSync) \
	NO_API virtual ~UMounteaDialogueDialogueNetSync();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_17_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueDialogueNetSync>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueDialogueNetSync_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
