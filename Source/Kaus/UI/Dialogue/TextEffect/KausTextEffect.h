// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UObject/Object.h"
#include "KausTextEffectTypes.h"
#include "KausTextEffect.generated.h"

/**
 * 텍스트 효과의 베이스 클래스.
 *
 * 단계 3 변경:
 *  - GetEffectMode() — 효과가 Text 모드인지 Tokens 모드인지 선언
 *  - TickEffect_Tokens() — Tokens 모드 효과가 오버라이드 (기본 NoOp)
 *  - 단계 2의 TickEffect()는 그대로 유지 (Text 모드 효과용)
 *
 * 모드별 사용:
 *  - Text 모드:   기본값. TickEffect를 오버라이드. 단계 2의 모든 효과가 여기 해당.
 *  - Tokens 모드: GetEffectMode_Implementation을 Tokens로 오버라이드 + TickEffect_Tokens 구현.
 *                 마크업을 깨지 않고 점진 노출하는 효과 (TypeWriter 등) 또는
 *                 마크업 트리에 직접 삽입하는 효과 (RichWave 등)에 사용.
 */
UCLASS(Abstract, EditInlineNew, BlueprintType, Blueprintable, DefaultToInstanced,
       CollapseCategories, AutoExpandCategories = ("Effect"))
class KAUS_API UKausTextEffect : public UObject
{
    GENERATED_BODY()

public:
    UKausTextEffect();

    /** 효과의 처리 단계 (Reveal/Visual). 자식이 오버라이드. 기본 Visual. */
    UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Effect")
    EKausTextEffectStage GetStage() const;
    virtual EKausTextEffectStage GetStage_Implementation() const { return EKausTextEffectStage::Visual; }

    /**
     * 효과의 데이터 처리 모드 (Text/Tokens). 자식이 오버라이드.
     * 기본 Text — 단계 2 호환 (자동으로 TickEffect 호출됨).
     * Tokens 반환 시 EffectWidget이 TickEffect_Tokens 호출.
     */
    UFUNCTION(BlueprintNativeEvent, BlueprintPure, Category = "Effect")
    EKausTextEffectMode GetEffectMode() const;
    virtual EKausTextEffectMode GetEffectMode_Implementation() const { return EKausTextEffectMode::Text; }

    /** 효과 시작. 타이머/사운드 핸들 초기화 등. */
    UFUNCTION(BlueprintNativeEvent, Category = "Effect")
    void OnEffectBegin(const FKausTextEffectContext& Context);
    virtual void OnEffectBegin_Implementation(const FKausTextEffectContext& Context) {}

    /**
     * Text 모드 효과의 매 틱 호출. 효과가 적용된 텍스트를 반환.
     * 기본 구현은 Context.CurrentText 그대로 반환 (NoOp).
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Effect")
    FText TickEffect(const FKausTextEffectContext& Context);
    virtual FText TickEffect_Implementation(const FKausTextEffectContext& Context) { return Context.CurrentText; }

    /**
     * Tokens 모드 효과의 매 틱 호출.
     * Context.CurrentTokens를 직접 변형 (UPARAM(ref)로 in-out).
     * 기본 구현은 NoOp.
     */
    UFUNCTION(BlueprintNativeEvent, Category = "Effect")
    void TickEffect_Tokens(UPARAM(ref) FKausTextEffectContext& Context);
    virtual void TickEffect_Tokens_Implementation(FKausTextEffectContext& Context) {}

    /** 효과 종료. 핸들 해제 등. */
    UFUNCTION(BlueprintNativeEvent, Category = "Effect")
    void OnEffectEnd(const FKausTextEffectContext& Context);
    virtual void OnEffectEnd_Implementation(const FKausTextEffectContext& Context) {}

    /** 비활성화 시 효과 체인에서 제외. */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
    bool bEnabled = true;

    /** 디테일 패널에서 인스턴스를 식별하기 위한 짧은 이름 (디버깅용). */
    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Effect")
    FName EffectName = NAME_None;
};
