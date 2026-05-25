// .h
#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "Animation/KausAnimPhase.h"
#include "KausSequenceBlueprintLibrary.generated.h"

UCLASS()
class KAUS_API UKausSequenceBlueprintLibrary : public UBlueprintFunctionLibrary
{
    GENERATED_BODY()

public:
    /** 시퀀서 이벤트 트랙에서 호출하여 AnimPhase 변경을 방송합니다. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|Sequence",
              meta = (WorldContext = "WorldContextObject"))
    static void BroadcastAnimPhaseChange(
        const UObject* WorldContextObject,
        EKausAnimPhase NewPhase,
        float BlendDuration = 0.0f);
};
