# GAS × 게임 시간 비용 통합 — PlayerActionAbility

## 1. 문제 / 설계 목표

GAS(GameplayAbility System) 는 원래 전투 게임을 위해 설계되었다. 마나·스태미나·쿨다운을
비용(Cost)으로 처리하지만, 내러티브 게임에서 자원은 **게임 시간 토큰**이다. 플레이어가
어떤 행동을 하면 그 행동이 그 날의 사이클 예산을 소비한다.

기존 GAS Cost 체계를 그대로 두면 다음 문제가 생긴다:

- GAS의 `GameplayEffect` 기반 Cost는 `AttributeSet` 의 수치를 직접 차감한다. 시간 예산은
  다른 서브시스템(`KausGameTimeComponent`)이 들고 있어 이 경로를 쓸 수 없다.
- `FGameplayEventData.EventMagnitude` 의 기본값이 `0.0f` 이므로 **"비용 0" 을 명시하는 것**과
  **"비용 미지정"** 을 구분할 수 없다.
- 행동의 종류(탐색·대화·조사)에 따라 비용이 다를 수 있고, Interaction 레이어에서 개별 오브젝트가
  비용을 재정의할 수 있어야 한다.

설계 목표:

- **GAS 진입점 보존**: 기존 AbilitySystem 파이프라인(`ActivateAbility` 흐름)을 그대로 쓴다.
- **3단계 우선순위 비용 결정**: Override 태그 → 모드별 맵 → 기본값 순서로 결정.
- **비용 0 명시 가능**: `Action.Cost.Override` 태그를 센티널로 두어 `Magnitude=0` 도
  "무료 행동" 으로 명시적으로 표현한다.
- **KausGameTimeComponent 탐색 견고성**: PlayerState, Avatar Pawn, Pawn의 PlayerState 세 경로를
  순서대로 시도해 어떤 아키텍처에서도 동작한다.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/AbilitySystem/Abilities/KausPlayerActionAbility.h/.cpp` — 베이스 어빌리티
- `Source/Kaus/GameFeatures/GameTime/KausGameTimeComponent.h/.cpp` — 예산 차감 (`TrySpend`)
- `Source/Kaus/Tags/KausActionTags.h` — `Action.Cost.Override` 태그 정의

```
[Interaction] NodeComponent.GatherInteractionOptions + CustomizeInteractionEventData
     │ FGameplayEventData (InstigatorTags, EventMagnitude)
     ▼
[GAS]  UKausPlayerActionAbility::ActivateAbility
     │
     ├─ CommitAbility (GAS cooldown/standard cost)
     │
     ├─ ResolveTimeCost(EventData)
     │   ├─ 1순위: InstigatorTags.HasTagExact(Action.Cost.Override) → EventMagnitude
     │   ├─ 2순위: TimeCostByMode[CurrentBudgetMode]
     │   └─ 3순위: DefaultTimeCost
     │
     ├─ KausGameTimeComponent::TrySpend(TimeCost)
     │   ├─ Accepted → K2_OnActivate (BP 본 로직)
     │   └─ Rejected → K2_OnRejected + EndAbility(Cancelled)
     └─
```

### 2.1 어빌리티 활성 흐름 — `ActivateAbility`

```cpp
void UKausPlayerActionAbility::ActivateAbility(
    const FGameplayAbilitySpecHandle Handle,
    const FGameplayAbilityActorInfo* ActorInfo,
    const FGameplayAbilityActivationInfo ActivationInfo,
    const FGameplayEventData* TriggerEventData)
{
    if (!CommitAbility(Handle, ActorInfo, ActivationInfo))
    {
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    const int32 TimeCost = ResolveTimeCost(TriggerEventData);

    // 0이면 차감 단계 건너뛰고 바로 본 로직.
    if (TimeCost <= 0)
    {
        K2_OnActivate(TriggerEventData ? *TriggerEventData : FGameplayEventData{});
        return;
    }

    UKausGameTimeComponent* BudgetComp = FindKausGameTimeComponent(ActorInfo);
    if (!BudgetComp)
    {
        K2_OnRejected();
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    const EKausSpendResult SpendResult = BudgetComp->TrySpend(TimeCost);
    if (SpendResult != EKausSpendResult::Accepted)
    {
        K2_OnRejected();
        EndAbility(Handle, ActorInfo, ActivationInfo, true, true);
        return;
    }

    K2_OnActivate(TriggerEventData ? *TriggerEventData : FGameplayEventData{});
}
```

### 2.2 3단계 비용 결정 — `K2_ResolveTimeCost_Implementation`

```cpp
int32 UKausPlayerActionAbility::K2_ResolveTimeCost_Implementation(
    const FGameplayEventData& TriggerEventData) const
{
    // 1순위: Interaction이 명시한 TimeCostOverride.
    // 태그 없으면 Magnitude=0과 "미지정" 을 구분할 수 없으므로 센티널 태그 사용.
    static const FGameplayTag CostOverrideTag = KausActionTags::Action_Cost_Override;

    if (CostOverrideTag.IsValid()
        && TriggerEventData.InstigatorTags.HasTagExact(CostOverrideTag))
    {
        return FMath::Max(0, FMath::RoundToInt(TriggerEventData.EventMagnitude));
    }

    // 2순위: 현재 BudgetMode별 비용 맵.
    if (TimeCostByMode.Num() > 0)
    {
        const FGameplayAbilityActorInfo* ActorInfo = GetCurrentActorInfo();
        if (ActorInfo)
        {
            const UKausGameTimeComponent* BudgetComp = FindKausGameTimeComponent(ActorInfo);
            if (BudgetComp)
            {
                const FGameplayTag CurrentMode = BudgetComp->GetCurrentBudgetMode();
                if (const int32* FoundCost = TimeCostByMode.Find(CurrentMode))
                {
                    return *FoundCost;
                }
            }
        }
    }

    // 3순위: DefaultTimeCost (에디터 기본값).
    return DefaultTimeCost;
}
```

### 2.3 KausGameTimeComponent 탐색 — `FindKausGameTimeComponent`

세 경로를 순서대로 시도한다. 어떤 액터 아키텍처(PlayerState 직속 / Pawn 직속 / PS-only Pawn)
에서도 컴포넌트를 찾도록 폴백을 두었다.

```cpp
UKausGameTimeComponent* UKausPlayerActionAbility::FindKausGameTimeComponent(
    const FGameplayAbilityActorInfo* ActorInfo) const
{
    if (!ActorInfo) return nullptr;

    // 경로 1: PlayerController → PlayerState
    APlayerController* PC = ActorInfo->PlayerController.Get();
    if (PC)
    {
        if (APlayerState* PS = PC->PlayerState)
        {
            if (UKausGameTimeComponent* C = PS->FindComponentByClass<UKausGameTimeComponent>())
                return C;
        }
    }

    // 경로 2: Avatar Pawn 직속
    if (APawn* Pawn = Cast<APawn>(ActorInfo->AvatarActor.Get()))
    {
        if (UKausGameTimeComponent* C = Pawn->FindComponentByClass<UKausGameTimeComponent>())
            return C;

        // 경로 3: Avatar의 PlayerState (PC 없는 Pawn)
        if (APlayerState* PawnPS = Pawn->GetPlayerState())
        {
            if (UKausGameTimeComponent* C = PawnPS->FindComponentByClass<UKausGameTimeComponent>())
                return C;
        }
    }

    return nullptr;
}
```

### 2.4 인스턴싱 정책

```cpp
UKausPlayerActionAbility::UKausPlayerActionAbility()
{
    // 한 플레이어에 한 인스턴스 — 상태를 어빌리티 인스턴스에 보관 가능.
    InstancingPolicy = EGameplayAbilityInstancingPolicy::InstancedPerActor;
    NetExecutionPolicy = EGameplayAbilityNetExecutionPolicy::LocalOnly;
}
```

`InstancedPerActor` 로 선택한 이유: `TimeCostByMode` 맵, `DefaultTimeCost` 같은 설정이
인스턴스에 바인딩되어 있고, 추후 행동 결과 상태(대화 선택 캐싱 등)를 인스턴스가 들고 있어야 할
가능성이 높다. `NonInstanced` 를 쓰면 인스턴스 변수를 사용할 수 없다.

## 3. 핵심 설계 결정

**GAS Cost 체계를 대체하지 않고 `ActivateAbility` 안에서 처리한 이유.**
GAS의 표준 `CostGameplayEffect` 는 `AttributeSet` 에 선언된 수치를 차감한다. 게임 시간 예산은
`KausGameTimeComponent` 가 별도로 관리하며, `AttributeSet` 에 올리면 GAS Replication 복잡도가
불필요하게 증가하고 단일 노드(싱글플레이어) 아키텍처와 맞지 않는다. 표준 Cost를
`nullptr` 로 두고 `ActivateAbility` 첫 단계에서 직접 차감하면 GAS 파이프라인을 그대로
유지하면서 의존 범위가 한 함수 안에 갇힌다.

**`Action.Cost.Override` 태그를 센티널로 쓴 이유.**
`FGameplayEventData.EventMagnitude` 의 기본값은 `0.0f` 다. 태그 없이 Magnitude 만 보면
"Interaction이 비용을 0으로 설정했다" 와 "Interaction이 비용을 아예 지정하지 않았다" 가
같은 값을 가진다. 태그를 함께 채워야 Override 로 인정하는 규약을 두면, Interaction이
의도적으로 무료 행동을 표현할 때 Magnitude=0 + 태그를 명시해야 하므로 실수로
Default 를 덮어쓰는 사고가 방지된다.

**3순위 폴백으로 `DefaultTimeCost` 를 둔 이유.**
대부분의 어빌리티는 단일 고정 비용을 갖는다. `TimeCostByMode` 맵을 채우지 않으면
`DefaultTimeCost` 가 그대로 쓰인다. 새 어빌리티를 만들 때 맵을 채워야 한다는 강제 없이
`DefaultTimeCost=1` 만 설정해도 동작한다.

**`FindKausGameTimeComponent` 가 세 경로를 시도하는 이유.**
`KausGameTimeComponent` 는 초기 설계에서 `PlayerState` 에 붙지만, Pawn에 직접 붙는 테스트
시나리오나 `PlayerController` 없이 `PlayerState` 만 있는 NPC 어빌리티 케이스도 커버해야
한다. 폴백 순서는 "가장 자주 쓰이는 경로 먼저" 원칙 — 정상 케이스 비용을 최소화.

## 4. 결과 / 얻은 것

- GAS 파이프라인을 건드리지 않고 게임 시간 비용 차감이 모든 어빌리티에 통일된 방식으로 주입됨.
- `Action.Cost.Override` 태그 센티널로 Interaction 레이어가 비용 0(무료)을 명시적으로 표현 가능.
- `TimeCostByMode` 맵으로 같은 어빌리티가 모드에 따라 다른 비용을 가질 수 있다 — 하루의
  사이클 종류에 따른 비용 차별화가 에디터 설정만으로 처리됨.
- 세 경로 폴백 탐색으로 컴포넌트 배치 아키텍처 변경이 어빌리티 코드를 건드리지 않음.
- 7개 자동화 테스트가 비용 결정 로직(Override, Default, null, 반올림, 클램프)을 커버.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `AbilitySystem/Abilities/KausPlayerActionAbility.h/.cpp` | GAS × 시간 비용 베이스 어빌리티 |
| `GameFeatures/GameTime/KausGameTimeComponent.h/.cpp` | `TrySpend` — 실제 예산 차감 |
| `Tags/KausActionTags.h` | `Action.Cost.Override` 센티널 태그 |
| `AbilitySystem/Abilities/Tests/KausPlayerActionAbilityTests.cpp` | 7개 단위 테스트 |
