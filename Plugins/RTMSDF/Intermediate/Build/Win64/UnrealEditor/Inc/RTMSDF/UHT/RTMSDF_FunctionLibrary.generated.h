// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Utilities/RTMSDF_FunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UTexture2D;
enum class ERTMSDF_SDFFormat : uint8;
#ifdef RTMSDF_RTMSDF_FunctionLibrary_generated_h
#error "RTMSDF_FunctionLibrary.generated.h already included, missing '#pragma once' in RTMSDF_FunctionLibrary.h"
#endif
#define RTMSDF_RTMSDF_FunctionLibrary_generated_h

#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execGetSDFScalingFactorFromSoftTexture); \
	DECLARE_FUNCTION(execIsSoftTextureScaledToFitDistance); \
	DECLARE_FUNCTION(execIsInvertedSDFSoftTexture); \
	DECLARE_FUNCTION(execGetSDFUVRangeFromSoftTexure); \
	DECLARE_FUNCTION(execIsMSDFSoftTexture); \
	DECLARE_FUNCTION(execIsSingleChannelSDFSoftTexture); \
	DECLARE_FUNCTION(execGetSourceDimensionsFromSoftTexture); \
	DECLARE_FUNCTION(execGetSDFFormatFromSoftTexture); \
	DECLARE_FUNCTION(execIsSDFSoftTexture); \
	DECLARE_FUNCTION(execGetSDFScalingFactor); \
	DECLARE_FUNCTION(execIsScaledToFitDistance); \
	DECLARE_FUNCTION(execIsInvertedSDF); \
	DECLARE_FUNCTION(execGetSDFUVRange); \
	DECLARE_FUNCTION(execIsMSDFTexture); \
	DECLARE_FUNCTION(execIsSingleChannelSDFTexture); \
	DECLARE_FUNCTION(execGetSourceDimensions); \
	DECLARE_FUNCTION(execGetSDFFormat); \
	DECLARE_FUNCTION(execIsSDFTexture); \
	DECLARE_FUNCTION(execUVRangeToScalingFactor);


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesURTMSDF_FunctionLibrary(); \
	friend struct Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(URTMSDF_FunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/RTMSDF"), NO_API) \
	DECLARE_SERIALIZER(URTMSDF_FunctionLibrary)


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API URTMSDF_FunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	URTMSDF_FunctionLibrary(URTMSDF_FunctionLibrary&&); \
	URTMSDF_FunctionLibrary(const URTMSDF_FunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, URTMSDF_FunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(URTMSDF_FunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(URTMSDF_FunctionLibrary) \
	NO_API virtual ~URTMSDF_FunctionLibrary();


#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_10_PROLOG
#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_13_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> RTMSDF_API UClass* StaticClass<class URTMSDF_FunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
