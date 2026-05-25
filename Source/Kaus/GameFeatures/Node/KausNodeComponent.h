#pragma once
#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "KausNodeDataAsset.h"
#include "Interaction/IInteractableTarget.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "AbilitySystemComponent.h" 
#include "KausNodeEventPayload.h"
#include "KausNodeComponent.generated.h"

class UKausIndicatorComponent;

/**
 * UKausNodeComponent
 *
 * 월드의 상호작용 가능한 사물(스마트폰·거울·옷장 등) 1개를 표현하는 컴포넌트.
 * 액터에 이 컴포넌트가 붙어 있으면 그 액터는 "노드"가 된다.
 *
 * 핵심 설계 원칙 — 노드는 다른 노드를 직접 참조하지 않는다:
 *   노드 간 모든 통신은 GameplayMessageSubsystem(이벤트 버스)으로만 흐른다.
 *   덕분에 새 노드를 추가해도 기존 노드를 건드릴 필요가 없고,
 *   콘텐츠 결합이 모두 데이터 애셋(KausNodeDataAsset)의 ListenEventTag/BroadcastEvent
 *   설정만으로 표현된다.
 *
 * 한 노드의 동작은 데이터 애셋이 정의하는 세 가지로 구성된다:
 *   - States      : 가질 수 있는 상태 목록(가시성·콜리전·인디케이터·외곽선)
 *   - Reactions   : 외부 이벤트에 반응하는 ECA 규칙(이벤트 → 조건 → 액션)
 *   - Interactions: 플레이어에게 노출되는 메뉴 항목과 그 결과 어빌리티
 *
 * 본 컴포넌트가 구현하는 인터페이스:
 *   IInteractableTarget — 외부 Interaction 시스템이 상호작용 후보를 수집할 때
 *   GatherInteractionOptions / CustomizeInteractionEventData 를 통해 노드의 의도를 전달.
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausNodeComponent : public UActorComponent, public IInteractableTarget
{
    GENERATED_BODY()

public:
    UKausNodeComponent();

    UFUNCTION(BlueprintPure, Category = "Kaus|Node")
	static UKausNodeComponent* FindNodeComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UKausNodeComponent>() : nullptr); }

    /**
     * 노드의 현재 상태를 다른 상태로 전환한다.
     *
     * 단일 호출로 다음 부수 효과가 일괄 적용된다:
     *  - 가시성 / 콜리전 토글 (State.bIsVisible)
     *  - 인디케이터 위젯 클래스 교체
     *  - Outline(외곽선) 강제 해제 — 새 상태가 외곽선을 허용하는지 모르므로 안전하게 끔
     *
     * Action: State 변경(UKausAction_ChangeState) 의 실행 종점이기도 하다.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    void ChangeNodeState(FGameplayTag NewStateTag);

    /*
        임시 조치, 자기 자신의 Interaction을 스스로 실행하는 로직은 위험하다.
        그러나 시간이 없기에 이렇게 사용한다. 추후 반드시 제거해야 한다.
    */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    bool TriggerInteractionByIndex(int32 InteractionIndex, AActor* InstigatorOverride = nullptr);

    /**
     * IInteractableTarget — 옵션 수집 단계.
     * 외부 Interaction 스캐너 어빌리티가 호출. 현재 State 에 부합하는 Interaction 들을
     * FInteractionOption 으로 변환해 OptionBuilder 에 추가하고, 동시에 원본 데이터를
     * AvailableInteractionsCache 에 같은 순서로 캐싱해 둔다(다음 단계의 인덱스 조회용).
     */
    virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) override;

    /**
     * IInteractableTarget — 페이로드 주입 단계.
     * 플레이어가 옵션을 선택하면 외부에서 EventMagnitude 에 인덱스를 담아 호출한다.
     * 이 메서드가 AvailableInteractionsCache 에서 해당 Interaction 을 찾아 PayloadData(예:
     * UKausPayload_Dialogue)를 EventData.OptionalObject 에 끼워 넣는다.
     *
     * 옵션 수집과 페이로드 주입을 두 단계로 분리한 이유:
     *  - 메뉴를 띄우는 시점에는 어떤 옵션이 선택될지 모르므로, 모든 PayloadData 를
     *    미리 인스턴스화하지 않고 인덱스만 캐시.
     *  - 선택 직전 한 항목분의 페이로드만 주입 → 메모리/연산 최소화.
     */
    virtual void CustomizeInteractionEventData(const FGameplayTag& InteractionEventTag, FGameplayEventData& InOutEventData) override;
    
    FGameplayTag GetCurrentStateTag() const { return CurrentStateTag; }


    UFUNCTION(BlueprintCallable, Category = "Kaus|Node|Indicator")
    void ActivateIndicatorForCurrentState();

    /** Indicator를 비활성화. 호버 이탈 시 호출. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Node|Indicator")
    void DeactivateIndicatorForCurrentState();
    
    /** 현재 State가 bAllowOutline=true인 경우에만 Outline을 켠다. false 호출은 항상 끈다. Owner의 모든 PrimitiveComponent에 적용. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Node|Outline")
    void SetOutlineEnabled(bool bEnable);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Node|Debug")
    FGameplayTag GetCurrentStateDebug() const { return CurrentStateTag; }
    
protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

    /**
     * 데이터 애셋에 정의된 모든 Reaction 의 ListenEventTag 에 대해
     * GameplayMessageSubsystem 에 리스너를 등록한다.
     *
     * 노드끼리 서로의 포인터를 들고 있지 않은 채로 통신하기 위한 진입점:
     *   "내가 어떤 이벤트를 듣는가" 만 데이터로 선언하면, 누가 그 이벤트를 방송하든
     *   여기서 자동으로 연결된다. 발신자와 수신자의 결합이 데이터 애셋 위에서만 일어난다.
     */
    void SetupReactionListeners();

    /** Reaction.Conditions 를 AND 로 평가한다. 하나라도 false 면 즉시 false 반환(short-circuit). */
    bool EvaluateConditions(const TArray<TObjectPtr<UKausNodeTransitionCondition>>& Conditions, AActor* InstigatorActor);

    /**
     * 메시지 버스로부터 이벤트 수신 시 호출되는 ECA(Event-Condition-Action) 실행 진입점.
     *
     * 흐름:
     *   1) 데이터 애셋의 Reactions 를 순회
     *   2) 수신 이벤트 태그가 각 Reaction.ListenEventTag 와 매칭되면
     *   3) Conditions(블루프린트 평가 가능) 가 모두 통과할 때만
     *   4) Actions 를 등록 순으로 실행 (ChangeState / BroadcastEvent / ApplyGameplayEffect 등)
     *
     * 등록 시 PartialMatch 를 쓰므로 부모 태그 1개를 들으면 자식 이벤트들도 함께 수신된다.
     */
    UFUNCTION()
    void HandleNodeReactionEvent(FGameplayTag EventTag, const FKausEventPayload& Payload);

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Kaus|Setup")
    TObjectPtr<UKausNodeDataAsset> NodeDataAsset;

private:
    UPROPERTY(VisibleAnywhere, Category = "Kaus|State")
    FGameplayTag CurrentStateTag;

    UPROPERTY(Transient)
    TObjectPtr<UKausIndicatorComponent> IndicatorComponent;

    TArray<FGameplayMessageListenerHandle> ListenerHandles;
    TWeakObjectPtr<UAbilitySystemComponent> CachedASC;

    TArray<FKausNodeInteraction> AvailableInteractionsCache;

    /** SetOutlineEnabled(true)로 Outline이 켜져 있는지. Hover Indicator 활성/비활성 분기에 사용. */
    bool bOutlineActive = false;
};
