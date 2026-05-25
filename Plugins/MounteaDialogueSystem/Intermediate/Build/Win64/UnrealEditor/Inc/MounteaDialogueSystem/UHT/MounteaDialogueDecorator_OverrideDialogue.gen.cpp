// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_OverrideDialogue() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueContext_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_OverrideDialogue Function GetRowNames
struct Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics
{
	struct MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms
	{
		TArray<FName> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue, nullptr, "GetRowNames", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x40040401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::MounteaDialogueDecorator_OverrideDialogue_eventGetRowNames_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecorator_OverrideDialogue::execGetRowNames)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<FName>*)Z_Param__Result=P_THIS->GetRowNames();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecorator_OverrideDialogue Function GetRowNames

// Begin Class UMounteaDialogueDecorator_OverrideDialogue
void UMounteaDialogueDecorator_OverrideDialogue::StaticRegisterNativesUMounteaDialogueDecorator_OverrideDialogue()
{
	UClass* Class = UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetRowNames", &UMounteaDialogueDecorator_OverrideDialogue::execGetRowNames },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_OverrideDialogue);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_NoRegister()
{
	return UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support for selecting Dialogue Row data.\n */" },
#endif
		{ "DisplayName", "Override Dialogue Row Data" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support for selecting Dialogue Row data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DataTable_MetaData[] = {
		{ "Category", "Override" },
		{ "DisplayThumbnail", "FALSE" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
		{ "RequiredAssetDataTags", "RowStructure=/Script/MounteaDialogueSystem.DialogueRow" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowName_MetaData[] = {
		{ "Category", "Override" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/** Name of row in the table that we want */" },
#endif
		{ "EditCondition", "DataTable!=nullptr" },
		{ "GetOptions", "GetRowNames" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Name of row in the table that we want" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RowIndex_MetaData[] = {
		{ "Category", "Override" },
		{ "ClampMin", "0" },
		{ "EditCondition", "DataTable!=nullptr" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
		{ "NoResetToDefault", "" },
		{ "UIMin", "0" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Context_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_OverrideDialogue.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
	static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
	static const UECodeGen_Private::FIntPropertyParams NewProp_RowIndex;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Context;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecorator_OverrideDialogue_GetRowNames, "GetRowNames" }, // 3648354642
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_OverrideDialogue>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0124080000000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DataTable_MetaData), NewProp_DataTable_MetaData) };
const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, RowName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowName_MetaData), NewProp_RowName_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex = { "RowIndex", nullptr, (EPropertyFlags)0x0020080000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, RowIndex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RowIndex_MetaData), NewProp_RowIndex_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_Context = { "Context", nullptr, (EPropertyFlags)0x0144000000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_OverrideDialogue, Context), Z_Construct_UClass_UMounteaDialogueContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Context_MetaData), NewProp_Context_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_DataTable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_RowIndex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::NewProp_Context,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::ClassParams = {
	&UMounteaDialogueDecorator_OverrideDialogue::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_OverrideDialogue>()
{
	return UMounteaDialogueDecorator_OverrideDialogue::StaticClass();
}
UMounteaDialogueDecorator_OverrideDialogue::UMounteaDialogueDecorator_OverrideDialogue() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_OverrideDialogue);
UMounteaDialogueDecorator_OverrideDialogue::~UMounteaDialogueDecorator_OverrideDialogue() {}
// End Class UMounteaDialogueDecorator_OverrideDialogue

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_OverrideDialogue, UMounteaDialogueDecorator_OverrideDialogue::StaticClass, TEXT("UMounteaDialogueDecorator_OverrideDialogue"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_OverrideDialogue, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_OverrideDialogue), 2745376097U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_997039691(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_OverrideDialogue_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
