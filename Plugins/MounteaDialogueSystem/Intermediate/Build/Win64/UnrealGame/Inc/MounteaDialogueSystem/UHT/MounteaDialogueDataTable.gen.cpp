// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueDataTable.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueDataTable() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UDataTable();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDataTable();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueDataTable_NoRegister();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin Class UMounteaDialogueDataTable
void UMounteaDialogueDataTable::StaticRegisterNativesUMounteaDialogueDataTable()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueDataTable);
UClass* Z_Construct_UClass_UMounteaDialogueDataTable_NoRegister()
{
	return UMounteaDialogueDataTable::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueDataTable_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "AutoExpandCategories", "DataTable,ImportOptions" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue Data Table\n *\n * A specialized subclass of UDataTable used within the Mountea Dialogue System.\n * This data table utilizes the `FDialogueRow` structure to store and manage dialogue entries.\n *\n * Each entry in this table represents a dialogue row containing dialogue text, associated sound, duration, and other metadata \n * essential for constructing dynamic and interactive dialogue sequences within the game.\n *\n * The dialogue data is highly flexible, allowing for integration with multiple participants, customized execution modes, and \n * support for various gameplay scenarios, such as quest dialogues, cutscenes, or branching narrative paths.\n *\n * This class provides a clean and structured way to organize dialogue content, making it easy to reference and manage through \n * gameplay code or Blueprint logic.\n */" },
#endif
		{ "IncludePath", "Data/MounteaDialogueDataTable.h" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueDataTable.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue Data Table\n\nA specialized subclass of UDataTable used within the Mountea Dialogue System.\nThis data table utilizes the `FDialogueRow` structure to store and manage dialogue entries.\n\nEach entry in this table represents a dialogue row containing dialogue text, associated sound, duration, and other metadata\nessential for constructing dynamic and interactive dialogue sequences within the game.\n\nThe dialogue data is highly flexible, allowing for integration with multiple participants, customized execution modes, and\nsupport for various gameplay scenarios, such as quest dialogues, cutscenes, or branching narrative paths.\n\nThis class provides a clean and structured way to organize dialogue content, making it easy to reference and manage through\ngameplay code or Blueprint logic." },
#endif
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueDataTable>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMounteaDialogueDataTable_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDataTable,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDataTable_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueDataTable_Statics::ClassParams = {
	&UMounteaDialogueDataTable::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueDataTable_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueDataTable_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueDataTable()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueDataTable.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueDataTable.OuterSingleton, Z_Construct_UClass_UMounteaDialogueDataTable_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueDataTable.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<UMounteaDialogueDataTable>()
{
	return UMounteaDialogueDataTable::StaticClass();
}
UMounteaDialogueDataTable::UMounteaDialogueDataTable(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueDataTable);
UMounteaDialogueDataTable::~UMounteaDialogueDataTable() {}
// End Class UMounteaDialogueDataTable

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueDataTable_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueDataTable, UMounteaDialogueDataTable::StaticClass, TEXT("UMounteaDialogueDataTable"), &Z_Registration_Info_UClass_UMounteaDialogueDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueDataTable), 1372138039U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueDataTable_h_2838897845(TEXT("/Script/MounteaDialogueSystem"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueDataTable_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueDataTable_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
