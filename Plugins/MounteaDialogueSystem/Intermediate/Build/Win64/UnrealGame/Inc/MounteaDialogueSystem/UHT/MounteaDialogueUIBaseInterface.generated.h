// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HUD/MounteaDialogueUIBaseInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueUIBaseInterface_generated_h
#error "MounteaDialogueUIBaseInterface.generated.h already included, missing '#pragma once' in MounteaDialogueUIBaseInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueUIBaseInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execApplyTheme); \
	DECLARE_FUNCTION(execProcessStringCommand); \
	DECLARE_FUNCTION(execUnbindEvents); \
	DECLARE_FUNCTION(execBindEvents);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueUIBaseInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueUIBaseInterface(UMounteaDialogueUIBaseInterface&&); \
	UMounteaDialogueUIBaseInterface(const UMounteaDialogueUIBaseInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueUIBaseInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueUIBaseInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueUIBaseInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueUIBaseInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueUIBaseInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueUIBaseInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueUIBaseInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueUIBaseInterface() {} \
public: \
	typedef UMounteaDialogueUIBaseInterface UClassType; \
	typedef IMounteaDialogueUIBaseInterface ThisClass; \
	static void Execute_ApplyTheme(UObject* O); \
	static bool Execute_BindEvents(UObject* O); \
	static void Execute_ProcessStringCommand(UObject* O, const FString& Command, UObject* OptionalPayload); \
	static bool Execute_UnbindEvents(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_10_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueUIBaseInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
