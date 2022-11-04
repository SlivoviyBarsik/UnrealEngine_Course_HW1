// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_Course_HW1 : ModuleRules
{
	public UE_Course_HW1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
