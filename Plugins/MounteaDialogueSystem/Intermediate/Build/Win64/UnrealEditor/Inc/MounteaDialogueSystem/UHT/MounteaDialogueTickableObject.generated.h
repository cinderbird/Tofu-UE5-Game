// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/Core/MounteaDialogueTickableObject.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueTickableObject;
class UObject;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueTickableObject_generated_h
#error "MounteaDialogueTickableObject.generated.h already included, missing '#pragma once' in MounteaDialogueTickableObject.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueTickableObject_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_9_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FMounteaDialogueTick_DelegateWrapper(const FMulticastScriptDelegate& MounteaDialogueTick, UObject* SelfRef, UObject* ParentTickable, float DeltaTime);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execTickMounteaEvent); \
	DECLARE_FUNCTION(execUnregisterTick); \
	DECLARE_FUNCTION(execRegisterTick);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueTickableObject(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueTickableObject(UMounteaDialogueTickableObject&&); \
	UMounteaDialogueTickableObject(const UMounteaDialogueTickableObject&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueTickableObject); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueTickableObject); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueTickableObject) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueTickableObject();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueTickableObject(); \
	friend struct Z_Construct_UClass_UMounteaDialogueTickableObject_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueTickableObject, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueTickableObject)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueTickableObject() {} \
public: \
	typedef UMounteaDialogueTickableObject UClassType; \
	typedef IMounteaDialogueTickableObject ThisClass; \
	static void Execute_RegisterTick(UObject* O, TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable); \
	static void Execute_TickMounteaEvent(UObject* O, UObject* SelfRef, UObject* ParentTick, float DeltaTime); \
	static void Execute_UnregisterTick(UObject* O, TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_12_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueTickableObject>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
