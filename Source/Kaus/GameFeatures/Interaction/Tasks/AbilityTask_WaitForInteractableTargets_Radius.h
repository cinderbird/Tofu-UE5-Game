#pragma once

#include "Interaction/InteractionQuery.h"
#include "Interaction/Tasks/AbilityTask_WaitForInteractableTargets.h"
#include "Engine/OverlapResult.h"
#include "AbilityTask_WaitForInteractableTargets_Radius.generated.h"

struct FCollisionProfileName;
class UGameplayAbility;

struct FKausInteractCandidate
{
	TScriptInterface<IInteractableTarget> TargetInterface;
	AActor* TargetActor;
	float Score;

	bool operator<(const FKausInteractCandidate& Other) const
	{
		return Score > Other.Score; // 점수가 높은 순으로 정렬
	}
};

/*
*  todo: need optimazation scan period(not a 0.1s, only update when player needed)
*/
UCLASS()
class KAUS_API UAbilityTask_WaitForInteractableTargets_Radius : public UAbilityTask_WaitForInteractableTargets
{
	GENERATED_UCLASS_BODY()

	virtual void Activate() override;

	UFUNCTION(BlueprintCallable, Category="Ability|Tasks", meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility", BlueprintInternalUseOnly = "TRUE"))
	static UAbilityTask_WaitForInteractableTargets_Radius* WaitForInteractableTargets_Radius(
		UGameplayAbility* OwningAbility, 
		FInteractionQuery InteractionQuery, 
		FCollisionProfileName TraceProfile, 
		float InteractionScanRange = 200.0f, 
		float InteractionScanRate = 0.100f, 
		bool bSortByDistance = true,
		bool bShowDebug = false
	);

private:
	virtual void OnDestroy(bool AbilityEnded) override;

	void PerformOverlap();

	UPROPERTY()
	FInteractionQuery InteractionQuery;

	float InteractionScanRange = 200.0f;
	float InteractionScanRate = 0.100f;
	bool bSortByDistance = true;
	bool bShowDebug = false;
	float InteractionRadiusScandRange = 200.0f;

	FTimerHandle TimerHandle;

	TArray<FOverlapResult> OverlapResults;
	TArray<FKausInteractCandidate> Candidates;

};