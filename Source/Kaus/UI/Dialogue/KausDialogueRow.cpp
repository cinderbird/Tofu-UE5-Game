// Copyright Project Kaus. All Rights Reserved.

#include "KausDialogueRow.h"
#include "TextEffect/KausTextEffectWidget.h"

UKausDialogueRow::UKausDialogueRow(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
    , bUseTypeWriterEffect(false)
{
}

void UKausDialogueRow::NativeConstruct()
{
    Super::NativeConstruct();
}

void UKausDialogueRow::NativeDestruct()
{
    Super::NativeDestruct();
}

// ─── IMounteaDialogueRowInterface (어댑터 위임) ────────────────────────────

void UKausDialogueRow::StartTypeWriterEffect_Implementation(const FText& SourceText, float Duration)
{
    if (TextEffectWidget)
    {
        TextEffectWidget->BeginPresentation(SourceText, Duration);
        OnPresentationStartedFromInterface();
    }
}

void UKausDialogueRow::StopTypeWriterEffect_Implementation()
{
    // 외부 즉시-완료 진입점 없음. TextEffect는 Duration 만료까지 자체 진행.
    // BP에서 알림이 필요하면 OnPresentationStoppedFromInterface 활용.
    OnPresentationStoppedFromInterface();
}

void UKausDialogueRow::EnableTypeWriterEffect_Implementation(bool bEnable)
{
    if (bEnable != static_cast<bool>(bUseTypeWriterEffect))
    {
        bUseTypeWriterEffect = bEnable;
        OnTypeWriterEnabledStateChanged(bUseTypeWriterEffect);
    }
}

FWidgetDialogueRow UKausDialogueRow::GetDialogueWidgetRowData_Implementation() const
{
    return DialogueRowData;
}

void UKausDialogueRow::SetNewWidgetDialogueRowData_Implementation(const FWidgetDialogueRow& NewData)
{
    if (DialogueRowData != NewData)
    {
        DialogueRowData = NewData;
    }
}

void UKausDialogueRow::ResetWidgetDialogueRow_Implementation()
{
    DialogueRowData.ResetRow();
}

void UKausDialogueRow::InitializeWidgetDialogueRow_Implementation()
{
}
