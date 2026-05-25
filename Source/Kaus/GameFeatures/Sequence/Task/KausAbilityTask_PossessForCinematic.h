// Copyright Kaus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Abilities/Tasks/AbilityTask.h"
#include "GameplayTagContainer.h"
#include "KausAbilityTask_PossessForCinematic.generated.h"

class ACharacter;


USTRUCT(BlueprintType)
struct FKausCinematicPossessionOptions
{
    GENERATED_BODY()

    /**
     * 부여할 입력 차단 태그. None이면 부여 안 함.
     * 캐릭터 이동 입력과 카메라 입력 양쪽에 적용되도록 프로젝트의
     * Movement/Camera 컴포넌트가 이 태그를 게이트로 검사해야 한다.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite,
        meta = (Categories = "Gameplay.InputBlocked"))
    FGameplayTag InputBlockTag;

    /** true면 AvatarActor 렌더링 숨김. 시퀀스가 Spawnable로 대역을 세우는 경우. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bHideCharacter = false;

    /** true면 AvatarActor 콜리전 비활성화. bHideCharacter와 함께 쓰는 게 일반적. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite)
    bool bDisableCollision = false;
};

/**
 * UKausAbilityTask_PossessForCinematic
 *
 * 시퀀서/시네마틱 재생 중 캐릭터 상태와 입력을 점유하는 Task.
 *
 * 책임:
 *   - 입력 차단 태그 부여 (Movement/Camera 컴포넌트가 게이트 사용 가정)
 *   - 캐릭터 렌더링/콜리전 토글
 *
 * 책임이 아닌 것:
 *   - ViewTarget 조작 (시퀀서가 자체 점령·복귀)
 *   - CameraModeStack 조작 (시퀀스 중 평가되지 않으며 복귀 후 자동 재개)
 *   - 시퀀스 자체 재생 (PlaySequence Task가 담당)
 *
 * Activate 시 상태 적용, OnDestroy 시 자동 역순 복원.
 * GA가 어떤 경로로 EndAbility되어도 cleanup 보장.
 */
UCLASS()
class KAUS_API UKausAbilityTask_PossessForCinematic : public UAbilityTask
{
    GENERATED_BODY()

public:
    UFUNCTION(BlueprintCallable, Category = "Kaus|Ability|Tasks",
        meta = (HidePin = "OwningAbility", DefaultToSelf = "OwningAbility",
                BlueprintInternalUseOnly = "true"))
    static UKausAbilityTask_PossessForCinematic* PossessForCinematic(
        UGameplayAbility* OwningAbility,
        const FKausCinematicPossessionOptions& Options);

    virtual void Activate() override;
    virtual void OnDestroy(bool bInOwnerFinished) override;

private:
    void ApplyState();
    void RestoreState();

    UPROPERTY(Transient)
    FKausCinematicPossessionOptions CachedOptions;

    UPROPERTY(Transient)
    TWeakObjectPtr<ACharacter> CachedCharacter;

    bool bStateApplied = false;
};
