#pragma once
#include "Animation/AnimInstance.h"
#include "GameplayEffectTypes.h"
#include "KausAnimInstance.generated.h"

class UAbilitySystemComponent;
class UKausCharacterMovementComponent;

UCLASS(Config = Game)
class UKausAnimInstance : public UAnimInstance
{
	GENERATED_BODY()

public:
	UKausAnimInstance(const FObjectInitializer& ObjectInitializer);

	virtual void InitializeWithAbilitySystem(UAbilitySystemComponent* ASC);

protected:
#if WITH_EDITOR
	virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
	virtual void NativeInitializeAnimation() override;
	virtual void NativeUpdateAnimation(float DeltaSeconds) override;

	UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
	FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

	UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
	float GroundDistance = -1.0f;

	UPROPERTY(Transient)
	TObjectPtr<UKausCharacterMovementComponent> CachedMovementComp;

	UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
	bool bIsGameplayPhase = false;

	UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
	bool bIsCinematicPhase = false;

	/** 현재 활성 스킬 액션 태그 (ASC에서 직접 조회 가능, 디버그용 캐시) */
	UPROPERTY(BlueprintReadOnly, Transient, Category = "Kaus|Cinematic")
	FGameplayTag ActiveSkillActionTag;

	/** GameplayState → CinematicState */
	UFUNCTION(BlueprintPure, Category = "Kaus|Animation Phase|Transition",
		meta = (BlueprintThreadSafe))
	bool CanTransition_GameplayToCinematic() const;

	/** CinematicState → GameplayState */
	UFUNCTION(BlueprintPure, Category = "Kaus|Animation Phase|Transition",
		meta = (BlueprintThreadSafe))
	bool CanTransition_CinematicToGameplay() const;

	/** CinematicState 진입 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnCinematicStateEntered();

	/** CinematicState 퇴장 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnCinematicStateExited();

	/** GameplayState 진입 시 */
	UFUNCTION(BlueprintCallable, Category = "Kaus|Animation Phase|State")
	void OnGameplayStateEntered();
};
