// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffect.h"
#include "Kismet/KismetMathLibrary.h"
#include "KausTextEffect_TypeWriter.generated.h"

/**
 * TypeWriter (타자기) Reveal 효과.
 *
 * 단계 3 변경:
 *  - Tokens 모드로 전환 (마크업 깨짐 없이 점진 노출)
 *  - RevealUnit 옵션 추가 (Character / Word)
 *
 * Character 모드:
 *  - 글자 단위 점진 노출
 *  - 한국어/영어/일본어/중국어 모두 자연스럽게 동작
 *
 * Word 모드:
 *  - 공백 기준 단어 단위 점진 노출
 *  - 한국어/영어에 자연스러움
 *  - 일본어/중국어는 작가가 의도적으로 공백 삽입 필요
 *
 * 모든 모드에서 마크업(<img/>, <Bold>, <Wave> 등)이 깨지지 않음.
 * KausTextMarkup의 토큰 슬라이서가 Span 자동 닫기 등을 처리.
 */
UCLASS(meta = (DisplayName = "TypeWriter (점진 노출)"))
class KAUS_API UKausTextEffect_TypeWriter : public UKausTextEffect
{
    GENERATED_BODY()

public:
    UKausTextEffect_TypeWriter();

    virtual EKausTextEffectStage GetStage_Implementation() const override
    {
        return EKausTextEffectStage::Reveal;
    }

    virtual EKausTextEffectMode GetEffectMode_Implementation() const override
    {
        return EKausTextEffectMode::Tokens;
    }

    virtual void TickEffect_Tokens_Implementation(FKausTextEffectContext& Context) override;

protected:
    /** 노출 단위. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|TypeWriter")
    EKausTextRevealUnit RevealUnit = EKausTextRevealUnit::Character;

    /** 노출 곡선. 기본 Linear가 일반적. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|TypeWriter")
    TEnumAsByte<EEasingFunc::Type> EasingFunction = EEasingFunc::Linear;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|TypeWriter",
              meta = (UIMin = "1.0", UIMax = "5.0"))
    float EasingBlendExp = 2.0f;
};
