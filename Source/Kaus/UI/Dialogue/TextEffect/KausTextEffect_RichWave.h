// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffect.h"
#include "KausTextEffect_RichWave.generated.h"

/**
 * <Wave> 태그로 텍스트를 감싸는 Visual 효과.
 *
 * 단계 3 변경:
 *  - Tokens 모드로 전환 (토큰 트리에 SpanOpen/Close 직접 삽입)
 *  - 시각화는 RichTextStyleRow의 'Wave' 행에 지정된 Font Material이 담당
 *    (Steve Streeting 방식 — 머티리얼 그래프에서 사인파 Y 오프셋)
 *
 * 작동 흐름:
 *  1. TypeWriter가 토큰을 잘라 Context.CurrentTokens 갱신
 *  2. RichWave가 그 토큰들을 <Wave>...</> 마크업으로 감쌈
 *  3. EffectWidget이 토큰 → 텍스트 재조립 후 SetText
 *  4. RichTextBlock이 <Wave> 마크업을 보고 Wave 스타일 적용
 *  5. Wave 스타일의 Font Material이 시간에 따라 정점 변형
 *
 * 마크업 출력 예: 입력 "안녕" → "<Wave>안녕</>"
 *
 * 데코레이터 미등록 시:
 *  - Style Set DataTable에 'Wave' 행이 없으면 마크업이 평문으로 노출 (정상 fallback)
 *  - 작가가 효과 끄려면 BP에서 인스턴스 비활성/제거
 */
UCLASS(meta = (DisplayName = "RichWave (Wave 마크업 감싸기)"))
class KAUS_API UKausTextEffect_RichWave : public UKausTextEffect
{
    GENERATED_BODY()

public:
    UKausTextEffect_RichWave();

    virtual EKausTextEffectStage GetStage_Implementation() const override
    {
        return EKausTextEffectStage::Visual;
    }

    virtual EKausTextEffectMode GetEffectMode_Implementation() const override
    {
        return EKausTextEffectMode::Tokens;
    }

    virtual void TickEffect_Tokens_Implementation(FKausTextEffectContext& Context) override;

protected:
    /**
     * RichText 태그 이름. 기본은 "Wave".
     * Style Set DataTable의 Row Name과 정확히 일치해야 함 (대소문자 구분).
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|RichWave")
    FString TagName = TEXT("Wave");

    /**
     * 머티리얼에 전달할 amplitude 파라미터.
     * 머티리얼 그래프가 이 값을 어떻게 해석할지는 Wave 스타일의 Material Instance 설정에 따름.
     * 효과 클래스는 단순히 마크업 속성으로 전달만 함.
     */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|RichWave",
              meta = (UIMin = "0.0", UIMax = "20.0"))
    float Amplitude = 5.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|RichWave",
              meta = (UIMin = "0.0", UIMax = "10.0"))
    float Frequency = 2.0f;
};
