#include "KausGamePhaseTags.h" 

namespace KausGamePhaseTags
{
    //게임 실행 -> 시작 화면 -> 메인화면
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_StartScreen, "Phase.StartScreen", "Game Init -> StartScreen");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_MainScreen, "Phase.MainScreen", "StartScreen -> MainScreen");

    //새 게임 시작 -> 도입 프롤로그 시퀀서 재생 시작/종료 -> 튜토리얼 시작 / 종료 -> 마무리 프롤로그 시퀀서 재생 시작/종료
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_IntroPrologueCineStart, "Phase.NewGame.Intro.PrologueCine.Start", "NewGame -> Intro Sequencer Start");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_IntroPrologueCineEnd, "Phase.NewGame.Intro.PrologueCine.End", "Intro Sequencer Start -> Intro Sequencer End");
    
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_GameTutorialStart, "Phase.NewGame.Tutorial.Start", "Intro Sequencer End -> Tutorial Start");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_GameTutorialEnd, "Phase.NewGame.Tutorial.End", "Tutorial Start -> Tutorial End");
    //todo: 전투가 들어갈 수 있음.

    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_OutroPrologueCineStart, "Phase.NewGame.Outro.PrologueCine.Start", "Tutorial End -> Outro Sequencer Start");
    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_NewGame_OutroPrologueCineEnd, "Phase.NewGame.Outro.PrologueCine.End", "Outro Sequencer Start -> Outro Sequencer End");


    UE_DEFINE_GAMEPLAY_TAG_COMMENT(Phase_ReturnToStartScreen, "Phase.ReturnToStartScreen", "Demo End -> Return to Start Screen");
}
