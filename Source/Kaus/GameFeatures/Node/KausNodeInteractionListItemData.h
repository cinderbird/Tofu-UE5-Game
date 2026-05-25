#pragma once
#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KausNodeDataAsset.h" // FKausNodeInteraction 구조체 참조
#include "KausNodeInteractionListItemData.generated.h"

class AActor;

/**
 * 상호작용 UI 리스트(Dynamic Entry Box 등)의 각 항목에 전달될 데이터 객체
 */
UCLASS(BlueprintType, Blueprintable)
class KAUS_API UKausNodeInteractionListItemData : public UObject
{
    GENERATED_BODY()

public:
    //현재 상호작용의 구체적인 데이터를 통째로 들고 있습니다.
    UPROPERTY(BlueprintReadWrite, Category = "Interaction UI", meta=(ExposeOnSpawn="true"))
    FKausNodeInteraction InteractionData;

    UPROPERTY(BlueprintReadWrite, Category = "Interaction UI", meta=(ExposeOnSpawn="true"))
    AActor* TargetActor = nullptr;

    UPROPERTY(BlueprintReadWrite, Category = "Interaction UI")
    bool bIsSelected = false;
};
