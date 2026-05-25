// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Ed/EdNode_MounteaDialogueGraphNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeEdNode_MounteaDialogueGraphNode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UEdGraphNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Class UEdNode_MounteaDialogueGraphNode
void UEdNode_MounteaDialogueGraphNode::StaticRegisterNativesUEdNode_MounteaDialogueGraphNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UEdNode_MounteaDialogueGraphNode);
UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_NoRegister()
{
	return UEdNode_MounteaDialogueGraphNode::StaticClass();
}
struct Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Ed/EdNode_MounteaDialogueGraphNode.h" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphNode.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueGraphNode_MetaData[] = {
		{ "Category", "Mountea Dialogue Graph" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Private/Ed/EdNode_MounteaDialogueGraphNode.h" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_DialogueGraphNode;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UEdNode_MounteaDialogueGraphNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode = { "DialogueGraphNode", nullptr, (EPropertyFlags)0x00120000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UEdNode_MounteaDialogueGraphNode, DialogueGraphNode), Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueGraphNode_MetaData), NewProp_DialogueGraphNode_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::NewProp_DialogueGraphNode,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UEdGraphNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::ClassParams = {
	&UEdNode_MounteaDialogueGraphNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::PropPointers),
	0,
	0x008800A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode()
{
	if (!Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton, Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UEdNode_MounteaDialogueGraphNode>()
{
	return UEdNode_MounteaDialogueGraphNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UEdNode_MounteaDialogueGraphNode);
// End Class UEdNode_MounteaDialogueGraphNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UEdNode_MounteaDialogueGraphNode, UEdNode_MounteaDialogueGraphNode::StaticClass, TEXT("UEdNode_MounteaDialogueGraphNode"), &Z_Registration_Info_UClass_UEdNode_MounteaDialogueGraphNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UEdNode_MounteaDialogueGraphNode), 2461122065U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_268512975(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Ed_EdNode_MounteaDialogueGraphNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
