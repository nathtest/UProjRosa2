using UnrealBuildTool;

public class SQEXSEADAnimNotifies : ModuleRules {
    public SQEXSEADAnimNotifies(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
            "Core",
            "CoreUObject",
            "Engine",
            "SQEXSEAD",
        });
    }
}
