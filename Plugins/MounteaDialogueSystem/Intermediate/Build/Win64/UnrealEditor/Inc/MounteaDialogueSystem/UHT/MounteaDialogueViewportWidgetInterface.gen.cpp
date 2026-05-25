// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueViewportWidgetInterface.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueViewportWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_NoRegister();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueViewportWidgetInterface Function AddChildWidget
struct MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms
{
	UUserWidget* ChildWidget;
	int32 ZOrder;
	FAnchors WidgetAnchors;
	FMargin WidgetMargin;
};
void IMounteaDialogueViewportWidgetInterface::AddChildWidget(UUserWidget* ChildWidget, const int32 ZOrder, const FAnchors WidgetAnchors, FMargin const& WidgetMargin)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddChildWidget instead.");
}
static FName NAME_UMounteaDialogueViewportWidgetInterface_AddChildWidget = FName(TEXT("AddChildWidget"));
void IMounteaDialogueViewportWidgetInterface::Execute_AddChildWidget(UObject* O, UUserWidget* ChildWidget, const int32 ZOrder, const FAnchors WidgetAnchors, FMargin const& WidgetMargin)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueViewportWidgetInterface::StaticClass()));
	MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueViewportWidgetInterface_AddChildWidget);
	if (Func)
	{
		Parms.ChildWidget=ChildWidget;
		Parms.ZOrder=ZOrder;
		Parms.WidgetAnchors=WidgetAnchors;
		Parms.WidgetMargin=WidgetMargin;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueViewportWidgetInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueViewportWidgetInterface::StaticClass())))
	{
		I->AddChildWidget_Implementation(ChildWidget,ZOrder,WidgetAnchors,WidgetMargin);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a child widget to the parent widget.\n\x09 *\n\x09 * @param ChildWidget     The child widget to be added.\n\x09 * @param ZOrder The Z-order index of the child widget, determining its rendering order within the parent\n\x09 * @param WidgetAnchors The anchors for the widget, determining how the widget is positioned relative to its parent\n\x09 * @param WidgetMargin The margin for the widget, defining the padding or offset from the parent's bounds\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueViewportWidgetInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a child widget to the parent widget.\n\n@param ChildWidget     The child widget to be added.\n@param ZOrder The Z-order index of the child widget, determining its rendering order within the parent\n@param WidgetAnchors The anchors for the widget, determining how the widget is positioned relative to its parent\n@param WidgetMargin The margin for the widget, defining the padding or offset from the parent's bounds" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetAnchors_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetMargin_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetAnchors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetMargin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_WidgetAnchors = { "WidgetAnchors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms, WidgetAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAnchors_MetaData), NewProp_WidgetAnchors_MetaData) }; // 675573533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_WidgetMargin = { "WidgetMargin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms, WidgetMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetMargin_MetaData), NewProp_WidgetMargin_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_ChildWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_WidgetAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::NewProp_WidgetMargin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface, nullptr, "AddChildWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::PropPointers), sizeof(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueViewportWidgetInterface_eventAddChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueViewportWidgetInterface::execAddChildWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FAnchors,Z_Param_WidgetAnchors);
	P_GET_STRUCT_REF(FMargin,Z_Param_Out_WidgetMargin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChildWidget_Implementation(Z_Param_ChildWidget,Z_Param_ZOrder,Z_Param_WidgetAnchors,Z_Param_Out_WidgetMargin);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueViewportWidgetInterface Function AddChildWidget

// Begin Interface UMounteaDialogueViewportWidgetInterface Function RemoveChildWidget
struct MounteaDialogueViewportWidgetInterface_eventRemoveChildWidget_Parms
{
	UUserWidget* ChildWidget;
};
void IMounteaDialogueViewportWidgetInterface::RemoveChildWidget(UUserWidget* ChildWidget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveChildWidget instead.");
}
static FName NAME_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget = FName(TEXT("RemoveChildWidget"));
void IMounteaDialogueViewportWidgetInterface::Execute_RemoveChildWidget(UObject* O, UUserWidget* ChildWidget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueViewportWidgetInterface::StaticClass()));
	MounteaDialogueViewportWidgetInterface_eventRemoveChildWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget);
	if (Func)
	{
		Parms.ChildWidget=ChildWidget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueViewportWidgetInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueViewportWidgetInterface::StaticClass())))
	{
		I->RemoveChildWidget_Implementation(ChildWidget);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a child widget from the parent widget.\n\x09 *\n\x09 * @param ChildWidget     The child widget to be removed.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueViewportWidgetInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a child widget from the parent widget.\n\n@param ChildWidget     The child widget to be removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueViewportWidgetInterface_eventRemoveChildWidget_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::NewProp_ChildWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface, nullptr, "RemoveChildWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::PropPointers), sizeof(MounteaDialogueViewportWidgetInterface_eventRemoveChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueViewportWidgetInterface_eventRemoveChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueViewportWidgetInterface::execRemoveChildWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveChildWidget_Implementation(Z_Param_ChildWidget);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueViewportWidgetInterface Function RemoveChildWidget

// Begin Interface UMounteaDialogueViewportWidgetInterface
void UMounteaDialogueViewportWidgetInterface::StaticRegisterNativesUMounteaDialogueViewportWidgetInterface()
{
	UClass* Class = UMounteaDialogueViewportWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildWidget", &IMounteaDialogueViewportWidgetInterface::execAddChildWidget },
		{ "RemoveChildWidget", &IMounteaDialogueViewportWidgetInterface::execRemoveChildWidget },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueViewportWidgetInterface);
UClass* Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_NoRegister()
{
	return UMounteaDialogueViewportWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaDialogueViewportWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_AddChildWidget, "AddChildWidget" }, // 97130409
		{ &Z_Construct_UFunction_UMounteaDialogueViewportWidgetInterface_RemoveChildWidget, "RemoveChildWidget" }, // 519848222
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueViewportWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::ClassParams = {
	&UMounteaDialogueViewportWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueViewportWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueViewportWidgetInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueViewportWidgetInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueViewportWidgetInterface>()
{
	return UMounteaDialogueViewportWidgetInterface::StaticClass();
}
UMounteaDialogueViewportWidgetInterface::UMounteaDialogueViewportWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueViewportWidgetInterface);
UMounteaDialogueViewportWidgetInterface::~UMounteaDialogueViewportWidgetInterface() {}
// End Interface UMounteaDialogueViewportWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueViewportWidgetInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueViewportWidgetInterface, UMounteaDialogueViewportWidgetInterface::StaticClass, TEXT("UMounteaDialogueViewportWidgetInterface"), &Z_Registration_Info_UClass_UMounteaDialogueViewportWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueViewportWidgetInterface), 1154963876U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueViewportWidgetInterface_h_1073020068(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueViewportWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaDialogueViewportWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
