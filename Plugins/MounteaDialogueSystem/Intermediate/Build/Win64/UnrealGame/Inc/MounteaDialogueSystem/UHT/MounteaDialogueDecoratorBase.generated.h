// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Decorators/MounteaDialogueDecoratorBase.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueManagerInterface;
class IMounteaDialogueParticipantInterface;
class UMounteaDialogueGraph;
class UMounteaDialogueGraphNode;
class UObject;
class UWorld;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueDecoratorBase_generated_h
#error "MounteaDialogueDecoratorBase.generated.h already included, missing '#pragma once' in MounteaDialogueDecoratorBase.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueDecoratorBase_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual TSet<TSubclassOf<UMounteaDialogueGraphNode> > GetBlacklistedNodeTypes_Implementation() const; \
	virtual FText GetDecoratorName_Implementation() const; \
	DECLARE_FUNCTION(execGetBlacklistedNodeTypes); \
	DECLARE_FUNCTION(execGetDecoratorName); \
	DECLARE_FUNCTION(execIsDecoratorStackable); \
	DECLARE_FUNCTION(execIsDecoratorAllowedForGraph); \
	DECLARE_FUNCTION(execGetOwnerParticipant); \
	DECLARE_FUNCTION(execGetOwner); \
	DECLARE_FUNCTION(execGetOwningGraph); \
	DECLARE_FUNCTION(execGetOwningNode); \
	DECLARE_FUNCTION(execGetOwningWorld); \
	DECLARE_FUNCTION(execStoreWorldReference); \
	DECLARE_FUNCTION(execExecuteDecorator); \
	DECLARE_FUNCTION(execEvaluateDecorator); \
	DECLARE_FUNCTION(execValidateDecorator); \
	DECLARE_FUNCTION(execCleanupDecorator); \
	DECLARE_FUNCTION(execSetOwningManager); \
	DECLARE_FUNCTION(execGetManager); \
	DECLARE_FUNCTION(execInitializeDecorator); \
	DECLARE_FUNCTION(execGetDecoratorDocumentationLink);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueDecoratorBase(); \
	friend struct Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueDecoratorBase, UObject, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueDecoratorBase) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueDecoratorBase*>(this); }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueDecoratorBase(UMounteaDialogueDecoratorBase&&); \
	UMounteaDialogueDecoratorBase(const UMounteaDialogueDecoratorBase&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueDecoratorBase); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueDecoratorBase); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueDecoratorBase) \
	NO_API virtual ~UMounteaDialogueDecoratorBase();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_29_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_32_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueDecoratorBase>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_260_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics; \
	MOUNTEADIALOGUESYSTEM_API static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FMounteaDialogueDecorator>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h


#define FOREACH_ENUM_EDECORATORSTATE(op) \
	op(EDecoratorState::Uninitialized) \
	op(EDecoratorState::Initialized) 

enum class EDecoratorState : uint8;
template<> struct TIsUEnumClass<EDecoratorState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDecoratorState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
