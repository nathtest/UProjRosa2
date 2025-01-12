using UnrealBuildTool;

public class GameEditorTarget : TargetRules {
	public GameEditorTarget(TargetInfo Target) : base(Target) {
		Type = TargetType.Editor;
		DefaultBuildSettings = BuildSettingsVersion.V2;
		ExtraModuleNames.AddRange(new string[] {
                                                   "RS2re",
			"Game"
		});
		bUseChaos = true;
		bCompileChaos = true;
	}
}
