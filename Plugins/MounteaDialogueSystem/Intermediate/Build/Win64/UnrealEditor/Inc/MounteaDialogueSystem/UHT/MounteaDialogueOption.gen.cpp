// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/WBP/MounteaDialogueOption.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueOptionInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueOption() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOption();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOption_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaFocusableWidgetInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueOptionData();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueOption Function OnOptionFocused
struct MounteaDialogueOption_eventOnOptionFocused_Parms
{
	UUserWidget* FocusedWidget;
	bool IsFocused;
};
static const FName NAME_UMounteaDialogueOption_OnOptionFocused = FName(TEXT("OnOptionFocused"));
void UMounteaDialogueOption::OnOptionFocused(UUserWidget* FocusedWidget, bool IsFocused)
{
	MounteaDialogueOption_eventOnOptionFocused_Parms Parms;
	Parms.FocusedWidget=FocusedWidget;
	Parms.IsFocused=IsFocused ? true : false;
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueOption_OnOptionFocused);
	ProcessEvent(Func,&Parms);
}
struct Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Focus" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FocusedWidget;
	static void NewProp_IsFocused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_FocusedWidget = { "FocusedWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOption_eventOnOptionFocused_Parms, FocusedWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedWidget_MetaData), NewProp_FocusedWidget_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_IsFocused_SetBit(void* Obj)
{
	((MounteaDialogueOption_eventOnOptionFocused_Parms*)Obj)->IsFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_IsFocused = { "IsFocused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueOption_eventOnOptionFocused_Parms), &Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_IsFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocused_MetaData), NewProp_IsFocused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_FocusedWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::NewProp_IsFocused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOption, nullptr, "OnOptionFocused", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::PropPointers), sizeof(MounteaDialogueOption_eventOnOptionFocused_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueOption_eventOnOptionFocused_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Class UMounteaDialogueOption Function OnOptionFocused

// Begin Class UMounteaDialogueOption
void UMounteaDialogueOption::StaticRegisterNativesUMounteaDialogueOption()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueOption);
UClass* Z_Construct_UClass_UMounteaDialogueOption_NoRegister()
{
	return UMounteaDialogueOption::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueOption_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMounteaDialogueOption\n * \n * A UserWidget class that implements the 'MounteaDialogueOptionInterface', providing functionalities for dialogue options in the Mountea Dialogue System.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Option" },
		{ "IncludePath", "WBP/MounteaDialogueOption.h" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMounteaDialogueOption\n\nA UserWidget class that implements the 'MounteaDialogueOptionInterface', providing functionalities for dialogue options in the Mountea Dialogue System." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionState_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Data" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionData_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Dialogue Option Data.\n\x09 */" },
#endif
		{ "ExposeOnSpawn", "TRUE" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Option Data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnDialogueOptionSelected_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Event called upon selecting Dialogue Option.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Delegate" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Event called upon selecting Dialogue Option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnOptionFocusChanged_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "CustomTag", "MounteaK2Delegate" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OnMounteaFocusClearRequested_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "CustomTag", "MounteaK2Delegate" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOption.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_DialogueOptionState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DialogueOptionState;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueOptionData;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnDialogueOptionSelected;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnOptionFocusChanged;
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_OnMounteaFocusClearRequested;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueOption_OnOptionFocused, "OnOptionFocused" }, // 3651887568
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueOption>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionState = { "DialogueOptionState", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOption, DialogueOptionState), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptionState_MetaData), NewProp_DialogueOptionState_MetaData) }; // 1653604931
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionData = { "DialogueOptionData", nullptr, (EPropertyFlags)0x0021080000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOption, DialogueOptionData), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptionData_MetaData), NewProp_DialogueOptionData_MetaData) }; // 3746218195
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnDialogueOptionSelected = { "OnDialogueOptionSelected", nullptr, (EPropertyFlags)0x00201800000a0015, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOption, OnDialogueOptionSelected), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnDialogueOptionSelected__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnDialogueOptionSelected_MetaData), NewProp_OnDialogueOptionSelected_MetaData) }; // 1407362806
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnOptionFocusChanged = { "OnOptionFocusChanged", nullptr, (EPropertyFlags)0x00201800100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOption, OnOptionFocusChanged), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnOptionFocusChanged_MetaData), NewProp_OnOptionFocusChanged_MetaData) }; // 3529342254
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnMounteaFocusClearRequested = { "OnMounteaFocusClearRequested", nullptr, (EPropertyFlags)0x00201800100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOption, OnMounteaFocusClearRequested), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OnMounteaFocusClearRequested_MetaData), NewProp_OnMounteaFocusClearRequested_MetaData) }; // 2560170488
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_DialogueOptionData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnDialogueOptionSelected,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnOptionFocusChanged,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOption_Statics::NewProp_OnMounteaFocusClearRequested,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOption_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueOption_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOption_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueOption_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueOptionInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueOption, IMounteaDialogueOptionInterface), false },  // 286951956
	{ Z_Construct_UClass_UMounteaFocusableWidgetInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueOption, IMounteaFocusableWidgetInterface), false },  // 3389950318
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueOption_Statics::ClassParams = {
	&UMounteaDialogueOption::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueOption_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOption_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOption_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueOption_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueOption()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueOption.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueOption.OuterSingleton, Z_Construct_UClass_UMounteaDialogueOption_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueOption.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueOption>()
{
	return UMounteaDialogueOption::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueOption);
UMounteaDialogueOption::~UMounteaDialogueOption() {}
// End Class UMounteaDialogueOption

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOption_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueOption, UMounteaDialogueOption::StaticClass, TEXT("UMounteaDialogueOption"), &Z_Registration_Info_UClass_UMounteaDialogueOption, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueOption), 1273374590U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOption_h_895778156(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOption_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOption_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
