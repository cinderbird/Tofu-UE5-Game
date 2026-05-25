#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "Engine/World.h"
#include "KausReturnToStartScreenHandler.generated.h"

class UKausGamePhaseSubsystem;
class ULoadingProcessTask;

/**
 * UKausReturnToStartScreenHandler
 *
 * 데모 종료 → 시작 화면 복귀를 총괄하는 GameInstanceSubsystem.
 *
 * 트리거: Level Blueprint 또는 코드에서
 *   KausGamePhaseSubsystem.StartPhase(Phase.ReturnToStartScreen) 호출.
 *
 * 책임:
 *   1. 월드별 KausGamePhaseSubsystem의 OnPhaseChanged에 자동 구독 (맵 전환 시마다 재구독)
 *   2. Phase.ReturnToStartScreen 감지 시:
 *      - ChoiceHistorySubsystem 초기화
 *      - Player 스텟 초기화 (Attributes 재설정)
 *      - LoadingProcessTask 등록하여 로딩 화면 유지
 *      - OpenLevel(StartScreenMapName)
 *   3. 새 맵 로드 완료 시 LoadingProcessTask 자동 해제 (PostLoadMap 델리게이트)
 */
UCLASS(Config = Game)
class KAUS_API UKausReturnToStartScreenHandler : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    //~USubsystem
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;
    //~End of USubsystem

    /** 명시적으로 복귀를 트리거하고 싶을 때 사용 (보통은 Phase 태그로 자동 동작) */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Flow")
    void RequestReturnToStartScreen();

    /** 시작 화면 맵 이름 (Config로 덮어쓰기 가능) */
    UPROPERTY(EditDefaultsOnly, Config, Category = "Kaus|Flow")
    FName StartScreenMapName = TEXT("L_Level");

    /** 로딩 화면 최소 표시 시간 (초) */
    UPROPERTY(EditDefaultsOnly, Config, Category = "Kaus|Flow")
    float MinimumLoadingScreenDuration = 1.5f;

private:
    /** 월드 초기화 시 현재 월드의 PhaseSubsystem에 구독 */
    void BindToPhaseSubsystem(UWorld* World);
    void UnbindFromPhaseSubsystem(UWorld* World);

    UFUNCTION()
    void OnPhaseChanged(const FGameplayTag& NewPhase);

    UFUNCTION()
    void OnWorldBeginPlay();

    /** 세션 데이터 초기화 실행 */
    void ResetSessionData();

    /** 맵 로드 후 Loading Task 해제 */
    void HandlePostLoadMap(UWorld* LoadedWorld);

    /** 현재 구독 중인 PhaseSubsystem (WorldSubsystem이므로 맵마다 바뀜) */
    TWeakObjectPtr<UKausGamePhaseSubsystem> BoundPhaseSubsystem;

    /** 로딩 화면 유지용 Task */
    UPROPERTY(Transient)
    TObjectPtr<ULoadingProcessTask> LoadingTask;

    /** 복귀 진행 중 플래그 (중복 호출 방지) */
    bool bIsReturning = false;

    FDelegateHandle OnWorldInitializedDelegateHandle;
    FDelegateHandle PostLoadMapDelegateHandle;
    FDelegateHandle WorldBeginPlayHandle;
};