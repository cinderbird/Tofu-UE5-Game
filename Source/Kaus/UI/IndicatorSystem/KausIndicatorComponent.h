#pragma once

#include "CoreMinimal.h"
#include "Components/SceneComponent.h"
#include "UI/IndicatorSystem/IndicatorDescriptor.h" 
#include "KausIndicatorComponent.generated.h"

/**
 * UKausIndicatorComponent
 * 
 */
UCLASS(ClassGroup = (Kaus), meta = (BlueprintSpawnableComponent))
class KAUS_API UKausIndicatorComponent : public USceneComponent
{
    GENERATED_BODY()

public:
    UKausIndicatorComponent();

protected:
    virtual void BeginPlay() override;
    virtual void EndPlay(const EEndPlayReason::Type EndPlayReason) override;

public:
    UFUNCTION(BlueprintCallable, Category = "Kaus|Indicator")
    virtual void ActivateIndicator();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Indicator")
    virtual void DeactivateIndicator();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Indicator")
    void SetIndicatorWidgetClass(TSoftClassPtr<UUserWidget> NewClass) { IndicatorWidgetClass = NewClass; }
    
protected:
    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    TSoftClassPtr<UUserWidget> IndicatorWidgetClass;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    EActorCanvasProjectionMode ProjectionMode = EActorCanvasProjectionMode::ComponentPoint;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    TEnumAsByte<EHorizontalAlignment> HAlignment = HAlign_Center;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    TEnumAsByte<EVerticalAlignment> VAlignment = VAlign_Center;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings|Screen")
    bool bClampToScreen = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings|Screen", meta = (EditCondition = "bClampToScreen"))
    bool bShowClampToScreenArrow = false;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings|Offset")
    FVector WorldPositionOffset = FVector::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings|Offset")
    FVector2D ScreenSpaceOffset = FVector2D::ZeroVector;

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    FVector BoundingBoxAnchor = FVector(0.5f, 0.5f, 0.5f);

    UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Indicator Settings")
    int32 Priority = 0;

private:
    UPROPERTY(Transient)
    TObjectPtr<UIndicatorDescriptor> ActiveIndicator;
};
