#pragma once

#include "CoreMinimal.h"
#include "Engine/DeveloperSettings.h"
#include "GameplayTagContainer.h"
#include "FrontendDeveloperSettings.generated.h"

class UKausActivatableWidget;
class UTexture2D;

UCLASS(Config = Game, defaultconfig, meta = (DisplayName = "Frontend UI Settings"))
class KAUS_API UFrontendDeveloperSettings : public UDeveloperSettings
{
	GENERATED_BODY()

public:
	UPROPERTY(Config, EditAnywhere, Category = "Widget Reference", meta = (ForceInlineRow, Categories = "UI.Widget"))
	TMap< FGameplayTag,TSoftClassPtr<UKausActivatableWidget> > FrontendWidgetMap;

	UPROPERTY(Config, EditAnywhere, Category = "Options Image Reference", meta = (ForceInlineRow, Categories = "UI.Resource.Image"))
	TMap< FGameplayTag, TSoftObjectPtr<UTexture2D> > OptionsScreenSoftImageMap;
};
