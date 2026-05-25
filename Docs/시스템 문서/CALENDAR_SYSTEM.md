# 달력·시간 시스템 문서 (코드 레퍼런스)

> 대상 독자: 시간축에 의존하는 콘텐츠를 만들 기술기획, 시스템을 확장·디버깅할 프로그래머
> 위치: `Source/Kaus/GameFeatures/Calendar/`, `Source/Kaus/GameFeatures/GameTime/`
> 함께 볼 문서:
> - `Docs/KAUS_TIME_GUIDE.md` / `KAUS_TIME_REFERENCE.md` — Time 시스템 영문 상세(설계 의도·API 표·호출 순서)
> - `Docs/KAUS_DISPLAY_CLOCK_GUIDE.md` / `KAUS_DISPLAY_CLOCK_REFERENCE.md` — Display Clock 영문 상세
> - `Docs/NODE_SYSTEM.md` — `Event.Time.*` 를 구독하는 Node 시스템
>
> 이 문서는 한국어 **통합 개요**다. 시간축 전체의 큰 그림과 각 계층의 역할·연결을 한눈에 보고,
> 정확한 API 시그니처·호출 순서·계약은 위 영문 레퍼런스를 참조한다.

---

## 1. 한 줄 요약

Kaus는 **시간이 핵심 자원**인 게임이다. 날짜가 흐르고, 하루는 여러 **사이클**(아침·오후·밤 등)로
나뉘며, 각 사이클에서 플레이어가 할 수 있는 행동은 **예산(Budget)** 으로 제한된다.
특정 날짜에 특정 사건이 예약되기도 한다.

이 모든 것을 하나의 시스템이 떠안으면 엉킨다. 그래서 책임을 **네 계층**으로 분리하고,
각 계층은 한 가지만 책임지며, 나머지 코드베이스에는 깔끔한 신호(델리게이트·메시지)만 던진다.

---

## 2. 시간축의 네 계층

| 계층 | 대표 클래스 | 한 줄 책임 | 수명 |
|------|------------|-----------|------|
| 1. 달력 | `UKausCalendarSubsystem` | "며칠이 있고, 각 날은 어떤 날인가" — 날짜 카탈로그 | GameInstance |
| 2. 사이클 진행 | `UKausDayCycleSubsystem` | "지금이 언제인가" — 현재 (날짜+사이클) 좌표와 진행 | GameInstance |
| 3. 행동 예산 | `UKausGameTimeComponent` | "이 행동을 할 시간이 있는가" — 사이클별 예산 회계 | PlayerState |
| 보조. 표시 시계 | `UKausDisplayClockSubsystem` | "화면 위 시계가 흐르는 것처럼 보이게" — 연출 전용 | WorldSubsystem |

**핵심 분리**: 계층 1~3은 **행동 주도(action-driven)** — 플레이어가 행동해야 시간이 간다.
보조 계층(DisplayClock)은 **실시간 주도** — 가만히 있어도 흐른다. 둘은 서로를 참조하지 않는다.

```
 [1] Calendar ──InitializeWith──> [2] DayCycle ──OnCycleChanged──┬──> [3] GameTimeComponent
      날짜 메타 위임 조회                  현재 좌표              │         예산 차감/종료
                                                                 └──> TimeMessageBroadcaster
                                                                          │ Event.Time.* 방송
                                                                          ▼
                                                                   Node Reaction 등 구독자

 [보조] DisplayClock ── (독립) ── UI 시계 / 라이팅 / NPC 환경
```

---

## 3. 계층 1 — 달력(Calendar)·일정(Schedule)

**위치**: `Source/Kaus/GameFeatures/Calendar/`

"게임에 며칠이 존재하고, 각 날에 어떤 의미(평일·주말·휴일·스토리 이벤트)가 붙는가"를 책임진다.
**현재 날짜·하루 진행은 책임지지 않는다** — 그것은 계층 2.

### 3.1 `FKausGameDate` — 날짜 값 (`KausGameDate.h`)

`(Year, Month, Day)` POD 구조체. 사전식 비교 연산자 전부 제공, `GetTypeHash`로
`TMap`/`TSet` 키 사용 가능. 날짜 **산술은 직접 하지 않고** 캘린더 시스템에 위임한다.
`ToString()` → `"Y0001-M03-D15"`.

### 3.2 `UKausCalendarSystem` — 달력 종류 추상화 (`KausCalendarSystem.h`)

`Abstract` / `EditInlineNew` / `Instanced`. 일자 산술과 요일 계산을 캡슐화하는
**전략 객체**. 모든 메서드는 부작용 없는 const 순수 함수여야 한다.

| 가상 메서드 | 역할 |
|-------------|------|
| `IsValidDate(Date)` | 이 달력에서 유효한 날짜인지 |
| `DaysBetween(A, B)` | 두 날짜 사이 일 수 (B−A, 음수 가능) |
| `AddDays(Date, N)` | N일 후(음수면 이전) 날짜 |
| `GetDaysPerWeek()` | 일주일 길이 |
| `GetWeekdayIndex(Date, Ref, RefWeekday)` | 요일 인덱스 — 기준일과 그 요일을 받아 계산 |

구현체:
- **`UKausGregorianCalendar`** — `FDateTime` 기반 12개월 그레고리력 (기본).
  단, 실제 `FDateTime`의 요일은 무시하고 디자이너가 입력한 `StartWeekdayIndex`를 따른다
  (가상 연도가 실제와 다른 요일 배열을 갖도록).
- **`UKausPlanetaryCalendar`** — 월/주/일 길이를 임의 설정하는 가상 행성력 (기본 10개월/40일/8일주).

### 3.3 `UKausCalendarSchedule` — 일정 정의 (`KausCalendarSchedule.h`)

`UPrimaryDataAsset`. 달력의 **정적 데이터 정의** — 한 번 디자인되어 패키징 후 read-only.

| 필드 | 의미 |
|------|------|
| `CalendarSystem` | 사용할 달력 종류 (Instanced — Gregorian/Planetary) |
| `StartDate` / `EndDate` | 게임이 다루는 날짜 범위 |
| `StartWeekdayIndex` | 시작일의 요일 인덱스 (요일 계산의 기준점) |
| `WeekendWeekdayIndices` | 주말로 처리할 요일 인덱스 (한국식 그레고리력: `[5,6]`) |
| `RecurringHolidays` | 매년 반복되는 휴일 (`FKausRecurringHoliday` 배열) |
| `SeedDayMetas` | 디자이너가 특정 날짜에 미리 부여하는 시드 메타 (`FKausDaySeed` 배열) |

### 3.4 메타 데이터 구조 (`KausCalendarTypes.h`)

- **`FKausDaySeed`** — *디자이너 입력*. `Date` + `AdditionalTags`(추가 태그) + `DisplayNameOverride`.
  "이 날에 무엇을 더하고 싶은가"만 적는다. 자동 계산 필드(요일 등)는 없다.
- **`FKausDayMeta`** — *빌드 결과*. 외부 시스템이 조회하는 read-only 메타.
  `Date` + `WeekdayIndex` + `Tags` + `DisplayName`. `IsWeekday/IsWeekend/IsHoliday/IsSpecial` 헬퍼 제공.
- **`FKausRecurringHoliday`** — 매년 반복 휴일. `Month/Day`(정수, 행성력 호환) + `Name` + `Marker` 태그.
- **`FKausDayRuntimeOverride`** — *런타임 변경*. `AdditionalTags`/`ExclusionTags`/`DisplayNameOverride`.
  "5일 후가 데이트 약속이 됨" 같은 동적 일정 변경을 표현.

**빌드 파이프라인** (시드 → 완성 메타):
```
1) WeekdayIndex 자동 계산 (CalendarSystem)
2) 평일/주말 태그 자동 부착 (Schedule.WeekendWeekdayIndices 기준)
3) 매년 반복 휴일 태그 부착 (Schedule.RecurringHolidays)
4) FKausDaySeed의 AdditionalTags / DisplayNameOverride 병합
5) (조회 시점) RuntimeOverrides가 있으면 그 위에 덮어쓰기
```

### 3.5 `UKausCalendarSubsystem` — 달력 런타임 매니저 (`KausCalendarSubsystem.h`)

`GameInstanceSubsystem`. 모든 mutation API는 게임 스레드 전용.

- **초기화**: `InitializeWithSchedule(Schedule)` — Schedule을 받아 `ResolvedDays`(시드+자동채움)를 빌드.
  재호출 시 `RuntimeOverrides`가 비워지고 `OnCalendarRebuilt` 발행.
- **범위 쿼리**: `GetStartDate/GetEndDate/GetTotalDayCount/IsDateInRange`, `DateToIndex`↔`IndexToDate`(1-based).
- **메타 조회**: `TryGetDayMeta(Date, OutMeta)` — 시드+자동채움+런타임 오버라이드를 모두 병합한 최종 메타.
  `GetAllDayMetas()` — UI 캘린더용 전체 스냅샷.
- **메타 검색**: `FindNextDayWithTag(From, Tag)`, `FindAllDaysWithTag(Tag)` — 계층 매치.
- **런타임 변경**: `AddRuntimeTag/RemoveRuntimeTag/SetRuntimeDisplayName/ClearRuntimeOverrides`.
  Add/Remove가 충돌하지 않도록 불변식을 자동 유지.
- **델리게이트**: `OnDayMetaChanged`(특정 날 변경), `OnCalendarRebuilt`(전체 재빌드).
- **영속화**: `CaptureSaveData/RestoreFromSaveData`. `FKausCalendarSaveData`는 Schedule 경로 +
  RuntimeOverrides만 저장 — `ResolvedDays`는 Schedule 복원으로 자동 재빌드.

> `ResolvedDays`에는 런타임 오버라이드가 적용돼 있지 않다. 조회 시점에 `BuildEffectiveMeta`가 병합한다.

---

## 4. 계층 2 — 사이클 진행(DayCycle)

**위치**: `Source/Kaus/GameFeatures/GameTime/`

"지금이 언제인가"의 단일 진리원. 진행 명령을 받아 다음 좌표를 계산하고 신호를 던진다.

### 4.1 `FKausDayCyclePoint` — 시간축 좌표 (`KausDayCycleTypes.h`)

`(Date, CycleTag)` 쌍. "지금 시점"을 표현하는 단일 구조체.
`operator==`는 Date와 CycleTag(`MatchesTagExact`) 모두 일치할 때만 참.
시간 순 비교는 Definition을 알아야 하므로 여기서 제공하지 않음 → `CountCyclesBetween` 사용.

### 4.2 `UKausDayCycleDefinition` — 하루의 사이클 시퀀스 (`KausDayCycleDefinition.h`)

`UPrimaryDataAsset`. 하루를 이루는 `FKausCycleSpec` 배열(`Cycles`)을 순서대로 보유.
`Cycles[0]`이 하루의 시작, 마지막 사이클 다음은 **다음 날짜의 `Cycles[0]`**.

**`FKausCycleSpec`** 주요 필드:

| 필드 | 의미 |
|------|------|
| `CycleTag` | 사이클 식별 태그 (`Calendar.Cycle.*`, Definition 내 유일) |
| `DisplayName` / `DisplayHour` | UI 표시용 이름·가상 시각(0~23) |
| `BudgetMode` | `Token`(정수 토큰) 또는 `Realtime`(분 단위) — 예산 차감 단위 |
| `CycleBudget` | 사이클 진입 시 부여되는 시간 예산 |
| `RealtimeStartMinute` | Realtime 모드 한정 — 사이클 시작 시각(0~1439) |
| `EndPolicy` | `FKausCycleEndPolicy` — 자동/수동 종료 규칙 |
| `AdditionalOnEnter/OnExitEventTag` | 진입·이탈 시 추가 방송할 이벤트 태그 |

**`FKausCycleEndPolicy`**: `bEndOnBudgetExhausted`(예산 0 시 자동 진행),
`bAllowManualEndAtThreshold` + `ManualEndAtRemainingOrLess`(임계 이하 시 수동 종료 허용).

### 4.3 `UKausDayCycleSubsystem` — 진행 매니저 (`KausDayCycleSubsystem.h`)

`GameInstanceSubsystem`. **Calendar Subsystem이 초기화 완료 상태여야** `InitializeWith` 가능.

- **초기화**: `InitializeWith(Definition, StartDate, StartCycleTag, [InCalendar])`.
- **현재 조회**: `GetCurrentDate/GetCurrentCycleTag/GetCurrentPoint`, `TryGetCurrentDayMeta`(Calendar 위임).
- **진행**:
  - `AdvanceCycle()` — 단일 사이클 진행 (가장 흔한 호출).
  - `AdvanceBy(Days, Cycles, bBroadcastEachStep)` — 다단계 점프.
  - `JumpTo(Date, CycleTag)` — 절대 좌표 점프 (디버그/시네마틱/세이브 복원). 중간 단계 평가 없음.
- **거리**: `CountCyclesBetween(From, To)` — 사이클 단위 거리(부호 있음).
- **델리게이트**: `OnCycleChanged(New, Prev)`, `OnDateChanged(New, Prev)`.
  날짜 경계를 넘으면 `OnCycleChanged` → `OnDateChanged` 순으로 발행.
  좌표가 변하지 않는 호출(no-op)은 미발행.
- **영속화**: `CaptureSaveData/RestoreFromSaveData`. 복원은 **Calendar 복원 후**에 해야 함.

### 4.4 `UKausGameTimeMessageBroadcastSystem` — 이벤트 버스 어댑터

`DayCycleSubsystem.OnCycleChanged`를 받아 `GameplayMessageSubsystem`의 `Event.Time.*` 메시지로
변환·방송한다. 상세는 `Docs/NODE_SYSTEM.md` §8.4 및 `KAUS_TIME_REFERENCE.md` 참조.

발사 메시지: `Event.Time.CycleEntered.{사이클}` / `CycleExiting.{사이클}` / `DayStart` / `DayEnd`,
그리고 Spec의 `AdditionalOnEnter/OnExitEventTag`. 페이로드는 `FKausTimeMessagePayload`.

> 날짜 경계 통과 시 발사 순서: `CycleExiting → DayEnd → DayStart → CycleEntered → Additional`.

---

## 5. 계층 3 — 행동 예산(`UKausGameTimeComponent`)

**파일**: `KausGameTimeComponent.h/.cpp`. **`APlayerState`에 부착** (영속·세이브 친화적).

플레이어의 시간 예산을 회계한다. `DayCycleSubsystem.OnCycleChanged`를 구독해 사이클 진입 시
`Spec.CycleBudget`으로 예산을 초기화하고, 행동 어빌리티가 비용을 차감하는 진입점을 제공한다.

| API | 역할 |
|-----|------|
| `TrySpend(Cost)` → `EKausSpendResult` | 비용 차감 시도. `Accepted`만 실제 차감. `UKausPlayerActionAbility`가 호출 |
| `CanSpend(Cost)` | 차감 가능 여부 (사전 체크) |
| `TryManualEndCycle()` / `CanManualEndCycle()` | 수동 사이클 종료 (UI "다음으로" 버튼) |
| `GetRemaining/GetCycleTotal/GetSpent` | 예산 상태 조회 |
| `GetCurrentRealtimeMinute()` | Realtime 모드의 현재 가상 시각 |
| `AddRemaining` / `ForceAdvanceCycle` | 디버그/시네마틱용 |

**`EKausSpendResult`**: `Accepted` / `NotInitialized` / `InvalidCost`(음수) / `Insufficient`(부족).

**델리게이트**: `OnRemainingChanged(New, Total, DeltaSpent)`, `OnCanManualEndChanged(bCanEnd)`.

**종료 정책 흐름**: 예산이 `EndPolicy`에 따라 0에 도달하면 `DayCycleSubsystem.AdvanceCycle`을
직접 호출한다 → 새 사이클 진입 → 다시 예산 초기화. `bIsAdvancing` 플래그로 재진입을 막는다.

---

## 6. 보조 계층 — 표시용 시계(`UKausDisplayClockSubsystem`)

**파일**: `KausDisplayClockSubsystem.h/.cpp`. `UTickableWorldSubsystem` (레벨 전환 시 재생성).

**연출 전용** 가상 시계. "플레이어가 가만있어도 시간이 흐르는 것처럼" 보이게 한다.
UI 시계·환경 라이팅·NPC 환경 반응에 사용.

> ⚠️ **게임 로직이 이 시계를 참조해서는 안 된다.** Cycle 진행·예산 차감과 완전히 무관하며,
> 다른 Kaus 시스템을 일절 참조하지 않는다.

- 시간 표현: `MinuteOfDay`(0~1439, 내부 좌표) / `Hour`(0~23) / `MinuteOfHour`(0~59).
- 흐름 비율: `Settings.DayDurationSeconds` (86400=실시간, 600=10분에 하루, 0 이하=정지).
- 제어: `SetCurrentTime(Hour, Minute)`, `SetCurrentMinuteOfDay`, `Pause/Resume`.
- 델리게이트: `OnMinuteOfDayChanged`, `OnHourChanged`.

상세는 `Docs/KAUS_DISPLAY_CLOCK_GUIDE.md` / `KAUS_DISPLAY_CLOCK_REFERENCE.md` 참조.

---

## 7. 초기화 순서와 의존성

시간축은 **초기화 순서에 엄격한 의존성**이 있다. 보통 GameMode가 다음 순서로 호출한다:

```
1. CalendarSubsystem.InitializeWithSchedule(Schedule)
       ↓ (Calendar가 IsInitialized()=true 여야)
2. DayCycleSubsystem.InitializeWith(Definition, StartDate, StartCycleTag)
       ↓
3. GameTimeMessageBroadcastSystem.StartBroadcasting()
       └ DayCycleSubsystem 구독 시작 → 이후 Event.Time.* 방송
   GameTimeComponent (PlayerState)는 BeginPlay에서 OnCycleChanged 구독
```

**세이브 복원 순서도 동일**: `CalendarSubsystem.RestoreFromSaveData` →
`DayCycleSubsystem.RestoreFromSaveData`. 역순이면 DayCycle 복원이 실패한다.

> DisplayClock은 의존성이 없어 순서와 무관하게 독립 동작한다.

---

## 8. 연결 시스템

| 연결 대상 | 연결 방식 |
|-----------|----------|
| **Node 시스템** | `TimeMessageBroadcaster`가 방송한 `Event.Time.*`를 Node의 Reaction이 구독 → 시간대별 상태 전환. `Docs/NODE_SYSTEM.md` §8.4 |
| **GAS — `UKausPlayerActionAbility`** | 행동 어빌리티가 발동 시 `GameTimeComponent.TrySpend(Cost)`로 시간 예산을 비용으로 소비. 거부되면 어빌리티 취소 |
| **UI** | 캘린더 위젯은 `CalendarSubsystem.GetAllDayMetas()` + `OnDayMetaChanged` 구독. 예산 UI는 `GameTimeComponent.OnRemainingChanged`. 시계 UI는 `DisplayClock.OnHourChanged` |
| **환경/연출** | 라이팅·NPC 앰비언스는 `DisplayClock`의 시각 변화에 반응 |

---

## 9. 알려진 한계와 주의점

| 항목 | 비고 |
|------|------|
| 세이브 마이그레이션 | `FKausDayCycleSaveData` 복원 시 Definition이 바뀌었으면(사이클 추가/제거) 실패 가능 — 정책 미정 |
| Calendar Narrative 분리 | Calendar는 날짜 메타만 책임. 스토리 플래그는 `NarrativeStateSubsystem`(별도) |
| `JumpTo`의 중간 이벤트 | `JumpTo`는 단일 신호만 발행 — 건너뛴 사이클의 이벤트 시뮬레이션은 호출자 책임 |
| 자식 이벤트 태그 등록 | `Event.Time.CycleEntered.{X}` 자식 태그가 등록돼 있지 않으면 해당 메시지는 방송되지 않음 |
| DisplayClock 오용 금지 | 게임 로직(EndPolicy 등)이 표시 시계를 참조하면 설계 위반 |

---

## 10. 관련 파일·문서 색인

### Calendar 계층
| 파일 | 역할 |
|------|------|
| `Calendar/KausGameDate.h` | 날짜 값 구조체 `FKausGameDate` |
| `Calendar/KausCalendarTypes.h` | `FKausDaySeed/DayMeta/RecurringHoliday/DayRuntimeOverride` |
| `Calendar/KausCalendarSystem.h` | 달력 종류 추상 베이스 |
| `Calendar/KausGregorianCalendar.*` / `KausPlanetaryCalendar.*` | 그레고리력 / 행성력 구현 |
| `Calendar/KausCalendarSchedule.h` | 일정 정의 데이터 애셋 |
| `Calendar/KausCalendarSubsystem.h` | 달력 런타임 매니저 |
| `Calendar/KausCalendarSaveData.h` | 달력 세이브 데이터 |

### GameTime 계층
| 파일 | 역할 |
|------|------|
| `GameTime/KausDayCycleTypes.h` | `FKausDayCyclePoint`, 세이브 데이터, 델리게이트 |
| `GameTime/KausDayCycleDefinition.h` | 하루 사이클 시퀀스 정의 (`FKausCycleSpec` 등) |
| `GameTime/KausDayCycleSubsystem.h` | 사이클 진행 매니저 |
| `GameTime/KausGameTimeComponent.h` | 플레이어 시간 예산 회계 (PlayerState) |
| `GameTime/KausGameTimeMessageBroadcastSystem.h` | `Event.Time.*` 방송 어댑터 |
| `GameTime/KausDisplayClockSubsystem.h` | 표시용 가상 시계 |

### 영문 상세 문서
| 문서 | 내용 |
|------|------|
| `Docs/KAUS_TIME_GUIDE.md` | Time 시스템 설계 의도·온보딩 |
| `Docs/KAUS_TIME_REFERENCE.md` | Time 시스템 API 표·호출 순서·계약 |
| `Docs/KAUS_DISPLAY_CLOCK_GUIDE.md` | Display Clock 설계 의도 |
| `Docs/KAUS_DISPLAY_CLOCK_REFERENCE.md` | Display Clock API 레퍼런스 |

### 테스트
시간/달력 서브시스템은 `Calendar/Tests/`, `GameTime/Tests/`에 Unreal Automation 테스트가 집중돼 있다
(달력 산술·사이클 진행·예산·메시지 방송·표시 시계 각각 커버).
