// Copyright Project Kaus. All Rights Reserved.

#include "KausTextEffect_TypeWriter.h"
#include "KausTextMarkup.h"

UKausTextEffect_TypeWriter::UKausTextEffect_TypeWriter()
{
    EffectName = TEXT("TypeWriter");
}

void UKausTextEffect_TypeWriter::TickEffect_Tokens_Implementation(FKausTextEffectContext& Context)
{
    if (Context.OriginalTokens.Num() == 0) return;

    // Easing 적용된 진행률
    const float EasedProgress = UKismetMathLibrary::Ease(
        0.f, 1.f, FMath::Clamp(Context.Progress, 0.f, 1.f),
        EasingFunction, EasingBlendExp);

    if (RevealUnit == EKausTextRevealUnit::Character)
    {
        const int32 TotalVisual = KausTextMarkup::GetTotalVisualLength(Context.OriginalTokens);
        if (TotalVisual <= 0) return;

        const int32 RevealedVisual = FMath::Clamp(
            FMath::FloorToInt(EasedProgress * TotalVisual),
            0, TotalVisual);

        Context.CurrentTokens = KausTextMarkup::SliceByVisualLength(
            Context.OriginalTokens, RevealedVisual);
    }
    else // Word 모드
    {
        const int32 TotalWords = KausTextMarkup::GetTotalWordCount(Context.OriginalTokens);
        if (TotalWords <= 0) return;

        const int32 RevealedWords = FMath::Clamp(
            FMath::FloorToInt(EasedProgress * TotalWords),
            0, TotalWords);

        Context.CurrentTokens = KausTextMarkup::SliceByWordCount(
            Context.OriginalTokens, RevealedWords);
    }
}
