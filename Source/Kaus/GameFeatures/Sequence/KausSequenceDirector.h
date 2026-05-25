#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "KausSequenceMessages.h"
#include "Animation/KausAnimPhase.h"
#include "KausSequenceDirector.generated.h"

class UMovieScene;
class ULevelSequence;
class ULevelSequencePlayer;
class ALevelSequenceActor;
class UKausSequenceConfigDA;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnIntroCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnMenuCompleted);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnOutroCompleted);

/**
 * 시퀀스 재생 진행 단계.
 *
 * Idle → PlayingIntro → PausedAtIntro → PlayingMenu → PausedAtMenu → PlayingOutro → Completed
 *
 * 각 Paused 상태는 외부에서 Kaus.Sequence.Resume 메시지를 받기 전까지 머무른다.
 * 즉, "데이터 애셋이 표시한 마크에 도달하면 일시정지 → 외부 신호로 재개" 라는
 * 비동기 협업 모델을 위해 단계가 명시적으로 분리되어 있다.
 */
UENUM(BlueprintType)
enum class EKausSequencePhase : uint8
{
    Idle            UMETA(DisplayName = "Idle"),
    PlayingIntro    UMETA(DisplayName = "Playing Intro"),
    PausedAtIntro   UMETA(DisplayName = "Paused At Intro"),
    PlayingMenu     UMETA(DisplayName = "Playing Menu"),
    PausedAtMenu    UMETA(DisplayName = "Paused At Menu"),
    PlayingOutro    UMETA(DisplayName = "Playing Outro"),
    Completed       UMETA(DisplayName = "Completed"),
};

/**
 * UKausSequenceDirector
 *
 * 카메라 움직임 등 순수 시퀀서 재생만 담당하는 컴포넌트.
 * Actor 바인딩(Possessable)은 일절 관여하지 않습니다.
 *
 * ─── 재생 흐름 ───────────────────────────────────────────────────────────────
 *  StartPlayback()
 *      │ PlayingIntro
 *      ▼
 *  [IntroEndMenuStart] Pause → OnIntroCompleted
 *      │ Kaus.Sequence.Resume → PlayingMenu
 *      ▼
 *  [MenuEndOutroStart] Pause → OnMenuCompleted
 *      │ Kaus.Sequence.Resume → PlayingOutro
 *      ▼
 *  [OutroEnd] 자연 종료 → OnOutroCompleted
 * ─────────────────────────────────────────────────────────────────────────────
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausSequenceDirector : public UActorComponent
{
    GENERATED_BODY()

public:
    UKausSequenceDirector();

    // === 수명 관리 ===

    /** 시퀀서를 설정합니다. Actor 바인딩은 수행하지 않습니다. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void SetupSequence(ULevelSequence* Sequence, const UKausSequenceConfigDA* Config);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void TeardownSequence();

    // === 재생 제어 ===

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void StartPlayback();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void Resume();

    // === 접근자 ===

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    ULevelSequencePlayer* GetSequencePlayer() const { return SequencePlayer; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    EKausSequencePhase GetCurrentPhase() const { return CurrentPhase; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    bool IsWaitingForResume() const
    {
        return CurrentPhase == EKausSequencePhase::PausedAtIntro
            || CurrentPhase == EKausSequencePhase::PausedAtMenu;
    }

    /**
     * 현재 시퀀스 단계에 대응하는 AnimPhase 를 GameplayMessageSubsystem 으로 방송한다.
     *
     * 누가 호출하나:
     *   - StartPlayback 직후(IntroPose)
     *   - TickComponent 가 일시정지 마크에 도달했을 때(IntroIdle / MenuIdle)
     *   - Resume 분기(MenuTransition / Outro)
     *   - OnSequenceFinished(Done)
     *
     * 왜 직접 AnimInstance 를 부르지 않나:
     *   Director 는 시퀀서 재생만 책임지고, AnimInstance/캐릭터 참조를 들고 있지 않다.
     *   메시지로 던지면 KausSequenceAnimSyncComponent 가 받아 IKausAnimPhaseHandler 로 전달한다.
     *   덕분에 캐릭터·AnimBP 가 여러 개여도 Director 가 그 존재를 몰라도 된다.
     *
     * @param BlendDuration 권장 블렌딩 시간(초). 0 이면 즉시 전환. 수신 측이 해석.
     */
    void BroadcastAnimPhaseChange(EKausAnimPhase NewAnimPhase, float BlendDuration = 0.0f);

    // === 델리게이트 ===

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Sequence")
    FOnIntroCompleted OnIntroCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Sequence")
    FOnMenuCompleted OnMenuCompleted;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Sequence")
    FOnOutroCompleted OnOutroCompleted;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;
    virtual void TickComponent(float DeltaTime, ELevelTick TickType,
        FActorComponentTickFunction* ThisTickFunction) override;

private:
    /** Kaus.Sequence.Resume/Restart/Stop 세 메시지 채널의 리스너 등록·해제. */
    void RegisterMessageListeners();
    void UnregisterMessageListeners();

    /** 외부(대화 데코레이터, UI 버튼 등)에서 보낸 재개 신호. PausedAtIntro/PausedAtMenu 일 때만 의미 있음. */
    void OnResumeMessageReceived(FGameplayTag Tag, const FKausSequenceResumeMessage& Message);
    void OnRestartMessageReceived(FGameplayTag Tag, const FKausSequenceRestartMessage& Message);
    void OnStopMessageReceived(FGameplayTag Tag, const FKausSequenceStopMessage& Message);

    FGameplayMessageListenerHandle ResumeListenerHandle;
    FGameplayMessageListenerHandle RestartListenerHandle;
    FGameplayMessageListenerHandle StopListenerHandle;

    bool SetupPlayer(ULevelSequence* Sequence);
    FFrameNumber GetMarkedDisplayFrame(const FName& MarkLabel) const;
    UMovieScene* GetMovieScene() const;

    /** ULevelSequencePlayer 의 자연 종료 콜백. PlayingOutro 일 때만 Completed 로 전이. */
    UFUNCTION()
    void OnSequenceFinished();

    EKausSequencePhase CurrentPhase = EKausSequencePhase::Idle;

    /**
     * Tick 이 감시할 일시정지 목표 프레임(Display Rate 기준).
     * 시퀀서의 마크 라벨(IntroEndMenuStart / MenuEndOutroStart)을 프레임으로 변환해 보관한다.
     * 이 프레임에 도달하면 Pause + AnimPhase 변경 + Completed 델리게이트 발사.
     */
    FFrameNumber PauseTargetDisplayFrame;
    bool bHasPauseTarget = false;

    UPROPERTY(Transient)
    TObjectPtr<ULevelSequencePlayer> SequencePlayer;

    ALevelSequenceActor* SequenceActor = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<const UKausSequenceConfigDA> CachedConfig;
};
