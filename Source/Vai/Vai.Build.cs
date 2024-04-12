using UnrealBuildTool;

public class Vai : ModuleRules
{
	public Vai(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "EnhancedInput", "GameLiftServerSDK", "MoviePlayer", "UMG"});

		if (Target.Type == TargetRules.TargetType.Server)
		{
			PublicDependencyModuleNames.AddRange(new string[] { "GameLiftServerSDK" });
			PublicDefinitions.Add("WITH_GAMELIFT=1");
		} else
		{
			PublicDefinitions.Add("WITH_GAMELIFT=0");
		}
	}
}
