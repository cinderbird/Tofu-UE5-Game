// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecoratorBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecoratorBase() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UWorld_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraph_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState();
MOUNTEADIALOGUESYSTEM_API UFunction* Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Enum EDecoratorState
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecoratorState;
static UEnum* EDecoratorState_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("EDecoratorState"));
	}
	return Z_Registration_Info_UEnum_EDecoratorState.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UEnum* StaticEnum<EDecoratorState>()
{
	return EDecoratorState_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Initialized.Name", "EDecoratorState::Initialized" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "Uninitialized.Name", "EDecoratorState::Uninitialized" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDecoratorState::Uninitialized", (int64)EDecoratorState::Uninitialized },
		{ "EDecoratorState::Initialized", (int64)EDecoratorState::Initialized },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	"EDecoratorState",
	"EDecoratorState",
	Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState()
{
	if (!Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDecoratorState.InnerSingleton;
}
// End Enum EDecoratorState

// Begin Class UMounteaDialogueDecoratorBase Function CleanupDecorator
static const FName NAME_UMounteaDialogueDecoratorBase_CleanupDecorator = FName(TEXT("CleanupDecorator"));
void UMounteaDialogueDecoratorBase::CleanupDecorator()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_CleanupDecorator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		CleanupDecorator_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Cleans up the Decorator.\n\x09 * In Blueprints should be used to reset cached values to avoid blocking garbage collector.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Cleans up the Decorator.\nIn Blueprints should be used to reset cached values to avoid blocking garbage collector." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "CleanupDecorator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execCleanupDecorator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->CleanupDecorator_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function CleanupDecorator

// Begin Class UMounteaDialogueDecoratorBase Function EvaluateDecorator
struct MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueDecoratorBase_EvaluateDecorator = FName(TEXT("EvaluateDecorator"));
bool UMounteaDialogueDecoratorBase::EvaluateDecorator()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_EvaluateDecorator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms Parms;
	ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return EvaluateDecorator_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Evaluates the Decorator.\n\x09 * Called for each Node it is attached to.\n\x09 * Could enhance Node's 'CanStartNode'. Example would be: BP_RequireItem decorator, which would return true if Player has specific Item in inventory. Otherwise it returns false and its Node is not available in Selection of Answers.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Evaluates the Decorator.\nCalled for each Node it is attached to.\nCould enhance Node's 'CanStartNode'. Example would be: BP_RequireItem decorator, which would return true if Player has specific Item in inventory. Otherwise it returns false and its Node is not available in Selection of Answers." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "EvaluateDecorator", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventEvaluateDecorator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execEvaluateDecorator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->EvaluateDecorator_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function EvaluateDecorator

// Begin Class UMounteaDialogueDecoratorBase Function ExecuteDecorator
static const FName NAME_UMounteaDialogueDecoratorBase_ExecuteDecorator = FName(TEXT("ExecuteDecorator"));
void UMounteaDialogueDecoratorBase::ExecuteDecorator()
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_ExecuteDecorator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
	ProcessEvent(Func,NULL);
	}
	else
	{
		ExecuteDecorator_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Executes the Decorator.\n\x09 * Useful for triggering special events per Node, for instance, switching dialogue cameras.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Executes the Decorator.\nUseful for triggering special events per Node, for instance, switching dialogue cameras." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "ExecuteDecorator", nullptr, nullptr, nullptr, 0, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::Function_MetaDataParams) };
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execExecuteDecorator)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->ExecuteDecorator_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function ExecuteDecorator

// Begin Class UMounteaDialogueDecoratorBase Function GetBlacklistedNodeTypes
struct MounteaDialogueDecoratorBase_eventGetBlacklistedNodeTypes_Parms
{
	TSet<TSubclassOf<UMounteaDialogueGraphNode> > ReturnValue;
};
static const FName NAME_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes = FName(TEXT("GetBlacklistedNodeTypes"));
TSet<TSubclassOf<UMounteaDialogueGraphNode> > UMounteaDialogueDecoratorBase::GetBlacklistedNodeTypes() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventGetBlacklistedNodeTypes_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->GetBlacklistedNodeTypes_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FClassPropertyParams NewProp_ReturnValue_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::NewProp_ReturnValue_ElementProp = { "ReturnValue", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UClass, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetBlacklistedNodeTypes_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::NewProp_ReturnValue_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetBlacklistedNodeTypes", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventGetBlacklistedNodeTypes_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventGetBlacklistedNodeTypes_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetBlacklistedNodeTypes)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TSet<TSubclassOf<UMounteaDialogueGraphNode> >*)Z_Param__Result=P_THIS->GetBlacklistedNodeTypes_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetBlacklistedNodeTypes

// Begin Class UMounteaDialogueDecoratorBase Function GetDecoratorDocumentationLink
struct MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms
{
	FString ReturnValue;
};
static const FName NAME_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink = FName(TEXT("GetDecoratorDocumentationLink"));
FString UMounteaDialogueDecoratorBase::GetDecoratorDocumentationLink() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->GetDecoratorDocumentationLink_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetDecoratorDocumentationLink", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventGetDecoratorDocumentationLink_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetDecoratorDocumentationLink)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FString*)Z_Param__Result=P_THIS->GetDecoratorDocumentationLink_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetDecoratorDocumentationLink

// Begin Class UMounteaDialogueDecoratorBase Function GetDecoratorName
struct MounteaDialogueDecoratorBase_eventGetDecoratorName_Parms
{
	FText ReturnValue;
};
static const FName NAME_UMounteaDialogueDecoratorBase_GetDecoratorName = FName(TEXT("GetDecoratorName"));
FText UMounteaDialogueDecoratorBase::GetDecoratorName() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_GetDecoratorName);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventGetDecoratorName_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->GetDecoratorName_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetDecoratorName_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetDecoratorName", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventGetDecoratorName_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventGetDecoratorName_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetDecoratorName)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(FText*)Z_Param__Result=P_THIS->GetDecoratorName_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetDecoratorName

// Begin Class UMounteaDialogueDecoratorBase Function GetManager
struct MounteaDialogueDecoratorBase_eventGetManager_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> ReturnValue;
};
static const FName NAME_UMounteaDialogueDecoratorBase_GetManager = FName(TEXT("GetManager"));
TScriptInterface<IMounteaDialogueManagerInterface> UMounteaDialogueDecoratorBase::GetManager() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_GetManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventGetManager_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->GetManager_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * @return Owning Dialogue Manager.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "@return Owning Dialogue Manager." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetManager_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetManager", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventGetManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventGetManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetManager)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueManagerInterface>*)Z_Param__Result=P_THIS->GetManager_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetManager

// Begin Class UMounteaDialogueDecoratorBase Function GetOwner
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics
{
	struct MounteaDialogueDecoratorBase_eventGetOwner_Parms
	{
		UObject* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Owning Object of this Decorator.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "Owner" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Owning Object of this Decorator." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwner_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwner", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::MounteaDialogueDecoratorBase_eventGetOwner_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::MounteaDialogueDecoratorBase_eventGetOwner_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwner)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UObject**)Z_Param__Result=P_THIS->GetOwner();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetOwner

// Begin Class UMounteaDialogueDecoratorBase Function GetOwnerParticipant
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics
{
	struct MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms
	{
		TScriptInterface<IMounteaDialogueParticipantInterface> ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Owner Participant Interface.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "OwnerParticipant" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Owner Participant Interface." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0014000000000580, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwnerParticipant", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::MounteaDialogueDecoratorBase_eventGetOwnerParticipant_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwnerParticipant)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(TScriptInterface<IMounteaDialogueParticipantInterface>*)Z_Param__Result=P_THIS->GetOwnerParticipant();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetOwnerParticipant

// Begin Class UMounteaDialogueDecoratorBase Function GetOwningGraph
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics
{
	struct MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms
	{
		UMounteaDialogueGraph* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Owning Graph of this Decorator.\n\x09 *\n\x09 * \xe2\x9d\x97 Might return Null if this Decorator is owned by Node!\n\x09 */" },
#endif
		{ "CompactNodeTitle", "OwningGraph" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Owning Graph of this Decorator.\n\n\xe2\x9d\x97 Might return Null if this Decorator is owned by Node!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraph_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::MounteaDialogueDecoratorBase_eventGetOwningGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraph**)Z_Param__Result=P_THIS->GetOwningGraph();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetOwningGraph

// Begin Class UMounteaDialogueDecoratorBase Function GetOwningNode
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics
{
	struct MounteaDialogueDecoratorBase_eventGetOwningNode_Parms
	{
		UMounteaDialogueGraphNode* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Owning Node of this Decorator.\n\x09 *\n\x09 * \xe2\x9d\x97 Might return Null if this Decorator is owned by Graph!\n\x09 */" },
#endif
		{ "CompactNodeTitle", "OwningNode" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Owning Node of this Decorator.\n\n\xe2\x9d\x97 Might return Null if this Decorator is owned by Graph!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningNode_Parms, ReturnValue), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningNode", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::MounteaDialogueDecoratorBase_eventGetOwningNode_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::MounteaDialogueDecoratorBase_eventGetOwningNode_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningNode)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UMounteaDialogueGraphNode**)Z_Param__Result=P_THIS->GetOwningNode();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetOwningNode

// Begin Class UMounteaDialogueDecoratorBase Function GetOwningWorld
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics
{
	struct MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms
	{
		UWorld* ReturnValue;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Returns Owning World this Decorator belongs to.\n\x09 *\n\x09 * \xe2\x9d\x97 Should not return Null, but possibly can.\n\x09 */" },
#endif
		{ "CompactNodeTitle", "World" },
		{ "CustomTag", "MounteaK2Getter" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Returns Owning World this Decorator belongs to.\n\n\xe2\x9d\x97 Should not return Null, but possibly can." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms, ReturnValue), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "GetOwningWorld", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x54020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::MounteaDialogueDecoratorBase_eventGetOwningWorld_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execGetOwningWorld)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(UWorld**)Z_Param__Result=P_THIS->GetOwningWorld();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function GetOwningWorld

// Begin Class UMounteaDialogueDecoratorBase Function InitializeDecorator
struct MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms
{
	UWorld* World;
	TScriptInterface<IMounteaDialogueParticipantInterface> OwningParticipant;
	TScriptInterface<IMounteaDialogueManagerInterface> NewOwningManager;
};
static const FName NAME_UMounteaDialogueDecoratorBase_InitializeDecorator = FName(TEXT("InitializeDecorator"));
void UMounteaDialogueDecoratorBase::InitializeDecorator(UWorld* World, TScriptInterface<IMounteaDialogueParticipantInterface> const& OwningParticipant, TScriptInterface<IMounteaDialogueManagerInterface> const& NewOwningManager)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_InitializeDecorator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms Parms;
		Parms.World=World;
		Parms.OwningParticipant=OwningParticipant;
		Parms.NewOwningManager=NewOwningManager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		InitializeDecorator_Implementation(World, OwningParticipant, NewOwningManager);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Initializes the Decorator.\n\x09 * In C++ saves the World for later use.\n\x09 * In Blueprints should be used to cache values to avoid overhead in 'ExecuteDecorator'.\n\x09 * Dialogue Manager will not override if empty. If need to override with nullptr use `SetOwningManager` instead.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Initializes the Decorator.\nIn C++ saves the World for later use.\nIn Blueprints should be used to cache values to avoid overhead in 'ExecuteDecorator'.\nDialogue Manager will not override if empty. If need to override with nullptr use `SetOwningManager` instead." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningParticipant_MetaData[] = {
		{ "NativeConst", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOwningManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewOwningManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant = { "OwningParticipant", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms, OwningParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningParticipant_MetaData), NewProp_OwningParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_NewOwningManager = { "NewOwningManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms, NewOwningManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOwningManager_MetaData), NewProp_NewOwningManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_World,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_OwningParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::NewProp_NewOwningManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "InitializeDecorator", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventInitializeDecorator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execInitializeDecorator)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_GET_TINTERFACE_REF(IMounteaDialogueParticipantInterface,Z_Param_Out_OwningParticipant);
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_NewOwningManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->InitializeDecorator_Implementation(Z_Param_World,Z_Param_Out_OwningParticipant,Z_Param_Out_NewOwningManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function InitializeDecorator

// Begin Class UMounteaDialogueDecoratorBase Function IsDecoratorAllowedForGraph
struct MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph = FName(TEXT("IsDecoratorAllowedForGraph"));
bool UMounteaDialogueDecoratorBase::IsDecoratorAllowedForGraph() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->IsDecoratorAllowedForGraph_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09""Defines whether this Decorator can be attached to Graph directly, or whether only Node attachment is allowed.\n\x09 * \n\x09 * @return True if can be attached to graph, false otherwise.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines whether this Decorator can be attached to Graph directly, or whether only Node attachment is allowed.\n\n@return True if can be attached to graph, false otherwise." },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "IsDecoratorAllowedForGraph", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x5C020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorAllowedForGraph_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execIsDecoratorAllowedForGraph)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDecoratorAllowedForGraph_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function IsDecoratorAllowedForGraph

// Begin Class UMounteaDialogueDecoratorBase Function IsDecoratorStackable
struct MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms
{
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueDecoratorBase_IsDecoratorStackable = FName(TEXT("IsDecoratorStackable"));
bool UMounteaDialogueDecoratorBase::IsDecoratorStackable() const
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_IsDecoratorStackable);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms Parms;
		const_cast<UMounteaDialogueDecoratorBase*>(this)->ProcessEvent(Func,&Parms);
		return !!Parms.ReturnValue;
	}
	else
	{
		return const_cast<UMounteaDialogueDecoratorBase*>(this)->IsDecoratorStackable_Implementation();
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Defines if more than 1 instance of this decorator can be attached to single Node/Graph.\n\x09 * Generally false, however, in some cases true is required: sending UI commands, playing sound or for generic\n\x09 * use decorators that might be repurposed multiple times.\n\x09 * \n\x09 * @return Whether decorator can be stacked or not\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Defines if more than 1 instance of this decorator can be attached to single Node/Graph.\nGenerally false, however, in some cases true is required: sending UI commands, playing sound or for generic\nuse decorators that might be repurposed multiple times.\n\n@return Whether decorator can be stacked or not" },
#endif
	};
#endif // WITH_METADATA
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "IsDecoratorStackable", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x48020C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventIsDecoratorStackable_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execIsDecoratorStackable)
{
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->IsDecoratorStackable_Implementation();
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function IsDecoratorStackable

// Begin Class UMounteaDialogueDecoratorBase Function SetOwningManager
struct MounteaDialogueDecoratorBase_eventSetOwningManager_Parms
{
	TScriptInterface<IMounteaDialogueManagerInterface> NewOwningManager;
};
static const FName NAME_UMounteaDialogueDecoratorBase_SetOwningManager = FName(TEXT("SetOwningManager"));
void UMounteaDialogueDecoratorBase::SetOwningManager(TScriptInterface<IMounteaDialogueManagerInterface> const& NewOwningManager)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_SetOwningManager);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventSetOwningManager_Parms Parms;
		Parms.NewOwningManager=NewOwningManager;
	ProcessEvent(Func,&Parms);
	}
	else
	{
		SetOwningManager_Implementation(NewOwningManager);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 *\x09Updates Owning Manager. Can be used to clean the decorator.\n\x09 * @param NewOwningManager\x09\x09\x09Owning Manager that will handle this Decorator.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Updates Owning Manager. Can be used to clean the decorator.\n@param NewOwningManager                      Owning Manager that will handle this Decorator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NewOwningManager_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_NewOwningManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::NewProp_NewOwningManager = { "NewOwningManager", nullptr, (EPropertyFlags)0x0014000008000182, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventSetOwningManager_Parms, NewOwningManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NewOwningManager_MetaData), NewProp_NewOwningManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::NewProp_NewOwningManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "SetOwningManager", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventSetOwningManager_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventSetOwningManager_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execSetOwningManager)
{
	P_GET_TINTERFACE_REF(IMounteaDialogueManagerInterface,Z_Param_Out_NewOwningManager);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->SetOwningManager_Implementation(Z_Param_Out_NewOwningManager);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function SetOwningManager

// Begin Class UMounteaDialogueDecoratorBase Function StoreWorldReference
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics
{
	struct MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms
	{
		UWorld* World;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Stores reference to World.\n\x09 * World is needed to perform World affecting tasks.\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Stores reference to World.\nWorld is needed to perform World affecting tasks." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_World;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::NewProp_World = { "World", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms, World), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::NewProp_World,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "StoreWorldReference", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::PropPointers), sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::MounteaDialogueDecoratorBase_eventStoreWorldReference_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execStoreWorldReference)
{
	P_GET_OBJECT(UWorld,Z_Param_World);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->StoreWorldReference(Z_Param_World);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function StoreWorldReference

// Begin Class UMounteaDialogueDecoratorBase Function ValidateDecorator
struct MounteaDialogueDecoratorBase_eventValidateDecorator_Parms
{
	TArray<FText> ValidationMessages;
	bool ReturnValue;

	/** Constructor, initializes return property only **/
	MounteaDialogueDecoratorBase_eventValidateDecorator_Parms()
		: ReturnValue(false)
	{
	}
};
static const FName NAME_UMounteaDialogueDecoratorBase_ValidateDecorator = FName(TEXT("ValidateDecorator"));
bool UMounteaDialogueDecoratorBase::ValidateDecorator(TArray<FText>& ValidationMessages)
{
	UFunction* Func = FindFunctionChecked(NAME_UMounteaDialogueDecoratorBase_ValidateDecorator);
	if (!Func->GetOwnerClass()->HasAnyClassFlags(CLASS_Native))
	{
		MounteaDialogueDecoratorBase_eventValidateDecorator_Parms Parms;
		Parms.ValidationMessages=ValidationMessages;
	ProcessEvent(Func,&Parms);
		ValidationMessages=Parms.ValidationMessages;
		return !!Parms.ReturnValue;
	}
	else
	{
		return ValidateDecorator_Implementation(ValidationMessages);
	}
}
struct Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Validates the Decorator.\n\x09 * Called for each Node it is attached to.\n\x09 * Works as safety measure to avoid calling broken Decorators with invalid references.\n\x09 *\n\x09 * False value stops Dialogue whatsoever.\n\x09 * Validation is called before Context is initialized!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Validates the Decorator.\nCalled for each Node it is attached to.\nWorks as safety measure to avoid calling broken Decorators with invalid references.\n\nFalse value stops Dialogue whatsoever.\nValidation is called before Context is initialized!" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FTextPropertyParams NewProp_ValidationMessages_Inner;
	static const UECodeGen_Private::FArrayPropertyParams NewProp_ValidationMessages;
	static void NewProp_ReturnValue_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FTextPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages_Inner = { "ValidationMessages", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages = { "ValidationMessages", nullptr, (EPropertyFlags)0x0010000008000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms, ValidationMessages), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
void Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue_SetBit(void* Obj)
{
	((MounteaDialogueDecoratorBase_eventValidateDecorator_Parms*)Obj)->ReturnValue = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms), &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages_Inner,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ValidationMessages,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::NewProp_ReturnValue,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase, nullptr, "ValidateDecorator", nullptr, nullptr, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::PropPointers), sizeof(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420C00, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::Function_MetaDataParams), Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::Function_MetaDataParams) };
static_assert(sizeof(MounteaDialogueDecoratorBase_eventValidateDecorator_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(UMounteaDialogueDecoratorBase::execValidateDecorator)
{
	P_GET_TARRAY_REF(FText,Z_Param_Out_ValidationMessages);
	P_FINISH;
	P_NATIVE_BEGIN;
	*(bool*)Z_Param__Result=P_THIS->ValidateDecorator_Implementation(Z_Param_Out_ValidationMessages);
	P_NATIVE_END;
}
// End Class UMounteaDialogueDecoratorBase Function ValidateDecorator

// Begin Class UMounteaDialogueDecoratorBase
void UMounteaDialogueDecoratorBase::StaticRegisterNativesUMounteaDialogueDecoratorBase()
{
	UClass* Class = UMounteaDialogueDecoratorBase::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "CleanupDecorator", &UMounteaDialogueDecoratorBase::execCleanupDecorator },
		{ "EvaluateDecorator", &UMounteaDialogueDecoratorBase::execEvaluateDecorator },
		{ "ExecuteDecorator", &UMounteaDialogueDecoratorBase::execExecuteDecorator },
		{ "GetBlacklistedNodeTypes", &UMounteaDialogueDecoratorBase::execGetBlacklistedNodeTypes },
		{ "GetDecoratorDocumentationLink", &UMounteaDialogueDecoratorBase::execGetDecoratorDocumentationLink },
		{ "GetDecoratorName", &UMounteaDialogueDecoratorBase::execGetDecoratorName },
		{ "GetManager", &UMounteaDialogueDecoratorBase::execGetManager },
		{ "GetOwner", &UMounteaDialogueDecoratorBase::execGetOwner },
		{ "GetOwnerParticipant", &UMounteaDialogueDecoratorBase::execGetOwnerParticipant },
		{ "GetOwningGraph", &UMounteaDialogueDecoratorBase::execGetOwningGraph },
		{ "GetOwningNode", &UMounteaDialogueDecoratorBase::execGetOwningNode },
		{ "GetOwningWorld", &UMounteaDialogueDecoratorBase::execGetOwningWorld },
		{ "InitializeDecorator", &UMounteaDialogueDecoratorBase::execInitializeDecorator },
		{ "IsDecoratorAllowedForGraph", &UMounteaDialogueDecoratorBase::execIsDecoratorAllowedForGraph },
		{ "IsDecoratorStackable", &UMounteaDialogueDecoratorBase::execIsDecoratorStackable },
		{ "SetOwningManager", &UMounteaDialogueDecoratorBase::execSetOwningManager },
		{ "StoreWorldReference", &UMounteaDialogueDecoratorBase::execStoreWorldReference },
		{ "ValidateDecorator", &UMounteaDialogueDecoratorBase::execValidateDecorator },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecoratorBase);
UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister()
{
	return UMounteaDialogueDecoratorBase::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorator\n *\n * Decorators are instanced and exist only as \"triggers\".\n * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n */" },
#endif
		{ "IncludePath", "Decorators/MounteaDialogueDecoratorBase.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorator\n\nDecorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorTickEvent_MetaData[] = {
		{ "Category", "Mountea|Dialogue" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorName_MetaData[] = {
		{ "Category", "Private" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_BlacklistedNodes_MetaData[] = {
		{ "Category", "Private" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorState_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningWorld_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwnerParticipant_MetaData[] = {
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OwningManager_MetaData[] = {
		{ "Category", "Mountea|Dialogue|Decorator" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_DecoratorTickEvent;
	static const UECodeGen_Private::FTextPropertyParams NewProp_DecoratorName;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_BlacklistedNodes_ElementProp;
	static const UECodeGen_Private::FSetPropertyParams NewProp_BlacklistedNodes;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DecoratorState_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DecoratorState;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OwningWorld;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwnerParticipant;
	static const UECodeGen_Private::FInterfacePropertyParams NewProp_OwningManager;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_CleanupDecorator, "CleanupDecorator" }, // 722400235
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_EvaluateDecorator, "EvaluateDecorator" }, // 784986885
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ExecuteDecorator, "ExecuteDecorator" }, // 3241461099
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetBlacklistedNodeTypes, "GetBlacklistedNodeTypes" }, // 2259153270
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorDocumentationLink, "GetDecoratorDocumentationLink" }, // 2712963833
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetDecoratorName, "GetDecoratorName" }, // 3739823034
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetManager, "GetManager" }, // 4079231483
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwner, "GetOwner" }, // 1156383277
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwnerParticipant, "GetOwnerParticipant" }, // 726652405
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningGraph, "GetOwningGraph" }, // 2717284573
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningNode, "GetOwningNode" }, // 3057018663
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_GetOwningWorld, "GetOwningWorld" }, // 3672482791
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_InitializeDecorator, "InitializeDecorator" }, // 2673363147
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorAllowedForGraph, "IsDecoratorAllowedForGraph" }, // 2415488465
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_IsDecoratorStackable, "IsDecoratorStackable" }, // 2972562859
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_SetOwningManager, "SetOwningManager" }, // 2550922816
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_StoreWorldReference, "StoreWorldReference" }, // 4030445189
		{ &Z_Construct_UFunction_UMounteaDialogueDecoratorBase_ValidateDecorator, "ValidateDecorator" }, // 337543129
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static const UECodeGen_Private::FImplementedInterfaceParams InterfaceParams[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecoratorBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorTickEvent = { "DecoratorTickEvent", nullptr, (EPropertyFlags)0x0010000010080000, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, DecoratorTickEvent), Z_Construct_UDelegateFunction_MounteaDialogueSystem_MounteaDialogueTick__DelegateSignature, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorTickEvent_MetaData), NewProp_DecoratorTickEvent_MetaData) }; // 364774892
const UECodeGen_Private::FTextPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorName = { "DecoratorName", nullptr, (EPropertyFlags)0x0020080000000014, UECodeGen_Private::EPropertyGenFlags::Text, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, DecoratorName), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorName_MetaData), NewProp_DecoratorName_MetaData) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_BlacklistedNodes_ElementProp = { "BlacklistedNodes", nullptr, (EPropertyFlags)0x0004000000000000, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSetPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_BlacklistedNodes = { "BlacklistedNodes", nullptr, (EPropertyFlags)0x0024080000000014, UECodeGen_Private::EPropertyGenFlags::Set, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, BlacklistedNodes), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_BlacklistedNodes_MetaData), NewProp_BlacklistedNodes_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState = { "DecoratorState", nullptr, (EPropertyFlags)0x0020080000000000, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, DecoratorState), Z_Construct_UEnum_MounteaDialogueSystem_EDecoratorState, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorState_MetaData), NewProp_DecoratorState_MetaData) }; // 402878418
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld = { "OwningWorld", nullptr, (EPropertyFlags)0x0124080000000000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, OwningWorld), Z_Construct_UClass_UWorld_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningWorld_MetaData), NewProp_OwningWorld_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant = { "OwnerParticipant", nullptr, (EPropertyFlags)0x0024080000000000, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, OwnerParticipant), Z_Construct_UClass_UMounteaDialogueParticipantInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwnerParticipant_MetaData), NewProp_OwnerParticipant_MetaData) };
const UECodeGen_Private::FInterfacePropertyParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningManager = { "OwningManager", nullptr, (EPropertyFlags)0x00240c0000000014, UECodeGen_Private::EPropertyGenFlags::Interface, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecoratorBase, OwningManager), Z_Construct_UClass_UMounteaDialogueManagerInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OwningManager_MetaData), NewProp_OwningManager_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorTickEvent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorName,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_BlacklistedNodes_ElementProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_BlacklistedNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_DecoratorState,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningWorld,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwnerParticipant,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::NewProp_OwningManager,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FImplementedInterfaceParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::InterfaceParams[] = {
	{ Z_Construct_UClass_UMounteaDialogueTickableObject_NoRegister, (int32)VTABLE_OFFSET(UMounteaDialogueDecoratorBase, IMounteaDialogueTickableObject), false },  // 2602973918
};
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::ClassParams = {
	&UMounteaDialogueDecoratorBase::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers,
	InterfaceParams,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::PropPointers),
	UE_ARRAY_COUNT(InterfaceParams),
	0x009010A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecoratorBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecoratorBase>()
{
	return UMounteaDialogueDecoratorBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecoratorBase);
UMounteaDialogueDecoratorBase::~UMounteaDialogueDecoratorBase() {}
// End Class UMounteaDialogueDecoratorBase

// Begin ScriptStruct FMounteaDialogueDecorator
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator;
class UScriptStruct* FMounteaDialogueDecorator::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FMounteaDialogueDecorator, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("MounteaDialogueDecorator"));
	}
	return Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FMounteaDialogueDecorator>()
{
	return FMounteaDialogueDecorator::StaticStruct();
}
struct Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Dialogue Decorator Structure.\n * Holds reference to its Instanced Decorator.\n */" },
#endif
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Dialogue Decorator Structure.\nHolds reference to its Instanced Decorator." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorType_MetaData[] = {
		{ "AllowAbstract", "false" },
		{ "BlueprintBaseOnly", "true" },
		{ "Category", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Decorators can help out with enhancing the Dialogue flow.\n\x09 * Those Decorators are instanced and exist only as \"triggers\".\n\x09 * Could be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc.\n\x09 */" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecoratorBase.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Decorators can help out with enhancing the Dialogue flow.\nThose Decorators are instanced and exist only as \"triggers\".\nCould be used to start audio, play animation or do some logic behind the curtains, like triggering Cutscene etc." },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DecoratorType;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FMounteaDialogueDecorator>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType = { "DecoratorType", nullptr, (EPropertyFlags)0x011600000008000d, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FMounteaDialogueDecorator, DecoratorType), Z_Construct_UClass_UMounteaDialogueDecoratorBase_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorType_MetaData), NewProp_DecoratorType_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewProp_DecoratorType,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"MounteaDialogueDecorator",
	Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::PropPointers),
	sizeof(FMounteaDialogueDecorator),
	alignof(FMounteaDialogueDecorator),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000005),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FMounteaDialogueDecorator()
{
	if (!Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton, Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator.InnerSingleton;
}
// End ScriptStruct FMounteaDialogueDecorator

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EDecoratorState_StaticEnum, TEXT("EDecoratorState"), &Z_Registration_Info_UEnum_EDecoratorState, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 402878418U) },
	};
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FMounteaDialogueDecorator::StaticStruct, Z_Construct_UScriptStruct_FMounteaDialogueDecorator_Statics::NewStructOps, TEXT("MounteaDialogueDecorator"), &Z_Registration_Info_UScriptStruct_MounteaDialogueDecorator, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FMounteaDialogueDecorator), 2684795600U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecoratorBase, UMounteaDialogueDecoratorBase::StaticClass, TEXT("UMounteaDialogueDecoratorBase"), &Z_Registration_Info_UClass_UMounteaDialogueDecoratorBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecoratorBase), 512681025U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_1394857002(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ClassInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::ScriptStructInfo),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecoratorBase_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
