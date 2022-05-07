#pragma once

#include "Engine.h"
#include "CoreMinimal.h"
#include "ShaderParameterStruct.h"

class FMeshFromHeightmapCS : public FGlobalShader
{
	DECLARE_GLOBAL_SHADER(FMeshFromHeightmapCS);
	SHADER_USE_PARAMETER_STRUCT(FMeshFromHeightmapCS, FGlobalShader);

	BEGIN_GLOBAL_SHADER_PARAMETER_STRUCT(FParameters, )
		SHADER_PARAMETER_RDG_BUFFER_UAV(RWStructuredBuffer<FVector>, Vertices)
		SHADER_PARAMETER_TEXTURE(Texture2D, Heightmap)
		//SHADER_PARAMETER(float2, XZ_scale)
		SHADER_PARAMETER(float, Y_scale)
	END_GLOBAL_SHADER_PARAMETER_STRUCT()
};

IMPLEMENT_GLOBAL_SHADER(FMeshFromHeightmapCS, "/Shaders/MeshFromHeightmapCS.usf", "MainCS", SF_Compute);
