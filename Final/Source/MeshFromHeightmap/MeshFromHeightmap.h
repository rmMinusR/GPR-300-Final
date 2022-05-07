#pragma once

#include "Engine.h"

class MeshFromHeightmapModule : public IModuleInterface
{
	virtual bool IsGameModule() const override { return true; }
	
	virtual void StartupModule() override
	{
		FString ShaderDirectory = FPaths::Combine(FPaths::ProjectDir(), TEXT("Shaders"));
		AddShaderSourceDirectoryMapping("/Shaders", ShaderDirectory);
	}
};
