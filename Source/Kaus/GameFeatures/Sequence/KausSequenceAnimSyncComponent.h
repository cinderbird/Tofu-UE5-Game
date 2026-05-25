#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Animation/KausAnimPhase.h"
#include "Animation/KausAnimMessages.h"
#include "KausSequenceAnimSyncComponent.generated.h"


/**
 * UKausSequenceAnimSyncComponent
 *
 * KausSequenceDirector 가 발사한 AnimPhase 메시지를 수신해
 * IKausAnimPhaseHandler 구현체(AnimBP 또는 Actor) 로 전달하는 중계 컴포넌트.
 *
 * 왜 별도 컴포넌트인가:
 *   - Director 는 시퀀서 재생만 책임지고 캐릭터·AnimBP 의 존재를 모른다.
 *   - 캐릭터마다 이 컴포넌트를 1개씩 달면, 메시지 1번에 여러 캐릭터가 동시에 반응 가능.
 *   - 수신 측은 인터페이스(IKausAnimPhaseHandler)로 추상화돼 있어
 *     실제 처리(Inertial Blending, 노티파이 트리거 등) 방식은 구현 측이 결정.
 *
 * FilterTag 가 설정되면 해당 채널과 매칭되는 메시지만 처리한다 — 한 월드에 여러 시퀀스가
 * 동시에 진행될 때 각 캐릭터가 자기 시퀀스의 메시지만 듣도록.
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausSequenceAnimSyncComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKausSequenceAnimSyncComponent();

    /** 메시지 채널 태그 필터. 설정되면 매칭되는 채널의 메시지만 처리(여러 시퀀스 공존 시나리오용). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Anim")
    FGameplayTag FilterTag;

    /** 현재 AnimPhase (디버그 및 Blueprint 참조용). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Anim")
    EKausAnimPhase CurrentAnimPhase = EKausAnimPhase::Intro;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    /** GameplayMessageSubsystem 에 Kaus.Anim.PhaseChanged 채널 리스너를 등록한다. */
    void RegisterListener();
    void UnregisterListener();

    /**
     * Phase 변경 메시지 콜백.
     * 흐름: FilterTag 확인 → 동일 Phase 면 스킵 → Handler 탐색 → 인터페이스 호출.
     */
    void OnPhaseChangedMessage(FGameplayTag Tag, const FKausAnimPhaseChangedMessage& Message);

    /**
     * IKausAnimPhaseHandler 를 구현한 객체를 탐색합니다.
     * AnimInstance → Owner Actor 순으로 확인합니다.
     * 없으면 nullptr 반환.
     *
     * 우선순위 이유: 보통 전환의 실제 처리(블렌드, 노티파이)는 AnimBP 에서 수행되므로
     * AnimInstance 가 가장 자연스러운 핸들러다. 캐릭터가 AnimBP 를 갖지 않거나
     * 액터 자체가 처리를 원하는 경우만 2순위로 Owner 로 폴백한다.
     */
    UObject* FindPhaseHandler() const;

    FGameplayMessageListenerHandle ListenerHandle;
};
