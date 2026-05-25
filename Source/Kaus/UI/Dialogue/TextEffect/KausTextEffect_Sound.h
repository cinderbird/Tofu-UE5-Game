// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffect.h"
#include "KausTextEffect_Sound.generated.h"

class USoundBase;

/**
 * 글자 추가 시 효과음 재생.
 *
 * 단계 3 변경 없음 — Text 모드 유지.
 * Sound는 텍스트 변형 없이 길이 변화만 관찰하므로 마크업 인식이 굳이 필요 없음.
 *
 * EffectWidget의 토큰 ↔ 텍스트 변환 흐름에서:
 *  - Reveal 단계의 TypeWriter (Tokens 모드)가 먼저 적용
 *  - 그 다음 Reveal 단계의 Sound (Text 모드) 적용 시 토큰 → 텍스트 변환 1회 발생
 *  - Sound는 변환된 CurrentText의 길이를 보고 사운드 재생
 *
 * 약간의 부정확함: 마크업 문자도 길이 카운트에 포함되어 사운드 재생 타이밍이 완벽하진 않음.
 * 단계 4 작업으로 Sound도 Tokens 모드로 옮길 수 있음 (현재 데모 범위에선 무시 가능).
 */
UCLASS(meta = (DisplayName = "TypeSound (글자별 효과음)"))
class KAUS_API UKausTextEffect_Sound : public UKausTextEffect
{
    GENERATED_BODY()

public:
    UKausTextEffect_Sound();

    virtual EKausTextEffectStage GetStage_Implementation() const override
    {
        return EKausTextEffectStage::Reveal;
    }

    // EffectMode는 기본 Text 그대로 (오버라이드 안 함)

    virtual void OnEffectBegin_Implementation(const FKausTextEffectContext& Context) override;
    virtual FText TickEffect_Implementation(const FKausTextEffectContext& Context) override;

protected:
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Sound")
    TObjectPtr<USoundBase> TypeSound;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Sound",
              meta = (ClampMin = "1", UIMin = "1", UIMax = "10"))
    int32 PlayInterval = 2;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Sound",
              meta = (ClampMin = "0.0", UIMin = "0.0", UIMax = "2.0"))
    float VolumeMultiplier = 1.0f;

    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect|Sound",
              meta = (ClampMin = "0.5", UIMin = "0.5", UIMax = "2.0"))
    float PitchVariance = 0.05f;

private:
    UPROPERTY(Transient)
    int32 LastRevealedChars = 0;
};
