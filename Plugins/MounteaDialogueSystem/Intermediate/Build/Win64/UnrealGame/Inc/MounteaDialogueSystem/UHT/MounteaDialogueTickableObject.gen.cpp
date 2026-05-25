// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/Core/MounteaDialogueTickableObject.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueTickableObject() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Delegate FMounteaDialogueTick
struct Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics
{
	struct _Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms
	{
		UObject* SelfRef;
		UObject* ParentTickable;
		float DeltaTime;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueTickableObject.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentTickable;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_SelfRef = { "SelfRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms, SelfRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_ParentTickable = { "ParentTickable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms, ParentTickable), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_SelfRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_ParentTickable,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem, nullptr, "MounteaDialogueTick__DelegateSignature", nullptr, nullptr, Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::PropPointers), sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::Function_MetaDataParams), Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature_Statics::FuncParams);
	}
	return ReturnFunction;
}
void FMounteaDialogueTick_DelegateWrapper(const FMulticastScriptDelegate& MounteaDialogueTick, UObject* SelfRef, UObject* ParentTickable, float DeltaTime)
{
	struct _Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms
	{
		UObject* SelfRef;
		UObject* ParentTickable;
		float DeltaTime;
	};
	_Script_MounteaDialogueSystem_eventMounteaDialogueTick_Parms Parms;
	Parms.SelfRef=SelfRef;
	Parms.ParentTickable=ParentTickable;
	Parms.DeltaTime=DeltaTime;
	MounteaDialogueTick.ProcessMulticastDelegate<UObject>(&Parms);
}
// End Delegate FMounteaDialogueTick

// Begin Interface UMounteaDialogueTickableObject Function RegisterTick
struct MounteaDialogueTickableObject_eventRegisterTick_Parms
{
	TScriptInterface<IMounteaDialogueTickableObject> ParentTickable;
};
void IMounteaDialogueTickableObject::RegisterTick(TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_RegisterTick instead.");
}
static FName NAME_UMounteaDialogueTickableObject_RegisterTick = FName(TEXT("RegisterTick"));
void IMounteaDialogueTickableObject::Execute_RegisterTick(UObject* O, TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueTickableObject::StaticClass()));
	MounteaDialogueTickableObject_eventRegisterTick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueTickableObject_RegisterTick);
	if (Func)
	{
		Parms.ParentTickable=ParentTickable;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueTickableObject*)(O->GetNativeInterfaceAddress(UMounteaDialogueTickableObject::StaticClass())))
	{
		I->RegisterTick_Implementation(ParentTickable);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Tick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Registers a tickable object for dialogue.\n\x09 * \n\x09 * @param ParentTickable The tickable object to register.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueTickableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Registers a tickable object for dialogue.\n\n@param ParentTickable The tickable object to register." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTickable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParentTickable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::NewProp_ParentTickable = { "ParentTickable", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueTickableObject_eventRegisterTick_Parms, ParentTickable), Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTickable_MetaData), NewProp_ParentTickable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::NewProp_ParentTickable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueTickableObject, nullptr, "RegisterTick", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::PropPointers), sizeof(MounteaDialogueTickableObject_eventRegisterTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueTickableObject_eventRegisterTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueTickableObject::execRegisterTick)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueTickableObject,Z_Param_Out_ParentTickable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->RegisterTick_Implementation(Z_Param_Out_ParentTickable);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueTickableObject Function RegisterTick

// Begin Interface UMounteaDialogueTickableObject Function TickMounteaEvent
struct MounteaDialogueTickableObject_eventTickMounteaEvent_Parms
{
	UObject* SelfRef;
	UObject* ParentTick;
	float DeltaTime;
};
void IMounteaDialogueTickableObject::TickMounteaEvent(UObject* SelfRef, UObject* ParentTick, float DeltaTime)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_TickMounteaEvent instead.");
}
static FName NAME_UMounteaDialogueTickableObject_TickMounteaEvent = FName(TEXT("TickMounteaEvent"));
void IMounteaDialogueTickableObject::Execute_TickMounteaEvent(UObject* O, UObject* SelfRef, UObject* ParentTick, float DeltaTime)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueTickableObject::StaticClass()));
	MounteaDialogueTickableObject_eventTickMounteaEvent_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueTickableObject_TickMounteaEvent);
	if (Func)
	{
		Parms.SelfRef=SelfRef;
		Parms.ParentTick=ParentTick;
		Parms.DeltaTime=DeltaTime;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueTickableObject*)(O->GetNativeInterfaceAddress(UMounteaDialogueTickableObject::StaticClass())))
	{
		I->TickMounteaEvent_Implementation(SelfRef,ParentTick,DeltaTime);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Tick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**                                                                           \n\x09 * Executes logic for ticking the dialogue graph.\n\x09 * \n\x09 * @param SelfRef The reference to this object.param ParentTick\n\x09 * @param ParentTick The parent object responsible for ticking.param DeltaTime\n\x09 * @param DeltaTime The time since the last tick.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueTickableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes logic for ticking the dialogue graph.\n\n@param SelfRef The reference to this object.param ParentTick\n@param ParentTick The parent object responsible for ticking.param DeltaTime\n@param DeltaTime The time since the last tick." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SelfRef;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentTick;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTime;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_SelfRef = { "SelfRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueTickableObject_eventTickMounteaEvent_Parms, SelfRef), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_ParentTick = { "ParentTick", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueTickableObject_eventTickMounteaEvent_Parms, ParentTick), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_DeltaTime = { "DeltaTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueTickableObject_eventTickMounteaEvent_Parms, DeltaTime), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_SelfRef,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_ParentTick,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::NewProp_DeltaTime,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueTickableObject, nullptr, "TickMounteaEvent", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::PropPointers), sizeof(MounteaDialogueTickableObject_eventTickMounteaEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueTickableObject_eventTickMounteaEvent_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueTickableObject::execTickMounteaEvent)
{
	P_GET_OBJECT(UObject,Z_Param_SelfRef);
	P_GET_OBJECT(UObject,Z_Param_ParentTick);
	P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTime);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->TickMounteaEvent_Implementation(Z_Param_SelfRef,Z_Param_ParentTick,Z_Param_DeltaTime);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueTickableObject Function TickMounteaEvent

// Begin Interface UMounteaDialogueTickableObject Function UnregisterTick
struct MounteaDialogueTickableObject_eventUnregisterTick_Parms
{
	TScriptInterface<IMounteaDialogueTickableObject> ParentTickable;
};
void IMounteaDialogueTickableObject::UnregisterTick(TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnregisterTick instead.");
}
static FName NAME_UMounteaDialogueTickableObject_UnregisterTick = FName(TEXT("UnregisterTick"));
void IMounteaDialogueTickableObject::Execute_UnregisterTick(UObject* O, TScriptInterface<IMounteaDialogueTickableObject> const& ParentTickable)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueTickableObject::StaticClass()));
	MounteaDialogueTickableObject_eventUnregisterTick_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueTickableObject_UnregisterTick);
	if (Func)
	{
		Parms.ParentTickable=ParentTickable;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueTickableObject*)(O->GetNativeInterfaceAddress(UMounteaDialogueTickableObject::StaticClass())))
	{
		I->UnregisterTick_Implementation(ParentTickable);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Tick" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Unregisters a tickable object from dialogue.\n\x09 * \n\x09 * @param ParentTickable The tickable object to unregister.\n\x09 */" },
#endif
		{ "CustomTag", "MounteaK2Setter" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueTickableObject.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Unregisters a tickable object from dialogue.\n\n@param ParentTickable The tickable object to unregister." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ParentTickable_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ParentTickable;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::NewProp_ParentTickable = { "ParentTickable", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueTickableObject_eventUnregisterTick_Parms, ParentTickable), Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ParentTickable_MetaData), NewProp_ParentTickable_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::NewProp_ParentTickable,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueTickableObject, nullptr, "UnregisterTick", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::PropPointers), sizeof(MounteaDialogueTickableObject_eventUnregisterTick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueTickableObject_eventUnregisterTick_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueTickableObject::execUnregisterTick)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueTickableObject,Z_Param_Out_ParentTickable);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->UnregisterTick_Implementation(Z_Param_Out_ParentTickable);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueTickableObject Function UnregisterTick

// Begin Interface UMounteaDialogueTickableObject
void UMounteaDialogueTickableObject::StaticRegisterNativesUMounteaDialogueTickableObject()
{
	UClass* Class = UMounteaDialogueTickableObject::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "RegisterTick", &IMounteaDialogueTickableObject::execRegisterTick },
		{ "TickMounteaEvent", &IMounteaDialogueTickableObject::execTickMounteaEvent },
		{ "UnregisterTick", &IMounteaDialogueTickableObject::execUnregisterTick },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueTickableObject);
UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister()
{
	return UMounteaDialogueTickableObject::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueTickableObject_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/Core/MounteaDialogueTickableObject.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueTickableObject_RegisterTick, "RegisterTick" }, // 2231770952
		{ &Z_Construct_UFunction_UMounteaDialogueTickableObject_TickMounteaEvent, "TickMounteaEvent" }, // 844429770
		{ &Z_Construct_UFunction_UMounteaDialogueTickableObject_UnregisterTick, "UnregisterTick" }, // 2411107170
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueTickableObject>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::ClassParams = {
	&UMounteaDialogueTickableObject::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueTickableObject()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueTickableObject.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueTickableObject.OuterSingleton, Z_Construct_UClass_UMounteaDialogueTickableObject_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueTickableObject.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueTickableObject>()
{
	return UMounteaDialogueTickableObject::StaticClass();
}
UMounteaDialogueTickableObject::UMounteaDialogueTickableObject(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueTickableObject);
UMounteaDialogueTickableObject::~UMounteaDialogueTickableObject() {}
// End Interface UMounteaDialogueTickableObject

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueTickableObject, UMounteaDialogueTickableObject::StaticClass, TEXT("UMounteaDialogueTickableObject"), &Z_Registration_Info_UClass_UMounteaDialogueTickableObject, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueTickableObject), 2602973918U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_2357538423(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_Core_MounteaDialogueTickableObject_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
