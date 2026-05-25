#include "KausHUDLayoutWidget.h"
#include "CommonUIExtensions.h"
#include "UIExtensionSystem.h"
#include "Input/CommonUIInputTypes.h"
#include "Tags/KausGameplayTags.h"

UE_DEFINE_GAMEPLAY_TAG_STATIC(TAG_UI_ACTION_ESCAPE, "UI.Action.Escape");

UKausHUDLayoutWidget::UKausHUDLayoutWidget(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
}

void UKausHUDLayoutWidget::NativeOnInitialized()
{
	Super::NativeOnInitialized();

	RegisterUIActionBinding(FBindUIActionArgs(FUIActionTag::ConvertChecked(TAG_UI_ACTION_ESCAPE), false, FSimpleDelegate::CreateUObject(this, &ThisClass::HandleEscapeAction)));
}

void UKausHUDLayoutWidget::NativeDestruct()
{
	Super::NativeDestruct();
}

void UKausHUDLayoutWidget::HandleEscapeAction()
{
	if (ensure(!EscapeMenuClass.IsNull()))
	{
		UCommonUIExtensions::PushStreamedContentToLayer_ForPlayer(GetOwningLocalPlayer(), KausGameplayTags::TAG_UI_Layer_Menu, EscapeMenuClass);
	}
}