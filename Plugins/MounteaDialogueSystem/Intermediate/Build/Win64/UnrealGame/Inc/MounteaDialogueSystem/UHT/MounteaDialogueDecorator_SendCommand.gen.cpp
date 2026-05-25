// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Decorators/MounteaDialogueDecorator_SendCommand.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDecorator_SendCommand() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDecoratorBase();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDecorator_SendCommand
void UMounteaDialogueDecorator_SendCommand::StaticRegisterNativesUMounteaDialogueDecorator_SendCommand()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDecorator_SendCommand);
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_NoRegister()
{
	return UMounteaDialogueDecorator_SendCommand::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue,Command Mountea, Dialogue" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n *\x09Mountea Dialogue Decorators\n *\n * Implements native support send Command to Dialogue Participant.\n */" },
#endif
		{ "DisplayName", "Send Command" },
		{ "IncludePath", "Decorators/MounteaDialogueDecorator_SendCommand.h" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SendCommand.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Decorators\n\nImplements native support send Command to Dialogue Participant." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_Command_MetaData[] = {
		{ "Category", "Command" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SendCommand.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptionalPayload_MetaData[] = {
		{ "Category", "Payload" },
		{ "ModuleRelativePath", "Public/Decorators/MounteaDialogueDecorator_SendCommand.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_Command;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_OptionalPayload;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDecorator_SendCommand>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::NewProp_Command = { "Command", nullptr, (EPropertyFlags)0x0020080001000015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_SendCommand, Command), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_Command_MetaData), NewProp_Command_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::NewProp_OptionalPayload = { "OptionalPayload", nullptr, (EPropertyFlags)0x0124080001000015, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueDecorator_SendCommand, OptionalPayload), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptionalPayload_MetaData), NewProp_OptionalPayload_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::NewProp_Command,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::NewProp_OptionalPayload,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueDecoratorBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::ClassParams = {
	&UMounteaDialogueDecorator_SendCommand::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::PropPointers),
	0,
	0x009010A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDecorator_SendCommand.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDecorator_SendCommand.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDecorator_SendCommand.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDecorator_SendCommand>()
{
	return UMounteaDialogueDecorator_SendCommand::StaticClass();
}
UMounteaDialogueDecorator_SendCommand::UMounteaDialogueDecorator_SendCommand() {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDecorator_SendCommand);
UMounteaDialogueDecorator_SendCommand::~UMounteaDialogueDecorator_SendCommand() {}
// End Class UMounteaDialogueDecorator_SendCommand

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SendCommand_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDecorator_SendCommand, UMounteaDialogueDecorator_SendCommand::StaticClass, TEXT("UMounteaDialogueDecorator_SendCommand"), &Z_Registration_Info_UClass_UMounteaDialogueDecorator_SendCommand, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDecorator_SendCommand), 1297132078U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SendCommand_h_23632099(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SendCommand_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Decorators_MounteaDialogueDecorator_SendCommand_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
