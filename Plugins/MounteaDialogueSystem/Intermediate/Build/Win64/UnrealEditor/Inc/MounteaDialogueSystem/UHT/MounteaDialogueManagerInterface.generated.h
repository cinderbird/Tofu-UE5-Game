// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Core/MounteaDialogueManagerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class UMounteaDialogueContext;
class UObject;
class UUserWidget;
enum class EDialogueManagerState : uint8;
struct FDialogueParticipants;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerInterface_generated_h
#error "MounteaDialogueManagerInterface.generated.h already included, missing '#pragma once' in MounteaDialogueManagerInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_18_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueParticipants_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueParticipants>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_37_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueEvent, UMounteaDialogueContext* Context);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_39_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueStartRequested_DelegateWrapper(const FMulticastScriptDelegate& DialogueStartRequested, TScriptInterface<IMounteaDialogueManagerInterface> const& CallingManager, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_41_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueStartRequestedResult_DelegateWrapper(const FMulticastScriptDelegate& DialogueStartRequestedResult, bool Result, const FString& ResultMessage);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_43_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueContextUpdated_DelegateWrapper(const FMulticastScriptDelegate& DialogueContextUpdated, UMounteaDialogueContext* Context);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_44_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueUserInterfaceChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueUserInterfaceChanged, TSubclassOf<UUserWidget> DialogueWidgetClass, UUserWidget* DialogueWidget);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_46_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueNodeEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueNodeEvent, UMounteaDialogueContext* Context);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_47_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueRowEvent_DelegateWrapper(const FMulticastScriptDelegate& DialogueRowEvent, UMounteaDialogueContext* Context);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_49_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueFailed_DelegateWrapper(const FMulticastScriptDelegate& DialogueFailed, const FString& ErrorMessage);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_51_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueManagerStateChanged_DelegateWrapper(const FMulticastScriptDelegate& DialogueManagerStateChanged, EDialogueManagerState const& NewState);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_53_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FDialogueWidgetCommand_DelegateWrapper(const FMulticastScriptDelegate& DialogueWidgetCommand, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& WidgetCommand);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSkipDialogueRow); \
	DECLARE_FUNCTION(execDialogueRowProcessed); \
	DECLARE_FUNCTION(execProcessDialogueRow); \
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execNodeProcessed); \
	DECLARE_FUNCTION(execProcessNode); \
	DECLARE_FUNCTION(execNodePrepared); \
	DECLARE_FUNCTION(execPrepareNode); \
	DECLARE_FUNCTION(execCleanupDialogue); \
	DECLARE_FUNCTION(execSetDialogueWidgetZOrder); \
	DECLARE_FUNCTION(execGetDialogueWidgetZOrder); \
	DECLARE_FUNCTION(execGetDialogueWidget); \
	DECLARE_FUNCTION(execSetDialogueWidget); \
	DECLARE_FUNCTION(execExecuteWidgetCommand); \
	DECLARE_FUNCTION(execCloseDialogueUI); \
	DECLARE_FUNCTION(execUpdateDialogueUI); \
	DECLARE_FUNCTION(execCreateDialogueUI); \
	DECLARE_FUNCTION(execResetDialogueUIObjects); \
	DECLARE_FUNCTION(execSetDialogueUIObjects); \
	DECLARE_FUNCTION(execRemoveDialogueUIObjects); \
	DECLARE_FUNCTION(execRemoveDialogueUIObject); \
	DECLARE_FUNCTION(execAddDialogueUIObjects); \
	DECLARE_FUNCTION(execAddDialogueUIObject); \
	DECLARE_FUNCTION(execUpdateWorldDialogueUI); \
	DECLARE_FUNCTION(execCloseDialogue); \
	DECLARE_FUNCTION(execRequestCloseDialogue); \
	DECLARE_FUNCTION(execStartDialogue); \
	DECLARE_FUNCTION(execRequestStartDialogue); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execUpdateDialogueContext); \
	DECLARE_FUNCTION(execGetDialogueContext); \
	DECLARE_FUNCTION(execGetDefaultManagerState); \
	DECLARE_FUNCTION(execGetManagerState); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueManagerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueManagerInterface(UMounteaDialogueManagerInterface&&); \
	UMounteaDialogueManagerInterface(const UMounteaDialogueManagerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueManagerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManagerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueManagerInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueManagerInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueManagerInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManagerInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManagerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManagerInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueManagerInterface() {} \
public: \
	typedef UMounteaDialogueManagerInterface UClassType; \
	typedef IMounteaDialogueManagerInterface ThisClass; \
	static bool Execute_AddDialogueUIObject(UObject* O, UObject* NewDialogueObject); \
	static bool Execute_AddDialogueUIObjects(UObject* O, TArray<UObject*> const& NewDialogueObjects); \
	static bool Execute_CanStartDialogue(const UObject* O); \
	static void Execute_CleanupDialogue(UObject* O); \
	static void Execute_CloseDialogue(UObject* O); \
	static bool Execute_CloseDialogueUI(UObject* O); \
	static bool Execute_CreateDialogueUI(UObject* O, FString& Message); \
	static void Execute_DialogueRowProcessed(UObject* O, bool bForceFinish); \
	static void Execute_ExecuteWidgetCommand(UObject* O, const FString& Command); \
	static EDialogueManagerState Execute_GetDefaultManagerState(const UObject* O); \
	static UMounteaDialogueContext* Execute_GetDialogueContext(const UObject* O); \
	static UUserWidget* Execute_GetDialogueWidget(const UObject* O); \
	static int32 Execute_GetDialogueWidgetZOrder(const UObject* O); \
	static EDialogueManagerState Execute_GetManagerState(const UObject* O); \
	static AActor* Execute_GetOwningActor(const UObject* O); \
	static void Execute_NodePrepared(UObject* O); \
	static void Execute_NodeProcessed(UObject* O); \
	static void Execute_PrepareNode(UObject* O); \
	static void Execute_ProcessDialogueRow(UObject* O); \
	static void Execute_ProcessNode(UObject* O); \
	static bool Execute_RemoveDialogueUIObject(UObject* O, UObject* DialogueObjectToRemove); \
	static bool Execute_RemoveDialogueUIObjects(UObject* O, TArray<UObject*> const& DialogueObjectsToRemove); \
	static void Execute_RequestCloseDialogue(UObject* O); \
	static void Execute_RequestStartDialogue(UObject* O, AActor* DialogueInitiator, FDialogueParticipants const& InitialParticipants); \
	static void Execute_ResetDialogueUIObjects(UObject* O); \
	static void Execute_SelectNode(UObject* O, FGuid const& NodeGuid); \
	static void Execute_SetDialogueUIObjects(UObject* O, TArray<UObject*> const& NewDialogueObjects); \
	static void Execute_SetDialogueWidget(UObject* O, UUserWidget* DialogueUIPtr); \
	static void Execute_SetDialogueWidgetZOrder(UObject* O, const int32 NewZOrder); \
	static void Execute_SkipDialogueRow(UObject* O); \
	static void Execute_StartDialogue(UObject* O); \
	static void Execute_UpdateDialogueContext(UObject* O, UMounteaDialogueContext* NewContext); \
	static bool Execute_UpdateDialogueUI(UObject* O, FString& Message, const FString& Command); \
	static void Execute_UpdateWorldDialogueUI(UObject* O, const FString& Command); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_29_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_63_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h_32_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueManagerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueManagerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
