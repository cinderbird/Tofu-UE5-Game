# 핵심 시스템 자동화 테스트 구축 — UE Automation 프레임워크

## 1. 문제 / 설계 목표

시간 시스템·달력·내러티브 상태는 게임의 모든 사이클과 이벤트가 의존하는 기반이다.
이 기반에 버그가 있으면 영향 범위가 너무 넓어 수작업 검증이 불가능하다.

자동화 테스트 없이 리팩토링이나 기능 추가를 하면 다음 문제가 생긴다:

- 달력 날짜 연산(`AddDays`, 주말/공휴일 태그 자동 부착)의 엣지 케이스가 에디터에서 개별
  확인이 필요하다.
- 사이클 전환 → 예산 초기화 → 자동 종료 정책 연쇄가 정상 동작하는지 매번 게임 실행 없이
  알 수 없다.
- 비용 결정 로직의 우선순위(Override → Mode → Default) 가 코드 변경 후 깨지면 런타임에서야 발견된다.

설계 목표:

- **편집기 실행 가능**: 에디터 컨텍스트에서 World 없이 실행되어 빌드·패키징 없이 검증.
- **격리**: 각 테스트가 독립된 `FTestContext` 를 생성하고 사용 후 폐기 — 순서 의존 없음.
- **GameInstanceSubsystem 의존성 해결**: `UGameInstanceSubsystem` 은 `ClassWithin = UGameInstance`
  라 Outer 가 반드시 `UGameInstance` 여야 한다. `Init` 을 호출하지 않은 빈 인스턴스를 Outer로
  사용하는 패턴으로 World/PIE 컨텍스트 충돌 없이 격리된 환경을 만든다.

## 2. 구현 구조

테스트 파일 위치:

```
Source/Kaus/
├─ GameFeatures/Calendar/Tests/
│   ├─ KausGameDateTests.cpp           (4개)
│   ├─ KausCalendarSystemTests.cpp     (8개)
│   └─ KausCalendarSubsystemTests.cpp  (13개)
├─ GameFeatures/GameTime/Tests/
│   ├─ KausDayCycleDefinitionTests.cpp        (6개)
│   ├─ KausDayCycleSubsystemTests.cpp         (15개)
│   ├─ KausPlayerTimeBudgetComponentTests.cpp (16개)
│   ├─ KausDisplayClockSubsystemTests.cpp     (10개)
│   └─ KausTimeMessageBroadcasterTests.cpp    (8개)
├─ GameFeatures/Narrative/Tests/
│   └─ KausNarrativeStateSubsystemTests.cpp   (10개)
└─ AbilitySystem/Abilities/Tests/
    └─ KausPlayerActionAbilityTests.cpp        (7개)
```

총 **97개** 자동화 테스트가 네 시스템의 핵심 정책을 커버한다.

### 2.1 UE Automation 테스트 선언 패턴

```cpp
#include "Misc/AutomationTest.h"

#if WITH_DEV_AUTOMATION_TESTS

IMPLEMENT_SIMPLE_AUTOMATION_TEST(
    FKausGameDateEqualityTest,
    "Kaus.Calendar.GameDate.Equality",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FKausGameDateEqualityTest::RunTest(const FString& Parameters)
{
    const FKausGameDate A(2024, 4, 1);
    const FKausGameDate B(2024, 4, 1);
    const FKausGameDate C(2024, 4, 2);

    TestTrue(TEXT("동일 날짜 == 비교"), A == B);
    TestFalse(TEXT("다른 날짜 == 비교"), A == C);
    return true;
}

#endif // WITH_DEV_AUTOMATION_TESTS
```

`#if WITH_DEV_AUTOMATION_TESTS` 블록 안에 작성해 패키지 빌드에서 코드가 제외된다.
`EditorContext | EngineFilter` 로 에디터 자동화 탭에서 실행 가능하게 등록한다.

### 2.2 GameInstanceSubsystem 격리 패턴 — `FTestContext`

`UGameInstanceSubsystem` 은 `ClassWithin = UGameInstance` 제약이 있어 Outer 없이
`NewObject` 하면 ensure 가 발동한다. `UGameInstance::InitializeStandalone()` 은 WorldContext 를
만들어 PIE 컨텍스트와 충돌한다. 이를 해결하는 공통 패턴:

```cpp
struct FTestContext
{
    UGameInstance* GameInstance = nullptr;
    UKausCalendarSubsystem* Subsystem = nullptr;

    FTestContext()
    {
        // Init 호출 없이 빈 컨테이너로만 사용.
        GameInstance = NewObject<UGameInstance>(GetTransientPackage());
        GameInstance->AddToRoot();

        // GameInstance를 Outer로 — ClassWithin 통과.
        Subsystem = NewObject<UKausCalendarSubsystem>(GameInstance);
        Subsystem->AddToRoot();
    }

    ~FTestContext()
    {
        if (Subsystem) Subsystem->RemoveFromRoot();
        if (GameInstance) GameInstance->RemoveFromRoot();
    }
};
```

`AddToRoot` 로 GC 수집을 막고, 소멸자에서 `RemoveFromRoot` 로 정리한다.
`WorldContext` 를 만들지 않으므로 에디터 PIE 상태와 독립적으로 실행된다.

### 2.3 Abstract 어빌리티 테스트 — 구체 자식 헬퍼

`UKausPlayerActionAbility` 는 `Abstract` 라 직접 인스턴스화할 수 없다. 테스트 전용
Concrete 자식을 별도 헤더에 선언해 사용한다:

```cpp
// KausTestPlayerActionAbility.h (Tests/ 폴더)
UCLASS()
class UKausTestPlayerActionAbility : public UKausPlayerActionAbility
{
    GENERATED_BODY()
    // K2_OnActivate, K2_OnRejected — 구현 없어도 됨 (테스트 대상은 ResolveTimeCost)
};
```

```cpp
// 테스트 헬퍼
static UKausTestPlayerActionAbility* MakeAbility(int32 DefaultCost = 1)
{
    auto* A = NewObject<UKausTestPlayerActionAbility>(GetTransientPackage());
    A->AddToRoot();
    A->DefaultTimeCost = DefaultCost;
    return A;
}

static FGameplayEventData MakeEventDataWithOverride(int32 OverrideCost)
{
    FGameplayEventData D;
    D.EventMagnitude = static_cast<float>(OverrideCost);
    D.InstigatorTags.AddTag(KausActionTags::Action_Cost_Override);
    return D;
}
```

### 2.4 신호 리스너 헬퍼 패턴

신호 발사 여부를 검증하기 위해 `DYNAMIC_MULTICAST_DELEGATE` 에 바인딩하는 리스너 `UObject`
를 각 테스트 모듈에 두었다. 공통 패턴:

```cpp
// KausNarrativeStateTestListeners.h
UCLASS()
class UKausNarrativeFlagListener : public UObject
{
    GENERATED_BODY()
public:
    int32 SetCount = 0;
    int32 ClearCount = 0;

    UFUNCTION() void HandleSet(const FGameplayTag&) { ++SetCount; }
    UFUNCTION() void HandleClear(const FGameplayTag&) { ++ClearCount; }
    void Reset() { SetCount = ClearCount = 0; }
};
```

```cpp
// 테스트 안에서 사용
UKausNarrativeFlagListener* L = NewObject<UKausNarrativeFlagListener>();
L->AddToRoot();
Ctx.State->OnFlagSet.AddDynamic(L, &UKausNarrativeFlagListener::HandleSet);

Ctx.State->SetFlag(T);
TestEqual(TEXT("Set 신호 1회"), L->SetCount, 1);

Ctx.State->SetFlag(T);  // 중복 — 신호 없음
TestEqual(TEXT("중복 Set 신호 미발사"), L->SetCount, 1);
```

### 2.5 실행 방법

에디터:
```
Tools → Session Frontend → Automation → "Kaus" 필터
```

커맨드라인:
```
-ExecCmds="Automation RunTests Kaus"
# 특정 모듈만:
-ExecCmds="Automation RunTests Kaus.Calendar"
-ExecCmds="Automation RunTests Kaus.Narrative.State"
-ExecCmds="Automation RunTests Kaus.AbilitySystem.PlayerAction"
```

## 3. 핵심 설계 결정

**`GameInstance::Init` 을 호출하지 않는 이유.**
`Init` / `InitializeStandalone` 은 `WorldContext` 를 만들어 엔진 내부 전역 상태와 충돌한다.
테스트가 에디터 PIE 상태를 건드리면 다른 테스트나 에디터 세션에 영향을 미칠 수 있다.
빈 `GameInstance` 를 `Outer` 로만 쓰면 `ClassWithin` 검증은 통과하면서 `WorldContext` 충돌이
없다.

**리스너 헬퍼를 `UObject` 로 만든 이유.**
`DYNAMIC_MULTICAST_DELEGATE` 는 `UFUNCTION()` 이 붙은 멤버 함수에만 바인딩된다. 람다를
직접 쓸 수 없다. 작은 `UObject` 리스너를 별도 헤더에 두면 여러 테스트 케이스가 재사용할 수 있고,
리스너 자체의 동작도 명확하게 검증 가능하다.

**테스트를 `WITH_DEV_AUTOMATION_TESTS` 블록에 두는 이유.**
패키지 빌드(`Shipping`, `Test` 구성)에서 테스트 코드가 제외되어 바이너리 크기에 영향을 주지
않는다. 에디터/개발 빌드에서만 컴파일되어 엔진 자동화 시스템에 등록된다.

**신호 리스너로 side-effect 를 검증하는 이유.**
대부분의 API 는 "실제로 변경되었는가" 와 "변경 신호가 발사되었는가" 를 둘 다 검증해야 한다.
반환값만으로는 신호 발사를 확인할 수 없고, 브레이크포인트 없이도 신호 발사 횟수가 카운터에
남아 비교 가능하다.

## 4. 결과 / 얻은 것

- 달력 날짜 연산, 사이클 진행, 예산 관리, 내러티브 상태, 어빌리티 비용 결정의 핵심 정책이
  97개 테스트로 명세화됨.
- 리팩토링 후 에디터에서 `Automation RunTests Kaus` 한 번으로 회귀 확인 가능.
- `FTestContext` 패턴이 표준화되어 새 시스템 테스트 추가 시 동일한 격리 환경을 즉시 사용 가능.
- World 없이 실행되므로 빠른 반복 주기(PIE 시작 없이 수 초 내 전체 실행).

## 관련 파일

| 파일 | 테스트 수 | 검증 대상 |
|------|----------|----------|
| `Calendar/Tests/KausGameDateTests.cpp` | 4 | 날짜 비교·순서·해시 |
| `Calendar/Tests/KausCalendarSystemTests.cpp` | 8 | 날짜 연산·요일 계산 |
| `Calendar/Tests/KausCalendarSubsystemTests.cpp` | 13 | Schedule 초기화·메타 조회·런타임 오버라이드 |
| `GameTime/Tests/KausDayCycleDefinitionTests.cpp` | 6 | 사이클 정의 유효성 |
| `GameTime/Tests/KausDayCycleSubsystemTests.cpp` | 15 | 사이클 진행·Calendar 연동·신호 |
| `GameTime/Tests/KausPlayerTimeBudgetComponentTests.cpp` | 16 | 예산 차감·자동 종료 정책·재진입 가드 |
| `GameTime/Tests/KausDisplayClockSubsystemTests.cpp` | 10 | 표시 시계 동기화 |
| `GameTime/Tests/KausTimeMessageBroadcasterTests.cpp` | 8 | `Event.Time.*` 메시지 발사 |
| `Narrative/Tests/KausNarrativeStateSubsystemTests.cpp` | 10 | Flag/Counter CRUD·신호·ClearMatching |
| `AbilitySystem/Abilities/Tests/KausPlayerActionAbilityTests.cpp` | 7 | 비용 결정 우선순위·클램프·null 안전 |
