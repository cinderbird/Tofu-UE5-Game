// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HUD/MounteaDialogueWBPInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class IMounteaDialogueManagerInterface;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueWBPInterface_generated_h
#error "MounteaDialogueWBPInterface.generated.h already included, missing '#pragma once' in MounteaDialogueWBPInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueWBPInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueWBPInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueWBPInterface(UMounteaDialogueWBPInterface&&); \
	UMounteaDialogueWBPInterface(const UMounteaDialogueWBPInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueWBPInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueWBPInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueWBPInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueWBPInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueWBPInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueWBPInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueWBPInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueWBPInterface() {} \
public: \
	typedef UMounteaDialogueWBPInterface UClassType; \
	typedef IMounteaDialogueWBPInterface ThisClass; \
	static void Execute_OnOptionSelected(UObject* O, FGuid const& SelectionGUID); \
	static void Execute_RefreshDialogueWidget(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& Command); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_12_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_15_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueWBPInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
