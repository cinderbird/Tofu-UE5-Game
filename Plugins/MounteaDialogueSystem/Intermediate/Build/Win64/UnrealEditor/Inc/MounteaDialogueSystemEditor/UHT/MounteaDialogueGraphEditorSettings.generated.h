// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Settings/MounteaDialogueGraphEditorSettings.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MOUNTEADIALOGUESYSTEMEDITOR_MounteaDialogueGraphEditorSettings_generated_h
#error "MounteaDialogueGraphEditorSettings.generated.h already included, missing '#pragma once' in MounteaDialogueGraphEditorSettings.h"
#endif
#define MOUNTEADIALOGUESYSTEMEDITOR_MounteaDialogueGraphEditorSettings_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_80_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueGraphEditorSettings(); \
	friend struct Z_Construct_UClass_UMounteaDialogueGraphEditorSettings_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueGraphEditorSettings, UDeveloperSettings, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_ProjectUserConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystemEditor"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueGraphEditorSettings) \
	static const TCHAR* StaticConfigName() {return TEXT("MounteaSettings");} \



#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueGraphEditorSettings(UMounteaDialogueGraphEditorSettings&&); \
	UMounteaDialogueGraphEditorSettings(const UMounteaDialogueGraphEditorSettings&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueGraphEditorSettings); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueGraphEditorSettings); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueGraphEditorSettings) \
	NO_API virtual ~UMounteaDialogueGraphEditorSettings();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_77_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_80_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_80_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h_80_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEMEDITOR_API UClass* StaticClass<class UMounteaDialogueGraphEditorSettings>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystemEditor_Private_Settings_MounteaDialogueGraphEditorSettings_h


#define FOREACH_ENUM_EAUTOLAYOUTSTRATEGYTYPE(op) \
	op(EAutoLayoutStrategyType::EALS_Tree) \
	op(EAutoLayoutStrategyType::EALS_ForceDirected) \
	op(EAutoLayoutStrategyType::Default) 

enum class EAutoLayoutStrategyType : uint8;
template<> struct TIsUEnumClass<EAutoLayoutStrategyType> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EAutoLayoutStrategyType>();

#define FOREACH_ENUM_EWIRINGSTYLE(op) \
	op(EWiringStyle::EWS_Vanilla) \
	op(EWiringStyle::EWS_Simple) \
	op(EWiringStyle::EWS_Complex) \
	op(EWiringStyle::Default) 

enum class EWiringStyle : uint8;
template<> struct TIsUEnumClass<EWiringStyle> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EWiringStyle>();

#define FOREACH_ENUM_EBUBBLEDRAWRULE(op) \
	op(EBubbleDrawRule::EBDR_Always) \
	op(EBubbleDrawRule::EBDR_OnSelected) 

enum class EBubbleDrawRule : uint8;
template<> struct TIsUEnumClass<EBubbleDrawRule> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EBubbleDrawRule>();

#define FOREACH_ENUM_ENODETHEME(op) \
	op(ENodeTheme::ENT_DarkTheme) \
	op(ENodeTheme::ENT_LightTheme) 

enum class ENodeTheme : uint8;
template<> struct TIsUEnumClass<ENodeTheme> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeTheme>();

#define FOREACH_ENUM_EDECORATORSINFOSTYLE(op) \
	op(EDecoratorsInfoStyle::EDSI_Stack) \
	op(EDecoratorsInfoStyle::EDIS_Unified) 

enum class EDecoratorsInfoStyle : uint8;
template<> struct TIsUEnumClass<EDecoratorsInfoStyle> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EDecoratorsInfoStyle>();

#define FOREACH_ENUM_ENODECORNERTYPE(op) \
	op(ENodeCornerType::ENT_SoftCorners) \
	op(ENodeCornerType::ENT_HardCorners) 

enum class ENodeCornerType : uint8;
template<> struct TIsUEnumClass<ENodeCornerType> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<ENodeCornerType>();

#define FOREACH_ENUM_EARROWTYPE(op) \
	op(EArrowType::ERT_SimpleArrow) \
	op(EArrowType::ERT_HollowArrow) \
	op(EArrowType::ERT_FancyArrow) \
	op(EArrowType::ERT_Bubble) \
	op(EArrowType::ERT_None) 

enum class EArrowType : uint8;
template<> struct TIsUEnumClass<EArrowType> { enum { Value = true }; };
template<> MOUNTEADIALOGUESYSTEMEDITOR_API UEnum* StaticEnum<EArrowType>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
