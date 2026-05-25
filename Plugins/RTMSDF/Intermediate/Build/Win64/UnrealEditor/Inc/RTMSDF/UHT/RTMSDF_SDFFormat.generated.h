// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generation/Common/RTMSDF_SDFFormat.h"
#include "Templates/IsUEnumClass.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTMSDF_RTMSDF_SDFFormat_generated_h
#error "RTMSDF_SDFFormat.generated.h already included, missing '#pragma once' in RTMSDF_SDFFormat.h"
#endif
#define RTMSDF_RTMSDF_SDFFormat_generated_h

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Common_RTMSDF_SDFFormat_h


#define FOREACH_ENUM_ERTMSDF_SDFFORMAT(op) \
	op(ERTMSDF_SDFFormat::SingleChannel) \
	op(ERTMSDF_SDFFormat::SingleChannelPseudo) \
	op(ERTMSDF_SDFFormat::SeparateChannels) \
	op(ERTMSDF_SDFFormat::Multichannel) \
	op(ERTMSDF_SDFFormat::MultichannelPlusAlpha) \
	op(ERTMSDF_SDFFormat::MAX) 

enum class ERTMSDF_SDFFormat : uint8;
template<> struct TIsUEnumClass<ERTMSDF_SDFFormat> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_SDFFormat>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
