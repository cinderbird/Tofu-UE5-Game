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

UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausNodeComponent : public UActorComponent, public IInteractableTarget
{
    GENERATED_BODY()

public:
    UKausNodeComponent();

    UFUNCTION(BlueprintPure, Category = "Kaus|Node")
	static UKausNodeComponent* FindNodeComponent(const AActor* Actor) { return (Actor ? Actor->FindComponentByClass<UKausNodeComponent>() : nullptr); }

    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    void ChangeNodeState(FGameplayTag NewStateTag);

    /*
        임시 조치, 자기 자신의 Interaction을 스스로 실행하는 로직은 위험하다.
        그러나 시간이 없기에 이렇게 사용한다. 추후 반드시 제거해야 한다.
    */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    bool TriggerInteractionByIndex(int32 InteractionIndex, AActor* InstigatorOverride = nullptr);

    // IInteractableTarget 오버라이드
    virtual void GatherInteractionOptions(const FInteractionQuery& InteractQuery, FInteractionOptionBuilder& OptionBuilder) override;
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

    void SetupReactionListeners();
    bool EvaluateConditions(const TArray<TObjectPtr<UKausNodeTransitionCondition>>& Conditions, AActor* InstigatorActor);

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
