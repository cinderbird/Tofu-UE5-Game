// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generation/Common/RTMSDF_CommonGenerationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTMSDF_RTMSDF_CommonGenerationSettings_generated_h
#error "RTMSDF_CommonGenerationSettings.generated.h already included, missing '#pragma once' in RTMSDF_CommonGenerationSettings.h"
#endif
#define RTMSDF_RTMSDF_CommonGenerationSettings_generated_h

#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h_23_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings_Statics; \
	RTMSDF_API static class UScriptStruct* StaticStruct();


template<> RTMSDF_API UScriptStruct* StaticStruct<struct FRTMSDF_CommonGenerationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_CommonGenerationSettings_h


#define FOREACH_ENUM_ERTMSDFDISTANCEMODE(op) \
	op(ERTMSDFDistanceMode::Normalized) \
	op(ERTMSDFDistanceMode::Absolute) \
	op(ERTMSDFDistanceMode::Pixels) 

enum class ERTMSDFDistanceMode : uint8;
template<> struct TIsUEnumClass<ERTMSDFDistanceMode> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDFDistanceMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
