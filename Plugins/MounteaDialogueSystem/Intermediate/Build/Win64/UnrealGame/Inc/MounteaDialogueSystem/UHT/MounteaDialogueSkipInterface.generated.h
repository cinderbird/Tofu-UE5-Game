// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UMG/MounteaDialogueSkipInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueSkipInterface_generated_h
#error "MounteaDialogueSkipInterface.generated.h already included, missing '#pragma once' in MounteaDialogueSkipInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueSkipInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueSkipInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueSkipInterface(UMounteaDialogueSkipInterface&&); \
	UMounteaDialogueSkipInterface(const UMounteaDialogueSkipInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueSkipInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueSkipInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueSkipInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueSkipInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueSkipInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueSkipInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueSkipInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueSkipInterface() {} \
public: \
	typedef UMounteaDialogueSkipInterface UClassType; \
	typedef IMounteaDialogueSkipInterface ThisClass; \
	static void Execute_RequestHideWidget(UObject* O); \
	static void Execute_RequestShowWidget(UObject* O, FVector2D const& FadeProgressDuration); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_10_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_13_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueSkipInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
