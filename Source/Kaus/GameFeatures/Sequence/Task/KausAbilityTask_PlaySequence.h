// Copyright Kaus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "KausAbilityTask_PlaySequence.generated.h"

class ULevelSequence;
class ALevelSequenceActor;
class UKausSequencePlayerSubsystem;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKausPlaySequenceDelegate);

/**
 * UKausAbilityTask_PlaySequence
 *
 * KausSequencePlayerSubsystem을 통해 시퀀서를 재생하고 종료를 대기하는 Task.
 *
 * 두 가지 정적 생성 함수:
 *   PlaySequence(Sequence)        시퀀스 에셋만 받음. Subsystem이 새 액터 스폰.
 *   PlaySequenceActor(Actor)      외부 LevelSequenceActor 사용. 바인딩/설정 유지.
 *
 * 출력 델리게이트:
 *   OnFinished     시퀀스가 자연 종료
 *   OnCancelled    ExternalStop() 외부 호출, Activate 실패 등
 */
UCLASS()
class KAUS_API UKausAbilityTask_PlaySequence : public UAbilityTask
{
    GENERATED_BODY()

public:
    /** LevelSequence 에셋으로 재생. Subsystem이 새 액터 스폰. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Ability|Tasks",
        meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility",
                BlueprintInternalUseOnly = "true"))
    static UKausAbilityTask_PlaySequence* PlaySequence(
        UGameplayAbility* OwningAbility,
        ULevelSequence* Sequence);

    /** 외부 LevelSequenceActor 사용. 레벨에 배치된 액터의 바인딩 그대로. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Ability|Tasks",
        meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility",
                BlueprintInternalUseOnly = "true"))
    static UKausAbilityTask_PlaySequence* PlaySequenceActor(
        UGameplayAbility* OwningAbility,
        ALevelSequenceActor* Actor);

    /** 외부 강제 종료. OnCancelled 발화 후 EndTask. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Ability|Tasks")
    void ExternalStop();

    UPROPERTY(BlueprintAssignable)
    FKausPlaySequenceDelegate OnFinished;

    UPROPERTY(BlueprintAssignable)
    FKausPlaySequenceDelegate OnCancelled;

    virtual void Activate() override;
    virtual void OnDestroy(bool bInOwnerFinished) override;

private:
    UFUNCTION()
    void HandleSequenceFinished();

    UKausSequencePlayerSubsystem* GetSubsystem() const;

    /** Activate 시 실제 Register 호출. CachedSequence와 CachedActor에 따라 분기. */
    bool RegisterWithSubsystem(UKausSequencePlayerSubsystem* Sub);

    UPROPERTY(Transient)
    TObjectPtr<ULevelSequence> CachedSequence = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<ALevelSequenceActor> CachedActor = nullptr;

    bool bDelegatesUnbound = false;
};
