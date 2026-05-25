// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffect.h"
#include "KausTextEffect_RichShake.generated.h"

/**
 * <Shake> 태그로 텍스트를 감싸는 Visual 효과.
 *
 * RichWave와 동일 패턴. 시각화는 Style Set의 'Shake' 행 Font Material이 담당.
 *
 * 출력 예: 입력 "위험!" → "<Shake intensity=\"3.00\">위험!</>"
 */
UCLASS(meta = (DisplayName = "RichShake (Shake 마크업 감싸기)"))
class KAUS_API UKausTextEffect_RichShake : public UKausTextEffect
{
    GENERATED_BODY()

public:
    UKausTextEffect_RichShake();

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
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|RichShake")
    FString TagName = TEXT("Shake");

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|RichShake",
              meta = (UIMin = "0.0", UIMax = "10.0"))
    float Intensity = 3.0f;
};
