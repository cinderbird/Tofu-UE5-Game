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
