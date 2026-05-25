#include "System/KausReturnToStartScreenHandler.h"

#include "System/KausGamePhaseSubsystem.h"
#include "System/KausChoiceHistorySubsystem.h"
#include "Tags/KausGamePhaseTags.h"
#include "Logs/KausLogChannels.h"

#include "Engine/Engine.h"
#include "Engine/GameInstance.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"
#include "LoadingProcessTask.h"
#include "TimerManager.h"

#include "AbilitySystemComponent.h"
#include "AbilitySystemBlueprintLibrary.h"
#include "GameFramework/Pawn.h"
#include "AbilitySystem/Attributes/KausUnitAttributeSet.h"

void UKausReturnToStartScreenHandler::Initialize(FSubsystemCollectionBase& Collection)
{
    Super::Initialize(Collection);

    // GameInstance 수명 동안 맵이 바뀌어도 PostLoadMap을 받기 위해 전역 델리게이트 구독
    PostLoadMapDelegateHandle = FCoreUObjectDelegates::PostLoadMapWithWorld.AddUObject(
        this, &UKausReturnToStartScreenHandler::HandlePostLoadMap);

    // 월드 BeginPlay 이후 PhaseSubsystem 구독 (월드 수명마다 재구독해야 함)
    OnWorldInitializedDelegateHandle = FWorldDelegates::OnPostWorldInitialization.AddLambda(
        [this](UWorld* World, const UWorld::InitializationValues)
        {
            if (!World || World->GetGameInstance() != GetGameInstance()) return;
            BindToPhaseSubsystem(World);
        });

    // Initialize 시점에 이미 월드가 있는 경우도 처리
    if (UWorld* CurrentWorld = GetGameInstance() ? GetGameInstance()->GetWorld() : nullptr)
    {
        BindToPhaseSubsystem(CurrentWorld);
    }

    UE_LOG(LogKaus, Log, TEXT("[KausReturnToStartScreenHandler] Initialized"));
}

void UKausReturnToStartScreenHandler::Deinitialize()
{
    FCoreUObjectDelegates::PostLoadMapWithWorld.Remove(PostLoadMapDelegateHandle);
    FWorldDelegates::OnPostWorldInitialization.Remove(OnWorldInitializedDelegateHandle);

    PostLoadMapDelegateHandle.Reset();
    OnWorldInitializedDelegateHandle.Reset();

    if (BoundPhaseSubsystem.IsValid())
    {
        BoundPhaseSubsystem->OnPhaseChanged.RemoveDynamic(this, &UKausReturnToStartScreenHandler::OnPhaseChanged);
        BoundPhaseSubsystem.Reset();
    }

    if (LoadingTask)
    {
        LoadingTask->Unregister();
        LoadingTask = nullptr;
    }

    Super::Deinitialize();
}

void UKausReturnToStartScreenHandler::BindToPhaseSubsystem(UWorld* World)
{
    if (!World)
    {
        return;
    }

    UKausGamePhaseSubsystem* PhaseSS = World->GetSubsystem<UKausGamePhaseSubsystem>();
    if (!PhaseSS)
    {
        UE_LOG(LogKaus, Verbose, TEXT("[ReturnHandler] No PhaseSubsystem in world %s"), *World->GetName());
        return;
    }

    // 이전에 구독했던 Subsystem이 다르면 해제
    if (BoundPhaseSubsystem.IsValid() && BoundPhaseSubsystem.Get() != PhaseSS)
    {
        BoundPhaseSubsystem->OnPhaseChanged.RemoveDynamic(this, &UKausReturnToStartScreenHandler::OnPhaseChanged);
        UE_LOG(LogKaus, Verbose, TEXT("[ReturnHandler] Unbound from previous PhaseSubsystem"));
    }

    PhaseSS->OnPhaseChanged.RemoveDynamic(this, &UKausReturnToStartScreenHandler::OnPhaseChanged);
    PhaseSS->OnPhaseChanged.AddDynamic(this, &UKausReturnToStartScreenHandler::OnPhaseChanged);

    BoundPhaseSubsystem = PhaseSS;

    UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] Bound to PhaseSubsystem in world %s"), *World->GetName());
}

void UKausReturnToStartScreenHandler::UnbindFromPhaseSubsystem(UWorld* World)
{
    if (BoundPhaseSubsystem.IsValid())
    {
        BoundPhaseSubsystem->OnPhaseChanged.RemoveDynamic(this, &UKausReturnToStartScreenHandler::OnPhaseChanged);
        BoundPhaseSubsystem.Reset();
    }
}

void UKausReturnToStartScreenHandler::OnPhaseChanged(const FGameplayTag& NewPhase)
{
    if (NewPhase.MatchesTag(KausGamePhaseTags::Phase_ReturnToStartScreen))
    {
        UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] Phase.ReturnToStartScreen detected"));
        RequestReturnToStartScreen();
    }
}

void UKausReturnToStartScreenHandler::RequestReturnToStartScreen()
{
    if (bIsReturning)
    {
        UE_LOG(LogKaus, Warning, TEXT("[ReturnHandler] Already returning. Ignoring duplicate request."));
        return;
    }

    UGameInstance* GI = GetGameInstance();
    if (!GI) return;

    UWorld* World = GI->GetWorld();
    if (!World) return;

    bIsReturning = true;

    // 1. 세션 데이터 초기화
    ResetSessionData();

    // 2. LoadingProcessTask 등록 → OpenLevel 호출 전까지 로딩 화면 유지
    LoadingTask = ULoadingProcessTask::CreateLoadingScreenProcessTask(
        World,
        TEXT("Returning to Start Screen..."));

    if (LoadingTask)
    {
        UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] LoadingProcessTask registered"));
    }

    // 3. 최소 표시 시간 후 OpenLevel 호출
    //    (즉시 OpenLevel하면 로딩 화면이 깜빡일 수 있음)
    FTimerHandle TimerHandle;
    World->GetTimerManager().SetTimer(
        TimerHandle,
        [WeakThis = TWeakObjectPtr<UKausReturnToStartScreenHandler>(this)]()
        {
            if (!WeakThis.IsValid()) return;

            UGameInstance* GI = WeakThis->GetGameInstance();
            UWorld* W = GI ? GI->GetWorld() : nullptr;
            if (!W) return;

            UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] OpenLevel: %s"), *WeakThis->StartScreenMapName.ToString());
            UGameplayStatics::OpenLevel(W, WeakThis->StartScreenMapName);
        },
        MinimumLoadingScreenDuration,
        /*bLoop=*/ false);
}

void UKausReturnToStartScreenHandler::ResetSessionData()
{
    UGameInstance* GI = GetGameInstance();
    if (!GI) return;

    // ChoiceHistory 초기화
    if (UKausChoiceHistorySubsystem* ChoiceHistory = GI->GetSubsystem<UKausChoiceHistorySubsystem>())
    {
        ChoiceHistory->ResetAllChoices();
        UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] ChoiceHistory reset"));
    }

    // Player 스텟 초기화 — OpenLevel 후 새 Pawn이 스폰되면 DataTable 초기화가 다시 실행되므로
    // 별도 ASC Clear는 실질적으로 불필요. 다만 확실성을 위해 현재 Pawn ASC의 Active GE를 제거.
    UWorld* World = GI->GetWorld();
    if (APawn* PlayerPawn = UGameplayStatics::GetPlayerPawn(World, 0))
    {
        if (UAbilitySystemComponent* ASC = UAbilitySystemBlueprintLibrary::GetAbilitySystemComponent(PlayerPawn))
        {
            // 모든 Active GameplayEffect 제거 (스텟 버프/디버프 정리)
            FGameplayEffectQuery Query;
            ASC->RemoveActiveEffects(Query);
            UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] Player active GEs cleared"));
        }
    }
}

void UKausReturnToStartScreenHandler::HandlePostLoadMap(UWorld* LoadedWorld)
{
    if (!LoadedWorld || LoadedWorld->GetGameInstance() != GetGameInstance())
    {
        return;
    }

    // 새 맵이 로드되면 PhaseSubsystem이 새로 생성되므로 재구독
    BindToPhaseSubsystem(LoadedWorld);

    // 복귀 진행 중이었다면 여기서 마무리
    if (bIsReturning)
    {
        UE_LOG(LogKaus, Log, TEXT("[ReturnHandler] PostLoadMap: %s (return complete)"), *LoadedWorld->GetName());

        // LoadingTask 해제 → LoadingScreen 숨김
        if (LoadingTask)
        {
            LoadingTask->Unregister();
            LoadingTask = nullptr;
        }

        bIsReturning = false;
    }
}

void UKausReturnToStartScreenHandler::OnWorldBeginPlay()
{
    // 예비: 필요 시 여기에 후속 처리 (현재 미사용)
}