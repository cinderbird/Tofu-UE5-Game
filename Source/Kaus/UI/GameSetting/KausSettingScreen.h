#pragma once


#include "Widgets/GameSettingScreen.h"
#include "KausSettingScreen.generated.h"

class UGameSettingRegistry;
class UKausTabListWidgetBase;
class UObject;

/**
 * 
 */
UCLASS(Abstract, meta = (Category = "Settings", DisableNativeTick))
class KAUS_API UKausSettingScreen : public UGameSettingScreen
{
	GENERATED_BODY()
	
protected:
	virtual void NativeOnInitialized() override;
	virtual UGameSettingRegistry* CreateRegistry() override;

	void HandleBackAction();
	void HandleApplyAction();
	void HandleCancelChangesAction();
	void HandleResetAction();

	virtual void OnSettingsDirtyStateChanged_Implementation(bool bSettingsDirty) override;

	/**
	 * Resets every setting visible on the current screen back to its registered default value.
	 * Honors page navigation: if the user is on a sub-page (e.g. Keybinds), only the settings
	 * on that page are reset.
	 */
	UFUNCTION(BlueprintCallable, Category = "Settings")
	void ResetVisibleSettingsToDefault();

protected:
	UPROPERTY(BlueprintReadOnly, Category = Input, meta = (BindWidget, OptionalWidget = true, AllowPrivateAccess = true))
	TObjectPtr<UKausTabListWidgetBase> TopSettingsTabs;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle BackInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ApplyInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle CancelChangesInputActionData;

	UPROPERTY(EditDefaultsOnly)
	FDataTableRowHandle ResetInputActionData;

	FUIActionBindingHandle BackHandle;
	FUIActionBindingHandle ApplyHandle;
	FUIActionBindingHandle CancelChangesHandle;
	FUIActionBindingHandle ResetHandle;
};
