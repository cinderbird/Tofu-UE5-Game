# 비동기 신호 기반 연출-애니메이션 동기화 시스템

## 1. 문제 / 설계 목표

`ULevelSequencePlayer` 가 카메라·트랙을 진행하는 동안 캐릭터의 AnimBP 상태는 별도 축으로
관리된다. 두 축이 어긋나면:

- 시퀀서가 Pause 한 정확한 프레임에 캐릭터 포즈가 함께 멈추지 못해 다음 프레임에 튄다.
- Intro → Menu → Outro 같은 단계 전환 시 캐릭터 모션이 컷오프되어 부자연스러운 자세가 노출된다.

설계 목표는 다음과 같다:

- **시퀀서가 단계 전환을 결정한 그 프레임에 AnimBP 도 즉시 같은 단계로 들어가게 한다.**
- **`KausSequenceDirector` 가 캐릭터/AnimBP 의 존재를 모르게 한다** — 시퀀서는 시퀀서 일만,
  애니메이션은 애니메이션 일만 한다.
- **다중 수신자/공존 시나리오** — 한 월드에 여러 시퀀스가 동시에 진행되어도 각 캐릭터가
  자기 시퀀스만 듣게 분리 가능해야 한다.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/GameFeatures/Sequence/KausSequenceDirector.h/.cpp` — 시퀀서 재생 + Phase 방송
- `Source/Kaus/GameFeatures/Sequence/KausSequenceAnimSyncComponent.h/.cpp` — 메시지 수신 → 핸들러 전달
- `Source/Kaus/GameFeatures/Sequence/KausSequenceMessages.h` — Sequence 측 메시지 페이로드
- `Source/Kaus/Animation/KausAnimMessages.h` — `FKausAnimPhaseChangedMessage`
- `Source/Kaus/Animation/KausAnimInstance.h/.cpp` — 수신 측 Phase 플래그

```
[Director]  BroadcastAnimPhaseChange
              │
              ▼
[Message Bus] Kaus.Anim.PhaseChanged + FKausAnimPhaseChangedMessage
              │
              ▼
[AnimSync]   OnPhaseChangedMessage → FindPhaseHandler
              │
              ▼
[AnimBP/Actor] IKausAnimPhaseHandler::OnAnimPhaseChanged(NewPhase, BlendDuration)
              │ (구현 측이 bIsGameplayPhase / bIsCinematicPhase 토글 또는 Inertial Blending)
              ▼
[AnimInstance] State Machine Transition Rule 평가
```

### 2.1 단계 전환 결정 시점에 즉시 방송

```cpp
void UKausSequenceDirector::BroadcastAnimPhaseChange(EKausAnimPhase NewAnimPhase, float BlendDuration)
{
    if (!UGameplayMessageSubsystem::HasInstance(this)) return;

    FKausAnimPhaseChangedMessage Msg;
    Msg.NewPhase      = NewAnimPhase;
    Msg.BlendDuration = BlendDuration;

    // 채널 태그: KausSequenceTags::Anim_PhaseChanged ("Kaus.Anim.PhaseChanged")
    UGameplayMessageSubsystem::Get(this).BroadcastMessage(KausSequenceTags::Anim_PhaseChanged, Msg);
    ...
}
```

### 2.2 마크 프레임 도달 감시 → Pause + 방송

시퀀서에는 "마크 라벨에 도달하면 자동 정지" 기능이 없다. Director 가 매 프레임 직접
Display Rate 기준 프레임을 비교하고, 목표에 도달한 그 프레임에 Pause 와 AnimPhase 방송을
함께 발사한다.

```cpp
void UKausSequenceDirector::TickComponent(float DeltaTime, ...)
{
    Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

    if (!bHasPauseTarget || !SequencePlayer || !SequencePlayer->IsPlaying())
        return;

    UMovieScene* MS = GetMovieScene();
    if (!MS) return;

    // 현재 재생 시각을 MovieScene 의 Display Rate 기준 프레임 번호로 환산.
    const FQualifiedFrameTime QualifiedTime = SequencePlayer->GetCurrentTime();
    const FFrameNumber CurrentDisplay = FFrameRate::TransformTime(
        QualifiedTime.Time, QualifiedTime.Rate, MS->GetDisplayRate()).FloorToFrame();

    if (CurrentDisplay < PauseTargetDisplayFrame)
        return;

    // ── 목표 프레임 도달: 일시정지 ──────────────────────────────────────────
    SequencePlayer->Pause();
    bHasPauseTarget = false;
    SetComponentTickEnabled(false);

    // 오버슈트 보정 — Scrub 으로 정확한 목표 프레임에 스냅(카메라컷 재트리거 없음).
    FMovieSceneSequencePlaybackParams SnapParams;
    SnapParams.Frame        = FFrameTime(PauseTargetDisplayFrame);
    SnapParams.PositionType = EMovieScenePositionType::Frame;
    SnapParams.UpdateMethod = EUpdatePositionMethod::Scrub;
    SequencePlayer->SetPlaybackPosition(SnapParams);

    if (CurrentPhase == EKausSequencePhase::PlayingIntro)
    {
        CurrentPhase = EKausSequencePhase::PausedAtIntro;
        BroadcastAnimPhaseChange(EKausAnimPhase::IntroIdle);
        OnIntroCompleted.Broadcast();
    }
    else if (CurrentPhase == EKausSequencePhase::PlayingMenu)
    {
        CurrentPhase = EKausSequencePhase::PausedAtMenu;
        BroadcastAnimPhaseChange(EKausAnimPhase::MenuIdle);
        OnMenuCompleted.Broadcast();
    }
}
```

### 2.3 수신 측 — 메시지를 받아 인터페이스로 전달

`KausSequenceAnimSyncComponent` 는 캐릭터(또는 다른 액터) 에 붙는 작은 중계기다.

```cpp
void UKausSequenceAnimSyncComponent::OnPhaseChangedMessage(FGameplayTag Tag, const FKausAnimPhaseChangedMessage& Message)
{
    // 필터 태그가 설정된 경우, 메시지 채널 태그와 비교합니다.
    // (한 월드에 여러 시퀀스가 동시 진행될 때 자기 채널만 듣게 하기 위함.)
    if (FilterTag.IsValid() && !Tag.MatchesTag(FilterTag))
        return;

    // 같은 Phase 가 연속으로 와도 무시 — 의도치 않은 블렌드 재시작/노티파이 재발사 방지.
    if (CurrentAnimPhase == Message.NewPhase)
        return;

    UObject* Handler = FindPhaseHandler();
    if (!Handler)
    {
        UE_LOG(LogKausAnimSync, Warning, TEXT("[%s] No IKausAnimPhaseHandler found. ..."), *GetOwner()->GetName());
        return;
    }

    CurrentAnimPhase = Message.NewPhase;

    // ── 인터페이스 호출 — 전환 방식은 구현 측이 전적으로 결정 ─────────────────
    IKausAnimPhaseHandler::Execute_OnAnimPhaseChanged(
        Handler, Message.NewPhase, Message.BlendDuration);
}
```

### 2.4 핸들러 탐색 순서 — AnimInstance 우선, Actor 폴백

```cpp
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
```

### 2.5 AnimInstance 의 상태 플래그 + Transition Rule

수신 측 구현은 보통 AnimBP 가 `bIsGameplayPhase` / `bIsCinematicPhase` 두 플래그를 토글하고,
실제 전이는 AnimGraph 의 Transition Rule 이 결정한다.

```cpp
bool UKausAnimInstance::CanTransition_GameplayToCinematic() const
{
    return bIsCinematicPhase && !bIsGameplayPhase;
}

bool UKausAnimInstance::CanTransition_CinematicToGameplay() const
{
    return bIsGameplayPhase && !bIsCinematicPhase;
}
```

두 함수는 `BlueprintThreadSafe` — AnimGraph 의 워커 스레드에서 호출되어 Inertial Blending
같은 부드러운 전환이 워커 스레드에서 그대로 처리된다.

## 3. 핵심 설계 결정

**`GameplayMessageSubsystem` 으로 던지고 직접 참조를 끊은 이유.**
Director 가 캐릭터 포인터를 들고 있으면 다음 문제가 생긴다:

- 한 시퀀스에 여러 캐릭터가 등장하면 모두를 추적해야 한다.
- 캐릭터 액터의 수명이 시퀀스 수명과 다를 수 있다 (스폰/디스폰).
- 시퀀스를 재사용하는 다른 컨텐츠에서 캐릭터 종류가 바뀌면 Director 도 수정해야 한다.

메시지 버스로 던지면 발신자(Director)는 수신자가 누구인지·몇 명인지·언제 등장했는지 알 필요가
없다. 캐릭터마다 `KausSequenceAnimSyncComponent` 가 하나씩 있으면 한 번의 방송에
여러 캐릭터가 동시 반응한다. 정확히 한 캐릭터만 듣게 하고 싶으면 `FilterTag` 를 설정한다.

**AnimInstance 우선 → Actor 폴백 탐색 순서의 이유.**
대부분의 캐릭터는 AnimBP 에서 Inertial Blending/노티파이 트리거 같은 전환 처리를 한다. 그래서
`AnimInstance` 를 1순위로 잡는다. 단, AnimBP 를 갖지 않거나 액터 자체가 처리를 원하는 (커스텀
스켈레탈 메시 액터 등) 경우를 위해 2순위로 Owner 액터를 본다. 둘 다 인터페이스를 안 두면
경고 로그만 남기고 메시지를 폐기 — 수신 책임이 빠진 설정 누락을 시끄럽게 알린다.

**`BlendDuration` 을 메시지 페이로드에 실어 보내되 수신 측이 해석을 결정하게 한 이유.**
Director 는 "권장 블렌딩 시간(예: 0.3 초)" 만 알리고, 실제로 Inertial Blending 으로 흡수할지,
즉시 컷할지, 노티파이로 트리거할지는 AnimBP/구현 측이 자유롭게 선택한다. 시퀀스 디자이너와
애니메이션 디자이너의 책임이 깔끔하게 분리된다.

**동일 Phase 중복 수신 차단.**
`CurrentAnimPhase == Message.NewPhase` 면 즉시 return. 메시지 버스 특성상 같은 신호가
여러 경로로 들어올 수 있고, AnimBP 의 노티파이 재발사·블렌드 재시작은 시각적 결함으로
이어진다. 1줄의 가드로 이 클래스의 수신 책임을 idempotent 로 만들었다.

## 4. 결과 / 얻은 것

- 시퀀서 Pause 와 AnimPhase 전환이 같은 프레임에 발생 — 캐릭터 포즈 튐 해소.
- Director 는 캐릭터를 모름. 새 캐릭터를 시퀀스에 추가해도 Director 코드 0줄 수정.
- `FilterTag` 만으로 한 월드에서 여러 시퀀스가 동시에 독립 진행 가능.
- 수신 측이 `IKausAnimPhaseHandler` 인터페이스만 구현하면 — AnimBP/액터 어느 쪽이든 — 이
  시스템에 합류 가능. 새 캐릭터 추가가 인터페이스 한 함수 구현만으로 끝남.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `Sequence/KausSequenceDirector.h/.cpp` | 시퀀스 재생, 단계 전환, Phase 방송 |
| `Sequence/KausSequenceAnimSyncComponent.h/.cpp` | 메시지 수신 → 핸들러 탐색·호출 |
| `Sequence/KausSequenceMessages.h` | Resume/Restart/Stop 메시지 페이로드 |
| `Animation/KausAnimMessages.h` | `FKausAnimPhaseChangedMessage` 페이로드 |
| `Animation/KausAnimInstance.h/.cpp` | 수신 측 Phase 플래그와 Transition Rule |
| `Animation/IKausAnimPhaseHandler.h` | 인터페이스 정의 (수신 책임) |
