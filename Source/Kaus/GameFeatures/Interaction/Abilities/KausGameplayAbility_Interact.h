#pragma once

#include "AbilitySystem/Abilities/KausGameplayAbility.h"
#include "Interaction/InteractionOption.h"
#include "Node/KausNodeDataAsset.h"
#include "KausGameplayAbility_Interact.generated.h"

class UIndicatorDescriptor;
class UObject;
class UUserWidget;
struct FFrame;
struct FGameplayAbilityActorInfo;
struct FGameplayEventData;

/**
 * CommonListView의 Item으로 사용되는 단위 데이터.
 * UObject를 상속해야 CommonListView에 바인딩 가능하다.
 */
UCLASS(BlueprintType)
class KAUS_API UKausInteractionEntryData : public UObject
{
    GENERATED_BODY()

public:
    // 이 항목이 가리키는 대상 Actor
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Interaction")
    TObjectPtr<AActor> TargetActor = nullptr;

    // 해당 대상이 제공하는 유효 상호작용 목록
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Interaction")
    TArray<FKausNodeInteraction> AvailableInteractions;

    // 전체 목록에서 이 항목의 인덱스 (선택 하이라이트 판단용)
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Interaction")
    int32 GlobalIndex = 0;

    // 현재 플레이어가 포커스한 대상인지 여부
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Interaction")
    bool bIsSelected = false;
};

/**
 * GameplayMessageSubsystem을 통해 발송되는 메시지.
 * 범위 내 모든 대상 목록과 현재 선택 인덱스를 포함한다.
 * Widget의 CommonListView는 이 데이터로 전체 목록을 갱신한다.
 */
USTRUCT(BlueprintType)
struct KAUS_API FKausInteractionUIMessage
{
    GENERATED_BODY()

    // 범위 내 모든 상호작용 가능 대상 목록 (CommonListView Item 배열)
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Interaction")
    TArray<TObjectPtr<UKausInteractionEntryData>> AllEntries;

    // 현재 선택(포커스)된 항목의 GlobalIndex
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Interaction")
    int32 SelectedGlobalIndex = 0;
};

UCLASS(Abstract)
class KAUS_API UKausGameplayAbility_Interact : public UKausGameplayAbility
{
    GENERATED_BODY()

public:
    UKausGameplayAbility_Interact(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get());

    virtual void ActivateAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, const FGameplayEventData* TriggerEventData) override;
    virtual void EndAbility(const FGameplayAbilitySpecHandle Handle, const FGameplayAbilityActorInfo* ActorInfo, const FGameplayAbilityActivationInfo ActivationInfo, bool bReplicateEndAbility, bool bWasCancelled) override;

    UFUNCTION(BlueprintCallable)
    void UpdateInteractions(const TArray<FInteractionOption>& InteractiveOptions);

    UFUNCTION(BlueprintCallable)
    void TriggerInteraction();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    void CycleInteractionTarget(bool bNext);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    void SetInteractionTargetIndex(int32 NewIndex);

    UFUNCTION(BlueprintPure, Category = "Kaus|Interaction")
    int32 GetSelectedInteractionIndex() const { return SelectedInteractionIndex; }

protected:
    UFUNCTION(BlueprintCallable, Category = "Kaus|Interaction")
    void BroadcastTargetSelectionMessage();

    void RefreshIndicators();
    void ClearAllIndicators();

    /** SelectedInteractionIndex의 Actor에 Outline ON, 그 외에는 OFF. Outline 캐시도 정리한다. */
    void RefreshOutlines();

    /** 모든 outlined Actor의 Outline을 끄고 캐시를 비운다. */
    void ClearAllOutlines();

protected:
    UPROPERTY(BlueprintReadWrite)
    TArray<FInteractionOption> CurrentOptions;

    UPROPERTY()
    TMap<TObjectPtr<AActor>, TObjectPtr<UIndicatorDescriptor>> IndicatorMap;

    /** 현재 Outline이 켜져 있는 Actor 캐시. 다음 갱신 시 OFF 처리 대상 추적용. */
    UPROPERTY()
    TSet<TWeakObjectPtr<AActor>> OutlinedActors;

    UPROPERTY(BlueprintReadWrite, Category = "Kaus|Interaction")
    int32 SelectedInteractionIndex = 0;

protected:
    UPROPERTY(EditDefaultsOnly)
    float InteractionScanRate = 0.1f;

    UPROPERTY(EditDefaultsOnly)
    float InteractionScanRange = 500;

    UPROPERTY(EditDefaultsOnly, Category = "Kaus|Interaction|Indicator")
    TSoftClassPtr<UUserWidget> InteractionIndicatorWidgetClass;

    UPROPERTY(EditDefaultsOnly, Category = "Kaus|Interaction|Indicator")
    TSoftClassPtr<UUserWidget> SelectedIndicatorWidgetClass;

    UPROPERTY(EditDefaultsOnly)
    TSoftClassPtr<UUserWidget> DefaultInteractionWidgetClass;
};
