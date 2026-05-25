// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystem/Public/Data/MounteaDialogueGraphExtraDataTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphExtraDataTypes() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportData();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportFilesMap();
MOUNTEADIALOGUESYSTEM_API UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportSourceData();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystem();
// End Cross Module References

// Begin ScriptStruct FDialogueImportData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueImportData;
class UScriptStruct* FDialogueImportData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueImportData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueImportData, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueImportData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueImportData>()
{
	return FDialogueImportData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueImportData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonFile_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "NoResetToDefault", "" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_JsonData_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "MultiLine", "" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonFile;
	static const UECodeGen_Private::FStrPropertyParams NewProp_JsonData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueImportData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueImportData_Statics::NewProp_JsonFile = { "JsonFile", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportData, JsonFile), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonFile_MetaData), NewProp_JsonFile_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueImportData_Statics::NewProp_JsonData = { "JsonData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportData, JsonData), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_JsonData_MetaData), NewProp_JsonData_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueImportData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportData_Statics::NewProp_JsonFile,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportData_Statics::NewProp_JsonData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueImportData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueImportData",
	Z_Construct_UScriptStruct_FDialogueImportData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportData_Statics::PropPointers),
	sizeof(FDialogueImportData),
	alignof(FDialogueImportData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueImportData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueImportData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueImportData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportData.InnerSingleton;
}
// End ScriptStruct FDialogueImportData

// Begin ScriptStruct FDialogueImportFilesMap
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueImportFilesMap;
class UScriptStruct* FDialogueImportFilesMap::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueImportFilesMap, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueImportFilesMap"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueImportFilesMap>()
{
	return FDialogueImportFilesMap::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_FileToContentMap_MetaData[] = {
		{ "Category", "Import" },
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "NoResetToDefault", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_FileToContentMap_ValueProp;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_FileToContentMap_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_FileToContentMap;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueImportFilesMap>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap_ValueProp = { "FileToContentMap", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogueImportData, METADATA_PARAMS(0, nullptr) }; // 1632661691
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap_Key_KeyProp = { "FileToContentMap_Key", nullptr, (EPropertyFlags)0x0004000000020001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap = { "FileToContentMap", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportFilesMap, FileToContentMap), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_FileToContentMap_MetaData), NewProp_FileToContentMap_MetaData) }; // 1632661691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewProp_FileToContentMap,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueImportFilesMap",
	Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::PropPointers),
	sizeof(FDialogueImportFilesMap),
	alignof(FDialogueImportFilesMap),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportFilesMap()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.InnerSingleton, Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportFilesMap.InnerSingleton;
}
// End ScriptStruct FDialogueImportFilesMap

// Begin ScriptStruct FDialogueImportSourceData
static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_DialogueImportSourceData;
class UScriptStruct* FDialogueImportSourceData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportSourceData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_DialogueImportSourceData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FDialogueImportSourceData, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystem(), TEXT("DialogueImportSourceData"));
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportSourceData.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEM_API UScriptStruct* StaticStruct<FDialogueImportSourceData>()
{
	return FDialogueImportSourceData::StaticStruct();
}
struct Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueAssetPath_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to saved Graph asset - reimport might try to import to different folder and we don't want to allow that!\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to saved Graph asset - reimport might try to import to different folder and we don't want to allow that!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DialogueSourcePath_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Path to Graph Source .mntedlg file\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Path to Graph Source .mntedlg file" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ImportData_MetaData[] = {
		{ "Category", "Import" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// TODO: Maybe add FDate as well?\n// Asset Path x Source Data\n" },
#endif
		{ "ModuleRelativePath", "Public/Data/MounteaDialogueGraphExtraDataTypes.h" },
		{ "NoResetToDefault", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "TODO: Maybe add FDate as well?\nAsset Path x Source Data" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueAssetPath;
	static const UECodeGen_Private::FStrPropertyParams NewProp_DialogueSourcePath;
	static const UECodeGen_Private::FStructPropertyParams NewProp_ImportData_ValueProp;
	static const UECodeGen_Private::FStrPropertyParams NewProp_ImportData_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_ImportData;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static void* NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FDialogueImportSourceData>();
	}
	static const UECodeGen_Private::FStructParams StructParams;
};
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_DialogueAssetPath = { "DialogueAssetPath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportSourceData, DialogueAssetPath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueAssetPath_MetaData), NewProp_DialogueAssetPath_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_DialogueSourcePath = { "DialogueSourcePath", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportSourceData, DialogueSourcePath), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DialogueSourcePath_MetaData), NewProp_DialogueSourcePath_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData_ValueProp = { "ImportData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FDialogueImportData, METADATA_PARAMS(0, nullptr) }; // 1632661691
const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData_Key_KeyProp = { "ImportData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData = { "ImportData", nullptr, (EPropertyFlags)0x0010000000020001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(FDialogueImportSourceData, ImportData), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ImportData_MetaData), NewProp_ImportData_MetaData) }; // 1632661691
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_DialogueAssetPath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_DialogueSourcePath,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewProp_ImportData,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::PropPointers) < 2048);
const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::StructParams = {
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystem,
	nullptr,
	&NewStructOps,
	"DialogueImportSourceData",
	Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::PropPointers,
	UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::PropPointers),
	sizeof(FDialogueImportSourceData),
	alignof(FDialogueImportSourceData),
	RF_Public|RF_Transient|RF_MarkAsNative,
	EStructFlags(0x00000001),
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::Struct_MetaDataParams), Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::Struct_MetaDataParams)
};
UScriptStruct* Z_Construct_UScriptStruct_FDialogueImportSourceData()
{
	if (!Z_Registration_Info_UScriptStruct_DialogueImportSourceData.InnerSingleton)
	{
		UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_DialogueImportSourceData.InnerSingleton, Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::StructParams);
	}
	return Z_Registration_Info_UScriptStruct_DialogueImportSourceData.InnerSingleton;
}
// End ScriptStruct FDialogueImportSourceData

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphExtraDataTypes_h_Statics
{
	static constexpr FStructRegisterCompiledInInfo ScriptStructInfo[] = {
		{ FDialogueImportData::StaticStruct, Z_Construct_UScriptStruct_FDialogueImportData_Statics::NewStructOps, TEXT("DialogueImportData"), &Z_Registration_Info_UScriptStruct_DialogueImportData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueImportData), 1632661691U) },
		{ FDialogueImportFilesMap::StaticStruct, Z_Construct_UScriptStruct_FDialogueImportFilesMap_Statics::NewStructOps, TEXT("DialogueImportFilesMap"), &Z_Registration_Info_UScriptStruct_DialogueImportFilesMap, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueImportFilesMap), 3083880502U) },
		{ FDialogueImportSourceData::StaticStruct, Z_Construct_UScriptStruct_FDialogueImportSourceData_Statics::NewStructOps, TEXT("DialogueImportSourceData"), &Z_Registration_Info_UScriptStruct_DialogueImportSourceData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FDialogueImportSourceData), 2208357014U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphExtraDataTypes_h_3704080316(TEXT("/Script/MounteaDialogueSystem"),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphExtraDataTypes_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Data_MounteaDialogueGraphExtraDataTypes_h_Statics::ScriptStructInfo),
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
