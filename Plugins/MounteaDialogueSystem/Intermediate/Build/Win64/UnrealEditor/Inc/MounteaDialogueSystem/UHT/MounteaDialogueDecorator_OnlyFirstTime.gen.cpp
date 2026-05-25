// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_OnlyFirstTime() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_OnlyFirstTime Function IsFirstTime
struct Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics
{
	struct MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms
	{
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Returns whether Owning Node has never been called before.\n" },
#endif
		{ "CustomTag", "MounteaK2Validate" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns whether Owning Node has never been called before." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms), &Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime, nullptr, "IsFirstTime", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::MounteaDialogueDecorator_OnlyFirstTime_eventIsFirstTime_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecorator_OnlyFirstTime::execIsFirstTime)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsFirstTime();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecorator_OnlyFirstTime Function IsFirstTime

// Begin Class UMounteaDialogueDecorator_OnlyFirstTime
void UMounteaDialogueDecorator_OnlyFirstTime::StaticRegisterNativesUMounteaDialogueDecorator_OnlyFirstTime()
{
	UClass* Class = UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "IsFirstTime", &UMounteaDialogueDecorator_OnlyFirstTime::execIsFirstTime },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_OnlyFirstTime);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_NoRegister()
{
	return UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support for triggering logic if Owning node has been entered for the first time.\n * Base class that should expanded with Child Classes.\n *\n * Child Classes must implement logic!\n * Should do something only if its Owning Node has never been called before.\n *\n * Provides validations and data for Child classes.\n * By itself has no logic within.\n *\n * For proper usage, save Dialogue Participants when saving game!\n */" },
#endif
		{ "DisplayName", "Only First Time Base" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OnlyFirstTime.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support for triggering logic if Owning node has been entered for the first time.\nBase class that should expanded with Child Classes.\n\nChild Classes must implement logic!\nShould do something only if its Owning Node has never been called before.\n\nProvides validations and data for Child classes.\nBy itself has no logic within.\n\nFor proper usage, save Dialogue Participants when saving game!" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecorator_OnlyFirstTime_IsFirstTime, "IsFirstTime" }, // 2099496565
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_OnlyFirstTime>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::ClassParams = {
	&UMounteaDialogueDecorator_OnlyFirstTime::StaticClass,
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
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_OnlyFirstTime>()
{
	return UMounteaDialogueDecorator_OnlyFirstTime::StaticClass();
}
UMounteaDialogueDecorator_OnlyFirstTime::UMounteaDialogueDecorator_OnlyFirstTime() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_OnlyFirstTime);
UMounteaDialogueDecorator_OnlyFirstTime::~UMounteaDialogueDecorator_OnlyFirstTime() {}
// End Class UMounteaDialogueDecorator_OnlyFirstTime

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_OnlyFirstTime, UMounteaDialogueDecorator_OnlyFirstTime::StaticClass, TEXT("UMounteaDialogueDecorator_OnlyFirstTime"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_OnlyFirstTime, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_OnlyFirstTime), 4201093330U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_2715434439(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OnlyFirstTime_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
