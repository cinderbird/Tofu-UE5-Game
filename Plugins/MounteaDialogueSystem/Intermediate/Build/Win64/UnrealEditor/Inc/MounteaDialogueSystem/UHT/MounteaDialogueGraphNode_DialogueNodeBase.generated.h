// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/MounteaDialogueGraphNode_DialogueNodeBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UDataTable;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_DialogueNodeBase_generated_h
#error "MounteaDialogueGraphNode_DialogueNodeBase.generated.h already included, missing '#pragma once' in MounteaDialogueGraphNode_DialogueNodeBase.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_DialogueNodeBase_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetRowNames); \
	DECLARE_FUNCTION(execSetRowName); \
	DECLARE_FUNCTION(execSetDataTable); \
	DECLARE_FUNCTION(execGetRowName); \
	DECLARE_FUNCTION(execGetDataTable);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraphNode_DialogueNodeBase(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraphNode_DialogueNodeBase, UMounteaDialogueGraphNode, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraphNode_DialogueNodeBase)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueGraphNode_DialogueNodeBase(UMounteaDialogueGraphNode_DialogueNodeBase&&); \
	UMounteaDialogueGraphNode_DialogueNodeBase(const UMounteaDialogueGraphNode_DialogueNodeBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraphNode_DialogueNodeBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraphNode_DialogueNodeBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueGraphNode_DialogueNodeBase) \
	NO_API virtual ~UMounteaDialogueGraphNode_DialogueNodeBase();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_19_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueGraphNode_DialogueNodeBase>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_DialogueNodeBase_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
