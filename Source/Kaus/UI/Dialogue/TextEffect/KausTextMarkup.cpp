// Copyright Project Kaus. All Rights Reserved.

#include "KausTextMarkup.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausTextMarkup, Log, All);

namespace KausTextMarkup
{
    // ─── 내부 헬퍼 ────────────────────────────────────────────────────────

    namespace Internal
    {
        /**
         * 단일 태그 (< ... >)를 파싱해 토큰으로 변환.
         * @param TagBody  '<' 와 '>' 사이의 내용 (예: 'wave amp="5" freq="2"', 'img id="X"/', '/' 등)
         * @param OutToken 결과 토큰
         * @return 파싱 성공 여부
         */
        bool ParseTag(const FString& TagBody, FKausTextToken& OutToken)
        {
            FString Body = TagBody.TrimStartAndEnd();
            if (Body.IsEmpty()) return false;

            // 종료 태그 확인 (</>)
            if (Body == TEXT("/"))
            {
                OutToken.Type = EKausTextTokenType::SpanClose;
                OutToken.RawString = TEXT("</>");
                OutToken.VisualLength = 0;
                return true;
            }

            // Self-closing 확인 (...속성.../) 형태
            bool bIsSelfClosing = false;
            if (Body.EndsWith(TEXT("/")))
            {
                bIsSelfClosing = true;
                Body = Body.LeftChop(1).TrimEnd();
            }

            // 첫 토큰 = 태그 이름
            int32 FirstSpaceIdx = INDEX_NONE;
            for (int32 i = 0; i < Body.Len(); ++i)
            {
                if (FChar::IsWhitespace(Body[i]))
                {
                    FirstSpaceIdx = i;
                    break;
                }
            }

            FString TagName;
            FString AttrPart;
            if (FirstSpaceIdx == INDEX_NONE)
            {
                TagName = Body;
                AttrPart.Empty();
            }
            else
            {
                TagName = Body.Left(FirstSpaceIdx);
                AttrPart = Body.Mid(FirstSpaceIdx + 1).TrimStartAndEnd();
            }

            if (TagName.IsEmpty()) return false;

            OutToken.TagName = TagName;
            OutToken.Type = bIsSelfClosing 
                ? EKausTextTokenType::SelfClosing 
                : EKausTextTokenType::SpanOpen;
            OutToken.VisualLength = bIsSelfClosing ? 1 : 0;

            // 속성 파싱: key="value" 패턴 반복
            // 단순 상태머신: 키 → '=' → '"' → 값 → '"' → 다음 키
            int32 i = 0;
            while (i < AttrPart.Len())
            {
                // 공백 스킵
                while (i < AttrPart.Len() && FChar::IsWhitespace(AttrPart[i])) ++i;
                if (i >= AttrPart.Len()) break;

                // 키 추출
                int32 KeyStart = i;
                while (i < AttrPart.Len() && AttrPart[i] != TEXT('=') && !FChar::IsWhitespace(AttrPart[i])) ++i;
                FString Key = AttrPart.Mid(KeyStart, i - KeyStart);
                if (Key.IsEmpty()) break;

                // '=' 스킵
                while (i < AttrPart.Len() && (FChar::IsWhitespace(AttrPart[i]) || AttrPart[i] == TEXT('='))) ++i;
                if (i >= AttrPart.Len()) break;

                // 값 — 따옴표가 있는 경우와 없는 경우 모두 지원
                FString Value;
                if (AttrPart[i] == TEXT('"') || AttrPart[i] == TEXT('\''))
                {
                    const TCHAR Quote = AttrPart[i];
                    ++i; // 여는 따옴표 스킵
                    int32 ValueStart = i;
                    while (i < AttrPart.Len() && AttrPart[i] != Quote) ++i;
                    Value = AttrPart.Mid(ValueStart, i - ValueStart);
                    if (i < AttrPart.Len()) ++i; // 닫는 따옴표 스킵
                }
                else
                {
                    int32 ValueStart = i;
                    while (i < AttrPart.Len() && !FChar::IsWhitespace(AttrPart[i])) ++i;
                    Value = AttrPart.Mid(ValueStart, i - ValueStart);
                }

                OutToken.Attributes.Add(Key, Value);
            }

            return true;
        }

        /** RawString 재구성: tag + attributes + (self-closing이면 /) */
        FString BuildTagRawString(const FKausTextToken& Token)
        {
            FString Result = TEXT("<");
            Result += Token.TagName;

            for (const TPair<FString, FString>& Pair : Token.Attributes)
            {
                Result += TEXT(" ");
                Result += Pair.Key;
                Result += TEXT("=\"");
                Result += Pair.Value;
                Result += TEXT("\"");
            }

            if (Token.Type == EKausTextTokenType::SelfClosing)
            {
                Result += TEXT("/");
            }
            Result += TEXT(">");
            return Result;
        }
    } // namespace Internal

    // ─── 토큰화 ──────────────────────────────────────────────────────────

    TArray<FKausTextToken> Tokenize(const FText& Source)
    {
        TArray<FKausTextToken> Result;
        const FString Str = Source.ToString();
        if (Str.IsEmpty()) return Result;

        int32 Cursor = 0;
        while (Cursor < Str.Len())
        {
            // 다음 '<' 찾기
            int32 TagStart = Str.Find(TEXT("<"), ESearchCase::CaseSensitive, ESearchDir::FromStart, Cursor);

            if (TagStart == INDEX_NONE)
            {
                // 더 이상 마크업 없음 — 남은 부분은 모두 Text 토큰
                FKausTextToken TextToken;
                TextToken.Type = EKausTextTokenType::Text;
                TextToken.RawString = Str.Mid(Cursor);
                TextToken.VisualLength = TextToken.RawString.Len();
                if (TextToken.VisualLength > 0)
                {
                    Result.Add(TextToken);
                }
                break;
            }

            // 마크업 앞의 일반 텍스트 처리
            if (TagStart > Cursor)
            {
                FKausTextToken TextToken;
                TextToken.Type = EKausTextTokenType::Text;
                TextToken.RawString = Str.Mid(Cursor, TagStart - Cursor);
                TextToken.VisualLength = TextToken.RawString.Len();
                Result.Add(TextToken);
            }

            // 태그 끝 '>' 찾기
            int32 TagEnd = Str.Find(TEXT(">"), ESearchCase::CaseSensitive, ESearchDir::FromStart, TagStart);
            if (TagEnd == INDEX_NONE)
            {
                // 깨진 마크업 — 남은 부분을 Text로 처리
                FKausTextToken TextToken;
                TextToken.Type = EKausTextTokenType::Text;
                TextToken.RawString = Str.Mid(TagStart);
                TextToken.VisualLength = TextToken.RawString.Len();
                Result.Add(TextToken);
                break;
            }

            // 태그 본문 추출 ('<' 와 '>' 사이)
            const FString TagBody = Str.Mid(TagStart + 1, TagEnd - TagStart - 1);
            const FString FullRaw = Str.Mid(TagStart, TagEnd - TagStart + 1);

            FKausTextToken Token;
            if (Internal::ParseTag(TagBody, Token))
            {
                Token.RawString = FullRaw;
                Result.Add(Token);
            }
            else
            {
                // 파싱 실패 — Text로 fallback
                FKausTextToken TextToken;
                TextToken.Type = EKausTextTokenType::Text;
                TextToken.RawString = FullRaw;
                TextToken.VisualLength = FullRaw.Len();
                Result.Add(TextToken);
            }

            Cursor = TagEnd + 1;
        }

        return Result;
    }

    // ─── 재조립 ──────────────────────────────────────────────────────────

    FText Reassemble(const TArray<FKausTextToken>& Tokens)
    {
        FString Result;
        for (const FKausTextToken& Token : Tokens)
        {
            // RawString이 있으면 우선 사용 (원본 형태 보존)
            if (!Token.RawString.IsEmpty())
            {
                Result += Token.RawString;
            }
            else
            {
                // RawString 없는 동적 생성 토큰 (효과가 만든 SpanOpen 등)
                switch (Token.Type)
                {
                    case EKausTextTokenType::Text:
                        // 비어있으면 무시
                        break;
                    case EKausTextTokenType::SelfClosing:
                    case EKausTextTokenType::SpanOpen:
                        Result += Internal::BuildTagRawString(Token);
                        break;
                    case EKausTextTokenType::SpanClose:
                        Result += TEXT("</>");
                        break;
                }
            }
        }
        return FText::FromString(Result);
    }

    // ─── 가시 길이 (Character 모드) ──────────────────────────────────────

    int32 GetTotalVisualLength(const TArray<FKausTextToken>& Tokens)
    {
        int32 Total = 0;
        for (const FKausTextToken& Token : Tokens)
        {
            Total += Token.VisualLength;
        }
        return Total;
    }

    TArray<FKausTextToken> SliceByVisualLength(const TArray<FKausTextToken>& Tokens, int32 VisualLength)
    {
        TArray<FKausTextToken> Result;
        if (VisualLength <= 0) return Result;

        int32 Remaining = VisualLength;
        // 열려있는 SpanOpen의 결과 인덱스 추적 (자동 닫기를 위해)
        TArray<int32> OpenSpansResultIdx;

        for (const FKausTextToken& Token : Tokens)
        {
            if (Remaining <= 0 && Token.Type != EKausTextTokenType::SpanClose)
            {
                // 노출 영역 밖 — Span 닫기 외엔 추가 안 함
                break;
            }

            if (Token.Type == EKausTextTokenType::Text)
            {
                if (Token.VisualLength <= Remaining)
                {
                    // 통째로 추가
                    Result.Add(Token);
                    Remaining -= Token.VisualLength;
                }
                else
                {
                    // 부분 추가 (글자 단위 자르기)
                    FKausTextToken Partial = Token;
                    Partial.RawString = Token.RawString.Left(Remaining);
                    Partial.VisualLength = Partial.RawString.Len();
                    if (Partial.VisualLength > 0)
                    {
                        Result.Add(Partial);
                    }
                    Remaining = 0;
                }
            }
            else if (Token.Type == EKausTextTokenType::SelfClosing)
            {
                if (Remaining >= 1)
                {
                    Result.Add(Token);
                    Remaining -= 1;
                }
                else
                {
                    break;
                }
            }
            else if (Token.Type == EKausTextTokenType::SpanOpen)
            {
                OpenSpansResultIdx.Push(Result.Num());
                Result.Add(Token);
            }
            else if (Token.Type == EKausTextTokenType::SpanClose)
            {
                // 짝이 있으면 Span 닫기 추가 (스택에서 제거)
                if (OpenSpansResultIdx.Num() > 0)
                {
                    OpenSpansResultIdx.Pop();
                    Result.Add(Token);
                }
                // 짝 없으면 무시 (잘못된 입력)
            }
        }

        // 남은 열린 Span은 자동 닫기 추가 (안쪽 텍스트가 잘렸을 때)
        while (OpenSpansResultIdx.Num() > 0)
        {
            FKausTextToken AutoClose;
            AutoClose.Type = EKausTextTokenType::SpanClose;
            AutoClose.RawString = TEXT("</>");
            AutoClose.VisualLength = 0;
            Result.Add(AutoClose);
            OpenSpansResultIdx.Pop();
        }

        return Result;
    }

    // ─── 단어 카운트 (Word 모드) ────────────────────────────────────────

    int32 GetTotalWordCount(const TArray<FKausTextToken>& Tokens)
    {
        int32 WordCount = 0;
        bool bInWord = false;

        for (const FKausTextToken& Token : Tokens)
        {
            if (Token.Type == EKausTextTokenType::Text)
            {
                for (TCHAR Ch : Token.RawString)
                {
                    const bool bIsSpace = FChar::IsWhitespace(Ch);
                    if (!bIsSpace && !bInWord)
                    {
                        WordCount++;
                        bInWord = true;
                    }
                    else if (bIsSpace)
                    {
                        bInWord = false;
                    }
                }
            }
            else if (Token.Type == EKausTextTokenType::SelfClosing)
            {
                // <img/> 같은 self-closing은 1 단어로 카운트
                WordCount++;
                bInWord = false;
            }
            // SpanOpen/Close는 카운트 안 함
        }

        return WordCount;
    }

    TArray<FKausTextToken> SliceByWordCount(const TArray<FKausTextToken>& Tokens, int32 WordCount)
    {
        TArray<FKausTextToken> Result;
        if (WordCount <= 0) return Result;

        int32 RemainingWords = WordCount;
        bool bInWord = false;
        TArray<int32> OpenSpansResultIdx;

        for (const FKausTextToken& Token : Tokens)
        {
            if (RemainingWords <= 0 && Token.Type != EKausTextTokenType::SpanClose)
            {
                break;
            }

            if (Token.Type == EKausTextTokenType::Text)
            {
                FString PartialText;
                bool bDoneInThisToken = false;

                for (int32 i = 0; i < Token.RawString.Len(); ++i)
                {
                    const TCHAR Ch = Token.RawString[i];
                    const bool bIsSpace = FChar::IsWhitespace(Ch);

                    if (!bIsSpace && !bInWord)
                    {
                        // 새 단어 시작
                        if (RemainingWords <= 0)
                        {
                            // 더 이상 단어 추가 안 됨 — 여기서 자름
                            bDoneInThisToken = true;
                            break;
                        }
                        RemainingWords--;
                        bInWord = true;
                    }
                    else if (bIsSpace)
                    {
                        bInWord = false;
                    }

                    PartialText.AppendChar(Ch);
                }

                if (PartialText.Len() > 0)
                {
                    FKausTextToken NewToken = Token;
                    NewToken.RawString = PartialText;
                    NewToken.VisualLength = PartialText.Len();
                    Result.Add(NewToken);
                }

                if (bDoneInThisToken) break;
            }
            else if (Token.Type == EKausTextTokenType::SelfClosing)
            {
                if (RemainingWords <= 0) break;
                RemainingWords--;
                Result.Add(Token);
                bInWord = false;
            }
            else if (Token.Type == EKausTextTokenType::SpanOpen)
            {
                OpenSpansResultIdx.Push(Result.Num());
                Result.Add(Token);
            }
            else if (Token.Type == EKausTextTokenType::SpanClose)
            {
                if (OpenSpansResultIdx.Num() > 0)
                {
                    OpenSpansResultIdx.Pop();
                    Result.Add(Token);
                }
            }
        }

        // 남은 열린 Span은 자동 닫기
        while (OpenSpansResultIdx.Num() > 0)
        {
            FKausTextToken AutoClose;
            AutoClose.Type = EKausTextTokenType::SpanClose;
            AutoClose.RawString = TEXT("</>");
            AutoClose.VisualLength = 0;
            Result.Add(AutoClose);
            OpenSpansResultIdx.Pop();
        }

        return Result;
    }

    // ─── 디버깅 ──────────────────────────────────────────────────────────

    FString DebugTokensToString(const TArray<FKausTextToken>& Tokens)
    {
        FString Result;
        Result += FString::Printf(TEXT("Tokens(%d): ["), Tokens.Num());
        for (int32 i = 0; i < Tokens.Num(); ++i)
        {
            const FKausTextToken& Token = Tokens[i];
            const TCHAR* TypeStr = TEXT("?");
            switch (Token.Type)
            {
                case EKausTextTokenType::Text:        TypeStr = TEXT("Text"); break;
                case EKausTextTokenType::SelfClosing: TypeStr = TEXT("SelfClosing"); break;
                case EKausTextTokenType::SpanOpen:    TypeStr = TEXT("SpanOpen"); break;
                case EKausTextTokenType::SpanClose:   TypeStr = TEXT("SpanClose"); break;
            }
            Result += FString::Printf(TEXT("\n  [%d] %s vlen=%d raw=\"%s\""),
                i, TypeStr, Token.VisualLength, *Token.RawString);
        }
        Result += TEXT("\n]");
        return Result;
    }

    // ─── 효과 태그 명단 ──────────────────────────────────────────────

    /**
     * 효과 마크업 태그명 set.
     * DT_DialogueRichTextStyles의 행 이름 중 Font Material을 가진 것들과 일치해야 함.
     * 추후 Bounce, Pulse, Glow 등 추가 시 여기 등재.
     *
     * 대소문자 구분 — DataTable 행 이름과 정확히 일치.
     */
    static const TSet<FString>& GetEffectTagNamesSet()
    {
        static const TSet<FString> EffectTagNames = {
            TEXT("Wave"),
            TEXT("Shake"),
        };
        return EffectTagNames;
    }

    bool IsEffectTagName(const FString& TagName)
    {
        return GetEffectTagNamesSet().Contains(TagName);
    }

    bool IsImageTagName(const FString& TagName)
    {
        // 컨벤션: 모든 인라인 이미지는 "Image."로 시작
        // 예: Image.Heart, Image.Sword, Image.Coin
        return TagName.StartsWith(TEXT("Image."), ESearchCase::CaseSensitive);
    }

    // ─── 효과 마크업 제거 ────────────────────────────────────────────

    FText StripEffectMarkup(const FText& Source)
    {
        const TArray<FKausTextToken> Tokens = Tokenize(Source);
        if (Tokens.Num() == 0) return Source;

        TArray<FKausTextToken> Filtered;
        Filtered.Reserve(Tokens.Num());

        // 효과 SpanOpen이 등장한 깊이 추적.
        // 짝 맞춰 Close도 함께 제거하기 위해 stack 사용.
        TArray<bool> EffectSpanStack;

        for (const FKausTextToken& Token : Tokens)
        {
            switch (Token.Type)
            {
                case EKausTextTokenType::Text:
                    Filtered.Add(Token);
                    break;

                case EKausTextTokenType::SelfClosing:
                    // Image.* 포함 모든 SelfClosing 보존
                    // 명시적 판별 (추후 효과 SelfClosing이 등장하면 IsImageTagName으로 게이팅)
                    Filtered.Add(Token);
                    break;

                case EKausTextTokenType::SpanOpen:
                {
                    const bool bIsEffect = IsEffectTagName(Token.TagName);
                    EffectSpanStack.Push(bIsEffect);

                    if (!bIsEffect)
                    {
                        // 정적 스타일(Bold, Title, Warning 등) 보존
                        Filtered.Add(Token);
                    }
                    // 효과면 추가 안 함 (제거)
                    break;
                }

                case EKausTextTokenType::SpanClose:
                {
                    if (EffectSpanStack.Num() > 0)
                    {
                        const bool bWasEffect = EffectSpanStack.Pop();
                        if (!bWasEffect)
                            Filtered.Add(Token);
                    }
                    else
                    {
                        // 짝 없는 close — 잘못된 입력. 그대로 보존해서 RichTextBlock fallback 위임.
                        Filtered.Add(Token);
                    }
                    break;
                }
            }
        }

        return Reassemble(Filtered);
    }
}
