using UnrealBuildTool;

public class GameBaseSystem : ModuleRules {
    public GameBaseSystem(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "AIModule",
            "AnimGraphRuntime",
            "BinkMediaPlayer",
            "CinematicCamera",
            "ControlRig",
            "Core",
            "CoreUObject",
            "CustomizableSequencerTracks",
            "Engine",
            "GameplayCameras",
            "GameplayTasks",       // For IGameplayTaskOwnerInterface
            "ImGuiHelper",
            "InputCore",
            "LevelSequence",
            "MediaAssets",
            "MovieScene",
            "MovieSceneTracks",
            "NavigationSystem",
            "PulldownStruct",
            "Slate",
            "SlateCore",
            "UMG",
            "WidgetBaseSystem",
        });
    }
}
