// Copyright Kaus. All rights reserved.

#pragma once

#include "CoreMinimal.h"
#include "Subsystems/WorldSubsystem.h"
#include "MovieSceneSequencePlayer.h"
#include "KausSequencePlayerSubsystem.generated.h"

class ULevelSequence;
class ULevelSequencePlayer;
class ALevelSequenceActor;

DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnKausSequenceFinished);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnKausSequenceNotify, FName, NotifyName);

/**
 * UKausSequencePlayerSubsystem
 *
 * 싱글 시퀀스 전제 시퀀서 재생 진입점. BP/GA/Task 등 어디서든 한 줄로 호출.
 *
 * ─── 두 가지 등록 경로 ──────────────────────────────────────────────────────
 *   RegisterAndPlay(Sequence)
 *     - LevelSequence 에셋만 받아 새 LevelSequenceActor를 스폰
 *     - 시퀀스 종료 시 액터 자동 Destroy
 *     - 빠르고 단순. 바인딩이 액터 종속이 아닌 경우 사용.
 *
 *   RegisterAndPlayActor(LevelSequenceActor)
 *     - 레벨에 미리 배치되거나 BP가 스폰한 LevelSequenceActor를 사용
 *     - 액터의 SequencePlayer를 그대로 활용 (에디터 설정 바인딩 유지)
 *     - 시퀀스 종료 시 액터는 Destroy하지 않음 (외부 소유)
 *     - 바인딩이 액터별로 다른 경우 또는 Transform Origin 등 인스턴스 데이터
 *       활용이 필요한 경우 사용.
 *
 * 두 경로 모두 OnSequenceFinished 델리게이트로 종료를 통지한다.
 * PIE Teardown 안전성, 콜백 재진입 방지는 이전과 동일.
 */
UCLASS(BlueprintType)
class KAUS_API UKausSequencePlayerSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    virtual void Deinitialize() override;

    // === 등록/해제 ===

    /**
     * LevelSequence 에셋으로부터 새 SequenceActor를 스폰하고 재생.
     * 종료 시 스폰된 액터 자동 Destroy.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence",
        meta = (DisplayName = "Register And Play Sequence"))
    ULevelSequencePlayer* RegisterAndPlay(ULevelSequence* Sequence,
        bool bAutoUnregisterOnFinish = true);

    /**
     * 외부에서 제공된 LevelSequenceActor를 사용해 재생.
     * 레벨에 배치된 액터의 바인딩과 설정을 그대로 사용한다.
     * 종료 시 액터는 Destroy하지 않음 (외부 소유).
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence",
        meta = (DisplayName = "Register And Play Actor"))
    ULevelSequencePlayer* RegisterAndPlayActor(ALevelSequenceActor* Actor,
        bool bAutoUnregisterOnFinish = true);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void Unregister();

    // === 재생 제어 ===

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void Play();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void Pause();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    void Stop();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    bool JumpToMarkerAndPlay(FName MarkerLabel);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence")
    bool JumpToMarker(FName MarkerLabel);

    // === 조회 ===

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    bool HasActiveSequence() const { return SequencePlayer != nullptr; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    ULevelSequencePlayer* GetActivePlayer() const { return SequencePlayer; }

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    bool IsPlaying() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Sequence")
    bool IsPaused() const;

    // === Director BP entry points ===
    void HandleDirectorPauseRequest();
    void HandleDirectorNotify(FName NotifyName);

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Sequence")
    FOnKausSequenceFinished OnSequenceFinished;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Sequence")
    FOnKausSequenceNotify OnSequenceNotify;

private:
    UFUNCTION()
    void HandleNativeOnFinished();

    UFUNCTION()
    void HandleNativeOnStop();

    void CleanupImmediate(bool bBroadcastFinished);
    void ScheduleDeferredCleanup(bool bBroadcastFinished);
    bool IsWorldSafeForCleanup() const;
    FFrameNumber FindMarkerFrame(FName MarkerLabel, bool& bOutFound) const;

    /** 등록 공통 처리: 콜백 바인딩, Play, 로깅. */
    void FinalizeRegistration(bool bInAutoUnregisterOnFinish);

    UPROPERTY(Transient)
    TObjectPtr<ULevelSequence> ActiveSequence = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<ULevelSequencePlayer> SequencePlayer = nullptr;

    UPROPERTY(Transient)
    TObjectPtr<ALevelSequenceActor> ActiveActor = nullptr;

    /** ActiveActor가 Subsystem이 스폰한 액터면 true. 외부 액터면 false. */
    bool bOwnsActor = false;

    bool bAutoUnregisterOnFinish = true;
    bool bCleanupPending = false;
};
