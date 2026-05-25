// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "KausDayCycleDefinition.generated.h"

USTRUCT(BlueprintType)
struct KAUS_API FKausCycleEndPolicy
{
    GENERATED_BODY()

    /** Budget이 0에 도달하면 자동으로 다음 Cycle로 진행. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|EndPolicy")
    bool bEndOnBudgetExhausted = true;

    /** 남은 Budget이 임계값 이하가 되면 수동 종료 허용.  */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|EndPolicy")
    bool bAllowManualEndAtThreshold = false;

    /** bAllowManualEndAtThreshold=true 일 때, 남은 양이 이 값 이하가 되면 수동 종료 가능. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|EndPolicy", meta = (ClampMin = 0, EditCondition = "bAllowManualEndAtThreshold"))
    int32 ManualEndAtRemainingOrLess = 0;
};


USTRUCT(BlueprintType)
struct KAUS_API FKausCycleSpec
{
    GENERATED_BODY()

    /** 이 Cycle을 식별하는 태그. Definition 내에서 유일해야 함. */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle", meta = (Categories = "Calendar.Cycle"))
    FGameplayTag CycleTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle")
    FText DisplayName;

    /**
     * 가상 시각 (0~23). UI 표시 및 내러티브용. 시뮬레이션엔 영향 없음.
     * BudgetMode=Realtime일 때 RealtimeStartMinute의 기준점으로도 사용 가능.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle", meta = (ClampMin = 0, ClampMax = 23))
    int32 DisplayHour = 0;

    /**
     * 이 Cycle의 Budget 차감 방식.
     *
     * Calendar.Cycle.BudgetMode.Token    — 정수 토큰. 행동 1회당 정수 Cost 차감.
     * Calendar.Cycle.BudgetMode.Realtime — 분 단위. 행동 1회당 분 단위 Cost 차감.
     *
     * 두 모드의 내부 메커니즘은 동일 — 단지 단위가 다르다.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|Budget", meta = (Categories = "Calendar.Cycle.BudgetMode"))
    FGameplayTag BudgetMode;

    /**
     * 이 Cycle 진입 시 부여되는 시간 예산.
     * 단위는 BudgetMode가 결정한다 (Token: 정수 / Realtime: 분).
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|Budget", meta = (ClampMin = 0))
    int32 CycleBudget = 0;

    /**
     * Realtime Mode에만 의미 있음. Cycle 시작 시각(분 단위, 0~1439).
     * 예: 18:00 시작이면 1080.
     * UI 시계 표시에 사용. Token Mode에서는 무시됨.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|Budget", meta = (ClampMin = 0, ClampMax = 1439))
    int32 RealtimeStartMinute = 0;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|EndPolicy")
    FKausCycleEndPolicy EndPolicy;

    /**
     * 이 Cycle 진입 시 TimeMessageBroadcaster가 추가로 방송할 이벤트 태그.
     *
     * 표준 진입 메시지 Event.Time.CycleEntered.{CycleTag} 외에 추가로 발사된다.
     * 비워두면 추가 메시지 없음 (표준 메시지만).
     *
     * 사용 예: 특정 Cycle만 추가 데이터를 함께 방송하고 싶을 때.
     */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|Events", meta = (Categories = "Event"))
    FGameplayTag AdditionalOnEnterEventTag;

    /** Cycle 이탈 시 추가 이벤트 (위와 같음). */
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Cycle|Events", meta = (Categories = "Event"))
    FGameplayTag AdditionalOnExitEventTag;
};

/**
 * UKausDayCycleDefinition
 *
 * 하루의 Cycle 시퀀스 정의. DataAsset으로 보관되어 패키지 시점에 고정된다.
 *
 * 책임:
 *   1) 하루를 이루는 Cycle Spec들의 순서 보유
 *   2) Cycle 인덱스 ↔ 태그 변환
 *   3) 다음 Cycle / 이전 Cycle 계산
 *   4) Date 경계 판정
 *
 * 진행 규칙:
 *   - Cycles[0]이 하루의 시작.
 *   - 마지막 Cycle 다음 = 다음 Date의 Cycles[0].
 */
UCLASS(BlueprintType)
class KAUS_API UKausDayCycleDefinition : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    /**
     * 하루를 이루는 Cycle 시퀀스. 순서대로 진행.
     * 비어있으면 invalid.
     */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Definition", meta = (TitleProperty = "CycleTag"))
    TArray<FKausCycleSpec> Cycles;

    /**
     * 사용 가능한 상태인가:
     *   - Cycles가 비어있지 않음
     *   - 모든 CycleTag가 valid
     *   - CycleTag 중복 없음
     *   - 모든 Cycle이 BudgetMode를 가짐 (valid 태그)
     *   - 모든 Cycle의 CycleBudget >= 0
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    bool IsDefinitionValid(FString& OutError) const;

    bool IsDefinitionValid() const
    {
        FString Dummy;
        return IsDefinitionValid(Dummy);
    }

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    int32 GetCycleCount() const { return Cycles.Num(); }

    /** Tag → 인덱스. 없으면 INDEX_NONE. */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    int32 IndexOf(const FGameplayTag& CycleTag) const;

    /** 인덱스 → Tag. 범위 밖이면 invalid Tag. */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FGameplayTag TagAt(int32 Index) const;

    /** 인덱스 → Spec. 범위 밖이면 기본 Spec. */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FKausCycleSpec SpecAt(int32 Index) const;

    /** Tag로 Spec 직접 조회. 없으면 기본 Spec, OutFound=false. */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FKausCycleSpec FindSpec(const FGameplayTag& CycleTag, bool& OutFound) const;

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    bool ContainsCycle(const FGameplayTag& CycleTag) const { return IndexOf(CycleTag) != INDEX_NONE; }

    /**
     * CycleTag의 다음 Cycle. 마지막이면 첫 Cycle로 wrap.
     *
     * @param OutbWrappedDate  wrap 발생 = Date 경계 통과.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FGameplayTag NextCycle(const FGameplayTag& CycleTag, bool& OutbWrappedDate) const;

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    int32 GetCycleStepIndex(const FGameplayTag& CycleTag) const { return IndexOf(CycleTag); }

#if WITH_EDITOR
    virtual EDataValidationResult IsDataValid(class FDataValidationContext& Context) const override;
#endif
};
