// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Nodes/MounteaDialogueGraphNode_LeadNode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphNode_LeadNode() {}

// Begin Cross Module References
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueGraphNode_LeadNode
void UMounteaDialogueGraphNode_LeadNode::StaticRegisterNativesUMounteaDialogueGraphNode_LeadNode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphNode_LeadNode);
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_NoRegister()
{
	return UMounteaDialogueGraphNode_LeadNode::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "Mountea Dialogue Mountea|Dialogue Mountea Dialogue Mountea|Dialogue" },
		{ "ClassGroupNames", "Mountea|Dialogue" },
		{ "DisplayName", "Lead Node" },
		{ "IncludePath", "Nodes/MounteaDialogueGraphNode_LeadNode.h" },
		{ "ModuleRelativePath", "Public/Nodes/MounteaDialogueGraphNode_LeadNode.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Tree: Lead Node" },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphNode_LeadNode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UMounteaDialogueGraphNode_DialogueNodeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::ClassParams = {
	&UMounteaDialogueGraphNode_LeadNode::StaticClass,
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
	0x009000A0u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphNode_LeadNode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphNode_LeadNode.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphNode_LeadNode.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueGraphNode_LeadNode>()
{
	return UMounteaDialogueGraphNode_LeadNode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphNode_LeadNode);
UMounteaDialogueGraphNode_LeadNode::~UMounteaDialogueGraphNode_LeadNode() {}
// End Class UMounteaDialogueGraphNode_LeadNode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_LeadNode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphNode_LeadNode, UMounteaDialogueGraphNode_LeadNode::StaticClass, TEXT("UMounteaDialogueGraphNode_LeadNode"), &Z_Registration_Info_UClass_UMounteaDialogueGraphNode_LeadNode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphNode_LeadNode), 2161580563U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_LeadNode_h_4163702795(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_LeadNode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Nodes_MounteaDialogueGraphNode_LeadNode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
