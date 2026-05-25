// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "EditorUtility/URTMSDF_EditorUtilityLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UEditorUtilityWidget;
class UObject;
#ifdef RTMSDFEDITOR_URTMSDF_EditorUtilityLibrary_generated_h
#error "URTMSDF_EditorUtilityLibrary.generated.h already included, missing '#pragma once' in URTMSDF_EditorUtilityLibrary.h"
#endif
#define RTMSDFEDITOR_URTMSDF_EditorUtilityLibrary_generated_h

#if WITH_EDITOR
#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	DECLARE_FUNCTION(execSetUtilityWidgetWindowSize); \
	DECLARE_FUNCTION(execFindBlueprintClasses);
#else // WITH_EDITOR
#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD
#endif // WITH_EDITOR


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUURTMSDF_EditorUtilityLibrary(); \
	friend struct Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics; \
public: \
	DECLARE_CLASS(UURTMSDF_EditorUtilityLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTMSDFEditor"), NO_API) \
	DECLARE_SERIALIZER(UURTMSDF_EditorUtilityLibrary)


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UURTMSDF_EditorUtilityLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UURTMSDF_EditorUtilityLibrary(UURTMSDF_EditorUtilityLibrary&&); \
	UURTMSDF_EditorUtilityLibrary(const UURTMSDF_EditorUtilityLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UURTMSDF_EditorUtilityLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UURTMSDF_EditorUtilityLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UURTMSDF_EditorUtilityLibrary) \
	NO_API virtual ~UURTMSDF_EditorUtilityLibrary();


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_9_PROLOG
#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_RPC_WRAPPERS_NO_PURE_DECLS_EOD \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTMSDFEDITOR_API UClass* StaticClass<class UURTMSDF_EditorUtilityLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
