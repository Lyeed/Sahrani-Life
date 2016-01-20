class CfgDebriefing // Define custom mission endings or override the default endings (found under cfgDebriefing in the game's config file).
{
	class Teamspeak
	{
		title = "Teamspeak";
		description = "Vous devez être connecté au Teamspeak pour pouvoir jouer";
		pictureColor[] = {0, 0.3, 0.6, 1};
	};

	class Faction
	{
		title = "Faction";
		description = "Vous n'êtes pas autorisé à changer de faction";
		pictureColor[] = {0, 0.3, 0.6, 1};
	};

	class Bye
	{
		title = "Alysia";
		description = "A bientôt !";
		pictureColor[] = {0, 0.3, 0.6, 1};
	};

	class Whitelist
	{
		title = "Whiteliste";
		description = "Vous n'êtes pas whitelisté";
		pictureColor[] = {0, 0.3, 0.6, 1};
	};
};
