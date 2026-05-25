// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/MounteaDialogueParticipantStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class IMounteaDialogueParticipantInterface;
class UAudioComponent;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UObject;
class USoundBase;
enum class EDialogueParticipantState : uint8;
struct FDialogueTraversePath;
struct FGameplayTag;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantStatics_generated_h
#error "MounteaDialogueParticipantStatics.generated.h already included, missing '#pragma once' in MounteaDialogueParticipantStatics.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantStatics_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessDialogueCommand); \
	DECLARE_FUNCTION(execGetTraversedPath); \
	DECLARE_FUNCTION(execSetDialogueGraph); \
	DECLARE_FUNCTION(execGetDialogueGraph); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execSkipParticipantVoice); \
	DECLARE_FUNCTION(execPlayParticipantVoice); \
	DECLARE_FUNCTION(execGetSavedStartingNode); \
	DECLARE_FUNCTION(execSaveTraversedPath); \
	DECLARE_FUNCTION(execSaveStartingNode); \
	DECLARE_FUNCTION(execGetDialogueManager); \
	DECLARE_FUNCTION(execSetDefaultParticipantState); \
	DECLARE_FUNCTION(execGetDefaultParticipantState); \
	DECLARE_FUNCTION(execSetParticipantState); \
	DECLARE_FUNCTION(execGetParticipantState); \
	DECLARE_FUNCTION(execInitializeParticipant); \
	DECLARE_FUNCTION(execGetParticipantTag); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCanParticipateInDialogue); \
	DECLARE_FUNCTION(execCanStartDialogue);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipantStatics(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipantStatics_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipantStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipantStatics)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueParticipantStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueParticipantStatics(UMounteaDialogueParticipantStatics&&); \
	UMounteaDialogueParticipantStatics(const UMounteaDialogueParticipantStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipantStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipantStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueParticipantStatics) \
	NO_API virtual ~UMounteaDialogueParticipantStatics();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_20_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueParticipantStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueParticipantStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
