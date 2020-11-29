// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class Lab3_Gasinec_David : ModuleRules
{
	public Lab3_Gasinec_David(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] { "Core", "CoreUObject", "Engine", "InputCore" });
	}
}
