#include "KausUnitAttributeSet.h"
#include "Net/UnrealNetwork.h"
#include "AbilitySystem/KausAbilitySystemComponent.h"
#include "GameplayEffectExtension.h"
#include "Logs/KausLogChannels.h"
#include "DataTable/KausUnitStatsRow.h"
#include "AbilitySystem/KausUnitInitializationContext.h"

UKausUnitAttributeSet::UKausUnitAttributeSet()
	: Vitality(50.0f)
	, MaxVitality(50.0f)
	, ReactionSpeed(50.0f)
	, MaxReactionSpeed(50.0f)
	, Logic(50.0f)
	, MaxLogic(50.0f)
	, SelfEsteem(50.0f)
	, MaxSelfEsteem(50.0f)
	, Motivation(50.0f)
	, MaxMotivation(50.0f)
	, Depression(50.0f)
	, MaxDepression(50.0f)
	, Anxiety(50.0f)
	, MaxAnxiety(50.0f)
	, Anger(50.0f)
	, MaxAnger(50.0f)
{
	MaxVitalityBeforeAttributeChange = 0.0f;
	VitalityBeforeAttributeChange = 0.0f;

	MaxReactionSpeedBeforeAttributeChange = 0.0f;
	ReactionSpeedBeforeAttributeChange = 0.0f;

	MaxLogicBeforeAttributeChange = 0.0f;
	LogicBeforeAttributeChange = 0.0f;

	MaxSelfEsteemBeforeAttributeChange = 0.0f;
	SelfEsteemBeforeAttributeChange = 0.0f;

	MaxMotivationBeforeAttributeChange = 0.0f;
	MotivationBeforeAttributeChange = 0.0f;

	MaxDepressionBeforeAttributeChange = 0.0f;
	DepressionBeforeAttributeChange = 0.0f;

	MaxAnxietyBeforeAttributeChange = 0.0f;
	AnxietyBeforeAttributeChange = 0.0f;

	MaxAngerBeforeAttributeChange = 0.0f;
	AngerBeforeAttributeChange = 0.0f;

}

void UKausUnitAttributeSet::GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const
{
	Super::GetLifetimeReplicatedProps(OutLifetimeProps);
}

void UKausUnitAttributeSet::PreAttributeBaseChange(const FGameplayAttribute& Attribute, float& NewValue) const
{
	Super::PreAttributeBaseChange(Attribute, NewValue);

	ClampAttribute(Attribute, NewValue);
}

void UKausUnitAttributeSet::PreAttributeChange(const FGameplayAttribute& Attribute, float& NewValue)
{
	Super::PreAttributeChange(Attribute, NewValue);

	ClampAttribute(Attribute, NewValue);
}

void UKausUnitAttributeSet::PostAttributeChange(const FGameplayAttribute& Attribute, float OldValue, float NewValue)
{
	Super::PostAttributeChange(Attribute, OldValue, NewValue);

	UKausAbilitySystemComponent* KausASC = GetKausAbilitySystemComponent();
	if (!KausASC)
	{
		return;
	}

	if (Attribute == GetMaxVitalityAttribute())
	{
		if (GetVitality() > NewValue) { KausASC->ApplyModToAttribute(GetVitalityAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxReactionSpeedAttribute())
	{
		if (GetReactionSpeed() > NewValue) { KausASC->ApplyModToAttribute(GetReactionSpeedAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxLogicAttribute())
	{
		if (GetLogic() > NewValue) { KausASC->ApplyModToAttribute(GetLogicAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxSelfEsteemAttribute())
	{
		if (GetSelfEsteem() > NewValue) { KausASC->ApplyModToAttribute(GetSelfEsteemAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxMotivationAttribute())
	{
		if (GetMotivation() > NewValue) { KausASC->ApplyModToAttribute(GetMotivationAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxDepressionAttribute())
	{
		if (GetDepression() > NewValue) { KausASC->ApplyModToAttribute(GetDepressionAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxAnxietyAttribute())
	{
		if (GetAnxiety() > NewValue) { KausASC->ApplyModToAttribute(GetAnxietyAttribute(), EGameplayModOp::Override, NewValue); }
	}
	else if (Attribute == GetMaxAngerAttribute())
	{
		if (GetAnger() > NewValue) { KausASC->ApplyModToAttribute(GetAngerAttribute(), EGameplayModOp::Override, NewValue); }
	}
}

bool UKausUnitAttributeSet::PreGameplayEffectExecute(FGameplayEffectModCallbackData& Data)
{
	if (!Super::PreGameplayEffectExecute(Data))
	{
		return false;
	}

	VitalityBeforeAttributeChange = GetVitality();
	MaxVitalityBeforeAttributeChange = GetMaxVitality();

	ReactionSpeedBeforeAttributeChange = GetReactionSpeed();
	MaxReactionSpeedBeforeAttributeChange = GetMaxReactionSpeed();

	LogicBeforeAttributeChange = GetLogic();
	MaxLogicBeforeAttributeChange = GetMaxLogic();

	SelfEsteemBeforeAttributeChange = GetSelfEsteem();
	MaxSelfEsteemBeforeAttributeChange = GetMaxSelfEsteem();

	MotivationBeforeAttributeChange = GetMotivation();
	MaxMotivationBeforeAttributeChange = GetMaxMotivation();

	DepressionBeforeAttributeChange = GetDepression();
	MaxDepressionBeforeAttributeChange = GetMaxDepression();

	AnxietyBeforeAttributeChange = GetAnxiety();
	MaxAnxietyBeforeAttributeChange = GetMaxAnxiety();

	AngerBeforeAttributeChange = GetAnger();
	MaxAngerBeforeAttributeChange = GetMaxAnger();

	return true;
}

void UKausUnitAttributeSet::PostGameplayEffectExecute(const FGameplayEffectModCallbackData& Data)
{
	Super::PostGameplayEffectExecute(Data);
}

void UKausUnitAttributeSet::InitAttributeData(const UDataTable* InitDataTable, const FKausUnitInitializationContext& InitContext)
{
	if (!InitDataTable || !InitContext.UnitTag.IsValid())
	{
		return;
	}

	//todo: make row name cache like KausGameData
	const FKausUnitStatsRow* Stats = InitDataTable->FindRow<FKausUnitStatsRow>(InitContext.UnitTag.GetTagName(), TEXT("InitAttributeData"));

	if (Stats)
	{
		const float NewVitality = Stats->BaseVitalityCurve.GetValueAtLevel(InitContext.Level);
		const float NewReactionSpeed = Stats->BaseReactionSpeedCurve.GetValueAtLevel(InitContext.Level);
		const float NewLogic = Stats->BaseLogicCurve.GetValueAtLevel(InitContext.Level);
		const float NewSelfEsteem = Stats->BaseSelfEsteemCurve.GetValueAtLevel(InitContext.Level);
		const float NewMotivation = Stats->BaseMotivationCurve.GetValueAtLevel(InitContext.Level);
		const float NewDepression = Stats->BaseDepressionCurve.GetValueAtLevel(InitContext.Level);
		const float NewAnxiety = Stats->BaseAnxietyCurve.GetValueAtLevel(InitContext.Level);
		const float NewAnger = Stats->BaseAngerCurve.GetValueAtLevel(InitContext.Level);

		InitMaxVitality(NewVitality);
		InitVitality(NewVitality);
		
		InitMaxReactionSpeed(NewReactionSpeed);
		InitReactionSpeed(NewReactionSpeed);

		InitMaxLogic(NewLogic);
		InitLogic(NewLogic);

		InitMaxSelfEsteem(NewSelfEsteem);
		InitSelfEsteem(NewSelfEsteem);

		InitMaxMotivation(NewMotivation);
		InitMotivation(NewMotivation);

		InitMaxDepression(NewDepression);
		InitDepression(NewDepression);

		InitMaxAnxiety(NewAnxiety);
		InitAnxiety(NewAnxiety);

		InitMaxAnger(NewAnger);
		InitAnger(NewAnger);

		UE_LOG(LogKaus, Log, TEXT("Vitality: %.1f, ReactionSpeed: %.1f, Logic: %.1f, SelfEsteem: %.1f, Motivation: %.1f, Depression: %.1f, Anxiety: %.1f, Anger: %.1f"),
			NewVitality, NewReactionSpeed, NewLogic, NewSelfEsteem, NewMotivation, NewDepression, NewAnxiety, NewAnger);

		UE_LOG(LogKaus, Log, TEXT("MaxVitality: %.1f, MaxReactionSpeed: %.1f, MaxLogic: %.1f, MaxSelfEsteem: %.1f, MaxMotivation: %.1f, MaxDepression: %.1f, MaxAnxiety: %.1f, MaxAnger: %.1f"),
			NewVitality, NewReactionSpeed, NewLogic, NewSelfEsteem, NewMotivation, NewDepression, NewAnxiety, NewAnger);

	}
	else
	{
		UE_LOG(LogKaus, Warning, TEXT("Failed to find row for Unit [%s] in provided table."), *InitContext.UnitTag.ToString());

		InitMaxVitality(123456789.0f);
		InitVitality(123456789.0f);

		InitMaxReactionSpeed(123456789.0f);
		InitReactionSpeed(123456789.0f);

		InitMaxLogic(123456789.0f);
		InitLogic(123456789.0f);

		InitMaxSelfEsteem(123456789.0f);
		InitSelfEsteem(123456789.0f);

		InitMaxMotivation(123456789.0f);
		InitMotivation(123456789.0f);

		InitMaxDepression(123456789.0f);
		InitDepression(123456789.0f);

		InitMaxAnxiety(123456789.0f);
		InitAnxiety(123456789.0f);

		InitMaxAnger(123456789.0f);
		InitAnger(123456789.0f);
	}
}

void UKausUnitAttributeSet::ClampAttribute(const FGameplayAttribute& Attribute, float& NewValue) const
{
	if (Attribute == GetVitalityAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxVitality()); }
	else if (Attribute == GetMaxVitalityAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetReactionSpeedAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxReactionSpeed()); }
	else if (Attribute == GetMaxReactionSpeedAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetLogicAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxLogic()); }
	else if (Attribute == GetMaxLogicAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetSelfEsteemAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxSelfEsteem()); }
	else if (Attribute == GetMaxSelfEsteemAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetMotivationAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxMotivation()); }
	else if (Attribute == GetMaxMotivationAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetDepressionAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxDepression()); }
	else if (Attribute == GetMaxDepressionAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetAnxietyAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxAnxiety()); }
	else if (Attribute == GetMaxAnxietyAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }

	else if (Attribute == GetAngerAttribute()) { NewValue = FMath::Clamp(NewValue, 0.0f, GetMaxAnger()); }
	else if (Attribute == GetMaxAngerAttribute()) { NewValue = FMath::Max(NewValue, 1.0f); }
}

void UKausUnitAttributeSet::OnRep_Vitality(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Vitality, OldValue);

	const float CurrentVitality = GetVitality();
	const float EstimatedMagnitude = CurrentVitality - OldValue.GetCurrentValue();

	OnVitalityChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentVitality);
}

void UKausUnitAttributeSet::OnRep_MaxVitality(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxVitality, OldValue);

	OnMaxVitalityChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxVitality() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxVitality());
}

void UKausUnitAttributeSet::OnRep_ReactionSpeed(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, ReactionSpeed, OldValue);

	const float CurrentReactionSpeed = GetReactionSpeed();
	const float EstimatedMagnitude = CurrentReactionSpeed - OldValue.GetCurrentValue();

	OnReactionSpeedChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentReactionSpeed);
}

void UKausUnitAttributeSet::OnRep_MaxReactionSpeed(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxReactionSpeed, OldValue);

	OnMaxReactionSpeedChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxReactionSpeed() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxReactionSpeed());
}

void UKausUnitAttributeSet::OnRep_Logic(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Logic, OldValue);

	const float CurrentLogic = GetLogic();
	const float EstimatedMagnitude = CurrentLogic - OldValue.GetCurrentValue();

	OnLogicChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentLogic);
}

void UKausUnitAttributeSet::OnRep_MaxLogic(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxLogic, OldValue);

	OnMaxLogicChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxLogic() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxLogic());
}

void UKausUnitAttributeSet::OnRep_SelfEsteem(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, SelfEsteem, OldValue);

	const float CurrentSelfEsteem = GetSelfEsteem();
	const float EstimatedMagnitude = CurrentSelfEsteem - OldValue.GetCurrentValue();

	OnSelfEsteemChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentSelfEsteem);
}

void UKausUnitAttributeSet::OnRep_MaxSelfEsteem(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxSelfEsteem, OldValue);

	OnMaxSelfEsteemChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxSelfEsteem() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxSelfEsteem());
}

void UKausUnitAttributeSet::OnRep_Motivation(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Motivation, OldValue);

	const float CurrentMotivation = GetMotivation();
	const float EstimatedMagnitude = CurrentMotivation - OldValue.GetCurrentValue();

	OnMotivationChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentMotivation);
}

void UKausUnitAttributeSet::OnRep_MaxMotivation(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxMotivation, OldValue);

	OnMaxMotivationChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxMotivation() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxMotivation());
}

void UKausUnitAttributeSet::OnRep_Depression(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Depression, OldValue);

	const float CurrentDepression = GetDepression();
	const float EstimatedMagnitude = CurrentDepression - OldValue.GetCurrentValue();

	OnDepressionChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentDepression);
}

void UKausUnitAttributeSet::OnRep_MaxDepression(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxDepression, OldValue);

	OnMaxDepressionChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxDepression() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxDepression());
}

void UKausUnitAttributeSet::OnRep_Anxiety(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Anxiety, OldValue);

	const float CurrentAnxiety = GetAnxiety();
	const float EstimatedMagnitude = CurrentAnxiety - OldValue.GetCurrentValue();

	OnAnxietyChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentAnxiety);
}

void UKausUnitAttributeSet::OnRep_MaxAnxiety(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxAnxiety, OldValue);

	OnMaxAnxietyChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxAnxiety() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxAnxiety());
}

void UKausUnitAttributeSet::OnRep_Anger(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, Anger, OldValue);

	const float CurrentAnger = GetAnger();
	const float EstimatedMagnitude = CurrentAnger - OldValue.GetCurrentValue();

	OnAngerChanged.Broadcast(nullptr, nullptr, nullptr, EstimatedMagnitude, OldValue.GetCurrentValue(), CurrentAnger);
}

void UKausUnitAttributeSet::OnRep_MaxAnger(const FGameplayAttributeData& OldValue)
{
	GAMEPLAYATTRIBUTE_REPNOTIFY(UKausUnitAttributeSet, MaxAnger, OldValue);

	OnMaxAngerChanged.Broadcast(nullptr, nullptr, nullptr, GetMaxAnger() - OldValue.GetCurrentValue(), OldValue.GetCurrentValue(), GetMaxAnger());
}