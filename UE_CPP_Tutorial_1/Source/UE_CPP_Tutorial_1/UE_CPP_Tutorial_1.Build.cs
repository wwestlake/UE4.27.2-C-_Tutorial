// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UE_CPP_Tutorial_1 : ModuleRules
{
	public UE_CPP_Tutorial_1(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay" });
	}
}
