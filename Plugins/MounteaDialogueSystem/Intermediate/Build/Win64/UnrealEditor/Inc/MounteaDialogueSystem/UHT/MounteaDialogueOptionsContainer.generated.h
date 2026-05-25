// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "WBP/MounteaDialogueOptionsContainer.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UUserWidget;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionsContainer_generated_h
#error "MounteaDialogueOptionsContainer.generated.h already included, missing '#pragma once' in MounteaDialogueOptionsContainer.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueOptionsContainer_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execResetFocus); \
	DECLARE_FUNCTION(execClearChildOptionFocus);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueOptionsContainer(); \
	friend struct Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueOptionsContainer, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueOptionsContainer) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueOptionsContainer*>(this); }


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueOptionsContainer(UMounteaDialogueOptionsContainer&&); \
	UMounteaDialogueOptionsContainer(const UMounteaDialogueOptionsContainer&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueOptionsContainer); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueOptionsContainer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMounteaDialogueOptionsContainer) \
	NO_API virtual ~UMounteaDialogueOptionsContainer();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_17_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueOptionsContainer>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
