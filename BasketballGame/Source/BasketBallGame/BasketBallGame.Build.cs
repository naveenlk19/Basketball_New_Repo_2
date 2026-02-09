// Copyright Epic Games, Inc. All Rights Reserved.

using UnrealBuildTool;

public class BasketBallGame : ModuleRules
{
	public BasketBallGame(ReadOnlyTargetRules Target) : base(Target)
	{
		PCHUsage = PCHUsageMode.UseExplicitOrSharedPCHs;

		PublicDependencyModuleNames.AddRange(new string[] {
			"Core",
			"CoreUObject",
			"Engine",
			"InputCore",
			"EnhancedInput",
			"AIModule",
			"StateTreeModule",
			"GameplayStateTreeModule",
			"UMG",
			"Slate"
		});

		PrivateDependencyModuleNames.AddRange(new string[] { });

		PublicIncludePaths.AddRange(new string[] {
			"BasketBallGame",
			"BasketBallGame/Variant_Platforming",
			"BasketBallGame/Variant_Platforming/Animation",
			"BasketBallGame/Variant_Combat",
			"BasketBallGame/Variant_Combat/AI",
			"BasketBallGame/Variant_Combat/Animation",
			"BasketBallGame/Variant_Combat/Gameplay",
			"BasketBallGame/Variant_Combat/Interfaces",
			"BasketBallGame/Variant_Combat/UI",
			"BasketBallGame/Variant_SideScrolling",
			"BasketBallGame/Variant_SideScrolling/AI",
			"BasketBallGame/Variant_SideScrolling/Gameplay",
			"BasketBallGame/Variant_SideScrolling/Interfaces",
			"BasketBallGame/Variant_SideScrolling/UI"
		});

		// Uncomment if you are using Slate UI
		// PrivateDependencyModuleNames.AddRange(new string[] { "Slate", "SlateCore" });

		// Uncomment if you are using online features
		// PrivateDependencyModuleNames.Add("OnlineSubsystem");

		// To include OnlineSubsystemSteam, add it to the plugins section in your uproject file with the Enabled attribute set to true
	}
}
