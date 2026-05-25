// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_SelectRandomDialogueRow.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_SelectRandomDialogueRow() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_SelectRandomDialogueRow
void UMounteaDialogueDecorator_SelectRandomDialogueRow::StaticRegisterNativesUMounteaDialogueDecorator_SelectRandomDialogueRow()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_SelectRandomDialogueRow);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_NoRegister()
{
	return UMounteaDialogueDecorator_SelectRandomDialogueRow::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support to pick random Row from Dialogue Data.\n */" },
#endif
		{ "DisplayName", "Use Random Dialogue Row Data" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_SelectRandomDialogueRow.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SelectRandomDialogueRow.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support to pick random Row from Dialogue Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseRange_MetaData[] = {
		{ "Category", "Random" },
		{ "InlineEditConditionToggle", "" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SelectRandomDialogueRow.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RandomRange_MetaData[] = {
		{ "Category", "Random" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allows select random number from given Range.\n\x09 * If range exceeds or is invalid, first valid random index is used.\n\x09 */" },
#endif
		{ "EditCondition", "bUseRange" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SelectRandomDialogueRow.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allows select random number from given Range.\nIf range exceeds or is invalid, first valid random index is used." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_bUseRange_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseRange;
	static const UECodeGen_Private::FStructPropertyParams NewProp_RandomRange;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_SelectRandomDialogueRow>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
void Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_bUseRange_SetBit(void* Obj)
{
	((UMounteaDialogueDecorator_SelectRandomDialogueRow*)Obj)->bUseRange = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_bUseRange = { "bUseRange", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueDecorator_SelectRandomDialogueRow), &Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_bUseRange_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseRange_MetaData), NewProp_bUseRange_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_RandomRange = { "RandomRange", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_SelectRandomDialogueRow, RandomRange), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RandomRange_MetaData), NewProp_RandomRange_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_bUseRange,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::NewProp_RandomRange,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::ClassParams = {
	&UMounteaDialogueDecorator_SelectRandomDialogueRow::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_SelectRandomDialogueRow>()
{
	return UMounteaDialogueDecorator_SelectRandomDialogueRow::StaticClass();
}
UMounteaDialogueDecorator_SelectRandomDialogueRow::UMounteaDialogueDecorator_SelectRandomDialogueRow() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_SelectRandomDialogueRow);
UMounteaDialogueDecorator_SelectRandomDialogueRow::~UMounteaDialogueDecorator_SelectRandomDialogueRow() {}
// End Class UMounteaDialogueDecorator_SelectRandomDialogueRow

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SelectRandomDialogueRow_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow, UMounteaDialogueDecorator_SelectRandomDialogueRow::StaticClass, TEXT("UMounteaDialogueDecorator_SelectRandomDialogueRow"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_SelectRandomDialogueRow, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_SelectRandomDialogueRow), 3194154523U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SelectRandomDialogueRow_h_1229458011(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SelectRandomDialogueRow_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SelectRandomDialogueRow_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
