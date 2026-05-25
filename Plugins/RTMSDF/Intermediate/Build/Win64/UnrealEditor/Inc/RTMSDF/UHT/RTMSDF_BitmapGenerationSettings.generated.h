// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef RTMSDF_RTMSDF_BitmapGenerationSettings_generated_h
#error "RTMSDF_BitmapGenerationSettings.generated.h already included, missing '#pragma once' in RTMSDF_BitmapGenerationSettings.h"
#endif
#define RTMSDF_RTMSDF_BitmapGenerationSettings_generated_h

#define FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_46_GENERATED_BODY \
	friend struct Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics; \
	static class UScriptStruct* StaticStruct(); \
	typedef FRTMSDF_CommonGenerationSettings Super;


template<> RTMSDF_API UScriptStruct* StaticStruct<struct FRTMSDF_BitmapGenerationSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h


#define FOREACH_ENUM_ERTMSDF_BITMAPCHANNELBEHAVIOR(op) \
	op(ERTMSDF_BitmapChannelBehavior::SDF) \
	op(ERTMSDF_BitmapChannelBehavior::SourceData) \
	op(ERTMSDF_BitmapChannelBehavior::Discard) 

enum class ERTMSDF_BitmapChannelBehavior : uint8;
template<> struct TIsUEnumClass<ERTMSDF_BitmapChannelBehavior> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_BitmapChannelBehavior>();

#define FOREACH_ENUM_ERTMSDF_RGBAMODE(op) \
	op(ERTMSDF_RGBAMode::SeparateChannels) \
	op(ERTMSDF_RGBAMode::PreserveRGB) 

enum class ERTMSDF_RGBAMode : uint8;
template<> struct TIsUEnumClass<ERTMSDF_RGBAMode> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_RGBAMode>();

#define FOREACH_ENUM_ERTMSDF_CHANNELS(op) \
	op(ERTMSDF_Channels::None) \
	op(ERTMSDF_Channels::Red) \
	op(ERTMSDF_Channels::Green) \
	op(ERTMSDF_Channels::Blue) \
	op(ERTMSDF_Channels::Alpha) \
	op(ERTMSDF_Channels::RGB) \
	op(ERTMSDF_Channels::All) 

enum class ERTMSDF_Channels : uint8;
template<> struct TIsUEnumClass<ERTMSDF_Channels> { enum { Value = true }; };
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_Channels>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
