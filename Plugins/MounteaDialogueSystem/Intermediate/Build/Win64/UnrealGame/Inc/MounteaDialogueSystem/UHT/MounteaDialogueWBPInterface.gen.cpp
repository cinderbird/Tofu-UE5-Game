// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/HUD/MounteaDialogueWBPInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueWBPInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueWBPInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueWBPInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueWBPInterface Function OnOptionSelected
struct MounteaDialogueWBPInterface_eventOnOptionSelected_Parms
{
	FGuid SelectionGUID;
};
void IMounteaDialogueWBPInterface::OnOptionSelected(FGuid const& SelectionGUID)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_OnOptionSelected instead.");
}
static FName NAME_UMounteaDialogueWBPInterface_OnOptionSelected = FName(TEXT("OnOptionSelected"));
void IMounteaDialogueWBPInterface::Execute_OnOptionSelected(UObject* O, FGuid const& SelectionGUID)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueWBPInterface::StaticClass()));
	MounteaDialogueWBPInterface_eventOnOptionSelected_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueWBPInterface_OnOptionSelected);
	if (Func)
	{
		Parms.SelectionGUID=SelectionGUID;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when an option has been selected.\n\x09 * \n\x09 * @param SelectionGUID The GUID of the selected option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueWBPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an option has been selected.\n\n@param SelectionGUID The GUID of the selected option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::NewProp_SelectionGUID = { "SelectionGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueWBPInterface_eventOnOptionSelected_Parms, SelectionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionGUID_MetaData), NewProp_SelectionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::NewProp_SelectionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueWBPInterface, nullptr, "OnOptionSelected", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::PropPointers), sizeof(MounteaDialogueWBPInterface_eventOnOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08C20800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueWBPInterface_eventOnOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMounteaDialogueWBPInterface Function OnOptionSelected

// Begin Interface UMounteaDialogueWBPInterface Function RefreshDialogueWidget
struct MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> DialogueManager;
	FString Command;
};
void IMounteaDialogueWBPInterface::RefreshDialogueWidget(TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& Command)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RefreshDialogueWidget instead.");
}
static FName NAME_UMounteaDialogueWBPInterface_RefreshDialogueWidget = FName(TEXT("RefreshDialogueWidget"));
void IMounteaDialogueWBPInterface::Execute_RefreshDialogueWidget(UObject* O, TScriptInterface<IMounteaDialogueManagerInterface> const& DialogueManager, const FString& Command)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueWBPInterface::StaticClass()));
	MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueWBPInterface_RefreshDialogueWidget);
	if (Func)
	{
		Parms.DialogueManager=DialogueManager;
		Parms.Command=Command;
		O->ProcessEvent(Func, &Parms);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This event should be called when you want to refresh UI data.\n\x09 * \n\x09 * @param DialogueManager\x09""Dialogue Manager Interface reference. Request 'GetDialogueContext' to retrieve data to display.\n\x09 * @param Command\x09\x09\x09String command. All commands are defined in ProjectSettings/MounteaFramework/MounteaDialogueSystem.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueWBPInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event should be called when you want to refresh UI data.\n\n@param DialogueManager       Dialogue Manager Interface reference. Request 'GetDialogueContext' to retrieve data to display.\n@param Command                       String command. All commands are defined in ProjectSettings/MounteaFramework/MounteaDialogueSystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms, DialogueManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::NewProp_DialogueManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueWBPInterface, nullptr, "RefreshDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::PropPointers), sizeof(MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueWBPInterface_eventRefreshDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
// End Interface UMounteaDialogueWBPInterface Function RefreshDialogueWidget

// Begin Interface UMounteaDialogueWBPInterface
void UMounteaDialogueWBPInterface::StaticRegisterNativesUMounteaDialogueWBPInterface()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueWBPInterface);
UClass* Z_Construct_UClass_UMounteaDialogueWBPInterface_NoRegister()
{
	return UMounteaDialogueWBPInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueWBPInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueWBPInterface_OnOptionSelected, "OnOptionSelected" }, // 1055920998
		{ &Z_Construct_UFunction_UMounteaDialogueWBPInterface_RefreshDialogueWidget, "RefreshDialogueWidget" }, // 1916440497
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueWBPInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::ClassParams = {
	&UMounteaDialogueWBPInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueWBPInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueWBPInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueWBPInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueWBPInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueWBPInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueWBPInterface>()
{
	return UMounteaDialogueWBPInterface::StaticClass();
}
UMounteaDialogueWBPInterface::UMounteaDialogueWBPInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueWBPInterface);
UMounteaDialogueWBPInterface::~UMounteaDialogueWBPInterface() {}
// End Interface UMounteaDialogueWBPInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueWBPInterface, UMounteaDialogueWBPInterface::StaticClass, TEXT("UMounteaDialogueWBPInterface"), &Z_Registration_Info_UClass_UMounteaDialogueWBPInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueWBPInterface), 511491430U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_2747348338(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueWBPInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
