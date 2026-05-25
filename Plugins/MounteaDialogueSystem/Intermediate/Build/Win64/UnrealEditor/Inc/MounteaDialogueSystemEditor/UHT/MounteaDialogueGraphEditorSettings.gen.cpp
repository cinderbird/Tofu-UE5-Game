// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MounteaDialogueSystemEditor/Private/Settings/MounteaDialogueGraphEditorSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMounteaDialogueGraphEditorSettings() {}

// Begin Cross Module References
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
DEVELOPERSETTINGS_API UClass* Z_Construct_UClass_UDeveloperSettings();
MOUNTEADIALOGUESYSTEM_API UClass* Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings();
MOUNTEADIALOGUESYSTEMEDITOR_API UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_NoRegister();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme();
MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle();
UPackage* Z_Construct_UPackage__Script_MounteaDialogueSystemEditor();
// End Cross Module References

// Begin Enum EAutoLayoutStrategyType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EAutoLayoutStrategyType;
static UEnum* EAutoLayoutStrategyType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EAutoLayoutStrategyType"));
	}
	return Z_Registration_Info_UEnum_EAutoLayoutStrategyType.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EAutoLayoutStrategyType>()
{
	return EAutoLayoutStrategyType_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EAutoLayoutStrategyType::Default" },
		{ "EALS_ForceDirected.DisplayName", "Force Directed" },
		{ "EALS_ForceDirected.Name", "EAutoLayoutStrategyType::EALS_ForceDirected" },
		{ "EALS_Tree.DisplayName", "Tree" },
		{ "EALS_Tree.Name", "EAutoLayoutStrategyType::EALS_Tree" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EAutoLayoutStrategyType::EALS_Tree", (int64)EAutoLayoutStrategyType::EALS_Tree },
		{ "EAutoLayoutStrategyType::EALS_ForceDirected", (int64)EAutoLayoutStrategyType::EALS_ForceDirected },
		{ "EAutoLayoutStrategyType::Default", (int64)EAutoLayoutStrategyType::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"EAutoLayoutStrategyType",
	"EAutoLayoutStrategyType",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType()
{
	if (!Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EAutoLayoutStrategyType.InnerSingleton;
}
// End Enum EAutoLayoutStrategyType

// Begin Enum EWiringStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EWiringStyle;
static UEnum* EWiringStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EWiringStyle"));
	}
	return Z_Registration_Info_UEnum_EWiringStyle.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EWiringStyle>()
{
	return EWiringStyle_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Default.Hidden", "" },
		{ "Default.Name", "EWiringStyle::Default" },
		{ "EWS_Complex.DisplayName", "45\xc2\xb0 Angle" },
		{ "EWS_Complex.Name", "EWiringStyle::EWS_Complex" },
		{ "EWS_Simple.DisplayName", "90\xc2\xb0 Angle" },
		{ "EWS_Simple.Name", "EWiringStyle::EWS_Simple" },
		{ "EWS_Vanilla.DisplayName", "Vanilla" },
		{ "EWS_Vanilla.Name", "EWiringStyle::EWS_Vanilla" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EWiringStyle::EWS_Vanilla", (int64)EWiringStyle::EWS_Vanilla },
		{ "EWiringStyle::EWS_Simple", (int64)EWiringStyle::EWS_Simple },
		{ "EWiringStyle::EWS_Complex", (int64)EWiringStyle::EWS_Complex },
		{ "EWiringStyle::Default", (int64)EWiringStyle::Default },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"EWiringStyle",
	"EWiringStyle",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle()
{
	if (!Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EWiringStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EWiringStyle.InnerSingleton;
}
// End Enum EWiringStyle

// Begin Enum EBubbleDrawRule
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EBubbleDrawRule;
static UEnum* EBubbleDrawRule_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EBubbleDrawRule"));
	}
	return Z_Registration_Info_UEnum_EBubbleDrawRule.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EBubbleDrawRule>()
{
	return EBubbleDrawRule_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EBDR_Always.DisplayName", "Always" },
		{ "EBDR_Always.Name", "EBubbleDrawRule::EBDR_Always" },
		{ "EBDR_OnSelected.DisplayName", "When Selected" },
		{ "EBDR_OnSelected.Name", "EBubbleDrawRule::EBDR_OnSelected" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EBubbleDrawRule::EBDR_Always", (int64)EBubbleDrawRule::EBDR_Always },
		{ "EBubbleDrawRule::EBDR_OnSelected", (int64)EBubbleDrawRule::EBDR_OnSelected },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"EBubbleDrawRule",
	"EBubbleDrawRule",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule()
{
	if (!Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EBubbleDrawRule_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EBubbleDrawRule.InnerSingleton;
}
// End Enum EBubbleDrawRule

// Begin Enum ENodeTheme
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeTheme;
static UEnum* ENodeTheme_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("ENodeTheme"));
	}
	return Z_Registration_Info_UEnum_ENodeTheme.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeTheme>()
{
	return ENodeTheme_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENT_DarkTheme.DisplayName", "Dark Theme" },
		{ "ENT_DarkTheme.Name", "ENodeTheme::ENT_DarkTheme" },
		{ "ENT_LightTheme.DisplayName", "Light Theme" },
		{ "ENT_LightTheme.Name", "ENodeTheme::ENT_LightTheme" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENodeTheme::ENT_DarkTheme", (int64)ENodeTheme::ENT_DarkTheme },
		{ "ENodeTheme::ENT_LightTheme", (int64)ENodeTheme::ENT_LightTheme },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"ENodeTheme",
	"ENodeTheme",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme()
{
	if (!Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeTheme.InnerSingleton;
}
// End Enum ENodeTheme

// Begin Enum EDecoratorsInfoStyle
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EDecoratorsInfoStyle;
static UEnum* EDecoratorsInfoStyle_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EDecoratorsInfoStyle"));
	}
	return Z_Registration_Info_UEnum_EDecoratorsInfoStyle.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EDecoratorsInfoStyle>()
{
	return EDecoratorsInfoStyle_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "EDIS_Unified.DisplayName", "Unified" },
		{ "EDIS_Unified.Name", "EDecoratorsInfoStyle::EDIS_Unified" },
		{ "EDSI_Stack.DisplayName", "Stack" },
		{ "EDSI_Stack.Name", "EDecoratorsInfoStyle::EDSI_Stack" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EDecoratorsInfoStyle::EDSI_Stack", (int64)EDecoratorsInfoStyle::EDSI_Stack },
		{ "EDecoratorsInfoStyle::EDIS_Unified", (int64)EDecoratorsInfoStyle::EDIS_Unified },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"EDecoratorsInfoStyle",
	"EDecoratorsInfoStyle",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle()
{
	if (!Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EDecoratorsInfoStyle.InnerSingleton;
}
// End Enum EDecoratorsInfoStyle

// Begin Enum ENodeCornerType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_ENodeCornerType;
static UEnum* ENodeCornerType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_ENodeCornerType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_ENodeCornerType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("ENodeCornerType"));
	}
	return Z_Registration_Info_UEnum_ENodeCornerType.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeCornerType>()
{
	return ENodeCornerType_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ENT_HardCorners.DisplayName", "Hard Corners" },
		{ "ENT_HardCorners.Name", "ENodeCornerType::ENT_HardCorners" },
		{ "ENT_SoftCorners.DisplayName", "Soft Corners" },
		{ "ENT_SoftCorners.Name", "ENodeCornerType::ENT_SoftCorners" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "ENodeCornerType::ENT_SoftCorners", (int64)ENodeCornerType::ENT_SoftCorners },
		{ "ENodeCornerType::ENT_HardCorners", (int64)ENodeCornerType::ENT_HardCorners },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"ENodeCornerType",
	"ENodeCornerType",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType()
{
	if (!Z_Registration_Info_UEnum_ENodeCornerType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_ENodeCornerType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_ENodeCornerType.InnerSingleton;
}
// End Enum ENodeCornerType

// Begin Enum EArrowType
static FEnumRegistrationInfo Z_Registration_Info_UEnum_EArrowType;
static UEnum* EArrowType_StaticEnum()
{
	if (!Z_Registration_Info_UEnum_EArrowType.OuterSingleton)
	{
		Z_Registration_Info_UEnum_EArrowType.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType, (UObject*)Z_Construct_UPackage__Script_MounteaDialogueSystemEditor(), TEXT("EArrowType"));
	}
	return Z_Registration_Info_UEnum_EArrowType.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EArrowType>()
{
	return EArrowType_StaticEnum();
}
struct Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ERT_Bubble.DisplayName", "Bubble" },
		{ "ERT_Bubble.Name", "EArrowType::ERT_Bubble" },
		{ "ERT_FancyArrow.DisplayName", "Fancy Arrow" },
		{ "ERT_FancyArrow.Name", "EArrowType::ERT_FancyArrow" },
		{ "ERT_HollowArrow.DisplayName", "Hollow Arrow" },
		{ "ERT_HollowArrow.Name", "EArrowType::ERT_HollowArrow" },
		{ "ERT_None.DisplayName", "Nothing" },
		{ "ERT_None.Name", "EArrowType::ERT_None" },
		{ "ERT_SimpleArrow.DisplayName", "Simple Arrow" },
		{ "ERT_SimpleArrow.Name", "EArrowType::ERT_SimpleArrow" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
#endif // WITH_METADATA
	static constexpr UECodeGen_Private::FEnumeratorParam Enumerators[] = {
		{ "EArrowType::ERT_SimpleArrow", (int64)EArrowType::ERT_SimpleArrow },
		{ "EArrowType::ERT_HollowArrow", (int64)EArrowType::ERT_HollowArrow },
		{ "EArrowType::ERT_FancyArrow", (int64)EArrowType::ERT_FancyArrow },
		{ "EArrowType::ERT_Bubble", (int64)EArrowType::ERT_Bubble },
		{ "EArrowType::ERT_None", (int64)EArrowType::ERT_None },
	};
	static const UECodeGen_Private::FEnumParams EnumParams;
};
const UECodeGen_Private::FEnumParams Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::EnumParams = {
	(UObject*(*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
	nullptr,
	"EArrowType",
	"EArrowType",
	Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enumerators,
	RF_Public|RF_Transient|RF_MarkAsNative,
	UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enumerators),
	EEnumFlags::None,
	(uint8)UEnum::ECppForm::EnumClass,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enum_MetaDataParams), Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::Enum_MetaDataParams)
};
UEnum* Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType()
{
	if (!Z_Registration_Info_UEnum_EArrowType.InnerSingleton)
	{
		UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_EArrowType.InnerSingleton, Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType_Statics::EnumParams);
	}
	return Z_Registration_Info_UEnum_EArrowType.InnerSingleton;
}
// End Enum EArrowType

// Begin Class UMounteaDialogueGraphEditorSettings
void UMounteaDialogueGraphEditorSettings::StaticRegisterNativesUMounteaDialogueGraphEditorSettings()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMounteaDialogueGraphEditorSettings);
UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_NoRegister()
{
	return UMounteaDialogueGraphEditorSettings::StaticClass();
}
struct Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * Mountea Dialogue System global settings.\n */" },
#endif
		{ "IncludePath", "Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Mountea Dialogue System global settings." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeType_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeTheme_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedInfo_NumDecorators_MetaData[] = {
		{ "Category", "NodesSettings|DecoratorsInfo" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bShowDetailedInfo_InheritsDecorators_MetaData[] = {
		{ "Category", "NodesSettings|DecoratorsInfo" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_DecoratorsInfoStyle_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayAutomaticNames_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowRenameNodes_MetaData[] = {
		{ "Category", "NodesSettings" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OverrideNodeBackgroundColours_MetaData[] = {
		{ "Category", "NodesSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Select a Node Class and specify Override Colour for this Node type.\n\x09 * Only non-abstract classes are allowed!\n\x09 */" },
#endif
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "ShowTreeView", "" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Select a Node Class and specify Override Colour for this Node type.\nOnly non-abstract classes are allowed!" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_NodeReplacementURL_MetaData[] = {
		{ "Category", "NodesSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * URL for the Nodes Replacement configuration file.\n\x09 * \n\x09 * This URL points to a remote file containing base Node Replacement definitions.\n\x09 * The system will use this URL to download and apply the tags if allowed.\n\x09 * Default: @link https://raw.githubusercontent.com/Mountea-Framework/MounteaDialogueSystem/refs/heads/master/Config/node_replacements.json\n\x09 */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL for the Nodes Replacement configuration file.\n\nThis URL points to a remote file containing base Node Replacement definitions.\nThe system will use this URL to download and apply the tags if allowed.\nDefault: @link https://raw.githubusercontent.com/Mountea-Framework/MounteaDialogueSystem/refs/heads/master/Config/node_replacements.json" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowNativeDecoratorsEdit_MetaData[] = {
		{ "Category", "NodesSettings" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enables 'Edit' button for Native Code Decorators\n" },
#endif
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enables 'Edit' button for Native Code Decorators" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bDisplayStandardNodes_MetaData[] = {
		{ "Category", "BlueprintNodes" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * \xe2\x9d\x97 EXPERIMENTAL FEATURE\n\x09 * If case of any compile issues TURN THIS ON\n\x09 *\n\x09 * If turned on custom K2 Nodes will contain additional details, which might break visual appearance\n\x09 * and might not work well with plugins like `BlueprintAssist`.\n\x09 */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xe2\x9d\x97 EXPERIMENTAL FEATURE\nIf case of any compile issues TURN THIS ON\n\nIf turned on custom K2 Nodes will contain additional details, which might break visual appearance\nand might not work well with plugins like `BlueprintAssist`." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_WireWidth_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "ClampMax", "1.500000" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
		{ "UIMax", "1.500000" },
		{ "UIMin", "0.100000" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ArrowType_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bUseAdvancedWiring_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[BETA] Feature]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AdvancedWiringConnectionTangent_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "EditCondition", "bUseAdvancedWiring" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[BETA] Feature]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ControlPointDistance_MetaData[] = {
		{ "Category", "NodeWiring" },
		{ "EditCondition", "bUseAdvancedWiring" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "[BETA] Feature]" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_OptimalDistance_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_AutoLayoutStrategy_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MaxIteration_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bFirstPassOnly_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bRandomInit_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InitTemperature_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CoolDownRate_MetaData[] = {
		{ "Category", "AutoArrange" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bAllowAutoGameplayTagsCheck_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * Allow automatic gameplay tag checks.\n\x09 * \n\x09 * If set to true, the system will automatically verify and update gameplay tags on engine startup.\n\x09 * Default is True.\n\x09 */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Allow automatic gameplay tag checks.\n\nIf set to true, the system will automatically verify and update gameplay tags on engine startup.\nDefault is True." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_GameplayTagsURL_MetaData[] = {
		{ "Category", "GameplayTags" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n\x09 * URL for the Gameplay Tags configuration file.\n\x09 * \n\x09 * This URL points to a remote file containing base gameplay tag definitions.\n\x09 * The system will use this URL to download and apply the tags if allowed.\n\x09 * Default: @link https://raw.githubusercontent.com/Mountea-Framework/MounteaDialogueSystem/master/Config/Tags/MounteaDialogueSystemTags.ini\n\x09 */" },
#endif
		{ "ConfigRestartRequired", "TRUE" },
		{ "ModuleRelativePath", "Private/Settings/MounteaDialogueGraphEditorSettings.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "URL for the Gameplay Tags configuration file.\n\nThis URL points to a remote file containing base gameplay tag definitions.\nThe system will use this URL to download and apply the tags if allowed.\nDefault: @link https://raw.githubusercontent.com/Mountea-Framework/MounteaDialogueSystem/master/Config/Tags/MounteaDialogueSystemTags.ini" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeType;
	static const UECodeGen_Private::FBytePropertyParams NewProp_NodeTheme_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_NodeTheme;
	static void NewProp_bShowDetailedInfo_NumDecorators_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedInfo_NumDecorators;
	static void NewProp_bShowDetailedInfo_InheritsDecorators_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bShowDetailedInfo_InheritsDecorators;
	static const UECodeGen_Private::FBytePropertyParams NewProp_DecoratorsInfoStyle_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_DecoratorsInfoStyle;
	static void NewProp_bDisplayAutomaticNames_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayAutomaticNames;
	static void NewProp_bAllowRenameNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowRenameNodes;
	static const UECodeGen_Private::FStructPropertyParams NewProp_OverrideNodeBackgroundColours_ValueProp;
	static const UECodeGen_Private::FSoftClassPropertyParams NewProp_OverrideNodeBackgroundColours_Key_KeyProp;
	static const UECodeGen_Private::FMapPropertyParams NewProp_OverrideNodeBackgroundColours;
	static const UECodeGen_Private::FStrPropertyParams NewProp_NodeReplacementURL;
	static void NewProp_bAllowNativeDecoratorsEdit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowNativeDecoratorsEdit;
	static void NewProp_bDisplayStandardNodes_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bDisplayStandardNodes;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_WireWidth;
	static const UECodeGen_Private::FBytePropertyParams NewProp_ArrowType_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_ArrowType;
	static void NewProp_bUseAdvancedWiring_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseAdvancedWiring;
	static const UECodeGen_Private::FStructPropertyParams NewProp_AdvancedWiringConnectionTangent;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_ControlPointDistance;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_OptimalDistance;
	static const UECodeGen_Private::FBytePropertyParams NewProp_AutoLayoutStrategy_Underlying;
	static const UECodeGen_Private::FEnumPropertyParams NewProp_AutoLayoutStrategy;
	static const UECodeGen_Private::FIntPropertyParams NewProp_MaxIteration;
	static void NewProp_bFirstPassOnly_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bFirstPassOnly;
	static void NewProp_bRandomInit_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomInit;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_InitTemperature;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_CoolDownRate;
	static void NewProp_bAllowAutoGameplayTagsCheck_SetBit(void* Obj);
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllowAutoGameplayTagsCheck;
	static const UECodeGen_Private::FStrPropertyParams NewProp_GameplayTagsURL;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMounteaDialogueGraphEditorSettings>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType = { "NodeType", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, NodeType), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeCornerType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeType_MetaData), NewProp_NodeType_MetaData) }; // 212306085
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme = { "NodeTheme", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, NodeTheme), Z_Construct_UEnum_MounteaDialogueSystemEditor_ENodeTheme, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeTheme_MetaData), NewProp_NodeTheme_MetaData) }; // 3126305204
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bShowDetailedInfo_NumDecorators = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators = { "bShowDetailedInfo_NumDecorators", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDetailedInfo_NumDecorators_MetaData), NewProp_bShowDetailedInfo_NumDecorators_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bShowDetailedInfo_InheritsDecorators = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators = { "bShowDetailedInfo_InheritsDecorators", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bShowDetailedInfo_InheritsDecorators_MetaData), NewProp_bShowDetailedInfo_InheritsDecorators_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle = { "DecoratorsInfoStyle", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, DecoratorsInfoStyle), Z_Construct_UEnum_MounteaDialogueSystemEditor_EDecoratorsInfoStyle, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_DecoratorsInfoStyle_MetaData), NewProp_DecoratorsInfoStyle_MetaData) }; // 836691389
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bDisplayAutomaticNames = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames = { "bDisplayAutomaticNames", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayAutomaticNames_MetaData), NewProp_bDisplayAutomaticNames_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bAllowRenameNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes = { "bAllowRenameNodes", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowRenameNodes_MetaData), NewProp_bAllowRenameNodes_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_ValueProp = { "OverrideNodeBackgroundColours", nullptr, (EPropertyFlags)0x0000000000004001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FSoftClassPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_Key_KeyProp = { "OverrideNodeBackgroundColours_Key", nullptr, (EPropertyFlags)0x0004000000004001, UECodeGen_Private::EPropertyGenFlags::SoftClass, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UMounteaDialogueGraphNode_NoRegister, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours = { "OverrideNodeBackgroundColours", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, OverrideNodeBackgroundColours), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OverrideNodeBackgroundColours_MetaData), NewProp_OverrideNodeBackgroundColours_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeReplacementURL = { "NodeReplacementURL", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, NodeReplacementURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_NodeReplacementURL_MetaData), NewProp_NodeReplacementURL_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bAllowNativeDecoratorsEdit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit = { "bAllowNativeDecoratorsEdit", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowNativeDecoratorsEdit_MetaData), NewProp_bAllowNativeDecoratorsEdit_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayStandardNodes_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bDisplayStandardNodes = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayStandardNodes = { "bDisplayStandardNodes", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayStandardNodes_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bDisplayStandardNodes_MetaData), NewProp_bDisplayStandardNodes_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth = { "WireWidth", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, WireWidth), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_WireWidth_MetaData), NewProp_WireWidth_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType = { "ArrowType", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, ArrowType), Z_Construct_UEnum_MounteaDialogueSystemEditor_EArrowType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ArrowType_MetaData), NewProp_ArrowType_MetaData) }; // 3495593865
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bUseAdvancedWiring_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bUseAdvancedWiring = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bUseAdvancedWiring = { "bUseAdvancedWiring", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bUseAdvancedWiring_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bUseAdvancedWiring_MetaData), NewProp_bUseAdvancedWiring_MetaData) };
const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AdvancedWiringConnectionTangent = { "AdvancedWiringConnectionTangent", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, AdvancedWiringConnectionTangent), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AdvancedWiringConnectionTangent_MetaData), NewProp_AdvancedWiringConnectionTangent_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ControlPointDistance = { "ControlPointDistance", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, ControlPointDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ControlPointDistance_MetaData), NewProp_ControlPointDistance_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance = { "OptimalDistance", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, OptimalDistance), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_OptimalDistance_MetaData), NewProp_OptimalDistance_MetaData) };
const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy = { "AutoLayoutStrategy", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, AutoLayoutStrategy), Z_Construct_UEnum_MounteaDialogueSystemEditor_EAutoLayoutStrategyType, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_AutoLayoutStrategy_MetaData), NewProp_AutoLayoutStrategy_MetaData) }; // 2333594320
const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration = { "MaxIteration", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, MaxIteration), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MaxIteration_MetaData), NewProp_MaxIteration_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bFirstPassOnly = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly = { "bFirstPassOnly", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bFirstPassOnly_MetaData), NewProp_bFirstPassOnly_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bRandomInit = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit = { "bRandomInit", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bRandomInit_MetaData), NewProp_bRandomInit_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature = { "InitTemperature", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, InitTemperature), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InitTemperature_MetaData), NewProp_InitTemperature_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate = { "CoolDownRate", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, CoolDownRate), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CoolDownRate_MetaData), NewProp_CoolDownRate_MetaData) };
void Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowAutoGameplayTagsCheck_SetBit(void* Obj)
{
	((UMounteaDialogueGraphEditorSettings*)Obj)->bAllowAutoGameplayTagsCheck = 1;
}
const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowAutoGameplayTagsCheck = { "bAllowAutoGameplayTagsCheck", nullptr, (EPropertyFlags)0x0020080000014001, UECodeGen_Private::EPropertyGenFlags::Bool , RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(uint8), sizeof(UMounteaDialogueGraphEditorSettings), &Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowAutoGameplayTagsCheck_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bAllowAutoGameplayTagsCheck_MetaData), NewProp_bAllowAutoGameplayTagsCheck_MetaData) };
const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_GameplayTagsURL = { "GameplayTagsURL", nullptr, (EPropertyFlags)0x00200c0000014001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(UMounteaDialogueGraphEditorSettings, GameplayTagsURL), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_GameplayTagsURL_MetaData), NewProp_GameplayTagsURL_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeTheme,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_NumDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bShowDetailedInfo_InheritsDecorators,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_DecoratorsInfoStyle,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayAutomaticNames,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowRenameNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_ValueProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours_Key_KeyProp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OverrideNodeBackgroundColours,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_NodeReplacementURL,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowNativeDecoratorsEdit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bDisplayStandardNodes,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_WireWidth,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ArrowType,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bUseAdvancedWiring,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AdvancedWiringConnectionTangent,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_ControlPointDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_OptimalDistance,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy_Underlying,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_AutoLayoutStrategy,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_MaxIteration,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bFirstPassOnly,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bRandomInit,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_InitTemperature,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_CoolDownRate,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_bAllowAutoGameplayTagsCheck,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::NewProp_GameplayTagsURL,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UDeveloperSettings,
	(UObject* (*)())Z_Construct_UPackage__Script_MounteaDialogueSystemEditor,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::ClassParams = {
	&UMounteaDialogueGraphEditorSettings::StaticClass,
	"MounteaSettings",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::PropPointers),
	0,
	0x001000E6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::Class_MetaDataParams), Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMounteaDialogueGraphEditorSettings()
{
	if (!Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton, Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings.OuterSingleton;
}
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<UMounteaDialogueGraphEditorSettings>()
{
	return UMounteaDialogueGraphEditorSettings::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMounteaDialogueGraphEditorSettings);
UMounteaDialogueGraphEditorSettings::~UMounteaDialogueGraphEditorSettings() {}
// End Class UMounteaDialogueGraphEditorSettings

// Begin Registration
struct Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics
{
	static constexpr FEnumRegisterCompiledInInfo EnumInfo[] = {
		{ EAutoLayoutStrategyType_StaticEnum, TEXT("EAutoLayoutStrategyType"), &Z_Registration_Info_UEnum_EAutoLayoutStrategyType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2333594320U) },
		{ EWiringStyle_StaticEnum, TEXT("EWiringStyle"), &Z_Registration_Info_UEnum_EWiringStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3287246671U) },
		{ EBubbleDrawRule_StaticEnum, TEXT("EBubbleDrawRule"), &Z_Registration_Info_UEnum_EBubbleDrawRule, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 963307709U) },
		{ ENodeTheme_StaticEnum, TEXT("ENodeTheme"), &Z_Registration_Info_UEnum_ENodeTheme, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3126305204U) },
		{ EDecoratorsInfoStyle_StaticEnum, TEXT("EDecoratorsInfoStyle"), &Z_Registration_Info_UEnum_EDecoratorsInfoStyle, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 836691389U) },
		{ ENodeCornerType_StaticEnum, TEXT("ENodeCornerType"), &Z_Registration_Info_UEnum_ENodeCornerType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 212306085U) },
		{ EArrowType_StaticEnum, TEXT("EArrowType"), &Z_Registration_Info_UEnum_EArrowType, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3495593865U) },
	};
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMounteaDialogueGraphEditorSettings, UMounteaDialogueGraphEditorSettings::StaticClass, TEXT("UMounteaDialogueGraphEditorSettings"), &Z_Registration_Info_UClass_UMounteaDialogueGraphEditorSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMounteaDialogueGraphEditorSettings), 3169319608U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_1531586510(TEXT("/Script/MounteaDialogueSystemEditor"),
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::ClassInfo),
	nullptr, 0,
	Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_Statics::EnumInfo));
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
