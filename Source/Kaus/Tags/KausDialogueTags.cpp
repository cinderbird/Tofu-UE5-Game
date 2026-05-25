// Copyright Project Kaus. All Rights Reserved.

#include "Tags/KausDialogueTags.h"

namespace KausDialogueTags
{
	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Message_Dialogue_Manager_Registered,
		"Message.Dialogue.Manager.Registered",
		"Manager Beacon broadcasts when its owning Mountea Dialogue Manager is ready (BeginPlay).");

	UE_DEFINE_GAMEPLAY_TAG_COMMENT(Message_Dialogue_Manager_Unregistered,
		"Message.Dialogue.Manager.Unregistered",
		"Manager Beacon broadcasts when its owning Mountea Dialogue Manager is being torn down (EndPlay).");
}
