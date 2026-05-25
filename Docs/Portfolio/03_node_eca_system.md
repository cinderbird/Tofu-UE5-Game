# Node ECA(이벤트-조건-액션) 시스템 — 코드 수정 없는 인터랙션 설계

## 1. 문제 / 설계 목표

내러티브 게임의 방 안에 있는 모든 사물(스마트폰·거울·옷장·봉제인형 등)은 플레이어가
다가가 클릭할 수 있어야 하고, 한 사물의 변화가 다른 사물에 연쇄 반응을 일으켜야 한다.

각 오브젝트마다 인터랙션 로직을 코드로 박으면 다음 문제가 생긴다:

- 기획 변경(메뉴 항목 추가, 조건 수정, 도미노 규칙 변경) 마다 코드 수정 → 빌드 → 재배포.
- A 가 B 의 상태를 바꾸는 직접 참조가 늘면 한 노드 추가가 N 개 코드를 건드린다.
- 디자이너가 코드 도움 없이 콘텐츠를 추가할 수 없다.

설계 목표:

- **콘텐츠를 데이터 애셋만으로 표현** — 새 사물 추가, 상태 추가, 도미노 규칙 추가가 모두
  `KausNodeDataAsset` 편집으로 끝나야 한다.
- **노드 간 직접 참조 0** — 모든 결합은 게임플레이 태그 이벤트의 방송·구독으로만 일어난다.
- **확장 포인트의 다형성 보장** — 새 종류의 조건(Condition) 과 액션(Action) 은 자식 클래스만
  추가하면 시스템이 즉시 인식하게 만든다.

## 2. 구현 구조

핵심 파일:

- `Source/Kaus/GameFeatures/Node/KausNodeDataAsset.h` — State/Reaction/Interaction 구조체 + DataAsset
- `Source/Kaus/GameFeatures/Node/KausNodeComponent.h/.cpp` — 런타임 컴포넌트
- `Source/Kaus/GameFeatures/Node/KausNodeAction.h` — 액션 베이스 + 6종 구현
- `Source/Kaus/GameFeatures/Node/KausNodeTransitionCondition.h` — 조건 베이스

데이터 애셋이 정의하는 세 영역:

```
KausNodeDataAsset
├─ States[]        가질 수 있는 모든 상태(가시성·인디케이터·외곽선)
├─ Reactions[]     ECA 규칙: ListenEventTag + Conditions[] + Actions[]
└─ Interactions[]  플레이어 메뉴 항목: RequiredStateTag + GrantedAbility + PayloadData
```

### 2.1 메시지 버스 구독 — `SetupReactionListeners`

BeginPlay 에서 데이터 애셋의 모든 `Reaction.ListenEventTag` 를 `GameplayMessageSubsystem` 에
등록한다. 발신자가 누구인지는 알 필요 없다.

```cpp
void UKausNodeComponent::SetupReactionListeners()
{
    if (!NodeDataAsset || !UGameplayMessageSubsystem::HasInstance(this)) return;

    UGameplayMessageSubsystem& MessageSubsystem = UGameplayMessageSubsystem::Get(this);

    // DataAsset에 정의된 모든 Reaction(ECA) 이벤트의 리스너를 미리 등록
    for (const FKausNodeReaction& Reaction : NodeDataAsset->Reactions)
    {
        if (Reaction.ListenEventTag.IsValid())
        {
            FGameplayMessageListenerParams<FKausEventPayload> ListenerParams;
            // 자식 태그도 함께 잡기 위해 PartialMatch.
            ListenerParams.MatchType = EGameplayMessageMatch::PartialMatch;
            ListenerParams.SetMessageReceivedCallback(this, &UKausNodeComponent::HandleNodeReactionEvent);

            FGameplayMessageListenerHandle Handle = MessageSubsystem.RegisterListener(Reaction.ListenEventTag, ListenerParams);
            // EndPlay 에서 일괄 해제하기 위해 핸들 보관.
            ListenerHandles.Add(Handle);
        }
    }
}
```

### 2.2 ECA 실행 — `HandleNodeReactionEvent`

이벤트 수신 → 매칭 Reaction 탐색 → Conditions 평가(AND) → Actions 순차 실행.

```cpp
void UKausNodeComponent::HandleNodeReactionEvent(FGameplayTag EventTag, const FKausEventPayload& Payload)
{
    if (!NodeDataAsset) return;

    // 수신된 태그와 일치하는 Reaction 규칙 탐색
    for (const FKausNodeReaction& Reaction : NodeDataAsset->Reactions)
    {
        // 발신 이벤트가 Reaction.ListenEventTag 와 같거나 그 자식 태그인지 검사.
        if (EventTag.MatchesTag(Reaction.ListenEventTag))
        {
            // 모든 조건(Condition)이 만족되는지 검사
            if (EvaluateConditions(Reaction.Conditions, Payload.Instigator))
            {
                // 조건을 통과하면 등록된 모든 액션(Action)을 순차적으로 실행 (다형성 실행)
                for (UKausNodeAction* Action : Reaction.Actions)
                {
                    if (Action)
                    {
                        Action->ExecuteAction(this, Payload);
                    }
                }
            }
        }
    }
}
```

### 2.3 AND short-circuit 조건 평가

```cpp
bool UKausNodeComponent::EvaluateConditions(const TArray<TObjectPtr<UKausNodeTransitionCondition>>& Conditions, AActor* InstigatorActor)
{
    for (UKausNodeTransitionCondition* Condition : Conditions)
    {
        if (Condition && !Condition->CheckCondition(GetOwner(), InstigatorActor))
        {
            return false;
        }
    }
    return true;
}
```

### 2.4 다형성 확장 — Action / Condition

두 베이스 모두 `Abstract` + `EditInlineNew` + `DefaultToInstanced` 로 선언되어 데이터 애셋 안에
인스턴스로 보관된다. 새 종류는 자식 클래스만 추가하면 시스템이 그대로 인식한다.

```cpp
UCLASS(Abstract, BlueprintType, EditInlineNew, DefaultToInstanced)
class KAUS_API UKausNodeAction : public UObject
{
    GENERATED_BODY()
public:
    virtual void ExecuteAction(class UKausNodeComponent* TargetComponent, const struct FKausEventPayload& Payload)
        PURE_VIRTUAL(UKausNodeAction::ExecuteAction, );
    static AActor* ResolveTargetActor(EKausEffectTarget TargetMode, UKausNodeComponent* NodeComponent, const FKausEventPayload& Payload);
};
```

현재 구현체 6종: `ChangeState` / `BroadcastEvent` / `ApplyGameplayEffect` /
`ApplyGameplayEffectByTag` / `RecordChoice` / `ApplyStatDeltas`. 조건은 보통 블루프린트로
`UKausNodeTransitionCondition` 의 `K2_CheckCondition` 을 오버라이드해 만든다.

### 2.5 상태 전환의 일괄 처리 — `ChangeNodeState`

```cpp
void UKausNodeComponent::ChangeNodeState(FGameplayTag NewStateTag)
{
    if (!NodeDataAsset) return;

    // State 전환 시 이전 Outline 상태는 보존하지 않는다(새 State가 bAllowOutline인지 모르므로 안전하게 끔)
    if (bOutlineActive)
    {
        SetOutlineEnabled(false);
    }

    CurrentStateTag = NewStateTag;

    // 새 상태에 맞는 Visual/Collision 세팅 탐색 및 적용
    for (const FKausNodeState& State : NodeDataAsset->States)
    {
        if (State.StateTag == CurrentStateTag)
        {
            // 가시성과 콜리전을 동시에 토글 — "안 보이는 상태는 클릭도 안 되어야" 라는 정책.
            GetOwner()->SetActorHiddenInGame(!State.bIsVisible);
            GetOwner()->SetActorEnableCollision(State.bIsVisible);

            if (IndicatorComponent)
            {
                IndicatorComponent->DeactivateIndicator();
                if (!State.IndicatorWidgetClass.IsNull())
                {
                    IndicatorComponent->SetIndicatorWidgetClass(State.IndicatorWidgetClass);
                }
            }
            break;
        }
    }
    ...
}
```

## 3. 핵심 설계 결정

**직접 참조를 배제하고 `GameplayMessageSubsystem` 만 사용한 이유.**
데이터 애셋 위에서 콘텐츠 결합이 표현되도록 강제하기 위함이다. 노드 A 가 노드 B 를 직접
부르면 A 의 변경이 B 와 결합되어 새 노드 추가가 양쪽 코드를 만지게 만든다. 메시지 버스를
쓰면 발신자는 자기 이벤트만 알리고, 수신자는 자기 관심사만 듣는다. 새 노드를 추가해도 기존
노드의 데이터·코드를 건드릴 필요가 없다.

`PartialMatch` 등록으로 부모 태그 하나로 자식 이벤트들을 일괄 구독할 수 있게 했다 — 디자이너가
`Event.Phone` 만 듣게 두면 `Event.Phone.Used`, `Event.Phone.Charged` 가 모두 같은 핸들러로
들어온다.

**Condition/Action 을 `UObject` 다형성으로 처리한 이유.**
`Abstract` + `EditInlineNew` + `DefaultToInstanced` 조합은 다음 효과를 같이 가져온다:

- 데이터 애셋 안에서 디자이너가 종류를 골라 인스턴스화하고 그 자리에서 파라미터를 채울 수 있다.
- 새 종류는 자식 클래스만 추가하면 시스템이 그대로 인식. 가상 함수 한 개(`ExecuteAction` /
  `K2_CheckCondition`) 만 구현하면 끝.
- Condition 은 `Blueprintable` 이라 BP 자식으로 자유롭게 만들 수 있다 — 자주 쓰는 조건은
  `BP_Condition_AttributeAtLeast`, `BP_Condition_DayAtLeast` 같은 표준 BP 클래스로 빌드 가능.

**`ChangeNodeState` 가 Visual·Collision·Indicator 를 일괄 처리한 이유.**
세 가지를 따로 갱신하면 한 프레임 동안 모순된 상태가 노출될 수 있다 — "보이지 않는데 클릭은
가능" 같은 시각·논리 불일치. 한 함수에서 atomic 하게 처리해 호출자가 "상태가 바뀌었다" 한
가지만 신경 쓰면 되도록 응집도를 높였다. Outline 은 새 상태가 외곽선을 허용하는지 알 수 없어
안전하게 해제한다.

**`GatherInteractionOptions` ↔ `CustomizeInteractionEventData` 의 두 단계 분리.**
메뉴를 띄우는 시점에는 어떤 옵션이 선택될지 모른다. 모든 `PayloadData` 를 미리 인스턴스화해
실어 보내면 낭비. 그래서 1단계에서는 `FInteractionOption` 만 반환하고, 선택 직후 인덱스로
한 항목분의 페이로드만 `EventData.OptionalObject` 에 끼워 넣는다.

## 4. 결과 / 얻은 것

- 데이터 애셋만으로 새 노드·상태·도미노 규칙 추가 가능 — 코드 0줄 수정.
- 노드 간 모든 결합이 데이터 위에서 표현 → 변경 영향 면적이 한 애셋 안에 갇힘.
- 새 액션 종류 추가는 가상 함수 1개 구현만으로 완료, 디자이너에게 즉시 노출됨.
- 조건은 블루프린트로 작성 가능 — 디자이너가 새 임계값/공식을 직접 만든다.
- `PartialMatch` 로 부모 태그 1개에 자식 카테고리 전체를 묶을 수 있어 태그 설계가 자연스럽게 계층화된다.

## 관련 파일

| 파일 | 역할 |
|------|------|
| `Node/KausNodeDataAsset.h` | State/Reaction/Interaction 구조체 + DataAsset |
| `Node/KausNodeComponent.h/.cpp` | 런타임 컴포넌트, 메시지 구독·ECA 실행·상태 전환 |
| `Node/KausNodeAction.h` | 액션 베이스 + 6종 구현 |
| `Node/KausNodeTransitionCondition.h` | 조건 베이스 (BP 자식으로 확장) |
| `Node/KausNodeEventPayload.h` | 이벤트 버스 표준 페이로드 `FKausEventPayload` |
| `Docs/NODE_SYSTEM.md` | 시스템 전체 레퍼런스 |
| `Docs/Kaus_노드시스템_기획자가이드.docx` | 디자이너용 작업 가이드 |
