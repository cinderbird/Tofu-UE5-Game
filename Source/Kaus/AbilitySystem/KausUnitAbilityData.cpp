#include "AbilitySystem/KausUnitAbilityData.h"
#include "AbilitySystem/KausAbilitySystemComponent.h"
#include "Logs/KausLogChannels.h"
#include "Attributes/KausAttributeSet.h"
#include "AbilitySystem/KausUnitInitializationContext.h"

void FKausAbilitySet_GrantedHandles::AddAbilitySpecHandle(const FGameplayAbilitySpecHandle& Handle)
{
	if (Handle.IsValid())
	{
		AbilitySpecHandles.Add(Handle);
	}
}

void FKausAbilitySet_GrantedHandles::AddGameplayEffectHandle(const FActiveGameplayEffectHandle& Handle)
{
	if (Handle.IsValid())
	{
		GameplayEffectHandles.Add(Handle);
	}
}

void FKausAbilitySet_GrantedHandles::AddAttributeSet(UAttributeSet* Set)
{
	GrantedAttributeSets.Add(Set);
}

void FKausAbilitySet_GrantedHandles::TakeFromAbilitySystem(UKausAbilitySystemComponent* KausASC)
{
	check(KausASC);

	if (!KausASC->IsOwnerActorAuthoritative())
	{
		// Must be authoritative to give or take ability sets.
		return;
	}

	for (const FGameplayAbilitySpecHandle& Handle : AbilitySpecHandles)
	{
		if (Handle.IsValid())
		{
			KausASC->ClearAbility(Handle);
		}
	}

	for (const FActiveGameplayEffectHandle& Handle : GameplayEffectHandles)
	{
		if (Handle.IsValid())
		{
			KausASC->RemoveActiveGameplayEffect(Handle);
		}
	}

	for (UAttributeSet* Set : GrantedAttributeSets)
	{
		KausASC->RemoveSpawnedAttribute(Set);
	}

	AbilitySpecHandles.Reset();
	GameplayEffectHandles.Reset();
	GrantedAttributeSets.Reset();
}

UKausUnitAbilityData::UKausUnitAbilityData(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UKausUnitAbilityData::GiveToAbilitySystem(UKausAbilitySystemComponent* KausASC, FKausAbilitySet_GrantedHandles* OutGrantedHandles, const FKausUnitInitializationContext& InitContext) const
{
	check(KausASC);

    if (!KausASC->IsOwnerActorAuthoritative())
    {
        return;
    }

    for (const FKausAbilitySet_AttributeSet& SetToGrant : GrantedAttributes)
    {
        if (!IsValid(SetToGrant.AttributeSet)) continue;

        UAttributeSet* NewSet = NewObject<UAttributeSet>(KausASC->GetOwner(), SetToGrant.AttributeSet);
        KausASC->AddAttributeSetSubobject(NewSet);

        if (IKausAttributeRowInterface* InterfaceSet = Cast<IKausAttributeRowInterface>(NewSet))
        {
            if (!SetToGrant.InitializationData.IsNull())
            {
                const UDataTable* InitTable = SetToGrant.InitializationData.LoadSynchronous();
                InterfaceSet->InitAttributeData(InitTable, InitContext);
            }
        }

        if (OutGrantedHandles)
        {
            OutGrantedHandles->AddAttributeSet(NewSet);
        }
    }

    for (const FKausAbilitySet_GameplayAbility& AbilityToGrant : GrantedGameplayAbilities)
    {
        if (!IsValid(AbilityToGrant.Ability)) continue;

        UKausGameplayAbility* AbilityCDO = AbilityToGrant.Ability->GetDefaultObject<UKausGameplayAbility>();

        float AbilityLevel = (AbilityToGrant.AbilityLevel > 0) ? (float)AbilityToGrant.AbilityLevel : InitContext.Level;

        FGameplayAbilitySpec AbilitySpec(AbilityCDO, AbilityLevel);
        AbilitySpec.SourceObject = InitContext.AvatarActor;
        AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilityToGrant.InputTag);

        const FGameplayAbilitySpecHandle Handle = KausASC->GiveAbility(AbilitySpec);

        if (OutGrantedHandles)
        {
            OutGrantedHandles->AddAbilitySpecHandle(Handle);
        }
    }

    for (const FKausAbilitySet_GameplayEffect& EffectToGrant : GrantedGameplayEffects)
    {
        if (!IsValid(EffectToGrant.GameplayEffect)) continue;

        const UGameplayEffect* GameplayEffect = EffectToGrant.GameplayEffect->GetDefaultObject<UGameplayEffect>();

        float EffectLevel = (EffectToGrant.EffectLevel > 0.0f) ? EffectToGrant.EffectLevel : InitContext.Level;

        const FActiveGameplayEffectHandle Handle = KausASC->ApplyGameplayEffectToSelf(GameplayEffect, EffectLevel, KausASC->MakeEffectContext());

        if (OutGrantedHandles)
        {
            OutGrantedHandles->AddGameplayEffectHandle(Handle);
        }
    }
}

void UKausUnitAbilityData::GiveToAbilitySystem(UKausAbilitySystemComponent* KausASC, FKausAbilitySet_GrantedHandles* OutGrantedHandles, UObject* SourceObject) const
{
	check(KausASC);

	if (!KausASC->IsOwnerActorAuthoritative())
	{
		// Must be authoritative to give or take ability sets.
		return;
	}

	// Grant the attribute sets.
	for (int32 SetIndex = 0; SetIndex < GrantedAttributes.Num(); ++SetIndex)
	{
		const FKausAbilitySet_AttributeSet& SetToGrant = GrantedAttributes[SetIndex];

		if (!IsValid(SetToGrant.AttributeSet))
		{
			UE_LOG(LogKausAbilitySystem, Error, TEXT("GrantedAttributes[%d] on ability set [%s] is not valid"), SetIndex, *GetNameSafe(this));
			continue;
		}

		UAttributeSet* NewSet = NewObject<UAttributeSet>(KausASC->GetOwner(), SetToGrant.AttributeSet);
		KausASC->AddAttributeSetSubobject(NewSet);

		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddAttributeSet(NewSet);
		}
	}

	// Grant the gameplay abilities.
	for (int32 AbilityIndex = 0; AbilityIndex < GrantedGameplayAbilities.Num(); ++AbilityIndex)
	{
		const FKausAbilitySet_GameplayAbility& AbilityToGrant = GrantedGameplayAbilities[AbilityIndex];

		if (!IsValid(AbilityToGrant.Ability))
		{
			UE_LOG(LogKausAbilitySystem, Error, TEXT("GrantedGameplayAbilities[%d] on ability set [%s] is not valid."), AbilityIndex, *GetNameSafe(this));
			continue;
		}

		UKausGameplayAbility* AbilityCDO = AbilityToGrant.Ability->GetDefaultObject<UKausGameplayAbility>();

		FGameplayAbilitySpec AbilitySpec(AbilityCDO, AbilityToGrant.AbilityLevel);
		AbilitySpec.SourceObject = SourceObject;
		AbilitySpec.GetDynamicSpecSourceTags().AddTag(AbilityToGrant.InputTag);

		const FGameplayAbilitySpecHandle AbilitySpecHandle = KausASC->GiveAbility(AbilitySpec);

		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddAbilitySpecHandle(AbilitySpecHandle);
		}
	}

	// Grant the gameplay effects.
	for (int32 EffectIndex = 0; EffectIndex < GrantedGameplayEffects.Num(); ++EffectIndex)
	{
		const FKausAbilitySet_GameplayEffect& EffectToGrant = GrantedGameplayEffects[EffectIndex];

		if (!IsValid(EffectToGrant.GameplayEffect))
		{
			UE_LOG(LogKausAbilitySystem, Error, TEXT("GrantedGameplayEffects[%d] on ability set [%s] is not valid"), EffectIndex, *GetNameSafe(this));
			continue;
		}

		const UGameplayEffect* GameplayEffect = EffectToGrant.GameplayEffect->GetDefaultObject<UGameplayEffect>();
		const FActiveGameplayEffectHandle GameplayEffectHandle = KausASC->ApplyGameplayEffectToSelf(GameplayEffect, EffectToGrant.EffectLevel, KausASC->MakeEffectContext());

		if (OutGrantedHandles)
		{
			OutGrantedHandles->AddGameplayEffectHandle(GameplayEffectHandle);
		}
	}
}
