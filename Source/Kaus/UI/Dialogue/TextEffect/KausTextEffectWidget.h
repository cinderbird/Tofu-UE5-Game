// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "KausTextEffectTypes.h"
#include "KausTextEffectWidget.generated.h"

class UKausTextEffect;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FKausOnTextUpdated, const FText&, UpdatedText);
DECLARE_DYNAMIC_MULTICAST_DELEGATE(FKausOnPresentationFinished);

/**
 * 텍스트 효과 컨테이너 위젯.
 *
 * 동작 모델: 완전 시간 기반.
 *  - BeginPresentation(SourceText, Duration) — 시작
 *  - 매 틱 ElapsedSeconds 누적
 *  - ElapsedSeconds >= TotalDuration → 마지막 프레임 적용 후 자동 종료
 *  - 외부 즉시-완료/중단/일시정지 API 없음
 *
 * 정해진 Duration 안에 효과 체인이 끝까지 적용된다는 가정.
 * 새 BeginPresentation이 호출되면 이전 진행은 자동으로 폐기되고 새로 시작.
 *
 * 효과 체인:
 *  - BeginPresentation 시점에 SourceText를 1회 토큰화 → CachedOriginalTokens
 *  - 매 틱 모드별 그룹 처리:
 *      Reveal-Tokens → Reveal-Text → Visual-Tokens → Visual-Text 순서
 *      변환 비용 최소화를 위함
 */
UCLASS(Abstract, Blueprintable, ClassGroup = (Kaus),
       meta = (DisplayName = "Kaus Text Effect Widget"))
class KAUS_API UKausTextEffectWidget : public UUserWidget
{
    GENERATED_BODY()

public:
    UKausTextEffectWidget(const FObjectInitializer& ObjectInitializer);

    /**
     * 효과 시작.
     * 이미 진행 중이면 이전 상태를 폐기하고 새로 시작.
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|TextEffect")
    void BeginPresentation(const FText& SourceText, float Duration);

    UFUNCTION(BlueprintPure, Category = "Kaus|TextEffect")
    bool IsPresenting() const { return bIsPresenting; }

    /** 효과 즉시 완료 — Progress=1.0 마지막 프레임 적용 후 종료. 진행 중이 아니면 No-op. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|TextEffect")
    void CompletePresentation();

    /** 효과 일시정지 — ElapsedSeconds 누적 중지. 진행 중이 아니거나 이미 일시정지면 No-op. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|TextEffect")
    void PausePresentation();

    /** 효과 재개 — ElapsedSeconds 누적 재개. 일시정지 중이 아니면 No-op. */
    UFUNCTION(BlueprintCallable, Category = "Kaus|TextEffect")
    void ResumePresentation();

    UFUNCTION(BlueprintPure, Category = "Kaus|TextEffect")
    bool IsPaused() const { return bIsPaused; }

    /**
     * 효과 진행 배율. 1=정상, 2=2배, 3=3배 등. 1 미만은 1로 클램프.
     * 진행 중에도 호출 가능 — 다음 틱부터 새 배율 적용.
     * 새 BeginPresentation 호출 시에도 값 유지 (사용자 설정 영속).
     */
    UFUNCTION(BlueprintCallable, Category = "Kaus|TextEffect")
    void SetSpeedMultiplier(int32 NewMultiplier);

    UFUNCTION(BlueprintPure, Category = "Kaus|TextEffect")
    int32 GetSpeedMultiplier() const { return SpeedMultiplier; }

    UPROPERTY(BlueprintAssignable, Category = "Kaus|TextEffect")
    FKausOnTextUpdated OnTextUpdated;

    UPROPERTY(BlueprintAssignable, Category = "Kaus|TextEffect")
    FKausOnPresentationFinished OnPresentationFinished;

protected:
    virtual void NativeConstruct() override;
    virtual void NativeDestruct() override;
    virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly, Category = "Effects")
    TArray<TObjectPtr<UKausTextEffect>> Effects;

    /** 효과 체인 + 토큰↔텍스트 변환 + Broadcast. */
    void ApplyEffectChainAndBroadcast(float DeltaSeconds);

private:
    UPROPERTY(Transient)
    FText OriginalText;

    /** BeginPresentation 시 1회 토큰화. 효과 체인 동안 변하지 않음. */
    UPROPERTY(Transient)
    TArray<FKausTextToken> CachedOriginalTokens;

    UPROPERTY(Transient)
    float TotalDuration = 0.f;

    UPROPERTY(Transient)
    float ElapsedSeconds = 0.f;

    UPROPERTY(Transient)
    bool bIsPresenting = false;

    UPROPERTY(Transient)
    bool bIsPaused = false;

    /** 효과 진행 배율. 1 이상. 새 BeginPresentation에도 유지. */
    UPROPERTY(Transient)
    int32 SpeedMultiplier = 1;
};
