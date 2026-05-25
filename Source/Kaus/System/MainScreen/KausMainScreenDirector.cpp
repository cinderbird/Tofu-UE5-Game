#include "System/MainScreen/KausMainScreenDirector.h"
#include "System/MainScreen/KausMainScreenConfigDA.h"
#include "System/MainScreen/KausMainScreenInteractionSetDA.h"
#include "Sequence/KausSequenceDirector.h"
#include "Sequence/KausSequenceConfigDA.h"
#include "System/KausGamePhaseSubsystem.h"
#include "Tags/KausGamePhaseTags.h"
#include "LevelSequence.h"
#include "Logs/KausLogChannels.h"

AKausMainScreenDirector::AKausMainScreenDirector()
{
    PrimaryActorTick.bCanEverTick = false;
    SequenceDirector = CreateDefaultSubobject<UKausSequenceDirector>(TEXT("SequenceDirector"));
}

void AKausMainScreenDirector::BeginPlay()
{
    Super::BeginPlay();
 
    UWorld* W = GetWorld();
    if (!W) return;
 
    UKausGamePhaseSubsystem* PS = W->GetSubsystem<UKausGamePhaseSubsystem>();
    if (!PS) return;
 
    PS->OnPhaseChanged.AddDynamic(this, &AKausMainScreenDirector::OnPhaseChanged);
 
    if (PS->GetCurrentPhase().MatchesTag(KausGamePhaseTags::Phase_MainScreen))
    {
        UE_LOG(LogKaus, Log, TEXT("[%s] BeginPlay: Phase already MainScreen. Applying InteractionSet immediately."), *GetName());
        ApplyInteractionSet();
    }
}

void AKausMainScreenDirector::EndPlay(const EEndPlayReason::Type EndPlayReason)
{
    if (SequenceDirector)
    {
        SequenceDirector->TeardownSequence();
    }

    if (UWorld* W = GetWorld())
    {
        if (UKausGamePhaseSubsystem* PS = W->GetSubsystem<UKausGamePhaseSubsystem>())
        {
            PS->OnPhaseChanged.RemoveDynamic(this, &AKausMainScreenDirector::OnPhaseChanged);
        }
    }

    Super::EndPlay(EndPlayReason);
}

void AKausMainScreenDirector::OnPhaseChanged(const FGameplayTag& NewPhase)
{
    if (!NewPhase.MatchesTag(KausGamePhaseTags::Phase_MainScreen)) return;

    // Phase_MainScreen 진입 시 즉시 시퀀서 재생
    ApplyInteractionSet();
}

void AKausMainScreenDirector::ApplyInteractionSet()
{
    if (!MainScreenConfig)
    {
        UE_LOG(LogKaus, Warning, TEXT("[%s] ApplyInteractionSet: MainScreenConfig is null."),
            *GetName());
        return;
    }

    if (!MainScreenConfig->SequenceConfig)
    {
        UE_LOG(LogKaus, Warning, TEXT("[%s] ApplyInteractionSet: SequenceConfig is null."),
            *GetName());
        return;
    }

    UKausMainScreenInteractionSetDA* InteractionSet = MainScreenConfig->InteractionSet;
    if (!InteractionSet)
    {
        UE_LOG(LogKaus, Warning, TEXT("[%s] ApplyInteractionSet: InteractionSet is null."),
            *GetName());
        return;
    }

    ULevelSequence* Sequence = InteractionSet->MasterSequence.LoadSynchronous();
    if (!Sequence)
    {
        UE_LOG(LogKaus, Warning, TEXT("[%s] ApplyInteractionSet: Failed to load MasterSequence."),
            *GetName());
        return;
    }

    // 기존 시퀀서 정리 후 새로 설정
    SequenceDirector->TeardownSequence();
    SequenceDirector->SetupSequence(Sequence, MainScreenConfig->SequenceConfig);
    SequenceDirector->StartPlayback();

    UE_LOG(LogKaus, Log, TEXT("[%s] ApplyInteractionSet: Sequence started."), *GetName());

    OnSequenceSetupComplete(InteractionSet);
}
