using UnrealBuildTool;

public class GameTarget : TargetRules {
	public GameTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Game;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
                                                   "RS2re",
			"Game"
		});
		bUseChaos = true;
		bCompileChaos = true;
	}
}
