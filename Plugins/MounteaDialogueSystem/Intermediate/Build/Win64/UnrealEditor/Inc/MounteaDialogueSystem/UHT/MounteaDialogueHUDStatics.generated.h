// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/MounteaDialogueHUDStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class UMounteaDialogueGraphNode;
class UMounteaDialogueGraphNode_DialogueNodeBase;
class UObject;
class UUserWidget;
enum class EDialogueOptionState : uint8;
enum class EUINavigation : uint8;
struct FDialogueOptionData;
struct FDialogueRow;
struct FDialogueRowData;
struct FGuid;
struct FWidgetAdditionParams;
struct FWidgetDialogueRow;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueHUDStatics_generated_h
#error "MounteaDialogueHUDStatics.generated.h already included, missing '#pragma once' in MounteaDialogueHUDStatics.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueHUDStatics_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FWidgetAdditionParams>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRequestHideWidget); \
	DECLARE_FUNCTION(execRequestShowWidget); \
	DECLARE_FUNCTION(execEnableTypeWriterEffect); \
	DECLARE_FUNCTION(execStartTypeWriterEffect); \
	DECLARE_FUNCTION(execStopTypeWriterEffect); \
	DECLARE_FUNCTION(execInitializeWidgetDialogueRow); \
	DECLARE_FUNCTION(execResetWidgetDialogueRow); \
	DECLARE_FUNCTION(execSetNewWidgetDialogueRowData); \
	DECLARE_FUNCTION(execGetDialogueWidgetRowData); \
	DECLARE_FUNCTION(execToggleForcedFocus); \
	DECLARE_FUNCTION(execGetOptionIndex); \
	DECLARE_FUNCTION(execSetFocusedOption); \
	DECLARE_FUNCTION(execGetFocusedOptionIndex); \
	DECLARE_FUNCTION(execGetDialogueOptions); \
	DECLARE_FUNCTION(execProcessContainerOptionSelected); \
	DECLARE_FUNCTION(execClearDialogueOptions); \
	DECLARE_FUNCTION(execRemoveDialogueOptions); \
	DECLARE_FUNCTION(execRemoveDialogueOption); \
	DECLARE_FUNCTION(execAddNewDialogueOptions); \
	DECLARE_FUNCTION(execAddNewDialogueOption); \
	DECLARE_FUNCTION(execSetDialogueOptionClass); \
	DECLARE_FUNCTION(execGetDialogueOptionClass); \
	DECLARE_FUNCTION(execGetParentDialogueWidget); \
	DECLARE_FUNCTION(execSetParentDialogueWidget); \
	DECLARE_FUNCTION(execProcessOptionSelected); \
	DECLARE_FUNCTION(execInitializeDialogueOption); \
	DECLARE_FUNCTION(execResetDialogueOptionData); \
	DECLARE_FUNCTION(execSetNewDialogueOptionData); \
	DECLARE_FUNCTION(execGetDialogueOptionData); \
	DECLARE_FUNCTION(execOnOptionSelected); \
	DECLARE_FUNCTION(execRefreshDialogueWidget); \
	DECLARE_FUNCTION(execApplyTheme); \
	DECLARE_FUNCTION(execProcessStringCommand); \
	DECLARE_FUNCTION(execUnbindEvents); \
	DECLARE_FUNCTION(execBindEvents); \
	DECLARE_FUNCTION(execRemoveChildWidget); \
	DECLARE_FUNCTION(execAddChildWidget); \
	DECLARE_FUNCTION(execRemoveChildWidgetFromViewport); \
	DECLARE_FUNCTION(execAddChildWidgetToViewport); \
	DECLARE_FUNCTION(execGetViewportWidget); \
	DECLARE_FUNCTION(execInitializeViewportWidget); \
	DECLARE_FUNCTION(execGetViewportBaseClass); \
	DECLARE_FUNCTION(execGetSafeOptionIndex); \
	DECLARE_FUNCTION(execSetFocusState); \
	DECLARE_FUNCTION(execGetFocusState); \
	DECLARE_FUNCTION(execGetWidgetZOrder); \
	DECLARE_FUNCTION(execReplaceRegexInText); \
	DECLARE_FUNCTION(execFilterDialogueFriendlyNodes); \
	DECLARE_FUNCTION(execGetDialogueNodeRow); \
	DECLARE_FUNCTION(execGetDialogueNodeGuid); \
	DECLARE_FUNCTION(execNewDialogueWidgetRowData); \
	DECLARE_FUNCTION(execNewDialogueOptionData);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueHUDStatics(); \
	friend struct Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueHUDStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueHUDStatics)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueHUDStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueHUDStatics(UMounteaDialogueHUDStatics&&); \
	UMounteaDialogueHUDStatics(const UMounteaDialogueHUDStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueHUDStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueHUDStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueHUDStatics) \
	NO_API virtual ~UMounteaDialogueHUDStatics();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_52_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_55_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueHUDStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
