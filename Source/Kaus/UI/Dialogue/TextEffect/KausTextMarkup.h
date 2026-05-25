// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffectTypes.h"

/**
 * 마크업 텍스트의 토크나이즈 / 재조립 / 슬라이싱 헬퍼.
 *
 * 단계 3의 핵심 모듈. UObject 상속 안 함, 순수 함수 모음.
 * 효과 시스템이 마크업을 깨지 않고 점진 노출할 수 있도록 지원.
 *
 * 단순화 가정:
 *  - nesting 1단계까지 정확히 지원 (BIC 데모 범위)
 *  - escape 메커니즘 없음 (작가가 본문에 '<' 직접 사용 안 한다는 전제)
 *  - 짝이 안 맞는 마크업은 best-effort 처리 (남는 SpanOpen은 자동 SpanClose 추가)
 *
 * 지원하는 마크업 형식:
 *   <태그>...</>                   Span (열고 닫기)
 *   <태그 속성="값">...</>          Span with attributes
 *   <태그 속성="값"/>               Self-closing
 *   <태그/>                        Self-closing without attributes
 */
namespace KausTextMarkup
{
    // ─── 토큰화 / 재조립 ──────────────────────────────────────────────────

    /**
     * 마크업 문자열을 토큰 배열로 분해.
     *
     * @param Source 원본 텍스트 (마크업 포함 가능, plain text도 OK)
     * @return 토큰 배열. 빈 입력은 빈 배열.
     */
    KAUS_API TArray<FKausTextToken> Tokenize(const FText& Source);

    /**
     * 토큰 배열을 다시 FText로 재조립.
     * Tokenize의 역연산. 라운드트립 보장: Reassemble(Tokenize(X)) == X (단, 공백 정규화 후).
     */
    KAUS_API FText Reassemble(const TArray<FKausTextToken>& Tokens);

    // ─── 가시 길이 (Character 모드용) ─────────────────────────────────────

    /**
     * 토큰 배열의 총 가시 길이.
     * Text 토큰의 글자 수 + SelfClosing 토큰 개수.
     * SpanOpen/Close는 카운트 안 함.
     */
    KAUS_API int32 GetTotalVisualLength(const TArray<FKausTextToken>& Tokens);

    /**
     * 가시 길이 N까지만 노출되도록 잘라낸 토큰 배열 반환.
     *
     * 정책:
     *  - Text: 부분 자름 (글자 단위)
     *  - SelfClosing: 통째로만 (위치 도달 시 등장, 부분 노출 없음)
     *  - SpanOpen이 노출 영역 안에 있고 SpanClose가 영역 밖이면 자동 SpanClose 추가
     *  - SpanOpen 자체가 노출 영역 밖이면 그 Span은 결과에 포함 안 됨
     */
    KAUS_API TArray<FKausTextToken> SliceByVisualLength(
        const TArray<FKausTextToken>& Tokens,
        int32 VisualLength);

    // ─── 단어 카운트 (Word 모드용) ────────────────────────────────────────

    /**
     * 토큰 배열의 총 단어 수.
     *
     * 단어 정의: 공백(whitespace)이 아닌 연속 문자열 1개 = 1 단어.
     * SelfClosing 토큰 = 1 단어 (이미지 등장).
     *
     * 한국어/영어에선 자연스럽게 동작. 일본어/중국어처럼 공백이 없는 언어에선
     * 작가가 의도적으로 공백 삽입해야 단어 단위 노출 가능.
     */
    KAUS_API int32 GetTotalWordCount(const TArray<FKausTextToken>& Tokens);

    /**
     * 단어 수 N까지만 노출되도록 잘라낸 토큰 배열 반환.
     *
     * SliceByVisualLength와 같은 Span 처리 정책 적용.
     * Text 토큰 안에서도 단어 단위로 자르며, 단어 중간에서 자르지 않음.
     */
    KAUS_API TArray<FKausTextToken> SliceByWordCount(
        const TArray<FKausTextToken>& Tokens,
        int32 WordCount);

    // ─── 디버깅 ──────────────────────────────────────────────────────────

    /** 토큰 배열을 사람이 읽을 수 있는 디버그 문자열로. */
    KAUS_API FString DebugTokensToString(const TArray<FKausTextToken>& Tokens);

    /** 효과 마크업(<Wave>, <Shake>)을 제거하되 Image.* SelfClosing은 보존. */
    KAUS_API FText StripEffectMarkup(const FText& Source);

    /** 태그명이 효과 마크업인지 (Wave/Shake 등). */
    KAUS_API bool IsEffectTagName(const FString& TagName);

    /** 태그명이 Image 마크업인지 ("Image."로 시작). */
    KAUS_API bool IsImageTagName(const FString& TagName);
}
