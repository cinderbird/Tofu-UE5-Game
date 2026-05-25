#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KausNodeTransitionCondition.generated.h"

class AActor;

/**
 * 상태 전이를 위한 조건을 평가하는 베이스 클래스입니다.
 * 블루프린트에서 상속받아 복잡한 수학 공식(예: 호감도 * 0.5 + 신뢰도 * 1.2 >= 100)을 노드로 짤 수 있습니다.
 */
UCLASS(DefaultToInstanced, EditInlineNew, Abstract, Blueprintable)
class KAUS_API UKausNodeTransitionCondition : public UObject
{
    GENERATED_BODY()

public:
    UKausNodeTransitionCondition() {}

    // C++에서 오버라이드하거나 호출할 때 사용하는 메인 함수
    virtual bool CheckCondition(AActor* TargetActor, AActor* InstigatorActor) const
    {
        return K2_CheckCondition(TargetActor, InstigatorActor);
    }

protected:
    // 기획자가 블루프린트에서 커스텀 수식과 로직을 작성하는 이벤트
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Condition", DisplayName = "Check Condition")
    bool K2_CheckCondition(AActor* TargetActor, AActor* InstigatorActor) const;

    virtual bool K2_CheckCondition_Implementation(AActor* TargetActor, AActor* InstigatorActor) const
    {
        return true; // 기본값은 통과
    }
};