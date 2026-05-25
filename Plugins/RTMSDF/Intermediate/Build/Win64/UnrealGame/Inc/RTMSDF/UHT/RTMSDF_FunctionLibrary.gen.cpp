// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDF/Public/Utilities/RTMSDF_FunctionLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_FunctionLibrary() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
ENGINE_API UClass* Z_Construct_UClass_UTexture2D_NoRegister();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_FunctionLibrary();
RTMSDF_API UClass* Z_Construct_UClass_URTMSDF_FunctionLibrary_NoRegister();
RTMSDF_API UEnum* Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat();
UPackage* Z_Construct_UPackage__Script_RTMSDF();
// End Cross Module References

// Begin Class URTMSDF_FunctionLibrary Function GetSDFFormat
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFFormat_Parms
	{
		const UTexture2D* texture;
		ERTMSDF_SDFFormat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the format of the signed distance field in this texture (Invalid if this is not an SDF)\n" },
#endif
		{ "DisplayName", "Get SDF Format" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the format of the signed distance field in this texture (Invalid if this is not an SDF)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFFormat_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFFormat_Parms, ReturnValue), Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat, METADATA_PARAMS(0, nullptr) }; // 1283093119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFFormat", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::RTMSDF_FunctionLibrary_eventGetSDFFormat_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::RTMSDF_FunctionLibrary_eventGetSDFFormat_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFFormat)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTMSDF_SDFFormat*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFFormat(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFFormat

// Begin Class URTMSDF_FunctionLibrary Function GetSDFFormatFromSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFFormatFromSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		ERTMSDF_SDFFormat ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the format of the signed distance field in this texture (Invalid if this is not an SDF)\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Get SDF Format (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the format of the signed distance field in this texture (Invalid if this is not an SDF)\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFFormatFromSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFFormatFromSoftTexture_Parms, ReturnValue), Z_Construct_UEnum_RTMSDF_ERTMSDF_SDFFormat, METADATA_PARAMS(0, nullptr) }; // 1283093119
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFFormatFromSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSDFFormatFromSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSDFFormatFromSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFFormatFromSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(ERTMSDF_SDFFormat*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFFormatFromSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFFormatFromSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function GetSDFScalingFactor
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFScalingFactor_Parms
	{
		const UTexture2D* texture;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculates the scaling factor needed to offset the shrinking that occurs during import of a texture\n" },
#endif
		{ "DisplayName", "Get SDF Scaling Factor" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the scaling factor needed to offset the shrinking that occurs during import of a texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFScalingFactor_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFScalingFactor", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::RTMSDF_FunctionLibrary_eventGetSDFScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::RTMSDF_FunctionLibrary_eventGetSDFScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFScalingFactor)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFScalingFactor(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFScalingFactor

// Begin Class URTMSDF_FunctionLibrary Function GetSDFScalingFactorFromSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFScalingFactorFromSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculates the scaling factor needed to offset the shrinking that occurs during import of a texture\n" },
#endif
		{ "DisplayName", "Get SDF Scaling Factor (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the scaling factor needed to offset the shrinking that occurs during import of a texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFScalingFactorFromSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFScalingFactorFromSoftTexture_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFScalingFactorFromSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSDFScalingFactorFromSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSDFScalingFactorFromSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFScalingFactorFromSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFScalingFactorFromSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFScalingFactorFromSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function GetSDFUVRange
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFUVRange_Parms
	{
		const UTexture2D* texture;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the UV Range of the SDF texture (-1 if this is not an SDF)\n// UV range is the range of the distance field, normalized against the shortest edge of the texture\n" },
#endif
		{ "DisplayName", "Get SDF UV Range" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the UV Range of the SDF texture (-1 if this is not an SDF)\nUV range is the range of the distance field, normalized against the shortest edge of the texture" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFUVRange_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFUVRange_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFUVRange", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::RTMSDF_FunctionLibrary_eventGetSDFUVRange_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::RTMSDF_FunctionLibrary_eventGetSDFUVRange_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFUVRange)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFUVRange(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFUVRange

// Begin Class URTMSDF_FunctionLibrary Function GetSDFUVRangeFromSoftTexure
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSDFUVRangeFromSoftTexure_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if this texture has been imported as a signed distance field\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Get SDF UV Range (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this texture has been imported as a signed distance field\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFUVRangeFromSoftTexure_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSDFUVRangeFromSoftTexure_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSDFUVRangeFromSoftTexure", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::RTMSDF_FunctionLibrary_eventGetSDFUVRangeFromSoftTexure_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::RTMSDF_FunctionLibrary_eventGetSDFUVRangeFromSoftTexure_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSDFUVRangeFromSoftTexure)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSDFUVRangeFromSoftTexure(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSDFUVRangeFromSoftTexure

// Begin Class URTMSDF_FunctionLibrary Function GetSourceDimensions
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSourceDimensions_Parms
	{
		const UTexture2D* texture;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the dimensions of the source asset used to generate this SDF texture, in pixels ([-1,-1] if this is not an SDF)\n" },
#endif
		{ "DisplayName", "Get Source Dimensions" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the dimensions of the source asset used to generate this SDF texture, in pixels ([-1,-1] if this is not an SDF)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSourceDimensions_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSourceDimensions_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSourceDimensions", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::RTMSDF_FunctionLibrary_eventGetSourceDimensions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::RTMSDF_FunctionLibrary_eventGetSourceDimensions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSourceDimensions)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSourceDimensions(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSourceDimensions

// Begin Class URTMSDF_FunctionLibrary Function GetSourceDimensionsFromSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventGetSourceDimensionsFromSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		FIntPoint ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the dimensions of the source asset used to generate this SDF texture, in pixels ([-1,-1] if this is not an SDF)\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Get Source Dimensions (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the dimensions of the source asset used to generate this SDF texture, in pixels ([-1,-1] if this is not an SDF)\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSourceDimensionsFromSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventGetSourceDimensionsFromSoftTexture_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "GetSourceDimensionsFromSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSourceDimensionsFromSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::RTMSDF_FunctionLibrary_eventGetSourceDimensionsFromSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execGetSourceDimensionsFromSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FIntPoint*)Z_Param__Result=URTMSDF_FunctionLibrary::GetSourceDimensionsFromSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function GetSourceDimensionsFromSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function IsInvertedSDF
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms
	{
		const UTexture2D* texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture was imported with the Invert Distance setting\n" },
#endif
		{ "DisplayName", "Is Inverted SDF" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture was imported with the Invert Distance setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsInvertedSDF", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::RTMSDF_FunctionLibrary_eventIsInvertedSDF_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsInvertedSDF)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsInvertedSDF(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsInvertedSDF

// Begin Class URTMSDF_FunctionLibrary Function IsInvertedSDFSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture was imported with the Invert Distance setting\n" },
#endif
		{ "DisplayName", "Is Inverted SDF (Soft Texture" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture was imported with the Invert Distance setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsInvertedSDFSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsInvertedSDFSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsInvertedSDFSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsInvertedSDFSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsInvertedSDFSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function IsMSDFSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns the UV Range of the SDF texture (-1 if this is not an SDF)\n// UV range is the range of the distance field, normalized against the shortest edge of the texture\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Is MSDF (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns the UV Range of the SDF texture (-1 if this is not an SDF)\nUV range is the range of the distance field, normalized against the shortest edge of the texture\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsMSDFSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsMSDFSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsMSDFSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsMSDFSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsMSDFSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function IsMSDFTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms
	{
		const UTexture2D* texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture is a multi-channel SDF (MSDF in RGB channels)\n" },
#endif
		{ "DisplayName", "Is MSDF" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture is a multi-channel SDF (MSDF in RGB channels)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsMSDFTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsMSDFTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsMSDFTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsMSDFTexture(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsMSDFTexture

// Begin Class URTMSDF_FunctionLibrary Function IsScaledToFitDistance
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms
	{
		const UTexture2D* texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture was imported with the Scale to Fit Distance setting\n" },
#endif
		{ "DisplayName", "Is Scaled to Fit Distance" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture was imported with the Scale to Fit Distance setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsScaledToFitDistance", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::RTMSDF_FunctionLibrary_eventIsScaledToFitDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsScaledToFitDistance)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsScaledToFitDistance(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsScaledToFitDistance

// Begin Class URTMSDF_FunctionLibrary Function IsSDFSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if this texture has been imported as a signed distance field\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Is SDF (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this texture has been imported as a signed distance field\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsSDFSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsSDFSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsSDFSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsSDFSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsSDFSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function IsSDFTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms
	{
		const UTexture2D* texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if this texture has been imported as a signed distance field\n" },
#endif
		{ "DisplayName", "Is SDF" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if this texture has been imported as a signed distance field" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsSDFTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsSDFTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsSDFTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsSDFTexture(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsSDFTexture

// Begin Class URTMSDF_FunctionLibrary Function IsSingleChannelSDFSoftTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture is a single channel SDF\n// NOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)\n" },
#endif
		{ "DisplayName", "Is single channel SDF (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture is a single channel SDF\nNOTE: At runtime this relies on the Asset Registry Tags, so Textures must be in the asset registry (by default this is true)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsSingleChannelSDFSoftTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::RTMSDF_FunctionLibrary_eventIsSingleChannelSDFSoftTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsSingleChannelSDFSoftTexture)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsSingleChannelSDFSoftTexture(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsSingleChannelSDFSoftTexture

// Begin Class URTMSDF_FunctionLibrary Function IsSingleChannelSDFTexture
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms
	{
		const UTexture2D* texture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture is a single channel SDF\n" },
#endif
		{ "DisplayName", "Is single channel SDF" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture is a single channel SDF" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_texture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_texture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_texture = { "texture", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms, texture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_texture_MetaData), NewProp_texture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_texture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsSingleChannelSDFTexture", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::RTMSDF_FunctionLibrary_eventIsSingleChannelSDFTexture_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsSingleChannelSDFTexture)
{
	P_GET_OBJECT(UTexture2D,Z_Param_texture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsSingleChannelSDFTexture(Z_Param_texture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsSingleChannelSDFTexture

// Begin Class URTMSDF_FunctionLibrary Function IsSoftTextureScaledToFitDistance
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics
{
	struct RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms
	{
		TSoftObjectPtr<UTexture2D> softTexture;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns true if the texture was imported with the Scale to Fit Distance setting\n" },
#endif
		{ "DisplayName", "Is Scaled to Fit Distance (Soft Texture)" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns true if the texture was imported with the Scale to Fit Distance setting" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_softTexture_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_softTexture;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_softTexture = { "softTexture", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms, softTexture), Z_Construct_UClass_UTexture2D_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_softTexture_MetaData), NewProp_softTexture_MetaData) };
void Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms), &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_softTexture,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "IsSoftTextureScaledToFitDistance", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::RTMSDF_FunctionLibrary_eventIsSoftTextureScaledToFitDistance_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execIsSoftTextureScaledToFitDistance)
{
	P_GET_SOFTOBJECT_REF(TSoftObjectPtr<UTexture2D>,Z_Param_Out_softTexture);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=URTMSDF_FunctionLibrary::IsSoftTextureScaledToFitDistance(Z_Param_Out_softTexture);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function IsSoftTextureScaledToFitDistance

// Begin Class URTMSDF_FunctionLibrary Function UVRangeToScalingFactor
struct Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics
{
	struct RTMSDF_FunctionLibrary_eventUVRangeToScalingFactor_Parms
	{
		float uvRange;
		float ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "RTM|SDF|Utilities" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Calculates the scaling factor needed to offset a given UV Range\n" },
#endif
		{ "DisplayName", "UV Range to Scaling Factor" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Calculates the scaling factor needed to offset a given UV Range" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFloatPropertyParams NewProp_uvRange;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::NewProp_uvRange = { "uvRange", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventUVRangeToScalingFactor_Parms, uvRange), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(RTMSDF_FunctionLibrary_eventUVRangeToScalingFactor_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::NewProp_uvRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_URTMSDF_FunctionLibrary, nullptr, "UVRangeToScalingFactor", nullptr, nullptr, Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::PropPointers), sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::RTMSDF_FunctionLibrary_eventUVRangeToScalingFactor_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::Function_MetaDataParams), Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::RTMSDF_FunctionLibrary_eventUVRangeToScalingFactor_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(URTMSDF_FunctionLibrary::execUVRangeToScalingFactor)
{
	P_GET_PROPERTY(FFloatProperty,Z_Param_uvRange);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(float*)Z_Param__Result=URTMSDF_FunctionLibrary::UVRangeToScalingFactor(Z_Param_uvRange);
	P_NATIVE_END;
}
// End Class URTMSDF_FunctionLibrary Function UVRangeToScalingFactor

// Begin Class URTMSDF_FunctionLibrary
void URTMSDF_FunctionLibrary::StaticRegisterNativesURTMSDF_FunctionLibrary()
{
	UClass* Class = URTMSDF_FunctionLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetSDFFormat", &URTMSDF_FunctionLibrary::execGetSDFFormat },
		{ "GetSDFFormatFromSoftTexture", &URTMSDF_FunctionLibrary::execGetSDFFormatFromSoftTexture },
		{ "GetSDFScalingFactor", &URTMSDF_FunctionLibrary::execGetSDFScalingFactor },
		{ "GetSDFScalingFactorFromSoftTexture", &URTMSDF_FunctionLibrary::execGetSDFScalingFactorFromSoftTexture },
		{ "GetSDFUVRange", &URTMSDF_FunctionLibrary::execGetSDFUVRange },
		{ "GetSDFUVRangeFromSoftTexure", &URTMSDF_FunctionLibrary::execGetSDFUVRangeFromSoftTexure },
		{ "GetSourceDimensions", &URTMSDF_FunctionLibrary::execGetSourceDimensions },
		{ "GetSourceDimensionsFromSoftTexture", &URTMSDF_FunctionLibrary::execGetSourceDimensionsFromSoftTexture },
		{ "IsInvertedSDF", &URTMSDF_FunctionLibrary::execIsInvertedSDF },
		{ "IsInvertedSDFSoftTexture", &URTMSDF_FunctionLibrary::execIsInvertedSDFSoftTexture },
		{ "IsMSDFSoftTexture", &URTMSDF_FunctionLibrary::execIsMSDFSoftTexture },
		{ "IsMSDFTexture", &URTMSDF_FunctionLibrary::execIsMSDFTexture },
		{ "IsScaledToFitDistance", &URTMSDF_FunctionLibrary::execIsScaledToFitDistance },
		{ "IsSDFSoftTexture", &URTMSDF_FunctionLibrary::execIsSDFSoftTexture },
		{ "IsSDFTexture", &URTMSDF_FunctionLibrary::execIsSDFTexture },
		{ "IsSingleChannelSDFSoftTexture", &URTMSDF_FunctionLibrary::execIsSingleChannelSDFSoftTexture },
		{ "IsSingleChannelSDFTexture", &URTMSDF_FunctionLibrary::execIsSingleChannelSDFTexture },
		{ "IsSoftTextureScaledToFitDistance", &URTMSDF_FunctionLibrary::execIsSoftTextureScaledToFitDistance },
		{ "UVRangeToScalingFactor", &URTMSDF_FunctionLibrary::execUVRangeToScalingFactor },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_FunctionLibrary);
UClass* Z_Construct_UClass_URTMSDF_FunctionLibrary_NoRegister()
{
	return URTMSDF_FunctionLibrary::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "Utilities/RTMSDF_FunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/Utilities/RTMSDF_FunctionLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormat, "GetSDFFormat" }, // 1672238246
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFFormatFromSoftTexture, "GetSDFFormatFromSoftTexture" }, // 3107943628
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactor, "GetSDFScalingFactor" }, // 1102195348
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFScalingFactorFromSoftTexture, "GetSDFScalingFactorFromSoftTexture" }, // 2814342873
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRange, "GetSDFUVRange" }, // 529415953
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSDFUVRangeFromSoftTexure, "GetSDFUVRangeFromSoftTexure" }, // 310980730
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensions, "GetSourceDimensions" }, // 3976868887
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_GetSourceDimensionsFromSoftTexture, "GetSourceDimensionsFromSoftTexture" }, // 208696715
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDF, "IsInvertedSDF" }, // 3961193653
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsInvertedSDFSoftTexture, "IsInvertedSDFSoftTexture" }, // 406073554
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFSoftTexture, "IsMSDFSoftTexture" }, // 2616798294
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsMSDFTexture, "IsMSDFTexture" }, // 1846972949
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsScaledToFitDistance, "IsScaledToFitDistance" }, // 1960410085
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFSoftTexture, "IsSDFSoftTexture" }, // 1885115037
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSDFTexture, "IsSDFTexture" }, // 1749857352
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFSoftTexture, "IsSingleChannelSDFSoftTexture" }, // 2829386413
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSingleChannelSDFTexture, "IsSingleChannelSDFTexture" }, // 394837209
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_IsSoftTextureScaledToFitDistance, "IsSoftTextureScaledToFitDistance" }, // 1432944409
		{ &Z_Construct_UFunction_URTMSDF_FunctionLibrary_UVRangeToScalingFactor, "UVRangeToScalingFactor" }, // 3883527889
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_FunctionLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDF,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::ClassParams = {
	&URTMSDF_FunctionLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_FunctionLibrary()
{
	if (!Z_Registration_Info_UClass_URTMSDF_FunctionLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_FunctionLibrary.OuterSingleton, Z_Construct_UClass_URTMSDF_FunctionLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_FunctionLibrary.OuterSingleton;
}
template<> RTMSDF_API UClass* StaticClass<URTMSDF_FunctionLibrary>()
{
	return URTMSDF_FunctionLibrary::StaticClass();
}
URTMSDF_FunctionLibrary::URTMSDF_FunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_FunctionLibrary);
URTMSDF_FunctionLibrary::~URTMSDF_FunctionLibrary() {}
// End Class URTMSDF_FunctionLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_FunctionLibrary, URTMSDF_FunctionLibrary::StaticClass, TEXT("URTMSDF_FunctionLibrary"), &Z_Registration_Info_UClass_URTMSDF_FunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_FunctionLibrary), 1982059291U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_3291790499(TEXT("/Script/RTMSDF"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDF_Public_Utilities_RTMSDF_FunctionLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
