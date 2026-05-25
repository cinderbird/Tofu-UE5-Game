// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "GameTime/KausGameTimeMessageBroadcastSystem.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "KausTestTimeMessageBroadcaster.generated.h"

class UKausDayCycleSubsystem;

/**
 * 테스트용 broadcaster — 단위 테스트가 GameInstance subsystem registry 없이
 * DayCycleSubsystem과 GameplayMessageSubsystem을 직접 inject할 수 있도록 한다.
 *
 * UCLASS는 가드 없이 헤더에. cpp가 사용처를 WITH_DEV_AUTOMATION_TESTS로 가드.
 */
UCLASS()
class UKausTestGameTimeMessageBroadcastSystem : public UKausGameTimeMessageBroadcastSystem
{
    GENERATED_BODY()

public:
    /** 테스트가 직접 set. nullptr이면 기본 lookup으로 fallback. */
    UKausDayCycleSubsystem* InjectedDayCycle = nullptr;
    UGameplayMessageSubsystem* InjectedMessageSubsystem = nullptr;

protected:
    virtual UKausDayCycleSubsystem* GetDayCycleSubsystem() const override
    {
        return InjectedDayCycle;
    }

    virtual void BroadcastTimeMessage(
        const FGameplayTag& EventTag,
        const FKausTimeMessagePayload& Payload) const override
    {
        if (!EventTag.IsValid()) return;
        if (!InjectedMessageSubsystem) return;
        InjectedMessageSubsystem->BroadcastMessage(EventTag, Payload);
    }
};
