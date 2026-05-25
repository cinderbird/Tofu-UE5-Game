# Tofu

> Unreal Engine 5.5 기반의 내러티브/어드벤처(VN 계열) 게임.
> Epic의 Lyra 샘플에서 파생되었으나, 중심 구조를 시간·달력·대화·선택 중심으로 재설계했습니다.

게임 다운로드: https://drive.google.com/file/d/1_TuIjA3l0ZsionJj-JUdizQcwE0eBqdF/view?usp=sharing

## 개요

플레이어는 정해진 기간 안에서 하루를 여러 사이클(아침·오후·밤)로 나누어 행동하며,
시간을 자원으로 소비해 사물과 인물 사이에 누적된 사실을 만들어 갑니다. 이 사실들이
다음 장면의 조건·UI·대화 선택지에 영향을 줍니다.

- **엔진**: UE 5.5
- **타깃 플랫폼**: Windows 단독
- **게임 모듈**: 단일 모듈 `Kaus` (Runtime), C++ 약 400개 파일
- **외부 핵심 플러그인**: `MounteaDialogueSystem`(대화), `VRM4U`(캐릭터),
  `KawaiiPhysics`, `PoseSearch`/`MotionTrajectory`, `MovieRenderPipeline`
- **차용 프레임워크**: CommonUI / CommonGame / CommonUser, GameFeatures,
  GameplayAbilities(GAS), ModularGameplay, GameSettings

## 빌드 / 실행

표준 Unreal 워크플로를 따릅니다. 별도 빌드 스크립트는 없습니다.

1. UE 5.5 설치
2. `Kaus.uproject` 를 UE 5.5 에 연결
3. IDE 또는 UnrealBuildTool 로 `Kaus` / `KausEditor` 타깃 빌드

빌드 타깃 정의는 `Source/Kaus.Target.cs`, `Source/KausEditor.Target.cs` 에,
모듈 의존성은 `Source/Kaus/Kaus.Build.cs` 에 있습니다.

빌드 산출물(`Binaries/`, `Intermediate/`, `Saved/`, `DerivedDataCache/`)은
`.gitignore` 처리되어 있어 커밋되지 않습니다.

## 테스트

Unreal Automation 프레임워크(`Misc/AutomationTest.h`)를 사용합니다.

테스트 위치: 각 시스템 디렉토리 하위 `Tests/` 폴더.

```
Source/Kaus/
├─ AbilitySystem/Abilities/Tests/
├─ GameFeatures/Calendar/Tests/
├─ GameFeatures/GameTime/Tests/
└─ GameFeatures/Narrative/Tests/
```

실행:

- **에디터**: Tools → Session Frontend → Automation → "Kaus" 필터
- **커맨드라인**: `-ExecCmds="Automation RunTests Kaus"`

핵심 시간·달력·내러티브 서브시스템에 97개 자동화 테스트가 등록되어 있습니다.
자세한 내용은 [`Docs/Portfolio/07_automation_tests.md`](Docs/Portfolio/07_automation_tests.md).

## 아키텍처 개요

중앙 게임 루프 없이 **이벤트·데이터 주도(event-driven)** 로 동작합니다. 서브시스템이
서로 직접 참조하지 않고 델리게이트 또는 `GameplayMessageSubsystem` 브로드캐스트로
느슨하게 연결됩니다.

| 영역 | 주요 시스템 |
|------|------------|
| Phase | `UKausGamePhaseSubsystem` + `UKausProgressionSubsystem` + `AKausPhaseDirector` |
| 시간 축 | `Calendar` → `UKausDayCycleSubsystem` → `UKausGameTimeComponent` |
| Node | `UKausNodeComponent` — State/Reaction/Interaction 상태머신 |
| 내러티브 상태 | `UKausNarrativeStateSubsystem` — Flags + Counters 단일 진리원 |
| GAS 재해석 | 전투 스탯 대신 **심리 속성**, 비용은 **게임 시간 토큰** |
| 대화 | `MounteaDialogueSystem` 어댑터 (`UKausDialogueManager`) |

## 디렉토리 구조

```
Source/Kaus/
├─ Core            System / GameMode / Player / Pawn / Character / Tags
├─ AbilitySystem   GAS — 어빌리티·심리 속성·실행계산
├─ Animation       AnimInstance·시퀀스 동기화·카메라
├─ GameFeatures    Calendar / GameTime / Node / Narrative / Dialogue / Sequence
└─ Presentation    UI(CommonUI) / Input / Setting / Indicator
```

자세한 구조와 코딩 컨벤션은 [`CLAUDE.md`](CLAUDE.md) 를 참고.

## 문서

| 문서 | 내용 |
|------|------|
| [`CLAUDE.md`](CLAUDE.md) | 코드베이스 가이드 · 코딩 컨벤션 · 설정 파일 |
| [`Docs/Portfolio/`](Docs/Portfolio/) | 시스템 설계 포트폴리오 8편 |
| [`Docs/CALENDAR_SYSTEM.md`](Docs/CALENDAR_SYSTEM.md) | 달력·시간 시스템 한국어 통합 개요 |
| [`Docs/NODE_SYSTEM.md`](Docs/NODE_SYSTEM.md) | Node 시스템 전체 레퍼런스 |
| [`Docs/KAUS_TIME_GUIDE.md`](Docs/KAUS_TIME_GUIDE.md) | 시간 시스템 영문 상세 |
| [`Docs/INDICATOR_SYSTEM.md`](Docs/INDICATOR_SYSTEM.md) | 월드 좌표 위 HUD 인디케이터 |

### 포트폴리오 — 시스템 설계 8편

각 문서는 **문제/목표 → 구현 구조 → 핵심 설계 결정 → 결과** 4섹션 구조에 실제 소스 코드 발췌를 포함합니다.

1. [선행 적재 & 간접 참조로 화면 끊김 해결](Docs/Portfolio/01_asset_preloading.md)
2. [비동기 신호 기반 연출-애니메이션 동기화](Docs/Portfolio/02_sequence_anim_sync.md)
3. [Node ECA 시스템 — 코드 수정 없는 인터랙션 설계](Docs/Portfolio/03_node_eca_system.md)
4. [3계층 시간 시스템 — 엔진 생명주기와 분리된 게임 시간](Docs/Portfolio/04_time_system_layers.md)
5. [GAS × 게임 시간 비용 통합](Docs/Portfolio/05_gas_time_cost.md)
6. [내러티브 상태 단일 진리원](Docs/Portfolio/06_narrative_state.md)
7. [핵심 시스템 자동화 테스트 구축](Docs/Portfolio/07_automation_tests.md)
8. [달력 비파괴 런타임 오버라이드](Docs/Portfolio/08_calendar_override.md)

## 설정 파일

`Config/` 의 주요 클래스 오버라이드 (`DefaultEngine.ini`):

- `GameUserSettingsClassName` → `KausSettingsLocal`
- `GameViewportClientClassName` → `KausGameViewportClient`
- `LocalPlayerClassName` → `KausLocalPlayer`
- `AssetManagerClassName` → `KausAssetManager`

`DefaultGame.ini` 진입점:

- 시작 맵: `/Game/Maps/StartScreen/L_Frontend_Light`
- 기본 게임 맵: `/Game/Maps/L_Level`
- UI 정책: `/Game/UI/BP_KausUIPolicy`
- 글로벌 데이터 에셋: `/Game/Systems/DA_KausGameData`

## 라이선스

본 저장소는 Epic Games 의 Lyra 샘플에서 파생되어, Epic Games EULA 의 적용을 받습니다.
파일 헤더의 저작권 표기는 `// Copyright Project Kaus. All Rights Reserved.` 입니다.
