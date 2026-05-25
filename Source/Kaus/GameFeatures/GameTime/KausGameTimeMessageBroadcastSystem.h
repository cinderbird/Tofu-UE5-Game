// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausDayCycleTypes.h"
#include "KausGameTimeMessageBroadcastSystem.generated.h"

class UKausDayCycleSubsystem;

/**
 * Time 메시지의 표준 페이로드.
 *
 * GameplayMessageSubsystem으로 발사되는 모든 Event.Time.* 메시지가 이 페이로드를 사용.
 * Node 시스템의 Reaction이 ListenEventTag로 받아 사용.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausTimeMessagePayload
{
    GENERATED_BODY()

    /** 메시지가 발사된 시점의 Cycle 좌표 (이미 갱신된 새 좌표). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Time")
    FKausDayCyclePoint NewPoint;

    /** 변경 직전의 Cycle 좌표. 첫 진입 시 invalid 가능. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Time")
    FKausDayCyclePoint PreviousPoint;

    /** 이 변화가 Date 경계를 넘었는가. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Time")
    bool bDateChanged = false;
};


/**
 * UKausDayCycleSubsystem의 OnCycleChanged 신호를 GameplayMessageSubsystem으로
 * 변환·방송하는 어댑터.
 *   Event.Time.CycleEntered.{NewCycleTag}
 *     예: Event.Time.CycleEntered.Morning
 *     Cycle이 변경된 직후 새 Cycle 진입을 알린다.
 *
 *   Event.Time.CycleExiting.{PreviousCycleTag}
 *     예: Event.Time.CycleExiting.Night2
 *     Cycle 변경 직후 (이미 새 Cycle로 전환됨), 이전 Cycle을 알린다.
 *     CycleEntered보다 먼저 발사된다 — "이전 Cycle 종료" 핸들러가
 *     먼저 정리할 수 있도록.
 *
 *   Event.Time.DayStart
 *     Date가 변경된 경우 (Cycle wrap), 새 날짜의 첫 Cycle 진입과 함께.
 *
 *   Event.Time.DayEnd
 *     Date가 변경된 경우, 이전 날짜의 마지막 Cycle 이탈과 함께.
 *
 *   Event.Time.AdditionalEvent (Spec.AdditionalOnEnter/OnExitEventTag)
 *     Cycle Spec이 명시한 추가 이벤트가 있으면 함께 발사.
 *
 * 발사 순서 (Date 경계 통과 시):
 *
 *   1. Event.Time.CycleExiting.{Previous}     ← 이전 Cycle 정리
 *   2. Event.Time.DayEnd                       ← 이전 Day 정리
 *   3. Event.Time.DayStart                     ← 새 Day 시작
 *   4. Event.Time.CycleEntered.{New}           ← 새 Cycle 시작
 *   5. (Spec.AdditionalOnEnterEventTag)        ← 새 Cycle의 추가 이벤트
 *
 * Date 경계 미통과 시:
 *
 *   1. Event.Time.CycleExiting.{Previous}
 *   2. Event.Time.CycleEntered.{New}
 *   3. (Spec.AdditionalOnEnterEventTag)
 *
 * 모든 메시지는 동일 페이로드(FKausTimeMessagePayload)를 가진다 — 구독자가
 * 같은 정보로 여러 단계를 추적 가능.
 *
 * 의존성:
 *   - UKausDayCycleSubsystem (같은 GameInstance)
 *   - UGameplayMessageSubsystem (Epic, GameplayMessageRuntime)
 *
 * 라이프사이클:
 *   GameInstance와 동일. Initialize에서 DayCycleSubsystem 구독을 시작하지 않는다 —
 *   DayCycleSubsystem이 InitializeWithDefinition으로 활성화되는 시점에
 *   별도 트리거가 필요하다 (GameMode가 호출).
 */
UCLASS()
class KAUS_API UKausGameTimeMessageBroadcastSystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~ USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~ End USubsystem

    /**
     * DayCycleSubsystem과의 구독을 활성화.
     * 게임 시작 시 Calendar/DayCycle 초기화 직후에 호출되어야 한다.
     * 재호출 가능 — 기존 구독을 정리하고 새로 등록 (idempotent).
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Time")
    void StartBroadcasting();

    /**
     * 구독 해제. 게임 종료 또는 시스템 리셋 시.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Time")
    void StopBroadcasting();

    UFUNCTION(BlueprintPure, Category = "Kaus|Time")
    bool IsBroadcasting() const { return bIsBroadcasting; }

protected:
    /** DayCycleSubsystem.OnCycleChanged 핸들러. */
    UFUNCTION()
    void HandleCycleChanged(const FKausDayCyclePoint& NewPoint, const FKausDayCyclePoint& PreviousPoint);

    /**
     * 단일 메시지 방송 헬퍼.
     *
     * virtual인 이유: 단위 테스트에서 GameplayMessageSubsystem registry를
     * 우회하고 직접 만든 인스턴스로 redirect 가능하도록.
     */
    virtual void BroadcastTimeMessage(const FGameplayTag& EventTag, const FKausTimeMessagePayload& Payload) const;

    /**
     * 표준 메시지 시퀀스 발사.
     * (Exiting → DayEnd → DayStart → Entered → Additional)
     */
    void BroadcastCycleTransition(
        const FKausDayCyclePoint& NewPoint,
        const FKausDayCyclePoint& PreviousPoint,
        bool bDateChanged) const;

    /**
     * 이벤트 root + Cycle 태그의 leaf를 합친 자식 태그를 만든다.
     * 예: (Event.Time.CycleEntered, Calendar.Cycle.Morning) → Event.Time.CycleEntered.Morning
     *
     * 자식 태그가 등록되지 않았으면 invalid를 반환.
     * 등록 안 된 자식 이벤트는 발사하지 않는다 — 디자이너가 모든 Cycle에 대응하는
     * Event.Time.CycleEntered.{X} / CycleExiting.{X} 태그를 등록해야 동작.
     */
    static FGameplayTag MakeChildEventTag(const FGameplayTag& EventRoot, const FGameplayTag& CycleTag);

    /**
     * DayCycleSubsystem 안전 조회.
     *
     * virtual인 이유: 단위 테스트에서 GameInstance subsystem registry를 우회하고
     * 직접 만든 DayCycleSubsystem 인스턴스를 inject 가능하도록.
     */
    virtual UKausDayCycleSubsystem* GetDayCycleSubsystem() const;

private:
    UPROPERTY(Transient)
    bool bIsBroadcasting = false;

    /** 재진입 방지 — 메시지 발사 중 다른 OnCycleChanged 처리 방지. */
    UPROPERTY(Transient)
    bool bIsHandling = false;
};
