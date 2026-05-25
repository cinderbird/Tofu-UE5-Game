// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "GameplayTagContainer.h"
#include "GameTime/KausGameTimeMessageBroadcastSystem.h"
#include "KausTimeMessageTestListener.generated.h"

/**
 * GameplayMessageSubsystem의 Listener에서 받은 메시지를 누적 기록.
 *
 * GameplayMessageSubsystem은 native callback을 사용하므로 UFUNCTION이 필요 없다.
 * 그러나 UCLASS로 두어 GC + AddToRoot 패턴을 일관되게 적용.
 */
UCLASS()
class UKausTimeMessageTestListener : public UObject
{
    GENERATED_BODY()

public:
    /** 받은 메시지의 (Tag, Payload) 누적. */
    struct FRecord
    {
        FGameplayTag Tag;
        FKausTimeMessagePayload Payload;
    };
    TArray<FRecord> Received;

    void Reset() { Received.Reset(); }

    /** GameplayMessageSubsystem이 호출. */
    void OnMessage(const FGameplayTag& Channel, const FKausTimeMessagePayload& Payload)
    {
        Received.Add({Channel, Payload});
    }

    /** 특정 태그를 받은 횟수. */
    int32 CountOf(const FGameplayTag& Tag) const
    {
        int32 N = 0;
        for (const FRecord& R : Received)
        {
            if (R.Tag.MatchesTagExact(Tag)) ++N;
        }
        return N;
    }
};
