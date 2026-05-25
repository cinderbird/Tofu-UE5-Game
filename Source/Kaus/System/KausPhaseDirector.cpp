#include "KausPhaseDirector.h"
#include "KausGamePhaseSubsystem.h"
#include "LevelSequencePlayer.h"
#include "LevelSequenceActor.h"
#include "WorldPartition/DataLayer/DataLayerManager.h"
#include "WorldPartition/DataLayer/DataLayerInstance.h"
#include "Kismet/GameplayStatics.h"

AKausPhaseDirector::AKausPhaseDirector()
{
    PrimaryActorTick.bCanEverTick = false;
}

void AKausPhaseDirector::BeginPlay()
{
    Super::BeginPlay();

    if (UWorld* World = GetWorld())
    {
        if (UKausGamePhaseSubsystem* PhaseSubsystem = World->GetSubsystem<UKausGamePhaseSubsystem>())
        {
            PhaseSubsystem->OnPhaseChanged.AddDynamic(this, &AKausPhaseDirector::OnPhaseChanged);
        }
    }
}

void AKausPhaseDirector::OnPhaseChanged(const FGameplayTag& NewPhase)
{
    if (!PhaseActionMap.Contains(NewPhase))
    {
        return; 
    }

    const FKausPhaseActionData& ActionData = PhaseActionMap[NewPhase];

    // ==========================================
    // 1. Data Layer 상태 변경 처리
    // ==========================================
    if (UDataLayerManager* DataLayerManager = UDataLayerManager::GetDataLayerManager(this))
    {
        // 꺼야 할 레이어 비활성화
        for (UDataLayerAsset* LayerAsset : ActionData.DataLayersToDeactivate)
        {
            if (LayerAsset)
            {
                if (const UDataLayerInstance* LayerInstance = DataLayerManager->GetDataLayerInstance(LayerAsset))
                {
                    DataLayerManager->SetDataLayerInstanceRuntimeState(
                        LayerInstance, 
                        EDataLayerRuntimeState::Unloaded 
                    );
                }
            }
        }

        for (UDataLayerAsset* LayerAsset : ActionData.DataLayersToActivate)
        {
            if (LayerAsset)
            {
                if (const UDataLayerInstance* LayerInstance = DataLayerManager->GetDataLayerInstance(LayerAsset))
                {
                    DataLayerManager->SetDataLayerInstanceRuntimeState(
                        LayerInstance, 
                        EDataLayerRuntimeState::Activated
                    );
                }
            }
        }
    }

    // ==========================================
    // 2. 시퀀서(시네마틱) 재생 처리
    // ==========================================
    if (ActionData.SequenceToPlay)
    {
        ALevelSequenceActor* OutActor = nullptr;
        CurrentSequencePlayer = ULevelSequencePlayer::CreateLevelSequencePlayer(
            GetWorld(), 
            ActionData.SequenceToPlay, 
            FMovieSceneSequencePlaybackSettings(), 
            OutActor
        );

        if (CurrentSequencePlayer)
        {
            // 종료 시 다음 페이즈로 넘어가기 위해 태그 캐싱 및 이벤트 바인딩
            CachedNextPhaseTag = ActionData.NextPhaseOnSequenceEnd;
            CurrentSequencePlayer->OnFinished.AddDynamic(this, &AKausPhaseDirector::OnSequenceFinished);
            
            CurrentSequencePlayer->Play();
        }
    }
    else
    {
        // 시퀀서가 없다면 즉시 다음 페이즈로 넘길지 여부 처리 (필요시 구현)
        if (ActionData.NextPhaseOnSequenceEnd.IsValid())
        {
            CachedNextPhaseTag = ActionData.NextPhaseOnSequenceEnd;
            OnSequenceFinished(); 
        }
    }
}

void AKausPhaseDirector::OnSequenceFinished()
{
    if (CachedNextPhaseTag.IsValid())
    {
        if (UWorld* World = GetWorld())
        {
            if (UKausGamePhaseSubsystem* PhaseSubsystem = World->GetSubsystem<UKausGamePhaseSubsystem>())
            {
                PhaseSubsystem->StartPhase(CachedNextPhaseTag);
            }
        }
        CachedNextPhaseTag = FGameplayTag::EmptyTag; // 초기화
    }
}