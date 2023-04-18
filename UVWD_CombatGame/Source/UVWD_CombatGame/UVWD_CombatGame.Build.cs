// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class UVWD_CombatGame : ModuleRules
{
	public UVWD_CombatGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore", "HeadMountedDisplay", "EnhancedInput" });
	}
}
