# Kaus — GAS 기반 JRPG 전투 시네마틱 시스템 최종 설계

---

## 1. 개요

### 1.1 목적

스킬 선택(게임플레이) → 스킬 연출(시네마틱) → 결과 적용 → 게임플레이 복귀의
양방향 순환을 GAS를 중심축으로 구현한다.

### 1.2 핵심 원칙

**GAS가 전체 흐름을 주도한다.** `UKausGameplayAbility_SkillBase`가 시네마틱의 시작과 종료를 제어하고, 시퀀서는 카메라 연출과 타이밍 신호만 담당한다.

**시퀀서는 카메라만, AnimBP는 캐릭터만.** 시퀀서 에셋에 캐릭터의 Skeletal Mesh Animation Track을 넣지 않는 것이 기본 정책이다. 예외적으로 밀착 연출(처형, 잡기)에서만 타겟을 시퀀서에 바인딩한다.

**단일 진입점 릴레이.** 모든 시네마틱 세션은 `KausSequenceSubsystem`을 경유한다. AnimBP는 신호의 출처를 알 필요 없이 GameplayTag만 관찰한다.

**데이터 주도 설계.** 스킬별 연출 데이터는 `UKausSkillCinematicDA` Data Asset으로 정의한다. 새 스킬 추가 시 코드 수정 없이 DA + Montage + 시퀀서 에셋만 추가하면 된다.

### 1.3 전체 스킬 실행 흐름

```
┌──────────────────────────────────────────────────────────────┐
│              UKausGameplayAbility_SkillBase                   │
│              (스킬 전용 Ability 부모 클래스)                    │
└──────────────────────────┬───────────────────────────────────┘
                           │
    ① ActivateAbility      │
    코스트 판정 (MP/SP)     │
    타겟 확정               │
                           │
    ② ExecuteCinematic      │
    Request 조립            │
    → SubSystem             │
      .BeginCinematicSession│
    카메라 모드 획득         │
                           │
    시퀀서 Event Track ─────┤
    ↓ (프레임 단위 신호)     │
                           │
    ③ WaitEvent:            │
       CastReady            │
    시전 모션 완료           │
    투사체 스폰 등           │
                           │
    ④ WaitEvent:            │
       Hit (×N)             │
    데미지 GE 적용           │
    피격 리액션 Montage      │
    UI 데미지 팝업           │
    (다단 히트 시 루프)      │
                           │
    ⑤ WaitEvent:            │
       Finish               │
    시퀀서 종료 확인          │
                           │
    ⑥ EndAbility            │
    카메라 반환              │
    Anim.Phase.Gameplay 복원│
    턴 종료 메시지           │
    브로드캐스트             │
└──────────────────────────┘
```

---

## 2. 데이터 구조

### 2.1 열거형

#### EKausTargetBindingMode — 타겟 시퀀서 바인딩 모드

```cpp
UENUM(BlueprintType)
enum class EKausTargetBindingMode : uint8
{
    /** 타겟을 시퀀서에 바인딩하지 않음.
        피격 리액션은 GAS 이벤트 → AnimBP Montage로 처리.
        범위 스킬, 타겟 수 가변 스킬에 적합. */
    Detached,

    /** 첫 번째 타겟(PrimaryTarget)을 시퀀서 Possessable에 바인딩.
        잡기, 처형, 합체기 등 시전자-피격자 밀착 연출에 적합.
        시퀀서 에셋에 TargetPossessableName과 일치하는 Possessable이 필요. */
    PrimaryTargetBound,
};
```

#### EKausHitTimingMode — 히트 타이밍 모드

```cpp
UENUM(BlueprintType)
enum class EKausHitTimingMode : uint8
{
    /** 시퀀서 Event Track의 OnHit 프레임에서 히트 발생.
        근접 공격, 고정 타이밍 스킬에 적합.
        시퀀서에 OnHit Event Key가 있어야 함. */
    SequencerDriven,

    /** 게임플레이 로직(투사체 충돌, 영역 진입 등)이 히트를 발생.
        시퀀서에 OnHit Event Key가 없어도 동작.
        투사체 스킬, 거리 의존 타이밍 스킬에 적합. */
    GameplayDriven,
};
```

#### EKausBattleAnimPhase — 전투 애니메이션 거시 상태

```cpp
UENUM(BlueprintType)
enum class EKausBattleAnimPhase : uint8
{
    /** 턴 진행, 스킬 선택, UI 대기 */
    Gameplay,

    /** 스킬 연출 재생 중 */
    Cinematic,
};
```

### 2.2 FKausSkillCinematicRequest — 시네마틱 요청 페이로드

스킬 Ability가 시네마틱을 요청할 때 전달하는 복합 데이터.

```cpp
USTRUCT(BlueprintType)
struct FKausSkillCinematicRequest
{
    GENERATED_BODY()

    // ─── 시퀀서 에셋 ───

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cinematic")
    TSoftObjectPtr<ULevelSequence> SequenceAsset;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Cinematic")
    TObjectPtr<const UKausSequenceConfigDA> SequenceConfig;

    // ─── 참여 액터 ───

    UPROPERTY(BlueprintReadWrite, Category = "Actors")
    TObjectPtr<AActor> Caster = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "Actors")
    TArray<TObjectPtr<AActor>> Targets;

    // ─── 시퀀서 바인딩 ───

    /** 시퀀서 Possessable 이름 → 실제 액터 매핑.
        BeginCinematicSession에서 바인딩 모드에 따라 자동 조립됨. */
    UPROPERTY(BlueprintReadWrite, Category = "Binding")
    TMap<FName, TObjectPtr<AActor>> PossessableMap;

    // ─── 바인딩/타이밍 모드 ───

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Binding")
    EKausTargetBindingMode TargetBindingMode = EKausTargetBindingMode::Detached;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Timing")
    EKausHitTimingMode HitTimingMode = EKausHitTimingMode::SequencerDriven;

    // ─── 애니메이션 ───

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    TObjectPtr<UAnimMontage> CasterMontage;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    TObjectPtr<UAnimMontage> TargetHitReactMontage;

    /** PrimaryTargetBound 모드에서 타겟 애니메이션도 시퀀서가 제어하는지 여부.
        true이면 AnimBP가 시퀀서 출력을 덮어쓰지 않음. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Animation")
    bool bSequencerControlsTargetAnimation = false;

    // ─── 스킬 식별 ───

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
    FGameplayTag SkillActionTag;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
    FGameplayTag HitEventTag;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Skill")
    int32 ExpectedHitCount = 1;

    // ─── 이펙트 ───

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
    TArray<TSubclassOf<UGameplayEffect>> AdditionalEffectClasses;
};
```

### 2.3 UKausSkillCinematicDA — 스킬 연출 Data Asset

에디터에서 스킬별 연출 데이터를 설정하는 Data Asset.
Ability는 이 DA를 참조하여 `FKausSkillCinematicRequest`를 조립한다.

```cpp
UCLASS(BlueprintType, Const)
class KAUS_API UKausSkillCinematicDA : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    // ─── 스킬 식별 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Skill")
    FGameplayTag SkillActionTag;

    // ─── 시퀀서 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cinematic")
    TSoftObjectPtr<ULevelSequence> SequenceAsset;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cinematic")
    TObjectPtr<UKausSequenceConfigDA> SequenceConfig;

    // ─── 바인딩/타이밍 모드 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Binding")
    EKausTargetBindingMode TargetBindingMode = EKausTargetBindingMode::Detached;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Binding")
    FName CasterPossessableName = "Caster";

    /** PrimaryTargetBound 모드에서 타겟이 바인딩될 Possessable 이름 */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Binding",
        meta = (EditCondition = "TargetBindingMode == EKausTargetBindingMode::PrimaryTargetBound"))
    FName TargetPossessableName = "Target";

    /** PrimaryTargetBound 모드에서 타겟 애니메이션도 시퀀서가 제어하는지 여부 */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Binding",
        meta = (EditCondition = "TargetBindingMode == EKausTargetBindingMode::PrimaryTargetBound"))
    bool bSequencerControlsTargetAnimation = false;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Timing")
    EKausHitTimingMode HitTimingMode = EKausHitTimingMode::SequencerDriven;

    // ─── 애니메이션 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    TObjectPtr<UAnimMontage> CasterMontage;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Animation")
    TObjectPtr<UAnimMontage> TargetHitReactMontage;

    // ─── 이벤트 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Event")
    FGameplayTag HitEventTag;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Event")
    int32 ExpectedHitCount = 1;

    // ─── 이펙트 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effect")
    TSubclassOf<UGameplayEffect> DamageEffectClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Effect")
    TArray<TSubclassOf<UGameplayEffect>> AdditionalEffectClasses;

    // ─── 헬퍼 ───

    /** DA로부터 Request를 조립하는 유틸리티 함수 */
    FKausSkillCinematicRequest BuildRequest(
        AActor* InCaster, const TArray<AActor*>& InTargets) const;
};
```

#### BuildRequest 구현

```cpp
FKausSkillCinematicRequest UKausSkillCinematicDA::BuildRequest(
    AActor* InCaster, const TArray<AActor*>& InTargets) const
{
    FKausSkillCinematicRequest R;

    R.SequenceAsset    = SequenceAsset;
    R.SequenceConfig   = SequenceConfig;
    R.Caster           = InCaster;
    R.Targets.Append(InTargets);

    R.TargetBindingMode              = TargetBindingMode;
    R.HitTimingMode                  = HitTimingMode;
    R.bSequencerControlsTargetAnimation = bSequencerControlsTargetAnimation;

    R.CasterMontage         = CasterMontage;
    R.TargetHitReactMontage = TargetHitReactMontage;
    R.SkillActionTag        = SkillActionTag;
    R.HitEventTag           = HitEventTag;
    R.ExpectedHitCount      = ExpectedHitCount;
    R.DamageEffectClass     = DamageEffectClass;
    R.AdditionalEffectClasses = AdditionalEffectClasses;

    // Possessable 매핑 조립
    R.PossessableMap.Add(CasterPossessableName, InCaster);

    if (TargetBindingMode == EKausTargetBindingMode::PrimaryTargetBound
        && InTargets.Num() > 0)
    {
        R.PossessableMap.Add(TargetPossessableName, InTargets[0]);
    }

    return R;
}
```

---

## 3. AnimBP 2계층 구조

### 3.1 상위 계층 — 거시 상태 (State Machine 전이)

| GameplayTag | AnimBP bool | 용도 |
|---|---|---|
| `Anim.Phase.Gameplay` | `bIsGameplayPhase` | GameplayState 활성 조건 |
| `Anim.Phase.Cinematic` | `bIsCinematicPhase` | CinematicState 활성 조건 |

State Machine은 2개 상태만 가진다. 전투 중 이 루프가 매 턴 양방향으로 반복.

```
                  Tag: Anim.Phase.Cinematic
[GameplayState] ────────────────────────────→ [CinematicState]
  Idle / 전투 대기                                │
  On Entry: OnGameplayStateEntered()              │ On Entry: OnCinematicStateEntered()
                                                  │   → PendingCinematicMontage 재생
       ↑                                          │
       │          Tag: Anim.Phase.Gameplay        │
       └──────────────────────────────────────────┘
```

### 3.2 하위 계층 — 구체 액션 (동적 Montage 선택)

| Tag 패턴 | 용도 |
|---|---|
| `Anim.Action.Melee.Slash` | 시전자: 검 베기 Montage |
| `Anim.Action.Magic.Fireball` | 시전자: 화염구 시전 Montage |
| `Anim.Action.HitReact.Light` | 타겟: 경직 Montage |
| `Anim.Action.HitReact.Heavy` | 타겟: 넉백 Montage |

이 태그들은 State Machine 전이에 사용하지 않는다.
CinematicState 진입 시 Anim Node Function이 ASC를 쿼리하여
대응하는 Montage를 `Montage_Play`한다.

스킬이 수십 개 추가되어도 State Machine과 Enum을 수정할 필요 없이,
DA + Montage + Tag만 추가하면 된다.

### 3.3 KausAnimInstance 확장

```cpp
UCLASS(Config = Game)
class UKausAnimInstance : public UAnimInstance
{
    GENERATED_BODY()

protected:
    // ─── 기존 ───
    UPROPERTY(EditDefaultsOnly, Category = "GameplayTags")
    FGameplayTagBlueprintPropertyMap GameplayTagPropertyMap;

    UPROPERTY(BlueprintReadOnly, Category = "Character State Data")
    float GroundDistance = -1.0f;

    // ─── 상위 계층: Tag → bool (GameplayTagPropertyMap 자동 갱신) ───

    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
    bool bIsGameplayPhase = false;

    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Animation Phase")
    bool bIsCinematicPhase = false;

    // ─── 하위 계층: 동적 Montage 참조 ───

    /** 서브시스템이 시네마틱 세션 시작 시 설정 */
    UPROPERTY(BlueprintReadWrite, Transient, Category = "Kaus|Cinematic")
    TObjectPtr<UAnimMontage> PendingCinematicMontage;

    /** 현재 활성 스킬 액션 태그 */
    UPROPERTY(BlueprintReadOnly, Transient, Category = "Kaus|Cinematic")
    FGameplayTag ActiveSkillActionTag;

    // ─── Anim Node Functions: Transition Rule ───

    UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
    bool CanTransition_GameplayToCinematic() const;

    UFUNCTION(BlueprintPure, meta = (BlueprintThreadSafe))
    bool CanTransition_CinematicToGameplay() const;

    // ─── Anim Node Functions: State 수명주기 ───

    UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
    void OnCinematicStateEntered();

    UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
    void OnCinematicStateExited();

    UFUNCTION(BlueprintCallable, meta = (BlueprintThreadSafe))
    void OnGameplayStateEntered();
};
```

#### 구현

```cpp
bool UKausAnimInstance::CanTransition_GameplayToCinematic() const
{
    return bIsCinematicPhase && !bIsGameplayPhase;
}

bool UKausAnimInstance::CanTransition_CinematicToGameplay() const
{
    return bIsGameplayPhase && !bIsCinematicPhase;
}

void UKausAnimInstance::OnCinematicStateEntered()
{
    if (PendingCinematicMontage)
    {
        Montage_Play(PendingCinematicMontage);
    }
}

void UKausAnimInstance::OnCinematicStateExited()
{
    Montage_Stop(0.25f);
    PendingCinematicMontage = nullptr;
    ActiveSkillActionTag = FGameplayTag::EmptyTag;
}

void UKausAnimInstance::OnGameplayStateEntered()
{
    // Idle 복귀. 추가 로직이 필요하면 여기에.
}
```

---

## 4. KausSequenceSubsystem — 시네마틱 세션 오케스트레이터

### 4.1 인터페이스

```cpp
UCLASS()
class KAUS_API UKausSequenceSubsystem : public UWorldSubsystem
{
    GENERATED_BODY()

public:
    // ─── 1단계 기존 기능 (보존) ───

    void RegisterDirector(UKausSequenceDirector* Director);
    void UnregisterDirector(UKausSequenceDirector* Director);

    UFUNCTION(BlueprintPure)
    UKausSequenceDirector* GetActiveDirector() const;

    UFUNCTION(BlueprintCallable)
    void SetAnimPhaseTag(FGameplayTag NewAnimPhaseTag);

    UFUNCTION(BlueprintCallable)
    void SetAnimPhaseTagForActor(AActor* TargetActor, FGameplayTag NewAnimPhaseTag);

    // ─── 시네마틱 세션 관리 ───

    UFUNCTION(BlueprintCallable, Category = "Kaus|Cinematic")
    void BeginCinematicSession(const FKausSkillCinematicRequest& Request);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Cinematic")
    void AbortCinematicSession();

    UFUNCTION(BlueprintPure, Category = "Kaus|Cinematic")
    bool IsCinematicSessionActive() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Cinematic")
    AActor* GetActiveCaster() const;

    UFUNCTION(BlueprintPure, Category = "Kaus|Cinematic")
    const TArray<AActor*>& GetActiveTargets() const;

    // ─── 배속 제어 (CustomTimeDilation 방식) ───

    UFUNCTION(BlueprintCallable, Category = "Kaus|Cinematic")
    void SetBattleTimeScale(float TimeScale);

    UFUNCTION(BlueprintPure, Category = "Kaus|Cinematic")
    float GetBattleTimeScale() const;

    // ─── 델리게이트 ───

    DECLARE_DYNAMIC_MULTICAST_DELEGATE(FOnCinematicSessionEnded);

    UPROPERTY(BlueprintAssignable, Category = "Kaus|Cinematic")
    FOnCinematicSessionEnded OnCinematicSessionEnded;

private:
    TArray<TWeakObjectPtr<UKausSequenceDirector>> ActiveDirectors;
    TOptional<FKausSkillCinematicRequest> ActiveRequest;
    float CurrentTimeScale = 1.0f;

    void ApplyAnimPhaseTagToActor(AActor* Actor, FGameplayTag NewAnimPhaseTag);
    void PrepareAnimInstanceForCinematic(AActor* Actor,
        UAnimMontage* Montage, FGameplayTag SkillActionTag);
    void ApplyTimeScaleToParticipants(float Scale);
    void RestoreGameplayState();
    void EndCinematicSessionInternal(bool bWasAborted);

    UFUNCTION()
    void HandleSequenceFinished();
};
```

### 4.2 BeginCinematicSession

```cpp
void UKausSequenceSubsystem::BeginCinematicSession(
    const FKausSkillCinematicRequest& Request)
{
    if (ActiveRequest.IsSet())
    {
        UE_LOG(LogKausSequenceSubsystem, Warning,
            TEXT("Cinematic session already active. Ignoring request for [%s]."),
            *Request.SkillActionTag.ToString());
        return;
    }

    ActiveRequest = Request;
    UKausSequenceDirector* Director = GetActiveDirector();
    if (!Director) return;

    // 1. 시퀀서 Setup (동적 바인딩)
    ULevelSequence* Seq = Request.SequenceAsset.LoadSynchronous();
    if (!Seq) return;

    Director->SetupSequenceWithExistingActors(
        Seq, Request.PossessableMap, Request.SequenceConfig);

    // 2. 시전자: 상위 태그(Cinematic) + 하위 태그(SkillAction) 부여
    SetAnimPhaseTagForActor(Request.Caster,
        FGameplayTag::RequestGameplayTag("Anim.Phase.Cinematic"));

    if (UAbilitySystemComponent* ASC =
            UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(Request.Caster))
    {
        ASC->AddLooseGameplayTag(Request.SkillActionTag);
    }

    // 3. AnimInstance에 Montage 참조 전달
    PrepareAnimInstanceForCinematic(
        Request.Caster, Request.CasterMontage, Request.SkillActionTag);

    // 4. 배속 적용
    ApplyTimeScaleToParticipants(CurrentTimeScale);

    // 5. 시퀀서 재생
    Director->GetSequencePlayer()->Play();
}
```

### 4.3 AbortCinematicSession

```cpp
void UKausSequenceSubsystem::AbortCinematicSession()
{
    if (!ActiveRequest.IsSet()) return;

    // 시퀀서 강제 정지
    if (UKausSequenceDirector* Director = GetActiveDirector())
    {
        Director->TeardownSequence();
    }

    // Ability에 Finish 이벤트 강제 전송
    // → Ability가 자연스러운 흐름으로 EndAbility 호출
    // → GAS가 활성 AbilityTask를 자동 정리
    if (ActiveRequest->Caster)
    {
        FGameplayEventData EventData;
        EventData.Instigator = ActiveRequest->Caster;
        UAbilitySystemBlueprintLibrary::SendGameplayEventToActor(
            ActiveRequest->Caster,
            FGameplayTag::RequestGameplayTag("Event.Skill.Finish"),
            EventData);
    }

    EndCinematicSessionInternal(/*bWasAborted=*/ true);
}
```

### 4.4 EndCinematicSessionInternal

```cpp
void UKausSequenceSubsystem::EndCinematicSessionInternal(bool bWasAborted)
{
    if (!ActiveRequest.IsSet()) return;

    RestoreGameplayState();
    ApplyTimeScaleToParticipants(1.0f);

    ActiveRequest.Reset();
    OnCinematicSessionEnded.Broadcast();
}
```

### 4.5 RestoreGameplayState

```cpp
void UKausSequenceSubsystem::RestoreGameplayState()
{
    if (!ActiveRequest.IsSet()) return;

    const FGameplayTag GameplayTag =
        FGameplayTag::RequestGameplayTag("Anim.Phase.Gameplay");
    const FGameplayTag AnimActionParent =
        FGameplayTag::RequestGameplayTag("Anim.Action");

    // 시전자: Anim.Phase → Gameplay, Anim.Action.* 제거
    SetAnimPhaseTagForActor(ActiveRequest->Caster, GameplayTag);
    if (UAbilitySystemComponent* ASC =
            UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(
                ActiveRequest->Caster))
    {
        FGameplayTagContainer Owned;
        ASC->GetOwnedGameplayTags(Owned);
        for (const FGameplayTag& Tag : Owned)
        {
            if (Tag.MatchesTag(AnimActionParent))
                ASC->RemoveLooseGameplayTag(Tag);
        }
    }

    // 타겟: Anim.Phase → Gameplay (바인딩 모드와 무관하게)
    for (AActor* Target : ActiveRequest->Targets)
    {
        SetAnimPhaseTagForActor(Target, GameplayTag);
    }
}
```

### 4.6 배속 제어 (CustomTimeDilation 방식)

Global Time Dilation은 UI, 입력 등 의도하지 않은 시스템에 부작용을 준다.
CustomTimeDilation + SetPlayRate 조합으로 시네마틱 참여 액터만 배속한다.

```cpp
void UKausSequenceSubsystem::SetBattleTimeScale(float TimeScale)
{
    CurrentTimeScale = FMath::Clamp(TimeScale, 0.1f, 4.0f);

    if (ActiveRequest.IsSet())
    {
        ApplyTimeScaleToParticipants(CurrentTimeScale);
    }
}

void UKausSequenceSubsystem::ApplyTimeScaleToParticipants(float Scale)
{
    // 시퀀서 재생 속도
    if (UKausSequenceDirector* Director = GetActiveDirector())
    {
        if (ULevelSequencePlayer* Player = Director->GetSequencePlayer())
        {
            Player->SetPlayRate(Scale);
        }
    }

    if (!ActiveRequest.IsSet()) return;

    // 시전자 CustomTimeDilation
    if (ActiveRequest->Caster)
    {
        ActiveRequest->Caster->CustomTimeDilation = Scale;
    }

    // 타겟 CustomTimeDilation
    for (AActor* Target : ActiveRequest->Targets)
    {
        if (Target)
        {
            Target->CustomTimeDilation = Scale;
        }
    }
}
```

CustomTimeDilation은 해당 액터의 Tick, AnimInstance::NativeUpdateAnimation의
DeltaTime에 자동 반영된다. SetPlayRate가 시퀀서 속도를 맞추고,
CustomTimeDilation이 Montage 속도를 맞추므로 두 시간축이 동기화된다.

시네마틱 세션 종료 시 `ApplyTimeScaleToParticipants(1.0f)`로 모든 액터의
CustomTimeDilation을 복원한다.

---

## 5. UKausGameplayAbility_SkillBase — 스킬 Ability 부모 클래스

### 5.1 클래스 정의

```cpp
UCLASS(Abstract)
class KAUS_API UKausGameplayAbility_SkillBase : public UKausGameplayAbility
{
    GENERATED_BODY()

public:
    UKausGameplayAbility_SkillBase();

protected:
    // ─── 에디터 설정 ───

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Skill")
    TObjectPtr<UKausSkillCinematicDA> CinematicData;

    // ─── Ability 수명주기 오버라이드 ───

    virtual void ActivateAbility(...) override;
    virtual void EndAbility(...) override;

    // ─── 표준 Task Flow (BlueprintNativeEvent) ───

    /** Step 1: 타겟 확정 */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Skill")
    void ResolveTargets(const FGameplayEventData& EventData,
                        TArray<AActor*>& OutTargets);

    /** Step 2: 시네마틱 요청 조립 및 실행 */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Skill")
    void ExecuteCinematic(const TArray<AActor*>& Targets);

    /** Step 3: 시전 완료 시 호출 (투사체 스폰 등) */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Skill")
    void OnCastReady();

    /** Step 4: 히트 시 호출 (데미지 + 리액션) */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Skill")
    void OnSkillHit(int32 HitIndex, AActor* HitTarget);

    /** Step 5: 시퀀서 종료 시 호출 → EndAbility */
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Skill")
    void OnSequenceFinished();

private:
    UPROPERTY(Transient)
    TArray<TObjectPtr<AActor>> ResolvedTargets;

    int32 CurrentHitCount = 0;

    // WaitGameplayEvent 콜백 핸들러 (내부)
    UFUNCTION()
    void HandleCastReady(FGameplayEventData Payload);

    UFUNCTION()
    void HandleHitEvent(FGameplayEventData Payload);

    UFUNCTION()
    void HandleFinishEvent(FGameplayEventData Payload);
};
```

### 5.2 ActivateAbility 기본 구현

```cpp
void UKausGameplayAbility_SkillBase::ActivateAbility(...)
{
    Super::ActivateAbility(Handle, ActorInfo, ActivationInfo, TriggerEventData);

    if (!CinematicData)
    {
        CancelAbility(Handle, ActorInfo, ActivationInfo, true);
        return;
    }

    CurrentHitCount = 0;

    // Step 1: 타겟 확정
    FGameplayEventData EventData;
    if (TriggerEventData) EventData = *TriggerEventData;
    ResolveTargets(EventData, ResolvedTargets);

    // Step 2: 시네마틱 실행
    ExecuteCinematic(ResolvedTargets);

    // Step 3: CastReady 대기
    auto* WaitCast = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
        this, FGameplayTag::RequestGameplayTag("Event.Skill.CastReady"));
    WaitCast->EventReceived.AddDynamic(this, &ThisClass::HandleCastReady);
    WaitCast->ReadyForActivation();

    // Step 4: Hit 대기 (반복 수신)
    auto* WaitHit = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
        this, CinematicData->HitEventTag);
    WaitHit->EventReceived.AddDynamic(this, &ThisClass::HandleHitEvent);
    WaitHit->ReadyForActivation();

    // Step 5: Finish 대기
    auto* WaitFinish = UAbilityTask_WaitGameplayEvent::WaitGameplayEvent(
        this, FGameplayTag::RequestGameplayTag("Event.Skill.Finish"));
    WaitFinish->EventReceived.AddDynamic(this, &ThisClass::HandleFinishEvent);
    WaitFinish->ReadyForActivation();

    // 카메라 모드 획득
    SetCameraMode(/* 스킬 시네마틱 카메라 모드 */);
}
```

### 5.3 이벤트 핸들러

```cpp
void UKausGameplayAbility_SkillBase::HandleCastReady(FGameplayEventData Payload)
{
    if (!IsActive()) return;
    OnCastReady();
}

void UKausGameplayAbility_SkillBase::HandleHitEvent(FGameplayEventData Payload)
{
    if (!IsActive()) return;

    // 예상 히트 횟수 초과 방어
    if (CinematicData->ExpectedHitCount > 0
        && CurrentHitCount >= CinematicData->ExpectedHitCount)
    {
        return;
    }

    int32 HitIndex = FMath::RoundToInt(Payload.EventMagnitude);

    // 타겟 결정
    AActor* HitTarget = nullptr;
    if (Payload.Target.IsValid())
    {
        HitTarget = const_cast<AActor*>(Payload.Target.Get());
    }
    else if (ResolvedTargets.IsValidIndex(HitIndex))
    {
        HitTarget = ResolvedTargets[HitIndex];
    }
    else if (ResolvedTargets.Num() > 0)
    {
        HitTarget = ResolvedTargets[0];
    }

    CurrentHitCount++;
    OnSkillHit(HitIndex, HitTarget);
}

void UKausGameplayAbility_SkillBase::HandleFinishEvent(FGameplayEventData Payload)
{
    if (!IsActive()) return;
    OnSequenceFinished();
}
```

### 5.4 OnSkillHit 기본 구현

```cpp
void UKausGameplayAbility_SkillBase::OnSkillHit_Implementation(
    int32 HitIndex, AActor* HitTarget)
{
    if (!HitTarget || !CinematicData) return;

    UAbilitySystemComponent* TargetASC =
        UAbilitySystemGlobals::GetAbilitySystemComponentFromActor(HitTarget);

    // 데미지 GE 적용
    if (CinematicData->DamageEffectClass && TargetASC)
    {
        FGameplayEffectSpecHandle Spec =
            MakeOutgoingGameplayEffectSpec(CinematicData->DamageEffectClass);
        ApplyGameplayEffectSpecToTarget(
            GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(),
            GetCurrentActivationInfo(), Spec, TargetASC);
    }

    // 추가 GE 적용 (상태이상 등)
    for (auto& EffectClass : CinematicData->AdditionalEffectClasses)
    {
        if (EffectClass && TargetASC)
        {
            FGameplayEffectSpecHandle Spec =
                MakeOutgoingGameplayEffectSpec(EffectClass);
            ApplyGameplayEffectSpecToTarget(
                GetCurrentAbilitySpecHandle(), GetCurrentActorInfo(),
                GetCurrentActivationInfo(), Spec, TargetASC);
        }
    }

    // 타겟 피격 리액션 Montage
    if (CinematicData->TargetHitReactMontage)
    {
        if (USkeletalMeshComponent* Mesh =
                HitTarget->FindComponentByClass<USkeletalMeshComponent>())
        {
            if (UAnimInstance* AnimInst = Mesh->GetAnimInstance())
            {
                AnimInst->Montage_Play(CinematicData->TargetHitReactMontage);
            }
        }
    }

    // UI 데미지 팝업 브로드캐스트
    FKausEventPayload DmgPayload;
    DmgPayload.Instigator = GetAvatarActorFromActorInfo();
    DmgPayload.Target = HitTarget;
    // DmgPayload.Value = 계산된 데미지 값 (GE Spec에서 추출 가능)

    UGameplayMessageSubsystem::Get(this).BroadcastMessage(
        FGameplayTag::RequestGameplayTag("UI.Event.DamagePopup"),
        DmgPayload);
}
```

### 5.5 OnSequenceFinished 기본 구현

```cpp
void UKausGameplayAbility_SkillBase::OnSequenceFinished_Implementation()
{
    // 정상 종료 경로
    K2_EndAbility();
}
```

### 5.6 EndAbility — 게임플레이 복귀 보장

```cpp
void UKausGameplayAbility_SkillBase::EndAbility(...)
{
    ClearCameraMode();

    // 시네마틱 세션 정리 (이미 종료되었으면 무시됨)
    if (UWorld* World = GetWorld())
    {
        if (auto* SeqSS = World->GetSubsystem<UKausSequenceSubsystem>())
        {
            if (SeqSS->IsCinematicSessionActive())
            {
                // AbortCinematicSession은 내부에서 RestoreGameplayState 호출
                SeqSS->AbortCinematicSession();
            }
        }
    }

    // 턴 종료 메시지
    FKausEventPayload TurnEnd;
    TurnEnd.Instigator = GetAvatarActorFromActorInfo();
    UGameplayMessageSubsystem::Get(this).BroadcastMessage(
        FGameplayTag::RequestGameplayTag("Event.Battle.TurnEnd"),
        TurnEnd);

    Super::EndAbility(Handle, ActorInfo, ActivationInfo,
                      bReplicateEndAbility, bWasCancelled);
}
```

### 5.7 GameplayDriven 히트 모드 — 투사체 연동

투사체 스킬에서 OnCastReady 오버라이드 예시:

```cpp
void UGA_Fireball::OnCastReady_Implementation()
{
    // 투사체 스폰
    AKausProjectile* Proj = GetWorld()->SpawnActor<AKausProjectile>(...);

    // 투사체가 충돌 시 히트 이벤트를 Caster에게 전송하도록 설정
    Proj->SetupHitEvent(
        GetAvatarActorFromActorInfo(),
        CinematicData->HitEventTag);

    // 투사체 히트 시 시퀀서 카메라를 히트 연출로 전환
    Proj->OnProjectileHit.AddDynamic(this, &ThisClass::OnProjectileImpact);
}

void UGA_Fireball::OnProjectileImpact(AActor* HitActor)
{
    // 시퀀서 카메라를 히트 리액션 구간으로 전환
    if (auto* SeqSS = GetWorld()->GetSubsystem<UKausSequenceSubsystem>())
    {
        if (auto* Director = SeqSS->GetActiveDirector())
        {
            Director->PlayReactionSection(TEXT("HitImpact"));
        }
    }
}
```

---

## 6. 시퀀서 에셋 규약

### 6.1 Possessable 구성

| Possessable 이름 | 바인딩 대상 | 트랙 내용 |
|---|---|---|
| `Caster` | 시전자 액터 | Transform만 (Animation Track 없음) |
| `CameraRig` | CineCamera | Transform + FOV + Camera Cut |
| `Target` (선택) | PrimaryTargetBound 모드에서만 | Transform (+ 선택적 Animation) |

### 6.2 Event Track 규약

| 이벤트 이름 | HitTimingMode | Director BP 동작 |
|---|---|---|
| `OnCastReady` | 모두 | `SendGameplayEventToActor(Caster, "Event.Skill.CastReady")` |
| `OnHit` | SequencerDriven만 | `SendGameplayEventToActor(Caster, HitEventTag, HitIndex)` |
| `OnFinish` | 모두 | `SendGameplayEventToActor(Caster, "Event.Skill.Finish")` |

GameplayDriven 모드에서는 OnHit Event Key가 시퀀서에 없다.
투사체/게임플레이 코드가 직접 히트 이벤트를 발사한다.

### 6.3 Director Blueprint 구성

```
[Event: OnCastReady]
  → GetWorld → GetSubsystem<KausSequenceSubsystem>
    → GetActiveCaster
      → Send Gameplay Event To Actor
          EventTag: "Event.Skill.CastReady"

[Event: OnHit]
  → GetWorld → GetSubsystem<KausSequenceSubsystem>
    → GetActiveCaster
      → Send Gameplay Event To Actor
          EventTag: (SubSystem에서 ActiveRequest.HitEventTag 조회)
          EventMagnitude: HitIndex (0, 1, 2...)

[Event: OnFinish]
  → GetWorld → GetSubsystem<KausSequenceSubsystem>
    → GetActiveCaster
      → Send Gameplay Event To Actor
          EventTag: "Event.Skill.Finish"
```

---

## 7. 기존 Kaus 아키텍처와의 정합성

| 기존 시스템 | 연결 지점 |
|---|---|
| `KausGamePhaseSubsystem` | Phase.Battle 진입 시 전투 시작, 종료 시 Phase 전환 |
| `KausSequenceDirector` | `SetupSequenceWithExistingActors`로 동적 바인딩, 마커 기반 구간 재생 |
| `KausSequenceSubsystem` | 1단계 Tag 릴레이 보존 + 시네마틱 세션 오케스트레이션 |
| `KausNodeComponent` | 전투 외 월드 인터랙션에서 기존대로 사용 |
| `GameplayMessageSubsystem` | 턴 종료, 데미지 팝업, UI 알림 등 느슨한 이벤트 통신 |
| `KausGameplayAbility` | `SetCameraMode/ClearCameraMode`, `ActivationGroup` 등 기존 인프라 |
| `KausUnitAttributeSet` | 심리 어트리뷰트 (Logic, SelfEsteem 등)에 데미지 GE 적용 |
| `KausAnimInstance` | `GameplayTagPropertyMap` 위에 2계층 구조 확장 |
| `FKausEventPayload` | 히트, 데미지 팝업, 턴 종료 메시지의 페이로드로 재활용 |

---

## 8. 구현 순서 (권장)

### Phase A: 1단계 완성
기존 Tag 파이프라인 + Anim Node Functions 검증.

### Phase B: 전투 시네마틱 인프라
1. 열거형 정의 (`EKausTargetBindingMode`, `EKausHitTimingMode`, `EKausBattleAnimPhase`)
2. `FKausSkillCinematicRequest` 구조체 정의
3. `UKausSkillCinematicDA` Data Asset 정의
4. `KausSequenceSubsystem` 확장 (`BeginCinematicSession`, `AbortCinematicSession`, 배속)
5. `KausAnimInstance` 2계층 구조 확장

### Phase C: 스킬 Ability 프레임워크
6. `UKausGameplayAbility_SkillBase` 구현 (표준 Task Flow)
7. 시퀀서 에셋 규약 확립 + Director BP 템플릿
8. 히트 이벤트 파이프라인 검증 (SequencerDriven 모드)

### Phase D: 첫 번째 스킬 구현 및 검증
9. 테스트 스킬 DA (단타 근접 공격, Detached + SequencerDriven)
10. 시퀀서 에셋 (카메라 + Event Track)
11. 전체 순환 검증: 스킬 선택 → 시네마틱 → 데미지 → 게임플레이 복귀

### Phase E: 확장 모드 검증
12. PrimaryTargetBound 스킬 (처형/잡기)
13. GameplayDriven 스킬 (투사체 마법)
14. 다단 히트 스킬 (연속 검격)
15. 배속 기능 검증 (2x 재생)
