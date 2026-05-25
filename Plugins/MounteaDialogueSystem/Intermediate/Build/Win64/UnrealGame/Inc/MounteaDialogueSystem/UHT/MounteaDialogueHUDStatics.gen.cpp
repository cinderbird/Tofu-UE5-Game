// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Helpers/MounteaDialogueHUDStatics.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphDataTypes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueOptionInterface.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaDialogueRowInterface.h"
#include "Runtime/Slate/Public/Widgets/Layout/Anchors.h"
#include "Runtime/SlateCore/Public/Layout/Margin.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueHUDStatics() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FGuid();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueHUDStatics();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueHUDStatics_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueOptionData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRow();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueRowData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetAdditionParams();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FWidgetDialogueRow();
SLATE_API UScriptStruct* Z_Construct_UScriptStruct_FAnchors();
SLATECORE_API UEnum* Z_Construct_UEnum_SlateCore_EUINavigation();
SLATECORE_API UScriptStruct* Z_Construct_UScriptStruct_FMargin();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin ScriptStruct FWidgetAdditionParams
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_WidgetAdditionParams;
class UScriptStruct* FWidgetAdditionParams::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAdditionParams.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_WidgetAdditionParams.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FWidgetAdditionParams, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("WidgetAdditionParams"));
	}
	return Z_Registration_Info_UScriptStruct_WidgetAdditionParams.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FWidgetAdditionParams>()
{
	return FWidgetAdditionParams::StaticStruct();
}
struct Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ZOrder_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Anchors_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Margin_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FIntPropertyParams NewProp_ZOrder;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Anchors;
	static const UECodeGen_Private::FStructPropertyParams NewProp_Margin;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FWidgetAdditionParams>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_ZOrder = { "ZOrder", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAdditionParams, ZOrder), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ZOrder_MetaData), NewProp_ZOrder_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_Anchors = { "Anchors", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAdditionParams, Anchors), Z_Construct_UScriptStruct_FAnchors, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Anchors_MetaData), NewProp_Anchors_MetaData) }; // 675573533
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_Margin = { "Margin", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FWidgetAdditionParams, Margin), Z_Construct_UScriptStruct_FMargin, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Margin_MetaData), NewProp_Margin_MetaData) }; // 2986890016
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_ZOrder,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_Anchors,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewProp_Margin,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"WidgetAdditionParams",
	Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::PropPointers),
	sizeof(FWidgetAdditionParams),
	alignof(FWidgetAdditionParams),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FWidgetAdditionParams()
{
	if (!Z_Registration_Info_UScriptStruct_WidgetAdditionParams.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_WidgetAdditionParams.InnerSingleton, Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_WidgetAdditionParams.InnerSingleton;
}
// End ScriptStruct FWidgetAdditionParams

// Begin Class UMounteaDialogueHUDStatics Function AddChildWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventAddChildWidget_Parms
	{
		UUserWidget* ParentWidget;
		UUserWidget* ChildWidget;
		FWidgetAdditionParams WidgetParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a child widget to the specified parent widget that implements the MounteaDialogueViewportWidgetInterface.\n\x09 *\n\x09 * @param ParentWidget    The parent widget that should implement the MounteaDialogueViewportWidgetInterface.\n\x09 * @param ChildWidget     The child widget to be added.\n\x09 * @param WidgetParams   Contains 3 options:\\n 1. the anchors for the widget, determining how the widget is positioned relative to its parent\\n2. the margin for the widget, defining the padding or offset from the parent's bounds\\n3. The Z-order index of the child widget, determining its rendering order within the parent\n\x09 */" },
#endif
		{ "CPP_Default_WidgetParams", "()" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a child widget to the specified parent widget that implements the MounteaDialogueViewportWidgetInterface.\n\n@param ParentWidget    The parent widget that should implement the MounteaDialogueViewportWidgetInterface.\n@param ChildWidget     The child widget to be added.\n@param WidgetParams   Contains 3 options:\\n 1. the anchors for the widget, determining how the widget is positioned relative to its parent\\n2. the margin for the widget, defining the padding or offset from the parent's bounds\\n3. The Z-order index of the child widget, determining its rendering order within the parent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidget_Parms, ParentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWidget_MetaData), NewProp_ParentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidget_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_WidgetParams = { "WidgetParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidget_Parms, WidgetParams), Z_Construct_UScriptStruct_FWidgetAdditionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetParams_MetaData), NewProp_WidgetParams_MetaData) }; // 2644343608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_ParentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_ChildWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::NewProp_WidgetParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "AddChildWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::MounteaDialogueHUDStatics_eventAddChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::MounteaDialogueHUDStatics_eventAddChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execAddChildWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_GET_STRUCT_REF(FWidgetAdditionParams,Z_Param_Out_WidgetParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::AddChildWidget(Z_Param_ParentWidget,Z_Param_ChildWidget,Z_Param_Out_WidgetParams);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function AddChildWidget

// Begin Class UMounteaDialogueHUDStatics Function AddChildWidgetToViewport
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics
{
	struct MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms
	{
		AActor* ViewportManager;
		UUserWidget* ChildWidget;
		FWidgetAdditionParams WidgetParams;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a child widget to the viewport using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\x09 *\n\x09 * @param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n\x09 * @param ChildWidget        The child widget to be added to the viewport.\n\x09 * @param WidgetParams   Contains 3 options:\\n 1. the anchors for the widget, determining how the widget is positioned relative to its parent\\n2. the margin for the widget, defining the padding or offset from the parent's bounds\\n3. The Z-order index of the child widget, determining its rendering order within the parent\n\x09 */" },
#endif
		{ "CPP_Default_WidgetParams", "()" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a child widget to the viewport using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\n@param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n@param ChildWidget        The child widget to be added to the viewport.\n@param WidgetParams   Contains 3 options:\\n 1. the anchors for the widget, determining how the widget is positioned relative to its parent\\n2. the margin for the widget, defining the padding or offset from the parent's bounds\\n3. The Z-order index of the child widget, determining its rendering order within the parent" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WidgetParams_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_WidgetParams;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_ViewportManager = { "ViewportManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms, ViewportManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_WidgetParams = { "WidgetParams", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms, WidgetParams), Z_Construct_UScriptStruct_FWidgetAdditionParams, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WidgetParams_MetaData), NewProp_WidgetParams_MetaData) }; // 2644343608
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_ViewportManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_ChildWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::NewProp_WidgetParams,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "AddChildWidgetToViewport", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::MounteaDialogueHUDStatics_eventAddChildWidgetToViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execAddChildWidgetToViewport)
{
	P_GET_OBJECT(AActor,Z_Param_ViewportManager);
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_GET_STRUCT_REF(FWidgetAdditionParams,Z_Param_Out_WidgetParams);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::AddChildWidgetToViewport(Z_Param_ViewportManager,Z_Param_ChildWidget,Z_Param_Out_WidgetParams);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function AddChildWidgetToViewport

// Begin Class UMounteaDialogueHUDStatics Function AddNewDialogueOption
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics
{
	struct MounteaDialogueHUDStatics_eventAddNewDialogueOption_Parms
	{
		UObject* ContainerObject;
		UMounteaDialogueGraphNode_DialogueNodeBase* NewDialogueOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds a new dialogue option widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param NewDialogueOption The UUserWidget instance to be added as a new dialogue option.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds a new dialogue option widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param NewDialogueOption The UUserWidget instance to be added as a new dialogue option." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddNewDialogueOption_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::NewProp_NewDialogueOption = { "NewDialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddNewDialogueOption_Parms, NewDialogueOption), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::NewProp_NewDialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "AddNewDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::MounteaDialogueHUDStatics_eventAddNewDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::MounteaDialogueHUDStatics_eventAddNewDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execAddNewDialogueOption)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_NewDialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::AddNewDialogueOption(Z_Param_ContainerObject,Z_Param_NewDialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function AddNewDialogueOption

// Begin Class UMounteaDialogueHUDStatics Function AddNewDialogueOptions
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics
{
	struct MounteaDialogueHUDStatics_eventAddNewDialogueOptions_Parms
	{
		UObject* ContainerObject;
		TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> NewDialogueOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Adds multiple new dialogue option widgets.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param NewDialogueOptions An array of UUserWidget instances to be added as new dialogue options.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Adds multiple new dialogue option widgets.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param NewDialogueOptions An array of UUserWidget instances to be added as new dialogue options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewDialogueOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_NewDialogueOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddNewDialogueOptions_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions_Inner = { "NewDialogueOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions = { "NewDialogueOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventAddNewDialogueOptions_Parms, NewDialogueOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueOptions_MetaData), NewProp_NewDialogueOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::NewProp_NewDialogueOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "AddNewDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::MounteaDialogueHUDStatics_eventAddNewDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::MounteaDialogueHUDStatics_eventAddNewDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execAddNewDialogueOptions)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode_DialogueNodeBase*,Z_Param_Out_NewDialogueOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::AddNewDialogueOptions(Z_Param_ContainerObject,Z_Param_Out_NewDialogueOptions);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function AddNewDialogueOptions

// Begin Class UMounteaDialogueHUDStatics Function ApplyTheme
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics
{
	struct MounteaDialogueHUDStatics_eventApplyTheme_Parms
	{
		UUserWidget* Target;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper function to provide easy way to request Theme update.\n\x09 * Theme logic not provided to abstract the idea from any code.\n\x09 *\n\x09 * @param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to provide easy way to request Theme update.\nTheme logic not provided to abstract the idea from any code.\n\n@param Target    The widget that should implement the MounteaDialogueUIBaseInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventApplyTheme_Parms, Target), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::NewProp_Target,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ApplyTheme", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::MounteaDialogueHUDStatics_eventApplyTheme_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::MounteaDialogueHUDStatics_eventApplyTheme_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execApplyTheme)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ApplyTheme(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ApplyTheme

// Begin Class UMounteaDialogueHUDStatics Function BindEvents
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics
{
	struct MounteaDialogueHUDStatics_eventBindEvents_Parms
	{
		UUserWidget* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide a global way to bind UI events.\n\x09 * \n\x09 * @param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n\x09 * @return Binding result.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide a global way to bind UI events.\n\n@param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n@return Binding result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventBindEvents_Parms, Target), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueHUDStatics_eventBindEvents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueHUDStatics_eventBindEvents_Parms), &Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "BindEvents", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::MounteaDialogueHUDStatics_eventBindEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::MounteaDialogueHUDStatics_eventBindEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execBindEvents)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueHUDStatics::BindEvents(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function BindEvents

// Begin Class UMounteaDialogueHUDStatics Function ClearDialogueOptions
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics
{
	struct MounteaDialogueHUDStatics_eventClearDialogueOptions_Parms
	{
		UObject* ContainerObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Clears all dialogue option widgets.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * Removes all currently stored dialogue options, effectively resetting the container.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Clears all dialogue option widgets.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\nRemoves all currently stored dialogue options, effectively resetting the container." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventClearDialogueOptions_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::NewProp_ContainerObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ClearDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::MounteaDialogueHUDStatics_eventClearDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::MounteaDialogueHUDStatics_eventClearDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execClearDialogueOptions)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ClearDialogueOptions(Z_Param_ContainerObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ClearDialogueOptions

// Begin Class UMounteaDialogueHUDStatics Function EnableTypeWriterEffect
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics
{
	struct MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms
	{
		UObject* RowObject;
		bool bEnable;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Enables or disables the typewriter effect based on the specified parameter.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 * @param bEnable Whether to enable or disable the effect.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables or disables the typewriter effect based on the specified parameter.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n@param bEnable Whether to enable or disable the effect." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static void NewProp_bEnable_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_bEnable_SetBit(void* Obj)
{
	((MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms*)Obj)->bEnable = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_bEnable = { "bEnable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms), &Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_bEnable_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_RowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::NewProp_bEnable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "EnableTypeWriterEffect", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventEnableTypeWriterEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execEnableTypeWriterEffect)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_GET_UBOOL(Z_Param_bEnable);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::EnableTypeWriterEffect(Z_Param_RowObject,Z_Param_bEnable);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function EnableTypeWriterEffect

// Begin Class UMounteaDialogueHUDStatics Function FilterDialogueFriendlyNodes
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics
{
	struct MounteaDialogueHUDStatics_eventFilterDialogueFriendlyNodes_Parms
	{
		TArray<UMounteaDialogueGraphNode*> RawNodes;
		TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Filters an array of dialogue nodes to only include dialogue-friendly nodes.\n\x09 * \n\x09 * @param RawNodes The array of raw dialogue nodes to be filtered.\n\x09 * @return An array of nodes that are classified as dialogue-friendly.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Filters an array of dialogue nodes to only include dialogue-friendly nodes.\n\n@param RawNodes The array of raw dialogue nodes to be filtered.\n@return An array of nodes that are classified as dialogue-friendly." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RawNodes_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RawNodes_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_RawNodes;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_RawNodes_Inner = { "RawNodes", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_RawNodes = { "RawNodes", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventFilterDialogueFriendlyNodes_Parms, RawNodes), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RawNodes_MetaData), NewProp_RawNodes_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventFilterDialogueFriendlyNodes_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_RawNodes_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_RawNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "FilterDialogueFriendlyNodes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::MounteaDialogueHUDStatics_eventFilterDialogueFriendlyNodes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::MounteaDialogueHUDStatics_eventFilterDialogueFriendlyNodes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execFilterDialogueFriendlyNodes)
{
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode*,Z_Param_Out_RawNodes);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UMounteaDialogueGraphNode_DialogueNodeBase*>*)Z_Param__Result=UMounteaDialogueHUDStatics::FilterDialogueFriendlyNodes(Z_Param_Out_RawNodes);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function FilterDialogueFriendlyNodes

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueNodeGuid
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueNodeGuid_Parms
	{
		UMounteaDialogueGraphNode_DialogueNodeBase* FromNode;
		FGuid ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the GUID of a dialogue node.\n\x09 * \n\x09 * @param FromNode The dialogue node from which to retrieve the GUID.\n\x09 * @return The GUID associated with the specified node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the GUID of a dialogue node.\n\n@param FromNode The dialogue node from which to retrieve the GUID.\n@return The GUID associated with the specified node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::NewProp_FromNode = { "FromNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueNodeGuid_Parms, FromNode), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueNodeGuid_Parms, ReturnValue), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::NewProp_FromNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueNodeGuid", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::MounteaDialogueHUDStatics_eventGetDialogueNodeGuid_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::MounteaDialogueHUDStatics_eventGetDialogueNodeGuid_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueNodeGuid)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_FromNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FGuid*)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueNodeGuid(Z_Param_FromNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueNodeGuid

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueNodeRow
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueNodeRow_Parms
	{
		UMounteaDialogueGraphNode_DialogueNodeBase* FromNode;
		FDialogueRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the dialogue row associated with a specific node.\n\x09 * \n\x09 * @param FromNode The dialogue node from which to retrieve the row.\n\x09 * @return The dialogue row associated with the specified node.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the dialogue row associated with a specific node.\n\n@param FromNode The dialogue node from which to retrieve the row.\n@return The dialogue row associated with the specified node." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_FromNode;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::NewProp_FromNode = { "FromNode", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueNodeRow_Parms, FromNode), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueNodeRow_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3048168484
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::NewProp_FromNode,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueNodeRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::MounteaDialogueHUDStatics_eventGetDialogueNodeRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::MounteaDialogueHUDStatics_eventGetDialogueNodeRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueNodeRow)
{
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_FromNode);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueRow*)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueNodeRow(Z_Param_FromNode);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueNodeRow

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueOptionClass
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueOptionClass_Parms
	{
		UObject* ContainerObject;
		TSoftClassPtr<UUserWidget>  ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the class type of the dialogue option widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @return A soft class pointer to the UUserWidget that represents the dialogue option.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the class type of the dialogue option widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@return A soft class pointer to the UUserWidget that represents the dialogue option." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptionClass_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptionClass_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueOptionClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptionClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptionClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueOptionClass)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSoftClassPtr<UUserWidget> *)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueOptionClass(Z_Param_ContainerObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueOptionClass

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueOptionData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueOptionData_Parms
	{
		UObject* DialogueOption;
		FDialogueOptionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the current dialogue option data.\n\x09 *\n\x09 * @param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n\x09 * @return The current dialogue option data.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the current dialogue option data.\n\n@param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n@return The current dialogue option data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::NewProp_DialogueOption = { "DialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptionData_Parms, DialogueOption), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(0, nullptr) }; // 3746218195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::NewProp_DialogueOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueOptionData)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueOptionData*)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueOptionData(Z_Param_DialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueOptionData

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueOptions
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueOptions_Parms
	{
		UObject* ContainerObject;
		TArray<UUserWidget*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns all Dialogue Options from the specified Dialogue Options Container parent widget that implements the MounteaDialogueOptionsContainerInterface.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns all Dialogue Options from the specified Dialogue Options Container parent widget that implements the MounteaDialogueOptionsContainerInterface.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptions_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000080008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010008000000588, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueOptions_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::MounteaDialogueHUDStatics_eventGetDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueOptions)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UUserWidget*>*)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueOptions(Z_Param_ContainerObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueOptions

// Begin Class UMounteaDialogueHUDStatics Function GetDialogueWidgetRowData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics
{
	struct MounteaDialogueHUDStatics_eventGetDialogueWidgetRowData_Parms
	{
		UObject* RowObject;
		FWidgetDialogueRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the dialogue row data associated with the widget.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 * @return FWidgetDialogueRow containing the dialogue row data.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the dialogue row data associated with the widget.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n@return FWidgetDialogueRow containing the dialogue row data." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueWidgetRowData_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetDialogueWidgetRowData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3704941342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::NewProp_RowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetDialogueWidgetRowData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::MounteaDialogueHUDStatics_eventGetDialogueWidgetRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::MounteaDialogueHUDStatics_eventGetDialogueWidgetRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetDialogueWidgetRowData)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWidgetDialogueRow*)Z_Param__Result=UMounteaDialogueHUDStatics::GetDialogueWidgetRowData(Z_Param_RowObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetDialogueWidgetRowData

// Begin Class UMounteaDialogueHUDStatics Function GetFocusedOptionIndex
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics
{
	struct MounteaDialogueHUDStatics_eventGetFocusedOptionIndex_Parms
	{
		UObject* ContainerObject;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Gets focused option. If options are empty then -1 is returned.\n\x09 *\x09\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @return Index of currently focused Option\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets focused option. If options are empty then -1 is returned.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@return Index of currently focused Option" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetFocusedOptionIndex_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetFocusedOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetFocusedOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetFocusedOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetFocusedOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetFocusedOptionIndex)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMounteaDialogueHUDStatics::GetFocusedOptionIndex(Z_Param_ContainerObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetFocusedOptionIndex

// Begin Class UMounteaDialogueHUDStatics Function GetFocusState
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics
{
	struct MounteaDialogueHUDStatics_eventGetFocusState_Parms
	{
		UUserWidget* Widget;
		EDialogueOptionState ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetFocusState_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetFocusState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState, METADATA_PARAMS(0, nullptr) }; // 1653604931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetFocusState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::MounteaDialogueHUDStatics_eventGetFocusState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::MounteaDialogueHUDStatics_eventGetFocusState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetFocusState)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueOptionState*)Z_Param__Result=UMounteaDialogueHUDStatics::GetFocusState(Z_Param_Widget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetFocusState

// Begin Class UMounteaDialogueHUDStatics Function GetOptionIndex
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics
{
	struct MounteaDialogueHUDStatics_eventGetOptionIndex_Parms
	{
		UObject* ContainerObject;
		const UUserWidget* OptionWidget;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionWidget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionWidget;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetOptionIndex_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_OptionWidget = { "OptionWidget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetOptionIndex_Parms, OptionWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionWidget_MetaData), NewProp_OptionWidget_MetaData) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_OptionWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetOptionIndex)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_OBJECT(UUserWidget,Z_Param_OptionWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMounteaDialogueHUDStatics::GetOptionIndex(Z_Param_ContainerObject,Z_Param_OptionWidget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetOptionIndex

// Begin Class UMounteaDialogueHUDStatics Function GetParentDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventGetParentDialogueWidget_Parms
	{
		UObject* ContainerObject;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the parent dialogue widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @return A UUserWidget instance that serves as the parent dialogue widget.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the parent dialogue widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@return A UUserWidget instance that serves as the parent dialogue widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetParentDialogueWidget_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetParentDialogueWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetParentDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::MounteaDialogueHUDStatics_eventGetParentDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::MounteaDialogueHUDStatics_eventGetParentDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetParentDialogueWidget)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UMounteaDialogueHUDStatics::GetParentDialogueWidget(Z_Param_ContainerObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetParentDialogueWidget

// Begin Class UMounteaDialogueHUDStatics Function GetSafeOptionIndex
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics
{
	struct MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms
	{
		UObject* Container;
		EUINavigation Direction;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Direction_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Container;
	static const UECodeGen_Private::FBytePropertyParams NewProp_Direction_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_Direction;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Container = { "Container", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms, Container), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Direction_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Direction = { "Direction", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms, Direction), Z_Construct_UEnum_SlateCore_EUINavigation, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Direction_MetaData), NewProp_Direction_MetaData) }; // 2993106650
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Container,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Direction_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_Direction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetSafeOptionIndex", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::MounteaDialogueHUDStatics_eventGetSafeOptionIndex_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetSafeOptionIndex)
{
	P_GET_OBJECT(UObject,Z_Param_Container);
	P_GET_ENUM(EUINavigation,Z_Param_Direction);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMounteaDialogueHUDStatics::GetSafeOptionIndex(Z_Param_Container,EUINavigation(Z_Param_Direction));
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetSafeOptionIndex

// Begin Class UMounteaDialogueHUDStatics Function GetViewportBaseClass
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics
{
	struct MounteaDialogueHUDStatics_eventGetViewportBaseClass_Parms
	{
		AActor* ViewportManager;
		TSubclassOf<UUserWidget> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the base widget class used for the viewport from the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\x09 *\n\x09 * @param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n\x09 * @return                   The subclass of UUserWidget used as the base class for the viewport, or nullptr if an error occurs.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the base widget class used for the viewport from the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\n@param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n@return                   The subclass of UUserWidget used as the base class for the viewport, or nullptr if an error occurs." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportManager;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::NewProp_ViewportManager = { "ViewportManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetViewportBaseClass_Parms, ViewportManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetViewportBaseClass_Parms, ReturnValue), Z_Construct_UClass_UClass, Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::NewProp_ViewportManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetViewportBaseClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::MounteaDialogueHUDStatics_eventGetViewportBaseClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::MounteaDialogueHUDStatics_eventGetViewportBaseClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetViewportBaseClass)
{
	P_GET_OBJECT(AActor,Z_Param_ViewportManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSubclassOf<UUserWidget>*)Z_Param__Result=UMounteaDialogueHUDStatics::GetViewportBaseClass(Z_Param_ViewportManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetViewportBaseClass

// Begin Class UMounteaDialogueHUDStatics Function GetViewportWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventGetViewportWidget_Parms
	{
		AActor* ViewportManager;
		UUserWidget* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Retrieves the viewport widget from the specified viewport manager that implements the MounteaDialogueHUDClassInterface.\n\x09 *\n\x09 * @param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n\x09 * @return                   The UUserWidget representing the viewport, or nullptr if the viewport manager does not implement the interface or an error occurs.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Retrieves the viewport widget from the specified viewport manager that implements the MounteaDialogueHUDClassInterface.\n\n@param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n@return                   The UUserWidget representing the viewport, or nullptr if the viewport manager does not implement the interface or an error occurs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::NewProp_ViewportManager = { "ViewportManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetViewportWidget_Parms, ViewportManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000080588, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetViewportWidget_Parms, ReturnValue), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ReturnValue_MetaData), NewProp_ReturnValue_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::NewProp_ViewportManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetViewportWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::MounteaDialogueHUDStatics_eventGetViewportWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::MounteaDialogueHUDStatics_eventGetViewportWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetViewportWidget)
{
	P_GET_OBJECT(AActor,Z_Param_ViewportManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UUserWidget**)Z_Param__Result=UMounteaDialogueHUDStatics::GetViewportWidget(Z_Param_ViewportManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetViewportWidget

// Begin Class UMounteaDialogueHUDStatics Function GetWidgetZOrder
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics
{
	struct MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms
	{
		UUserWidget* Widget;
		UObject* WorldContext;
		int32 ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Gets the Z-order of the specified widget within the viewport or its parent container.\n\x09 *\n\x09 * @param Widget         The widget for which to retrieve the Z-order.\n\x09 * @param WorldContext   The context object for the current world, typically passed in for blueprint purposes.\n\x09 * @return               The Z-order of the widget, or -1 if the widget is not found or an error occurs.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Gets the Z-order of the specified widget within the viewport or its parent container.\n\n@param Widget         The widget for which to retrieve the Z-order.\n@param WorldContext   The context object for the current world, typically passed in for blueprint purposes.\n@return               The Z-order of the widget, or -1 if the widget is not found or an error occurs." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_WorldContext;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_WorldContext = { "WorldContext", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms, WorldContext), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_WorldContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "GetWidgetZOrder", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::MounteaDialogueHUDStatics_eventGetWidgetZOrder_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execGetWidgetZOrder)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_OBJECT(UObject,Z_Param_WorldContext);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(int32*)Z_Param__Result=UMounteaDialogueHUDStatics::GetWidgetZOrder(Z_Param_Widget,Z_Param_WorldContext);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function GetWidgetZOrder

// Begin Class UMounteaDialogueHUDStatics Function InitializeDialogueOption
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics
{
	struct MounteaDialogueHUDStatics_eventInitializeDialogueOption_Parms
	{
		UObject* DialogueOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Responsible for setting visual data from Dialogue Option data.\n\x09 *\n\x09 * @param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Responsible for setting visual data from Dialogue Option data.\n\n@param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::NewProp_DialogueOption = { "DialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventInitializeDialogueOption_Parms, DialogueOption), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::NewProp_DialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "InitializeDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::MounteaDialogueHUDStatics_eventInitializeDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::MounteaDialogueHUDStatics_eventInitializeDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execInitializeDialogueOption)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::InitializeDialogueOption(Z_Param_DialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function InitializeDialogueOption

// Begin Class UMounteaDialogueHUDStatics Function InitializeViewportWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventInitializeViewportWidget_Parms
	{
		AActor* ViewportManager;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the viewport widget using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\x09 *\n\x09 * @param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the viewport widget using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\n@param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::NewProp_ViewportManager = { "ViewportManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventInitializeViewportWidget_Parms, ViewportManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::NewProp_ViewportManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "InitializeViewportWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::MounteaDialogueHUDStatics_eventInitializeViewportWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::MounteaDialogueHUDStatics_eventInitializeViewportWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execInitializeViewportWidget)
{
	P_GET_OBJECT(AActor,Z_Param_ViewportManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::InitializeViewportWidget(Z_Param_ViewportManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function InitializeViewportWidget

// Begin Class UMounteaDialogueHUDStatics Function InitializeWidgetDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics
{
	struct MounteaDialogueHUDStatics_eventInitializeWidgetDialogueRow_Parms
	{
		UObject* RowObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the widget's dialogue row data.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the widget's dialogue row data.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventInitializeWidgetDialogueRow_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::NewProp_RowObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "InitializeWidgetDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::MounteaDialogueHUDStatics_eventInitializeWidgetDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::MounteaDialogueHUDStatics_eventInitializeWidgetDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execInitializeWidgetDialogueRow)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::InitializeWidgetDialogueRow(Z_Param_RowObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function InitializeWidgetDialogueRow

// Begin Class UMounteaDialogueHUDStatics Function NewDialogueOptionData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics
{
	struct MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms
	{
		FGuid Node;
		FDialogueRow DialogueRow;
		FDialogueOptionData ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a new dialogue option data structure.\n\x09 * \n\x09 * @param Node The GUID of the dialogue node for which the option is created.\n\x09 * @param DialogueRow The row data associated with the dialogue node.\n\x09 * @return A new `FDialogueOptionData` structure containing the node and row data.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new dialogue option data structure.\n\n@param Node The GUID of the dialogue node for which the option is created.\n@param DialogueRow The row data associated with the dialogue node.\n@return A new `FDialogueOptionData` structure containing the node and row data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Node_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_Node;
	static const UECodeGen_Private::FStructPropertyParams NewProp_DialogueRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_Node = { "Node", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms, Node), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Node_MetaData), NewProp_Node_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_DialogueRow = { "DialogueRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms, DialogueRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueRow_MetaData), NewProp_DialogueRow_MetaData) }; // 3048168484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms, ReturnValue), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(0, nullptr) }; // 3746218195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_Node,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_DialogueRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "NewDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventNewDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execNewDialogueOptionData)
{
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_Node);
	P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_DialogueRow);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FDialogueOptionData*)Z_Param__Result=UMounteaDialogueHUDStatics::NewDialogueOptionData(Z_Param_Out_Node,Z_Param_Out_DialogueRow);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function NewDialogueOptionData

// Begin Class UMounteaDialogueHUDStatics Function NewDialogueWidgetRowData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics
{
	struct MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms
	{
		FDialogueRow SourceRow;
		FDialogueRowData SourceRowData;
		FWidgetDialogueRow ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Creates a new dialogue widget row data structure.\n\x09 * \n\x09 * @param SourceRow The source row from which to create the widget data.\n\x09 * @param SourceRowData Additional data associated with the source row.\n\x09 * @return A new `FWidgetDialogueRow` structure containing the source row and its data.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Creates a new dialogue widget row data structure.\n\n@param SourceRow The source row from which to create the widget data.\n@param SourceRowData Additional data associated with the source row.\n@return A new `FWidgetDialogueRow` structure containing the source row and its data." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRow_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceRowData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRow;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SourceRowData;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_SourceRow = { "SourceRow", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms, SourceRow), Z_Construct_UScriptStruct_FDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRow_MetaData), NewProp_SourceRow_MetaData) }; // 3048168484
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_SourceRowData = { "SourceRowData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms, SourceRowData), Z_Construct_UScriptStruct_FDialogueRowData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceRowData_MetaData), NewProp_SourceRowData_MetaData) }; // 4030428912
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms, ReturnValue), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(0, nullptr) }; // 3704941342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_SourceRow,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_SourceRowData,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "NewDialogueWidgetRowData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x14422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::MounteaDialogueHUDStatics_eventNewDialogueWidgetRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execNewDialogueWidgetRowData)
{
	P_GET_STRUCT_REF(FDialogueRow,Z_Param_Out_SourceRow);
	P_GET_STRUCT_REF(FDialogueRowData,Z_Param_Out_SourceRowData);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FWidgetDialogueRow*)Z_Param__Result=UMounteaDialogueHUDStatics::NewDialogueWidgetRowData(Z_Param_Out_SourceRow,Z_Param_Out_SourceRowData);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function NewDialogueWidgetRowData

// Begin Class UMounteaDialogueHUDStatics Function OnOptionSelected
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics
{
	struct MounteaDialogueHUDStatics_eventOnOptionSelected_Parms
	{
		UObject* Target;
		FGuid SelectionGUID;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Called when an option has been selected.\n\x09 *\n\x09 * @param Target    The widget that should implement the MounteaDialogueWBPInterface. Usually Widget Blueprint.\n\x09 * @param SelectionGUID The GUID of the selected option.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Called when an option has been selected.\n\n@param Target    The widget that should implement the MounteaDialogueWBPInterface. Usually Widget Blueprint.\n@param SelectionGUID The GUID of the selected option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectionGUID_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectionGUID;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventOnOptionSelected_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::NewProp_SelectionGUID = { "SelectionGUID", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventOnOptionSelected_Parms, SelectionGUID), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectionGUID_MetaData), NewProp_SelectionGUID_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::NewProp_SelectionGUID,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "OnOptionSelected", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::MounteaDialogueHUDStatics_eventOnOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::MounteaDialogueHUDStatics_eventOnOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execOnOptionSelected)
{
	P_GET_OBJECT(UObject,Z_Param_Target);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SelectionGUID);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::OnOptionSelected(Z_Param_Target,Z_Param_Out_SelectionGUID);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function OnOptionSelected

// Begin Class UMounteaDialogueHUDStatics Function ProcessContainerOptionSelected
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics
{
	struct MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms
	{
		UObject* ContainerObject;
		FGuid SelectedOption;
		UUserWidget* CallingWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the selected option.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param SelectedOption The selected option's identifier.\n\x09 * @param CallingWidget The widget that triggered the selection process.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the selected option.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param SelectedOption The selected option's identifier.\n@param CallingWidget The widget that triggered the selection process." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SelectedOption_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CallingWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_SelectedOption;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CallingWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_SelectedOption = { "SelectedOption", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms, SelectedOption), Z_Construct_UScriptStruct_FGuid, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SelectedOption_MetaData), NewProp_SelectedOption_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_CallingWidget = { "CallingWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms, CallingWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CallingWidget_MetaData), NewProp_CallingWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_SelectedOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::NewProp_CallingWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ProcessContainerOptionSelected", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::MounteaDialogueHUDStatics_eventProcessContainerOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execProcessContainerOptionSelected)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_STRUCT_REF(FGuid,Z_Param_Out_SelectedOption);
	P_GET_OBJECT(UUserWidget,Z_Param_CallingWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ProcessContainerOptionSelected(Z_Param_ContainerObject,Z_Param_Out_SelectedOption,Z_Param_CallingWidget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ProcessContainerOptionSelected

// Begin Class UMounteaDialogueHUDStatics Function ProcessOptionSelected
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics
{
	struct MounteaDialogueHUDStatics_eventProcessOptionSelected_Parms
	{
		UObject* DialogueOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Processes the event of a dialogue option being selected.\n\x09 *\n\x09 * @param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Processes the event of a dialogue option being selected.\n\n@param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::NewProp_DialogueOption = { "DialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessOptionSelected_Parms, DialogueOption), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::NewProp_DialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ProcessOptionSelected", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::MounteaDialogueHUDStatics_eventProcessOptionSelected_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::MounteaDialogueHUDStatics_eventProcessOptionSelected_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execProcessOptionSelected)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ProcessOptionSelected(Z_Param_DialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ProcessOptionSelected

// Begin Class UMounteaDialogueHUDStatics Function ProcessStringCommand
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics
{
	struct MounteaDialogueHUDStatics_eventProcessStringCommand_Parms
	{
		UUserWidget* Target;
		FString Command;
		UObject* OptionalPayload;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide easy way of sending commands around without need of binding.\n\x09 * \n\x09 * @param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n\x09 * @param Command\x09\x09\x09\x09Required string command to drive inner logic.\n\x09 * @param OptionalPayload\x09Optional payload which can contain data for command.\n\x09 */" },
#endif
		{ "CPP_Default_OptionalPayload", "None" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide easy way of sending commands around without need of binding.\n\n@param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n@param Command                               Required string command to drive inner logic.\n@param OptionalPayload       Optional payload which can contain data for command." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessStringCommand_Parms, Target), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessStringCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_OptionalPayload = { "OptionalPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventProcessStringCommand_Parms, OptionalPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::NewProp_OptionalPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ProcessStringCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::MounteaDialogueHUDStatics_eventProcessStringCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::MounteaDialogueHUDStatics_eventProcessStringCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execProcessStringCommand)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Target);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_OBJECT(UObject,Z_Param_OptionalPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ProcessStringCommand(Z_Param_Target,Z_Param_Command,Z_Param_OptionalPayload);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ProcessStringCommand

// Begin Class UMounteaDialogueHUDStatics Function RefreshDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms
	{
		UObject* Target;
		TScriptInterface<IMounteaDialogueManagerInterface> DialogueManager;
		FString Command;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * This event should be called when you want to refresh UI data.\n\x09 *\n\x09 * @param Target    The widget that should implement the MounteaDialogueWBPInterface. Usually Widget Blueprint.\n\x09 * @param DialogueManager\x09""Dialogue Manager Interface reference. Request 'GetDialogueContext' to retrieve data to display.\n\x09 * @param Command\x09\x09\x09String command. All commands are defined in ProjectSettings/MounteaFramework/MounteaDialogueSystem.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "This event should be called when you want to refresh UI data.\n\n@param Target    The widget that should implement the MounteaDialogueWBPInterface. Usually Widget Blueprint.\n@param DialogueManager       Dialogue Manager Interface reference. Request 'GetDialogueContext' to retrieve data to display.\n@param Command                       String command. All commands are defined in ProjectSettings/MounteaFramework/MounteaDialogueSystem." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueManager_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_DialogueManager;
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms, Target), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_DialogueManager = { "DialogueManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms, DialogueManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueManager_MetaData), NewProp_DialogueManager_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_DialogueManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::NewProp_Command,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RefreshDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::MounteaDialogueHUDStatics_eventRefreshDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRefreshDialogueWidget)
{
	P_GET_OBJECT(UObject,Z_Param_Target);
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_DialogueManager);
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RefreshDialogueWidget(Z_Param_Target,Z_Param_Out_DialogueManager,Z_Param_Command);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RefreshDialogueWidget

// Begin Class UMounteaDialogueHUDStatics Function RemoveChildWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventRemoveChildWidget_Parms
	{
		UUserWidget* ParentWidget;
		UUserWidget* ChildWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a child widget from the specified parent widget that implements the MounteaDialogueViewportWidgetInterface.\n\x09 *\n\x09 * @param ParentWidget    The parent widget that should implement the MounteaDialogueViewportWidgetInterface.\n\x09 * @param ChildWidget     The child widget to be removed.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a child widget from the specified parent widget that implements the MounteaDialogueViewportWidgetInterface.\n\n@param ParentWidget    The parent widget that should implement the MounteaDialogueViewportWidgetInterface.\n@param ChildWidget     The child widget to be removed." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentWidget;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::NewProp_ParentWidget = { "ParentWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveChildWidget_Parms, ParentWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentWidget_MetaData), NewProp_ParentWidget_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveChildWidget_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::NewProp_ParentWidget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::NewProp_ChildWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RemoveChildWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::MounteaDialogueHUDStatics_eventRemoveChildWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::MounteaDialogueHUDStatics_eventRemoveChildWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRemoveChildWidget)
{
	P_GET_OBJECT(UUserWidget,Z_Param_ParentWidget);
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RemoveChildWidget(Z_Param_ParentWidget,Z_Param_ChildWidget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RemoveChildWidget

// Begin Class UMounteaDialogueHUDStatics Function RemoveChildWidgetFromViewport
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics
{
	struct MounteaDialogueHUDStatics_eventRemoveChildWidgetFromViewport_Parms
	{
		AActor* ViewportManager;
		UUserWidget* ChildWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|HUD|Viewport" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a child widget from the viewport using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\x09 *\n\x09 * @param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n\x09 * @param ChildWidget        The child widget to be removed from the viewport.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a child widget from the viewport using the specified viewport manager that implements MounteaDialogueHUDClassInterface.\n\n@param ViewportManager    The viewport manager, an actor that implements the MounteaDialogueHUDClassInterface.\n@param ChildWidget        The child widget to be removed from the viewport." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ChildWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ViewportManager;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ChildWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::NewProp_ViewportManager = { "ViewportManager", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveChildWidgetFromViewport_Parms, ViewportManager), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::NewProp_ChildWidget = { "ChildWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveChildWidgetFromViewport_Parms, ChildWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ChildWidget_MetaData), NewProp_ChildWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::NewProp_ViewportManager,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::NewProp_ChildWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RemoveChildWidgetFromViewport", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::MounteaDialogueHUDStatics_eventRemoveChildWidgetFromViewport_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::MounteaDialogueHUDStatics_eventRemoveChildWidgetFromViewport_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRemoveChildWidgetFromViewport)
{
	P_GET_OBJECT(AActor,Z_Param_ViewportManager);
	P_GET_OBJECT(UUserWidget,Z_Param_ChildWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RemoveChildWidgetFromViewport(Z_Param_ViewportManager,Z_Param_ChildWidget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RemoveChildWidgetFromViewport

// Begin Class UMounteaDialogueHUDStatics Function RemoveDialogueOption
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics
{
	struct MounteaDialogueHUDStatics_eventRemoveDialogueOption_Parms
	{
		UObject* ContainerObject;
		UMounteaDialogueGraphNode_DialogueNodeBase* DirtyDialogueOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes a specific dialogue option widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param DirtyDialogueOption The UUserWidget instance to be removed from the dialogue options.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes a specific dialogue option widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param DirtyDialogueOption The UUserWidget instance to be removed from the dialogue options." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirtyDialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveDialogueOption_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::NewProp_DirtyDialogueOption = { "DirtyDialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveDialogueOption_Parms, DirtyDialogueOption), Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::NewProp_DirtyDialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RemoveDialogueOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::MounteaDialogueHUDStatics_eventRemoveDialogueOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::MounteaDialogueHUDStatics_eventRemoveDialogueOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRemoveDialogueOption)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_OBJECT(UMounteaDialogueGraphNode_DialogueNodeBase,Z_Param_DirtyDialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RemoveDialogueOption(Z_Param_ContainerObject,Z_Param_DirtyDialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RemoveDialogueOption

// Begin Class UMounteaDialogueHUDStatics Function RemoveDialogueOptions
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics
{
	struct MounteaDialogueHUDStatics_eventRemoveDialogueOptions_Parms
	{
		UObject* ContainerObject;
		TArray<UMounteaDialogueGraphNode_DialogueNodeBase*> DirtyDialogueOptions;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Removes multiple dialogue option widgets.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param DirtyDialogueOptions An array of UUserWidget instances to be removed from the dialogue options.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Removes multiple dialogue option widgets.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param DirtyDialogueOptions An array of UUserWidget instances to be removed from the dialogue options." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DirtyDialogueOptions_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DirtyDialogueOptions_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_DirtyDialogueOptions;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveDialogueOptions_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions_Inner = { "DirtyDialogueOptions", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions = { "DirtyDialogueOptions", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRemoveDialogueOptions_Parms, DirtyDialogueOptions), EArrayPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DirtyDialogueOptions_MetaData), NewProp_DirtyDialogueOptions_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::NewProp_DirtyDialogueOptions,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RemoveDialogueOptions", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::MounteaDialogueHUDStatics_eventRemoveDialogueOptions_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::MounteaDialogueHUDStatics_eventRemoveDialogueOptions_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRemoveDialogueOptions)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_TARRAY_REF(UMounteaDialogueGraphNode_DialogueNodeBase*,Z_Param_Out_DirtyDialogueOptions);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RemoveDialogueOptions(Z_Param_ContainerObject,Z_Param_Out_DirtyDialogueOptions);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RemoveDialogueOptions

// Begin Class UMounteaDialogueHUDStatics Function ReplaceRegexInText
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics
{
	struct MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms
	{
		FString Regex;
		FText Replacement;
		FText SourceText;
		FText ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Replaces text in a source string using a regular expression.\n\x09 * \n\x09 * @param Regex The regular expression pattern to search for in the source text.\n\x09 * @param Replacement The text to replace the matched pattern.\n\x09 * @param SourceText The original text where the replacement will occur.\n\x09 * @return The modified text with the replacements applied.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Replaces text in a source string using a regular expression.\n\n@param Regex The regular expression pattern to search for in the source text.\n@param Replacement The text to replace the matched pattern.\n@param SourceText The original text where the replacement will occur.\n@return The modified text with the replacements applied." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Regex_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Replacement_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Regex;
	static const UECodeGen_Private::FTextPropertyParams NewProp_Replacement;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_Regex = { "Regex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms, Regex), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Regex_MetaData), NewProp_Regex_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_Replacement = { "Replacement", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms, Replacement), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Replacement_MetaData), NewProp_Replacement_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_Regex,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_Replacement,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_SourceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ReplaceRegexInText", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::MounteaDialogueHUDStatics_eventReplaceRegexInText_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execReplaceRegexInText)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Regex);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_Replacement);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SourceText);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=UMounteaDialogueHUDStatics::ReplaceRegexInText(Z_Param_Regex,Z_Param_Out_Replacement,Z_Param_Out_SourceText);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ReplaceRegexInText

// Begin Class UMounteaDialogueHUDStatics Function RequestHideWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventRequestHideWidget_Parms
	{
		UObject* SkipObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Skip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the widget to hide with a fade-out effect.\n\x09 *\n\x09 * @param SkipObject The object that should implement the MounteaDialogueSkipInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the widget to hide with a fade-out effect.\n\n@param SkipObject The object that should implement the MounteaDialogueSkipInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkipObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::NewProp_SkipObject = { "SkipObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRequestHideWidget_Parms, SkipObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::NewProp_SkipObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RequestHideWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::MounteaDialogueHUDStatics_eventRequestHideWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::MounteaDialogueHUDStatics_eventRequestHideWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRequestHideWidget)
{
	P_GET_OBJECT(UObject,Z_Param_SkipObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RequestHideWidget(Z_Param_SkipObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RequestHideWidget

// Begin Class UMounteaDialogueHUDStatics Function RequestShowWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventRequestShowWidget_Parms
	{
		UObject* SkipObject;
		FVector2D FadeProgressDuration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Skip" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Requests the widget to show with a fade-in effect.\n\x09 *\n\x09 * @param SkipObject The object that should implement the MounteaDialogueSkipInterface. Usually Widget Blueprint.\n\x09 * @param FadeProgressDuration A vector specifying the fade-in progress duration for the widget.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Requests the widget to show with a fade-in effect.\n\n@param SkipObject The object that should implement the MounteaDialogueSkipInterface. Usually Widget Blueprint.\n@param FadeProgressDuration A vector specifying the fade-in progress duration for the widget." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FadeProgressDuration_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkipObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_FadeProgressDuration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::NewProp_SkipObject = { "SkipObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRequestShowWidget_Parms, SkipObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::NewProp_FadeProgressDuration = { "FadeProgressDuration", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventRequestShowWidget_Parms, FadeProgressDuration), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FadeProgressDuration_MetaData), NewProp_FadeProgressDuration_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::NewProp_SkipObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::NewProp_FadeProgressDuration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "RequestShowWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::MounteaDialogueHUDStatics_eventRequestShowWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::MounteaDialogueHUDStatics_eventRequestShowWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execRequestShowWidget)
{
	P_GET_OBJECT(UObject,Z_Param_SkipObject);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_FadeProgressDuration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::RequestShowWidget(Z_Param_SkipObject,Z_Param_Out_FadeProgressDuration);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function RequestShowWidget

// Begin Class UMounteaDialogueHUDStatics Function ResetDialogueOptionData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics
{
	struct MounteaDialogueHUDStatics_eventResetDialogueOptionData_Parms
	{
		UObject* DialogueOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the dialogue option data to its default state.\n\x09 *\n\x09 * @param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the dialogue option data to its default state.\n\n@param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::NewProp_DialogueOption = { "DialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventResetDialogueOptionData_Parms, DialogueOption), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::NewProp_DialogueOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ResetDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventResetDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventResetDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execResetDialogueOptionData)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ResetDialogueOptionData(Z_Param_DialogueOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ResetDialogueOptionData

// Begin Class UMounteaDialogueHUDStatics Function ResetWidgetDialogueRow
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics
{
	struct MounteaDialogueHUDStatics_eventResetWidgetDialogueRow_Parms
	{
		UObject* RowObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Resets the widget's dialogue row data to the default state.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Resets the widget's dialogue row data to the default state.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventResetWidgetDialogueRow_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::NewProp_RowObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ResetWidgetDialogueRow", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::MounteaDialogueHUDStatics_eventResetWidgetDialogueRow_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::MounteaDialogueHUDStatics_eventResetWidgetDialogueRow_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execResetWidgetDialogueRow)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ResetWidgetDialogueRow(Z_Param_RowObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ResetWidgetDialogueRow

// Begin Class UMounteaDialogueHUDStatics Function SetDialogueOptionClass
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics
{
	struct MounteaDialogueHUDStatics_eventSetDialogueOptionClass_Parms
	{
		UObject* ContainerObject;
		TSoftClassPtr<UUserWidget>  NewDialogueOptionClass;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the class type of the dialogue option widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param NewDialogueOptionClass A soft class pointer to the new UUserWidget class to be used for dialogue options.\n\x09 * The class must implement the MounteaDialogueOptionInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the class type of the dialogue option widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param NewDialogueOptionClass A soft class pointer to the new UUserWidget class to be used for dialogue options.\nThe class must implement the MounteaDialogueOptionInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewDialogueOptionClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_NewDialogueOptionClass;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetDialogueOptionClass_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::NewProp_NewDialogueOptionClass = { "NewDialogueOptionClass", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetDialogueOptionClass_Parms, NewDialogueOptionClass), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewDialogueOptionClass_MetaData), NewProp_NewDialogueOptionClass_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::NewProp_NewDialogueOptionClass,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetDialogueOptionClass", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::MounteaDialogueHUDStatics_eventSetDialogueOptionClass_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::MounteaDialogueHUDStatics_eventSetDialogueOptionClass_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetDialogueOptionClass)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_SOFTCLASS_REF(TSoftClassPtr<UUserWidget> ,Z_Param_Out_NewDialogueOptionClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetDialogueOptionClass(Z_Param_ContainerObject,Z_Param_Out_NewDialogueOptionClass);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetDialogueOptionClass

// Begin Class UMounteaDialogueHUDStatics Function SetFocusedOption
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics
{
	struct MounteaDialogueHUDStatics_eventSetFocusedOption_Parms
	{
		UObject* ContainerObject;
		int32 NewFocusedOption;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Set focus to new Option.\n\x09 *\x09\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param NewFocusedOption Index of newly focused Option.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Set focus to new Option.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param NewFocusedOption Index of newly focused Option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewFocusedOption_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FIntPropertyParams NewProp_NewFocusedOption;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetFocusedOption_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::NewProp_NewFocusedOption = { "NewFocusedOption", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetFocusedOption_Parms, NewFocusedOption), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewFocusedOption_MetaData), NewProp_NewFocusedOption_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::NewProp_NewFocusedOption,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetFocusedOption", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::MounteaDialogueHUDStatics_eventSetFocusedOption_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::MounteaDialogueHUDStatics_eventSetFocusedOption_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetFocusedOption)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_PROPERTY(FIntProperty,Z_Param_NewFocusedOption);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetFocusedOption(Z_Param_ContainerObject,Z_Param_NewFocusedOption);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetFocusedOption

// Begin Class UMounteaDialogueHUDStatics Function SetFocusState
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics
{
	struct MounteaDialogueHUDStatics_eventSetFocusState_Parms
	{
		UUserWidget* Widget;
		bool IsFocused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Helpers|UI" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsFocused_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static void NewProp_IsFocused_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsFocused;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetFocusState_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_IsFocused_SetBit(void* Obj)
{
	((MounteaDialogueHUDStatics_eventSetFocusState_Parms*)Obj)->IsFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_IsFocused = { "IsFocused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueHUDStatics_eventSetFocusState_Parms), &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_IsFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocused_MetaData), NewProp_IsFocused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::NewProp_IsFocused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetFocusState", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::MounteaDialogueHUDStatics_eventSetFocusState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::MounteaDialogueHUDStatics_eventSetFocusState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetFocusState)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Widget);
	P_GET_UBOOL(Z_Param_IsFocused);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetFocusState(Z_Param_Widget,Z_Param_IsFocused);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetFocusState

// Begin Class UMounteaDialogueHUDStatics Function SetNewDialogueOptionData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics
{
	struct MounteaDialogueHUDStatics_eventSetNewDialogueOptionData_Parms
	{
		UObject* DialogueOption;
		FDialogueOptionData NewData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Option" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new dialogue option data.\n\x09 *\n\x09 * @param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n\x09 * @param NewData The new data to set for the dialogue option.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new dialogue option data.\n\n@param DialogueOption The object that should implement the MounteaDialogueOptionInterface. Usually Widget Blueprint.\n@param NewData The new data to set for the dialogue option." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueOption;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::NewProp_DialogueOption = { "DialogueOption", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetNewDialogueOptionData_Parms, DialogueOption), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetNewDialogueOptionData_Parms, NewData), Z_Construct_UScriptStruct_FDialogueOptionData, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewData_MetaData), NewProp_NewData_MetaData) }; // 3746218195
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::NewProp_DialogueOption,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::NewProp_NewData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetNewDialogueOptionData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventSetNewDialogueOptionData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::MounteaDialogueHUDStatics_eventSetNewDialogueOptionData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetNewDialogueOptionData)
{
	P_GET_OBJECT(UObject,Z_Param_DialogueOption);
	P_GET_STRUCT_REF(FDialogueOptionData,Z_Param_Out_NewData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetNewDialogueOptionData(Z_Param_DialogueOption,Z_Param_Out_NewData);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetNewDialogueOptionData

// Begin Class UMounteaDialogueHUDStatics Function SetNewWidgetDialogueRowData
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics
{
	struct MounteaDialogueHUDStatics_eventSetNewWidgetDialogueRowData_Parms
	{
		UObject* RowObject;
		FWidgetDialogueRow NewData;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets new dialogue row data for the widget.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 * @param NewData The new dialogue row data to set.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets new dialogue row data for the widget.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n@param NewData The new dialogue row data to set." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewData_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FStructPropertyParams NewProp_NewData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetNewWidgetDialogueRowData_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::NewProp_NewData = { "NewData", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetNewWidgetDialogueRowData_Parms, NewData), Z_Construct_UScriptStruct_FWidgetDialogueRow, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewData_MetaData), NewProp_NewData_MetaData) }; // 3704941342
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::NewProp_RowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::NewProp_NewData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetNewWidgetDialogueRowData", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::MounteaDialogueHUDStatics_eventSetNewWidgetDialogueRowData_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::MounteaDialogueHUDStatics_eventSetNewWidgetDialogueRowData_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetNewWidgetDialogueRowData)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_GET_STRUCT_REF(FWidgetDialogueRow,Z_Param_Out_NewData);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetNewWidgetDialogueRowData(Z_Param_RowObject,Z_Param_Out_NewData);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetNewWidgetDialogueRowData

// Begin Class UMounteaDialogueHUDStatics Function SetParentDialogueWidget
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics
{
	struct MounteaDialogueHUDStatics_eventSetParentDialogueWidget_Parms
	{
		UObject* ContainerObject;
		UUserWidget* NewParentDialogueWidget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Sets the parent dialogue widget.\n\x09 *\n\x09 * @param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n\x09 * @param NewParentDialogueWidget The UUserWidget instance to be set as the parent dialogue widget. The widget must implement the MounteaDialogueWBPInterface.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Sets the parent dialogue widget.\n\n@param ContainerObject The object that should implement the MounteaDialogueOptionsContainerInterface. Usually Widget Blueprint.\n@param NewParentDialogueWidget The UUserWidget instance to be set as the parent dialogue widget. The widget must implement the MounteaDialogueWBPInterface." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewParentDialogueWidget_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_NewParentDialogueWidget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetParentDialogueWidget_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::NewProp_NewParentDialogueWidget = { "NewParentDialogueWidget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventSetParentDialogueWidget_Parms, NewParentDialogueWidget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewParentDialogueWidget_MetaData), NewProp_NewParentDialogueWidget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::NewProp_NewParentDialogueWidget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "SetParentDialogueWidget", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::MounteaDialogueHUDStatics_eventSetParentDialogueWidget_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::MounteaDialogueHUDStatics_eventSetParentDialogueWidget_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execSetParentDialogueWidget)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_OBJECT(UUserWidget,Z_Param_NewParentDialogueWidget);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::SetParentDialogueWidget(Z_Param_ContainerObject,Z_Param_NewParentDialogueWidget);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function SetParentDialogueWidget

// Begin Class UMounteaDialogueHUDStatics Function StartTypeWriterEffect
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics
{
	struct MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms
	{
		UObject* RowObject;
		FText SourceText;
		float Duration;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Starts the typewriter effect on the specified text for a given duration.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 * @param SourceText The full text to display.\n\x09 * @param Duration The duration over which the typewriter effect should play.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Starts the typewriter effect on the specified text for a given duration.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n@param SourceText The full text to display.\n@param Duration The duration over which the typewriter effect should play." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SourceText_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FTextPropertyParams NewProp_SourceText;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_Duration;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_SourceText = { "SourceText", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms, SourceText), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SourceText_MetaData), NewProp_SourceText_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_Duration = { "Duration", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms, Duration), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_RowObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_SourceText,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::NewProp_Duration,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "StartTypeWriterEffect", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventStartTypeWriterEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execStartTypeWriterEffect)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_GET_PROPERTY_REF(FTextProperty,Z_Param_Out_SourceText);
	P_GET_PROPERTY(FFloatProperty,Z_Param_Duration);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::StartTypeWriterEffect(Z_Param_RowObject,Z_Param_Out_SourceText,Z_Param_Duration);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function StartTypeWriterEffect

// Begin Class UMounteaDialogueHUDStatics Function StopTypeWriterEffect
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics
{
	struct MounteaDialogueHUDStatics_eventStopTypeWriterEffect_Parms
	{
		UObject* RowObject;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|DialogueRow" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stops the typewriter effect and finishes displaying the text.\n\x09 *\n\x09 * @param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stops the typewriter effect and finishes displaying the text.\n\n@param RowObject The object that should implement the MounteaDialogueRowInterface. Usually Widget Blueprint." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_RowObject;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::NewProp_RowObject = { "RowObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventStopTypeWriterEffect_Parms, RowObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::NewProp_RowObject,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "StopTypeWriterEffect", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventStopTypeWriterEffect_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::MounteaDialogueHUDStatics_eventStopTypeWriterEffect_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execStopTypeWriterEffect)
{
	P_GET_OBJECT(UObject,Z_Param_RowObject);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::StopTypeWriterEffect(Z_Param_RowObject);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function StopTypeWriterEffect

// Begin Class UMounteaDialogueHUDStatics Function ToggleForcedFocus
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics
{
	struct MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms
	{
		UObject* ContainerObject;
		bool bIsEnabled;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|OptionsContainer" },
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ContainerObject;
	static void NewProp_bIsEnabled_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsEnabled;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_ContainerObject = { "ContainerObject", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms, ContainerObject), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_bIsEnabled_SetBit(void* Obj)
{
	((MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms*)Obj)->bIsEnabled = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_bIsEnabled = { "bIsEnabled", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms), &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_bIsEnabled_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_ContainerObject,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::NewProp_bIsEnabled,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "ToggleForcedFocus", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::MounteaDialogueHUDStatics_eventToggleForcedFocus_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execToggleForcedFocus)
{
	P_GET_OBJECT(UObject,Z_Param_ContainerObject);
	P_GET_UBOOL(Z_Param_bIsEnabled);
	P_FINISH;
	P_NATIVE_BEGIN;
	UMounteaDialogueHUDStatics::ToggleForcedFocus(Z_Param_ContainerObject,Z_Param_bIsEnabled);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function ToggleForcedFocus

// Begin Class UMounteaDialogueHUDStatics Function UnbindEvents
struct Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics
{
	struct MounteaDialogueHUDStatics_eventUnbindEvents_Parms
	{
		UUserWidget* Target;
		bool ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide a global way to unbind UI events.\n\x09 * \n\x09 * @param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n\x09 * @return Binding result.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide a global way to unbind UI events.\n\n@param Target    The widget that should implement the MounteaDialogueUIBaseInterface.\n@return Binding result." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Target_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Target;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_Target = { "Target", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueHUDStatics_eventUnbindEvents_Parms, Target), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Target_MetaData), NewProp_Target_MetaData) };
void Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueHUDStatics_eventUnbindEvents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueHUDStatics_eventUnbindEvents_Parms), &Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_Target,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueHUDStatics, nullptr, "UnbindEvents", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::MounteaDialogueHUDStatics_eventUnbindEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::MounteaDialogueHUDStatics_eventUnbindEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueHUDStatics::execUnbindEvents)
{
	P_GET_OBJECT(UUserWidget,Z_Param_Target);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=UMounteaDialogueHUDStatics::UnbindEvents(Z_Param_Target);
	P_NATIVE_END;
}
// End Class UMounteaDialogueHUDStatics Function UnbindEvents

// Begin Class UMounteaDialogueHUDStatics
void UMounteaDialogueHUDStatics::StaticRegisterNativesUMounteaDialogueHUDStatics()
{
	UClass* Class = UMounteaDialogueHUDStatics::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "AddChildWidget", &UMounteaDialogueHUDStatics::execAddChildWidget },
		{ "AddChildWidgetToViewport", &UMounteaDialogueHUDStatics::execAddChildWidgetToViewport },
		{ "AddNewDialogueOption", &UMounteaDialogueHUDStatics::execAddNewDialogueOption },
		{ "AddNewDialogueOptions", &UMounteaDialogueHUDStatics::execAddNewDialogueOptions },
		{ "ApplyTheme", &UMounteaDialogueHUDStatics::execApplyTheme },
		{ "BindEvents", &UMounteaDialogueHUDStatics::execBindEvents },
		{ "ClearDialogueOptions", &UMounteaDialogueHUDStatics::execClearDialogueOptions },
		{ "EnableTypeWriterEffect", &UMounteaDialogueHUDStatics::execEnableTypeWriterEffect },
		{ "FilterDialogueFriendlyNodes", &UMounteaDialogueHUDStatics::execFilterDialogueFriendlyNodes },
		{ "GetDialogueNodeGuid", &UMounteaDialogueHUDStatics::execGetDialogueNodeGuid },
		{ "GetDialogueNodeRow", &UMounteaDialogueHUDStatics::execGetDialogueNodeRow },
		{ "GetDialogueOptionClass", &UMounteaDialogueHUDStatics::execGetDialogueOptionClass },
		{ "GetDialogueOptionData", &UMounteaDialogueHUDStatics::execGetDialogueOptionData },
		{ "GetDialogueOptions", &UMounteaDialogueHUDStatics::execGetDialogueOptions },
		{ "GetDialogueWidgetRowData", &UMounteaDialogueHUDStatics::execGetDialogueWidgetRowData },
		{ "GetFocusedOptionIndex", &UMounteaDialogueHUDStatics::execGetFocusedOptionIndex },
		{ "GetFocusState", &UMounteaDialogueHUDStatics::execGetFocusState },
		{ "GetOptionIndex", &UMounteaDialogueHUDStatics::execGetOptionIndex },
		{ "GetParentDialogueWidget", &UMounteaDialogueHUDStatics::execGetParentDialogueWidget },
		{ "GetSafeOptionIndex", &UMounteaDialogueHUDStatics::execGetSafeOptionIndex },
		{ "GetViewportBaseClass", &UMounteaDialogueHUDStatics::execGetViewportBaseClass },
		{ "GetViewportWidget", &UMounteaDialogueHUDStatics::execGetViewportWidget },
		{ "GetWidgetZOrder", &UMounteaDialogueHUDStatics::execGetWidgetZOrder },
		{ "InitializeDialogueOption", &UMounteaDialogueHUDStatics::execInitializeDialogueOption },
		{ "InitializeViewportWidget", &UMounteaDialogueHUDStatics::execInitializeViewportWidget },
		{ "InitializeWidgetDialogueRow", &UMounteaDialogueHUDStatics::execInitializeWidgetDialogueRow },
		{ "NewDialogueOptionData", &UMounteaDialogueHUDStatics::execNewDialogueOptionData },
		{ "NewDialogueWidgetRowData", &UMounteaDialogueHUDStatics::execNewDialogueWidgetRowData },
		{ "OnOptionSelected", &UMounteaDialogueHUDStatics::execOnOptionSelected },
		{ "ProcessContainerOptionSelected", &UMounteaDialogueHUDStatics::execProcessContainerOptionSelected },
		{ "ProcessOptionSelected", &UMounteaDialogueHUDStatics::execProcessOptionSelected },
		{ "ProcessStringCommand", &UMounteaDialogueHUDStatics::execProcessStringCommand },
		{ "RefreshDialogueWidget", &UMounteaDialogueHUDStatics::execRefreshDialogueWidget },
		{ "RemoveChildWidget", &UMounteaDialogueHUDStatics::execRemoveChildWidget },
		{ "RemoveChildWidgetFromViewport", &UMounteaDialogueHUDStatics::execRemoveChildWidgetFromViewport },
		{ "RemoveDialogueOption", &UMounteaDialogueHUDStatics::execRemoveDialogueOption },
		{ "RemoveDialogueOptions", &UMounteaDialogueHUDStatics::execRemoveDialogueOptions },
		{ "ReplaceRegexInText", &UMounteaDialogueHUDStatics::execReplaceRegexInText },
		{ "RequestHideWidget", &UMounteaDialogueHUDStatics::execRequestHideWidget },
		{ "RequestShowWidget", &UMounteaDialogueHUDStatics::execRequestShowWidget },
		{ "ResetDialogueOptionData", &UMounteaDialogueHUDStatics::execResetDialogueOptionData },
		{ "ResetWidgetDialogueRow", &UMounteaDialogueHUDStatics::execResetWidgetDialogueRow },
		{ "SetDialogueOptionClass", &UMounteaDialogueHUDStatics::execSetDialogueOptionClass },
		{ "SetFocusedOption", &UMounteaDialogueHUDStatics::execSetFocusedOption },
		{ "SetFocusState", &UMounteaDialogueHUDStatics::execSetFocusState },
		{ "SetNewDialogueOptionData", &UMounteaDialogueHUDStatics::execSetNewDialogueOptionData },
		{ "SetNewWidgetDialogueRowData", &UMounteaDialogueHUDStatics::execSetNewWidgetDialogueRowData },
		{ "SetParentDialogueWidget", &UMounteaDialogueHUDStatics::execSetParentDialogueWidget },
		{ "StartTypeWriterEffect", &UMounteaDialogueHUDStatics::execStartTypeWriterEffect },
		{ "StopTypeWriterEffect", &UMounteaDialogueHUDStatics::execStopTypeWriterEffect },
		{ "ToggleForcedFocus", &UMounteaDialogueHUDStatics::execToggleForcedFocus },
		{ "UnbindEvents", &UMounteaDialogueHUDStatics::execUnbindEvents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueHUDStatics);
UClass* Z_Construct_UClass_UMounteaDialogueHUDStatics_NoRegister()
{
	return UMounteaDialogueHUDStatics::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "DisplayName", "Mountea Dialogue HUD Function Library" },
		{ "IncludePath", "Helpers/MounteaDialogueHUDStatics.h" },
		{ "ModuleRelativePath", "Public/Helpers/MounteaDialogueHUDStatics.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidget, "AddChildWidget" }, // 4216922703
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddChildWidgetToViewport, "AddChildWidgetToViewport" }, // 2429889255
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOption, "AddNewDialogueOption" }, // 1457201078
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_AddNewDialogueOptions, "AddNewDialogueOptions" }, // 3188972127
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ApplyTheme, "ApplyTheme" }, // 1113330211
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_BindEvents, "BindEvents" }, // 446745694
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ClearDialogueOptions, "ClearDialogueOptions" }, // 2156154771
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_EnableTypeWriterEffect, "EnableTypeWriterEffect" }, // 1968673610
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_FilterDialogueFriendlyNodes, "FilterDialogueFriendlyNodes" }, // 104311806
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeGuid, "GetDialogueNodeGuid" }, // 775025948
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueNodeRow, "GetDialogueNodeRow" }, // 3582223246
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionClass, "GetDialogueOptionClass" }, // 1322436412
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptionData, "GetDialogueOptionData" }, // 2552563527
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueOptions, "GetDialogueOptions" }, // 1871248675
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetDialogueWidgetRowData, "GetDialogueWidgetRowData" }, // 2737000319
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusedOptionIndex, "GetFocusedOptionIndex" }, // 2494517150
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetFocusState, "GetFocusState" }, // 2713969758
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetOptionIndex, "GetOptionIndex" }, // 732325798
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetParentDialogueWidget, "GetParentDialogueWidget" }, // 2266353675
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetSafeOptionIndex, "GetSafeOptionIndex" }, // 4007734099
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportBaseClass, "GetViewportBaseClass" }, // 1076450532
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetViewportWidget, "GetViewportWidget" }, // 902154135
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_GetWidgetZOrder, "GetWidgetZOrder" }, // 1385514383
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeDialogueOption, "InitializeDialogueOption" }, // 3940581535
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeViewportWidget, "InitializeViewportWidget" }, // 944970723
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_InitializeWidgetDialogueRow, "InitializeWidgetDialogueRow" }, // 2203214056
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueOptionData, "NewDialogueOptionData" }, // 193586985
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_NewDialogueWidgetRowData, "NewDialogueWidgetRowData" }, // 2356995500
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_OnOptionSelected, "OnOptionSelected" }, // 2179022832
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessContainerOptionSelected, "ProcessContainerOptionSelected" }, // 1033488254
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessOptionSelected, "ProcessOptionSelected" }, // 3964752253
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ProcessStringCommand, "ProcessStringCommand" }, // 769715173
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RefreshDialogueWidget, "RefreshDialogueWidget" }, // 3500952064
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidget, "RemoveChildWidget" }, // 14089537
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveChildWidgetFromViewport, "RemoveChildWidgetFromViewport" }, // 3518625795
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOption, "RemoveDialogueOption" }, // 2403696306
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RemoveDialogueOptions, "RemoveDialogueOptions" }, // 1434565662
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ReplaceRegexInText, "ReplaceRegexInText" }, // 454871937
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestHideWidget, "RequestHideWidget" }, // 1030224624
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_RequestShowWidget, "RequestShowWidget" }, // 371690858
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetDialogueOptionData, "ResetDialogueOptionData" }, // 2095651099
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ResetWidgetDialogueRow, "ResetWidgetDialogueRow" }, // 337009738
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetDialogueOptionClass, "SetDialogueOptionClass" }, // 1277404856
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusedOption, "SetFocusedOption" }, // 3383989087
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetFocusState, "SetFocusState" }, // 1572050935
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewDialogueOptionData, "SetNewDialogueOptionData" }, // 1996642219
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetNewWidgetDialogueRowData, "SetNewWidgetDialogueRowData" }, // 2564521773
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_SetParentDialogueWidget, "SetParentDialogueWidget" }, // 1682751258
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_StartTypeWriterEffect, "StartTypeWriterEffect" }, // 2810251292
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_StopTypeWriterEffect, "StopTypeWriterEffect" }, // 3699729333
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_ToggleForcedFocus, "ToggleForcedFocus" }, // 3922420308
		{ &Z_Construct_UFunction_UMounteaDialogueHUDStatics_UnbindEvents, "UnbindEvents" }, // 15575447
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueHUDStatics>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::ClassParams = {
	&UMounteaDialogueHUDStatics::StaticClass,
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
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueHUDStatics()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueHUDStatics.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueHUDStatics.OuterSingleton, Z_Construct_UClass_UMounteaDialogueHUDStatics_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueHUDStatics.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueHUDStatics>()
{
	return UMounteaDialogueHUDStatics::StaticClass();
}
UMounteaDialogueHUDStatics::UMounteaDialogueHUDStatics(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueHUDStatics);
UMounteaDialogueHUDStatics::~UMounteaDialogueHUDStatics() {}
// End Class UMounteaDialogueHUDStatics

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FWidgetAdditionParams::StaticStruct, Z_Construct_UScriptStruct_FWidgetAdditionParams_Statics::NewStructOps, TEXT("WidgetAdditionParams"), &Z_Registration_Info_UScriptStruct_WidgetAdditionParams, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FWidgetAdditionParams), 2644343608U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueHUDStatics, UMounteaDialogueHUDStatics::StaticClass, TEXT("UMounteaDialogueHUDStatics"), &Z_Registration_Info_UClass_UMounteaDialogueHUDStatics, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueHUDStatics), 368143153U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_482984328(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Helpers_MounteaDialogueHUDStatics_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
