class CfgNotifications
{
	/*
	class Default
	{
		title = ""; // Tile displayed as text on black background. Filled by arguments.
		iconPicture = ""; // Small icon displayed in left part. Colored by "color", filled by arguments.
		iconText = ""; // Short text displayed over the icon. Colored by "color", filled by arguments.
		description = ""; // Brief description displayed as structured text. Colored by "color", filled by arguments.
		color[] = {1,1,1,1}; // Icon and text color
		duration = 5; // How many seconds will the notification be displayed
		priority = 0; // Priority; higher number = more important; tasks in queue are selected by priority
		difficulty[] = {}; // Required difficulty settings. All listed difficulties has to be enabled
	};
	*/

	class Hunger
	{
		title = "Santé : faim";
		iconPicture = "\lyeed_IMG\data\player_hud\food.paa";
		description = "%1";
		priority = 5;
		duration = 5;
	};

	class Thirst
	{
		title = "Santé : soif";
		iconPicture = "\lyeed_IMG\data\player_hud\drink.paa";
		description = "%1";
		priority = 5;
		duration = 5;
	};
};
