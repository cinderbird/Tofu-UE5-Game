// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "RTMSDFEditor/Public/Settings/RTMSDF_PerUserEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeRTMSDF_PerUserEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_PerUserEditorSettings();
RTMSDFEDITOR_API UClass* Z_Construct_UClass_URTMSDF_PerUserEditorSettings_NoRegister();
UPackage* Z_Construct_UPackage__Script_RTMSDFEditor();
// End Cross Module References

// Begin Class URTMSDF_PerUserEditorSettings
void URTMSDF_PerUserEditorSettings::StaticRegisterNativesURTMSDF_PerUserEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(URTMSDF_PerUserEditorSettings);
UClass* Z_Construct_UClass_URTMSDF_PerUserEditorSettings_NoRegister()
{
	return URTMSDF_PerUserEditorSettings::StaticClass();
}
struct Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "//~ NOTE: Not currently per user as I can't find a way to get the DefaultEditorPerProjectUserSettings.ini to work from a plugin\n//~ TODO: Work out how UInterchangeProjectSettings manages to be per-user, despite being in the engine config\n" },
#endif
		{ "DisplayName", "RTMSDF Editor Settings" },
		{ "IncludePath", "Settings/RTMSDF_PerUserEditorSettings.h" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailSingleChannel_MetaData[] = {
		{ "Category", "Thumbnails" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to be used for SDFs with a single channel\n" },
#endif
		{ "DisplayName", "Single Channel Material" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to be used for SDFs with a single channel" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailMSDF_MetaData[] = {
		{ "Category", "Thumbnails" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to be used for MSDFs\n" },
#endif
		{ "DisplayName", "MSDF Material" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to be used for MSDFs" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailMultichannel_MetaData[] = {
		{ "Category", "Thumbnails" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to be used for SDFs with multiple channels (i.e. with separate SDFs packed into RGBA)\n" },
#endif
		{ "DisplayName", "Multichannel Material" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to be used for SDFs with multiple channels (i.e. with separate SDFs packed into RGBA)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailPreserveRGB_MetaData[] = {
		{ "Category", "Thumbnails" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Material to be used for textures that have SDF baked into the alpha channel, but RGB channels hold original color data)\n" },
#endif
		{ "DisplayName", "Preserve RGB Material" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Material to be used for textures that have SDF baked into the alpha channel, but RGB channels hold original color data)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bLabelThumbnailsAsSDF_MetaData[] = {
		{ "Category", "Thumbnails" },
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
#if WITH_EDITORONLY_DATA
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailSingleChannel_Inst_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailMSDF_Inst_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailMultichannel_Inst_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SDFThumbnailPreserveRGB_Inst_MetaData[] = {
		{ "ModuleRelativePath", "Public/Settings/RTMSDF_PerUserEditorSettings.h" },
	};
#endif // WITH_EDITORONLY_DATA
#endif // WITH_METADATA
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SDFThumbnailSingleChannel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SDFThumbnailMSDF;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SDFThumbnailMultichannel;
	static const UECodeGen_Private::FSoftObjectPropertyParams NewProp_SDFThumbnailPreserveRGB;
	static void NewProp_bLabelThumbnailsAsSDF_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bLabelThumbnailsAsSDF;
#if WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFThumbnailSingleChannel_Inst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFThumbnailMSDF_Inst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFThumbnailMultichannel_Inst;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SDFThumbnailPreserveRGB_Inst;
#endif // WITH_EDITORONLY_DATA
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<URTMSDF_PerUserEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailSingleChannel = { "SDFThumbnailSingleChannel", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailSingleChannel), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailSingleChannel_MetaData), NewProp_SDFThumbnailSingleChannel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMSDF = { "SDFThumbnailMSDF", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailMSDF), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailMSDF_MetaData), NewProp_SDFThumbnailMSDF_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMultichannel = { "SDFThumbnailMultichannel", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailMultichannel), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailMultichannel_MetaData), NewProp_SDFThumbnailMultichannel_MetaData) };
const UECodeGen_Private::FSoftObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailPreserveRGB = { "SDFThumbnailPreserveRGB", nullptr, (EPropertyFlags)0x0014000000004001, UECodeGen_Private::EPropertyGenFlags::SoftObject, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailPreserveRGB), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailPreserveRGB_MetaData), NewProp_SDFThumbnailPreserveRGB_MetaData) };
void Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_bLabelThumbnailsAsSDF_SetBit(void* Obj)
{
	((URTMSDF_PerUserEditorSettings*)Obj)->bLabelThumbnailsAsSDF = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_bLabelThumbnailsAsSDF = { "bLabelThumbnailsAsSDF", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(URTMSDF_PerUserEditorSettings), &Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_bLabelThumbnailsAsSDF_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bLabelThumbnailsAsSDF_MetaData), NewProp_bLabelThumbnailsAsSDF_MetaData) };
#if WITH_EDITORONLY_DATA
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailSingleChannel_Inst = { "SDFThumbnailSingleChannel_Inst", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailSingleChannel_Inst), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailSingleChannel_Inst_MetaData), NewProp_SDFThumbnailSingleChannel_Inst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMSDF_Inst = { "SDFThumbnailMSDF_Inst", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailMSDF_Inst), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailMSDF_Inst_MetaData), NewProp_SDFThumbnailMSDF_Inst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMultichannel_Inst = { "SDFThumbnailMultichannel_Inst", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailMultichannel_Inst), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailMultichannel_Inst_MetaData), NewProp_SDFThumbnailMultichannel_Inst_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailPreserveRGB_Inst = { "SDFThumbnailPreserveRGB_Inst", nullptr, (EPropertyFlags)0x0114000800002000, UECodeGen_Private::EPropertyGenFlags::Object | UECodeGen_Private::EPropertyGenFlags::ObjectPtr, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(URTMSDF_PerUserEditorSettings, SDFThumbnailPreserveRGB_Inst), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SDFThumbnailPreserveRGB_Inst_MetaData), NewProp_SDFThumbnailPreserveRGB_Inst_MetaData) };
#endif // WITH_EDITORONLY_DATA
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailSingleChannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMSDF,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMultichannel,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailPreserveRGB,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_bLabelThumbnailsAsSDF,
#if WITH_EDITORONLY_DATA
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailSingleChannel_Inst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMSDF_Inst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailMultichannel_Inst,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::NewProp_SDFThumbnailPreserveRGB_Inst,
#endif // WITH_EDITORONLY_DATA
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UObject,
	(UObject* (*)())Z_Construct_UPackage__Script_RTMSDFEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::ClassParams = {
	&URTMSDF_PerUserEditorSettings::StaticClass,
	"RTMSDF",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::PropPointers),
	0,
	0x001000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_URTMSDF_PerUserEditorSettings()
{
	if (!Z_Registration_Info_UClass_URTMSDF_PerUserEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_URTMSDF_PerUserEditorSettings.OuterSingleton, Z_Construct_UClass_URTMSDF_PerUserEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_URTMSDF_PerUserEditorSettings.OuterSingleton;
}
template<> RTMSDFEDITOR_API UClass* StaticClass<URTMSDF_PerUserEditorSettings>()
{
	return URTMSDF_PerUserEditorSettings::StaticClass();
}
URTMSDF_PerUserEditorSettings::URTMSDF_PerUserEditorSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(URTMSDF_PerUserEditorSettings);
URTMSDF_PerUserEditorSettings::~URTMSDF_PerUserEditorSettings() {}
// End Class URTMSDF_PerUserEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Settings_RTMSDF_PerUserEditorSettings_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_URTMSDF_PerUserEditorSettings, URTMSDF_PerUserEditorSettings::StaticClass, TEXT("URTMSDF_PerUserEditorSettings"), &Z_Registration_Info_UClass_URTMSDF_PerUserEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(URTMSDF_PerUserEditorSettings), 2222027561U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Settings_RTMSDF_PerUserEditorSettings_h_1377024396(TEXT("/Script/RTMSDFEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Settings_RTMSDF_PerUserEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_RTMSDF_Source_RTMSDFEditor_Public_Settings_RTMSDF_PerUserEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
