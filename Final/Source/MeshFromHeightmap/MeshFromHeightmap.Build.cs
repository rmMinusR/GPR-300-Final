using UnrealBuildTool;

public class MeshFromHeightmap : ModuleRules
{
	public MeshFromHeightmap(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}	
}