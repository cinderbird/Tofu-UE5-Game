// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_AutoCompleteNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_AutoCompleteNode() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_NoRegister();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_CompleteNode();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphNode_AutoCompleteNode
void UMounteaDialogueGraphNode_AutoCompleteNode::StaticRegisterNativesUMounteaDialogueGraphNode_AutoCompleteNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_AutoCompleteNode);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_NoRegister()
{
	return UMounteaDialogueGraphNode_AutoCompleteNode::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "DisplayName", "Auto Complete Node" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_AutoCompleteNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_AutoCompleteNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Tree: Auto Complete Node" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_AutoCompleteNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode_CompleteNode,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::ClassParams = {
	&UMounteaDialogueGraphNode_AutoCompleteNode::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A1u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_AutoCompleteNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_AutoCompleteNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_AutoCompleteNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_AutoCompleteNode>()
{
	return UMounteaDialogueGraphNode_AutoCompleteNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_AutoCompleteNode);
UMounteaDialogueGraphNode_AutoCompleteNode::~UMounteaDialogueGraphNode_AutoCompleteNode() {}
// End Class UMounteaDialogueGraphNode_AutoCompleteNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_AutoCompleteNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_AutoCompleteNode, UMounteaDialogueGraphNode_AutoCompleteNode::StaticClass, TEXT("UMounteaDialogueGraphNode_AutoCompleteNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_AutoCompleteNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_AutoCompleteNode), 1745157358U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_AutoCompleteNode_h_864721663(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_AutoCompleteNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_AutoCompleteNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
