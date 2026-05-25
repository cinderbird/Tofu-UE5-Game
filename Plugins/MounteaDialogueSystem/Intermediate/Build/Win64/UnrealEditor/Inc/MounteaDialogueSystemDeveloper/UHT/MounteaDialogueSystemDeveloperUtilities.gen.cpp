// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemDeveloper/Private/Utilities/MounteaDialogueSystemDeveloperUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSystemDeveloperUtilities() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities();
MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemDeveloper();
// End Cross Module References

// Begin Class UMounteaDialogueSystemDeveloperUtilities Function CopyToClipboard
struct Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics
{
	struct MounteaDialogueSystemDeveloperUtilities_eventCopyToClipboard_Parms
	{
		FString Input;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Developer" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Private/Utilities/MounteaDialogueSystemDeveloperUtilities.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Input_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Input;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::NewProp_Input = { "Input", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSystemDeveloperUtilities_eventCopyToClipboard_Parms, Input), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Input_MetaData), NewProp_Input_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::NewProp_Input,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities, nullptr, "CopyToClipboard", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::MounteaDialogueSystemDeveloperUtilities_eventCopyToClipboard_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::MounteaDialogueSystemDeveloperUtilities_eventCopyToClipboard_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueSystemDeveloperUtilities::execCopyToClipboard)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Input);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueSystemDeveloperUtilities::CopyToClipboard(Z_Param_Input);
	P_NATIVE_END;
}
// End Class UMounteaDialogueSystemDeveloperUtilities Function CopyToClipboard

// Begin Class UMounteaDialogueSystemDeveloperUtilities
void UMounteaDialogueSystemDeveloperUtilities::StaticRegisterNativesUMounteaDialogueSystemDeveloperUtilities()
{
	UClass* Class = UMounteaDialogueSystemDeveloperUtilities::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CopyToClipboard", &UMounteaDialogueSystemDeveloperUtilities::execCopyToClipboard },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSystemDeveloperUtilities);
UClass* Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_NoRegister()
{
	return UMounteaDialogueSystemDeveloperUtilities::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Utilities/MounteaDialogueSystemDeveloperUtilities.h" },
		{ "ModuleRelativePath", "Private/Utilities/MounteaDialogueSystemDeveloperUtilities.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSystemDeveloperUtilities_CopyToClipboard, "CopyToClipboard" }, // 2857084095
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueSystemDeveloperUtilities>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemDeveloper,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::ClassParams = {
	&UMounteaDialogueSystemDeveloperUtilities::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSystemDeveloperUtilities.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSystemDeveloperUtilities.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSystemDeveloperUtilities.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMDEVELOPER_API UClass* StaticClass<UMounteaDialogueSystemDeveloperUtilities>()
{
	return UMounteaDialogueSystemDeveloperUtilities::StaticClass();
}
UMounteaDialogueSystemDeveloperUtilities::UMounteaDialogueSystemDeveloperUtilities(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSystemDeveloperUtilities);
UMounteaDialogueSystemDeveloperUtilities::~UMounteaDialogueSystemDeveloperUtilities() {}
// End Class UMounteaDialogueSystemDeveloperUtilities

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Private_Utilities_MounteaDialogueSystemDeveloperUtilities_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSystemDeveloperUtilities, UMounteaDialogueSystemDeveloperUtilities::StaticClass, TEXT("UMounteaDialogueSystemDeveloperUtilities"), &Z_Registration_Info_UClass_UMounteaDialogueSystemDeveloperUtilities, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSystemDeveloperUtilities), 2777012586U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Private_Utilities_MounteaDialogueSystemDeveloperUtilities_h_3308043532(TEXT("/Script/MounteaDialogueSystemDeveloper"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Private_Utilities_MounteaDialogueSystemDeveloperUtilities_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemDeveloper_Private_Utilities_MounteaDialogueSystemDeveloperUtilities_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
