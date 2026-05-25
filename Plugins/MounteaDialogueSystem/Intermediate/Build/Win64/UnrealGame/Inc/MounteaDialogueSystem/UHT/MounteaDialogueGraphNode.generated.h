// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Nodes/MounteaDialogueGraphNode.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueManagerInterface;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UWorld;
struct FGuid;
struct FMounteaDialogueDecorator;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_generated_h
#error "MounteaDialogueGraphNode.generated.h already included, missing '#pragma once' in MounteaDialogueGraphNode.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraphNode_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_15_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnNodeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnNodeStateChanged, const UMounteaDialogueGraphNode* Node);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetNodeTitle); \
	DECLARE_FUNCTION(execSetNewWorld); \
	DECLARE_FUNCTION(execCleanupNode); \
	DECLARE_FUNCTION(execValidateNodeRuntime); \
	DECLARE_FUNCTION(execGetParentNodes); \
	DECLARE_FUNCTION(execGetChildrenNodes); \
	DECLARE_FUNCTION(execGetGraphGUID); \
	DECLARE_FUNCTION(execGetGraph); \
	DECLARE_FUNCTION(execGetNodeGUID); \
	DECLARE_FUNCTION(execGetNodeIndex); \
	DECLARE_FUNCTION(execGetMaxChildNodes); \
	DECLARE_FUNCTION(execDoesInheritDecorators); \
	DECLARE_FUNCTION(execEvaluateDecorators); \
	DECLARE_FUNCTION(execCanStartNode); \
	DECLARE_FUNCTION(execGetNodeDecorators); \
	DECLARE_FUNCTION(execProcessNode); \
	DECLARE_FUNCTION(execPreProcessNode); \
	DECLARE_FUNCTION(execDoesAutoStart); \
	DECLARE_FUNCTION(execInitializeNode);


#if WITH_EDITOR
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execGetDefaultTooltipBody); \
	DECLARE_FUNCTION(execGetNodeDocumentationLink); \
	DECLARE_FUNCTION(execGetNodeCategory); \
	DECLARE_FUNCTION(execGetDescription); \
	DECLARE_FUNCTION(execGetNodeTooltipText);
#else // WITH_EDITOR
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraphNode(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraphNode_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraphNode, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraphNode) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueGraphNode*>(this); }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueGraphNode(UMounteaDialogueGraphNode&&); \
	UMounteaDialogueGraphNode(const UMounteaDialogueGraphNode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraphNode); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraphNode); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueGraphNode) \
	NO_API virtual ~UMounteaDialogueGraphNode();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_24_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h_27_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueGraphNode>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
