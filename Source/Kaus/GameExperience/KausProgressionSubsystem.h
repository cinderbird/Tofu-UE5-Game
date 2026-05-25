#pragma once

#include "CoreMinimal.h"
#include "Subsystems/GameInstanceSubsystem.h"
#include "GameplayTagContainer.h"
#include "KausProgressionSubsystem.generated.h"

// 진척도(페이즈)가 변경되었을 때 발송될 델리게이트 (블루프린트에서도 이벤트 바인딩 가능)
DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FKausPhaseChangedSignature, FGameplayTag, OldPhase, FGameplayTag, NewPhase);

/**
 * [Kaus] 진척도 및 상태 관리 서브시스템
 * 데모의 미시적 흐름(시네마틱 -> 상호작용 -> 전투)을 Gameplay Tag 기반의 상태 머신으로 통제합니다.
 */
UCLASS()
class KAUS_API UKausProgressionSubsystem : public UGameInstanceSubsystem
{
    GENERATED_BODY()

public:
    virtual void Initialize(FSubsystemCollectionBase& Collection) override;
    virtual void Deinitialize() override;

    // ==========================================
    // [1] 상태(Phase) 제어
    // ==========================================

    // 현재 게임의 페이즈(진척도)를 변경하고 이벤트를 방송합니다.
    UFUNCTION(BlueprintCallable, Category = "Kaus|Progression")
    void SetCurrentPhase(FGameplayTag NewPhase);

    // 현재 진행 중인 페이즈 태그를 반환합니다.
    UFUNCTION(BlueprintPure, Category = "Kaus|Progression")
    FGameplayTag GetCurrentPhase() const { return CurrentPhaseTag; }

    // 플레이어가 특정 페이즈에 도달했는지 확인합니다. (예: 튜토리얼 전투를 깼는가?)
    UFUNCTION(BlueprintPure, Category = "Kaus|Progression")
    bool HasReachedPhase(FGameplayTag TargetPhase) const;

    // ==========================================
    // [2] 이벤트 브로드캐스트
    // ==========================================
    
    // 상태가 변할 때마다 호출되는 델리게이트. UI나 레벨 블루프린트, 액터들이 이를 리슨(Listen)합니다.
    UPROPERTY(BlueprintAssignable, Category = "Kaus|Progression")
    FKausPhaseChangedSignature OnPhaseChanged;

protected:
    // 현재 진행도를 나타내는 단일 태그 (예: Phase.Tutorial.Interaction)
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Progression")
    FGameplayTag CurrentPhaseTag;
    
    // (선택) 지나온 모든 페이즈를 기억하여 'HasReachedPhase' 검사에 사용합니다.
    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Kaus|Progression")
    FGameplayTagContainer UnlockedPhases;
};