// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_BitmapGenerationSettings() {}

// Begin Cross Module References
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings();
RTMSDF_API UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Enum ERTMSDF_BitmapChannelBehavior
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior;
static UEnum* ERTMSDF_BitmapChannelBehavior_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_BitmapChannelBehavior"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_BitmapChannelBehavior>()
{
	return ERTMSDF_BitmapChannelBehavior_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "Discard.Comment", "// Ignores the data in this channel\n" },
		{ "Discard.Name", "ERTMSDF_BitmapChannelBehavior::Discard" },
		{ "Discard.ToolTip", "Ignores the data in this channel" },
		{ "DisplayName", "Bitmap Per Channel Behavior [RTMSDF]" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
		{ "SDF.Comment", "// Treat this channel as an SDF\n" },
		{ "SDF.Name", "ERTMSDF_BitmapChannelBehavior::SDF" },
		{ "SDF.ToolTip", "Treat this channel as an SDF" },
		{ "SourceData.Comment", "// Preserve the original source data\n" },
		{ "SourceData.Name", "ERTMSDF_BitmapChannelBehavior::SourceData" },
		{ "SourceData.ToolTip", "Preserve the original source data" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_BitmapChannelBehavior::SDF", (int64)ERTMSDF_BitmapChannelBehavior::SDF },
		{ "ERTMSDF_BitmapChannelBehavior::SourceData", (int64)ERTMSDF_BitmapChannelBehavior::SourceData },
		{ "ERTMSDF_BitmapChannelBehavior::Discard", (int64)ERTMSDF_BitmapChannelBehavior::Discard },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_BitmapChannelBehavior",
	"ERTMSDF_BitmapChannelBehavior",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior.InnerSingleton;
}
// End Enum ERTMSDF_BitmapChannelBehavior

// Begin Enum ERTMSDF_RGBAMode
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_RGBAMode;
static UEnum* ERTMSDF_RGBAMode_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_RGBAMode"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_RGBAMode>()
{
	return ERTMSDF_RGBAMode_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
		{ "PreserveRGB.Comment", "/* Preserve the RGB channel and use alpha only to create a distance field. Output will be the same size as input */" },
		{ "PreserveRGB.Name", "ERTMSDF_RGBAMode::PreserveRGB" },
		{ "PreserveRGB.ToolTip", "Preserve the RGB channel and use alpha only to create a distance field. Output will be the same size as input" },
		{ "SeparateChannels.Comment", "/* Treat each channel separately - either as an SDF or discard */" },
		{ "SeparateChannels.Name", "ERTMSDF_RGBAMode::SeparateChannels" },
		{ "SeparateChannels.ToolTip", "Treat each channel separately - either as an SDF or discard" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_RGBAMode::SeparateChannels", (int64)ERTMSDF_RGBAMode::SeparateChannels },
		{ "ERTMSDF_RGBAMode::PreserveRGB", (int64)ERTMSDF_RGBAMode::PreserveRGB },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_RGBAMode",
	"ERTMSDF_RGBAMode",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_RGBAMode.InnerSingleton;
}
// End Enum ERTMSDF_RGBAMode

// Begin Enum ERTMSDF_Channels
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ERTMSDF_Channels;
static UEnum* ERTMSDF_Channels_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_Channels.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ERTMSDF_Channels.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("ERTMSDF_Channels"));
	}
	return Z_Registration_Info_UEnum_ERTMSDF_Channels.OuterSingleton;
}
template<> RTMSDF_API UEnum* StaticEnum<ERTMSDF_Channels>()
{
	return ERTMSDF_Channels_StaticEnum();
}
struct Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "All.Hidden", "" },
		{ "All.Name", "ERTMSDF_Channels::All" },
		{ "Alpha.Name", "ERTMSDF_Channels::Alpha" },
		{ "Bitflags", "" },
		{ "Blue.Name", "ERTMSDF_Channels::Blue" },
		{ "Green.Name", "ERTMSDF_Channels::Green" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
		{ "None.Hidden", "" },
		{ "None.Name", "ERTMSDF_Channels::None" },
		{ "Red.Name", "ERTMSDF_Channels::Red" },
		{ "RGB.Hidden", "" },
		{ "RGB.Name", "ERTMSDF_Channels::RGB" },
		{ "UseEnumValuesAsMaskValuesInEditor", "true" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ERTMSDF_Channels::None", (int64)ERTMSDF_Channels::None },
		{ "ERTMSDF_Channels::Red", (int64)ERTMSDF_Channels::Red },
		{ "ERTMSDF_Channels::Green", (int64)ERTMSDF_Channels::Green },
		{ "ERTMSDF_Channels::Blue", (int64)ERTMSDF_Channels::Blue },
		{ "ERTMSDF_Channels::Alpha", (int64)ERTMSDF_Channels::Alpha },
		{ "ERTMSDF_Channels::RGB", (int64)ERTMSDF_Channels::RGB },
		{ "ERTMSDF_Channels::All", (int64)ERTMSDF_Channels::All },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_RTMSDF,
	nullptr,
	"ERTMSDF_Channels",
	"ERTMSDF_Channels",
	Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::Enum_MetaDataParams), Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels()
{
	if (!Z_Registration_Info_UEnum_ERTMSDF_Channels.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ERTMSDF_Channels.InnerSingleton, Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ERTMSDF_Channels.InnerSingleton;
}
// End Enum ERTMSDF_Channels

// Begin ScriptStruct FRTMSDF_BitmapGenerationSettings
static_assert(std::is_polymorphic<FRTMSDF_BitmapGenerationSettings>() == std::is_polymorphic<FRTMSDF_CommonGenerationSettings>(), "USTRUCT FRTMSDF_BitmapGenerationSettings cannot be polymorphic unless super FRTMSDF_CommonGenerationSettings is polymorphic");
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings;
class UScriptStruct* FRTMSDF_BitmapGenerationSettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings, (UObject*)Z_Construct_UPackage__Script_RTMSDF(), TEXT("RTMSDF_BitmapGenerationSettings"));
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.OuterSingleton;
}
template<> RTMSDF_API UScriptStruct* StaticStruct<FRTMSDF_BitmapGenerationSettings>()
{
	return FRTMSDF_BitmapGenerationSettings::StaticStruct();
}
struct Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "DisplayName", "Bitmap to SDF Import Settings [RTMSDF]" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSourceChannels_MetaData[] = {
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_VersionNumber_MetaData[] = {
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Format_MetaData[] = {
		{ "Category", "ImportNew" },
		{ "EditCondition", "NumSourceChannels > 1" },
		{ "HideEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
		{ "ValidEnumValues", "SingleChannel, SeparateChannels" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RedChannel_MetaData[] = {
		{ "Category", "ImportNew" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the red channel from the source data\n" },
#endif
		{ "EditCondition", "NumSourceChannels > 1 && Format == ERTMSDF_SDFFormat::SeparateChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle the red channel from the source data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GreenChannel_MetaData[] = {
		{ "Category", "ImportNew" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the green channel from the source data\n" },
#endif
		{ "EditCondition", "NumSourceChannels > 1 && Format == ERTMSDF_SDFFormat::SeparateChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle the green channel from the source data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlueChannel_MetaData[] = {
		{ "Category", "ImportNew" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the blue channel from the source data\n" },
#endif
		{ "EditCondition", "NumSourceChannels > 1 && Format == ERTMSDF_SDFFormat::SeparateChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle the blue channel from the source data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AlphaChannel_MetaData[] = {
		{ "Category", "ImportNew" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// How to handle the alpha channel from the source data\n" },
#endif
		{ "EditCondition", "NumSourceChannels > 3 && Format == ERTMSDF_SDFFormat::SeparateChannels" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to handle the alpha channel from the source data" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFChannel_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Which channel from the source data should be used to generate the SDF\n\x09 * Unused channels will be discarded as this is a single-channel SDF */" },
#endif
		{ "DisplayName", "Source Channel" },
		{ "EditCondition", "NumSourceChannels > 1 && Format == ERTMSDF_SDFFormat::SingleChannel" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which channel from the source data should be used to generate the SDF\n       * Unused channels will be discarded as this is a single-channel SDF" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_TextureSize_MetaData[] = {
		{ "Category", "Import" },
		{ "ClampMin", "8" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Output size of generated SDF texture - for non-square textures this will be the shortest edge */" },
#endif
		{ "EditCondition", "true" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Output size of generated SDF texture - for non-square textures this will be the shortest edge" },
#endif
		{ "UIMin", "8" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NumSDFChannels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ Deprecated properties remain here as private for fixup\n" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RGBAMode_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* How to treat the various channels of an RGBA texture */" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "How to treat the various channels of an RGBA texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFChannels_MetaData[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/* Which channels should be used to generate SDFs - unused channels will be discarded */" },
#endif
		{ "ModuleRelativePath", "Public/Generation/Bitmap/RTMSDF_BitmapGenerationSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Which channels should be used to generate SDFs - unused channels will be discarded" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSourceChannels;
	static const UECodeGen_Private::FIntPropertyParams NewProp_VersionNumber;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Format_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Format;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RedChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RedChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_GreenChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_GreenChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_BlueChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_BlueChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AlphaChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AlphaChannel;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SDFChannel_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_SDFChannel;
	static const UECodeGen_Private::FIntPropertyParams NewProp_TextureSize;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NumSDFChannels;
	static const UECodeGen_Private::FBytePropertyParams NewProp_RGBAMode_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_RGBAMode;
	static const UECodeGen_Private::FBytePropertyParams NewProp_SDFChannels;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FRTMSDF_BitmapGenerationSettings>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_NumSourceChannels = { "NumSourceChannels", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, NumSourceChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSourceChannels_MetaData), NewProp_NumSourceChannels_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_VersionNumber = { "VersionNumber", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, VersionNumber), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_VersionNumber_MetaData), NewProp_VersionNumber_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_Format_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_Format = { "Format", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, Format), Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Format_MetaData), NewProp_Format_MetaData) }; // 1283093119
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RedChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RedChannel = { "RedChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, RedChannel), Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RedChannel_MetaData), NewProp_RedChannel_MetaData) }; // 4270528715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_GreenChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_GreenChannel = { "GreenChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, GreenChannel), Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GreenChannel_MetaData), NewProp_GreenChannel_MetaData) }; // 4270528715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_BlueChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_BlueChannel = { "BlueChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, BlueChannel), Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlueChannel_MetaData), NewProp_BlueChannel_MetaData) }; // 4270528715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_AlphaChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_AlphaChannel = { "AlphaChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, AlphaChannel), Z_Construct_UEnum_RTMSDF_ERTMSDF_BitmapChannelBehavior, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AlphaChannel_MetaData), NewProp_AlphaChannel_MetaData) }; // 4270528715
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannel_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannel = { "SDFChannel", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, SDFChannel), Z_Construct_UEnum_RTMSDF_ERTMSDF_Channels, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFChannel_MetaData), NewProp_SDFChannel_MetaData) }; // 874763129
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_TextureSize = { "TextureSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, TextureSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_TextureSize_MetaData), NewProp_TextureSize_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_NumSDFChannels = { "NumSDFChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, NumSDFChannels), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NumSDFChannels_MetaData), NewProp_NumSDFChannels_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RGBAMode_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RGBAMode = { "RGBAMode", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, RGBAMode), Z_Construct_UEnum_RTMSDF_ERTMSDF_RGBAMode, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RGBAMode_MetaData), NewProp_RGBAMode_MetaData) }; // 3728960089
const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannels = { "SDFChannels", nullptr, (EPropertyFlags)0x0040000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FRTMSDF_BitmapGenerationSettings, SDFChannels), nullptr, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFChannels_MetaData), NewProp_SDFChannels_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_NumSourceChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_VersionNumber,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_Format_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_Format,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RedChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RedChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_GreenChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_GreenChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_BlueChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_BlueChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_AlphaChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_AlphaChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannel_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_TextureSize,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_NumSDFChannels,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RGBAMode_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_RGBAMode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewProp_SDFChannels,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
	Z_Construct_UScriptStruct_FRTMSDF_CommonGenerationSettings,
	&NewStructOps,
	"RTMSDF_BitmapGenerationSettings",
	Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::PropPointers),
	sizeof(FRTMSDF_BitmapGenerationSettings),
	alignof(FRTMSDF_BitmapGenerationSettings),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000201),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings()
{
	if (!Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.InnerSingleton, Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings.InnerSingleton;
}
// End ScriptStruct FRTMSDF_BitmapGenerationSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ ERTMSDF_BitmapChannelBehavior_StaticEnum, TEXT("ERTMSDF_BitmapChannelBehavior"), &Z_Registration_Info_UEnum_ERTMSDF_BitmapChannelBehavior, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4270528715U) },
		{ ERTMSDF_RGBAMode_StaticEnum, TEXT("ERTMSDF_RGBAMode"), &Z_Registration_Info_UEnum_ERTMSDF_RGBAMode, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3728960089U) },
		{ ERTMSDF_Channels_StaticEnum, TEXT("ERTMSDF_Channels"), &Z_Registration_Info_UEnum_ERTMSDF_Channels, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 874763129U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FRTMSDF_BitmapGenerationSettings::StaticStruct, Z_Construct_UScriptStruct_FRTMSDF_BitmapGenerationSettings_Statics::NewStructOps, TEXT("RTMSDF_BitmapGenerationSettings"), &Z_Registration_Info_UScriptStruct_RTMSDF_BitmapGenerationSettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FRTMSDF_BitmapGenerationSettings), 1358992823U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_1929531679(TEXT("/Script/RTMSDF"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Generation_Bitmap_RTMSDF_BitmapGenerationSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
