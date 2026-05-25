#pragma once

#include "CommonLocalPlayer.h"
#include "KausLocalPlayer.generated.h"

class APlayerController;
class UInputMappingContext;
class UKausSettingsLocal;
class UKausSettingsShared;
class UObject;
class UWorld;
struct FFrame;

/**
 * 
 */
UCLASS()
class KAUS_API UKausLocalPlayer : public UCommonLocalPlayer
{
	GENERATED_BODY()
	
public:
	UKausLocalPlayer();

	//~UObject interface
	virtual void PostInitProperties() override;
	//~End of UObject interface

	/** Gets the local settings for this player, this is read from config files at process startup and is always valid */
	UFUNCTION()
	UKausSettingsLocal* GetLocalSettings() const;

	/** Gets the shared setting for this player, this is read using the save game system so may not be correct until after user login */
	UFUNCTION()
	UKausSettingsShared* GetSharedSettings() const;

	/** Starts an async request to load the shared settings, this will call OnSharedSettingsLoaded after loading or creating new ones */
	void LoadSharedSettingsFromDisk(bool bForceLoad = false);

protected:
	void OnSharedSettingsLoaded(UKausSettingsShared* LoadedOrCreatedSettings);

private:
	UPROPERTY(Transient)
	mutable TObjectPtr<UKausSettingsShared> SharedSettings;

	FUniqueNetIdRepl NetIdForSharedSettings;

	UPROPERTY(Transient)
	mutable TObjectPtr<const UInputMappingContext> InputMappingContext;

	UPROPERTY()
	TWeakObjectPtr<APlayerController> LastBoundPC;
};
