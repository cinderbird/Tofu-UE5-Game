// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Graph/MounteaDialogueGraph.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
struct FGuid;
struct FMounteaDialogueDecorator;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueGraph_generated_h
#error "MounteaDialogueGraph.generated.h already included, missing '#pragma once' in MounteaDialogueGraph.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueGraph_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_19_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnDialogueGraphStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueGraphStateChanged, const UMounteaDialogueGraph* Graph);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_20_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnDialogueGraphNodeStateChanged_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueGraphNodeStateChanged, const UMounteaDialogueGraphNode* Node);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessNodeStateChanged); \
	DECLARE_FUNCTION(execGetAllDecorators); \
	DECLARE_FUNCTION(execGetGraphScopeDecorators); \
	DECLARE_FUNCTION(execGetGraphDecorators); \
	DECLARE_FUNCTION(execGetStartNode); \
	DECLARE_FUNCTION(execGetRootNodes); \
	DECLARE_FUNCTION(execGetAllNodes); \
	DECLARE_FUNCTION(execFindNodeByGuid); \
	DECLARE_FUNCTION(execGetGraphGUID);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraph(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraph_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraph, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraph) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueGraph*>(this); }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueGraph(UMounteaDialogueGraph&&); \
	UMounteaDialogueGraph(const UMounteaDialogueGraph&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraph); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraph); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueGraph) \
	NO_API virtual ~UMounteaDialogueGraph();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_39_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h_42_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueGraph>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Graph_MounteaDialogueGraph_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
