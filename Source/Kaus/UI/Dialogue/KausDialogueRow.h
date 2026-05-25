// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "CoreMinimal.h"
#include "UI/KausActivatableWidget.h"
#include "Interfaces/HUD/MounteaDialogueUIBaseInterface.h"
#include "Interfaces/UMG/MounteaDialogueRowInterface.h"
#include "KausDialogueRow.generated.h"

class UKausTextEffectWidget;
/**
 * Mountea Dialogue Row 위젯의 Kaus 어댑터.
 *
 * 단계 2 이후의 책임:
 *  - Mountea 인터페이스 구현은 단순 어댑터로 유지
 *  - 실제 효과 처리는 TextEffectWidget이 담당 (Mountea 무관)
 *
 * BP 작업:
 *  - W_DialogueRow BP에 'KausTextEffectWidget' 자식 위젯을 배치하고
 *    BindWidget으로 변수명을 'TextEffectWidget'로 지정.
 *  - TextEffectWidget의 OnTextUpdated 이벤트를 RichTextBlock.SetText에 연결.
 *  - TextEffectWidget의 디테일 패널에서 효과 인스턴스(+TypeWriter, +Sound 등) 추가.
 *
 * 효과 시스템이 Mountea와 분리되었으므로, 본 Row 위젯이 사라져도 효과 시스템은 그대로 동작.
 */
UCLASS()
class KAUS_API UKausDialogueRow : public UKausActivatableWidget,
                                  public IMounteaDialogueRowInterface,
                                  public IMounteaDialogueUIBaseInterface
{
    GENERATED_BODY()

public:
    UKausDialogueRow(const FObjectInitializer& ObjectInitializer);

protected:
    virtual void NativeConstruct() override;
    virtual void NativeDestruct() override;

    // ─── BindWidget ───────────────────────────────────────────────────────

    /**
     * 효과 컨테이너 위젯. BP에서 BindWidget으로 W_TextEffect 인스턴스 끼움.
     * 없으면 어댑터는 NoOp으로 동작.
     */
    UPROPERTY(BlueprintReadOnly, meta = (BindWidgetOptional, AllowPrivateAccess = true), Category = "Kaus|Dialogue")
    TObjectPtr<UKausTextEffectWidget> TextEffectWidget;

    // ─── IMounteaDialogueUIBaseInterface ──────────────────────────────────

    virtual bool BindEvents_Implementation() override { return true; }
    virtual bool UnbindEvents_Implementation() override { return true; }
    virtual void ProcessStringCommand_Implementation(const FString& Command, UObject* OptionalPayload = nullptr) override {}
    virtual void ApplyTheme_Implementation() override {}

    // ─── IMounteaDialogueRowInterface (모두 어댑터) ───────────────────────

    virtual FWidgetDialogueRow GetDialogueWidgetRowData_Implementation() const override;
    virtual void SetNewWidgetDialogueRowData_Implementation(const FWidgetDialogueRow& NewData) override;
    virtual void ResetWidgetDialogueRow_Implementation() override;
    virtual void InitializeWidgetDialogueRow_Implementation() override;
    virtual void StopTypeWriterEffect_Implementation() override;
    virtual void StartTypeWriterEffect_Implementation(const FText& SourceText, float Duration) override;
    virtual void EnableTypeWriterEffect_Implementation(bool bEnable) override;

    // ─── BP-implementable hooks ──────────────────────────────────────────

    /**
     * Mountea의 글로벌 'FOnTypeWriterEffectChanged' delegate와 충돌을 피하기 위해
     * 토글 알림은 BlueprintImplementableEvent로 제공.
     */
    UFUNCTION(BlueprintImplementableEvent, Category = "Mountea|Dialogue")
    void OnTypeWriterEnabledStateChanged(bool bEnabled);

    /**
     * (선택) BP에서 효과 시작/완료 시점 알림이 필요하면 이 이벤트들을 사용.
     * 보통은 TextEffectWidget의 자체 이벤트(OnTextUpdated, OnPresentationFinished)를
     * 직접 BP에서 바인딩하는 편이 더 단순.
     */
    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Dialogue")
    void OnPresentationStartedFromInterface();

    UFUNCTION(BlueprintImplementableEvent, Category = "Kaus|Dialogue")
    void OnPresentationStoppedFromInterface();

protected:
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mountea|Dialogue", meta = (ExposeOnSpawn = true))
    FWidgetDialogueRow DialogueRowData;

    UPROPERTY(BlueprintReadOnly, VisibleAnywhere, Category = "Mountea|Dialogue", meta = (ExposeOnSpawn = true))
    uint8 bUseTypeWriterEffect : 1;
};
