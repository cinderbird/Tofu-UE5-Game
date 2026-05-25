// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueUIBaseInterface() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UInterface();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueUIBaseInterface();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueUIBaseInterface_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Interface UMounteaDialogueUIBaseInterface Function ApplyTheme
void IMounteaDialogueUIBaseInterface::ApplyTheme()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ApplyTheme instead.");
}
static FName NAME_UMounteaDialogueUIBaseInterface_ApplyTheme = FName(TEXT("ApplyTheme"));
void IMounteaDialogueUIBaseInterface::Execute_ApplyTheme(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueUIBaseInterface::StaticClass()));
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueUIBaseInterface_ApplyTheme);
	if (Func)
	{
		O->ProcessEvent(Func, NULL);
	}
	else if (auto I = (IMounteaDialogueUIBaseInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueUIBaseInterface::StaticClass())))
	{
		I->ApplyTheme_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Helper function to provide easy way to request Theme update.\n\x09 * Theme logic not provided to abstract the idea from any code.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Helper function to provide easy way to request Theme update.\nTheme logic not provided to abstract the idea from any code." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueUIBaseInterface, nullptr, "ApplyTheme", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueUIBaseInterface::execApplyTheme)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ApplyTheme_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueUIBaseInterface Function ApplyTheme

// Begin Interface UMounteaDialogueUIBaseInterface Function BindEvents
struct MounteaDialogueUIBaseInterface_eventBindEvents_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueUIBaseInterface_eventBindEvents_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueUIBaseInterface::BindEvents()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_BindEvents instead.");
	MounteaDialogueUIBaseInterface_eventBindEvents_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueUIBaseInterface_BindEvents = FName(TEXT("BindEvents"));
bool IMounteaDialogueUIBaseInterface::Execute_BindEvents(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueUIBaseInterface::StaticClass()));
	MounteaDialogueUIBaseInterface_eventBindEvents_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueUIBaseInterface_BindEvents);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueUIBaseInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueUIBaseInterface::StaticClass())))
	{
		Parms.ReturnValue = I->BindEvents_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide a global way to bind UI events.\n\x09 * @return Binding result.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide a global way to bind UI events.\n@return Binding result." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueUIBaseInterface_eventBindEvents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueUIBaseInterface_eventBindEvents_Parms), &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueUIBaseInterface, nullptr, "BindEvents", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::PropPointers), sizeof(MounteaDialogueUIBaseInterface_eventBindEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueUIBaseInterface_eventBindEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueUIBaseInterface::execBindEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->BindEvents_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueUIBaseInterface Function BindEvents

// Begin Interface UMounteaDialogueUIBaseInterface Function ProcessStringCommand
struct MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms
{
	FString Command;
	UObject* OptionalPayload;
};
void IMounteaDialogueUIBaseInterface::ProcessStringCommand(const FString& Command, UObject* OptionalPayload)
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_ProcessStringCommand instead.");
}
static FName NAME_UMounteaDialogueUIBaseInterface_ProcessStringCommand = FName(TEXT("ProcessStringCommand"));
void IMounteaDialogueUIBaseInterface::Execute_ProcessStringCommand(UObject* O, const FString& Command, UObject* OptionalPayload)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueUIBaseInterface::StaticClass()));
	MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueUIBaseInterface_ProcessStringCommand);
	if (Func)
	{
		Parms.Command=Command;
		Parms.OptionalPayload=OptionalPayload;
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueUIBaseInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueUIBaseInterface::StaticClass())))
	{
		I->ProcessStringCommand_Implementation(Command,OptionalPayload);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide easy way of sending commands around without need of binding.\n\x09 * @param Command\x09\x09\x09\x09Required string command to drive inner logic.\n\x09 * @param OptionalPayload\x09Optional payload which can contain data for command.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide easy way of sending commands around without need of binding.\n@param Command                               Required string command to drive inner logic.\n@param OptionalPayload       Optional payload which can contain data for command." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::NewProp_OptionalPayload = { "OptionalPayload", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms, OptionalPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::NewProp_OptionalPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueUIBaseInterface, nullptr, "ProcessStringCommand", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::PropPointers), sizeof(MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueUIBaseInterface_eventProcessStringCommand_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueUIBaseInterface::execProcessStringCommand)
{
	P_GET_PROPERTY(FStrProperty,Z_Param_Command);
	P_GET_OBJECT(UObject,Z_Param_OptionalPayload);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ProcessStringCommand_Implementation(Z_Param_Command,Z_Param_OptionalPayload);
	P_NATIVE_END;
}
// End Interface UMounteaDialogueUIBaseInterface Function ProcessStringCommand

// Begin Interface UMounteaDialogueUIBaseInterface Function UnbindEvents
struct MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms()
		: ReturnValue(false)
	{
	}
};
bool IMounteaDialogueUIBaseInterface::UnbindEvents()
{
	check(0 && "Do not directly call Event functions in Interfaces. Call Execute_UnbindEvents instead.");
	MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms Parms;
	return Parms.ReturnValue;
}
static FName NAME_UMounteaDialogueUIBaseInterface_UnbindEvents = FName(TEXT("UnbindEvents"));
bool IMounteaDialogueUIBaseInterface::Execute_UnbindEvents(UObject* O)
{
	check(O != NULL);
	check(O->GetClass()->ImplementsInterface(UMounteaDialogueUIBaseInterface::StaticClass()));
	MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms Parms;
	UFunction* const Func = O->FindFunction(NAME_UMounteaDialogueUIBaseInterface_UnbindEvents);
	if (Func)
	{
		O->ProcessEvent(Func, &Parms);
	}
	else if (auto I = (IMounteaDialogueUIBaseInterface*)(O->GetNativeInterfaceAddress(UMounteaDialogueUIBaseInterface::StaticClass())))
	{
		Parms.ReturnValue = I->UnbindEvents_Implementation();
	}
	return Parms.ReturnValue;
}
struct Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|UserInterface" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Generic helper function to provide a global way to unbind UI events.\n\x09 * @return Binding result.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Generic helper function to provide a global way to unbind UI events.\n@return Binding result." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms), &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueUIBaseInterface, nullptr, "UnbindEvents", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::PropPointers), sizeof(MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueUIBaseInterface_eventUnbindEvents_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(IMounteaDialogueUIBaseInterface::execUnbindEvents)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->UnbindEvents_Implementation();
	P_NATIVE_END;
}
// End Interface UMounteaDialogueUIBaseInterface Function UnbindEvents

// Begin Interface UMounteaDialogueUIBaseInterface
void UMounteaDialogueUIBaseInterface::StaticRegisterNativesUMounteaDialogueUIBaseInterface()
{
	UClass* Class = UMounteaDialogueUIBaseInterface::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "ApplyTheme", &IMounteaDialogueUIBaseInterface::execApplyTheme },
		{ "BindEvents", &IMounteaDialogueUIBaseInterface::execBindEvents },
		{ "ProcessStringCommand", &IMounteaDialogueUIBaseInterface::execProcessStringCommand },
		{ "UnbindEvents", &IMounteaDialogueUIBaseInterface::execUnbindEvents },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueUIBaseInterface);
UClass* Z_Construct_UClass_UMounteaDialogueUIBaseInterface_NoRegister()
{
	return UMounteaDialogueUIBaseInterface::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Interfaces/HUD/MounteaDialogueUIBaseInterface.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ApplyTheme, "ApplyTheme" }, // 3142970827
		{ &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_BindEvents, "BindEvents" }, // 3145818620
		{ &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_ProcessStringCommand, "ProcessStringCommand" }, // 625942575
		{ &Z_Construct_UFunction_UMounteaDialogueUIBaseInterface_UnbindEvents, "UnbindEvents" }, // 3799621549
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<IMounteaDialogueUIBaseInterface>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UInterface,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::ClassParams = {
	&UMounteaDialogueUIBaseInterface::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueUIBaseInterface()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueUIBaseInterface.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueUIBaseInterface.OuterSingleton, Z_Construct_UClass_UMounteaDialogueUIBaseInterface_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueUIBaseInterface.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueUIBaseInterface>()
{
	return UMounteaDialogueUIBaseInterface::StaticClass();
}
UMounteaDialogueUIBaseInterface::UMounteaDialogueUIBaseInterface(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueUIBaseInterface);
UMounteaDialogueUIBaseInterface::~UMounteaDialogueUIBaseInterface() {}
// End Interface UMounteaDialogueUIBaseInterface

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueUIBaseInterface, UMounteaDialogueUIBaseInterface::StaticClass, TEXT("UMounteaDialogueUIBaseInterface"), &Z_Registration_Info_UClass_UMounteaDialogueUIBaseInterface, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueUIBaseInterface), 4118823433U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_3511452212(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Interfaces_HUD_MounteaDialogueUIBaseInterface_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
