using UnrealBuildTool;

public class SQEXSEADMusicSequencerTracks : ModuleRules {
    public SQEXSEADMusicSequencerTracks(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieScene",
            "SQEXSEADMusic",
        });
    }
}
