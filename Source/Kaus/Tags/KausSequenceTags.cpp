#include "Tags/KausSequenceTags.h"

namespace KausSequenceTags
{
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(
        Sequence_Resume,
        "Kaus.Sequence.Resume",
        "현재 일시정지 지점(PausedAtIntro 또는 PausedAtMenu)에서 재생을 재개합니다.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(
        Sequence_Restart,
        "Kaus.Sequence.Restart",
        "시퀀스를 Frame 0 부터 다시 시작합니다.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(
        Sequence_Stop,
        "Kaus.Sequence.Stop",
        "재생을 즉시 중단하고 TeardownSequence 를 호출합니다.");

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(
        Anim_PhaseChanged,
        "Kaus.Anim.PhaseChanged",
        "Broadcast when the KausSequenceDirector phase changes. Payload: FKausAnimPhaseChangedMessage.");

}
