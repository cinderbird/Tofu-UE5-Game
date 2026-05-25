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
    void RegisterMessageListeners();
    void UnregisterMessageListeners();

    void OnResumeMessageReceived(FGameplayTag Tag, const FKausSequenceResumeMessage& Message);
    void OnRestartMessageReceived(FGameplayTag Tag, const FKausSequenceRestartMessage& Message);
    void OnStopMessageReceived(FGameplayTag Tag, const FKausSequenceStopMessage& Message);

    FGameplayMessageListenerHandle ResumeListenerHandle;
    FGameplayMessageListenerHandle RestartListenerHandle;
    FGameplayMessageListenerHandle StopListenerHandle;

    bool SetupPlayer(ULevelSequence* Sequence);
    FFrameNumber GetMarkedDisplayFrame(const FName& MarkLabel) const;
    UMovieScene* GetMovieScene() const;

    UFUNCTION()
    void OnSequenceFinished();

    EKausSequencePhase CurrentPhase = EKausSequencePhase::Idle;

    FFrameNumber PauseTargetDisplayFrame;
    bool bHasPauseTarget = false;

    UPROPERTY(Transient)
    TObjectPtr<ULevelSequencePlayer> SequencePlayer;

    ALevelSequenceActor* SequenceActor = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<const UKausSequenceConfigDA> CachedConfig;
};
