#include "KausUIManagerSubsystem.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "GameUIPolicy.h"
#include "PrimaryGameLayout.h"
#include "CommonLocalPlayer.h"
#include "Tags/KausGameplayTags.h"
#include "UI/KausPrimaryGameLayout.h"
#include "Logs/KausLogChannels.h"
#include "UI/KausActivatableWidget.h"

UKausUIManagerSubsystem::UKausUIManagerSubsystem()
{
}

void UKausUIManagerSubsystem::Initialize(FSubsystemCollectionBase& Collection)
{
	Super::Initialize(Collection);
}

void UKausUIManagerSubsystem::Deinitialize()
{
	if (UIToggleListenerHandle.IsValid())
	{
		UIToggleListenerHandle.Unregister();
	}

	Super::Deinitialize();
}

void UKausUIManagerSubsystem::SetRootLayoutVisibility(bool bVisible)
{
	if (const UGameUIPolicy* Policy = GetCurrentUIPolicy())
	{
		for (const ULocalPlayer* LocalPlayer : GetGameInstance()->GetLocalPlayers())
		{
			const UCommonLocalPlayer* CommonPlayer = Cast<UCommonLocalPlayer>(LocalPlayer);
			if (UPrimaryGameLayout* RootLayout = Policy->GetRootLayout(CommonPlayer))
			{
				ESlateVisibility NewVisibility = bVisible ? ESlateVisibility::SelfHitTestInvisible : ESlateVisibility::Collapsed;
				RootLayout->SetVisibility(NewVisibility);

				UE_LOG(LogKaus, Log, TEXT("[QA] Set UI Visibility: %d"), bVisible);
			}
		}
	}
}