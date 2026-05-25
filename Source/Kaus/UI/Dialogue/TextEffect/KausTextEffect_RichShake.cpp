// Copyright Project Kaus. All Rights Reserved.

#include "KausTextEffect_RichShake.h"

UKausTextEffect_RichShake::UKausTextEffect_RichShake()
{
    EffectName = TEXT("RichShake");
}

void UKausTextEffect_RichShake::TickEffect_Tokens_Implementation(FKausTextEffectContext& Context)
{
    if (Context.CurrentTokens.Num() == 0) return;

    FKausTextToken Open;
    Open.Type = EKausTextTokenType::SpanOpen;
    Open.TagName = TagName;
    Open.Attributes.Add(TEXT("intensity"), FString::Printf(TEXT("%.2f"), Intensity));
    Open.RawString = FString::Printf(
        TEXT("<%s intensity=\"%.2f\">"),
        *TagName, Intensity);
    Open.VisualLength = 0;

    FKausTextToken Close;
    Close.Type = EKausTextTokenType::SpanClose;
    Close.RawString = TEXT("</>");
    Close.VisualLength = 0;

    Context.CurrentTokens.Insert(Open, 0);
    Context.CurrentTokens.Add(Close);
}
