#pragma once
#include "Engine/DataTable.h"
#include "ScalableFloat.h"
#include "GameplayTagContainer.h"
#include "KausUnitStatsRow.generated.h"

USTRUCT(BlueprintType)
struct FKausUnitStatsRow : public FTableRowBase
{
    GENERATED_BODY()

public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FGameplayTag UnitTag;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseVitalityCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseReactionSpeedCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseLogicCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseSelfEsteemCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseMotivationCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseDepressionCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseAnxietyCurve;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Stats")
    FScalableFloat BaseAngerCurve;
};
