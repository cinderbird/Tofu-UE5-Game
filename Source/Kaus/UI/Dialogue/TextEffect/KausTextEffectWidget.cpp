// Copyright Project Kaus. All Rights Reserved.

#include "KausTextEffectWidget.h"
#include "KausTextEffect.h"
#include "KausTextMarkup.h"
#include "Engine/World.h"

DEFINE_LOG_CATEGORY_STATIC(LogKausTextEffect, Log, All);

UKausTextEffectWidget::UKausTextEffectWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
    SetVisibility(ESlateVisibility::SelfHitTestInvisible);
}

void UKausTextEffectWidget::NativeConstruct()
{
    Super::NativeConstruct();
}

void UKausTextEffectWidget::NativeDestruct()
{
    // 진행 중이면 효과 OnEffectEnd만 호출하고 마무리. 외부 신호 발화 없음.
    if (bIsPresenting)
    {
        FKausTextEffectContext Ctx;
        Ctx.OriginalText = OriginalText;
        Ctx.CurrentText = OriginalText;
        Ctx.OriginalTokens = CachedOriginalTokens;
        Ctx.CurrentTokens = CachedOriginalTokens;
        Ctx.Progress = FMath::Clamp(ElapsedSeconds / FMath::Max(TotalDuration, KINDA_SMALL_NUMBER), 0.f, 1.f);
        Ctx.ElapsedSeconds = ElapsedSeconds;
        Ctx.DeltaSeconds = 0.f;
        Ctx.TotalDuration = TotalDuration;
        Ctx.World = GetWorld();

        for (UKausTextEffect* Effect : Effects)
        {
            if (Effect && Effect->bEnabled)
            {
                Effect->OnEffectEnd(Ctx);
            }
        }

        bIsPresenting = false;
    }

    Super::NativeDestruct();
}

void UKausTextEffectWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
    Super::NativeTick(MyGeometry, InDeltaTime);

    if (!bIsPresenting) return;
    if (bIsPaused) return;

    // 배속 적용. SpeedMultiplier는 Setter에서 1 이상으로 보장되지만 한 번 더 안전망.
    const int32 SafeMultiplier = FMath::Max(SpeedMultiplier, 1);
    const float ScaledDelta = InDeltaTime * static_cast<float>(SafeMultiplier);

    ElapsedSeconds += ScaledDelta;

    // Duration 만료 — 마지막 프레임 (Progress=1.0) 적용 후 종료
    if (ElapsedSeconds >= TotalDuration)
    {
        ElapsedSeconds = TotalDuration;
        ApplyEffectChainAndBroadcast(ScaledDelta);

        // 효과별 OnEffectEnd
        FKausTextEffectContext Ctx;
        Ctx.OriginalText = OriginalText;
        Ctx.CurrentText = OriginalText;
        Ctx.OriginalTokens = CachedOriginalTokens;
        Ctx.CurrentTokens = CachedOriginalTokens;
        Ctx.Progress = 1.f;
        Ctx.ElapsedSeconds = TotalDuration;
        Ctx.DeltaSeconds = ScaledDelta;
        Ctx.TotalDuration = TotalDuration;
        Ctx.World = GetWorld();

        for (UKausTextEffect* Effect : Effects)
        {
            if (Effect && Effect->bEnabled)
            {
                Effect->OnEffectEnd(Ctx);
            }
        }

        bIsPresenting = false;
        OnPresentationFinished.Broadcast();

        UE_LOG(LogKausTextEffect, Verbose, TEXT("Presentation finished (duration elapsed)."));
        return;
    }

    ApplyEffectChainAndBroadcast(ScaledDelta);
}

void UKausTextEffectWidget::BeginPresentation(const FText& SourceText, float Duration)
{
    // 이미 진행 중이면 효과별 OnEffectEnd 호출하고 정리. 외부 신호는 발화 안 함.
    if (bIsPresenting)
    {
        FKausTextEffectContext Ctx;
        Ctx.OriginalText = OriginalText;
        Ctx.CurrentText = OriginalText;
        Ctx.OriginalTokens = CachedOriginalTokens;
        Ctx.CurrentTokens = CachedOriginalTokens;
        Ctx.Progress = FMath::Clamp(ElapsedSeconds / FMath::Max(TotalDuration, KINDA_SMALL_NUMBER), 0.f, 1.f);
        Ctx.ElapsedSeconds = ElapsedSeconds;
        Ctx.DeltaSeconds = 0.f;
        Ctx.TotalDuration = TotalDuration;
        Ctx.World = GetWorld();

        for (UKausTextEffect* Effect : Effects)
        {
            if (Effect && Effect->bEnabled)
            {
                Effect->OnEffectEnd(Ctx);
            }
        }
        bIsPresenting = false;
    }

    OriginalText = SourceText;
    TotalDuration = FMath::Max(Duration, 0.f);

    // 1회 토큰화 — 효과 체인 동안 OriginalTokens는 불변
    CachedOriginalTokens = KausTextMarkup::Tokenize(SourceText);

    UE_LOG(LogKausTextEffect, Verbose,
        TEXT("BeginPresentation tokenized:\n%s"),
        *KausTextMarkup::DebugTokensToString(CachedOriginalTokens));

    ElapsedSeconds = 0.f;
    bIsPresenting = true;

    // Duration 0 이하 → 즉시 완료 (효과 없는 정적 표시)
    if (TotalDuration <= KINDA_SMALL_NUMBER)
    {
        FKausTextEffectContext Ctx;
        Ctx.OriginalText = OriginalText;
        Ctx.CurrentText = OriginalText;
        Ctx.OriginalTokens = CachedOriginalTokens;
        Ctx.CurrentTokens = CachedOriginalTokens;
        Ctx.Progress = 1.f;
        Ctx.ElapsedSeconds = 0.f;
        Ctx.DeltaSeconds = 0.f;
        Ctx.TotalDuration = 0.f;
        Ctx.World = GetWorld();

        for (UKausTextEffect* Effect : Effects)
        {
            if (Effect && Effect->bEnabled)
            {
                Effect->OnEffectBegin(Ctx);
                Effect->OnEffectEnd(Ctx);
            }
        }

        OnTextUpdated.Broadcast(OriginalText);
        bIsPresenting = false;
        OnPresentationFinished.Broadcast();
        return;
    }

    // OnEffectBegin
    FKausTextEffectContext BeginCtx;
    BeginCtx.OriginalText = OriginalText;
    BeginCtx.CurrentText = OriginalText;
    BeginCtx.OriginalTokens = CachedOriginalTokens;
    BeginCtx.CurrentTokens = CachedOriginalTokens;
    BeginCtx.Progress = 0.f;
    BeginCtx.ElapsedSeconds = 0.f;
    BeginCtx.DeltaSeconds = 0.f;
    BeginCtx.TotalDuration = TotalDuration;
    BeginCtx.World = GetWorld();

    for (UKausTextEffect* Effect : Effects)
    {
        if (Effect && Effect->bEnabled)
        {
            Effect->OnEffectBegin(BeginCtx);
        }
    }

    UE_LOG(LogKausTextEffect, Verbose,
        TEXT("BeginPresentation: chars=%d duration=%.2fs"),
        OriginalText.ToString().Len(), TotalDuration);

    // 첫 프레임 출력
    ApplyEffectChainAndBroadcast(0.f);
}

void UKausTextEffectWidget::ApplyEffectChainAndBroadcast(float DeltaSeconds)
{
    // 컨텍스트 초기화
    FKausTextEffectContext Ctx;
    Ctx.OriginalText = OriginalText;
    Ctx.CurrentText = OriginalText;
    Ctx.OriginalTokens = CachedOriginalTokens;
    Ctx.CurrentTokens = CachedOriginalTokens;
    Ctx.Progress = FMath::Clamp(ElapsedSeconds / FMath::Max(TotalDuration, KINDA_SMALL_NUMBER), 0.f, 1.f);
    Ctx.ElapsedSeconds = ElapsedSeconds;
    Ctx.DeltaSeconds = DeltaSeconds;
    Ctx.TotalDuration = TotalDuration;
    Ctx.World = GetWorld();

    // bTokensValid: CurrentTokens가 최신 상태인가?
    // bTextValid:   CurrentText가 최신 상태인가?
    // 둘 다 시작 시 true (CurrentTokens=Original, CurrentText=Original이라 양쪽 일관)
    bool bTokensValid = true;
    bool bTextValid = true;

    auto ApplyByMode = [&](EKausTextEffectStage Stage, EKausTextEffectMode Mode)
    {
        for (UKausTextEffect* Effect : Effects)
        {
            if (!Effect || !Effect->bEnabled) continue;
            if (Effect->GetStage() != Stage) continue;
            if (Effect->GetEffectMode() != Mode) continue;

            if (Mode == EKausTextEffectMode::Tokens)
            {
                if (!bTokensValid)
                {
                    Ctx.CurrentTokens = KausTextMarkup::Tokenize(Ctx.CurrentText);
                    bTokensValid = true;
                }
                Effect->TickEffect_Tokens(Ctx);
                bTextValid = false;
            }
            else
            {
                if (!bTextValid)
                {
                    Ctx.CurrentText = KausTextMarkup::Reassemble(Ctx.CurrentTokens);
                    bTextValid = true;
                }
                Ctx.CurrentText = Effect->TickEffect(Ctx);
                bTokensValid = false;
            }
        }
    };

    // 처리 순서 (변환 비용 최소화):
    //   Reveal-Tokens → Reveal-Text → Visual-Tokens → Visual-Text
    //
    // 일반적 사용 패턴:
    //   - Reveal-Tokens: TypeWriter (마크업 보호하며 자르기)
    //   - Reveal-Text:   Sound (길이만 관찰)
    //   - Visual-Tokens: RichWave / RichShake (Span 마크업 삽입)
    //   - Visual-Text:   사용자 BP 효과 (대문자 변환 등)
    ApplyByMode(EKausTextEffectStage::Reveal, EKausTextEffectMode::Tokens);
    ApplyByMode(EKausTextEffectStage::Reveal, EKausTextEffectMode::Text);
    ApplyByMode(EKausTextEffectStage::Visual, EKausTextEffectMode::Tokens);
    ApplyByMode(EKausTextEffectStage::Visual, EKausTextEffectMode::Text);

    // 최종 출력
    const FText FinalText = bTextValid
        ? Ctx.CurrentText
        : KausTextMarkup::Reassemble(Ctx.CurrentTokens);

    OnTextUpdated.Broadcast(FinalText);
}

// ============================================================================
// External control — Complete / Pause / Resume
// ============================================================================

void UKausTextEffectWidget::CompletePresentation()
{
    if (!bIsPresenting) return;

    // 일시정지 상태였더라도 완료 흐름은 실행
    bIsPaused = false;

    // Progress=1.0 마지막 프레임 적용
    ElapsedSeconds = TotalDuration;
    ApplyEffectChainAndBroadcast(0.f);

    // 효과별 OnEffectEnd
    FKausTextEffectContext Ctx;
    Ctx.OriginalText = OriginalText;
    Ctx.CurrentText = OriginalText;
    Ctx.OriginalTokens = CachedOriginalTokens;
    Ctx.CurrentTokens = CachedOriginalTokens;
    Ctx.Progress = 1.f;
    Ctx.ElapsedSeconds = TotalDuration;
    Ctx.DeltaSeconds = 0.f;
    Ctx.TotalDuration = TotalDuration;
    Ctx.World = GetWorld();

    for (UKausTextEffect* Effect : Effects)
    {
        if (Effect && Effect->bEnabled)
        {
            Effect->OnEffectEnd(Ctx);
        }
    }

    bIsPresenting = false;
    OnPresentationFinished.Broadcast();

    UE_LOG(LogKausTextEffect, Verbose, TEXT("CompletePresentation."));
}

void UKausTextEffectWidget::PausePresentation()
{
    if (!bIsPresenting || bIsPaused) return;
    bIsPaused = true;
    UE_LOG(LogKausTextEffect, Verbose,
        TEXT("PausePresentation at %.2f / %.2f"), ElapsedSeconds, TotalDuration);
}

void UKausTextEffectWidget::ResumePresentation()
{
    if (!bIsPresenting || !bIsPaused) return;
    bIsPaused = false;
    UE_LOG(LogKausTextEffect, Verbose,
        TEXT("ResumePresentation at %.2f / %.2f"), ElapsedSeconds, TotalDuration);
}

void UKausTextEffectWidget::SetSpeedMultiplier(int32 NewMultiplier)
{
    const int32 Clamped = FMath::Max(NewMultiplier, 1);
    if (SpeedMultiplier == Clamped) return;

    SpeedMultiplier = Clamped;
    UE_LOG(LogKausTextEffect, Verbose,
        TEXT("SetSpeedMultiplier: %dx"), SpeedMultiplier);
}
