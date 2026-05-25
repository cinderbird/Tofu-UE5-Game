// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "KausTextEffectTypes.generated.h"

/**
 * 텍스트 효과의 처리 단계.
 *
 * Reveal: 어디까지 보일지 결정 (TypeWriter 등). 같은 단계 효과는 1개만 의미가 있다.
 * Visual: 보이는 부분에 변형/장식. 여러 효과 중첩 가능.
 */
UENUM(BlueprintType)
enum class EKausTextEffectStage : uint8
{
    Reveal  UMETA(DisplayName = "Reveal (어디까지 보일지)"),
    Visual  UMETA(DisplayName = "Visual (보이는 부분의 변형)"),
};

/**
 * 효과의 데이터 처리 모드.
 *
 * Text:   FText만 다룸 (단계 2 호환). 마크업 깨짐 위험 있음.
 * Tokens: 토큰 배열을 다룸 (단계 3 신규). 마크업 인식 가능.
 *
 * EffectWidget이 효과 호출 시 모드별로 적절한 함수 호출.
 */
UENUM(BlueprintType)
enum class EKausTextEffectMode : uint8
{
    Text    UMETA(DisplayName = "Text Mode (단계 2 호환)"),
    Tokens  UMETA(DisplayName = "Tokens Mode (마크업 인식)"),
};

/**
 * TypeWriter의 노출 단위.
 *
 * Character: 글자 단위 점진 노출 (기본).
 * Word:      공백 기준 단어 단위 점진 노출.
 *            한국어/영어에 자연스러우며 일본어/중국어는 작가가 의도적으로 공백 삽입 필요.
 */
UENUM(BlueprintType)
enum class EKausTextRevealUnit : uint8
{
    Character  UMETA(DisplayName = "Character (글자 단위)"),
    Word       UMETA(DisplayName = "Word (공백 기준 단어 단위)"),
};

/**
 * 마크업 토큰의 종류.
 *
 * Text:        일반 텍스트. RawString이 그 자체. VisualLength = 글자 수.
 * SelfClosing: <img id="..."/> 같은 self-closing. VisualLength = 1.
 * SpanOpen:    <wave>, <Bold> 같은 열린 태그. VisualLength = 0.
 * SpanClose:   </> 종료 태그. VisualLength = 0.
 */
UENUM(BlueprintType)
enum class EKausTextTokenType : uint8
{
    Text         UMETA(DisplayName = "Text"),
    SelfClosing  UMETA(DisplayName = "Self-Closing Tag"),
    SpanOpen     UMETA(DisplayName = "Span Open Tag"),
    SpanClose    UMETA(DisplayName = "Span Close Tag"),
};

/**
 * 마크업 텍스트의 단일 토큰.
 *
 * KausTextMarkup::Tokenize가 마크업 문자열을 토큰 배열로 분해하고,
 * Reassemble이 이를 다시 마크업 문자열로 재조립한다.
 *
 * 토크나이저는 nesting 1단계까지만 정확히 지원 (BIC 데모 범위).
 * 그 이상은 정의되지 않은 동작.
 */
USTRUCT(BlueprintType)
struct FKausTextToken
{
    GENERATED_BODY()

    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Token")
    EKausTextTokenType Type = EKausTextTokenType::Text;

    /**
     * 토큰의 원본 문자열. Reassemble 시 그대로 사용.
     * Text:        실제 텍스트 ("안녕")
     * SelfClosing: 마크업 전체 (`<img id="X"/>`)
     * SpanOpen:    여는 태그 전체 (`<wave amp="5">`)
     * SpanClose:   `</>`
     */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Token")
    FString RawString;

    /** SelfClosing/SpanOpen만 의미 있음. 태그 이름 ("img", "wave" 등). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Token")
    FString TagName;

    /** SelfClosing/SpanOpen의 속성 키-값 맵 (예: amp="5", freq="2"). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Token")
    TMap<FString, FString> Attributes;

    /** 가시 길이. Text=글자수, SelfClosing=1, SpanOpen/Close=0. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Token")
    int32 VisualLength = 0;
};

/**
 * 효과 적용 시 매 틱 전달되는 컨텍스트.
 *
 * Text 모드 효과는 OriginalText/CurrentText만 사용.
 * Tokens 모드 효과는 OriginalTokens/CurrentTokens 사용.
 *
 * EffectWidget이 모드 전환 시 토큰↔텍스트 변환을 자동 처리.
 */
USTRUCT(BlueprintType)
struct FKausTextEffectContext
{
    GENERATED_BODY()

    /** 원본 텍스트 (변하지 않음). Text 모드 효과의 기준. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    FText OriginalText;

    /** 이전 효과의 출력 (체이닝). Text 모드 효과는 이 값을 변형. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    FText CurrentText;

    /** 0.0 (시작) ~ 1.0 (완료). PlaybackSettings 적용 후 값. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    float Progress = 0.f;

    /** 표시 시작부터 누적 시간 (초). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    float ElapsedSeconds = 0.f;

    /** 이번 틱 델타 (초). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    float DeltaSeconds = 0.f;

    /** 표시 전체 시간 (초). PlaybackSettings 적용 후 값. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    float TotalDuration = 0.f;

    /** 효과 클래스가 World 컨텍스트가 필요할 때 (사운드 재생 등). */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect")
    TWeakObjectPtr<UWorld> World;

    /** 신규: 원본 토큰 배열 (변하지 않음). Tokens 모드 효과의 기준. */
    UPROPERTY(BlueprintReadOnly, Category = "Kaus|TextEffect|Tokens")
    TArray<FKausTextToken> OriginalTokens;

    /** 신규: 이전 효과의 토큰 출력 (체이닝). Tokens 모드 효과는 이 값을 변형. */
    UPROPERTY(BlueprintReadWrite, Category = "Kaus|TextEffect|Tokens")
    TArray<FKausTextToken> CurrentTokens;
};
