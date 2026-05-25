// Copyright Project Kaus. All Rights Reserved.

#include "KausTextEffect_RichWave.h"

UKausTextEffect_RichWave::UKausTextEffect_RichWave()
{
    EffectName = TEXT("RichWave");
}

void UKausTextEffect_RichWave::TickEffect_Tokens_Implementation(FKausTextEffectContext& Context)
{
    if (Context.CurrentTokens.Num() == 0) return;

    // 기존 토큰 전체를 <Wave amp="..." freq="...">...</> 로 감싼다.
    // RawString을 명시적으로 채워서 Reassemble 시 그대로 사용.

    FKausTextToken Open;
    Open.Type = EKausTextTokenType::SpanOpen;
    Open.TagName = TagName;
    Open.Attributes.Add(TEXT("amp"), FString::Printf(TEXT("%.2f"), Amplitude));
    Open.Attributes.Add(TEXT("freq"), FString::Printf(TEXT("%.2f"), Frequency));
    Open.RawString = FString::Printf(
        TEXT("<%s amp=\"%.2f\" freq=\"%.2f\">"),
        *TagName, Amplitude, Frequency);
    Open.VisualLength = 0;

    FKausTextToken Close;
    Close.Type = EKausTextTokenType::SpanClose;
    Close.RawString = TEXT("</>");
    Close.VisualLength = 0;

    Context.CurrentTokens.Insert(Open, 0);
    Context.CurrentTokens.Add(Close);
}
