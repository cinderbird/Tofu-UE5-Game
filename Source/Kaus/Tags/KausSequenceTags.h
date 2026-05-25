#pragma once

#include "NativeGameplayTags.h"

/**
 * KausSequenceTags
 *
 * UGameplayMessageSubsystem 으로 브로드캐스트할 때 사용하는 네이티브 태그 모음.
 *
 * ─── 사용 예 ────────────────────────────────────────────────────────────────
 *
 *  // 브로드캐스트 (어떤 시스템에서든)
 *  FKausSequenceResumeMessage Msg;
 *  Msg.SourceActor = ClickedCharacter;
 *  UGameplayMessageSubsystem::Get(this).BroadcastMessage(
 *      KausSequenceTags::Sequence_Resume, Msg);
 *
 *  // Director는 Setup 시 자동 구독 — 별도 코드 불필요
 * ────────────────────────────────────────────────────────────────────────────
 *
 * 태그 계층:
 *   Kaus.Sequence.Resume   — 현재 일시정지 지점에서 재생 재개
 *   Kaus.Sequence.Restart  — 시퀀스를 처음(Frame 0)부터 다시 시작
 *   Kaus.Sequence.Stop     — 즉시 정지 및 Teardown
 */
namespace KausSequenceTags
{
    /** 현재 일시정지 지점(PausedAtIntro 또는 PausedAtMenu)에서 재생을 재개합니다. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sequence_Resume);

    /** 시퀀스를 Frame 0 부터 다시 시작합니다. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sequence_Restart);

    /** 재생을 즉시 중단하고 TeardownSequence 를 호출합니다. */
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Sequence_Stop);


    
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Anim_PhaseChanged);
}
