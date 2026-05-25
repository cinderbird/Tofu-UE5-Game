#include "KausPerformanceSettings.h"
#include "Engine/PlatformSettingsManager.h"
#include "Misc/EnumRange.h"
#include "Performance/KausPerformanceStatTypes.h"

UKausPlatformSpecificRenderingSettings::UKausPlatformSpecificRenderingSettings()
{
	MobileFrameRateLimits.Append({ 20, 30, 45, 60, 90, 120 });
}

const UKausPlatformSpecificRenderingSettings* UKausPlatformSpecificRenderingSettings::Get()
{
	UKausPlatformSpecificRenderingSettings* Result = UPlatformSettingsManager::Get().GetSettingsForPlatform<ThisClass>();
	check(Result);
	return Result;
}

//////////////////////////////////////////////////////////////////////

UKausPerformanceSettings::UKausPerformanceSettings()
{
	PerPlatformSettings.Initialize(UKausPlatformSpecificRenderingSettings::StaticClass());

	CategoryName = TEXT("Game");

	DesktopFrameRateLimits.Append({ 30, 60, 120, 144, 160, 165, 180, 200, 240, 360 });

	// Default to all stats are allowed
	FKausPerformanceStatGroup& StatGroup = UserFacingPerformanceStats.AddDefaulted_GetRef();
	for (EKausDisplayablePerformanceStat PerfStat : TEnumRange<EKausDisplayablePerformanceStat>())
	{
		StatGroup.AllowedStats.Add(PerfStat);
	}
}

