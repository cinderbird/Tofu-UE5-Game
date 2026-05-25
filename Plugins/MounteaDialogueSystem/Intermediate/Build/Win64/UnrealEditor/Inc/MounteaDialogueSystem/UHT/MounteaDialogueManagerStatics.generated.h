// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Helpers/MounteaDialogueManagerStatics.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class IMounteaDialogueManagerInterface;
class UMounteaDialogueContext;
class UObject;
class UUserWidget;
enum class EDialogueManagerState : uint8;
enum class EDialogueManagerType : uint8;
struct FDialogueParticipants;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerStatics_generated_h
#error "MounteaDialogueManagerStatics.generated.h already included, missing '#pragma once' in MounteaDialogueManagerStatics.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueManagerStatics_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSkipDialogueRow); \
	DECLARE_FUNCTION(execDialogueRowProcessed); \
	DECLARE_FUNCTION(execProcessDialogueRow); \
	DECLARE_FUNCTION(execSetDialogueWidgetZOrder); \
	DECLARE_FUNCTION(execGetDialogueWidgetZOrder); \
	DECLARE_FUNCTION(execGetDialogueWidgetClass); \
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
	DECLARE_FUNCTION(execSelectNode); \
	DECLARE_FUNCTION(execProcessNode); \
	DECLARE_FUNCTION(execPrepareNode); \
	DECLARE_FUNCTION(execRequestCloseDialogue); \
	DECLARE_FUNCTION(execRequestStartDialogue); \
	DECLARE_FUNCTION(execCanStartDialogue); \
	DECLARE_FUNCTION(execGetDialogueContext); \
	DECLARE_FUNCTION(execGetDialogueManagerType); \
	DECLARE_FUNCTION(execGetDefaultDialogueManagerState); \
	DECLARE_FUNCTION(execSetManagerState); \
	DECLARE_FUNCTION(execGetManagerState); \
	DECLARE_FUNCTION(execGetOwningActor);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueManagerStatics(); \
	friend struct Z_Construct_UClass_UMounteaDialogueManagerStatics_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueManagerStatics, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueManagerStatics)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMounteaDialogueManagerStatics(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueManagerStatics(UMounteaDialogueManagerStatics&&); \
	UMounteaDialogueManagerStatics(const UMounteaDialogueManagerStatics&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueManagerStatics); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueManagerStatics); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueManagerStatics) \
	NO_API virtual ~UMounteaDialogueManagerStatics();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_18_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueManagerStatics>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueManagerStatics_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
