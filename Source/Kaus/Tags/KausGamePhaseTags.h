#pragma once
#include "NativeGameplayTags.h"

namespace KausGamePhaseTags
{
    //게임 실행 -> 시작 화면 -> 메인화면
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_StartScreen);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_MainScreen);

    //새 게임 시작 -> 도입 프롤로그 시퀀서 재생 시작/종료 -> 튜토리얼 시작 / 종료 -> 마무리 프롤로그 시퀀서 재생 시작/종료
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_IntroPrologueCineStart);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_IntroPrologueCineEnd);
    
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_GameTutorialStart);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_GameTutorialEnd);
    
    //todo: 전투가 들어갈 수 있음.
    
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_OutroPrologueCineStart);
    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_NewGame_OutroPrologueCineEnd);

    KAUS_API UE_DECLARE_GAMEPLAY_TAG_EXTERN(Phase_ReturnToStartScreen);
    
}