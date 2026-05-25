// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueSkipInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueSkipInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSkipInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueSkipInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueSkipInterface Function RequestHideWidget
void IMounteaDialogueSkipInterface::RequestHideWidget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestHideWidget instead.");
}
static FName NAME_UMounteaDialogueSkipInterface_RequestHideWidget = FName(TEXT("RequestHideWidget"));
void IMounteaDialogueSkipInterface::Execute_RequestHideWidget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueSkipInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueSkipInterface_RequestHideWidget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Skip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the widget to hide with a fade-out effect.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueSkipInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the widget to hide with a fade-out effect." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSkipInterface, nullptr, "RequestHideWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMounteaDialogueSkipInterface Function RequestHideWidget

// Begin Interface UMounteaDialogueSkipInterface Function RequestShowWidget
struct MounteaDialogueSkipInterface_eventRequestShowWidget_Parms
{
	FVector2D FadeProgressDuration;
};
void IMounteaDialogueSkipInterface::RequestShowWidget(FVector2D const& FadeProgressDuration)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RequestShowWidget instead.");
}
static FName NAME_UMounteaDialogueSkipInterface_RequestShowWidget = FName(TEXT("RequestShowWidget"));
void IMounteaDialogueSkipInterface::Execute_RequestShowWidget(UObject* O, FVector2D const& FadeProgressDuration)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueSkipInterface::StaticClass()));
	MounteaDialogueSkipInterface_eventRequestShowWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueSkipInterface_RequestShowWidget);
	if (Func)
	{
		Parms.FadeProgressDuration=FadeProgressDuration;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Skip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the widget to show with a fade-in effect.\n\x09 *\n\x09 * @param FadeProgressDuration A vector specifying the fade-in progress duration for the widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueSkipInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the widget to show with a fade-in effect.\n\n@param FadeProgressDuration A vector specifying the fade-in progress duration for the widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeProgressDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeProgressDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::NewProp_FadeProgressDuration = { "FadeProgressDuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueSkipInterface_eventRequestShowWidget_Parms, FadeProgressDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeProgressDuration_MetaData), NewProp_FadeProgressDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::NewProp_FadeProgressDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueSkipInterface, nullptr, "RequestShowWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::PropPointers), sizeof(MounteaDialogueSkipInterface_eventRequestShowWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueSkipInterface_eventRequestShowWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMounteaDialogueSkipInterface Function RequestShowWidget

// Begin Interface UMounteaDialogueSkipInterface
void UMounteaDialogueSkipInterface::StaticRegisterNativesUMounteaDialogueSkipInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueSkipInterface);
UClass* Z_Construct_UClass_UMounteaDialogueSkipInterface_NoRegister()
{
	return UMounteaDialogueSkipInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueSkipInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestHideWidget, "RequestHideWidget" }, // 728599402
		{ &Z_Construct_UFunction_UMounteaDialogueSkipInterface_RequestShowWidget, "RequestShowWidget" }, // 17058161
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueSkipInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::ClassParams = {
	&UMounteaDialogueSkipInterface::StaticClass,
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
	0x000840A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueSkipInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueSkipInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueSkipInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueSkipInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueSkipInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueSkipInterface>()
{
	return UMounteaDialogueSkipInterface::StaticClass();
}
UMounteaDialogueSkipInterface::UMounteaDialogueSkipInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueSkipInterface);
UMounteaDialogueSkipInterface::~UMounteaDialogueSkipInterface() {}
// End Interface UMounteaDialogueSkipInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueSkipInterface, UMounteaDialogueSkipInterface::StaticClass, TEXT("UMounteaDialogueSkipInterface"), &Z_Registration_Info_UClass_UMounteaDialogueSkipInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueSkipInterface), 2328547598U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_2398639530(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueSkipInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
