#include "KausLocalPlayer.h"
#include "Engine/World.h"
#include "GameFramework/PlayerController.h"
#include "Setting/KausSettingsLocal.h"
#include "Setting/KausSettingsShared.h"
#include "CommonUserSubsystem.h"

UKausLocalPlayer::UKausLocalPlayer()
{
}

void UKausLocalPlayer::PostInitProperties()
{
	Super::PostInitProperties();
}

UKausSettingsLocal* UKausLocalPlayer::GetLocalSettings() const
{
	return UKausSettingsLocal::Get();
}

UKausSettingsShared* UKausLocalPlayer::GetSharedSettings() const
{
	if (!SharedSettings)
	{
		// On PC it's okay to use the sync load because it only checks the disk
		// This could use a platform tag to check for proper save support instead
		bool bCanLoadBeforeLogin = PLATFORM_DESKTOP;

		if (bCanLoadBeforeLogin)
		{
			SharedSettings = UKausSettingsShared::LoadOrCreateSettings(this);
		}
		else
		{
			// We need to wait for user login to get the real settings so return temp ones
			SharedSettings = UKausSettingsShared::CreateTemporarySettings(this);
		}
	}

	return SharedSettings;
}

void UKausLocalPlayer::LoadSharedSettingsFromDisk(bool bForceLoad)
{
	FUniqueNetIdRepl CurrentNetId = GetCachedUniqueNetId();
	if (!bForceLoad && SharedSettings && CurrentNetId == NetIdForSharedSettings)
	{
		// Already loaded once, don't reload
		return;
	}

	ensure(UKausSettingsShared::AsyncLoadOrCreateSettings(this, UKausSettingsShared::FOnSettingsLoadedEvent::CreateUObject(this, &UKausLocalPlayer::OnSharedSettingsLoaded)));

}

void UKausLocalPlayer::OnSharedSettingsLoaded(UKausSettingsShared* LoadedOrCreatedSettings)
{
	// The settings are applied before it gets here
	if (ensure(LoadedOrCreatedSettings))
	{
		// This will replace the temporary or previously loaded object which will GC out normally
		SharedSettings = LoadedOrCreatedSettings;

		NetIdForSharedSettings = GetCachedUniqueNetId();
	}
}
