using UnrealBuildTool;

public class Kaus : ModuleRules
{
	public Kaus(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
	
		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",

			"InputCore",
			"EnhancedInput",

			"CommonGame",
            "CommonUser", 
            "CommonUI",
            "CommonInput", 
            
            "UMG",
			"Slate",
			"SlateCore",

            "GameplayMessageRuntime",

            "ModularGameplay",
            "ModularGameplayActors",

            "GameplayAbilities",
            "GameplayTasks",
            "GameplayTags",

            "UIExtension",

            "PhysicsCore",

            "DeveloperSettings",
            "AudioModulation",
            "CommonLoadingScreen",

            "AudioMixer",
            "RHI",
            "ApplicationCore",

            "GameSubtitles",
            "GameSettings",

            "AsyncMixin",

            "MounteaDialogueSystem",

            "Niagara",

            "NetCore",
            
            "AIModule",

            "LevelSequence",    
            "MovieScene"       
        });

		PrivateDependencyModuleNames.AddRange(new string[] {  });

        PublicIncludePaths.AddRange(
            new string[] {
                "Kaus/",
                "Kaus/AbilitySystem",
                "Kaus/AbilitySystem/Abilities",
                "Kaus/Actor",
                "Kaus/Animation",
                "Kaus/Audio",
                
                "Kaus/GameFeatures",
                "Kaus/GameFeatures/Calendar",
                "Kaus/GameFeatures/GameTime",
                "Kaus/GameFeatures/Narrative",
                
                "Kaus/GameFeatures/Dialogue",
                "Kaus/GameFeatures/Equipment",
                "Kaus/GameFeatures/Interaction",
                "Kaus/GameFeatures/Inventory",
                "Kaus/GameFeatures/Node",
                "Kaus/GameFeatures/Sequence",

                "Kaus/Camera",
                "Kaus/Character",
                "Kaus/DataTable",
                "Kaus/Development",
                "Kaus/GameEffects",
                "Kaus/GameExperience",
                "Kaus/GameMode",
                "Kaus/Input",
                "Kaus/Logs",
                "Kaus/Pawn",
                "Kaus/Performance",
                "Kaus/Physics",
                "Kaus/Player",
                "Kaus/Setting",
                "Kaus/System",
                "Kaus/Tags",
                "Kaus/UI",
                "Kaus/World"

            }
        );
    
	}
}
