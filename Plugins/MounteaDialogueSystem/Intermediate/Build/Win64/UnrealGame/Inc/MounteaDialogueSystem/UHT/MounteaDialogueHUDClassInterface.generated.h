// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/HUD/MounteaDialogueHUDClassInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FAnchors;
struct FMargin;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueHUDClassInterface_generated_h
#error "MounteaDialogueHUDClassInterface.generated.h already included, missing '#pragma once' in MounteaDialogueHUDClassInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueHUDClassInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execRemoveChildWidgetFromViewport); \
	DECLARE_FUNCTION(execAddChildWidgetToViewport); \
	DECLARE_FUNCTION(execGetViewportWidget); \
	DECLARE_FUNCTION(execInitializeViewportWidget); \
	DECLARE_FUNCTION(execGetViewportBaseClass);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueHUDClassInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueHUDClassInterface(UMounteaDialogueHUDClassInterface&&); \
	UMounteaDialogueHUDClassInterface(const UMounteaDialogueHUDClassInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueHUDClassInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueHUDClassInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueHUDClassInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueHUDClassInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueHUDClassInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueHUDClassInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueHUDClassInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueHUDClassInterface() {} \
public: \
	typedef UMounteaDialogueHUDClassInterface UClassType; \
	typedef IMounteaDialogueHUDClassInterface ThisClass; \
	static void Execute_AddChildWidgetToViewport(UObject* O, UUserWidget* ChildWidget, const int32 ZOrder, const FAnchors WidgetAnchors, FMargin const& WidgetMargin); \
	static TSubclassOf<UUserWidget> Execute_GetViewportBaseClass(const UObject* O); \
	static UUserWidget* Execute_GetViewportWidget(const UObject* O); \
	static void Execute_InitializeViewportWidget(UObject* O); \
	static void Execute_RemoveChildWidgetFromViewport(UObject* O, UUserWidget* ChildWidget); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_15_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_26_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_18_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueHUDClassInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
