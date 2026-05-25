// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameplayTagContainer.h"
#include "KausDayCycleTypes.h"
#include "KausDayCycleDefinition.h"   
#include "KausGameTimeComponent.generated.h"

class UKausDayCycleSubsystem;

UENUM(BlueprintType)
enum class EKausSpendResult : uint8
{
    Accepted             UMETA(DisplayName = "Accepted"),
    NotInitialized       UMETA(DisplayName = "Not Initialized"),
    InvalidCost          UMETA(DisplayName = "Invalid Cost"),     /** 비용이 음수. */
    Insufficient         UMETA(DisplayName = "Insufficient"),     /** 남은 양 부족. */
};

/**
 * 남은 양 변경 알림.
 *
 * 발사 시점:
 *   - Cycle 진입 시 — 초기 양 부여 (NewRemaining=Total, DeltaSpent=0)
 *   - TrySpend 성공 시 — 차감 후 (NewRemaining 감소, DeltaSpent>0)
 *   - AddRemaining 시 — 디버그/시네마틱 부여 (DeltaSpent<0)
 *
 * 미발사:
 *   - Cycle 미초기화 상태에서의 호출
 *   - TrySpend 거부 (Accepted 외 모든 경우)
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FKausRemainingChangedDelegate, int32, NewRemaining, int32, Total, int32, DeltaSpent);

/**
 * Cycle 종료 가능성 변경 알림.
 *
 * 발사 시점:
 *   - bAllowManualEndAtThreshold=true인 Cycle에서 임계값 도달 시 (false→true)
 *   - 새 Cycle 진입 시 (false 또는 true 재계산)
 *
 * UI("다음으로" 버튼)가 이 신호를 듣고 활성/비활성 결정.
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKausCanManualEndChangedDelegate, bool, bCanManualEnd); 

/**
 * 플레이어의 시간 예산을 회계한다.
 *
 * 책임:
 *   1) Cycle 진입 시 Budget 초기화 (Spec.CycleBudget 기준)
 *   2) 행동 Ability가 비용을 차감하는 진입점 제공 (TrySpend)
 *   3) 종료 정책 평가 — Budget 소진 시 자동 종료, 임계 도달 시 수동 종료 활성
 *   4) 자동 종료 시 DayCycleSubsystem에 진행 명령
 *   5) 수동 종료 API 제공 — UI "다음으로" 버튼이 호출
 * *
 * 부착 위치:
 *   APlayerState. 영속성을 가지며 SaveData에 직렬화 친화적.
 *
 * 의존성:
 *   - UKausDayCycleSubsystem (GameInstance)
 *   - GetCurrentCycleSpec()을 위해 Definition 조회
 *
 * 발행 계약:
 *   1) Cycle 진입 시 OnRemainingChanged 1회 발사 (초기 양 = Spec.CycleBudget).
 *   2) TrySpend 성공 시 OnRemainingChanged 발사.
 *   3) 남은 양이 EndPolicy에 따라 0에 도달하면 DayCycleSubsystem.AdvanceCycle 호출.
 *      그 결과로 새 Cycle 진입이 일어나며 다시 (1)로.
 *   4) 임계값 도달 시 OnCanManualEndChanged(true) 발사.
 * 
 * 모든 mutation API는 게임 스레드 전용 (디버그 빌드 check).
 */
UCLASS(ClassGroup = "Kaus", meta = (BlueprintSpawnableComponent))
class KAUS_API UKausGameTimeComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKausGameTimeComponent();

    //~ UActorComponent
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    //~ End UActorComponent

    /**
     * 비용을 차감 시도.
     *
     * UKausPlayerActionAbility::ActivateAbility의 첫 단계에서 호출된다.
     * 거부되면 Ability가 즉시 EndAbility(Cancelled)해야 한다.
     *
     * @param Cost  차감할 양 (BudgetMode가 Token이면 토큰, Realtime이면 분).
     *              음수는 거부.
     * @return 결과 코드. Accepted만 실제 차감 발생.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Player|Time")
    EKausSpendResult TrySpend(int32 Cost);

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    bool CanSpend(int32 Cost) const;

    /**
     * 수동으로 Cycle 종료 시도.
     * EndPolicy.bAllowManualEndAtThreshold=true이고 임계값 도달 시에만 허용.
     *
     * @return 종료가 진행되었으면 true (DayCycleSubsystem.AdvanceCycle 호출됨).
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Player|Time")
    bool TryManualEndCycle();

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    bool CanManualEndCycle() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    int32 GetRemaining() const { return Remaining; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    int32 GetCycleTotal() const { return CycleTotal; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    int32 GetSpent() const { return CycleTotal - Remaining; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    FGameplayTag GetCurrentBudgetMode() const { return CurrentBudgetMode; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    FGameplayTag GetCurrentCycleTag() const { return CurrentCycleTag; }

    /** Realtime Mode의 현재 가상 시각 (분 단위 0~1439). Token Mode면 0 반환. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Player|Time")
    int32 GetCurrentRealtimeMinute() const;

    UFUNCTION(BlueprintCallable, Category = "Kaus|Player|Time|Debug")
    void AddRemaining(int32 Amount);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Player|Time|Debug")
    void ForceAdvanceCycle();

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Player|Time")
    FKausRemainingChangedDelegate OnRemainingChanged;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Player|Time")
    FKausCanManualEndChangedDelegate OnCanManualEndChanged;

protected:
    /** DayCycleSubsystem.OnCycleChanged 핸들러. Cycle 진입 시 Budget 초기화. */
    UFUNCTION()
    void HandleCycleChanged(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint);

    /**
     * 주어진 CycleTag에 해당하는 Spec을 Definition에서 조회.
     * DayCycleSubsystem → Definition → FindSpec 경로.
     */
    bool TryFindSpec(const FGameplayTag& CycleTag, FKausCycleSpec& OutSpec) const;

    /**
     * Cycle 진입 시 호출 — Spec 기반으로 멤버 재초기화.
     * OnRemainingChanged + OnCanManualEndChanged 발사.
     */
    void EnterCycle(const FGameplayTag& CycleTag);

    /**
     * 남은 양 변경 후 종료 정책 평가.
     * 자동 종료 조건이면 DayCycleSubsystem.AdvanceCycle 호출.
     * 수동 종료 가능성이 변하면 OnCanManualEndChanged 발사.
     */
    void EvaluateEndPolicy();

    virtual UKausDayCycleSubsystem* GetDayCycleSubsystem() const;

private:
    /**
     * Cycle이 진입한 상태인가 — TrySpend/CanSpend/CanManualEndCycle/AddRemaining의 공통 가드.
     * CurrentCycleTag가 valid이고 CycleTotal>0이면 true.
     */
    bool IsCycleActive() const { return CurrentCycleTag.IsValid() && CycleTotal > 0; }

    /**
     * DayCycleSubsystem.AdvanceCycle을 bIsAdvancing 가드와 함께 호출.
     * EvaluateEndPolicy / TryManualEndCycle / ForceAdvanceCycle의 공통 진행 진입점.
     * @return DayCycleSubsystem이 있어 호출이 발생했으면 true.
     */
    bool RequestAdvanceCycle();

    /**
     * CanManualEndCycle 값이 마지막 발사값과 다르면 OnCanManualEndChanged 발사 + 캐시 갱신.
     * EnterCycle / EvaluateEndPolicy의 공통 후처리.
     */
    void NotifyCanManualEndIfChanged();

    /** 현재 진입한 Cycle의 식별 태그. Cycle 미초기화 시 invalid. */
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient)
    FGameplayTag CurrentCycleTag;

    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient, meta = (Categories = "Calendar.Cycle.BudgetMode"))
    FGameplayTag CurrentBudgetMode;

    /** 이번 Cycle 진입 시 부여된 총량 (= Spec.CycleBudget). */
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient)
    int32 CycleTotal = 0;

    /** 남은 양. */
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient)
    int32 Remaining = 0;

    /** Realtime Mode의 시작 분 (Spec.RealtimeStartMinute). 가상 시각 계산용. */
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient)
    int32 CycleStartMinute = 0;

    /** 종료 정책 사본 (현재 Cycle 진행 중 사용). */
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State", Transient)
    FKausCycleEndPolicy CurrentEndPolicy;

    /** 마지막으로 발사한 OnCanManualEndChanged 값. 변화 시에만 재발사. */
    UPROPERTY(Transient)
    bool bLastBroadcastedCanManualEnd = false;

    /**
     * 재진입 방지 플래그.
     * AdvanceCycle 호출 → OnCycleChanged → HandleCycleChanged 재진입 가능성 차단.
     */
    UPROPERTY(Transient)
    bool bIsAdvancing = false;
};
