// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_Delay.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_Delay() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_Delay();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphNode_Delay Function OnDelayDurationExpired
struct Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics
{
	struct MounteaDialogueGraphNode_Delay_eventOnDelayDurationExpired_Parms
	{
		TScriptInterface<IMounteaDialogueManagerInterface> MounteaDialogueManagerInterface;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_Delay.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MounteaDialogueManagerInterface_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_MounteaDialogueManagerInterface;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::NewProp_MounteaDialogueManagerInterface = { "MounteaDialogueManagerInterface", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueGraphNode_Delay_eventOnDelayDurationExpired_Parms, MounteaDialogueManagerInterface), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MounteaDialogueManagerInterface_MetaData), NewProp_MounteaDialogueManagerInterface_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::NewProp_MounteaDialogueManagerInterface,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueGraphNode_Delay, nullptr, "OnDelayDurationExpired", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::MounteaDialogueGraphNode_Delay_eventOnDelayDurationExpired_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00440401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::MounteaDialogueGraphNode_Delay_eventOnDelayDurationExpired_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueGraphNode_Delay::execOnDelayDurationExpired)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_MounteaDialogueManagerInterface);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->OnDelayDurationExpired(Z_Param_Out_MounteaDialogueManagerInterface);
	P_NATIVE_END;
}
// End Class UMounteaDialogueGraphNode_Delay Function OnDelayDurationExpired

// Begin Class UMounteaDialogueGraphNode_Delay
void UMounteaDialogueGraphNode_Delay::StaticRegisterNativesUMounteaDialogueGraphNode_Delay()
{
	UClass* Class = UMounteaDialogueGraphNode_Delay::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "OnDelayDurationExpired", &UMounteaDialogueGraphNode_Delay::execOnDelayDurationExpired },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_Delay);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_NoRegister()
{
	return UMounteaDialogueGraphNode_Delay::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "DisplayName", "Delay Node" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_Delay.h" },
		{ "IsBlueprintBase", "false" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_Delay.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Tree: Delay Node" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DelayDuration_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_Delay.h" },
		{ "NoResetToDefault", "" },
		{ "UIMin", "0.010000" },
		{ "Units", "s" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_DelayDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueGraphNode_Delay_OnDelayDurationExpired, "OnDelayDurationExpired" }, // 1189719068
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_Delay>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::NewProp_DelayDuration = { "DelayDuration", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphNode_Delay, DelayDuration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DelayDuration_MetaData), NewProp_DelayDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::NewProp_DelayDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::ClassParams = {
	&UMounteaDialogueGraphNode_Delay::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::PropPointers),
	0,
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_Delay()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_Delay.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_Delay.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_Delay_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_Delay.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_Delay>()
{
	return UMounteaDialogueGraphNode_Delay::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_Delay);
UMounteaDialogueGraphNode_Delay::~UMounteaDialogueGraphNode_Delay() {}
// End Class UMounteaDialogueGraphNode_Delay

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_Delay_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_Delay, UMounteaDialogueGraphNode_Delay::StaticClass, TEXT("UMounteaDialogueGraphNode_Delay"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_Delay, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_Delay), 295649899U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_Delay_h_125381651(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_Delay_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_Delay_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
