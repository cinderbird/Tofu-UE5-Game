// .cpp
#include "Sequence/KausSequenceBlueprintLibrary.h"
#include "GameFramework/GameplayMessageSubsystem.h"
#include "Animation/KausAnimMessages.h"
#include "Tags/KausSequenceTags.h"

void UKausSequenceBlueprintLibrary::BroadcastAnimPhaseChange(
    const UObject* WorldContextObject,
    EKausAnimPhase NewPhase,
    float BlendDuration)
{
    if (!WorldContextObject) return;
    if (!UGameplayMessageSubsystem::HasInstance(WorldContextObject)) return;

    FKausAnimPhaseChangedMessage Msg;
    Msg.NewPhase      = NewPhase;
    Msg.BlendDuration = BlendDuration;

    UGameplayMessageSubsystem::Get(WorldContextObject)
        .BroadcastMessage(KausSequenceTags::Anim_PhaseChanged, Msg);
}
