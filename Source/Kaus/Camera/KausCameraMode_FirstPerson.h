#pragma once

#include "CoreMinimal.h"
#include "KausCameraMode.h"
#include "Curves/CurveVector.h"
#include "KausCameraMode_FirstPerson.generated.h"

/**
 * UKausCameraMode_FirstPerson
 */
UCLASS(Abstract, Blueprintable)
class UKausCameraMode_FirstPerson : public UKausCameraMode
{
	GENERATED_BODY()

public:
	UKausCameraMode_FirstPerson();

protected:
	virtual void UpdateView(float DeltaTime) override;
	virtual FVector GetPivotLocation() const override;

protected:
	// Curve that defines local-space offsets from the target using the view pitch to evaluate the curve.
	UPROPERTY(EditDefaultsOnly, Category = "First Person", Meta = (EditCondition = "!bUseRuntimeFloatCurves"))
	TObjectPtr<const UCurveVector> TargetOffsetCurve;

	// UE-103986: Live editing of RuntimeFloatCurves during PIE does not work (unlike curve assets).
	// Once that is resolved this will become the default and TargetOffsetCurve will be removed.
	UPROPERTY(EditDefaultsOnly, Category = "First Person")
	bool bUseRuntimeFloatCurves;

	UPROPERTY(EditDefaultsOnly, Category = "First Person", Meta = (EditCondition = "bUseRuntimeFloatCurves"))
	FRuntimeFloatCurve TargetOffsetX;

	UPROPERTY(EditDefaultsOnly, Category = "First Person", Meta = (EditCondition = "bUseRuntimeFloatCurves"))
	FRuntimeFloatCurve TargetOffsetY;

	UPROPERTY(EditDefaultsOnly, Category = "First Person", Meta = (EditCondition = "bUseRuntimeFloatCurves"))
	FRuntimeFloatCurve TargetOffsetZ;
};