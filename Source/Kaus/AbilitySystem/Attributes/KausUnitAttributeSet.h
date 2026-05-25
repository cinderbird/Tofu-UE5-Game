#pragma once

#include "AbilitySystem/Attributes/KausAttributeSet.h"
#include "KausAttributeRowInterface.h"
#include "AbilitySystemComponent.h"
#include "KausUnitAttributeSet.generated.h"


/**
 * UKausUnitAttributeSet
 *
 *	Class that defines attributes that are necessary for taking damage.
 *  All Game Living Unit must contain KUausUnitAttributeSet
 *	Attribute examples include: health
 */
UCLASS(BlueprintType)
class KAUS_API UKausUnitAttributeSet : public UKausAttributeSet
{
	GENERATED_BODY()

public:
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Vitality);		//활력
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxVitality);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, ReactionSpeed);	//반응속도
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxReactionSpeed);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Logic);			//논리
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxLogic);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, SelfEsteem);	    //자존감
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxSelfEsteem);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Motivation);     //의욕
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxMotivation);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Depression);	  	//우울
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxDepression);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Anxiety);		//불안
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxAnxiety);

	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, Anger);			//분노
	ATTRIBUTE_ACCESSORS(UKausUnitAttributeSet, MaxAnger);

public:
	mutable FKausAttributeEvent OnVitalityChanged;
	mutable FKausAttributeEvent OnMaxVitalityChanged;

	mutable FKausAttributeEvent OnReactionSpeedChanged;
	mutable FKausAttributeEvent OnMaxReactionSpeedChanged;

	mutable FKausAttributeEvent OnLogicChanged;
	mutable FKausAttributeEvent OnMaxLogicChanged;

	mutable FKausAttributeEvent OnSelfEsteemChanged;
	mutable FKausAttributeEvent OnMaxSelfEsteemChanged;

	mutable FKausAttributeEvent OnMotivationChanged;
	mutable FKausAttributeEvent OnMaxMotivationChanged;

	mutable FKausAttributeEvent OnDepressionChanged;
	mutable FKausAttributeEvent OnMaxDepressionChanged;

	mutable FKausAttributeEvent OnAnxietyChanged;
	mutable FKausAttributeEvent OnMaxAnxietyChanged;

	mutable FKausAttributeEvent OnAngerChanged;
	mutable FKausAttributeEvent OnMaxAngerChanged;

public:
	UKausUnitAttributeSet();

protected:
	virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;

	virtual void PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const override;

	virtual void PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue) override;

	virtual void PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue) override;

	virtual bool PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data) override;

	virtual void PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data) override;

	virtual void InitAttributeData(const UDataTable* InitDataTable, const FKausUnitInitializationContext& InitContext) override;

private:
	void ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const;

private:
	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Vitality, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Vitality;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxVitality, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxVitality;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_ReactionSpeed, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData ReactionSpeed;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxReactionSpeed, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxReactionSpeed;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Logic, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Logic;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxLogic, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxLogic;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_SelfEsteem, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData SelfEsteem;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxSelfEsteem, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxSelfEsteem;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Motivation, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Motivation;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxMotivation, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxMotivation;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Depression, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Depression;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxDepression, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxDepression;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Anxiety, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Anxiety;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxAnxiety, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxAnxiety;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_Anger, Category = "Kaus|UnitAttribute", Meta = (HideFromModifiers, AllowPrivateAccess = true))
	FGameplayAttributeData Anger;

	UPROPERTY(BlueprintReadOnly, ReplicatedUsing = OnRep_MaxAnger, Category = "Kaus|UnitAttribute", Meta = (AllowPrivateAccess = true))
	FGameplayAttributeData MaxAnger;

protected:
	UFUNCTION()
	void OnRep_Vitality(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxVitality(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_ReactionSpeed(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxReactionSpeed(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Logic(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxLogic(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_SelfEsteem(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxSelfEsteem(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Motivation(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxMotivation(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Depression(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxDepression(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Anxiety(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxAnxiety(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_Anger(const FGameplayAttributeData& OldValue);

	UFUNCTION()
	void OnRep_MaxAnger(const FGameplayAttributeData& OldValue);

private:
	// Store the health before any changes 
	float MaxVitalityBeforeAttributeChange;
	float VitalityBeforeAttributeChange;

	float MaxReactionSpeedBeforeAttributeChange;
	float ReactionSpeedBeforeAttributeChange;

	float MaxLogicBeforeAttributeChange;
	float LogicBeforeAttributeChange;

	float MaxSelfEsteemBeforeAttributeChange;
	float SelfEsteemBeforeAttributeChange;

	float MaxMotivationBeforeAttributeChange;
	float MotivationBeforeAttributeChange;

	float MaxDepressionBeforeAttributeChange;
	float DepressionBeforeAttributeChange;

	float MaxAnxietyBeforeAttributeChange;
	float AnxietyBeforeAttributeChange;

	float MaxAngerBeforeAttributeChange;
	float AngerBeforeAttributeChange;
};
