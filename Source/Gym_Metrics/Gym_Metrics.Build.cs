// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Gym_Metrics : ModuleRules
{
	public Gym_Metrics(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
