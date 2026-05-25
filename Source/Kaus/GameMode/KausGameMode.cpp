#include "KausGameMode.h"
#include "System/KausAssetManager.h"
#include "KausGameState.h"
#include "Player/KausPlayerController.h"
#include "Player/KausReplayPlayerController.h"
#include "Player/KausPlayerState.h"
#include "Character/KausCharacter.h"
#include "UI/KausHUD.h"
#include "Logs/KausLogChannels.h"
#include "System/KausGameSession.h"
#include "KausTimeSettings.h"
#include "Calendar/KausCalendarSchedule.h"
#include "Calendar/KausCalendarSubsystem.h"
#include "GameTime/KausDayCycleDefinition.h"
#include "GameTime/KausDayCycleSubsystem.h"
#include "GameTime/KausGameTimeMessageBroadcastSystem.h"
#include "Tags/KausDayCycleTags.h"

AKausGameMode::AKausGameMode(const FObjectInitializer& ObjectInitializer) 
	: Super(ObjectInitializer)
{
	GameStateClass = AKausGameState::StaticClass();
	GameSessionClass = AKausGameSession::StaticClass();
	PlayerControllerClass = AKausPlayerController::StaticClass();
	ReplaySpectatorPlayerControllerClass = AKausReplayPlayerController::StaticClass();
	PlayerStateClass = AKausPlayerState::StaticClass();
	DefaultPawnClass = AKausCharacter::StaticClass();
	HUDClass = AKausHUD::StaticClass();
}

void AKausGameMode::InitGame(const FString& MapName, const FString& Options, FString& ErrorMessage)
{
	Super::InitGame(MapName, Options, ErrorMessage);

	UKausAssetManager::Get().GetGameData();

	UE_LOG(LogKaus, Log, TEXT("KausGameMode: InitGame Complete. Global Data Loaded. Map: %s"), *MapName);

	InitTimeSystem();
}

void AKausGameMode::StartPlay()
{
	Super::StartPlay();
}

UClass* AKausGameMode::GetDefaultPawnClassForController_Implementation(AController* InController)
{
	return Super::GetDefaultPawnClassForController_Implementation(InController);
}


void AKausGameMode::InitTimeSystem()
{
    // ─── Subsystem 조회 + 존재 검증 ────────────────────────────────────
    UGameInstance* GI = GetGameInstance();
    if (!GI)
    {
        UE_LOG(LogKaus, Error, TEXT("InitTimeSystem: GameInstance is null"));
        return;
    }

    auto* CalendarSubsystem  = GI->GetSubsystem<UKausCalendarSubsystem>();
    auto* DayCycleSubsystem  = GI->GetSubsystem<UKausDayCycleSubsystem>();
    auto* BroadcastSystem    = GI->GetSubsystem<UKausGameTimeMessageBroadcastSystem>();

    if (!CalendarSubsystem || !DayCycleSubsystem || !BroadcastSystem)
    {
        UE_LOG(LogKaus, Error,
            TEXT("InitTimeSystem: required subsystem missing "
                 "(Calendar=%d DayCycle=%d Broadcast=%d)"),
            CalendarSubsystem != nullptr,
            DayCycleSubsystem != nullptr,
            BroadcastSystem  != nullptr);
        return;
    }

    // ─── Settings 조회 + 자산 로드 ─────────────────────────────────────
    const auto* Settings = GetDefault<UKausTimeSettings>();
    if (!Settings)
    {
        UE_LOG(LogKaus, Error, TEXT("InitTimeSystem: KausTimeSettings not found"));
        return;
    }

    // Soft reference → 동기 로드. 게임 시작 시점 한 번만.
    UKausCalendarSchedule*   Schedule   = Settings->DefaultSchedule.LoadSynchronous();
    UKausDayCycleDefinition* Definition = Settings->DefaultDefinition.LoadSynchronous();

    if (!Schedule || !Definition)
    {
        UE_LOG(LogKaus, Error,
            TEXT("InitTimeSystem: Time assets not configured. "
                 "Open Project Settings → Kaus → Time."));
        return;
    }

    CalendarSubsystem->InitializeWithSchedule(Schedule);
    BroadcastSystem->StartBroadcasting();

    // TODO(SaveData): 시작 좌표를 SaveData에서 로드. 현재는 데모용 하드코드.
    //   if (SaveSystem->HasSave()) { SaveSystem->LoadTimePosition(StartDate, StartCycle); }
    //   else                       { 아래 기본값 사용 }
    const FKausGameDate StartDate(2026, 5, 1);
    const FGameplayTag  StartCycle = KausDayCycleTags::Calendar_Cycle_Morning;

    DayCycleSubsystem->InitializeWith(Definition, StartDate, StartCycle, CalendarSubsystem);
}
