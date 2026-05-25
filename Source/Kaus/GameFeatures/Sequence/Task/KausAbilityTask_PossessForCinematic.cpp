// Copyright Kaus. All rights reserved.

#include "KausAbilityTask_PossessForCinematic.h"

#include "AbilitySystemComponent.h"
#include "GameFramework/Character.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausTaskPossess, Log, All);

UKausAbilityTask_PossessForCinematic* UKausAbilityTask_PossessForCinematic::PossessForCinematic(
    UGameplayAbility* OwningAbility,
    const FKausCinematicPossessionOptions& Options)
{
    UKausAbilityTask_PossessForCinematic* Task =
        NewAbilityTask<UKausAbilityTask_PossessForCinematic>(OwningAbility);
    Task->CachedOptions = Options;
    return Task;
}

void UKausAbilityTask_PossessForCinematic::Activate()
{
    Super::Activate();
    ApplyState();
}

void UKausAbilityTask_PossessForCinematic::OnDestroy(bool bInOwnerFinished)
{
    RestoreState();
    Super::OnDestroy(bInOwnerFinished);
}

// =============================================================================
//  Apply / Restore
// =============================================================================

void UKausAbilityTask_PossessForCinematic::ApplyState()
{
    if (bStateApplied) return;

    const FGameplayAbilityActorInfo* ActorInfo = Ability ? Ability->GetCurrentActorInfo() : nullptr;
    if (!ActorInfo)
    {
        UE_LOG(LogKausTaskPossess, Warning, TEXT("ApplyState: ActorInfo missing."));
        return;
    }

    CachedCharacter = Cast<ACharacter>(ActorInfo->AvatarActor.Get());

    // 1. 입력 차단 태그 — Movement/Camera 입력 컴포넌트가 이 태그를 게이트.
    if (CachedOptions.InputBlockTag.IsValid())
    {
        if (UAbilitySystemComponent* ASC = ActorInfo->AbilitySystemComponent.Get())
        {
            ASC->AddLooseGameplayTag(CachedOptions.InputBlockTag);
        }
    }

    // 2. 캐릭터 렌더링/콜리전.
    if (ACharacter* Character = CachedCharacter.Get())
    {
        if (CachedOptions.bHideCharacter)
        {
            Character->SetActorHiddenInGame(true);
        }
        if (CachedOptions.bDisableCollision)
        {
            Character->SetActorEnableCollision(false);
        }
    }

    bStateApplied = true;
}

void UKausAbilityTask_PossessForCinematic::RestoreState()
{
    if (!bStateApplied) return;
    bStateApplied = false;

    // 1. 입력 차단 태그 제거.
    if (CachedOptions.InputBlockTag.IsValid())
    {
        if (const FGameplayAbilityActorInfo* AI = Ability ? Ability->GetCurrentActorInfo() : nullptr)
        {
            if (UAbilitySystemComponent* ASC = AI->AbilitySystemComponent.Get())
            {
                ASC->RemoveLooseGameplayTag(CachedOptions.InputBlockTag);
            }
        }
    }

    // 2. 캐릭터 렌더링/콜리전 복원.
    if (ACharacter* Character = CachedCharacter.Get())
    {
        if (CachedOptions.bHideCharacter)
        {
            Character->SetActorHiddenInGame(false);
        }
        if (CachedOptions.bDisableCollision)
        {
            Character->SetActorEnableCollision(true);
        }
    }
}
