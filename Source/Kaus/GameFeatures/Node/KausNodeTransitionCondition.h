#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "KausNodeTransitionCondition.generated.h"

class AActor;

/**
 * 상태 전이를 위한 조건을 평가하는 베이스 클래스입니다.
 * 블루프린트에서 상속받아 복잡한 수학 공식(예: 호감도 * 0.5 + 신뢰도 * 1.2 >= 100)을 노드로 짤 수 있습니다.
 *
 * 이 클래스는 ECA 의 "C(Condition)" 자리를 추상화한다.
 * UKausNodeComponent::HandleNodeReactionEvent 가 Action 을 실행하기 직전에 모든 Condition 을
 * AND 로 평가하며, 하나라도 false 면 Action 들은 발동되지 않는다.
 *
 * EditInlineNew + DefaultToInstanced 로 데이터 애셋 안에 인스턴스로 보관된다 — 디자이너가
 * 같은 BP 클래스를 다른 임계값(예: Threshold)으로 여러 번 인스턴스화할 수 있도록.
 *
 * 명명 규칙(권장): BP_Condition_<조건내용> — 예: BP_Condition_AttributeAtLeast.
 */
UCLASS(DefaultToInstanced, EditInlineNew, Abstract, Blueprintable)
class KAUS_API UKausNodeTransitionCondition : public UObject
{
    GENERATED_BODY()

public:
    UKausNodeTransitionCondition() {}

    /**
     * C++ 에서 호출하거나 오버라이드할 때 사용하는 메인 함수.
     * 기본 구현은 BlueprintNativeEvent 인 K2_CheckCondition 으로 위임 — 블루프린트가 평가의 진실 소스가 된다.
     *
     * @param TargetActor      이 Reaction 의 호스트 노드의 Owner. "이 노드 자신" 을 가리킨다.
     * @param InstigatorActor  이벤트를 유발한 액터(Payload.Instigator). 보통 플레이어.
     */
    virtual bool CheckCondition(AActor* TargetActor, AActor* InstigatorActor) const
    {
        return K2_CheckCondition(TargetActor, InstigatorActor);
    }

protected:
    // 기획자가 블루프린트에서 커스텀 수식과 로직을 작성하는 이벤트
    UFUNCTION(BlueprintNativeEvent, Category = "Kaus|Condition", DisplayName = "Check Condition")
    bool K2_CheckCondition(AActor* TargetActor, AActor* InstigatorActor) const;

    /**
     * 기본값은 무조건 통과(true). 의도: 디자이너가 빈 컨디션을 깜빡 추가해도 시스템이 멈추지 않게 하기 위함.
     * 실제 검사 로직은 자식 클래스(보통 BP)가 K2_CheckCondition 을 오버라이드해 구현.
     */
    virtual bool K2_CheckCondition_Implementation(AActor* TargetActor, AActor* InstigatorActor) const
    {
        return true; // 기본값은 통과
    }
};