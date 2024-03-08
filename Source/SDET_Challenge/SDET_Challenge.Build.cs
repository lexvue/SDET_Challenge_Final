// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class SDET_Challenge : ModuleRules
{
	public SDET_Challenge(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
