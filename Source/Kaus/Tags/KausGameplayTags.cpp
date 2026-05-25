#include "KausGameplayTags.h"

namespace KausGameplayTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Ability_Interaction_Activate, "Ability.Interaction.Activate", "Activate Interaction Ability");


	//Message - Event
	//UI
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Event_Dialogue_Closed, "UI.Event.Dialogue.Closed", "Dialogue End");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Event_Dialogue_ForceClose, "UI.Event.Dialogue.ForceClose", "Dialogue Forced End");

	//UI - Layer
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Layer_Game, "UI.Layer.Game", "Primary Layout Game Layer");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Layer_GameOnMenu, "UI.Layer.GameOnMenu", "Primary Layout GameOnMenu Layer");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Layer_Menu, "UI.Layer.Menu", "Primary Layout Menu Layer");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Layer_Modal, "UI.Layer.Modal", "Primary Layout Modal Layer");
	
	//UI - Group
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Group_Intro, "UI.Group.Intro", "Intro UI Group");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_UI_Group_MainMenu, "UI.Group.MainMenu", "Main Menu UI Group");

	//Input - Native
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Move, "InputTag.Move", "Move input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Mouse, "InputTag.Look.Mouse", "Look (mouse) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Look_Stick, "InputTag.Look.Stick", "Look (stick) input.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_CameraMove, "InputTag.Camera.Move", "Camera Move input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_CameraLook_Mouse, "InputTag.Camera.Look.Mouse", "Camera Look (mouse) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_CameraLook_Stick, "InputTag.Camera.Look.Stick", "Camera Look (stick) input.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_CameraSnap_Left, "InputTag.Camera.Snap.Left", "Camera Snap Left");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_CameraSnap_Right, "InputTag.Camera.Snap.Right", "Camera Snap Right");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_RangeZoom, "InputTag.Camera.RangeZoom", "Camera Range Zoom");

	//InputTag - Camera
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ZZZ_Move, "InputTag.Camera.ZZZ.Move", "Camera Move input for ZZZ Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ZZZ_Zoom, "InputTag.Camera.ZZZ.Zoom", "Camera Zoom input for ZZZ Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ZZZ_Look, "InputTag.Camera.ZZZ.Look", "Camera Look input for ZZZ Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ZZZ_RotateSnap, "InputTag.Camera.ZZZ.RotateSnap", "Camera Rotate Snap input for ZZZ Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ZZZ_Reset, "InputTag.Camera.ZZZ.Reset", "Camera Reset input for ZZZ Camera Mode");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_ThirdPerson_Look, "InputTag.Camera.ThirdPerson.Look", "Camera Look input for Third Person Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Camera_Switch_TPAndZZZ, "InputTag.Camera.Switch.TPAndZZZ", "Camera Switch between Third Person and ZZZ");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_Orbit_Toggle, "InputTag.Orbit.Toggle", "Toggle Orbit Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_MouseClick, "InputTag.Mouse.Click", "Mouse Click Input");

	//Input - UI
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Interaction_Event_SelectionChanged, "UI.Interaction.Event.SelectionChanged", "Input for when the selection changes in the interaction UI");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_UI_Interaction_MultipleTarget_Wheel, "InputTag.UI.Interaction.MultipleTarget.Wheel", "Mouse Wheel input for cycling through multiple interaction targets");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_UI_Interaction_MultipleTarget_Up, "InputTag.UI.Interaction.MultipleTarget.Up", "Input for cycling up through multiple interaction targets");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(InputTag_UI_Interaction_MultipleTarget_Down, "InputTag.UI.Interaction.MultipleTarget.Down", "Input for cycling down through multiple interaction targets");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Event_Interaction_CycleNext, "UI.Event.Interaction.CycleNext", "Input for cycling to the next interaction target");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(UI_Event_Interaction_CyclePrev, "UI.Event.Interaction.CyclePrev", "Input for cycling to the previous interaction target");

	//Gameplay
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Gameplay_MovementStopped, "Gameplay.MovementStopped", "Movement Stopped");

	//Interaction
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_INTERACTION_DURATION_MESSAGE, "Ability.Interaction.Duration.Message", "Interaction System, Duration Mesage");

	//Hardware
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Platform_Trait_Input_HardwareCursor, "Platform.Trait.Input.HardwareCursor", "HardwareCursor");

	//Ability System - Message
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_ABILITY_SIMPLE_FAILURE_MESSAGE, "Ability.UserFacingSimpleActivateFail.Message", "Ability System Simple Failure Message");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_ABILITY_PLAY_MONTAGE_FAILURE_MESSAGE, "Ability.PlayMontageOnActivateFail.Message", "Ability System Failure Message with Montage");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Unit_Status_Death, "Status.Death", "Target has the death status.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Unit_Status_Death_Dying, "Status.Death.Dying", "Target has begun the death process.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Unit_Status_Death_Dead, "Status.Death.Dead", "Target has finished the death process.");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_IsDead, "Ability.ActivateFail.IsDead", "Ability failed to activate because its owner is dead.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cooldown, "Ability.ActivateFail.Cooldown", "Ability failed to activate because it is on cool down.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Cost, "Ability.ActivateFail.Cost", "Ability failed to activate because it did not pass the cost checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsBlocked, "Ability.ActivateFail.TagsBlocked", "Ability failed to activate because tags are blocking it.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_TagsMissing, "Ability.ActivateFail.TagsMissing", "Ability failed to activate because tags are missing.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_Networking, "Ability.ActivateFail.Networking", "Ability failed to activate because it did not pass the network checks.");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Ability_ActivateFail_ActivationGroup, "Ability.ActivateFail.ActivationGroup", "Ability failed to activate because of its activation group.");

	//Camera
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Camera_Mode_FirstPerson, "Camera.Mode.FirstPerson", "First Person Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Camera_Mode_ThirdPerson, "Camera.Mode.ThirdPerson", "Third Person Camera Mode");
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Camera_Mode_ZZZ, "Camera.Mode.ZZZ", "ZZZ Camera Mode");


	//MainScreen
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_MainScreen_InteractionSet_1, "MainScreen.InteractionSet.1", "Main Screen Interaction Set, Character will be hiding."); //Character가 숨어 있는 상호작용 셋
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_MainScreen_InteractionSet_2, "MainScreen.InteractionSet.2", "Main Screen Interaction Set, Character will be Stand and be shy."); //Character를 사선으로 비추는 상호작용 셋


	//Demo
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(TAG_Demo_Choise, "Kaus.Choice", "Demo Choice Tag(USE ONLY DEMO!)");
}
