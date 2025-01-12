using UnrealBuildTool;

public class SQEXSEADMovieRenderPipeline : ModuleRules {
    public SQEXSEADMovieRenderPipeline(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "MovieRenderPipelineCore",
            "SQEXSEAD",
        });
    }
}
