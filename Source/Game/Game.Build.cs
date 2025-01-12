using UnrealBuildTool;
using System.IO;
public class Game : ModuleRules {
    public Game(ReadOnlyTargetRules Target) : base(Target) {
        PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
        bLegacyPublicIncludePaths = false;
        ShadowVariableWarningLevel = WarningLevel.Warning;
        
        PublicDependencyModuleNames.AddRange(new string[] {
              "Core", "CoreUObject", "Engine", "InputCore", "GameplayTasks", "ControlRig", "UMG", "RS2re"
        });
        PrivateDependencyModuleNames.AddRange(new string[] { "Projects", "Launch" });


    }
}
