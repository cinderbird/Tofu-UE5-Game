// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UMG/MounteaDialogueOptionsContainerInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMounteaDialogueGraphNode_DialogueNodeBase;
class UUserWidget;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionsContainerInterface_generated_h
#error "MounteaDialogueOptionsContainerInterface.generated.h already included, missing '#pragma once' in MounteaDialogueOptionsContainerInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionsContainerInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocusedOption); \
	DECLARE_FUNCTION(execGetFocusedOptionIndex); \
	DECLARE_FUNCTION(execToggleForcedFocus); \
	DECLARE_FUNCTION(execGetDialogueOptions); \
	DECLARE_FUNCTION(execProcessOptionSelected); \
	DECLARE_FUNCTION(execClearDialogueOptions); \
	DECLARE_FUNCTION(execRemoveDialogueOptions); \
	DECLARE_FUNCTION(execRemoveDialogueOption); \
	DECLARE_FUNCTION(execAddNewDialogueOptions); \
	DECLARE_FUNCTION(execAddNewDialogueOption); \
	DECLARE_FUNCTION(execSetDialogueOptionClass); \
	DECLARE_FUNCTION(execGetDialogueOptionClass); \
	DECLARE_FUNCTION(execGetParentDialogueWidget); \
	DECLARE_FUNCTION(execSetParentDialogueWidget);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueOptionsContainerInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueOptionsContainerInterface(UMounteaDialogueOptionsContainerInterface&&); \
	UMounteaDialogueOptionsContainerInterface(const UMounteaDialogueOptionsContainerInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueOptionsContainerInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueOptionsContainerInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueOptionsContainerInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueOptionsContainerInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueOptionsContainerInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueOptionsContainerInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueOptionsContainerInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueOptionsContainerInterface() {} \
public: \
	typedef UMounteaDialogueOptionsContainerInterface UClassType; \
	typedef IMounteaDialogueOptionsContainerInterface ThisClass; \
	static void Execute_AddNewDialogueOption(UObject* O, UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption); \
	static void Execute_AddNewDialogueOptions(UObject* O, TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& NewDialogueOptions); \
	static void Execute_ClearDialogueOptions(UObject* O); \
	static TSoftClassPtr<UUserWidget>  Execute_GetDialogueOptionClass(const UObject* O); \
	static TArray<UUserWidget*> Execute_GetDialogueOptions(const UObject* O); \
	static int32 Execute_GetFocusedOptionIndex(const UObject* O); \
	static UUserWidget* Execute_GetParentDialogueWidget(const UObject* O); \
	static void Execute_ProcessOptionSelected(UObject* O, FGuid const& SelectedOption, UUserWidget* CallingWidget); \
	static void Execute_RemoveDialogueOption(UObject* O, UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption); \
	static void Execute_RemoveDialogueOptions(UObject* O, TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> const& DirtyDialogueOptions); \
	static void Execute_SetDialogueOptionClass(UObject* O, TSoftClassPtr<UUserWidget>  const& NewDialogueOptionClass); \
	static void Execute_SetFocusedOption(UObject* O, const int32 NewFocusedOption); \
	static void Execute_SetParentDialogueWidget(UObject* O, UUserWidget* NewParentDialogueWidget); \
	static void Execute_ToggleForcedFocus(UObject* O, bool bEnable); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_14_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h_17_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueOptionsContainerInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionsContainerInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
