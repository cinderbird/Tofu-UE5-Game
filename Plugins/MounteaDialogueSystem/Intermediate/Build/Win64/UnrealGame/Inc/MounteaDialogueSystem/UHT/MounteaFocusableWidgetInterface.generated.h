// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UMG/MounteaFocusableWidgetInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
enum class EDialogueOptionState : uint8;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaFocusableWidgetInterface_generated_h
#error "MounteaFocusableWidgetInterface.generated.h already included, missing '#pragma once' in MounteaFocusableWidgetInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaFocusableWidgetInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_18_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnMounteaFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMounteaFocusChanged, UUserWidget* Widget, bool IsFocused);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_19_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnMounteaFocusClearRequested_DelegateWrapper(const FMulticastScriptDelegate& OnMounteaFocusClearRequested, const UUserWidget* Widget);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execSetFocusState); \
	DECLARE_FUNCTION(execGetFocusState);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaFocusableWidgetInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaFocusableWidgetInterface(UMounteaFocusableWidgetInterface&&); \
	UMounteaFocusableWidgetInterface(const UMounteaFocusableWidgetInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaFocusableWidgetInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaFocusableWidgetInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaFocusableWidgetInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaFocusableWidgetInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaFocusableWidgetInterface(); \
	friend struct Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaFocusableWidgetInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaFocusableWidgetInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaFocusableWidgetInterface() {} \
public: \
	typedef UMounteaFocusableWidgetInterface UClassType; \
	typedef IMounteaFocusableWidgetInterface ThisClass; \
	static EDialogueOptionState Execute_GetFocusState(const UObject* O); \
	static void Execute_SetFocusState(UObject* O, bool IsSelected); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_21_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_32_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_24_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaFocusableWidgetInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h


#define FOREACH_ENUM_EDIALOGUEOPTIONSTATE(op) \
	op(EDialogueOptionState::EDOS_Focused) \
	op(EDialogueOptionState::EDOS_Unfocused) \
	op(EDialogueOptionState::Default) 

enum class EDialogueOptionState : uint8;
template<> struct TIsUEnumClass<EDialogueOptionState> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueOptionState>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
