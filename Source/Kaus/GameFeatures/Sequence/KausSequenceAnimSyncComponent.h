#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Animation/KausAnimPhase.h"
#include "Animation/KausAnimMessages.h"
#include "KausSequenceAnimSyncComponent.generated.h"


UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausSequenceAnimSyncComponent : public UActorComponent
{
    GENERATED_BODY()

public:
    UKausSequenceAnimSyncComponent();

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Kaus|Anim")
    FGameplayTag FilterTag;

    /** 현재 AnimPhase (디버그 및 Blueprint 참조용). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|Anim")
    EKausAnimPhase CurrentAnimPhase = EKausAnimPhase::Intro;

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

private:
    void RegisterListener();
    void UnregisterListener();

    void OnPhaseChangedMessage(FGameplayTag Tag, const FKausAnimPhaseChangedMessage& Message);

    /**
     * IKausAnimPhaseHandler 를 구현한 객체를 탐색합니다.
     * AnimInstance → Owner Actor 순으로 확인합니다.
     * 없으면 nullptr 반환.
     */
    UObject* FindPhaseHandler() const;

    FGameplayMessageListenerHandle ListenerHandle;
};
