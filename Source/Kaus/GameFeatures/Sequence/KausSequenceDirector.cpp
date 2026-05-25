#include "Sequence/KausSequenceDirector.h"
#include "Sequence/KausSequenceConfigDA.h"
#include "LevelSequencePlayer.h"
#include "LevelSequenceActor.h"
#include "LevelSequence.h"
#include "MovieScene.h"
#include "Engine/World.h"
#include "KausSequenceSubsystem.h"
#include "Tags/KausSequenceTags.h"
#include "Animation/KausAnimMessages.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausSequenceDirector, Log, All);

// ============================================================================
// 생성 / BeginPlay / EndPlay
// ============================================================================

UKausSequenceDirector::UKausSequenceDirector()
{
    PrimaryComponentTick.bCanEverTick = true;
    PrimaryComponentTick.bStartWithTickEnabled = false;
}

void UKausSequenceDirector::BeginPlay()
{
    Super::BeginPlay();
    SetComponentTickEnabled(false);
}

void UKausSequenceDirector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    TeardownSequence();
    Super::EndPlay(EndPlayReason);
}

// ============================================================================
// AnimPhase 브로드캐스트
// ============================================================================

void UKausSequenceDirector::BroadcastAnimPhaseChange(EKausAnimPhase NewAnimPhase, float BlendDuration)
{
    if (!UGameplayMessageSubsystem::HasInstance(this)) return;

    FKausAnimPhaseChangedMessage Msg;
    Msg.NewPhase      = NewAnimPhase;
    Msg.BlendDuration = BlendDuration;

    UGameplayMessageSubsystem::Get(this).BroadcastMessage(KausSequenceTags::Anim_PhaseChanged, Msg);

    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] AnimPhase broadcast → %s (blend=%.2fs)"),
        *GetOwner()->GetName(), *UEnum::GetValueAsString(NewAnimPhase), BlendDuration);
}

// ============================================================================
// Tick — 재생 위치 감시 및 일시정지
// ============================================================================

void UKausSequenceDirector::TickComponent(
    float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bHasPauseTarget || !SequencePlayer || !SequencePlayer->IsPlaying())
        return;

    UMovieScene* MS = GetMovieScene();
    if (!MS) return;

    const FQualifiedFrameTime QualifiedTime = SequencePlayer->GetCurrentTime();
    const FFrameNumber CurrentDisplay = FFrameRate::TransformTime(
        QualifiedTime.Time, QualifiedTime.Rate, MS->GetDisplayRate()).FloorToFrame();

    if (CurrentDisplay < PauseTargetDisplayFrame)
        return;

    // ── 목표 프레임 도달: 일시정지 ──────────────────────────────────────────
    SequencePlayer->Pause();
    bHasPauseTarget = false;
    SetComponentTickEnabled(false);

    // 오버슈트 보정 — Scrub은 카메라컷 이벤트를 트리거하지 않습니다.
    FMovieSceneSequencePlaybackParams SnapParams;
    SnapParams.Frame        = FFrameTime(PauseTargetDisplayFrame);
    SnapParams.PositionType = EMovieScenePositionType::Frame;
    SnapParams.UpdateMethod = EUpdatePositionMethod::Scrub;
    SequencePlayer->SetPlaybackPosition(SnapParams);

    if (CurrentPhase == EKausSequencePhase::PlayingIntro)
    {
        CurrentPhase = EKausSequencePhase::PausedAtIntro;
        BroadcastAnimPhaseChange(EKausAnimPhase::IntroIdle);

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Paused at IntroEndMenuStart (frame %d)."),
            *GetOwner()->GetName(), PauseTargetDisplayFrame.Value);
        OnIntroCompleted.Broadcast();
    }
    else if (CurrentPhase == EKausSequencePhase::PlayingMenu)
    {
        CurrentPhase = EKausSequencePhase::PausedAtMenu;
        BroadcastAnimPhaseChange(EKausAnimPhase::MenuIdle);

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Paused at MenuEndOutroStart (frame %d)."),
            *GetOwner()->GetName(), PauseTargetDisplayFrame.Value);
        OnMenuCompleted.Broadcast();
    }
}

// ============================================================================
// 메시지 구독
// ============================================================================

void UKausSequenceDirector::RegisterMessageListeners()
{
    if (!UGameplayMessageSubsystem::HasInstance(this)) return;

    UGameplayMessageSubsystem& MsgSS = UGameplayMessageSubsystem::Get(this);

    ResumeListenerHandle  = MsgSS.RegisterListener<FKausSequenceResumeMessage>(
        KausSequenceTags::Sequence_Resume, this, &UKausSequenceDirector::OnResumeMessageReceived);

    RestartListenerHandle = MsgSS.RegisterListener<FKausSequenceRestartMessage>(
        KausSequenceTags::Sequence_Restart, this, &UKausSequenceDirector::OnRestartMessageReceived);

    StopListenerHandle    = MsgSS.RegisterListener<FKausSequenceStopMessage>(
        KausSequenceTags::Sequence_Stop, this, &UKausSequenceDirector::OnStopMessageReceived);

    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] Registered GameplayMessage listeners."), *GetOwner()->GetName());
}

void UKausSequenceDirector::UnregisterMessageListeners()
{
    ResumeListenerHandle.Unregister();
    RestartListenerHandle.Unregister();
    StopListenerHandle.Unregister();
}

void UKausSequenceDirector::OnResumeMessageReceived(
    FGameplayTag Tag, const FKausSequenceResumeMessage& Message)
{
    if (!IsWaitingForResume()) return;

    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] OnResumeMessageReceived | Source=%s | Context=%s"),
        *GetOwner()->GetName(),
        Message.SourceActor ? *Message.SourceActor->GetName() : TEXT("None"),
        *Message.Context.ToString());

    Resume();
}

void UKausSequenceDirector::OnRestartMessageReceived(
    FGameplayTag Tag, const FKausSequenceRestartMessage& Message)
{
    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] OnRestartMessageReceived | Context=%s"),
        *GetOwner()->GetName(), *Message.Context.ToString());

    CurrentPhase    = EKausSequencePhase::Idle;
    bHasPauseTarget = false;
    SetComponentTickEnabled(false);

    StartPlayback();
}

void UKausSequenceDirector::OnStopMessageReceived(
    FGameplayTag Tag, const FKausSequenceStopMessage& Message)
{
    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] OnStopMessageReceived | Context=%s"),
        *GetOwner()->GetName(), *Message.Context.ToString());

    TeardownSequence();
}

// ============================================================================
// Setup / Teardown
// ============================================================================

void UKausSequenceDirector::SetupSequence(
    ULevelSequence* Sequence, const UKausSequenceConfigDA* Config)
{
    if (!Sequence || !Config) return;
    TeardownSequence();

    CachedConfig = Config;

    UWorld* World = GetWorld();
    if (!World) return;

    if (UKausSequenceSubsystem* SeqSS = World->GetSubsystem<UKausSequenceSubsystem>())
    {
        SeqSS->RegisterDirector(this);
    }

    if (SetupPlayer(Sequence))
    {
        RegisterMessageListeners();
    }
}

bool UKausSequenceDirector::SetupPlayer(ULevelSequence* Sequence)
{
    UWorld* World = GetWorld();
    if (!World) return false;

    FMovieSceneSequencePlaybackSettings Settings;
    Settings.bAutoPlay       = false;
    Settings.LoopCount.Value = 0;

    SequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(
        World, Sequence, Settings, SequenceActor);

    if (!SequencePlayer)
    {
        UE_LOG(LogKausSequenceDirector, Error,
            TEXT("[%s] SetupPlayer: Failed to create LevelSequencePlayer."),
            *GetOwner()->GetName());
        return false;
    }

    SequencePlayer->OnFinished.AddDynamic(this, &UKausSequenceDirector::OnSequenceFinished);
    return true;
}

void UKausSequenceDirector::TeardownSequence()
{
    UnregisterMessageListeners();
    SetComponentTickEnabled(false);
    bHasPauseTarget = false;
    CurrentPhase    = EKausSequencePhase::Idle;

    if (SequencePlayer)
    {
        SequencePlayer->OnFinished.RemoveAll(this);
        SequencePlayer->Stop();
        SequencePlayer = nullptr;
    }
    if (SequenceActor)
    {
        SequenceActor->Destroy();
        SequenceActor = nullptr;
    }

    CachedConfig = nullptr;
}

// ============================================================================
// 재생 제어
// ============================================================================

void UKausSequenceDirector::StartPlayback()
{
    if (!SequencePlayer || !CachedConfig)
    {
        UE_LOG(LogKausSequenceDirector, Warning,
            TEXT("[%s] StartPlayback: Player or Config is null."), *GetOwner()->GetName());
        return;
    }
    if (CurrentPhase != EKausSequencePhase::Idle)
    {
        UE_LOG(LogKausSequenceDirector, Warning,
            TEXT("[%s] StartPlayback: Already started (Phase=%d)."),
            *GetOwner()->GetName(), (int32)CurrentPhase);
        return;
    }

    const FFrameNumber OutroEndDisplay = GetMarkedDisplayFrame(CachedConfig->OutroEndMark);
    if (OutroEndDisplay.Value <= 0)
    {
        UE_LOG(LogKausSequenceDirector, Error,
            TEXT("[%s] StartPlayback: Mark '%s' not found. Aborting."),
            *GetOwner()->GetName(), *CachedConfig->OutroEndMark.ToString());
        return;
    }

    // 전체 재생 범위를 OutroEnd 까지 설정 (이후 SetFrameRange 재호출 없음)
    SequencePlayer->SetFrameRange(0, OutroEndDisplay.Value);

    // 최초 1회 Jump — 이후 Jump 없음
    FMovieSceneSequencePlaybackParams JumpParams;
    JumpParams.Frame        = FFrameTime(FFrameNumber(0));
    JumpParams.PositionType = EMovieScenePositionType::Frame;
    JumpParams.UpdateMethod = EUpdatePositionMethod::Jump;
    SequencePlayer->SetPlaybackPosition(JumpParams);

    PauseTargetDisplayFrame = GetMarkedDisplayFrame(CachedConfig->IntroEndMenuStartMark);
    bHasPauseTarget         = (PauseTargetDisplayFrame.Value > 0);
    CurrentPhase            = EKausSequencePhase::PlayingIntro;
    SetComponentTickEnabled(bHasPauseTarget);

    BroadcastAnimPhaseChange(EKausAnimPhase::IntroPose);
    SequencePlayer->Play();

    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] StartPlayback → PlayingIntro. PauseAt=%d, OutroEnd=%d"),
        *GetOwner()->GetName(), PauseTargetDisplayFrame.Value, OutroEndDisplay.Value);
}

void UKausSequenceDirector::Resume()
{
    if (!SequencePlayer || !CachedConfig)
    {
        UE_LOG(LogKausSequenceDirector, Warning,
            TEXT("[%s] Resume: Player or Config is null."), *GetOwner()->GetName());
        return;
    }

    switch (CurrentPhase)
    {
    case EKausSequencePhase::PausedAtIntro:
    {
        PauseTargetDisplayFrame = GetMarkedDisplayFrame(CachedConfig->MenuEndOutroStartMark);
        bHasPauseTarget         = (PauseTargetDisplayFrame.Value > 0);
        CurrentPhase            = EKausSequencePhase::PlayingMenu;
        SetComponentTickEnabled(bHasPauseTarget);

        BroadcastAnimPhaseChange(EKausAnimPhase::MenuTransition, 0.3f);
        SequencePlayer->Play();

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Resume → PlayingMenu. PauseAt=%d"),
            *GetOwner()->GetName(), PauseTargetDisplayFrame.Value);
        break;
    }
    case EKausSequencePhase::PausedAtMenu:
    {
        bHasPauseTarget = false;
        CurrentPhase    = EKausSequencePhase::PlayingOutro;
        SetComponentTickEnabled(false);

        BroadcastAnimPhaseChange(EKausAnimPhase::Outro, 0.3f);
        SequencePlayer->Play();

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Resume → PlayingOutro."), *GetOwner()->GetName());
        break;
    }
    default:
        UE_LOG(LogKausSequenceDirector, Warning,
            TEXT("[%s] Resume: Ignored. Phase=%d is not a paused state."),
            *GetOwner()->GetName(), (int32)CurrentPhase);
        break;
    }
}

void UKausSequenceDirector::OnSequenceFinished()
{
    if (CurrentPhase == EKausSequencePhase::PlayingOutro)
    {
        CurrentPhase    = EKausSequencePhase::Completed;
        bHasPauseTarget = false;
        SetComponentTickEnabled(false);

        BroadcastAnimPhaseChange(EKausAnimPhase::Done);
        OnOutroCompleted.Broadcast();

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Outro completed. Sequencer stopped."), *GetOwner()->GetName());
    }
}

// ============================================================================
// 유틸리티
// ============================================================================

UMovieScene* UKausSequenceDirector::GetMovieScene() const
{
    if (!SequenceActor) return nullptr;
    ULevelSequence* Seq = Cast<ULevelSequence>(SequenceActor->GetSequence());
    return Seq ? Seq->GetMovieScene() : nullptr;
}

FFrameNumber UKausSequenceDirector::GetMarkedDisplayFrame(const FName& MarkLabel) const
{
    UMovieScene* MS = GetMovieScene();
    if (!MS) return FFrameNumber(0);

    for (const FMovieSceneMarkedFrame& MF : MS->GetMarkedFrames())
    {
        if (MF.Label == MarkLabel.ToString())
        {
            return FFrameRate::TransformTime(
                FFrameTime(MF.FrameNumber),
                MS->GetTickResolution(),
                MS->GetDisplayRate()).FloorToFrame();
        }
    }

    UE_LOG(LogKausSequenceDirector, Warning,
        TEXT("[%s] GetMarkedDisplayFrame: Mark '%s' not found."),
        *GetOwner()->GetName(), *MarkLabel.ToString());
    return FFrameNumber(0);
}
