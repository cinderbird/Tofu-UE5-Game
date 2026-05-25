// Copyright Kaus. All rights reserved.

#include "Sequence/New/KausSequencePlayerSubsystem.h"

#include "LevelSequence.h"
#include "LevelSequencePlayer.h"
#include "LevelSequenceActor.h"
#include "MovieScene.h"
#include "MovieSceneMarkedFrame.h"
#include "Engine/World.h"
#include "TimerManager.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausSequencePlayer, Log, All);

// =============================================================================
//  Lifecycle
// =============================================================================

void UKausSequencePlayerSubsystem::Deinitialize()
{
    // PIE/World cleanup 중일 가능성. 콜백 언바인딩만, Destroy는 엔진에 위임.
    if (SequencePlayer)
    {
        SequencePlayer->OnFinished.RemoveDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnFinished);
        SequencePlayer->OnStop.RemoveDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnStop);
    }
    SequencePlayer = nullptr;
    ActiveActor = nullptr;
    ActiveSequence = nullptr;
    bOwnsActor = false;

    Super::Deinitialize();
}

bool UKausSequencePlayerSubsystem::IsWorldSafeForCleanup() const
{
    UWorld* World = GetWorld();
    return World && !World->bIsTearingDown;
}

// =============================================================================
//  Register paths
// =============================================================================

ULevelSequencePlayer* UKausSequencePlayerSubsystem::RegisterAndPlay(
    ULevelSequence* Sequence, bool bInAutoUnregisterOnFinish)
{
    if (!Sequence)
    {
        UE_LOG(LogKausSequencePlayer, Warning, TEXT("RegisterAndPlay: Sequence is null."));
        return nullptr;
    }

    UWorld* World = GetWorld();
    if (!World || World->bIsTearingDown)
    {
        UE_LOG(LogKausSequencePlayer, Warning, TEXT("RegisterAndPlay: World invalid."));
        return nullptr;
    }

    // 활성 시퀀스 있으면 정리 후 교체.
    if (SequencePlayer)
    {
        UE_LOG(LogKausSequencePlayer, Log,
            TEXT("RegisterAndPlay: replacing active (%s) with new asset (%s)."),
            *GetNameSafe(ActiveSequence), *GetNameSafe(Sequence));
        CleanupImmediate(/*bBroadcastFinished=*/false);
    }

    FMovieSceneSequencePlaybackSettings Settings;
    Settings.bPauseAtEnd = false;
    Settings.bDisableCameraCuts = false;

    ALevelSequenceActor* OutActor = nullptr;
    ULevelSequencePlayer* NewPlayer =
        ULevelSequencePlayer::CreateLevelSequencePlayer(World, Sequence, Settings, OutActor);

    if (!NewPlayer || !OutActor)
    {
        UE_LOG(LogKausSequencePlayer, Warning, TEXT("RegisterAndPlay: CreateLevelSequencePlayer failed."));
        return nullptr;
    }

    ActiveSequence = Sequence;
    SequencePlayer = NewPlayer;
    ActiveActor = OutActor;
    bOwnsActor = true; // Subsystem이 스폰함 → 종료 시 Destroy 책임.

    FinalizeRegistration(bInAutoUnregisterOnFinish);
    return SequencePlayer;
}

ULevelSequencePlayer* UKausSequencePlayerSubsystem::RegisterAndPlayActor(
    ALevelSequenceActor* Actor, bool bInAutoUnregisterOnFinish)
{
    if (!Actor)
    {
        UE_LOG(LogKausSequencePlayer, Warning, TEXT("RegisterAndPlayActor: Actor is null."));
        return nullptr;
    }

    UWorld* World = GetWorld();
    if (!World || World->bIsTearingDown)
    {
        UE_LOG(LogKausSequencePlayer, Warning, TEXT("RegisterAndPlayActor: World invalid."));
        return nullptr;
    }

    ULevelSequencePlayer* Player = Actor->GetSequencePlayer();
    if (!Player)
    {
        // 에디터에서 SequencePlayer가 아직 초기화 안 됐을 수 있음.
        Actor->InitializePlayer();
        Player = Actor->GetSequencePlayer();
    }
    if (!Player)
    {
        UE_LOG(LogKausSequencePlayer, Warning,
            TEXT("RegisterAndPlayActor: SequencePlayer null on %s."), *GetNameSafe(Actor));
        return nullptr;
    }

    // 활성 시퀀스 있으면 정리.
    if (SequencePlayer)
    {
        UE_LOG(LogKausSequencePlayer, Log,
            TEXT("RegisterAndPlayActor: replacing active with external actor %s."),
            *GetNameSafe(Actor));
        CleanupImmediate(/*bBroadcastFinished=*/false);
    }

    // 외부 액터가 이미 재생/일시정지 상태일 수 있음. 일관된 시작을 위해 Stop.
    if (Player->IsPlaying() || Player->IsPaused())
    {
        Player->Stop();
    }

    ActiveSequence = Cast<ULevelSequence>(Actor->GetSequence());
    SequencePlayer = Player;
    ActiveActor = Actor;
    bOwnsActor = false; // 외부 소유 → 종료 시 Destroy 안 함.

    FinalizeRegistration(bInAutoUnregisterOnFinish);
    return SequencePlayer;
}

void UKausSequencePlayerSubsystem::FinalizeRegistration(bool bInAutoUnregisterOnFinish)
{
    bAutoUnregisterOnFinish = bInAutoUnregisterOnFinish;
    bCleanupPending = false;

    if (bAutoUnregisterOnFinish && SequencePlayer)
    {
        SequencePlayer->OnFinished.AddDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnFinished);
        SequencePlayer->OnStop.AddDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnStop);
    }

    if (SequencePlayer)
    {
        SequencePlayer->Play();
    }

    UE_LOG(LogKausSequencePlayer, Log,
        TEXT("Registered: Sequence=%s Actor=%s Owns=%d AutoUnregister=%d"),
        *GetNameSafe(ActiveSequence), *GetNameSafe(ActiveActor),
        bOwnsActor ? 1 : 0, bAutoUnregisterOnFinish ? 1 : 0);
}

void UKausSequencePlayerSubsystem::Unregister()
{
    CleanupImmediate(/*bBroadcastFinished=*/true);
}

// =============================================================================
//  Cleanup
// =============================================================================

void UKausSequencePlayerSubsystem::CleanupImmediate(bool bBroadcastFinished)
{
    if (SequencePlayer)
    {
        SequencePlayer->OnFinished.RemoveDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnFinished);
        SequencePlayer->OnStop.RemoveDynamic(this,
            &UKausSequencePlayerSubsystem::HandleNativeOnStop);

        if (IsWorldSafeForCleanup() &&
            (SequencePlayer->IsPlaying() || SequencePlayer->IsPaused()))
        {
            SequencePlayer->Stop();
        }
    }

    // 액터 정리는 소유권에 따라 분기.
    if (bOwnsActor && ActiveActor && IsValid(ActiveActor) && IsWorldSafeForCleanup())
    {
        ActiveActor->Destroy();
    }
    // bOwnsActor=false면 외부 소유 → 그대로 둠. 다음 사용을 위해 살아있어야 함.

    SequencePlayer = nullptr;
    ActiveActor = nullptr;
    ActiveSequence = nullptr;
    bOwnsActor = false;
    bCleanupPending = false;

    if (bBroadcastFinished && OnSequenceFinished.IsBound())
    {
        OnSequenceFinished.Broadcast();
    }
}

void UKausSequencePlayerSubsystem::ScheduleDeferredCleanup(bool bBroadcastFinished)
{
    if (bCleanupPending) return;
    bCleanupPending = true;

    UWorld* World = GetWorld();
    if (!World)
    {
        SequencePlayer = nullptr;
        ActiveActor = nullptr;
        ActiveSequence = nullptr;
        bOwnsActor = false;
        bCleanupPending = false;
        return;
    }

    TWeakObjectPtr<UKausSequencePlayerSubsystem> WeakThis(this);
    World->GetTimerManager().SetTimerForNextTick(
        [WeakThis, bBroadcastFinished]()
        {
            if (UKausSequencePlayerSubsystem* Self = WeakThis.Get())
            {
                Self->CleanupImmediate(bBroadcastFinished);
            }
        });
}

// =============================================================================
//  Playback Control
// =============================================================================

void UKausSequencePlayerSubsystem::Play()
{
    if (SequencePlayer) SequencePlayer->Play();
}

void UKausSequencePlayerSubsystem::Pause()
{
    if (SequencePlayer) SequencePlayer->Pause();
}

void UKausSequencePlayerSubsystem::Stop()
{
    if (SequencePlayer) SequencePlayer->Stop();
}

bool UKausSequencePlayerSubsystem::JumpToMarkerAndPlay(FName MarkerLabel)
{
    if (!JumpToMarker(MarkerLabel)) return false;
    SequencePlayer->Play();
    return true;
}

bool UKausSequencePlayerSubsystem::JumpToMarker(FName MarkerLabel)
{
    if (!SequencePlayer || MarkerLabel.IsNone()) return false;

    // 사전 검증: 마커가 시퀀스에 존재하는지 확인 (없으면 엔진이 무시하지만
    // 디자이너 실수를 잡기 위해 명시적 로그).
    bool bFound = false;
    FindMarkerFrame(MarkerLabel, bFound);
    if (!bFound)
    {
        UE_LOG(LogKausSequencePlayer, Warning,
            TEXT("JumpToMarker: marker '%s' not found in %s."),
            *MarkerLabel.ToString(), *GetNameSafe(ActiveSequence));
        return false;
    }

    // 엔진이 마커 라벨로 직접 점프하도록 위임. 프레임 변환(Tick↔Display Rate)을
    // 직접 하지 않으므로 변환 오류 가능성이 없음.
    FMovieSceneSequencePlaybackParams Params;
    Params.PositionType = EMovieScenePositionType::MarkedFrame;
    Params.MarkedFrame  = MarkerLabel.ToString();
    Params.UpdateMethod = EUpdatePositionMethod::Jump;
    SequencePlayer->SetPlaybackPosition(Params);
    return true;
}

// =============================================================================
//  Queries
// =============================================================================

bool UKausSequencePlayerSubsystem::IsPlaying() const
{
    return SequencePlayer && SequencePlayer->IsPlaying();
}

bool UKausSequencePlayerSubsystem::IsPaused() const
{
    return SequencePlayer && SequencePlayer->IsPaused();
}

// =============================================================================
//  Director BP entry points
// =============================================================================

void UKausSequencePlayerSubsystem::HandleDirectorPauseRequest()
{
    Pause();
}

void UKausSequencePlayerSubsystem::HandleDirectorNotify(FName NotifyName)
{
    if (OnSequenceNotify.IsBound())
    {
        OnSequenceNotify.Broadcast(NotifyName);
    }
}

// =============================================================================
//  Native callbacks (deferred cleanup)
// =============================================================================

void UKausSequencePlayerSubsystem::HandleNativeOnFinished()
{
    UE_LOG(LogKausSequencePlayer, Log, TEXT("Native OnFinished: %s."),
        *GetNameSafe(ActiveSequence));
    ScheduleDeferredCleanup(/*bBroadcastFinished=*/true);
}

void UKausSequencePlayerSubsystem::HandleNativeOnStop()
{
    UE_LOG(LogKausSequencePlayer, Log, TEXT("Native OnStop: %s."),
        *GetNameSafe(ActiveSequence));
    ScheduleDeferredCleanup(/*bBroadcastFinished=*/true);
}

// =============================================================================
//  Marker lookup
// =============================================================================

FFrameNumber UKausSequencePlayerSubsystem::FindMarkerFrame(
    FName MarkerLabel, bool& bOutFound) const
{
    bOutFound = false;
    if (!ActiveSequence) return FFrameNumber(0);

    const UMovieScene* MovieScene = ActiveSequence->GetMovieScene();
    if (!MovieScene) return FFrameNumber(0);

    const TArray<FMovieSceneMarkedFrame>& Marks = MovieScene->GetMarkedFrames();
    const FString TargetStr = MarkerLabel.ToString();

    for (const FMovieSceneMarkedFrame& Mark : Marks)
    {
        if (Mark.Label.Equals(TargetStr, ESearchCase::IgnoreCase))
        {
            bOutFound = true;
            return Mark.FrameNumber;
        }
    }
    return FFrameNumber(0);
}
