# 3계층 시간 시스템 — 엔진 생명주기와 분리된 게임 시간 설계

## 1. 문제 / 설계 목표

내러티브 어드벤처 게임에서 시간은 자원이다. 날짜가 바뀌고, 하루는 여러 사이클(아침·오후·밤)
로 나뉘며, 각 사이클에서 플레이어가 할 수 있는 행동은 예산으로 제한된다.

한 시스템이 다 떠안으면 다음 문제가 생긴다:

- "현재 날짜" 와 "행동 가능 여부" 가 같은 객체에 묶이면 UI/이벤트/AI 가 동시에 의존해 결합이 커진다.
- 실시간 타이머로 시간을 흘리면 플레이어가 가만히 있어도 자원이 줄어 게임이 강제 진행된다.
- 시간 변경 이벤트가 한 프레임에 자기 자신을 재귀 호출하면 무한 루프.

설계 목표:

- **책임 분리**: 메타 정의(Calendar) / 좌표 진행(DayCycle) / 예산 회계(GameTime) 를 분리.
- **행동 주도**: 플레이어가 행동(어빌리티 발동)을 할 때만 시간이 흐른다.
- **재진입 안전**: 진행 신호가 다른 시스템의 추가 진행을 깨워도 무한 루프 없이 처리.
- **배치 점프 지원**: "5일 후로 이동" 같은 다단계 점프를 같은 API 로 처리.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/GameFeatures/Calendar/KausCalendarSubsystem.h/.cpp` — 메타 정의
- `Source/Kaus/GameFeatures/GameTime/KausDayCycleSubsystem.h/.cpp` — 좌표 진행
- `Source/Kaus/GameFeatures/GameTime/KausGameTimeComponent.h/.cpp` — 예산 회계
- `Source/Kaus/GameFeatures/GameTime/KausGameTimeMessageBroadcastSystem.h` — 메시지 어댑터

```
[Calendar]       날짜·메타·휴일       ←─ GetCalendarSubsystem (위임 조회)
     │                                          │
     ▼                                          │
[DayCycle]      현재 (Date, Cycle) 좌표         │
     │ OnCycleChanged                           │
     ▼                                          │
[GameTime]      Cycle 진입 시 Budget 초기화     │
     │ TrySpend / 자동 EndCycle                  │
     ▼                                          │
[PlayerAction] 어빌리티가 비용을 차감          │
                                                │
[TimeMessage]   OnCycleChanged → Event.Time.*  ─┘
                (GameplayMessageSubsystem 어댑터)
```

### 2.1 단일 step 진행 — `AdvanceOneStep`

좌표(Date, CycleTag) 를 1단계 진행한다. Definition 이 "다음 사이클" 과 "Date wrap 여부" 를
계산하고, 새 Date 가 Calendar 범위 밖이면 진행을 거부한다.

```cpp
bool UKausDayCycleSubsystem::AdvanceOneStep(FKausDayCyclePoint& OutOldPoint, bool& OutbDateBoundary)
{
    OutOldPoint = Current;
    OutbDateBoundary = false;

    if (!Definition) return false;

    bool bWrappedDate = false;
    const FGameplayTag NextTag = Definition->NextCycle(Current.CycleTag, bWrappedDate);
    if (!NextTag.IsValid()) return false;

    FKausGameDate NextDate = Current.Date;
    if (bWrappedDate)
    {
        // 다음 Date 계산
        UKausCalendarSubsystem* Calendar = GetCalendarSubsystem();
        if (!Calendar) return false;

        UKausCalendarSystem* CalSys = Calendar->GetCalendarSystem();
        if (!CalSys) return false;

        NextDate = CalSys->AddDays(Current.Date, 1);

        // 새 Date가 Calendar 범위 밖이면 진행 거부.
        if (!Calendar->IsDateInRange(NextDate))
        {
            UE_LOG(LogKausDayCycle, Verbose, TEXT("[DayCycle] AdvanceOneStep: next Date %s out of Calendar range"), *NextDate.ToString());
            return false;
        }
    }

    Current.Date = NextDate;
    Current.CycleTag = NextTag;
    OutbDateBoundary = bWrappedDate;
    return true;
}
```

### 2.2 사이클 진입 처리 + 무한 루프 가드 — `HandleCycleChanged`

`DayCycleSubsystem.OnCycleChanged` 의 콜백. Cycle 진입 시 예산을 재초기화한 후 종료 정책을
평가한다. **단, 이미 `AdvanceCycle` 사슬 안에서 호출된 경우(`bIsAdvancing=true`) 평가를 건너뛴다.**

```cpp
void UKausGameTimeComponent::HandleCycleChanged(
    const FKausDayCyclePoint& NewPoint,
    const FKausDayCyclePoint& PreviousPoint)
{
    EnterCycle(NewPoint.CycleTag);

    // 진입 후 정책 평가 — Budget=0인 Cycle을 자동으로 통과시키기 위해.
    // bIsAdvancing이 true면 이미 AdvanceCycle 사슬 안 — 무한 루프 방지를 위해 평가 생략.
    if (!bIsAdvancing)
    {
        EvaluateEndPolicy();
    }
}
```

### 2.3 진행 요청에 가드를 두르는 단일 진입점 — `RequestAdvanceCycle`

`EvaluateEndPolicy`, `TryManualEndCycle`, `ForceAdvanceCycle` 모두 이 함수를 통해 진행한다.
`TGuardValue` 가 스코프 동안 `bIsAdvancing` 을 true 로 잡아 콜백 사슬을 차단한다.

```cpp
bool UKausGameTimeComponent::RequestAdvanceCycle()
{
    UKausDayCycleSubsystem* DayCycle = GetDayCycleSubsystem();
    if (!DayCycle) return false;

    // bIsAdvancing 가드: AdvanceCycle → OnCycleChanged → HandleCycleChanged 도미노 안에서
    // EvaluateEndPolicy가 다시 RequestAdvanceCycle을 호출하는 무한 루프를 차단.
    TGuardValue<bool> Guard(bIsAdvancing, true);
    DayCycle->AdvanceCycle();
    return true;
}
```

### 2.4 배치 점프 — `AdvanceBy(Days, Cycles, bBroadcastEachStep)`

다단계 진행을 step 별 신호(EventScheduler 가 각 중간 상태를 평가) 또는 배치 신호(시작↔최종만)
중 하나로 선택해 발사한다.

```cpp
// AdvanceBy 안 — 반복 루프의 핵심 부분 (실제 코드 발췌)
if (!AdvanceOneStep(StepOldPoint, bStepDateBoundary))
{
    // 진행 실패 — 여기서 중단.
    UE_LOG(LogKausDayCycle, Warning, TEXT("[DayCycle] AdvanceBy: aborted at step %lld of %lld"), i, TotalSteps);
    break;
}

if (bBroadcastEachStep)
{
    BroadcastCycleChanged(StepOldPoint);
    if (bStepDateBoundary)
    {
        BroadcastDateChanged(StepOldPoint.Date);
        LastBroadcastedDate = Current.Date;
    }
}

// batch 모드: 시작점 ↔ 최종점 간 단일 발행.
if (!bBroadcastEachStep)
{
    BroadcastCycleChanged(InitialPoint);
    if (Current.Date != InitialPoint.Date)
    {
        BroadcastDateChanged(InitialPoint.Date);
    }
}
```

### 2.5 Calendar 캐시 — `TWeakObjectPtr` 로 매 step 조회 비용 절감

`AdvanceOneStep` 은 `GetCalendarSubsystem` 을 매번 호출한다. 매 step `GetGameInstance()->GetSubsystem<>()`
을 부르면 비용이 누적된다.

```cpp
// 헤더에 선언된 필드
mutable TWeakObjectPtr<UKausCalendarSubsystem> CachedCalendar;

// cpp 의 GetCalendarSubsystem 구현 (발췌)
if (CachedCalendar.IsValid())
{
    return CachedCalendar.Get();
}
UGameInstance* GI = GetGameInstance();
// ... lookup 후 CachedCalendar 채움
```

`mutable` 로 const 메서드에서 lazy fill 가능, `TWeakObjectPtr` 로 Calendar 가 소멸돼도 dangling
이 되지 않는다.

## 3. 핵심 설계 결정

**실시간 타이머 없이 행동 기반으로 시간을 흘린 이유.**
플레이어가 가만히 있어도 자원이 줄면 게임은 강제 진행이 된다. 본 시스템은 어빌리티가
`TrySpend` 를 부르는 그 시점에만 예산이 감소하고, 예산이 0이 되어야 다음 사이클로 넘어간다.
플레이어가 화면 앞을 떠나도 게임이 멈춰 있다. 시각 연출을 위한 시계는 별도의
`DisplayClock` 시스템이 책임진다.

**`bIsAdvancing` + `TGuardValue` 가드로 무한 루프를 차단.**
진행 → `OnCycleChanged` → `HandleCycleChanged` → `EnterCycle` → `EvaluateEndPolicy` → (예산
0이면) `RequestAdvanceCycle` → 진행 → ... 의 사슬이 자기 자신을 재귀 호출할 수 있다.
스코프 가드는 RAII 로 진입 시 켜지고 스코프를 떠나면 자동 해제되므로, 예외 안전한 1줄 코드로
재진입을 막는다.

**`bBroadcastEachStep` 으로 step 평가와 배치 점프를 같은 API 로 지원한 이유.**
EventScheduler 는 모든 중간 상태에서 자기 규칙을 평가해야 한다("Day 7 점심에 사진 요청 이벤트
트리거"). 시네마틱은 "3일 후로 점프" 같은 배치 진행이 필요하다. 두 시나리오를 같은
`AdvanceBy` 로 지원하기 위해 boolean 옵션 하나로 발사 정책을 전환했다. 기본값은 step 별 발사
— 안전한 쪽을 default 로.

**Calendar 를 `TWeakObjectPtr` 로 캐싱한 이유.**
`AdvanceBy` 가 N step 을 돌 때 N번 `GetGameInstance()->GetSubsystem<>()` 을 호출하면
누적 비용이 커진다. 강참조로 들고 있으면 Calendar 소멸 시 dangling pointer 위험. `TWeakObjectPtr`
는 자동으로 nullptr 화되므로 안전하면서, lazy fill 시점에 const 컨텍스트에서도 캐싱이 가능하다
(`mutable` 키워드).

## 4. 결과 / 얻은 것

- 각 계층의 책임이 한 클래스에 응집 → 변경 영향 면적이 작음.
- 시간 진행의 핫스팟에서 무한 루프가 단일 가드로 차단됨.
- 같은 `AdvanceBy` API 가 step 별 처리와 배치 점프 두 시나리오를 모두 커버.
- 매 step 의 Calendar 조회 비용이 lookup 1회 + 캐시 히트 N-1회로 감소.
- `Event.Time.*` 메시지 어댑터로 노드·UI·시네마틱이 같은 신호를 구독해 같은 사이클을 본다.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `Calendar/KausCalendarSubsystem.h/.cpp` | 날짜 메타·휴일·범위 조회 |
| `GameTime/KausDayCycleSubsystem.h/.cpp` | 현재 좌표·진행·신호 |
| `GameTime/KausGameTimeComponent.h/.cpp` | 사이클별 예산·종료 정책 |
| `GameTime/KausGameTimeMessageBroadcastSystem.h` | `Event.Time.*` 메시지 어댑터 |
| `Docs/KAUS_TIME_GUIDE.md` / `KAUS_TIME_REFERENCE.md` | 영문 상세 레퍼런스 |
| `Docs/CALENDAR_SYSTEM.md` | 시간축 4계층 한국어 통합 개요 |
