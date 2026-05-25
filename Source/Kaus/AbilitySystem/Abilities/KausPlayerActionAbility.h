// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/GameplayAbility.h"
#include "GameplayTagContainer.h"
#include "KausPlayerActionAbility.generated.h"

class UKausGameTimeComponent;

// =============================================================================
//  UKausPlayerActionAbility
// =============================================================================

/**
 * 플레이어가 명시적으로 시작한 행동을 표현하는 GameplayAbility의 베이스.
 *
 * 시간 비용을 가지며, ActivateAbility 시 KausGameTimeMessageBroadcastSystem 차감 요청한다.
 * 거부되면 즉시 EndAbility(Cancelled)한다.

 * Cost 결정 우선순위:
 *   1. Interaction의 TimeCostOverride (>= 0이면 우선 적용)
 *   2. TimeCostByMode 맵에 현재 BudgetMode가 있으면 그 값
 *   3. DefaultTimeCost
 *
 * Interaction의 override를 가져오는 방법:
 *   ActivateAbility의 TriggerEventData->OptionalObject로 전달된
 *   UKausNodeInteractionPayload의 metadata 또는, 별도 EventMagnitude를 통해
 *   주입된다. 정확한 메커니즘은 cpp 구현 단계에서 확정.
 *
 * 활성 흐름:
 *   1. ActivateAbility 진입
 *   2. ResolveTimeCost() — 위 우선순위로 비용 계산
 *   3. KausGameTimeMessageBroadcastSystem 조회
 *   4. TrySpendTime(TimeCost) 호출
 *      - Accepted → K2_OnActivate (BP 구현 진입)
 *      - 그 외 → EndAbility(true), OnRejected 발사
 *   5. K2_OnActivate가 자기 일을 마치면 EndAbility 호출 (정상 종료)
 *
 * 자식 클래스가 오버라이드할 것:
 *   - K2_OnActivate (BlueprintImplementableEvent) — 행동의 본 로직
 *   - GetTimeCost (선택) — 동적 cost 계산이 필요하면
 *
 * 자식 클래스가 오버라이드 *말 것*:
 *   - ActivateAbility — 베이스가 cost 차감 흐름을 관리
 *   - EndAbility — 베이스가 종료 시 후처리 가능
 */
UCLASS(Abstract, Blueprintable)
class KAUS_API UKausPlayerActionAbility : public UGameplayAbility
{
    GENERATED_BODY()

public:
    UKausPlayerActionAbility();

    //~ UGameplayAbility
    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, 
        const FGameplayAbilityActivationInfo ActivationInfo,
        const FGameplayEventData* TriggerEventData) override;
    //~ End UGameplayAbility

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Action|Cost", meta = (ClampMin = 0))
    int32 DefaultTimeCost = 1;

    /* { Calendar.Cycle.BudgetMode.Token: 1, Calendar.Cycle.BudgetMode.Realtime: 30 } */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Action|Cost", meta = (Categories = "Calendar.Cycle.BudgetMode"))
    TMap<FGameplayTag, int32> TimeCostByMode;

    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Action|Cost", DisplayName = "Resolve Time Cost") 
    int32 K2_ResolveTimeCost(const FGameplayEventData& TriggerEventData) const;
    virtual int32 ResolveTimeCost(const FGameplayEventData* TriggerEventData) const;

    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Action", DisplayName = "On Activate (After Cost Spent)")
    void K2_OnActivate(const FGameplayEventData& TriggerEventData);

protected:
    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Action", DisplayName = "On Rejected (Insufficient Time)")
    void K2_OnRejected();

    UKausGameTimeComponent* FindKausGameTimeComponent(const FGameplayAbilityActorInfo* ActorInfo) const;
};
