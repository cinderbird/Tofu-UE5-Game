# Node 시스템 문서 (코드 레퍼런스)

> 대상 독자: 시스템을 확장·디버깅할 프로그래머, 데이터 구조를 이해해야 할 기술기획
> 위치: `Source/Kaus/GameFeatures/Node/`
> 함께 볼 문서: `Docs/Kaus_노드시스템_기획자가이드.docx` (기획자용 작업 가이드), `Docs/INDICATOR_SYSTEM.md`
> 이 문서는 기획자 가이드의 **코드 레벨 동반 문서**다. "데이터로 무엇을 만드는가"는 기획자 가이드를, "코드가 실제로 어떻게 도는가"는 이 문서를 참고한다.

---

## 1. 한 줄 요약

플레이어가 다가가 클릭할 수 있는 월드의 모든 사물(스마트폰·거울·옷장 등)을 **노드**로 다룬다.
각 노드는 **상태(State)** 를 가지고, **상호작용(Interaction)** 으로 그 상태가 바뀌며,
한 노드의 변화가 **이벤트 버스**를 타고 다른 노드의 **반응(Reaction)** 을 깨워 연쇄한다.

핵심 설계 원칙: **노드는 다른 노드를 직접 참조하지 않는다.** 모든 결합은 게임플레이 태그 이벤트의
방송/구독으로만 이뤄지며, 그래서 새 노드를 추가해도 기존 노드를 건드릴 필요가 없다.

---

## 2. 전체 구조 — 4개 층

| 층 | 이름 | 대표 타입 | 역할 |
|----|------|----------|------|
| 1 | 데이터 정의 | `UKausNodeDataAsset` | 상태·반응·상호작용을 데이터 애셋으로 기술 (정적) |
| 2 | 노드 인스턴스 | `UKausNodeComponent` | 데이터 애셋을 액터에 붙여 실행. 현재 상태 보유, 이벤트 수신 |
| 3 | 발견과 호출 | `UKausGameplayAbility_Interact` 외 Interaction 시스템 | 주변 노드 스캔 → 메뉴 표시 → 선택된 행동 실행 |
| 4 | 이벤트 버스 | `UGameplayMessageSubsystem` (Epic) | 노드 간 모든 통신이 흐르는 통로 |

위층은 정적 콘텐츠, 아래로 갈수록 런타임에 살아 움직인다. 네 층은 서로를 직접 참조하지 않고
이벤트로 느슨하게 연결된다.

```
 [Layer 1] DataAsset ──(소유)──> [Layer 2] NodeComponent
                                      │  IInteractableTarget 구현
                                      ▼
 [Layer 3] Interaction Ability ──스캔/메뉴/실행──> GameplayAbility 발동
                                      │  Action 실행
                                      ▼
 [Layer 4] GameplayMessageSubsystem ──BroadcastMessage──> 다른 NodeComponent의 Reaction
```

---

## 3. 데이터 구조 레퍼런스 (Layer 1)

**파일**: `KausNodeDataAsset.h`

### 3.1 `UKausNodeDataAsset` (UPrimaryDataAsset)

한 노드의 모든 정의를 담는 메인 데이터 애셋. 명명 규칙 `DA_Node_[이름]`.

| 필드 | 타입 | 의미 |
|------|------|------|
| `InitialStateTag` | `FGameplayTag` | 시작 상태. **반드시 `States` 배열에 같은 태그가 존재해야 한다.** |
| `States` | `TArray<FKausNodeState>` | 가질 수 있는 모든 상태 |
| `Reactions` | `TArray<FKausNodeReaction>` | 외부 이벤트에 반응하는 ECA 규칙 |
| `Interactions` | `TArray<FKausNodeInteraction>` | 클릭 시 뜨는 메뉴 항목 |

### 3.2 `FKausNodeState`

| 필드 | 타입 | 의미 |
|------|------|------|
| `StateTag` | `FGameplayTag` | 상태 식별 태그 (예: `Node.Mirror.State.Cracked`) |
| `bIsVisible` | `bool` | 이 상태에서 액터 표시 여부. **콜리전도 함께 토글된다** (`SetActorEnableCollision`) |
| `IndicatorWidgetClass` | `TSoftClassPtr<UUserWidget>` | 호버 시 머리 위에 띄울 인디케이터 위젯 |
| `bAllowOutline` | `bool` | 이 상태에서 외곽선(Outline) 표시 허용 여부. false면 `SetOutlineEnabled(true)` 호출이 무시된다 |
| `OutlineStencilValue` | `int32` (0~255) | Outline 활성 시 Custom Depth Stencil 값. PostProcess 머티리얼이 이 값으로 외곽선을 식별 |
| `OutlineIndicatorWidgetClass` | `TSoftClassPtr<UUserWidget>` | Outline이 켜져 있는 동안 표시할 인디케이터. **호버 인디케이터보다 우선한다** |

### 3.3 `FKausNodeReaction` — ECA(Event-Condition-Action) 규칙

| 필드 | 타입 | 의미 |
|------|------|------|
| `ListenEventTag` | `FGameplayTag` | 구독할 이벤트 태그. **부분 일치(PartialMatch)** — `Event.Phone`을 들으면 `Event.Phone.Used`도 잡힌다 |
| `Conditions` | `TArray<UKausNodeTransitionCondition*>` (Instanced) | 통과해야 할 조건. 전부 통과해야 액션 실행 (AND). 비면 무조건 통과 |
| `Actions` | `TArray<UKausNodeAction*>` (Instanced) | 통과 시 순차 실행할 액션 |

### 3.4 `FKausNodeInteraction` — 메뉴 항목

| 필드 | 타입 | 의미 |
|------|------|------|
| `RequiredStateTag` | `FGameplayTag` | 이 상호작용이 노출될 상태. 비면 모든 상태에서 노출 |
| `InteractionName` | `FText` | 메뉴에 표시될 이름 (사용자 표시용 — 한국어 가능) |
| `InteractionPromptWidgetClass` | `TSoftClassPtr<UUserWidget>` | 상호작용 가능 시 띄울 프롬프트 위젯 |
| `GrantedAbility` | `TSubclassOf<UGameplayAbility>` | 선택 시 발동할 어빌리티 (예: `GA_InteractExecute_Dialogue`) |
| `PayloadData` | `UKausNodeInteractionPayload*` (Instanced) | 어빌리티에 전달할 데이터 꾸러미 |

### 3.5 `FKausEventPayload` — 이벤트 버스 표준 페이로드

**파일**: `KausNodeEventPayload.h`. 모든 `Event.*` 메시지가 이 구조체를 페이로드로 쓴다.

| 필드 | 타입 | 의미 |
|------|------|------|
| `Instigator` | `AActor*` | 이벤트를 유발한 액터 |
| `Target` | `AActor*` | 이벤트가 명시한 타겟 |
| `Value` | `float` | 단일 수치 (GE Level, 카운터 증분 등으로 재해석) |
| `Values` | `TMap<FGameplayTag, float>` | 태그별 수치 (다중 스탯 변동 등) |
| `Tags` | `FGameplayTagContainer` | 부가 태그 (Choice 기록 등에 사용) |
| `OptionalPayload` | `UObject*` | 임의 추가 데이터 |

`GetValueByTag(Tag, Default)` 헬퍼로 `Values`를 안전 조회한다.

### 3.6 `UKausNodeInteractionPayload` 계열

**파일**: `KausNodeInteractionPayload.h`. `Abstract` / `EditInlineNew` / `DefaultToInstanced` 베이스.

현재 구현체는 **`UKausPayload_Dialogue` 하나뿐**이다.

| 필드 | 타입 | 의미 |
|------|------|------|
| `DialogueGraph` | `TSoftObjectPtr<UMounteaDialogueGraph>` | 재생할 Mountea 대화 그래프 |
| `ControlLevel` | `ENodeDialogueControlLevel` | `Free`(자유) / `Full`(시퀀스 연동) |
| `LevelSequenceActor` | `TSoftObjectPtr<ALevelSequenceActor>` | `ControlLevel == Full`일 때만 노출. 대화와 동기화할 시퀀스 |

> 회상 컷·환각 트리거 같은 새 페이로드 종류는 프로그래머가 새 파생 클래스를 추가해야 한다.

---

## 4. 런타임 클래스 — `UKausNodeComponent` (Layer 2)

**파일**: `KausNodeComponent.h/.cpp`
**베이스**: `UActorComponent`, `IInteractableTarget`
액터에 이 컴포넌트가 붙어 있으면 그 액터가 "노드"다. `ClassGroup=(Kaus)`, BP 스폰 가능.

### 4.1 라이프사이클

**`BeginPlay()`**
1. Owner에서 `UKausIndicatorComponent`를 찾아 캐시 (인디케이터 표시용 — 없어도 동작)
2. Owner에서 ASC를 찾아 `CachedASC`에 캐시
3. `NodeDataAsset`이 있으면 `SetupReactionListeners()` 호출 후 `ChangeNodeState(InitialStateTag)`

**`EndPlay()`** — 등록한 모든 `FGameplayMessageListenerHandle`를 `Unregister`.

### 4.2 주요 함수

**`SetupReactionListeners()`**
`NodeDataAsset->Reactions`를 순회하며 유효한 `ListenEventTag`마다
`UGameplayMessageSubsystem`에 리스너를 등록한다. `MatchType = PartialMatch`,
콜백은 `HandleNodeReactionEvent`. 핸들은 `ListenerHandles`에 저장해 EndPlay에서 정리.

**`HandleNodeReactionEvent(EventTag, Payload)`**
이벤트 수신 시 호출. `NodeDataAsset->Reactions`를 다시 순회하며
`EventTag.MatchesTag(Reaction.ListenEventTag)`가 참인 규칙을 찾는다 →
`EvaluateConditions()`가 통과하면 → `Reaction.Actions`를 순차로 `ExecuteAction` 호출.

**`EvaluateConditions(Conditions, InstigatorActor)`**
조건 배열을 순회하며 하나라도 `CheckCondition`이 false면 즉시 false (AND 평가).
조건의 `TargetActor`는 항상 노드의 Owner, `InstigatorActor`는 `Payload.Instigator`.

**`ChangeNodeState(NewStateTag)`**
1. Outline이 켜져 있으면 끈다 (새 상태가 Outline을 허용하는지 모르므로 안전하게)
2. `CurrentStateTag`를 갱신
3. 새 상태를 `States`에서 찾아 `SetActorHiddenInGame` / `SetActorEnableCollision`을 `bIsVisible`로 적용
4. 인디케이터 컴포넌트가 있으면 `DeactivateIndicator()` 후, 상태에 위젯이 지정돼 있으면 위젯 클래스만 세팅 (활성화는 호버 이벤트가 결정)

**`GatherInteractionOptions(Query, Builder)`** — `IInteractableTarget` 구현
`Interactions`를 순회하며 `RequiredStateTag`가 비었거나 `CurrentStateTag`와 일치하는 항목만
`FInteractionOption`으로 변환해 빌더에 추가. 동시에 `AvailableInteractionsCache`에 원본을 캐싱
(다음 단계의 인덱스 조회용).

**`CustomizeInteractionEventData(Tag, InOutEventData)`** — `IInteractableTarget` 구현
`EventData.EventMagnitude`를 인덱스로 해석해 `AvailableInteractionsCache`에서 해당 상호작용을 찾고,
그 `PayloadData`를 `EventData.OptionalObject`에 주입한다. 이렇게 어빌리티가 페이로드를 받는다.

**`SetOutlineEnabled(bool)`**
현재 상태가 `bAllowOutline=true`일 때만 동작. Owner의 모든 `UPrimitiveComponent`에
`SetRenderCustomDepth` + `SetCustomDepthStencilValue`를 적용하고, 인디케이터를
Outline 위젯 ↔ 호버 위젯으로 전환한다. Outline이 켜져 있으면 호버 인디케이터 진입/이탈은 무시된다.

### 4.3 ⚠️ 임시 코드 — `TriggerInteractionByIndex()`

코드 주석에 명시된 **임시 조치**다:

> *"자기 자신의 Interaction을 스스로 실행하는 로직은 위험하다. 그러나 시간이 없기에 이렇게 사용한다. 추후 반드시 제거해야 한다."*

노드가 Interaction 시스템(Layer 3)을 거치지 않고 자기 상호작용을 직접 발동한다.
내부적으로 더미 `FInteractionQuery`로 `GatherInteractionOptions`를 호출해 옵션을 만들고,
ASC(Self 우선, 없으면 Instigator)에 `TAG_Ability_Interaction_Activate` 게임플레이 이벤트를 직접 보낸다.
**향후 정상 경로로 대체 대상.**

---

## 5. Action 클래스 — `UKausNodeAction`

**파일**: `KausNodeAction.h/.cpp`
`Abstract` / `EditInlineNew` / `DefaultToInstanced` 베이스. 순수 가상 `ExecuteAction(NodeComponent, Payload)`.

> 기획자 가이드 docx(v1.0)는 액션이 2종이라고 적혀 있으나, **현재 코드에는 6종**이 있다.

`EKausEffectTarget`로 효과 대상을 결정한다 (`ResolveTargetActor`):

| 모드 | 대상 |
|------|------|
| `Player` | `GetPlayerPawn(0)` |
| `Instigator` | `Payload.Instigator` |
| `Self` | 노드 Owner |
| `Target` | `Payload.Target` |

| 액션 클래스 | DisplayName | 동작 |
|-------------|-------------|------|
| `UKausAction_ChangeState` | Action: State 변경 | 대상 노드의 `ChangeNodeState(NewStateTag)` 호출 |
| `UKausAction_BroadcastEvent` | Action: 다른 이벤트 브로드캐스트 | `EventToBroadcast`를 메시지 버스에 방송. 페이로드는 유지하되 `Instigator`를 이 노드로 덮어씀 — **도미노의 핵심** |
| `UKausAction_ApplyGameplayEffect` | Action: GameplayEffect 적용 | 고정 GE 클래스를 대상 ASC에 적용. `bUsePayloadValueAsLevel`로 GE Level을 `Payload.Value`로 대체 가능 |
| `UKausAction_ApplyGameplayEffectByTag` | Action: 태그별 GameplayEffect 적용 (다중) | `Payload.Values`를 순회, `TagToEffectMap`에 매핑된 GE를 각 수치로 적용. 수치는 `MagnitudeTag`의 SetByCaller로 전달 |
| `UKausAction_RecordChoice` | Action: Choice 기록 | `UKausChoiceHistorySubsystem`에 선택 누적. `ChoiceTag`가 유효하면 단일 기록, 아니면 `Payload.Tags` 중 `Kaus.Choice.*`를 전부 기록 |
| `UKausAction_ApplyStatDeltas` | Action: Player 스텟 증감 | **데모용 단순화 버전.** GE 에셋 없이 `Payload.Values`의 `Kaus.Stat.*` 태그를 `UKausUnitAttributeSet`의 8개 속성에 직접 `ApplyModToAttribute(Additive)` |

> 정식 스탯 변동은 `ApplyGameplayEffect` / `ApplyGameplayEffectByTag`(GE 경유)를 쓴다.
> `ApplyStatDeltas`는 GE 에셋 없이 빠르게 데모를 굴리기 위한 우회 경로다.

---

## 6. Condition 클래스 — `UKausNodeTransitionCondition`

**파일**: `KausNodeTransitionCondition.h`
`Abstract` / `Blueprintable` / `EditInlineNew` / `DefaultToInstanced`.

베이스 구현은 항상 `true`(통과)를 반환한다. 실제 조건은 **블루프린트 자식 클래스**에서
`K2_CheckCondition(TargetActor, InstigatorActor)` (BlueprintNativeEvent)를 오버라이드해 만든다.

명명 규칙 `BP_Condition_[조건내용]`. 기획자 가이드가 권장하는 표준 컨디션 세트
(`BP_Condition_AttributeAtLeast`, `BP_Condition_DayAtLeast` 등)는 아직 C++로
들어와 있지 않다 — 자주 쓰는 컨디션을 C++ 표준 클래스로 승격하는 것이 확장 후보다.

---

## 7. 한 번의 상호작용에서 일어나는 일

```
1. Interaction 어빌리티가 0.1초 주기로 플레이어 주변(반경 ~5m)을 스캔
       └ Kaus_TraceChannel_Interaction 채널에 응답하는 액터를 발견
2. 발견된 노드의 GatherInteractionOptions() 호출
       └ CurrentStateTag에 맞는 Interaction만 FInteractionOption으로 반환
       └ NodeComponent는 원본을 AvailableInteractionsCache에 캐싱
3. 옵션 목록이 FKausInteractionUIMessage로 메시지 버스에 방송 → UI가 메뉴 표시
4. 플레이어가 항목 선택 → 그 항목의 GrantedAbility 발동
       └ CustomizeInteractionEventData()가 PayloadData를 EventData.OptionalObject에 주입
5. 어빌리티 실행 (예: GA_InteractExecute_Dialogue → Mountea 대화 그래프 재생)
6. 어빌리티 진행 중/종료 시, Action(BroadcastEvent) 등으로 Event.* 방송 가능
7. 그 이벤트 태그를 ListenEventTag로 구독하던 다른 노드의 HandleNodeReactionEvent 발동
       └ Condition 통과 시 → Action 실행 → ChangeState/Broadcast로 연쇄(도미노)
```

---

## 8. 연결 시스템

### 8.1 Interaction 시스템 — Layer 3

**위치**: `Source/Kaus/GameFeatures/Interaction/`

- **`IInteractableTarget`** (`IInteractableTarget.h`) — 노드가 구현하는 인터페이스.
  `GatherInteractionOptions` / `CustomizeInteractionEventData` 두 함수로 구성.
  `FInteractionOptionBuilder`가 옵션 수집을 중계한다.
- **`FInteractionOption`** (`InteractionOption.h`) — 상호작용 1건의 표현.
  두 가지 발동 방식 지원: ① 아바타에 어빌리티를 부여(`InteractionAbilityToGrant`),
  ② 대상이 가진 ASC의 어빌리티를 발동(`TargetAbilitySystem` + `TargetInteractionAbilityHandle`).
  노드는 ①을 쓰며 `TargetAbilitySystem`에 `CachedASC`를 채워 넣는다.
- **`FInteractionQuery`** (`InteractionQuery.h`) — 요청자 정보(아바타·컨트롤러·부가 데이터).
- **`UKausGameplayAbility_Interact`** (`Abilities/KausGameplayAbility_Interact.h`) — **Layer 3의 스캐너 어빌리티**(Abstract).
  `InteractionScanRate`(0.1s) 주기로 `InteractionScanRange`(500) 범위를 스캔,
  발견 대상을 `UKausInteractionEntryData` 목록으로 만들어 `FKausInteractionUIMessage`로 방송한다.
  타겟 순환(`CycleInteractionTarget`)·선택(`SetInteractionTargetIndex`)·인디케이터/Outline 갱신을 담당.
- **`KausInteractionZone`** (`KausInteractionZone.h/.cpp`) — 스켈레톤 소켓에 붙는 콜리전 존(Capsule/Box/Sphere).
  노드 액터가 `Kaus_TraceChannel_Interaction` 채널에 응답해야 스캐너에 잡힌다.

### 8.2 Indicator 시스템

노드는 Owner의 `UKausIndicatorComponent`를 통해 머리 위 인디케이터를 제어한다.
**호버 인디케이터**(상태별 `IndicatorWidgetClass`)와 **Outline 인디케이터**(`OutlineIndicatorWidgetClass`)
두 채널이 있고, Outline이 켜져 있으면 Outline 쪽이 우선한다. 상세는 `Docs/INDICATOR_SYSTEM.md`.

### 8.3 이벤트 버스 — `UGameplayMessageSubsystem`

Epic의 `GameplayMessageRuntime` 플러그인. 노드 간 모든 통신의 통로다.
- 노드는 `BeginPlay`에서 `RegisterListener`(PartialMatch)로 구독,
- `UKausAction_BroadcastEvent`가 `BroadcastMessage`로 발신한다.
- 모든 `Event.*` 메시지의 페이로드 타입은 `FKausEventPayload`로 통일된다(시간 메시지는 §8.4 참고).

### 8.4 GameTime 시스템 → `Event.Time.*`

**위치**: `Source/Kaus/GameFeatures/GameTime/`

시간 흐름에 따른 노드 반응(예: "새벽에만 채팅 인터랙션 노출")은 이 다리로 연결된다.

- **`UKausDayCycleSubsystem`** — 현재 `(날짜, 사이클)` 좌표를 보유, 변경 시 `OnCycleChanged` 방송.
- **`UKausGameTimeMessageBroadcastSystem`** (`KausGameTimeMessageBroadcastSystem.h`) — **어댑터**.
  `OnCycleChanged`를 받아 게임플레이 메시지로 변환·방송한다:
  - `Event.Time.CycleEntered.{사이클}` / `Event.Time.CycleExiting.{사이클}`
  - `Event.Time.DayStart` / `Event.Time.DayEnd` (날짜 경계 통과 시)
  - 발사 순서(날짜 경계 통과): `CycleExiting → DayEnd → DayStart → CycleEntered → Additional`
- 시간 메시지의 페이로드는 **`FKausTimeMessagePayload`** (새/이전 좌표, `bDateChanged`)로,
  Node 이벤트의 `FKausEventPayload`와는 별개 구조체다. 노드 Reaction이 `Event.Time.*`를
  구독하려면 콜백 시그니처를 이 페이로드에 맞춰야 한다.

> 주의: `MakeChildEventTag`는 등록되지 않은 자식 태그를 발사하지 않는다.
> 모든 사이클에 대응하는 `Event.Time.CycleEntered.{X}` 태그를 미리 등록해야 동작한다.

### 8.5 ChoiceHistory / NarrativeState 서브시스템

**위치**: `Source/Kaus/System/KausChoiceHistorySubsystem.h`, `Source/Kaus/GameFeatures/Narrative/KausNarrativeStateSubsystem.h`

- **`UKausChoiceHistorySubsystem`** — GameInstance 수명. 대화 선택의 누적 횟수를 추적.
  `UKausAction_RecordChoice`가 여기에 기록한다. 계층 합산(`GetTotalCountMatching`) 지원.
- **`UKausNarrativeStateSubsystem`** — 영속적 사실의 단일 진리원.
  `Flags`(binary 사실) + `Counters`(누적 수치)를 보유. SaveGame 캡처/복원 인터페이스(미완).
  **헤더 주석에 따르면 이 시스템이 임시 `ChoiceHistorySubsystem`을 대체할 예정**이며,
  마이그레이션이 별도 단계로 남아 있다 — 현재는 두 시스템이 공존한다.

### 8.6 Dialogue 시스템

`UKausPayload_Dialogue`가 `MounteaDialogueGraph`를 가리키고, 상호작용의 `GrantedAbility`
(`GA_InteractExecute_Dialogue` 등)가 발동되면 그 어빌리티가 페이로드의 그래프를 재생한다.
`ControlLevel == Full`이면 `LevelSequenceActor`와 동기화된다 (대화-시퀀스 연동).
Mountea 통합 어댑터는 `Source/Kaus/GameFeatures/Dialogue/`.

---

## 9. 알려진 한계와 확장 후보

| 항목 | 현재 상태 | 비고 |
|------|----------|------|
| `TriggerInteractionByIndex` | 임시 코드 — 노드가 자기 상호작용을 직접 발동 | 코드 주석에 "추후 반드시 제거" 명시 |
| State의 표현력 | `bIsVisible` + 인디케이터 + Outline만 | 머티리얼/메시/사운드 교체는 "상태 변경 → 이벤트 방송 → 액터 BP가 수신" 우회 패턴 사용 |
| 상태 진입/퇴장 훅 | 없음 | `ChangeNodeState` 시 자동 효과 적용/이벤트 방송을 위한 `OnEnterState` 콜백이 확장 후보 |
| 표준 Condition 세트 | C++에 없음 | `BP_Condition_*`를 매번 BP로 작성. 자주 쓰는 것을 C++ 표준 클래스로 승격 권장 |
| Payload 종류 | `UKausPayload_Dialogue` 하나 | 회상 컷·환각 트리거 등은 새 파생 클래스 필요 |
| Narrative 마이그레이션 | `ChoiceHistory` ↔ `NarrativeState` 공존 | `NarrativeStateSubsystem`으로 일원화 예정 |
| 순환 참조 | 방어 코드 없음 | `A→B→C→A` 이벤트 사슬은 무한 루프 위험. 데이터 설계 시 주의 |

---

## 10. 관련 파일 색인

| 파일 | 역할 |
|------|------|
| `GameFeatures/Node/KausNodeDataAsset.h` | 데이터 애셋·구조체 정의 (State/Reaction/Interaction) |
| `GameFeatures/Node/KausNodeComponent.h/.cpp` | 노드 런타임 컴포넌트 |
| `GameFeatures/Node/KausNodeAction.h/.cpp` | 6종 액션 구현 |
| `GameFeatures/Node/KausNodeTransitionCondition.h` | 컨디션 베이스 클래스 |
| `GameFeatures/Node/KausNodeInteractionPayload.h` | 페이로드 베이스 + Dialogue 페이로드 |
| `GameFeatures/Node/KausNodeEventPayload.h` | 이벤트 버스 표준 페이로드 `FKausEventPayload` |
| `GameFeatures/Node/KausNodeInteractionListItemData.h` | 상호작용 UI 리스트 항목 데이터 |
| `GameFeatures/Interaction/IInteractableTarget.h` | 노드가 구현하는 상호작용 인터페이스 |
| `GameFeatures/Interaction/InteractionOption.h` / `InteractionQuery.h` | 상호작용 옵션·질의 구조체 |
| `GameFeatures/Interaction/Abilities/KausGameplayAbility_Interact.h` | Layer 3 스캐너 어빌리티 |
| `GameFeatures/Interaction/KausInteractionZone.h/.cpp` | 콜리전 기반 상호작용 존 |
| `GameFeatures/GameTime/KausGameTimeMessageBroadcastSystem.h` | DayCycle → `Event.Time.*` 어댑터 |
| `GameFeatures/Narrative/KausNarrativeStateSubsystem.h` | 영속적 내러티브 상태(Flags/Counters) |
| `System/KausChoiceHistorySubsystem.h` | 대화 선택 누적 추적 |
| `AbilitySystem/Attributes/KausUnitAttributeSet.h` | 8종 심리 속성 정의 |

> 콘텐츠 작성 절차(새 노드 추가·도미노 설계·디버깅 체크리스트·명명 규칙)는
> `Docs/Kaus_노드시스템_기획자가이드.docx`를 참고한다.
