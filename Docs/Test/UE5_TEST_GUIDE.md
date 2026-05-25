# UE5 자동화 테스트 작성 가이드 — 시행착오로 배운 것들

이 문서는 Kaus Calendar 시스템의 테스트를 작성하면서 부딪힌 함정들을 정리한 회고입니다. 같은 함정에 빠지지 않도록 구체적인 에러 메시지와 함께 정리합니다.

대상 독자: UE5 자동화 테스트를 처음 작성하거나, 한 번 작성해봤지만 왜 그렇게 해야 하는지 잘 모르는 개발자.

---

## 0. 자동화 테스트는 왜 쓰는가

UE5의 게임 코드를 테스트하는 건 일반 C++ 라이브러리를 테스트하는 것보다 까다롭습니다.

- UObject는 **반드시** 엔진의 GC와 리플렉션 인프라 안에서 살아야 합니다
- 많은 코드가 `UWorld`, `GEngine`, `GameInstance`를 가정합니다
- 빌드 환경(Editor/Game/Shipping)에 따라 가용한 기능이 다릅니다

UE5의 Automation Test 프레임워크는 이런 환경을 어느 정도 흉내 내주는 도구입니다. 완벽하진 않지만, 단위 테스트부터 PIE 통합 테스트까지 점진적으로 커버할 수 있습니다.

---

## 1. 테스트 한 개의 모양

가장 단순한 형태:

```cpp
// MyClassTests.cpp
#if WITH_DEV_AUTOMATION_TESTS

#include "MyClass.h"
#include "Misc/AutomationTest.h"

IMPLEMENT_SIMPLE_AUTOMATION_TEST(FMyClassBasicTest,
    "MyProject.MyClass.Basic",
    EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter)

bool FMyClassBasicTest::RunTest(const FString& Parameters)
{
    UMyClass Obj;
    TestEqual(TEXT("기본값"), Obj.GetCount(), 0);
    return true;
}

#endif
```

설명:
- `#if WITH_DEV_AUTOMATION_TESTS` ~ `#endif` — Shipping 빌드에서 이 코드를 빼냅니다
- `IMPLEMENT_SIMPLE_AUTOMATION_TEST(클래스명, 트리경로, 플래그)` — 매크로 한 줄이 클래스 정의 + 등록 모두 처리
- `RunTest` — 테스트 본문. `true` 반환 = 계속, `false` = 즉시 중단
- 트리 경로는 `.`으로 구분. Session Frontend의 트리 노드가 됩니다

에디터에서 `Tools → Test Automation`을 열면 `MyProject.MyClass.Basic`이 트리에 보입니다.

---

## 2. 함정 1 — UCLASS는 헤더에만

처음 만난 에러:

```
KausCalendarTestListeners.h(26): Error: 'UCLASS' must not be inside preprocessor blocks,
                                         except for WITH_EDITORONLY_DATA
```

원인: UHT(UnrealHeaderTool)가 모든 `UCLASS`, `USTRUCT`, `UFUNCTION`, `UPROPERTY`를 스캔할 때, `WITH_EDITORONLY_DATA`를 제외한 어떤 전처리기 가드 안에 있는 것도 거부합니다.

처음에 이렇게 썼습니다:
```cpp
// ❌ KausCalendarTestListeners.h
#if WITH_DEV_AUTOMATION_TESTS

UCLASS()
class UMyTestListener : public UObject { ... };

#endif
```

UHT는 `#if`/`#endif`를 모르고 그 안의 `UCLASS()`를 보고 거부합니다.

해결:
```cpp
// ✅ 헤더는 가드 없이 노출
UCLASS()
class UMyTestListener : public UObject { ... };
```

```cpp
// ✅ cpp에서만 사용을 가드
#if WITH_DEV_AUTOMATION_TESTS
#include "MyTestListener.h"

bool FMyTest::RunTest(...)
{
    auto* Listener = NewObject<UMyTestListener>(...);
    // ...
}
#endif
```

부수 효과: 텅 빈 UCLASS가 Shipping 빌드에 들어가긴 합니다. 멤버 메서드가 inline으로 즉시 반환하는 단순 형태라면 바이너리 크기에 거의 영향 없습니다 (수십 바이트). 받아들일 만한 트레이드오프입니다.

### 왜 cpp 안에 inline UCLASS는 안 되는가

cpp 안에 `UCLASS()`를 정의하면 UHT가 본문을 파싱하지 못합니다. UHT는 헤더만 스캔합니다. cpp 안에서 발견된 UCLASS는 등록되지 않아 런타임에 사용 불가입니다. 무조건 헤더로 빼야 합니다.

---

## 3. 함정 2 — TestTrue는 인자 두 개

다음 에러:

```
KausCalendarSubsystemTests.cpp(173): error C2661: 
    'FAutomationTestBase::TestTrue': no overloaded function takes 1 arguments
```

C++의 `assert(expr)` 스타일을 따라 이렇게 썼습니다:

```cpp
// ❌
TestTrue(MyFunc());
TestTrue(Sub->TryGetDayMeta(Date, Meta));
```

UE의 `TestTrue`는 항상 두 인자입니다:

```cpp
// ✅
TestTrue(TEXT("MyFunc 결과"), MyFunc());
TestTrue(TEXT("4/15 메타 조회 성공"), Sub->TryGetDayMeta(Date, Meta));
```

설명 문자열이 필수인 이유: 테스트가 실패할 때 `Expected '...' to be true, but it was false. (line 173)` 같은 메시지에서 어떤 검사인지 식별해야 하기 때문입니다.

### 모든 Test* 함수의 시그니처

| 매크로 | 시그니처 |
|---|---|
| `TestTrue` / `TestFalse` | `(설명, bool)` |
| `TestEqual` / `TestNotEqual` | `(설명, 실제, 기대)` |
| `TestNull` / `TestNotNull` | `(설명, 포인터)` |
| `TestSame` / `TestNotSame` | `(설명, 포인터1, 포인터2)` |

기억법: **항상 첫 인자가 설명**.

---

## 4. 함정 3 — Subsystem 테스트의 Outer 함정

가장 큰 함정이었습니다. 두 단계로 나눠 발견됐습니다.

### 4.1 첫 시도 — InitializeStandalone

자연스럽게 떠오른 패턴:

```cpp
// ❌ Runtime 카테고리 테스트에서 크래시
UGameInstance* GI = NewObject<UGameInstance>();
GI->InitializeStandalone();
UMySubsystem* Sub = GI->GetSubsystem<UMySubsystem>();
```

증상: 디버거가 잡힘 → 엔진 강제 종료. 메시지 없음.

원인: `InitializeStandalone()`은 내부적으로 `WorldContext`를 만드는데, PIE/Runtime 카테고리에서는 이미 다른 GameInstance와 WorldContext가 살아있어 충돌합니다.

### 4.2 두 번째 시도 — GEngine을 Outer로

InitializeStandalone을 회피하려고 GameInstance를 만들지 않고 직접 Subsystem을 생성했습니다:

```cpp
// ❌ ensure 발동
UMySubsystem* Sub = NewObject<UMySubsystem>(GEngine);
```

새 에러:
```
LogUObjectGlobals: Object None of class /Script/Kaus.KausCalendarSubsystem 
                   with ClassWithin of /Script/Engine.GameInstance 
                   was created in invalid Outer /Script/UnrealEd.UnrealEdEngine!
Ensure condition failed: false [UObjectGlobals.cpp:3362]
```

**원인**: `UGameInstanceSubsystem`은 클래스 정의에 `ClassWithin = UGameInstance` 제약이 있습니다. UE5의 `NewObject`는 Outer가 ClassWithin과 호환되는지 검증합니다. `GEngine`은 `UUnrealEdEngine`(에디터)이라 `UGameInstance`가 아니므로 ensure 발동.

### 4.3 정답 — 빈 GameInstance + 직접 NewObject

GameInstance는 만들되 Init 안 부르기:

```cpp
// ✅
struct FTestContext
{
    TObjectPtr<UGameInstance> GameInstance;
    TObjectPtr<UMySubsystem> Subsystem;

    FTestContext()
    {
        // 1) 빈 컨테이너 — Init/InitializeStandalone 호출 안 함
        GameInstance = NewObject<UGameInstance>();
        GameInstance->AddToRoot();

        // 2) GameInstance를 Outer로 → ClassWithin 검증 통과
        Subsystem = NewObject<UMySubsystem>(GameInstance);
        Subsystem->AddToRoot();
    }

    ~FTestContext()
    {
        if (Subsystem) Subsystem->RemoveFromRoot();
        if (GameInstance) GameInstance->RemoveFromRoot();
    }

    UMySubsystem* Get() const { return Subsystem; }
};
```

각 테스트:
```cpp
bool FMyTest::RunTest(const FString& Params)
{
    FTestContext Ctx;
    UMySubsystem* Sub = Ctx.Get();
    
    TestTrue(TEXT("초기 상태"), Sub->IsInitialized() == false);
    
    return true;
}
```

### 왜 이게 동작하는가

- `UGameInstance` 자체는 ClassWithin 제약 없음 → NewObject 안전
- 빈 GameInstance는 WorldContext를 만들지 않음 → Runtime 충돌 없음
- Subsystem의 ClassWithin 검증: Outer가 UGameInstance이므로 통과
- 둘 다 AddToRoot → GC 안전
- `Initialize()`는 호출하지 않음 — 우리 Subsystem의 Initialize는 로그만 찍으므로 무해. 멤버는 UPROPERTY 기본값으로 자동 초기화

### 왜 Initialize/Deinitialize를 호출하지 않는가

처음에는 호출하려 했습니다:
```cpp
FSubsystemCollectionBase Collection;       // protected ctor 접근 불가
Subsystem->Initialize(Collection);
```

`FSubsystemCollectionBase`는 protected 컨스트럭터를 가져 직접 인스턴스화가 어렵습니다. 다행히 단순 Subsystem의 `Initialize`는 로그/필드 초기화 정도라 호출 안 해도 됩니다. Subsystem이 의미 있는 초기화를 한다면 그건 별도 public 메서드로 분리하는 리팩터링이 답입니다.

### 적용 가능 범위

| Subsystem 종류 | ClassWithin | 테스트 패턴 |
|---|---|---|
| `UEngineSubsystem` | `UEngine` | `GEngine->GetEngineSubsystem<...>()` 직접 — 이미 만들어져 있음 |
| `UGameInstanceSubsystem` | `UGameInstance` | 본 패턴 (빈 GI + 직접 NewObject) |
| `UWorldSubsystem` | `UWorld` | `FWorldFixture` 별도 필요 |
| `ULocalPlayerSubsystem` | `ULocalPlayer` | 무거움. PIE 통합 테스트 권장 |

---

## 5. 함정 4 — 도메인 경계 테스트

행성력 테스트에서 만난 실패:

```
Expected '행성력 Roundtrip N=-10' to be -10, but it was 0.
```

코드:
```cpp
const FKausGameDate Base(1, 1, 1);
for (int32 N : {1, 40, 400, 800, -10})
{
    const auto Forward = Cal->AddDays(Base, N);
    const int32 Back = Cal->DaysBetween(Base, Forward);
    TestEqual(..., Back, N);  // -10 케이스에서 0이 나옴
}
```

### 왜 0이 나오는가

`FKausGameDate`는 `Year ≥ 1`로 클램프됩니다. `Base = (1, 1, 1)`에서 -10일 가산하면 절대 일수가 -10이 되어 invalid 영역. 구현은 invalid면 기본 생성된 `FKausGameDate{}`를 반환하는데, 이 기본값이 **공교롭게도 (1, 1, 1) — Base와 같음**. 그래서:

```
AddDays(Base, -10)        → FKausGameDate{} = (1, 1, 1) = Base
DaysBetween(Base, Base)   → 0
```

테스트는 `Back == -10`을 기대했지만 `Back == 0`이 나옴.

### 두 가지 교훈

**교훈 1: 도메인 경계를 인식하라.**
Year ≥ 1이라는 제약은 디자이너에게 합리적이지만, "Year=1 시작점에서 음수 가산"이 도메인 안에서 의미 있는지 생각해야 합니다. 게임 시작일 이전 날짜는 게임적으로 표현할 일이 거의 없습니다.

**교훈 2: 실패 표현이 유효값과 충돌하지 않도록.**
`FKausGameDate{}`의 기본값이 (1, 1, 1)이라는 사실이 문제를 만들었습니다. 실패를 명시적으로 표현하려면:
- `bool` 반환과 out 파라미터로 분리
- `TOptional<FKausGameDate>` 사용
- 실패 마커가 도메인 안에서 절대 등장하지 않는 값 (예: Year=0, Year=-1)

기존 인터페이스를 바꾸기보단 **테스트가 도메인 안에서만 검증하도록** 수정했습니다:

```cpp
// ✅ 양수 케이스 — Base = (1, 1, 1)에서 시작
const FKausGameDate Base(1, 1, 1);
for (int32 N : {1, 40, 400, 800})
{
    /* ... */
}

// ✅ 음수 케이스 — Base를 충분히 뒤로
const FKausGameDate MidBase(3, 5, 20);
for (int32 N : {-10, -100, -800})
{
    /* ... */
}
```

행성력에서 (3, 5, 20)은 절대 일수 979. -800일 가산해도 179로 양수. 안전.

---

## 6. 함정 5 — GC와 메모리

UObject는 GC가 관리합니다. 테스트에서 새로 만든 UObject는 다음 GC 사이클에서 죽을 수 있습니다.

### 보호 방법

방법 1 — `AddToRoot`:
```cpp
UObj* Obj = NewObject<UObj>();
Obj->AddToRoot();
// ... 테스트
Obj->RemoveFromRoot();
```

방법 2 — Rooted Outer 사용:
```cpp
UObject* Outer = GEngine;  // 영구 rooted
UObj* Obj = NewObject<UObj>(Outer);
// 자동으로 Outer 체인을 통해 GC 보호
```

### 우리 케이스

`FTestContext`는 두 방법을 모두 사용합니다:
- Subsystem은 `AddToRoot()` (생명 주기를 명시적으로 컨트롤)
- Schedule, Listener는 Subsystem의 Outer(GEngine)를 부모로 사용 (transitively rooted)

```cpp
UKausCalendarSchedule* Schedule = NewObject<UKausCalendarSchedule>(Ctx.GetOuter());
//                                                              ^^^^^^^^^^^^^^^^
//                                                              GEngine을 반환
```

### 흔한 실수: 기본 Outer 사용

```cpp
// ❌ Outer = TransientPackage
UObj* Obj = NewObject<UObj>();
```

TransientPackage는 rooted라 GC는 안 되지만, 다른 테스트의 객체와 같은 namespace에서 충돌합니다. 테스트 격리가 깨집니다.

---

## 7. 함정 6 — 테스트 카테고리 (Filter)

UE5 자동화 테스트는 카테고리별 필터를 가집니다. 잘못 선택하면 테스트가 의도와 다른 환경에서 돌거나, Session Frontend에 안 나타납니다.

### Context (어디서 돌릴 수 있는가)

| Flag | 의미 |
|---|---|
| `EditorContext` | 에디터 내부 / 커맨드렛 |
| `ClientContext` | 클라이언트 런타임 |
| `ServerContext` | 데디케이티드 서버 런타임 |
| `CommandletContext` | 헤드리스 커맨드렛 |
| `ApplicationContextMask` | 위 4개 OR — 어디서든 |

### Filter (속도/유형)

| Flag | 의미 |
|---|---|
| `SmokeFilter` | 1초 미만, 매 커밋마다 |
| `EngineFilter` | 엔진 레벨 기능 |
| `ProductFilter` | 게임플레이 / 제품 기능 |
| `PerfFilter` | 성능 측정 |
| `StressFilter` | 부하 / 장기 실행 |

### 본 프로젝트 권장

```cpp
EAutomationTestFlags::EditorContext | EAutomationTestFlags::EngineFilter
```

이유: 우리 Calendar 단위 테스트는 에디터에서 빠르게 돌리기만 하면 됩니다. 다른 컨텍스트로 확장할 일이 생기면 그때 ApplicationContextMask로 바꿉니다.

---

## 8. 테스트 실행 방법

### 에디터에서 (개발 중)

```
Tools → Test Automation
```

또는

```
Window → Developer Tools → Session Frontend → Automation 탭
```

트리에서 원하는 테스트 체크 → **Start Tests**.

### CI / 커맨드라인

```bat
"%UE_ROOT%\Engine\Binaries\Win64\UnrealEditor-Cmd.exe" ^
  "%PROJECT_PATH%\Project.uproject" ^
  -ExecCmds="Automation RunTests Project.Category; Quit" ^
  -unattended -nullrhi -nopause
```

핵심 플래그:
- `-nullrhi` — GPU 없이. CI에 필수
- `-unattended` — 모달 다이얼로그 자동 닫기
- `-nopause` — 에러 시 일시 정지 안 함

### 인게임 콘솔 (PIE 중)

`` ` `` 키로 콘솔 열고:
```
Automation RunTests MyProject.Category
Automation List
```

---

## 9. 회고 — 이번에 배운 것

이번 Calendar 테스트 작성을 정리하면:

| 단계 | 시도 | 결과 |
|---|---|---|
| 1 | inline UCLASS in cpp + WITH_DEV_AUTOMATION_TESTS 가드 | UHT 거부 |
| 2 | UCLASS을 별도 헤더로 분리 + 헤더 자체에도 가드 | 여전히 UHT 거부 |
| 3 | UCLASS을 헤더에 가드 없이, cpp 사용만 가드 | ✅ 컴파일 통과 |
| 4 | `TestTrue(MyFunc())` 단일 인자 호출 | C2661 에러 |
| 5 | `TestTrue(TEXT("..."), MyFunc())` | ✅ 통과 |
| 6 | `UGameInstance::InitializeStandalone` | Runtime 카테고리에서 크래시 |
| 7 | GEngine을 Outer로 Subsystem 직접 NewObject | ClassWithin ensure 발동 |
| 8 | 빈 GameInstance + GameInstance를 Outer로 Subsystem | ✅ 격리 + 검증 모두 통과 |
| 9 | `for (N : {-10, ..., 800}) AddDays(Base=1.1.1, N)` | -10에서 도메인 위반 |
| 10 | 양수/음수 케이스 분리, 음수는 Base를 뒤로 | ✅ 모든 케이스 통과 |

각 단계에서 얻은 가장 중요한 교훈:
- **UHT 규칙은 직관과 다르다.** 헤더 가드 안의 UCLASS는 거부되지만, 헤더 자체의 UCLASS는 cpp 사용을 가드해도 OK
- **Test 매크로는 항상 설명 인자가 첫 번째.** assert 스타일 사용 금지
- **Subsystem 테스트는 ClassWithin을 존중해야 한다.** GameInstanceSubsystem이면 Outer가 UGameInstance여야 함. GEngine은 안 됨
- **InitializeStandalone은 부르지 않는다.** 빈 GameInstance만으로 ClassWithin 검증 통과
- **도메인 경계는 테스트 데이터를 결정한다.** 모든 N에 대한 라운드트립이 아니라, 도메인 안에 머무는 N에 대해서만

---

## 10. 다음에 테스트를 작성할 때

이 체크리스트를 따라가세요:

- [ ] 테스트 대상이 World/PlayerController에 의존하나? → `FWorldFixture` 패턴
- [ ] GameInstanceSubsystem 단위 테스트인가? → 빈 GameInstance + Subsystem 직접 NewObject 패턴
- [ ] WorldSubsystem 단위 테스트인가? → `FWorldFixture` 패턴
- [ ] EngineSubsystem 단위 테스트인가? → `GEngine->GetEngineSubsystem<...>()` 직접
- [ ] 순수 함수 / 데이터 구조인가? → 가장 단순한 `IMPLEMENT_SIMPLE_AUTOMATION_TEST`
- [ ] UCLASS가 필요한가 (델리게이트 핸들러)? → 별도 헤더 파일에 둘 것
- [ ] 모든 `TestTrue/False`에 설명 문자열 있나?
- [ ] UObject들이 GC로부터 보호되나? (`AddToRoot` 또는 rooted Outer)
- [ ] Subsystem의 Outer가 ClassWithin과 일치하나? (예: GameInstanceSubsystem → GameInstance)
- [ ] `InitializeStandalone()`을 부르지 않았나?
- [ ] 테스트 데이터가 도메인 안에 머무나?
- [ ] 비동기 / 다른 스레드 호출은 게임 스레드로 마샬링했나?
- [ ] 테스트 클래스 이름과 트리 경로가 유일한가?

---

## 더 알아보기

- 엔진 소스: `Engine/Source/Runtime/Core/Public/Misc/AutomationTest.h`
- 본 프로젝트 예시: `Source/Kaus/Calendar/Tests/`
- AI 에이전트용 압축 레퍼런스: `UE5_TEST_AGENT_PLAYBOOK.md`
