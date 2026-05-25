// Project Kaus - Graphics Settings Registry
// Display Mode, VSync, Brightness, Frame Rate Limit, Overall Quality + 8 individual quality settings,
// Resolution Scale, Auto Benchmark.
// Resolution dropdown is intentionally deferred (FIntPoint binding requires a custom widget).
// See "Phase A" in the Settings Analysis document.

#include "KausGameSettingRegistry.h"

#include "DataSource/GameSettingDataSource.h"
#include "EditCondition/WhenPlayingAsPrimaryPlayer.h"
#include "GameSettingAction.h"
#include "GameSettingCollection.h"
#include "GameSettingValueDiscreteDynamic.h"
#include "GameSettingValueScalarDynamic.h"
#include "GameFramework/GameUserSettings.h"
#include "KausSettingsLocal.h"
#include "Performance/KausPerformanceSettings.h"
#include "Player/KausLocalPlayer.h"

#define LOCTEXT_NAMESPACE "Kaus"

UGameSettingCollection* UKausGameSettingRegistry::InitializeGraphicsSettings(UKausLocalPlayer* InLocalPlayer)
{
	UGameSettingCollection* Screen = NewObject<UGameSettingCollection>();
	Screen->SetDevName(TEXT("GraphicsCollection"));
	Screen->SetDisplayName(LOCTEXT("GraphicsCollection_Name", "Graphics"));
	Screen->Initialize(InLocalPlayer);

	// Display
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* DisplayCollection = NewObject<UGameSettingCollection>();
		DisplayCollection->SetDevName(TEXT("DisplayCollection"));
		DisplayCollection->SetDisplayName(LOCTEXT("DisplayCollection_Name", "Display"));
		Screen->AddSetting(DisplayCollection);

		//----------------------------------------------------------------------------------
		// Window Mode (Fullscreen / Windowed Fullscreen / Windowed).
		// EWindowMode::Type is a namespaced enum (not UENUM-reflected), so we bind by
		// integer value rather than via _Enum's reflection-based serialisation.
		// Values: 0=Fullscreen, 1=WindowedFullscreen, 2=Windowed.
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("WindowMode"));
			Setting->SetDisplayName(LOCTEXT("WindowMode_Name", "Window Mode"));
			Setting->SetDescriptionRichText(LOCTEXT("WindowMode_Description", "Select between fullscreen, borderless, or windowed display."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFullscreenMode));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFullscreenMode));
			Setting->SetDefaultValue(static_cast<int32>(EWindowMode::WindowedFullscreen));

			Setting->AddOption(static_cast<int32>(EWindowMode::Fullscreen), LOCTEXT("WindowMode_Fullscreen", "Fullscreen"));
			Setting->AddOption(static_cast<int32>(EWindowMode::WindowedFullscreen), LOCTEXT("WindowMode_BorderlessWindowed", "Borderless Windowed"));
			Setting->AddOption(static_cast<int32>(EWindowMode::Windowed), LOCTEXT("WindowMode_Windowed", "Windowed"));

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			DisplayCollection->AddSetting(Setting);
		}

		//----------------------------------------------------------------------------------
		// Resolution: deferred. UGameUserSettings exposes Get/SetScreenResolution as FIntPoint,
		// which UGameSettingValueDiscreteDynamic cannot bind to directly. A dedicated
		// UKausSettingValueDiscrete_Resolution subclass would enumerate supported modes via
		// UKismetSystemLibrary::GetSupportedFullscreenResolutions and serialise as "1920x1080".
		// Tracked under "Phase A" in the Settings Analysis document.

		//----------------------------------------------------------------------------------
		// VSync
		{
			UGameSettingValueDiscreteDynamic_Bool* Setting = NewObject<UGameSettingValueDiscreteDynamic_Bool>();
			Setting->SetDevName(TEXT("VerticalSync"));
			Setting->SetDisplayName(LOCTEXT("VerticalSync_Name", "Vertical Sync"));
			Setting->SetDescriptionRichText(LOCTEXT("VerticalSync_Description", "Synchronizes the frame rate with the monitor's refresh rate to prevent screen tearing. May reduce maximum frame rate."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(IsVSyncEnabled));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetVSyncEnabled));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->IsVSyncEnabled());

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			DisplayCollection->AddSetting(Setting);
		}

		//----------------------------------------------------------------------------------
		// Brightness (Display Gamma)
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("Brightness"));
			Setting->SetDisplayName(LOCTEXT("Brightness_Name", "Brightness"));
			Setting->SetDescriptionRichText(LOCTEXT("Brightness_Description", "Adjusts the overall screen brightness."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetDisplayGamma));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetDisplayGamma));
			Setting->SetDefaultValue(GetDefault<UKausSettingsLocal>()->GetDisplayGamma());

			// Reasonable gamma range; 2.2 is the default sRGB value.
			Setting->SetSourceRangeAndStep(TRange<double>(1.7, 2.7), 0.05);
			Setting->SetMinimumLimit(1.7);
			Setting->SetMaximumLimit(2.7);
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::RawTwoDecimals);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			DisplayCollection->AddSetting(Setting);
		}

		//----------------------------------------------------------------------------------
		// Frame Rate Limit (Always)
		// Discrete number options driven by UKausPerformanceSettings::DesktopFrameRateLimits
		// plus an explicit "Unlimited" (0) entry.
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("FrameRateLimit"));
			Setting->SetDisplayName(LOCTEXT("FrameRateLimit_Name", "Frame Rate Limit"));
			Setting->SetDescriptionRichText(LOCTEXT("FrameRateLimit_Description", "Maximum frame rate the game will render. Set to Unlimited to remove the cap."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetFrameRateLimit_Always));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetFrameRateLimit_Always));
			Setting->SetDefaultValue(0.0f);

			Setting->AddOption(0.0f, LOCTEXT("FrameRateLimit_Unlimited", "Unlimited"));
			for (const int32 Limit : GetDefault<UKausPerformanceSettings>()->DesktopFrameRateLimits)
			{
				Setting->AddOption(static_cast<float>(Limit), FText::Format(LOCTEXT("FrameRateLimit_Number", "{0} FPS"), Limit));
			}

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			DisplayCollection->AddSetting(Setting);
		}
	}

	// Quality
	////////////////////////////////////////////////////////////////////////////////////
	{
		UGameSettingCollection* QualityCollection = NewObject<UGameSettingCollection>();
		QualityCollection->SetDevName(TEXT("QualityCollection"));
		QualityCollection->SetDisplayName(LOCTEXT("QualityCollection_Name", "Quality"));
		Screen->AddSetting(QualityCollection);

		//----------------------------------------------------------------------------------
		// Auto-detect (Auto Benchmark)
		{
			UGameSettingAction* Setting = NewObject<UGameSettingAction>();
			Setting->SetDevName(TEXT("AutoSetQuality"));
			Setting->SetDisplayName(LOCTEXT("AutoSetQuality_Name", "Auto-Detect Quality"));
			Setting->SetDescriptionRichText(LOCTEXT("AutoSetQuality_Description", "Run a hardware benchmark to set graphics quality automatically."));
			Setting->SetActionText(LOCTEXT("AutoSetQuality_ActionText", "Run Benchmark"));
			Setting->SetDoesActionDirtySettings(true);

			Setting->SetCustomAction([](ULocalPlayer* LocalPlayer)
			{
				if (UKausLocalPlayer* KausLP = Cast<UKausLocalPlayer>(LocalPlayer))
				{
					if (UKausSettingsLocal* LocalSettings = KausLP->GetLocalSettings())
					{
						LocalSettings->RunAutoBenchmark(/*bSaveImmediately=*/true);
					}
				}
			});

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			QualityCollection->AddSetting(Setting);
		}

		//----------------------------------------------------------------------------------
		// Overall Quality (Low / Medium / High / Epic). Cinematic level (4) is intentionally
		// excluded for player-facing options.
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(TEXT("OverallQuality"));
			Setting->SetDisplayName(LOCTEXT("OverallQuality_Name", "Overall Quality"));
			Setting->SetDescriptionRichText(LOCTEXT("OverallQuality_Description", "Adjusts all quality settings at once. Choose a single level or fine-tune individual settings below."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetOverallScalabilityLevel));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetOverallScalabilityLevel));
			Setting->SetDefaultValue(3);

			Setting->AddOption(0, LOCTEXT("OverallQuality_Low", "Low"));
			Setting->AddOption(1, LOCTEXT("OverallQuality_Medium", "Medium"));
			Setting->AddOption(2, LOCTEXT("OverallQuality_High", "High"));
			Setting->AddOption(3, LOCTEXT("OverallQuality_Epic", "Epic"));

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			QualityCollection->AddSetting(Setting);
		}

		// Helper lambda to keep the eight individual quality entries terse.
		auto MakeQualityNumber = [&](const FName DevName, const FText DisplayName, const FText Description,
		                             FString GetterName, FString SetterName, int32 DefaultLevel)
		{
			UGameSettingValueDiscreteDynamic_Number* Setting = NewObject<UGameSettingValueDiscreteDynamic_Number>();
			Setting->SetDevName(DevName);
			Setting->SetDisplayName(DisplayName);
			Setting->SetDescriptionRichText(Description);

			Setting->SetDynamicGetter(MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>{
				GET_FUNCTION_NAME_STRING_CHECKED(UKausLocalPlayer, GetLocalSettings),
				MoveTemp(GetterName)
			}));
			Setting->SetDynamicSetter(MakeShared<FGameSettingDataSourceDynamic>(TArray<FString>{
				GET_FUNCTION_NAME_STRING_CHECKED(UKausLocalPlayer, GetLocalSettings),
				MoveTemp(SetterName)
			}));
			Setting->SetDefaultValue(DefaultLevel);

			Setting->AddOption(0, LOCTEXT("Quality_Low", "Low"));
			Setting->AddOption(1, LOCTEXT("Quality_Medium", "Medium"));
			Setting->AddOption(2, LOCTEXT("Quality_High", "High"));
			Setting->AddOption(3, LOCTEXT("Quality_Epic", "Epic"));

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			QualityCollection->AddSetting(Setting);
		};

		//----------------------------------------------------------------------------------
		MakeQualityNumber(TEXT("ViewDistanceQuality"),
			LOCTEXT("ViewDistance_Name", "View Distance"),
			LOCTEXT("ViewDistance_Description", "Distance at which objects and details are still rendered."),
			TEXT("GetViewDistanceQuality"), TEXT("SetViewDistanceQuality"), 3);

		MakeQualityNumber(TEXT("AntiAliasingQuality"),
			LOCTEXT("AntiAliasing_Name", "Anti-Aliasing"),
			LOCTEXT("AntiAliasing_Description", "Smooths jagged edges on rendered geometry."),
			TEXT("GetAntiAliasingQuality"), TEXT("SetAntiAliasingQuality"), 3);

		MakeQualityNumber(TEXT("PostProcessingQuality"),
			LOCTEXT("PostProcessing_Name", "Post Processing"),
			LOCTEXT("PostProcessing_Description", "Visual effects applied after the scene is rendered (bloom, depth of field, motion blur)."),
			TEXT("GetPostProcessingQuality"), TEXT("SetPostProcessingQuality"), 3);

		MakeQualityNumber(TEXT("ShadowQuality"),
			LOCTEXT("Shadow_Name", "Shadows"),
			LOCTEXT("Shadow_Description", "Quality of dynamic shadows."),
			TEXT("GetShadowQuality"), TEXT("SetShadowQuality"), 3);

		MakeQualityNumber(TEXT("GlobalIlluminationQuality"),
			LOCTEXT("GlobalIllumination_Name", "Global Illumination"),
			LOCTEXT("GlobalIllumination_Description", "Quality of indirect lighting and bounced light."),
			TEXT("GetGlobalIlluminationQuality"), TEXT("SetGlobalIlluminationQuality"), 3);

		MakeQualityNumber(TEXT("ReflectionQuality"),
			LOCTEXT("Reflection_Name", "Reflections"),
			LOCTEXT("Reflection_Description", "Quality of screen-space and planar reflections."),
			TEXT("GetReflectionQuality"), TEXT("SetReflectionQuality"), 3);

		MakeQualityNumber(TEXT("TextureQuality"),
			LOCTEXT("Texture_Name", "Textures"),
			LOCTEXT("Texture_Description", "Resolution of texture maps."),
			TEXT("GetTextureQuality"), TEXT("SetTextureQuality"), 3);

		MakeQualityNumber(TEXT("VisualEffectQuality"),
			LOCTEXT("VisualEffect_Name", "Effects"),
			LOCTEXT("VisualEffect_Description", "Quality of particle effects and visual FX."),
			TEXT("GetVisualEffectQuality"), TEXT("SetVisualEffectQuality"), 3);

		//----------------------------------------------------------------------------------
		// Resolution Scale (3D rendering scale, separate from window resolution)
		{
			UGameSettingValueScalarDynamic* Setting = NewObject<UGameSettingValueScalarDynamic>();
			Setting->SetDevName(TEXT("ResolutionScale"));
			Setting->SetDisplayName(LOCTEXT("ResolutionScale_Name", "3D Resolution Scale"));
			Setting->SetDescriptionRichText(LOCTEXT("ResolutionScale_Description", "Renders the 3D scene at a fraction of the screen resolution. Lower values improve performance at the cost of image clarity."));

			Setting->SetDynamicGetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(GetResolutionScaleNormalized));
			Setting->SetDynamicSetter(GET_LOCAL_SETTINGS_FUNCTION_PATH(SetResolutionScaleNormalized));
			Setting->SetDefaultValue(1.0);

			Setting->SetSourceRangeAndStep(TRange<double>(0.0, 1.0), 0.01);
			Setting->SetDisplayFormat(UGameSettingValueScalarDynamic::ZeroToOnePercent);

			Setting->AddEditCondition(FWhenPlayingAsPrimaryPlayer::Get());

			QualityCollection->AddSetting(Setting);
		}
	}

	return Screen;
}

#undef LOCTEXT_NAMESPACE
