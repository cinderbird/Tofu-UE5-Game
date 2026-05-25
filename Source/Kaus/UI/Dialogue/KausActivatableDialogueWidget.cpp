// Copyright Project Kaus. All Rights Reserved.

#include "UI/Dialogue/KausActivatableDialogueWidget.h"
#include "Input/CommonUIInputTypes.h"

UKausActivatableDialogueWidget::UKausActivatableDialogueWidget(const FObjectInitializer& ObjectInitializer)
    : Super(ObjectInitializer)
{
}

void UKausActivatableDialogueWidget::NativeOnInitialized()
{
    Super::NativeOnInitialized();

    HideHandle = RegisterUIActionBinding(FBindUIActionArgs(
        HideInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleHideAction();
        })
    ));

    ShowAllTextKeyboardHandle = RegisterUIActionBinding(FBindUIActionArgs(
        ShowAllTextKeyboardInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleShowAllTextKeyboardAction();
        })
    ));

    ShowAllTextMouseHandle = RegisterUIActionBinding(FBindUIActionArgs(
        ShowAllTextMouseInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleShowAllTextMouseAction();
        })
    ));

    SkipHandle = RegisterUIActionBinding(FBindUIActionArgs(
        SkipInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleSkipAction();
        })
    ));

    LogHandle = RegisterUIActionBinding(FBindUIActionArgs(
        LogInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleLogAction();
        })
    ));

    AutoModeHandle = RegisterUIActionBinding(FBindUIActionArgs(
        AutoModeInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleAutoModeAction();
        })
    ));

    SpeedHandle = RegisterUIActionBinding(FBindUIActionArgs(
        SpeedInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleSpeedAction();
        })
    ));
    
    ActionHandle = RegisterUIActionBinding(FBindUIActionArgs(
        ActionInputActionData, /*bIsPersistent=*/true,
        FSimpleDelegate::CreateWeakLambda(this, [this]()
        {
            HandleActionAction();
        })
    ));
}

void UKausActivatableDialogueWidget::HandleHideAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleShowAllTextKeyboardAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleShowAllTextMouseAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleSkipAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleLogAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleAutoModeAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleSpeedAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}

void UKausActivatableDialogueWidget::HandleActionAction_Implementation()
{
    // Native 기본 구현은 비어있음. BP에서 override해서 원하는 동작 작성.
}


void UKausActivatableDialogueWidget::SetWidgetVisuallyHidden(bool bHidden)
{
    if (bIsVisuallyHidden == bHidden) return;

    if (bHidden)
    {
        // 숨기기 직전의 Visibility 캐싱 — BP가 의도한 값을 그대로 보존
        CachedVisibilityBeforeHide = GetVisibility();
        SetVisibility(ESlateVisibility::Hidden);
    }
    else
    {
        SetVisibility(CachedVisibilityBeforeHide);
    }

    bIsVisuallyHidden = bHidden;
}

void UKausActivatableDialogueWidget::ToggleWidgetVisibility()
{
    SetWidgetVisuallyHidden(!bIsVisuallyHidden);
}

