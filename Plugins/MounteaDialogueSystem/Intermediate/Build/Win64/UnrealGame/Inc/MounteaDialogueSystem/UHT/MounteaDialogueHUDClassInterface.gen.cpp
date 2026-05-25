// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueHUDClassInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueHUDClassInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueHUDClassInterface_NoRegister();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueHUDClassInterface Function AddChildWidgetToViewport
struct MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms
{
	UUserWidget* ChildWidget;
	int32 ZOrder;
	FAnchors WidgetAnchors;
	FMargin WidgetMargin;
};
void IMounteaDialogueHUDClassInterface::AddChildWidgetToViewport(UUserWidget* ChildWidget, const int32 ZOrder, const FAnchors WidgetAnchors, FMargin const& WidgetMargin)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_AddChildWidgetToViewport instead.");
}
static FName NAME_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport = FName(TEXT("AddChildWidgetToViewport"));
void IMounteaDialogueHUDClassInterface::Execute_AddChildWidgetToViewport(UObject* O, UUserWidget* ChildWidget, const int32 ZOrder, const FAnchors WidgetAnchors, FMargin const& WidgetMargin)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueHUDClassInterface::StaticClass()));
	MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport);
	if (Func)
	{
		Parms.ChildWidget=ChildWidget;
		Parms.ZOrder=ZOrder;
		Parms.WidgetAnchors=WidgetAnchors;
		Parms.WidgetMargin=WidgetMargin;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueHUDClassInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueHUDClassInterface::StaticClass())))
	{
		I->AddChildWidgetToViewport_Implementation(ChildWidget,ZOrder,WidgetAnchors,WidgetMargin);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a child widget to the viewport.\n\x09 *\n\x09 * @param ChildWidget        The child widget to be added to the viewport.\n\x09 * @param ZOrder The Z-order index of the child widget, determining its rendering order within the parent\n\x09 * @param WidgetAnchors The anchors for the widget, determining how the widget is positioned relative to its parent\n\x09 * @param WidgetMargin The margin for the widget, defining the padding or offset from the parent's bounds\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a child widget to the viewport.\n\n@param ChildWidget        The child widget to be added to the viewport.\n@param ZOrder The Z-order index of the child widget, determining its rendering order within the parent\n@param WidgetAnchors The anchors for the widget, determining how the widget is positioned relative to its parent\n@param WidgetMargin The margin for the widget, defining the padding or offset from the parent's bounds" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_WidgetAnchors = { "WidgetAnchors", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms, WidgetAnchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetAnchors_MetaData), NewProp_WidgetAnchors_MetaData) }; // 675573533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_WidgetMargin = { "WidgetMargin", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms, WidgetMargin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetMargin_MetaData), NewProp_WidgetMargin_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_ChildWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_WidgetAnchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::NewProp_WidgetMargin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDClassInterface, nullptr, "AddChildWidgetToViewport", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::PropPointers), sizeof(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueHUDClassInterface_eventAddChildWidgetToViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueHUDClassInterface::execAddChildWidgetToViewport)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_GET_PROPERTY(FIntProperty,Z_Param_ZOrder);
	P_GET_STRUCT(FAnchors,Z_Param_WidgetAnchors);
	P_GET_STRUCT_REF(FMargin,Z_Param_Out_WidgetMargin);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->AddChildWidgetToViewport_Implementation(Z_Param_ChildWidget,Z_Param_ZOrder,Z_Param_WidgetAnchors,Z_Param_Out_WidgetMargin);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueHUDClassInterface Function AddChildWidgetToViewport

// Begin Interface UMounteaDialogueHUDClassInterface Function GetViewportBaseClass
struct MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms
{
	TSubclassOf<UUserWidget> ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms()
		: ReturnValue(NULL)
	{
	}
};
TSubclassOf<UUserWidget> IMounteaDialogueHUDClassInterface::GetViewportBaseClass() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewportBaseClass instead.");
	MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueHUDClassInterface_GetViewportBaseClass = FName(TEXT("GetViewportBaseClass"));
TSubclassOf<UUserWidget> IMounteaDialogueHUDClassInterface::Execute_GetViewportBaseClass(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueHUDClassInterface::StaticClass()));
	MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueHUDClassInterface_GetViewportBaseClass);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueHUDClassInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueHUDClassInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetViewportBaseClass_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the base widget class used for the viewport.\n\x09 *\n\x09 * @return                   The subclass of UUserWidget used as the base class for the viewport, or nullptr if an error occurs.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the base widget class used for the viewport.\n\n@return                   The subclass of UUserWidget used as the base class for the viewport, or nullptr if an error occurs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDClassInterface, nullptr, "GetViewportBaseClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::PropPointers), sizeof(MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueHUDClassInterface_eventGetViewportBaseClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueHUDClassInterface::execGetViewportBaseClass)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=P_THIS->GetViewportBaseClass_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueHUDClassInterface Function GetViewportBaseClass

// Begin Interface UMounteaDialogueHUDClassInterface Function GetViewportWidget
struct MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms
{
	UUserWidget* ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms()
		: ReturnValue(NULL)
	{
	}
};
UUserWidget* IMounteaDialogueHUDClassInterface::GetViewportWidget() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetViewportWidget instead.");
	MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueHUDClassInterface_GetViewportWidget = FName(TEXT("GetViewportWidget"));
UUserWidget* IMounteaDialogueHUDClassInterface::Execute_GetViewportWidget(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueHUDClassInterface::StaticClass()));
	MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueHUDClassInterface_GetViewportWidget);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaDialogueHUDClassInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueHUDClassInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetViewportWidget_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the viewport widget.\n\x09 *\n\x09 * @return                   The UUserWidget representing the viewport, or nullptr if the viewport manager does not implement the interface or an error occurs.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the viewport widget.\n\n@return                   The UUserWidget representing the viewport, or nullptr if the viewport manager does not implement the interface or an error occurs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDClassInterface, nullptr, "GetViewportWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::PropPointers), sizeof(MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueHUDClassInterface_eventGetViewportWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueHUDClassInterface::execGetViewportWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=P_THIS->GetViewportWidget_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueHUDClassInterface Function GetViewportWidget

// Begin Interface UMounteaDialogueHUDClassInterface Function InitializeViewportWidget
void IMounteaDialogueHUDClassInterface::InitializeViewportWidget()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_InitializeViewportWidget instead.");
}
static FName NAME_UMounteaDialogueHUDClassInterface_InitializeViewportWidget = FName(TEXT("InitializeViewportWidget"));
void IMounteaDialogueHUDClassInterface::Execute_InitializeViewportWidget(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueHUDClassInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueHUDClassInterface_InitializeViewportWidget);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueHUDClassInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueHUDClassInterface::StaticClass())))
	{
		I->InitializeViewportWidget_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates the viewport widget.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates the viewport widget." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDClassInterface, nullptr, "InitializeViewportWidget", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueHUDClassInterface::execInitializeViewportWidget)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeViewportWidget_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueHUDClassInterface Function InitializeViewportWidget

// Begin Interface UMounteaDialogueHUDClassInterface Function RemoveChildWidgetFromViewport
struct MounteaDialogueHUDClassInterface_eventRemoveChildWidgetFromViewport_Parms
{
	UUserWidget* ChildWidget;
};
void IMounteaDialogueHUDClassInterface::RemoveChildWidgetFromViewport(UUserWidget* ChildWidget)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RemoveChildWidgetFromViewport instead.");
}
static FName NAME_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport = FName(TEXT("RemoveChildWidgetFromViewport"));
void IMounteaDialogueHUDClassInterface::Execute_RemoveChildWidgetFromViewport(UObject* O, UUserWidget* ChildWidget)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueHUDClassInterface::StaticClass()));
	MounteaDialogueHUDClassInterface_eventRemoveChildWidgetFromViewport_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport);
	if (Func)
	{
		Parms.ChildWidget=ChildWidget;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueHUDClassInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueHUDClassInterface::StaticClass())))
	{
		I->RemoveChildWidgetFromViewport_Implementation(ChildWidget);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a child widget from the viewport.\n\x09 *\n\x09 * @param ChildWidget        The child widget to be removed from the viewport.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a child widget from the viewport.\n\n@param ChildWidget        The child widget to be removed from the viewport." },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDClassInterface_eventRemoveChildWidgetFromViewport_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::NewProp_ChildWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDClassInterface, nullptr, "RemoveChildWidgetFromViewport", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::PropPointers), sizeof(MounteaDialogueHUDClassInterface_eventRemoveChildWidgetFromViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueHUDClassInterface_eventRemoveChildWidgetFromViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueHUDClassInterface::execRemoveChildWidgetFromViewport)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RemoveChildWidgetFromViewport_Implementation(Z_Param_ChildWidget);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueHUDClassInterface Function RemoveChildWidgetFromViewport

// Begin Interface UMounteaDialogueHUDClassInterface
void UMounteaDialogueHUDClassInterface::StaticRegisterNativesUMounteaDialogueHUDClassInterface()
{
	UClass* Class = UMounteaDialogueHUDClassInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildWidgetToViewport", &IMounteaDialogueHUDClassInterface::execAddChildWidgetToViewport },
		{ "GetViewportBaseClass", &IMounteaDialogueHUDClassInterface::execGetViewportBaseClass },
		{ "GetViewportWidget", &IMounteaDialogueHUDClassInterface::execGetViewportWidget },
		{ "InitializeViewportWidget", &IMounteaDialogueHUDClassInterface::execInitializeViewportWidget },
		{ "RemoveChildWidgetFromViewport", &IMounteaDialogueHUDClassInterface::execRemoveChildWidgetFromViewport },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueHUDClassInterface);
UClass* Z_Construct_UClass_UMounteaDialogueHUDClassInterface_NoRegister()
{
	return UMounteaDialogueHUDClassInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueHUDClassInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_AddChildWidgetToViewport, "AddChildWidgetToViewport" }, // 2833321365
		{ &Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportBaseClass, "GetViewportBaseClass" }, // 1488854907
		{ &Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_GetViewportWidget, "GetViewportWidget" }, // 4018272288
		{ &Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_InitializeViewportWidget, "InitializeViewportWidget" }, // 4026494020
		{ &Z_Construct_UFunction_UMounteaDialogueHUDClassInterface_RemoveChildWidgetFromViewport, "RemoveChildWidgetFromViewport" }, // 4002741646
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueHUDClassInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::ClassParams = {
	&UMounteaDialogueHUDClassInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueHUDClassInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueHUDClassInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueHUDClassInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueHUDClassInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueHUDClassInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueHUDClassInterface>()
{
	return UMounteaDialogueHUDClassInterface::StaticClass();
}
UMounteaDialogueHUDClassInterface::UMounteaDialogueHUDClassInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueHUDClassInterface);
UMounteaDialogueHUDClassInterface::~UMounteaDialogueHUDClassInterface() {}
// End Interface UMounteaDialogueHUDClassInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueHUDClassInterface, UMounteaDialogueHUDClassInterface::StaticClass, TEXT("UMounteaDialogueHUDClassInterface"), &Z_Registration_Info_UClass_UMounteaDialogueHUDClassInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueHUDClassInterface), 1856856869U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_2680774617(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueHUDClassInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
