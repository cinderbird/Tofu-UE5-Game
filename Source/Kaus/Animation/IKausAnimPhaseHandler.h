#pragma once

#include "CoreMinimal.h"
#include "UObject/Interface.h"
#include "KausAnimPhase.h"
#include "IKausAnimPhaseHandler.generated.h"

UINTERFACE(MinimalAPI, Blueprintable)
class UKausAnimPhaseHandler : public UInterface
{
    GENERATED_BODY()
};

/**
 * IKausAnimPhaseHandler
 *
 * AnimBP 또는 캐릭터가 선택적으로 구현하는 인터페이스.
 * 이 인터페이스를 구현한 객체만 Phase 변경 알림을 받습니다.
 *
 * ─── 옵트인(Opt-in) 설계 ──────────────────────────────────────────────────────
 *  - 구현을 강제하지 않습니다. 필요한 AnimBP 만 구현하면 됩니다.
 *  - 전환 방식(Inertialization / Blend / Cut / 커스텀)은
 *    구현 측 Blueprint 에서 자유롭게 결정합니다.
 *  - UKausAnimInstance 상속이 필요하지 않습니다.
 *
 * ─── 구현 대상 ────────────────────────────────────────────────────────────────
 *  다음 중 하나에 구현합니다 (SyncComponent 가 순서대로 탐색):
 *
 *   1순위: 캐릭터의 AnimInstance
 *      → AnimBP 에서 직접 구현. Inertialization 노드를 Blueprint 에서 제어.
 *
 *   2순위: 캐릭터 Actor 자체
 *      → 캐릭터가 AnimBP 교체 등 더 복잡한 제어가 필요한 경우.
 *
 * ─── Blueprint 구현 예 ───────────────────────────────────────────────────────
 *
 *  Event OnAnimPhaseChanged(NewPhase, BlendDuration)
 *      ├─ [NewPhase == IntroIdle]      → 아무것도 안 함 (시퀀서 종료 후 자연 대기)
 *      ├─ [NewPhase == MenuTransition] → Request Inertialization(BlendDuration)
 *      │                                  → Set AnimPhase Variable
 *      ├─ [NewPhase == MenuIdle]       → Set AnimPhase Variable
 *      └─ [NewPhase == Outro]          → 커스텀 로직
 * ─────────────────────────────────────────────────────────────────────────────
 */
class KAUS_API IKausAnimPhaseHandler
{
    GENERATED_BODY()

public:
    /**
     * Phase 가 변경될 때 호출됩니다.
     *
     * @param NewPhase      전환할 대상 Phase
     * @param BlendDuration 권장 블렌딩 시간(초). 0 이면 즉각 전환.
     *                      구현 측에서 이 값을 무시하고 자체 값을 사용해도 됩니다.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Anim")
    void OnAnimPhaseChanged(EKausAnimPhase NewPhase, float BlendDuration);
};
