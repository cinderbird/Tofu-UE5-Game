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

/**
 * Kaus.Anim.PhaseChanged 채널에 리스너를 등록한다.
 *
 * 등록 시점은 BeginPlay — 액터가 월드에 들어온 직후이므로 Director 가 첫 메시지를
 * 던지기 전에 항상 구독이 준비된다.
 */
void UKausSequenceAnimSyncComponent::RegisterListener()
{
    if (UGameplayMessageSubsystem::HasInstance(this))
    {
        UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);

        // Director 가 발사하는 메시지의 페이로드 타입에 맞춰 등록.
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

/**
 * Phase 변경 메시지 수신 처리.
 *
 * 전체 흐름(비동기 수신 → AnimInstance 전달):
 *   1) FilterTag 가 있으면 채널 매칭 검사 — 다른 시퀀스의 메시지를 흘려보낸다.
 *   2) 동일 Phase 이면 중복 알림 차단(연산 절약, 노티파이 중복 방지).
 *   3) IKausAnimPhaseHandler 구현체 탐색(AnimInstance 우선, Actor 폴백).
 *   4) Execute_OnAnimPhaseChanged 호출 — 실제 전환 방식은 구현 측이 결정.
 *      Blend duration 은 권장값일 뿐, AnimBP 가 Inertial Blending 으로
 *      소화할지 즉시 컷할지는 자유.
 */
void UKausSequenceAnimSyncComponent::OnPhaseChangedMessage(FGameplayTag Tag, const FKausAnimPhaseChangedMessage& Message)
{
    // 필터 태그가 설정된 경우, 메시지 채널 태그와 비교합니다.
    // (한 월드에 여러 시퀀스가 동시 진행될 때 자기 채널만 듣게 하기 위함.)
    if (FilterTag.IsValid() && !Tag.MatchesTag(FilterTag))
        return;

    // 같은 Phase 가 연속으로 와도 무시 — 의도치 않은 블렌드 재시작/노티파이 재발사 방지.
    if (CurrentAnimPhase == Message.NewPhase)
        return;

    // ── IKausAnimPhaseHandler 구현체 탐색 ────────────────────────────────────
    UObject* Handler = FindPhaseHandler();
    if (!Handler)
    {
        // 핸들러가 없으면 메시지를 받아도 처리할 곳이 없다 — 설정 누락 경고.
        UE_LOG(LogKausAnimSync, Warning,
            TEXT("[%s] No IKausAnimPhaseHandler found. "
                 "Implement the interface on AnimBP or the Actor to receive phase changes."),
            *GetOwner()->GetName());
        return;
    }

    // ── 상태 업데이트 ─────────────────────────────────────────────────────────
    CurrentAnimPhase = Message.NewPhase;

    // ── 인터페이스 호출 — 전환 방식은 구현 측이 전적으로 결정 ─────────────────
    // Execute_OnAnimPhaseChanged 는 BlueprintNativeEvent 의 호출 헬퍼.
    // AnimBP 에서 오버라이드한 그래프(또는 C++ 구현)가 실행된다.
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
