// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausNarrativeStateSubsystem.generated.h"

// =============================================================================
//  델리게이트
// =============================================================================

/**
 * Narrative 상태 변경 알림.
 *
 * 발사 시점:
 *   - SetFlag / ClearFlag — 변경된 경우만
 *   - IncrementCounter / SetCounter — 변경된 경우만
 *
 * 미발사:
 *   - 같은 값으로 set (no-op)
 *   - Capture/Restore 시점 (대량 변경 — 구독자가 따로 OnRebuilt 구독)
 */
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKausNarrativeStateFlagChangedDelegate, const FGameplayTag&, ChangedTag);

DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausNarrativeStateCounterChangedDelegate, const FGameplayTag&, ChangedTag,
    int32, NewValue);

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKausNarrativeStateRebuiltDelegate);

// =============================================================================
//  UKausNarrativeStateSubsystem
// =============================================================================

/**
 * 게임 진행 중 누적되는 영속적 사실들의 단일 진리원.
 *
 * 보관하는 것:
 *   - 플래그 (FGameplayTagContainer): "발생/완료/해금" 같은 binary 사실
 *     예: Story.Day3.Afternoon.ChoseLibrary, Quest.KyoyaPhotoRequest.Triggered
 *   - 카운터 (TMap<FGameplayTag, int32>): 누적 횟수, 정량 진행도
 *     예: Phone.UseCount, Mirror.LookCount
 *
 * 보관하지 않는 것:
 *   - 캐릭터의 능력치 (UKausUnitAttributeSet이 담당)
 *   - 시간 좌표 (DayCycleSubsystem)
 *   - 캘린더 메타 (CalendarSubsystem)
 *   - 임시 상태 (Cycle 안에서만 유지되는 탐색 진행 등 — Layer 4 컨트롤러)
 *
 * 의도적 단순함:
 *   다른 시스템(NodeAction, Ability)이 SetFlag / IncrementCounter 호출.
 *   UI / EventScheduler-역할을 하는 Reaction이 HasFlag / GetCounter 조회.
 *   그 외의 복잡한 메커니즘은 외부에 위임.
 *
 * 모든 mutation API는 게임 스레드 전용 (디버그 빌드 check).
 *
 * SaveGame:
 *   CaptureSaveData / RestoreFromSaveData. 현재 데이터를 통째로 직렬화.
 *
 * NOTE: 이 시스템은 임시 UKausChoiceHistorySubsystem을 대체한다.
 *       마이그레이션 작업이 별도 단계에서 필요하다.
 */
UCLASS()
class KAUS_API UKausNarrativeStateSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~ USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~ End USubsystem

    // ─────────────────────────────────────────────────────────────────
    //  플래그 — binary 사실
    // ─────────────────────────────────────────────────────────────────

    /**
     * 플래그를 set. 이미 있으면 no-op.
     * @return 실제로 변경되었으면 true.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative|Flag")
    bool SetFlag(const FGameplayTag& Tag);

    /**
     * 플래그를 clear. 없었으면 no-op.
     * @return 실제로 변경되었으면 true.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative|Flag")
    bool ClearFlag(const FGameplayTag& Tag);

    UFUNCTION(BlueprintPure, Category = "Kaus|Narrative|Flag")
    bool HasFlag(const FGameplayTag& Tag) const;

    /**
     * 모든 플래그 중 부분 일치하는 것이 하나라도 있으면 true.
     * 예: HasFlagMatching(Story.Day3) → Story.Day3.* 중 하나라도 있으면 true.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|Narrative|Flag")
    bool HasFlagMatching(const FGameplayTag& Tag) const;

    /** 모든 플래그의 read-only 스냅샷. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Narrative|Flag")
    FGameplayTagContainer GetAllFlags() const { return Flags; }

    // ─────────────────────────────────────────────────────────────────
    //  카운터 — 누적 횟수
    // ─────────────────────────────────────────────────────────────────

    /**
     * 카운터에 Delta 더하기. Delta가 음수면 차감.
     * 결과가 0이면 맵에서 제거 (메모리 절약).
     *
     * @return 변경 후 값.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative|Counter")
    int32 IncrementCounter(const FGameplayTag& Tag, int32 Delta = 1);

    /**
     * 카운터를 명시적 값으로 설정.
     * 0이면 맵에서 제거.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative|Counter")
    void SetCounter(const FGameplayTag& Tag, int32 NewValue);

    /** 카운터 조회. 없으면 0. */
    UFUNCTION(BlueprintPure, Category = "Kaus|Narrative|Counter")
    int32 GetCounter(const FGameplayTag& Tag) const;

    /** 카운터 존재 여부 (0이 아닌 값). */
    UFUNCTION(BlueprintPure, Category = "Kaus|Narrative|Counter")
    bool HasCounter(const FGameplayTag& Tag) const;

    // ─────────────────────────────────────────────────────────────────
    //  일괄 리셋
    // ─────────────────────────────────────────────────────────────────

    /**
     * 특정 prefix로 시작하는 모든 플래그/카운터 제거.
     * 예: ClearMatching(Cycle.Day3) → Cycle.Day3.* 모두 제거.
     *
     * 주의: 해당 항목들에 대한 OnFlagChanged/OnCounterChanged가 발사된다.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative")
    void ClearMatching(const FGameplayTag& Prefix);

    /** 모든 상태 제거 (디버그 / 새 게임). OnRebuilt 발사. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Narrative|Debug")
    void ClearAll();

    // ─────────────────────────────────────────────────────────────────
    //  영속화
    // ─────────────────────────────────────────────────────────────────

    /**
     * SaveData 캡처 / 복원.
     * 구체적 SaveData 구조체는 별도 cpp/h 단계에서 정의.
     * 인터페이스 합의 후 추가.
     */
    // FKausNarrativeStateSaveData CaptureSaveData() const;
    // bool RestoreFromSaveData(const FKausNarrativeStateSaveData& Data);

    // ─────────────────────────────────────────────────────────────────
    //  델리게이트
    // ─────────────────────────────────────────────────────────────────

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Narrative")
    FKausNarrativeStateFlagChangedDelegate OnFlagSet;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Narrative")
    FKausNarrativeStateFlagChangedDelegate OnFlagCleared;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Narrative")
    FKausNarrativeStateCounterChangedDelegate OnCounterChanged;

    /** ClearAll, RestoreFromSaveData 등 대량 변경 후 발사. */
    UPROPERTY(BlueprintAssignable, Category = "Kaus|Narrative")
    FKausNarrativeStateRebuiltDelegate OnRebuilt;

private:
    UPROPERTY(Transient)
    FGameplayTagContainer Flags;

    UPROPERTY(Transient)
    TMap<FGameplayTag, int32> Counters;
};
