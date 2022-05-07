using System.Collections.Generic;
using UnrealBuildTool;

public class MeshFromHeightmap : ModuleRules
{
	public MeshFromHeightmap(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;
		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "RenderCore", "Renderer", "RHI" });
		PublicIncludePathModuleNames.Add("MeshFromHeightmap");
	}

	/*
	public override void SetupBinaries(TargetInfo Target,
		ref List<UEBuildBinaryConfiguration> OutBuildBinaryConfiguration,
		ref List<string> OutExtraModuleNames)
	{
		
	}
	// */
}