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

/**
 * 시퀀스 진행 단계에 대응하는 AnimPhase 를 메시지 버스로 전파한다.
 *
 * 호출 시점은 단계 전환의 결정 직후 — 즉, 시퀀서가 "지금부터 IntroIdle/MenuIdle/Outro 다"
 * 라고 판단한 그 프레임에서 즉시 발사된다. 수신 측(KausSequenceAnimSyncComponent)이
 * 시퀀서의 진행과 1프레임 차이로 따라잡도록 함.
 *
 * 직접 AnimInstance API 를 부르지 않고 메시지로 던지는 이유:
 *   - Director 는 캐릭터·AnimBP 참조를 보유하지 않는다(시퀀서 재생 책임에 집중).
 *   - 수신 측이 1개일 수도 N개일 수도 있고, 시점에 따라 다른 객체일 수도 있다.
 *   - 비동기 브로드캐스트는 송수신을 시간적·구조적으로 분리한다.
 */
void UKausSequenceDirector::BroadcastAnimPhaseChange(EKausAnimPhase NewAnimPhase, float BlendDuration)
{
    if (!UGameplayMessageSubsystem::HasInstance(this)) return;

    FKausAnimPhaseChangedMessage Msg;
    Msg.NewPhase      = NewAnimPhase;
    Msg.BlendDuration = BlendDuration;

    // 채널 태그: KausSequenceTags::Anim_PhaseChanged ("Kaus.Anim.PhaseChanged")
    UGameplayMessageSubsystem::Get(this).BroadcastMessage(KausSequenceTags::Anim_PhaseChanged, Msg);

    UE_LOG(LogKausSequenceDirector, Log,
        TEXT("[%s] AnimPhase broadcast → %s (blend=%.2fs)"),
        *GetOwner()->GetName(), *UEnum::GetValueAsString(NewAnimPhase), BlendDuration);
}

// ============================================================================
// Tick — 재생 위치 감시 및 일시정지
// ============================================================================

/**
 * 매 프레임 시퀀서의 현재 재생 위치를 감시한다.
 *
 * 시퀀서 자체에는 "마크 라벨에 도달하면 자동 정지" 기능이 없다.
 * 그래서 Director 가 Display Rate 기준 프레임을 비교해 직접 Pause 를 건다.
 *
 * Tick 은 bHasPauseTarget=true 인 동안만 활성화된다(StartPlayback/Resume 에서 토글).
 * 정지 후에는 즉시 비활성화해 매 프레임 비용을 0 으로 만든다.
 */
void UKausSequenceDirector::TickComponent(
    float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    // 감시할 목표가 없거나, Player 가 정지된 상태면 검사 불필요.
    if (!bHasPauseTarget || !SequencePlayer || !SequencePlayer->IsPlaying())
        return;

    UMovieScene* MS = GetMovieScene();
    if (!MS) return;

    // 현재 재생 시각을 MovieScene 의 Display Rate 기준 프레임 번호로 환산.
    // (시퀀서 내부 Tick Resolution 과 외부 마크가 사용하는 Display Rate 가 다르기 때문.)
    const FQualifiedFrameTime QualifiedTime = SequencePlayer->GetCurrentTime();
    const FFrameNumber CurrentDisplay = FFrameRate::TransformTime(
        QualifiedTime.Time, QualifiedTime.Rate, MS->GetDisplayRate()).FloorToFrame();

    if (CurrentDisplay < PauseTargetDisplayFrame)
        return;

    // ── 목표 프레임 도달: 일시정지 ──────────────────────────────────────────
    SequencePlayer->Pause();
    bHasPauseTarget = false;
    // 다음 Resume 호출까지 Tick 비활성 — 불필요한 매 프레임 비교 비용 제거.
    SetComponentTickEnabled(false);

    // 오버슈트 보정 — 프레임이 목표를 살짝 지나친 상태에서 멈췄을 수 있다.
    // Scrub 으로 정확한 목표 프레임에 스냅한다(Jump 와 달리 카메라컷 이벤트를 재트리거하지 않음).
    FMovieSceneSequencePlaybackParams SnapParams;
    SnapParams.Frame        = FFrameTime(PauseTargetDisplayFrame);
    SnapParams.PositionType = EMovieScenePositionType::Frame;
    SnapParams.UpdateMethod = EUpdatePositionMethod::Scrub;
    SequencePlayer->SetPlaybackPosition(SnapParams);

    if (CurrentPhase == EKausSequencePhase::PlayingIntro)
    {
        // Intro 재생이 IntroEndMenuStart 마크에 도달 — 메뉴 단계 대기 상태로.
        CurrentPhase = EKausSequencePhase::PausedAtIntro;
        // AnimPhase 도 IntroIdle 로 전환을 알린다(캐릭터가 자연스럽게 대기 포즈로 블렌드).
        BroadcastAnimPhaseChange(EKausAnimPhase::IntroIdle);

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Paused at IntroEndMenuStart (frame %d)."),
            *GetOwner()->GetName(), PauseTargetDisplayFrame.Value);
        // 외부 시스템(UI/스크립트)에 Intro 종료 알림 — Resume 메시지를 기다리는 단계.
        OnIntroCompleted.Broadcast();
    }
    else if (CurrentPhase == EKausSequencePhase::PlayingMenu)
    {
        // Menu 재생이 MenuEndOutroStart 마크에 도달 — Outro 진입 대기 상태로.
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

/**
 * 일시정지 상태에서 다음 단계로 진행한다.
 *
 * 단계별 분기 이유:
 *   - PausedAtIntro → PlayingMenu: 다음 일시정지 목표는 MenuEndOutroStart 마크.
 *     Tick 이 다시 활성화되어 그 프레임을 감시한다.
 *     AnimPhase 는 MenuTransition(BlendDuration=0.3) — Idle 포즈에서 메뉴 액션으로 부드럽게 전환.
 *   - PausedAtMenu → PlayingOutro: 더 이상 중간 일시정지가 없다(목표 없음).
 *     OutroEnd 까지 끝까지 재생되며, OnSequenceFinished 에서 Completed 로 마무리.
 *     AnimPhase 는 Outro(BlendDuration=0.3) — 메뉴 포즈에서 퇴장 모션으로 전환.
 *
 * BlendDuration 0.3 초는 카메라 컷이 끊겨도 캐릭터의 자세 변화가 한 박자 늦게
 * 부드럽게 따라오도록 하기 위한 값.
 */
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
        // 다음 일시정지 지점 = MenuEndOutroStart 마크. Tick 이 이 프레임에 도달하면 다시 Pause.
        PauseTargetDisplayFrame = GetMarkedDisplayFrame(CachedConfig->MenuEndOutroStartMark);
        bHasPauseTarget         = (PauseTargetDisplayFrame.Value > 0);
        CurrentPhase            = EKausSequencePhase::PlayingMenu;
        SetComponentTickEnabled(bHasPauseTarget);

        // 0.3초 블렌드 — IntroIdle 정지 포즈 → Menu 모션으로 자연스럽게 이어지도록.
        BroadcastAnimPhaseChange(EKausAnimPhase::MenuTransition, 0.3f);
        SequencePlayer->Play();

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Resume → PlayingMenu. PauseAt=%d"),
            *GetOwner()->GetName(), PauseTargetDisplayFrame.Value);
        break;
    }
    case EKausSequencePhase::PausedAtMenu:
    {
        // 마지막 구간은 중간 정지가 없다. OutroEnd 까지 자연 종료.
        bHasPauseTarget = false;
        CurrentPhase    = EKausSequencePhase::PlayingOutro;
        SetComponentTickEnabled(false);

        // Outro 진입을 알린다. 캐릭터는 0.3초 블렌드로 퇴장 모션으로 전환.
        BroadcastAnimPhaseChange(EKausAnimPhase::Outro, 0.3f);
        SequencePlayer->Play();

        UE_LOG(LogKausSequenceDirector, Log,
            TEXT("[%s] Resume → PlayingOutro."), *GetOwner()->GetName());
        break;
    }
    default:
        // Idle/Playing* 상태에서의 Resume 은 의미가 없다 — 잘못된 호출 순서일 가능성.
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
