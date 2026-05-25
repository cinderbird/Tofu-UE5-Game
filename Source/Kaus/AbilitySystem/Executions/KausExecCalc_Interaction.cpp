#include "KausExecCalc_Interaction.h"
#include "AbilitySystem/Attributes/KausUnitAttributeSet.h"
#include "AbilitySystemComponent.h"

// =========================================================================
// 1. 캡처할 스탯(Attribute)들을 정의하는 구조체 선언
// =========================================================================
struct KausInteractionStatics
{
    // 캡처 구조체 선언
    //DECLARE_ATTRIBUTE_CAPTUREDEF(Charm);
    //DECLARE_ATTRIBUTE_CAPTUREDEF(Guard);
    //DECLARE_ATTRIBUTE_CAPTUREDEF(Affection);



    KausInteractionStatics()
    {
        // Source(상호작용을 건 사람 = 플레이어)의 매력(Charm)을 캡처
        //DEFINE_ATTRIBUTE_CAPTUREDEF(UKausUnitAttributeSet, Charm, Source, false);

        // Target(상호작용을 받는 대상 = NPC)의 경계심(Guard)과 호감도(Affection)를 캡처
        //DEFINE_ATTRIBUTE_CAPTUREDEF(UKausUnitAttributeSet, Guard, Target, false);
        //DEFINE_ATTRIBUTE_CAPTUREDEF(UKausUnitAttributeSet, Affection, Target, false);


    }
};

static const KausInteractionStatics& InteractionStatics()
{
    static KausInteractionStatics Statics;
    return Statics;
}

// =========================================================================
// 2. 클래스 생성자 (캡처 정의 등록)
// =========================================================================
UKausExecCalc_Interaction::UKausExecCalc_Interaction()
{
    //RelevantAttributesToCapture.Add(InteractionStatics().CharmDef);
    //RelevantAttributesToCapture.Add(InteractionStatics().GuardDef);
    //RelevantAttributesToCapture.Add(InteractionStatics().AffectionDef);
}

// =========================================================================
// 3. 실제 수학적 연산 실행부
// =========================================================================
void UKausExecCalc_Interaction::Execute_Implementation(const FGameplayEffectCustomExecutionParameters& ExecutionParams, OUT FGameplayEffectCustomExecutionOutput& OutExecutionOutput) const
{
    //UAbilitySystemComponent* TargetASC = ExecutionParams.GetTargetAbilitySystemComponent();
    //UAbilitySystemComponent* SourceASC = ExecutionParams.GetSourceAbilitySystemComponent();
//
    //AActor* TargetActor = TargetASC ? TargetASC->GetAvatarActor() : nullptr;
    //AActor* SourceActor = SourceASC ? SourceASC->GetAvatarActor() : nullptr;
//
    //const FGameplayEffectSpec& Spec = ExecutionParams.GetOwningSpec();
//
    //// 평가용 파라미터 생성 (태그 필터링 등을 위해 필요)
    //FAggregatorEvaluateParameters EvaluateParameters;
    //EvaluateParameters.SourceTags = Spec.CapturedSourceTags.GetAggregatedTags();
    //EvaluateParameters.TargetTags = Spec.CapturedTargetTags.GetAggregatedTags();
//
    //// 1. 값 캡처 (가져오기)
    //float SourceCharm = 0.0f;
    //ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(InteractionStatics().CharmDef, EvaluateParameters, SourceCharm);
    //SourceCharm = FMath::Max<float>(SourceCharm, 0.0f); // 음수 방지
//
    //float TargetGuard = 0.0f;
    //ExecutionParams.AttemptCalculateCapturedAttributeMagnitude(InteractionStatics().GuardDef, EvaluateParameters, TargetGuard);
    //TargetGuard = FMath::Max<float>(TargetGuard, 0.0f);
//
    //// [베이스 상승량]: 이 GameplayEffect에 기본으로 설정된 Modifier 값 (예: '선물 주기' = 기본 호감도 +20)
    //float BaseAffectionGain = 0.0f;
    //// (선택 사항) Spec에 SetSetByCallerMagnitude를 통해 동적으로 기본값을 넘겨받을 수도 있습니다.
    //BaseAffectionGain = Spec.GetSetByCallerMagnitude(FGameplayTag::RequestGameplayTag(FName("Data.Interaction.BaseValue")), false, 10.0f);
//
    //// ==========================================
    //// 💡 [핵심] 커스텀 공식 적용 영역 (기획 의도에 맞게 마음껏 수정 가능)
    //// ==========================================
    //// 공식: 최종 호감도 = 기본 상승량 + (플레이어의 매력 * 1.5) - (NPC의 경계심)
    //float FinalAffectionGain = BaseAffectionGain + (SourceCharm * 1.5f) - TargetGuard;
//
    //// 만약 플레이어의 매력이 낮고 NPC의 경계심이 너무 높아서 음수가 나오면, 호감도는 안 오르는 것으로 처리 (최소 0)
    //FinalAffectionGain = FMath::Max<float>(FinalAffectionGain, 0.0f);
//
    //UE_LOG(LogTemp, Log, TEXT("[ExecCalc] 상호작용 계산: 플레이어 매력(%.1f), NPC 경계(%.1f) -> 최종 호감도 획득량: %.1f"), SourceCharm, TargetGuard, FinalAffectionGain);
//
    //// ==========================================
    //// 4. 결과 출력 (Apply)
    //// ==========================================
    //if (FinalAffectionGain > 0.0f)
    //{
    //    // Target의 Affection 속성에 최종 연산된 FinalAffectionGain 값을 'Add(더하기)' 하라고 지시합니다.
    //    OutExecutionOutput.AddOutputModifier(FGameplayModifierEvaluatedData(InteractionStatics().AffectionProperty, EGameplayModOp::Additive, FinalAffectionGain));
    //}
}