// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/WBP/MounteaDialogueOptionsContainer.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueOptionsContainer() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainer();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainer_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_NoRegister();
UMG_API UClass* Z_Construct_UClass_UUserWidget();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueOptionsContainer Function ClearChildOptionFocus
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics
{
	struct MounteaDialogueOptionsContainer_eventClearChildOptionFocus_Parms
	{
		UUserWidget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainer_eventClearChildOptionFocus_Parms, Target), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainer, nullptr, "ClearChildOptionFocus", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::MounteaDialogueOptionsContainer_eventClearChildOptionFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::MounteaDialogueOptionsContainer_eventClearChildOptionFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueOptionsContainer::execClearChildOptionFocus)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ClearChildOptionFocus(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueOptionsContainer Function ClearChildOptionFocus

// Begin Class UMounteaDialogueOptionsContainer Function ResetFocus
struct Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics
{
	struct MounteaDialogueOptionsContainer_eventResetFocus_Parms
	{
		const UUserWidget* Requestor;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Requestor_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Requestor;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::NewProp_Requestor = { "Requestor", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueOptionsContainer_eventResetFocus_Parms, Requestor), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Requestor_MetaData), NewProp_Requestor_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::NewProp_Requestor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueOptionsContainer, nullptr, "ResetFocus", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::MounteaDialogueOptionsContainer_eventResetFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00080401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::MounteaDialogueOptionsContainer_eventResetFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueOptionsContainer::execResetFocus)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Requestor);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ResetFocus(Z_Param_Requestor);
	P_NATIVE_END;
}
// End Class UMounteaDialogueOptionsContainer Function ResetFocus

// Begin Class UMounteaDialogueOptionsContainer
void UMounteaDialogueOptionsContainer::StaticRegisterNativesUMounteaDialogueOptionsContainer()
{
	UClass* Class = UMounteaDialogueOptionsContainer::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ClearChildOptionFocus", &UMounteaDialogueOptionsContainer::execClearChildOptionFocus },
		{ "ResetFocus", &UMounteaDialogueOptionsContainer::execResetFocus },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueOptionsContainer);
UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainer_NoRegister()
{
	return UMounteaDialogueOptionsContainer::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "ClassGroupNames", "Mountea" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * UMounteaDialogueOptionsContainer\n *\n * A UserWidget class that implements the 'MounteaDialogueOptionsContainerInterface', providing functionalities for dialogue option containers in the Mountea Dialogue System.\n */" },
#endif
		{ "DisplayName", "Mountea Dialogue Options Container" },
		{ "IncludePath", "WBP/MounteaDialogueOptionsContainer.h" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
		{ "ObjectInitializerConstructorDeclared", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "UMounteaDialogueOptionsContainer\n\nA UserWidget class that implements the 'MounteaDialogueOptionsContainerInterface', providing functionalities for dialogue option containers in the Mountea Dialogue System." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptionClass_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The class type of the dialogue option widget. Must Implement 'MounteaDialogueOptionInterface'.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueOptionInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The class type of the dialogue option widget. Must Implement 'MounteaDialogueOptionInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentDialogueWidget_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * The parent dialogue widget. Must implement 'MounteaDialogueWBPInterface'.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
		{ "MustImplement", "/Script/MounteaDialogueSystem.MounteaDialogueWBPInterface" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "The parent dialogue widget. Must implement 'MounteaDialogueWBPInterface'." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueOptions_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * All Dialogue options associated with this container.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "All Dialogue options associated with this container." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FocusedOption_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Index of focused option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of focused option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LastFocusedOption_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Index of last focused option. Used for fallbacks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Index of last focused option. Used for fallbacks." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bForcedFocusEnabled_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/WBP/MounteaDialogueOptionsContainer.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_DialogueOptionClass;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentDialogueWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOptions_ValueProp;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueOptions_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_DialogueOptions;
	static const UECodeGen_Private::FIntPropertyParams NewProp_FocusedOption;
	static const UECodeGen_Private::FIntPropertyParams NewProp_LastFocusedOption;
	static void NewProp_bForcedFocusEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bForcedFocusEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ClearChildOptionFocus, "ClearChildOptionFocus" }, // 2989775112
		{ &Z_Construct_UFunction_UMounteaDialogueOptionsContainer_ResetFocus, "ResetFocus" }, // 949404645
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueOptionsContainer>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptionClass = { "DialogueOptionClass", nullptr, (EPropertyFlags)0x0024080000000015, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOptionsContainer, DialogueOptionClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptionClass_MetaData), NewProp_DialogueOptionClass_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_ParentDialogueWidget = { "ParentDialogueWidget", nullptr, (EPropertyFlags)0x01240800000a001d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOptionsContainer, ParentDialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentDialogueWidget_MetaData), NewProp_ParentDialogueWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions_ValueProp = { "DialogueOptions", nullptr, (EPropertyFlags)0x01040000000a0009, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions_Key_KeyProp = { "DialogueOptions_Key", nullptr, (EPropertyFlags)0x01000000000a0009, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions = { "DialogueOptions", nullptr, (EPropertyFlags)0x012408800002001d, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOptionsContainer, DialogueOptions), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueOptions_MetaData), NewProp_DialogueOptions_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_FocusedOption = { "FocusedOption", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOptionsContainer, FocusedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FocusedOption_MetaData), NewProp_FocusedOption_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_LastFocusedOption = { "LastFocusedOption", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueOptionsContainer, LastFocusedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LastFocusedOption_MetaData), NewProp_LastFocusedOption_MetaData) };
void Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_bForcedFocusEnabled_SetBit(void* Obj)
{
	((UMounteaDialogueOptionsContainer*)Obj)->bForcedFocusEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_bForcedFocusEnabled = { "bForcedFocusEnabled", nullptr, (EPropertyFlags)0x0020080000020015, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueOptionsContainer), &Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_bForcedFocusEnabled_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bForcedFocusEnabled_MetaData), NewProp_bForcedFocusEnabled_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptionClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_ParentDialogueWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_DialogueOptions,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_FocusedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_LastFocusedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::NewProp_bForcedFocusEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UUserWidget,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueOptionsContainerInterface_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueOptionsContainer, IMounteaDialogueOptionsContainerInterface), false },  // 886590037
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::ClassParams = {
	&UMounteaDialogueOptionsContainer::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x00B010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueOptionsContainer()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueOptionsContainer.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueOptionsContainer.OuterSingleton, Z_Construct_UClass_UMounteaDialogueOptionsContainer_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueOptionsContainer.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueOptionsContainer>()
{
	return UMounteaDialogueOptionsContainer::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueOptionsContainer);
UMounteaDialogueOptionsContainer::~UMounteaDialogueOptionsContainer() {}
// End Class UMounteaDialogueOptionsContainer

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueOptionsContainer, UMounteaDialogueOptionsContainer::StaticClass, TEXT("UMounteaDialogueOptionsContainer"), &Z_Registration_Info_UClass_UMounteaDialogueOptionsContainer, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueOptionsContainer), 3287434851U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_2087793448(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_WBP_MounteaDialogueOptionsContainer_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
