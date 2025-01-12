using UnrealBuildTool;

public class SQEXSEADSequencerTracks : ModuleRules {
    public SQEXSEADSequencerTracks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "MovieSceneTracks",
            "SQEXSEAD",
        });
    }
}
