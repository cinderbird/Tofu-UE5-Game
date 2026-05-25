#include "KausSequenceAnimSyncComponent.h"
#include "Tags/KausSequenceTags.h"
#include "Animation/IKausAnimPhaseHandler.h"
#include "GameFramework/Character.h"
#include "Components/SkeletalMeshComponent.h"
#include "Animation/KausAnimInstance.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausAnimSync, Log, All);

UKausSequenceAnimSyncComponent::UKausSequenceAnimSyncComponent()
{
    PrimaryComponentTick.bCanEverTick = false;
}

void UKausSequenceAnimSyncComponent::BeginPlay()
{
    Super::BeginPlay();
    RegisterListener();
}

void UKausSequenceAnimSyncComponent::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    UnregisterListener();
    Super::EndPlay(EndPlayReason);
}

// ============================================================================
// 메시지 구독
// ============================================================================

void UKausSequenceAnimSyncComponent::RegisterListener()
{
    if (UGameplayMessageSubsystem::HasInstance(this))
    {
        UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);
  
        ListenerHandle = MessageSubsystem.RegisterListener<FKausAnimPhaseChangedMessage>(
        KausSequenceTags::Anim_PhaseChanged,
        this,
        &UKausSequenceAnimSyncComponent::OnPhaseChangedMessage);

        UE_LOG(LogKausAnimSync, Log, TEXT("[%s] Listening for Kaus.Anim.PhaseChanged."), *GetOwner()->GetName());
    }
}

void UKausSequenceAnimSyncComponent::UnregisterListener()
{
    //todo:
}

// ============================================================================
// 핸들러
// ============================================================================

void UKausSequenceAnimSyncComponent::OnPhaseChangedMessage(FGameplayTag Tag, const FKausAnimPhaseChangedMessage& Message)
{
    // 필터 태그가 설정된 경우, 메시지 채널 태그와 비교합니다.
    if (FilterTag.IsValid() && !Tag.MatchesTag(FilterTag))
        return;

    if (CurrentAnimPhase == Message.NewPhase)
        return;

    // ── IKausAnimPhaseHandler 구현체 탐색 ────────────────────────────────────
    UObject* Handler = FindPhaseHandler();
    if (!Handler)
    {
        UE_LOG(LogKausAnimSync, Warning,
            TEXT("[%s] No IKausAnimPhaseHandler found. "
                 "Implement the interface on AnimBP or the Actor to receive phase changes."),
            *GetOwner()->GetName());
        return;
    }

    // ── 상태 업데이트 ─────────────────────────────────────────────────────────
    CurrentAnimPhase = Message.NewPhase;

    // ── 인터페이스 호출 — 전환 방식은 구현 측이 전적으로 결정 ─────────────────
    IKausAnimPhaseHandler::Execute_OnAnimPhaseChanged(
        Handler, Message.NewPhase, Message.BlendDuration);

    UE_LOG(LogKausAnimSync, Log,
        TEXT("[%s] Dispatched OnAnimPhaseChanged → %s (blend=%.2fs) to [%s]"),
        *GetOwner()->GetName(),
        *UEnum::GetValueAsString(Message.NewPhase),
        Message.BlendDuration,
        *Handler->GetName());
}

// ============================================================================
// 핸들러 탐색
// ============================================================================

UObject* UKausSequenceAnimSyncComponent::FindPhaseHandler() const
{
    // 1순위: AnimInstance
    if (const ACharacter* Character = Cast<ACharacter>(GetOwner()))
    {
        if (USkeletalMeshComponent* Mesh = Character->GetMesh())
        {
            if (UAnimInstance* AnimInst = Mesh->GetAnimInstance())
            {
                if (AnimInst->Implements<UKausAnimPhaseHandler>())
                    return AnimInst;
            }
        }
    }

    // 2순위: Actor 자체
    if (GetOwner()->Implements<UKausAnimPhaseHandler>())
        return GetOwner();

    return nullptr;
}
