// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausGameDate.h"
#include "KausDayCycleTypes.h"
#include "KausDayCycleSubsystem.generated.h"

class UKausDayCycleDefinition;
class UKausCalendarSubsystem;
struct FKausDayMeta;

/**
 * UKausDayCycleSubsystem
 * *
 * 책임:
 *   1) 현재 시점(Date + Cycle) 보유
 *   2) 진행 명령 수신 (AdvanceCycle / AdvanceBy / JumpTo)
 *   3) Definition을 사용해 다음 좌표 계산
 *   4) 변경 시 OnCycleChanged / OnDateChanged 발행
 *   5) Calendar Subsystem에 위임하여 현재 Date의 메타 조회 헬퍼 제공
 *   6) SaveGame을 위한 Capture/Restore
 * *
 * 의존성:
 *   - UKausCalendarSubsystem이 InitializeWithSchedule 완료 상태여야 InitializeWith 호출 가능.
 *     (Calendar 미초기화 시 InitializeWith는 false 반환)
 *
 * 모든 mutation API는 게임 스레드 전용 (디버그 빌드 check).
 *
 * 발행 계약 (구독자가 의존할 것):
 *   1) AdvanceBy의 매 step에서 OnCycleChanged 발행 (bBroadcastEachStep=true 기본).
 *      EventScheduler가 모든 중간 상태에서 평가 가능.
 *   2) Date 경계를 넘는 step에서 OnCycleChanged → OnDateChanged 순으로 발행.
 *      두 델리게이트 모두 Current가 이미 갱신된 상태를 본다.
 *   3) JumpTo는 단일 신호. 중간 Cycle/Date 평가 없음.
 *      누락된 이벤트 시뮬레이션은 호출자 책임.
 *   4) 좌표가 변경되지 않은 호출(no-op)은 신호 미발행.
 */
UCLASS()
class KAUS_API UKausDayCycleSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~End of USubsystem

    /**
     * Definition을 부착하고 시작 좌표를 설정한다.
     *
     * 선행 조건:
     *  - Definition이 IsDefinitionValid()=true 여야 함.
     *  - StartCycleTag가 Definition.Cycles에 포함되어야 함.
     *  - Calendar Subsystem이 IsInitialized()=true 상태여야 함 (StartDate 검증을 위해).
     *  - StartDate가 Calendar의 IsDateInRange()=true 여야 함.
     *
     * Calendar 참조 결정 순서:
     *  1) InCalendar가 명시적으로 전달되면 그것을 사용 (테스트 / DI 시나리오).
     *  2) nullptr이면 GameInstance->GetSubsystem<>()으로 lookup (정상 프로덕션 경로).
     *
     * 모든 조건이 만족되지 않으면 false 반환 + 로그.
     *
     * 재호출 시: 기존 좌표는 새 좌표로 교체되며 OnCycleChanged 발행.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle", meta = (AdvancedDisplay = "InCalendar"))
    bool InitializeWith(UKausDayCycleDefinition* InDefinition, const FKausGameDate& StartDate, const FGameplayTag& StartCycleTag, UKausCalendarSubsystem* InCalendar = nullptr);

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    bool IsInitialized() const { return bInitialized; }

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    UKausDayCycleDefinition* GetDefinition() const { return Definition; }

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FKausGameDate GetCurrentDate() const { return Current.Date; }

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FGameplayTag GetCurrentCycleTag() const { return Current.CycleTag; }

    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    FKausDayCyclePoint GetCurrentPoint() const { return Current; }

    /**
     * 현재 Date의 Calendar 메타를 위임 조회.
     * Calendar Subsystem이 없거나 메타를 못 찾으면 false.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    bool TryGetCurrentDayMeta(FKausDayMeta& OutMeta) const;

    /**
     * 두 좌표 사이의 Cycle 단위 거리.
     * From이 To보다 이전이면 양수, 이후면 음수, 같으면 0.
     *
     * 계산:
     *  - 두 Date가 같으면 → CycleStepIndex 차이.
     *  - 두 Date가 다르면 → Calendar의 DaysBetween * CycleCount + CycleStepIndex 차이.
     *
     * Calendar 미초기화 또는 Date가 범위 밖이면 0 반환.
     */
    UFUNCTION(BlueprintPure, Category = "Kaus|DayCycle")
    int32 CountCyclesBetween(const FKausDayCyclePoint& From, const FKausDayCyclePoint& To) const;

    /**
     * 단일 Cycle 진행. 가장 흔한 케이스 단축형.
     *
     * @return 초기화 상태에서만 true. no-op은 발생하지 않음 (반드시 좌표 변경).
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    bool AdvanceCycle();

    /**
     * 명시적 점프 — DaysToSkip일을 보낸 뒤 추가로 CyclesToSkip만큼 진행.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    bool AdvanceBy(int32 DaysToSkip, int32 CyclesToSkip, bool bBroadcastEachStep = true);

    /**
     * 절대 좌표로 점프. 디버그/시네마틱/세이브 복원/이벤트 효과용.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    bool JumpTo(const FKausGameDate& Date, const FGameplayTag& CycleTag);

    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    FKausDayCycleSaveData CaptureSaveData() const;

    /**
     * SaveData로 복원.
     * DefinitionAssetPath가 가리키는 Definition을 동기 로드 후 InitializeWith 수행.
     *
     * 선행 조건:
     *  - UKausCalendarSubsystem이 먼저 복원되어 IsInitialized()=true 여야 함.
     *    (호출 순서: CalendarSubsystem.RestoreFromSaveData → DayCycleSubsystem.RestoreFromSaveData)
     *
     * 호환성:
     *  - 저장 시점과 다른 Definition이면 (Cycle 추가/제거 등) 실패 가능.
     *  - 저장된 CycleTag가 새 Definition에 없으면 false.
     *
     * 마이그레이션 정책은 미정 — 출시 후 패치 정책에 따라 결정.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|DayCycle")
    bool RestoreFromSaveData(const FKausDayCycleSaveData& Data);

    // ─────────────────────────────────────────────────────────────────
    //  델리게이트
    // ─────────────────────────────────────────────────────────────────

    UPROPERTY(BlueprintAssignable, Category = "Kaus|DayCycle")
    FKausDayCycleChangedDelegate OnCycleChanged;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|DayCycle")
    FKausDayCycleDateChangedDelegate OnDateChanged;

protected:
    /** 현재 부착된 Definition. nullptr이면 미초기화. */
    UPROPERTY(Transient)
    TObjectPtr<UKausDayCycleDefinition> Definition;

    /** 현재 시점 좌표. */
    UPROPERTY(Transient)
    FKausDayCyclePoint Current;

    bool bInitialized = false;

    /**
     * Calendar Subsystem 캐시.
     *
     * GetCalendarSubsystem()의 비용을 매 step 호출마다 지불하지 않도록 캐싱.
     * mutable: const 조회 메서드에서 lazy fill을 위함.
     * TWeakObjectPtr: Calendar가 소멸되어도 dangling pointer 안 됨.
     */
    mutable TWeakObjectPtr<UKausCalendarSubsystem> CachedCalendar;

private:
    /**
     * 1 Cycle 전진 — 내부 호출용.
     * Definition의 NextCycle을 사용해 다음 좌표를 계산하고 Current를 갱신.
     * 발행은 호출자 책임 (배치 발행 vs step별 발행 분기를 외부에서 결정).
     *
     * @param OutOldPoint   변경 직전의 Current.
     * @param OutbDateBoundary  이번 step에서 Date가 변경되었는가.
     * @return 진행에 성공하면 true.
     */
    bool AdvanceOneStep(FKausDayCyclePoint& OutOldPoint, bool& OutbDateBoundary);

    /**
     * Cycle 변경 발행. PreviousPoint와 Current가 같으면 미발행.
     */
    void BroadcastCycleChanged(const FKausDayCyclePoint& PreviousPoint);

    /**
     * Date 변경 발행. PreviousDate와 Current.Date가 같으면 미발행.
     */
    void BroadcastDateChanged(const FKausGameDate& PreviousDate);

    /** Calendar Subsystem 조회 헬퍼. */
    UKausCalendarSubsystem* GetCalendarSubsystem() const;
};
