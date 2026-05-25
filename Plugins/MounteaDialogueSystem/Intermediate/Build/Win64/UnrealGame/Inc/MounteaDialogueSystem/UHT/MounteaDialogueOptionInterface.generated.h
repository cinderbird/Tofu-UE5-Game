// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Interfaces/UMG/MounteaDialogueOptionInterface.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
struct FDialogueOptionData;
struct FGuid;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionInterface_generated_h
#error "MounteaDialogueOptionInterface.generated.h already included, missing '#pragma once' in MounteaDialogueOptionInterface.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionInterface_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_22_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FDialogueOptionData_Statics; \
	static class UScriptStruct* StaticStruct();


template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<struct FDialogueOptionData>();

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_87_DELEGATE \
MOUNTEADIALOGUESYSTEM_API void FOnDialogueOptionSelected_DelegateWrapper(const FMulticastScriptDelegate& OnDialogueOptionSelected, FGuid const& SelectedOption, UUserWidget* CallingWidget);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execProcessOptionSelected); \
	DECLARE_FUNCTION(execInitializeDialogueOption); \
	DECLARE_FUNCTION(execResetDialogueOptionData); \
	DECLARE_FUNCTION(execSetNewDialogueOptionData); \
	DECLARE_FUNCTION(execGetDialogueOptionData);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	MOUNTEADIALOGUESYSTEM_API UMounteaDialogueOptionInterface(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueOptionInterface(UMounteaDialogueOptionInterface&&); \
	UMounteaDialogueOptionInterface(const UMounteaDialogueOptionInterface&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(MOUNTEADIALOGUESYSTEM_API, UMounteaDialogueOptionInterface); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueOptionInterface); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueOptionInterface) \
	MOUNTEADIALOGUESYSTEM_API virtual ~UMounteaDialogueOptionInterface();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_GENERATED_UINTERFACE_BODY() \
private: \
	static void StaticRegisterNativesUMounteaDialogueOptionInterface(); \
	friend struct Z_Construct_UClass_UMounteaDialogueOptionInterface_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueOptionInterface, UInterface, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Interface), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), MOUNTEADIALOGUESYSTEM_API) \
	DECLARE_SERIALIZER(UMounteaDialogueOptionInterface)


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_GENERATED_BODY \
	PRAGMA_DISABLE_DEPRECATION_WARNINGS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_GENERATED_UINTERFACE_BODY() \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_ENHANCED_CONSTRUCTORS \
private: \
	PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_INCLASS_IINTERFACE_NO_PURE_DECLS \
protected: \
	virtual ~IMounteaDialogueOptionInterface() {} \
public: \
	typedef UMounteaDialogueOptionInterface UClassType; \
	typedef IMounteaDialogueOptionInterface ThisClass; \
	static FDialogueOptionData Execute_GetDialogueOptionData(const UObject* O); \
	static void Execute_InitializeDialogueOption(UObject* O); \
	static void Execute_ProcessOptionSelected(UObject* O); \
	static void Execute_ResetDialogueOptionData(UObject* O); \
	static void Execute_SetNewDialogueOptionData(UObject* O, FDialogueOptionData const& NewData); \
	virtual UObject* _getUObject() const { return nullptr; }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_90_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_101_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h_93_INCLASS_IINTERFACE_NO_PURE_DECLS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueOptionInterface>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueOptionInterface_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
