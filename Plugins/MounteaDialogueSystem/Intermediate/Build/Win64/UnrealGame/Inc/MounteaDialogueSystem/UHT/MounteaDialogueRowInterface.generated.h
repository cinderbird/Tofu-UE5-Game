// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UMG/MounteaDialogueRowInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FWidgetDialogueRow;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueRowInterface_generated_h
#error "MounteaDialogueRowInterface.generated.h already included, missing '#pragma once' in MounteaDialogueRowInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueRowInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_15_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnTypeWriterEffectChanged_DelegateWrapper(const FMulticastScriptDelegate& OnTypeWriterEffectChanged, bool bEnabled);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_25_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FWidgetDialogueRow_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FWidgetDialogueRow>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execEnableTypeWriterEffect); \
	DECLARE_FUNCTION(execStartTypeWriterEffect); \
	DECLARE_FUNCTION(execStopTypeWriterEffect); \
	DECLARE_FUNCTION(execInitializeWidgetDialogueRow); \
	DECLARE_FUNCTION(execResetWidgetDialogueRow); \
	DECLARE_FUNCTION(execSetNewWidgetDialogueRowData); \
	DECLARE_FUNCTION(execGetDialogueWidgetRowData);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueRowInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueRowInterface(UMounteaDialogueRowInterface&&); \
	UMounteaDialogueRowInterface(const UMounteaDialogueRowInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueRowInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueRowInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueRowInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueRowInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueRowInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueRowInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueRowInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueRowInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueRowInterface() {} \
public: \
	typedef UMounteaDialogueRowInterface UClassType; \
	typedef IMounteaDialogueRowInterface ThisClass; \
	static void Execute_EnableTypeWriterEffect(UObject* O, bool bEnable); \
	static FWidgetDialogueRow Execute_GetDialogueWidgetRowData(const UObject* O); \
	static void Execute_InitializeWidgetDialogueRow(UObject* O); \
	static void Execute_ResetWidgetDialogueRow(UObject* O); \
	static void Execute_SetNewWidgetDialogueRowData(UObject* O, FWidgetDialogueRow const& NewData); \
	static void Execute_StartTypeWriterEffect(UObject* O, FText const& SourceText, float Duration); \
	static void Execute_StopTypeWriterEffect(UObject* O); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_105_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_116_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h_108_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueRowInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueRowInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
