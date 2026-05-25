// Copyright Project Kaus. All Rights Reserved.

#pragma once

#include "UI/KausActivatableWidget.h"
#include "Interfaces/HUD/MounteaDialogueWBPInterface.h"
#include "KausActivatableDialogueWidget.generated.h"

/**
 * Kaus의 Mountea Dialogue Host 위젯 (최소판).
 *
 * 책임:
 *  - Mountea WBP 인터페이스 슬롯 노출 (DialogueRow / OptionsContainer / Option / DialogueSkip 클래스)
 *  - 그 외 모든 동작(대화 진행, 백로그, 입력 처리)은 BP에서 직접 구현
 *
 * Mountea 표준: CreateDialogueUI에서 이 4개 Soft Class를 참조하여 자식 위젯들을 인스턴스화한다.
 */
UCLASS(Abstract, BlueprintType, Blueprintable,
       Meta = (DisplayName = "Kaus Dialogue Widget", Category = "Kaus|Dialogue"))
class KAUS_API UKausActivatableDialogueWidget
    : public UKausActivatableWidget
    , public IMounteaDialogueWBPInterface
{
    GENERATED_BODY()

public:
    UKausActivatableDialogueWidget(const FObjectInitializer& ObjectInitializer);

    UFUNCTION(BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void ToggleWidgetVisibility();

    UFUNCTION(BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void SetWidgetVisuallyHidden(bool bHidden);

    UFUNCTION(BlueprintPure, Category = "Kaus|Dialogue|Host")
    bool IsWidgetVisuallyHidden() const { return bIsVisuallyHidden; }

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleHideAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleShowAllTextKeyboardAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleShowAllTextMouseAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleSkipAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleLogAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleAutoModeAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleSpeedAction();

    UFUNCTION(BlueprintNativeEvent, BlueprintCallable, Category = "Kaus|Dialogue|Host")
    void HandleActionAction();



protected:
    /** Common UI Action 등록은 NativeOnInitialized에서 — 위젯이 input 시스템에 연결된 시점. */
    virtual void NativeOnInitialized() override;
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kaus|Dialogue|Mountea",
              meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueOptionsContainerInterface", NoResetToDefault))
    TSoftClassPtr<UUserWidget> DialogueOptionsContainerClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kaus|Dialogue|Mountea",
              meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueOptionInterface", NoResetToDefault))
    TSoftClassPtr<UUserWidget> DialogueOptionClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kaus|Dialogue|Mountea",
              meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueRowInterface", NoResetToDefault))
    TSoftClassPtr<UUserWidget> DialogueRowClass;

    UPROPERTY(BlueprintReadOnly, EditAnywhere, Category = "Kaus|Dialogue|Mountea",
              meta = (MustImplement = "/Script/MounteaDialogueSystem.MounteaDialogueSkipInterface", NoResetToDefault))
    TSoftClassPtr<UUserWidget> DialogueSkipClass;

    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle HideInputActionData;

    FUIActionBindingHandle HideHandle;

    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ShowAllTextKeyboardInputActionData;

    FUIActionBindingHandle ShowAllTextKeyboardHandle;

    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ShowAllTextMouseInputActionData;

    FUIActionBindingHandle ShowAllTextMouseHandle;


    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle SkipInputActionData;

    FUIActionBindingHandle SkipHandle;


    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle LogInputActionData;

    FUIActionBindingHandle LogHandle;


    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle AutoModeInputActionData;

    FUIActionBindingHandle AutoModeHandle;

    
    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle SpeedInputActionData;

    FUIActionBindingHandle SpeedHandle;
    
    UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ActionInputActionData;

    FUIActionBindingHandle ActionHandle;


private:
    /** 시각적 숨김 상태. */
    UPROPERTY(Transient)
    bool bIsVisuallyHidden = false;

    /** 숨기기 직전의 Visibility를 캐싱 — 복원 시 사용. */
    UPROPERTY(Transient)
    ESlateVisibility CachedVisibilityBeforeHide = ESlateVisibility::SelfHitTestInvisible;
};
