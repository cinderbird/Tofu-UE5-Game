#pragma once
#include "CoreMinimal.h"
#include "Engine/DataAsset.h"
#include "GameplayTagContainer.h"
#include "KausNodeAction.h"
#include "KausNodeInteractionPayload.h"
#include "Abilities/GameplayAbility.h"
#include "KausNodeTransitionCondition.h"
#include "KausNodeDataAsset.generated.h"

class UUserWidget;

/**
 * FKausNodeState — 노드가 가질 수 있는 한 가지 상태의 정의.
 *
 * 한 노드는 여러 State 를 가지고 그중 정확히 하나가 활성. State 가 바뀌면
 * 가시성/콜리전/인디케이터/외곽선이 일괄 적용된다(UKausNodeComponent::ChangeNodeState).
 *
 * 명명 규칙: StateTag 는 "Node.<노드이름>.State.<상태이름>" 형식 권장.
 */
// 1. STATE
USTRUCT(BlueprintType)
struct FKausNodeState
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    FGameplayTag StateTag;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    bool bIsVisible = true;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly)
    TSoftClassPtr<UUserWidget> IndicatorWidgetClass;

    /** 이 State에서 Outline(외곽선) 표시를 허용할지. false면 SetOutlineEnabled 호출은 무시된다. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Outline")
    bool bAllowOutline = false;

    /** 이 State에서 Outline 활성 시 사용할 Custom Depth Stencil 값. PostProcess 머티리얼이 이 값으로 외곽선을 식별한다. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Outline", meta=(EditCondition="bAllowOutline", ClampMin="0", ClampMax="255"))
    int32 OutlineStencilValue = 1;

    /** Outline이 활성화되어 있는 동안 Actor 위에 표시할 Indicator 위젯. Outline OFF 시 자동으로 사라진다. Hover Indicator(IndicatorWidgetClass)보다 우선한다. */
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Outline", meta=(EditCondition="bAllowOutline"))
    TSoftClassPtr<UUserWidget> OutlineIndicatorWidgetClass;
};

/**
 * FKausNodeReaction — ECA(Event-Condition-Action) 1개 규칙.
 *
 * "어떤 이벤트가 오면 + 어떤 조건이 모두 통과하면 → 어떤 액션들을 실행한다"를 데이터로 표현.
 * 노드 간 결합이 이 구조체 위에서만 일어나므로(다른 노드를 직접 참조하지 않는다),
 * 새 노드를 추가해도 기존 노드의 데이터는 그대로 둘 수 있다.
 *
 * 평가 규칙:
 *  - ListenEventTag 는 PartialMatch — 부모 태그를 들으면 자식 이벤트도 함께 잡힌다.
 *  - Conditions 는 AND. 비어 있으면 무조건 통과.
 *  - Actions 는 등록 순서대로 순차 실행. 중간에 분기/중단 없음.
 */
// 2. REACTION
USTRUCT(BlueprintType)
struct FKausNodeReaction
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Reaction|Event")
    FGameplayTag ListenEventTag;

    UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadOnly, Category = "Reaction|Condition")
    TArray<TObjectPtr<UKausNodeTransitionCondition>> Conditions;

    UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadOnly, Category = "Reaction|Action")
    TArray<TObjectPtr<UKausNodeAction>> Actions; 
};

/**
 * FKausNodeInteraction — 플레이어가 노드를 클릭했을 때 뜨는 메뉴 항목 1개.
 *
 * "어떤 상태에서 보이고, 어떤 어빌리티가 발동되며, 어떤 페이로드를 전달하는가" 를 묶음.
 * GrantedAbility 가 실제 행동을 수행하고, PayloadData 가 행동에 필요한 데이터를 운반한다.
 *
 * PayloadData 가 Instanced 인 이유: 페이로드 종류(현재 Dialogue 1종)를 다형성으로 확장할 수 있도록.
 */
// 3. INTERACTION
USTRUCT(BlueprintType)
struct FKausNodeInteraction
{
    GENERATED_BODY()

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction")
    FGameplayTag RequiredStateTag; 

    //UI에 표시될 상호작용 이름
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction|UI")
    FText InteractionName;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction|UI")
    TSoftClassPtr<UUserWidget> InteractionPromptWidgetClass;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Interaction|Execution")
    TSubclassOf<UGameplayAbility> GrantedAbility; 

    UPROPERTY(EditDefaultsOnly, Instanced, BlueprintReadOnly, Category = "Interaction|Execution")
    UKausNodeInteractionPayload* PayloadData = nullptr; 
};

/**
 * UKausNodeDataAsset
 *
 * 한 노드(스마트폰, 거울, 옷장 등)의 모든 정적 정의를 담는 데이터 애셋.
 *
 * 구성:
 *  - InitialStateTag : 시작 상태. 반드시 States 배열의 어느 한 원소의 StateTag 와 일치해야 함.
 *  - States          : 가질 수 있는 모든 상태(가시성·인디케이터·외곽선)
 *  - Reactions       : 외부 이벤트에 반응하는 ECA 규칙들(노드 간 결합이 여기서 표현됨)
 *  - Interactions    : 플레이어 메뉴에 노출되는 항목들과 그 결과 어빌리티
 *
 * UKausNodeComponent.NodeDataAsset 슬롯에 이 애셋을 지정하면 컴포넌트가 BeginPlay 에서
 * Reactions 리스너를 등록하고 InitialStateTag 로 진입한다.
 *
 * 명명 규칙(권장): DA_Node_<노드이름> — 예: DA_Node_Phone.
 */
// Kaus Node Data Asset
UCLASS(BlueprintType)
class KAUS_API UKausNodeDataAsset : public UPrimaryDataAsset
{
    GENERATED_BODY()

public:
    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Setup")
    FGameplayTag InitialStateTag;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|State", meta=(TitleProperty="StateTag"))
    TArray<FKausNodeState> States;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Reaction", meta=(TitleProperty="ListenEventTag"))
    TArray<FKausNodeReaction> Reactions;

    UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Kaus|Interaction", meta=(TitleProperty="RequiredStateTag"))
    TArray<FKausNodeInteraction> Interactions;
};
