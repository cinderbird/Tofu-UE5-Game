// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generation/SVG/RTM_MSDFEnums.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTMSDF_RTM_MSDFEnums_generated_h
#error "RTM_MSDFEnums.generated.h already included, missing '#pragma once' in RTM_MSDFEnums.h"
#endif
#define RTMSDF_RTM_MSDFEnums_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_SVG_RTM_MSDFEnums_h


#define FOREACH_ENUM_ERTMSDF_MSDFCOLORINGMODE(op) \
	op(ERTMSDF_MSDFColoringMode::None) \
	op(ERTMSDF_MSDFColoringMode::Simple) \
	op(ERTMSDF_MSDFColoringMode::InkTrap) \
	op(ERTMSDF_MSDFColoringMode::Distance) 

enum class ERTMSDF_MSDFColoringMode : uint8;
template<> struct TIsUEnumClass<ERTMSDF_MSDFColoringMode> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_MSDFColoringMode>();

#define FOREACH_ENUM_ERTMSDF_MSDFERRORCORRECTIONMODE(op) \
	op(ERTMSDF_MSDFErrorCorrectionMode::None) \
	op(ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFast) \
	op(ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyBalanced) \
	op(ERTMSDF_MSDFErrorCorrectionMode::EdgeOnlyFull) \
	op(ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFast) \
	op(ERTMSDF_MSDFErrorCorrectionMode::EdgePriorityFull) \
	op(ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFast) \
	op(ERTMSDF_MSDFErrorCorrectionMode::IndiscriminateFull) 

enum class ERTMSDF_MSDFErrorCorrectionMode : uint8;
template<> struct TIsUEnumClass<ERTMSDF_MSDFErrorCorrectionMode> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_MSDFErrorCorrectionMode>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
