// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Private/EditorUtility/URTMSDF_EditorUtilityLibrary.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeURTMSDF_EditorUtilityLibrary() {}

// Begin Cross Module References
BLUTILITY_API UClass* Z_Construct_UClass_UEditorUtilityWidget_NoRegister();
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class UURTMSDF_EditorUtilityLibrary Function FindBlueprintClasses
#if WITH_EDITOR
struct Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics
{
	struct URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms
	{
		FString searchLocation;
		const UClass* blueprintClass;
		TArray<UClass*> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "referenceAsset" },
		{ "BlueprintInternalUseOnly", "" },
		{ "Category", "RTM|SDF|EditorUtility" },
		{ "DeterminesOutputType", "blueprintClass" },
		{ "ModuleRelativePath", "Private/EditorUtility/URTMSDF_EditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_searchLocation_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_blueprintClass_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_searchLocation;
	static const UECodeGen_Private::FClassPropertyParams NewProp_blueprintClass;
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_searchLocation = { "searchLocation", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms, searchLocation), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_searchLocation_MetaData), NewProp_searchLocation_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_blueprintClass = { "blueprintClass", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms, blueprintClass), Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_blueprintClass_MetaData), NewProp_blueprintClass_MetaData) };
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_searchLocation,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_blueprintClass,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_ReturnValue_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary, nullptr, "FindBlueprintClasses", nullptr, nullptr, Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::PropPointers), sizeof(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24042401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::Function_MetaDataParams), Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::URTMSDF_EditorUtilityLibrary_eventFindBlueprintClasses_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UURTMSDF_EditorUtilityLibrary::execFindBlueprintClasses)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_searchLocation);
	P_GET_OBJECT(UClass,Z_Param_blueprintClass);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TArray<UClass*>*)Z_Param__Result=UURTMSDF_EditorUtilityLibrary::FindBlueprintClasses(Z_Param_searchLocation,Z_Param_blueprintClass);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UURTMSDF_EditorUtilityLibrary Function FindBlueprintClasses

// Begin Class UURTMSDF_EditorUtilityLibrary Function SetUtilityWidgetWindowSize
#if WITH_EDITOR
struct Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics
{
	struct URTMSDF_EditorUtilityLibrary_eventSetUtilityWidgetWindowSize_Parms
	{
		UEditorUtilityWidget* widget;
		FVector2D size;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "AutoCreateRefTerm", "size" },
		{ "BlueprintInternalUseOnly", "" },
		{ "Category", "RTM|SDF|EditorUtility" },
		{ "DefaultToSelf", "Widget" },
		{ "ModuleRelativePath", "Private/EditorUtility/URTMSDF_EditorUtilityLibrary.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_widget_MetaData[] = {
		{ "EditInline", "true" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_size_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_widget;
	static const UECodeGen_Private::FStructPropertyParams NewProp_size;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::NewProp_widget = { "widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_EditorUtilityLibrary_eventSetUtilityWidgetWindowSize_Parms, widget), Z_Construct_UClass_UEditorUtilityWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_widget_MetaData), NewProp_widget_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::NewProp_size = { "size", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_EditorUtilityLibrary_eventSetUtilityWidgetWindowSize_Parms, size), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_size_MetaData), NewProp_size_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::NewProp_widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::NewProp_size,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary, nullptr, "SetUtilityWidgetWindowSize", nullptr, nullptr, Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::PropPointers), sizeof(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::URTMSDF_EditorUtilityLibrary_eventSetUtilityWidgetWindowSize_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x24C42401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::Function_MetaDataParams), Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::URTMSDF_EditorUtilityLibrary_eventSetUtilityWidgetWindowSize_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize_Statics::FuncParams);
	}
	return ReturnFunction;
}
#endif // WITH_EDITOR
#if WITH_EDITOR
DEFINE_FUNCTION(UURTMSDF_EditorUtilityLibrary::execSetUtilityWidgetWindowSize)
{
	P_GET_OBJECT(UEditorUtilityWidget,Z_Param_widget);
	P_GET_STRUCT_REF(FVector2D,Z_Param_Out_size);
	P_FINISH;
	P_NATIVE_BEGIN;
	UURTMSDF_EditorUtilityLibrary::SetUtilityWidgetWindowSize(Z_Param_widget,Z_Param_Out_size);
	P_NATIVE_END;
}
#endif // WITH_EDITOR
// End Class UURTMSDF_EditorUtilityLibrary Function SetUtilityWidgetWindowSize

// Begin Class UURTMSDF_EditorUtilityLibrary
void UURTMSDF_EditorUtilityLibrary::StaticRegisterNativesUURTMSDF_EditorUtilityLibrary()
{
#if WITH_EDITOR
	UClass* Class = UURTMSDF_EditorUtilityLibrary::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "FindBlueprintClasses", &UURTMSDF_EditorUtilityLibrary::execFindBlueprintClasses },
		{ "SetUtilityWidgetWindowSize", &UURTMSDF_EditorUtilityLibrary::execSetUtilityWidgetWindowSize },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
#endif // WITH_EDITOR
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UURTMSDF_EditorUtilityLibrary);
UClass* Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_NoRegister()
{
	return UURTMSDF_EditorUtilityLibrary::StaticClass();
}
struct Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "IncludePath", "EditorUtility/URTMSDF_EditorUtilityLibrary.h" },
		{ "ModuleRelativePath", "Private/EditorUtility/URTMSDF_EditorUtilityLibrary.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
#if WITH_EDITOR
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_FindBlueprintClasses, "FindBlueprintClasses" }, // 1001725840
		{ &Z_Construct_UFunction_UURTMSDF_EditorUtilityLibrary_SetUtilityWidgetWindowSize, "SetUtilityWidgetWindowSize" }, // 1807135012
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
#endif // WITH_EDITOR
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UURTMSDF_EditorUtilityLibrary>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::ClassParams = {
	&UURTMSDF_EditorUtilityLibrary::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	IF_WITH_EDITOR(FuncInfo, nullptr),
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	IF_WITH_EDITOR(UE_ARRAY_COUNT(FuncInfo), 0),
	0,
	0,
	0x001000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::Class_MetaDataParams), Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary()
{
	if (!Z_Registration_Info_UClass_UURTMSDF_EditorUtilityLibrary.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UURTMSDF_EditorUtilityLibrary.OuterSingleton, Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UURTMSDF_EditorUtilityLibrary.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<UURTMSDF_EditorUtilityLibrary>()
{
	return UURTMSDF_EditorUtilityLibrary::StaticClass();
}
UURTMSDF_EditorUtilityLibrary::UURTMSDF_EditorUtilityLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UURTMSDF_EditorUtilityLibrary);
UURTMSDF_EditorUtilityLibrary::~UURTMSDF_EditorUtilityLibrary() {}
// End Class UURTMSDF_EditorUtilityLibrary

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UURTMSDF_EditorUtilityLibrary, UURTMSDF_EditorUtilityLibrary::StaticClass, TEXT("UURTMSDF_EditorUtilityLibrary"), &Z_Registration_Info_UClass_UURTMSDF_EditorUtilityLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UURTMSDF_EditorUtilityLibrary), 426405937U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_199290123(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Private_EditorUtility_URTMSDF_EditorUtilityLibrary_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
