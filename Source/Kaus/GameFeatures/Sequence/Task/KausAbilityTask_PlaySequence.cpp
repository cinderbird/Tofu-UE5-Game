// Copyright Kaus. All rights reserved.

#include "KausAbilityTask_PlaySequence.h"
#include "Sequence/New/KausSequencePlayerSubsystem.h"

#include "LevelSequence.h"
#include "LevelSequenceActor.h"
#include "AbilitySystemComponent.h"
#include "Engine/World.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausTaskPlaySequence, Log, All);

// =============================================================================
//  Static factories
// =============================================================================

UKausAbilityTask_PlaySequence* UKausAbilityTask_PlaySequence::PlaySequence(
    UGameplayAbility* OwningAbility, ULevelSequence* Sequence)
{
    UKausAbilityTask_PlaySequence* Task =
        NewAbilityTask<UKausAbilityTask_PlaySequence>(OwningAbility);
    Task->CachedSequence = Sequence;
    Task->CachedActor = nullptr;
    return Task;
}

UKausAbilityTask_PlaySequence* UKausAbilityTask_PlaySequence::PlaySequenceActor(
    UGameplayAbility* OwningAbility, ALevelSequenceActor* Actor)
{
    UKausAbilityTask_PlaySequence* Task =
        NewAbilityTask<UKausAbilityTask_PlaySequence>(OwningAbility);
    Task->CachedSequence = nullptr;
    Task->CachedActor = Actor;
    return Task;
}

// =============================================================================
//  Subsystem accessor
// =============================================================================

UKausSequencePlayerSubsystem* UKausAbilityTask_PlaySequence::GetSubsystem() const
{
    UWorld* World = GEngine ? GEngine->GetWorldFromContextObject(
        this, EGetWorldErrorMode::LogAndReturnNull) : nullptr;
    return World ? World->GetSubsystem<UKausSequencePlayerSubsystem>() : nullptr;
}

// =============================================================================
//  Activate
// =============================================================================

bool UKausAbilityTask_PlaySequence::RegisterWithSubsystem(UKausSequencePlayerSubsystem* Sub)
{
    // 외부 액터 우선. 둘 다 지정되면 액터 사용.
    if (CachedActor)
    {
        return Sub->RegisterAndPlayActor(CachedActor, /*bAutoUnregisterOnFinish=*/true) != nullptr;
    }
    if (CachedSequence)
    {
        return Sub->RegisterAndPlay(CachedSequence, /*bAutoUnregisterOnFinish=*/true) != nullptr;
    }
    return false;
}

void UKausAbilityTask_PlaySequence::Activate()
{
    Super::Activate();

    UKausSequencePlayerSubsystem* Sub = GetSubsystem();
    if (!Sub || (!CachedSequence && !CachedActor))
    {
        UE_LOG(LogKausTaskPlaySequence, Warning,
            TEXT("Activate failed: Subsystem=%s Sequence=%s Actor=%s"),
            Sub ? TEXT("ok") : TEXT("null"),
            CachedSequence ? *CachedSequence->GetName() : TEXT("null"),
            CachedActor ? *CachedActor->GetName() : TEXT("null"));
        if (ShouldBroadcastAbilityTaskDelegates())
        {
            OnCancelled.Broadcast();
        }
        EndTask();
        return;
    }

    // 콜백을 먼저 바인딩한 후 Register. Register가 즉시 OnFinished를 쏠 가능성은
    // 거의 없지만 안전 순서.
    Sub->OnSequenceFinished.AddDynamic(
        this, &UKausAbilityTask_PlaySequence::HandleSequenceFinished);

    if (!RegisterWithSubsystem(Sub))
    {
        UE_LOG(LogKausTaskPlaySequence, Warning, TEXT("RegisterWithSubsystem failed."));
        Sub->OnSequenceFinished.RemoveDynamic(
            this, &UKausAbilityTask_PlaySequence::HandleSequenceFinished);
        bDelegatesUnbound = true;

        if (ShouldBroadcastAbilityTaskDelegates())
        {
            OnCancelled.Broadcast();
        }
        EndTask();
    }
}

// =============================================================================
//  External Stop
// =============================================================================

void UKausAbilityTask_PlaySequence::ExternalStop()
{
    if (UKausSequencePlayerSubsystem* Sub = GetSubsystem())
    {
        // 콜백 언바인딩 먼저 → Stop이 트리거하는 OnSequenceFinished가
        // HandleSequenceFinished에 도달하지 않음 (OnFinished 중복 방지).
        Sub->OnSequenceFinished.RemoveDynamic(
            this, &UKausAbilityTask_PlaySequence::HandleSequenceFinished);
        bDelegatesUnbound = true;

        if (Sub->HasActiveSequence())
        {
            Sub->Stop();
        }
    }

    if (ShouldBroadcastAbilityTaskDelegates())
    {
        OnCancelled.Broadcast();
    }
    EndTask();
}

void UKausAbilityTask_PlaySequence::HandleSequenceFinished()
{
    if (ShouldBroadcastAbilityTaskDelegates())
    {
        OnFinished.Broadcast();
    }
    EndTask();
}

void UKausAbilityTask_PlaySequence::OnDestroy(bool bInOwnerFinished)
{
    if (!bDelegatesUnbound)
    {
        if (UKausSequencePlayerSubsystem* Sub = GetSubsystem())
        {
            Sub->OnSequenceFinished.RemoveDynamic(
                this, &UKausAbilityTask_PlaySequence::HandleSequenceFinished);

            // GA가 먼저 종료 → 활성 시퀀스 정리.
            if (bInOwnerFinished && Sub->HasActiveSequence())
            {
                Sub->Stop();
            }
        }
        bDelegatesUnbound = true;
    }

    Super::OnDestroy(bInOwnerFinished);
}
