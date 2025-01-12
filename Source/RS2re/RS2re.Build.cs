using UnrealBuildTool;

public class RS2re : ModuleRules {
    public RS2re(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "InputCore",
            "AIModule",
            "AnimationCore",
            "CinematicCamera",
            "ControlRig",
            "RigVM",
            "Core",
            "CoreUObject",
            "Engine",
            "GameBaseSystem",
            "GameplayTasks",
            "GameplayCameras",
            "ImGuiHelper",
            "ImGuiMainMenuHelper",
            "KawaiiPhysics",
            "LevelSequence",
            "LipSyncCurve",
            "MovieScene",
            "NavigationSystem",
            "Niagara",
            "PhysicsCore",
            "ProceduralMeshComponent",
            "PulldownStruct",
            "SQEXSEAD",
            "ShiftGameRule",
            "Slate",
            "SlateCore",
            "StandardAISystem",
            "UMG",
            "UnrealEngineHelper",
            "WidgetBaseSystem",
        });
    }
}
