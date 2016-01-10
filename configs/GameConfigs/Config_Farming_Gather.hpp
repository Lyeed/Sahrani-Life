class ALYSIA_FARMING_GATHER
{
	class wood_1
	{
		receive[] = {{"wood", 3, 0}};
		tool = "Skyline_Hache_01";
		sound = "axe";
	};

	class pillage_1
	{
		receive[] = {{"objvaleur", 2, 1}};
		sound = "mining";
		water = 1;
		water_depth = 5;
	};

	class archeologie_1
	{
		receive[] = {{"artefact", 1, 0}};
		extra[] = {{"artefact_exrare", 1}, {"artefact_rare", 4}, {"artefact_common", 12}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		extra_all = 1;
	};

	class iron_1
	{
		receive[] = {{"iron", 4, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	class sand_1
	{
		receive[] = {{"sand", 4, 1}};
		tool = "Skyline_Pelle_01";
		sound = "shovel";
	};

	class oil_1
	{
		receive[] = {{"oilu", 1, 0}};
		tool = "Skyline_Pioche_01";
		sound = "oil";
	};

	class prunes_1
	{
		receive[] = {{"prune", 7, 1}};
		tool = "";
		sound = "gather1";
	};
	class prunes_2 : prunes_1 {};

	class vignes_1
	{
		receive[] = {{"raisin", 7, 1}};
		tool = "";
		sound = "gather1";
	};

	class plat_1
	{
		receive[] = {{"platine", 1, 0}};
		tool = "Skyline_Merlin_01";
		sound = "mining";
	};

	class gold_1
	{
		receive[] = {{"goldnuggets", 3, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	class clay_1
	{
		receive[] = {{"clay", 6, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	class coal_1
	{
		receive[] = {{"coal", 6, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	class salt_1
	{
		receive[] = {{"salt", 5, 1}};
		tool = "Skyline_Pelle_01";
		sound = "shovel";
	};

	class baux_1
	{
		receive[] = {{"baux", 4, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	class shell_1
	{
		receive[] = {{"moule", 2, 0}};
		extra[] = {{"palourde", 10}, {"saintjacques", 25}, {"bigorneau", 12}, {"crabe", 15}, {"bulot", 8}};
		tool = "";
		sound = "";
		water = 1;
		water_depth = 21;
		extra_all = 1;
	};

	class copper_1
	{
		receive[] = {{"copper", 4, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};
	
	class pierre_1
	{
		receive[] = {{"pierre", 5, 1}};
		tool = "Skyline_Merlin_01";
		sound = "mining";
	};
	
	class prison_farm
	{
		receive[] = {{"pierre", 1, 0}};
		tool = "Skyline_Merlin_01";
		sound = "mining";
	};
	
	class prison_farm_1
	{
		receive[] = {{"pierre", 1, 0}};
		tool = "Skyline_Merlin_01";
		sound = "mining";
	};

	class fish_1
	{
		receive[] = {{"anchois", 2, 0}};
		extra[] = {{"daurade", 10}, {"sardine", 25}, {"merlu", 12}, {"maquereau", 15}, {"bar", 8}};
		tool = "";
		sound = "";
		water = 1;
		water_depth = 21;
		extra_all = 1;
	};
};
