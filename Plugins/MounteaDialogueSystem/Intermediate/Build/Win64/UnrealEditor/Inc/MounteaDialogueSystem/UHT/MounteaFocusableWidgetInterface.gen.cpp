// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaFocusableWidgetInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaFocusableWidgetInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaFocusableWidgetInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature();
UMG_API UClass* Z_Construct_UClass_UUserWidget_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Enum EDialogueOptionState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDialogueOptionState;
static UEnum* EDialogueOptionState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDialogueOptionState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDialogueOptionState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDialogueOptionState"));
	}
	return Z_Registration_Info_UEnum_EDialogueOptionState.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDialogueOptionState>()
{
	return EDialogueOptionState_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.hidden", "" },
		{ "Default.Name", "EDialogueOptionState::Default" },
		{ "EDOS_Focused.DisplayName", "Focused" },
		{ "EDOS_Focused.Name", "EDialogueOptionState::EDOS_Focused" },
		{ "EDOS_Unfocused.DisplayName", "Unfocused" },
		{ "EDOS_Unfocused.Name", "EDialogueOptionState::EDOS_Unfocused" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDialogueOptionState::EDOS_Focused", (int64)EDialogueOptionState::EDOS_Focused },
		{ "EDialogueOptionState::EDOS_Unfocused", (int64)EDialogueOptionState::EDOS_Unfocused },
		{ "EDialogueOptionState::Default", (int64)EDialogueOptionState::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EDialogueOptionState",
	"EDialogueOptionState",
	Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState()
{
	if (!Z_Registration_Info_UEnum_EDialogueOptionState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDialogueOptionState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDialogueOptionState.InnerSingleton;
}
// End Enum EDialogueOptionState

// Begin Delegate FOnMounteaFocusChanged
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms
	{
		UUserWidget* Widget;
		bool IsFocused;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
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
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
void Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_IsFocused_SetBit(void* Obj)
{
	((_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms*)Obj)->IsFocused = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_IsFocused = { "IsFocused", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms), &Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_IsFocused_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsFocused_MetaData), NewProp_IsFocused_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_Widget,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::NewProp_IsFocused,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnMounteaFocusChanged__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusChanged__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMounteaFocusChanged_DelegateWrapper(const FMulticastScriptDelegate& OnMounteaFocusChanged, UUserWidget* Widget, bool IsFocused)
{
	struct _Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms
	{
		UUserWidget* Widget;
		bool IsFocused;
	};
	_Script_MounteaDialogueSystem_eventOnMounteaFocusChanged_Parms Parms;
	Parms.Widget=Widget;
	Parms.IsFocused=IsFocused ? true : false;
	OnMounteaFocusChanged.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMounteaFocusChanged

// Begin Delegate FOnMounteaFocusClearRequested
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms
	{
		const UUserWidget* Widget;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Widget_MetaData[] = {
		{ "EditInline", "true" },
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_Widget;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::NewProp_Widget = { "Widget", nullptr, (EPropertyFlags)0x0010000000080082, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms, Widget), Z_Construct_UClass_UUserWidget_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Widget_MetaData), NewProp_Widget_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::NewProp_Widget,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "OnMounteaFocusClearRequested__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_OnMounteaFocusClearRequested__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FOnMounteaFocusClearRequested_DelegateWrapper(const FMulticastScriptDelegate& OnMounteaFocusClearRequested, const UUserWidget* Widget)
{
	struct _Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms
	{
		const UUserWidget* Widget;
	};
	_Script_MounteaDialogueSystem_eventOnMounteaFocusClearRequested_Parms Parms;
	Parms.Widget=Widget;
	OnMounteaFocusClearRequested.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FOnMounteaFocusClearRequested

// Begin Interface UMounteaFocusableWidgetInterface Function GetFocusState
struct MounteaFocusableWidgetInterface_eventGetFocusState_Parms
{
	EDialogueOptionState ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaFocusableWidgetInterface_eventGetFocusState_Parms()
		: ReturnValue((EDialogueOptionState)0)
	{
	}
};
EDialogueOptionState IMounteaFocusableWidgetInterface::GetFocusState() const
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_GetFocusState instead.");
	MounteaFocusableWidgetInterface_eventGetFocusState_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaFocusableWidgetInterface_GetFocusState = FName(TEXT("GetFocusState"));
EDialogueOptionState IMounteaFocusableWidgetInterface::Execute_GetFocusState(const UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaFocusableWidgetInterface::StaticClass()));
	MounteaFocusableWidgetInterface_eventGetFocusState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaFocusableWidgetInterface_GetFocusState);
	if (Func)
	{
		const_cast<UObject*>(O)->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (const IMounteaFocusableWidgetInterface*)(O->GetNativeInterfaceAddress(UMounteaFocusableWidgetInterface::StaticClass())))
	{
		Parms.ReturnValue = I->GetFocusState_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Focus" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaFocusableWidgetInterface_eventGetFocusState_Parms, ReturnValue), Z_Construct_UEnum_MounteaDialogueSystem_EDialogueOptionState, METADATA_PARAMS(0, nullptr) }; // 1653604931
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::NewProp_ReturnValue_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaFocusableWidgetInterface, nullptr, "GetFocusState", nullptr, nullptr, Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::PropPointers), sizeof(MounteaFocusableWidgetInterface_eventGetFocusState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaFocusableWidgetInterface_eventGetFocusState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaFocusableWidgetInterface::execGetFocusState)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(EDialogueOptionState*)Z_Param__Result=P_THIS->GetFocusState_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaFocusableWidgetInterface Function GetFocusState

// Begin Interface UMounteaFocusableWidgetInterface Function SetFocusState
struct MounteaFocusableWidgetInterface_eventSetFocusState_Parms
{
	bool IsSelected;
};
void IMounteaFocusableWidgetInterface::SetFocusState(bool IsSelected)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_SetFocusState instead.");
}
static FName NAME_UMounteaFocusableWidgetInterface_SetFocusState = FName(TEXT("SetFocusState"));
void IMounteaFocusableWidgetInterface::Execute_SetFocusState(UObject* O, bool IsSelected)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaFocusableWidgetInterface::StaticClass()));
	MounteaFocusableWidgetInterface_eventSetFocusState_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaFocusableWidgetInterface_SetFocusState);
	if (Func)
	{
		Parms.IsSelected=IsSelected;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaFocusableWidgetInterface*)(O->GetNativeInterfaceAddress(UMounteaFocusableWidgetInterface::StaticClass())))
	{
		I->SetFocusState_Implementation(IsSelected);
	}
}
struct Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface|Focus" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_IsSelected_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static void NewProp_IsSelected_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_IsSelected;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::NewProp_IsSelected_SetBit(void* Obj)
{
	((MounteaFocusableWidgetInterface_eventSetFocusState_Parms*)Obj)->IsSelected = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::NewProp_IsSelected = { "IsSelected", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaFocusableWidgetInterface_eventSetFocusState_Parms), &Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::NewProp_IsSelected_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_IsSelected_MetaData), NewProp_IsSelected_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::NewProp_IsSelected,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaFocusableWidgetInterface, nullptr, "SetFocusState", nullptr, nullptr, Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::PropPointers), sizeof(MounteaFocusableWidgetInterface_eventSetFocusState_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaFocusableWidgetInterface_eventSetFocusState_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaFocusableWidgetInterface::execSetFocusState)
{
	P_GET_UBOOL(Z_Param_IsSelected);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetFocusState_Implementation(Z_Param_IsSelected);
	P_NATIVE_END;
}
// End Interface UMounteaFocusableWidgetInterface Function SetFocusState

// Begin Interface UMounteaFocusableWidgetInterface
void UMounteaFocusableWidgetInterface::StaticRegisterNativesUMounteaFocusableWidgetInterface()
{
	UClass* Class = UMounteaFocusableWidgetInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "GetFocusState", &IMounteaFocusableWidgetInterface::execGetFocusState },
		{ "SetFocusState", &IMounteaFocusableWidgetInterface::execSetFocusState },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaFocusableWidgetInterface);
UClass* Z_Construct_UClass_UMounteaFocusableWidgetInterface_NoRegister()
{
	return UMounteaFocusableWidgetInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/UMG/MounteaFocusableWidgetInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaFocusableWidgetInterface_GetFocusState, "GetFocusState" }, // 1536144827
		{ &Z_Construct_UFunction_UMounteaFocusableWidgetInterface_SetFocusState, "SetFocusState" }, // 3102155295
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaFocusableWidgetInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::ClassParams = {
	&UMounteaFocusableWidgetInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaFocusableWidgetInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaFocusableWidgetInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaFocusableWidgetInterface.OuterSingleton, Z_Construct_UClass_UMounteaFocusableWidgetInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaFocusableWidgetInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaFocusableWidgetInterface>()
{
	return UMounteaFocusableWidgetInterface::StaticClass();
}
UMounteaFocusableWidgetInterface::UMounteaFocusableWidgetInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaFocusableWidgetInterface);
UMounteaFocusableWidgetInterface::~UMounteaFocusableWidgetInterface() {}
// End Interface UMounteaFocusableWidgetInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDialogueOptionState_StaticEnum, TEXT("EDialogueOptionState"), &Z_Registration_Info_UEnum_EDialogueOptionState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 1653604931U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaFocusableWidgetInterface, UMounteaFocusableWidgetInterface::StaticClass, TEXT("UMounteaFocusableWidgetInterface"), &Z_Registration_Info_UClass_UMounteaFocusableWidgetInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaFocusableWidgetInterface), 3389950318U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_3774556003(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_UMG_MounteaFocusableWidgetInterface_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
