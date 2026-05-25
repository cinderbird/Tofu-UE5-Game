# 내러티브 상태 단일 진리원 — NarrativeStateSubsystem

## 1. 문제 / 설계 목표

내러티브 어드벤처 게임은 게임 진행 중 수백 개의 "사실" 을 기억해야 한다.
"Day 3 오후에 도서관을 선택했다", "거울을 12번 봤다", "사진 요청 이벤트가 발동됐다" 같은
사실들이 다음 장면의 조건, UI, 대화 선택지에 영향을 준다.

각 시스템이 자기 상태를 직접 들고 있으면 다음 문제가 생긴다:

- Node 시스템, 어빌리티, 이벤트 스케줄러가 서로 다른 곳에 상태를 저장하면 SaveGame 직렬화가
  여러 곳에 분산되어 일관성을 보장하기 어렵다.
- "이미 발생한 일이면 다시 발동하지 않는다" 같은 조건 평가 시 어느 시스템을 조회할지 규약이 없다.
- 계층 태그 조회("Day 3 관련 사건이 하나라도 있으면") 가 scatter된 컨테이너에서는 불가능하다.

설계 목표:

- **단일 진리원**: 스토리 사실(flag)과 누적 횟수(counter)를 한 `GameInstanceSubsystem` 에 집결.
- **no-op 브로드캐스트 없음**: 변경이 실제로 일어난 경우에만 델리게이트 발사.
- **계층 태그 지원**: 정확 일치(`HasFlag`) 와 부모 태그 포함 일치(`HasFlagMatching`) 를 모두 제공.
- **메모리 절약**: 카운터 값이 0이면 맵에서 자동 제거.
- **게임 스레드 보장**: 모든 mutation API 에 `check(IsInGameThread())` 삽입.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/GameFeatures/Narrative/KausNarrativeStateSubsystem.h` — API 선언 + 델리게이트
- `Source/Kaus/GameFeatures/Narrative/KausNarrativeStateSubsystem.cpp` — 구현

```
[NodeAction / Ability / EventScheduler]
     │ SetFlag / IncrementCounter / ClearMatching
     ▼
[NarrativeStateSubsystem]
     ├─ Flags: FGameplayTagContainer      binary 사실
     └─ Counters: TMap<Tag, int32>        누적 횟수
     │
     ▼
[UI / Reaction / Condition 평가]
     HasFlag / HasFlagMatching / GetCounter / GetAllFlags
```

내부 저장 타입:

```cpp
UPROPERTY(Transient)
FGameplayTagContainer Flags;

UPROPERTY(Transient)
TMap<FGameplayTag, int32> Counters;
```

`Transient` 로 선언해 에디터 직렬화에서 제외하고, SaveGame은 `CaptureSaveData` / `RestoreFromSaveData`
API로 명시적으로 처리한다.

### 2.1 플래그 쓰기 — `SetFlag` (no-op 가드)

```cpp
bool UKausNarrativeStateSubsystem::SetFlag(const FGameplayTag& Tag)
{
    check(IsInGameThread());
    if (!Tag.IsValid()) return false;
    if (Flags.HasTagExact(Tag)) return false;  // 이미 있음 — no-op

    Flags.AddTag(Tag);
    OnFlagSet.Broadcast(Tag);
    return true;
}
```

`HasTagExact` 로 정확 일치를 확인한다. `HasTag` (부모 포함 일치) 를 쓰면 자식 태그가 있는데도
부모 태그 Set 이 no-op 처리되어 의도치 않은 동작이 생긴다.

### 2.2 계층 조회 — `HasFlagMatching`

```cpp
bool UKausNarrativeStateSubsystem::HasFlagMatching(const FGameplayTag& Tag) const
{
    if (!Tag.IsValid()) return false;
    return Flags.HasTag(Tag);  // PartialMatch — 자식 포함
}
```

`HasFlag` (정확 일치) 와 `HasFlagMatching` (계층 일치) 두 함수를 나란히 제공한다.
`HasFlagMatching(Story.Day3)` 는 `Story.Day3.ChoseLibrary` 처럼 Day3 하위의 어떤 사실이든
있으면 `true` 를 반환한다.

### 2.3 카운터 — 0이면 자동 제거 (`IncrementCounter`)

```cpp
int32 UKausNarrativeStateSubsystem::IncrementCounter(const FGameplayTag& Tag, int32 Delta)
{
    check(IsInGameThread());
    if (!Tag.IsValid()) return 0;

    int32& Value = Counters.FindOrAdd(Tag, 0);
    const int32 OldValue = Value;
    Value += Delta;

    if (Value == 0)
    {
        // 0으로 돌아왔으면 맵에서 제거 (메모리 절약).
        Counters.Remove(Tag);
    }

    if (OldValue != Value)
    {
        OnCounterChanged.Broadcast(Tag, Value);
    }

    return Value;
}
```

`FindOrAdd` 로 한 번의 맵 접근으로 삽입/수정을 처리하고, 결과가 0이면 키를 제거해
0짜리 항목이 맵에 누적되지 않는다. 변경이 없으면(Delta=0) 브로드캐스트도 없다.

### 2.4 배치 제거 — `ClearMatching`

```cpp
void UKausNarrativeStateSubsystem::ClearMatching(const FGameplayTag& Prefix)
{
    check(IsInGameThread());
    if (!Prefix.IsValid()) return;

    // 순회 중 삭제를 피하기 위해 먼저 수집 후 제거.
    TArray<FGameplayTag> FlagsToRemove;
    for (const FGameplayTag& Existing : Flags)
    {
        if (Existing.MatchesTag(Prefix))
            FlagsToRemove.Add(Existing);
    }
    for (const FGameplayTag& Tag : FlagsToRemove)
    {
        Flags.RemoveTag(Tag);
        OnFlagCleared.Broadcast(Tag);
    }

    TArray<FGameplayTag> CountersToRemove;
    for (const TPair<FGameplayTag, int32>& Pair : Counters)
    {
        if (Pair.Key.MatchesTag(Prefix))
            CountersToRemove.Add(Pair.Key);
    }
    for (const FGameplayTag& Tag : CountersToRemove)
    {
        Counters.Remove(Tag);
        OnCounterChanged.Broadcast(Tag, 0);
    }
}
```

`MatchesTag(Prefix)` 는 `Prefix` 가 `Existing` 의 부모거나 같으면 true — 즉 "Prefix로 시작하는
모든 태그" 를 캐치한다. 순회 도중 컨테이너를 수정하는 것을 피하기 위해 먼저 배열에 모은 후
일괄 제거한다.

## 3. 핵심 설계 결정

**`FGameplayTagContainer` + `TMap` 을 직접 보관하고 래퍼 레이어를 두지 않은 이유.**
GAS 에서 이미 `FGameplayTagContainer` 는 직렬화·네트워크·에디터 지원이 완성된 컨테이너다.
여기에 별도 Set/Map 을 추가하면 두 개의 진리원이 생긴다. `Transient UPROPERTY` 로 선언하면
에디터 직렬화는 차단하면서 UE GC 추적은 유지된다.

**no-op 시 브로드캐스트를 하지 않는 이유.**
같은 플래그를 두 번 Set 해도 게임 상태가 바뀌지 않는다. 그런데 브로드캐스트가 발사되면
EventScheduler, UI, Node Reaction 이 불필요하게 깨어난다. API 는 항상 "실제로 바뀌었으면
true" 를 반환하고 그 조건에서만 신호를 보낸다. 호출자는 반환값으로 변경 여부를 알 수 있다.

**0 카운터를 맵에서 제거하는 이유.**
스토리 진행 중 카운터 수가 수십~수백으로 늘어날 수 있다. `HasCounter` 를 구현할 때
"0인 항목이 있는 것" 과 "항목이 없는 것" 이 같은 의미여야 하므로, 0이 되면 즉시 제거해
이 두 상태를 통일한다. SaveGame 시에도 0짜리 항목을 저장하지 않아 저장 크기가 줄어든다.

**`HasFlag` (정확) 와 `HasFlagMatching` (계층) 을 분리한 이유.**
정확 일치는 "이 이벤트가 발동됐는가" 처럼 구체적 사실을 묻는다. 계층 일치는 "이 날에
무언가 일이 있었는가" 처럼 카테고리 단위의 조건을 묻는다. 하나의 함수로 두 의미를 모두
수용하면 호출자가 태그 설계 의도를 추론해야 하므로 명시적으로 분리했다.

## 4. 결과 / 얻은 것

- 스토리 사실과 누적 횟수가 한 서브시스템에 집결 — SaveGame 직렬화 대상이 한 곳.
- no-op 호출에서 브로드캐스트 없음 → EventScheduler / UI 가 불필요하게 깨어나지 않음.
- 계층 태그 일치(`HasFlagMatching`)로 "Day 3 관련 사실이 하나라도 있으면" 같은
  카테고리 단위 조건 평가가 코드 없이 가능.
- 0 카운터 자동 제거로 게임 진행 중 맵 크기가 최소한으로 유지됨.
- 10개 자동화 테스트(Flag 기본 동작, 신호 발사, HasFlagMatching, Counter 증가/감소/0 제거,
  ClearMatching, ClearAll)가 핵심 정책을 커버.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `Narrative/KausNarrativeStateSubsystem.h` | API 선언 + 3개 델리게이트 |
| `Narrative/KausNarrativeStateSubsystem.cpp` | 구현 — no-op 가드, 0 제거, MatchesTag 순회 |
| `Narrative/Tests/KausNarrativeStateSubsystemTests.cpp` | 10개 단위 테스트 |
| `Narrative/Tests/KausNarrativeStateTestListeners.h` | 신호 카운팅 리스너 헬퍼 |
