// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Components/MounteaDialogueParticipant.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UAudioComponent;
class UMounteaDialogueGraph;
enum class EDialogueParticipantState : uint8;
#ifdef MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipant_generated_h
#error "MounteaDialogueParticipant.generated.h already included, missing '#pragma once' in MounteaDialogueParticipant.h"
#endif
#define MOUNTEADIALOGUESYSTEM_MounteaDialogueParticipant_generated_h

#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual void SetDialogueGraph_Server_Implementation(UMounteaDialogueGraph* NewGraph); \
	virtual void SetAudioComponent_Server_Implementation(UAudioComponent* NewAudioComponent); \
	virtual void SetDefaultParticipantState_Server_Implementation(const EDialogueParticipantState NewState); \
	virtual void SetParticipantState_Server_Implementation(const EDialogueParticipantState NewState); \
	DECLARE_FUNCTION(execSetDialogueGraph_Server); \
	DECLARE_FUNCTION(execSetAudioComponent_Server); \
	DECLARE_FUNCTION(execSetDefaultParticipantState_Server); \
	DECLARE_FUNCTION(execSetParticipantState_Server); \
	DECLARE_FUNCTION(execOnRep_ParticipantState); \
	DECLARE_FUNCTION(execOnRep_DialogueGraph); \
	DECLARE_FUNCTION(execFindAudioComponentByTag); \
	DECLARE_FUNCTION(execFindAudioComponentByName); \
	DECLARE_FUNCTION(execFindAudioComponent);


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_CALLBACK_WRAPPERS
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMounteaDialogueParticipant(); \
	friend struct Z_Construct_UClass_UMounteaDialogueParticipant_Statics; \
public: \
	DECLARE_CLASS(UMounteaDialogueParticipant, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/MounteaDialogueSystem"), NO_API) \
	DECLARE_SERIALIZER(UMounteaDialogueParticipant) \
	virtual UObject* _getUObject() const override { return const_cast<UMounteaDialogueParticipant*>(this); } \
	enum class ENetFields_Private : uint16 \
	{ \
		NETFIELD_REP_START=(uint16)((int32)Super::ENetFields_Private::NETFIELD_REP_END + (int32)1), \
		DialogueGraph=NETFIELD_REP_START, \
		DefaultParticipantState, \
		ParticipantState, \
		StartingNode, \
		TraversedPath, \
		ParticipantTag, \
		NETFIELD_REP_END=ParticipantTag	}; \
	NO_API virtual void ValidateGeneratedRepEnums(const TArray<struct FRepRecord>& ClassReps) const override;


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMounteaDialogueParticipant(UMounteaDialogueParticipant&&); \
	UMounteaDialogueParticipant(const UMounteaDialogueParticipant&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMounteaDialogueParticipant); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMounteaDialogueParticipant); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UMounteaDialogueParticipant) \
	NO_API virtual ~UMounteaDialogueParticipant();


#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_20_PROLOG
#define FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_CALLBACK_WRAPPERS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_INCLASS_NO_PURE_DECLS \
	FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MOUNTEADIALOGUESYSTEM_API UClass* StaticClass<class UMounteaDialogueParticipant>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Kaus_Plugins_MounteaDialogueSystem_Source_MounteaDialogueSystem_Public_Components_MounteaDialogueParticipant_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
