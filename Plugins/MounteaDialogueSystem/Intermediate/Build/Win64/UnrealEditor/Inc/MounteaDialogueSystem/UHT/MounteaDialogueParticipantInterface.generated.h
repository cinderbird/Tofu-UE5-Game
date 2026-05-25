// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Core/MounteaDialogueParticipantInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class UAudioComponent;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UObject;
class USoundBase;
enum class EDialogueParticipantState : uint8;
struct FDialogueTraversePath;
struct FGameplayTag;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantInterface_generated_h
#error "MounteaDialogueParticipantInterface.generated.h already included, missing '#pragma once' in MounteaDialogueParticipantInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipantInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_24_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueGraphChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueGraphChanged, UMounteaDialogueGraph* NewGraph);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_25_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueParticipantStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantStateChanged, EDialogueParticipantState const& NewState);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_26_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueParticipantAudioComponentChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueParticipantAudioComponentChanged, const UAudioComponent* NewAudioComp);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_27_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FParticipantStartingNodeSaved_DelegateWrapper(const FMulticastScriptDelegate& ParticipantStartingNodeSaved, const UMounteaDialogueGraphNode* NewSavedNode);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_28_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FParticipantCommandRequested_DelegateWrapper(const FMulticastScriptDelegate& ParticipantCommandRequested, const FString& Command, UObject* OptionalPayload);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_29_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogueUpdated, TScriptInterface<IMounteaDialogueManagerInterface> const& OwningManager);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessDialogueCommand); \
	DECLARE_FUNCTION(execGetTraversedPath); \
	DECLARE_FUNCTION(execSetAudioComponent); \
	DECLARE_FUNCTION(execGetAudioComponent); \
	DECLARE_FUNCTION(execSetDefaultParticipantState); \
	DECLARE_FUNCTION(execGetDefaultParticipantState); \
	DECLARE_FUNCTION(execSetParticipantState); \
	DECLARE_FUNCTION(execGetParticipantState); \
	DECLARE_FUNCTION(execSetDialogueGraph); \
	DECLARE_FUNCTION(execGetDialogueGraph); \
	DECLARE_FUNCTION(execGetSavedStartingNode); \
	DECLARE_FUNCTION(execSkipParticipantVoice); \
	DECLARE_FUNCTION(execPlayParticipantVoice); \
	DECLARE_FUNCTION(execInitializeParticipant); \
	DECLARE_FUNCTION(execGetParticipantTag); \
	DECLARE_FUNCTION(execSaveTraversedPath); \
	DECLARE_FUNCTION(execSaveStartingNode); \
	DECLARE_FUNCTION(execGetOwningActor); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execCanParticipateInDialogue);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueParticipantInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueParticipantInterface(UMounteaDialogueParticipantInterface&&); \
	UMounteaDialogueParticipantInterface(const UMounteaDialogueParticipantInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueParticipantInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipantInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueParticipantInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueParticipantInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipantInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipantInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipantInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipantInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueParticipantInterface() {} \
public: \
	typedef UMounteaDialogueParticipantInterface UClassType; \
	typedef IMounteaDialogueParticipantInterface ThisClass; \
	static bool Execute_CanParticipateInDialogue(const UObject* O); \
	static bool Execute_CanStartDialogue(const UObject* O); \
	static UAudioComponent* Execute_GetAudioComponent(const UObject* O); \
	static EDialogueParticipantState Execute_GetDefaultParticipantState(const UObject* O); \
	static UMounteaDialogueGraph* Execute_GetDialogueGraph(const UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static EDialogueParticipantState Execute_GetParticipantState(const UObject* O); \
	static FGameplayTag Execute_GetParticipantTag(const UObject* O); \
	static UMounteaDialogueGraphNode* Execute_GetSavedStartingNode(const UObject* O); \
	static TArray<FDialogueTraversePath> Execute_GetTraversedPath(const UObject* O); \
	static void Execute_InitializeParticipant(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& Manager); \
	static void Execute_PlayParticipantVoice(UObject* O, USoundBase* ParticipantVoice); \
	static void Execute_ProcessDialogueCommand(UObject* O, const FString& Command, UObject* Payload); \
	static void Execute_SaveStartingNode(UObject* O, UMounteaDialogueGraphNode* NewStartingNode); \
	static void Execute_SaveTraversedPath(UObject* O, TArray<FDialogueTraversePath>& InPath); \
	static void Execute_SetAudioComponent(UObject* O, UAudioComponent* NewAudioComponent); \
	static void Execute_SetDefaultParticipantState(UObject* O, const EDialogueParticipantState NewState); \
	static void Execute_SetDialogueGraph(UObject* O, UMounteaDialogueGraph* NewDialogueGraph); \
	static void Execute_SetParticipantState(UObject* O, const EDialogueParticipantState NewState); \
	static void Execute_SkipParticipantVoice(UObject* O, USoundBase* ParticipantVoice); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_12_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_38_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueParticipantInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueParticipantInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
