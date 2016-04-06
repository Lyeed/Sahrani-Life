class ALYSIA_FARMING_OBJECT
{
	class xcam_Kopa_kameni
	{
		receive[] = {{"coal", 2, 1}};
		tool = "Skyline_Pioche_01";
		sounds[] = {"mining_1", "mining_2", "mining_3", "mining_4", "mining_5"};
		times = 3;
	};
	class xcam_Kopa_kameni2: xcam_Kopa_kameni {};
	class xcam_R2_RockTower
	{
		receive[] = {{"iron", 3, 1}};
		tool = "Skyline_Pioche_01";
		sounds[] = {"mining_1", "mining_2", "mining_3", "mining_4", "mining_5"};
		times = 4;
	};
	class xcam_R2_RockWall: xcam_R2_RockTower {};
	class xcam_rockS_02
	{
		receive[] = {{"pierre", 1, 1}};
		tool = "Skyline_Merlin_01";
		sounds[] = {"mining_1", "mining_2", "mining_3", "mining_4", "mining_5"};
		times = 1;
	};
	class xcam_Kamen1_piskovec2
	{
		receive[] = {{"platine", 1, 0}};
		tool = "Skyline_Merlin_01";
		sounds[] = {"mining_1", "mining_2", "mining_3", "mining_4", "mining_5"};
		times = 4;
	};
};

class ALYSIA_FARMING_GATHER
{
	// sounds = oil / mining / shovel / gather1 / gather2
	class wood_1
	{
		receive[] = {{"wood", 3, 0}};
		tool = "Skyline_Hache_01";
		sound = "axe";
		sides[] = {"CIV"};
		area = 40;
	};
	class wood_2: wood_1 {};

	class pillage_1
	{
		receive[] = {{"objvaleur", 2, 1}};
		sound = "mining";
		water = 1;
		water_depth = 109;
		sides[] = {"CIV"};
		area = 30;
	};

	class archeologie_1
	{
		receive[] = {{"artefact", 3, 1}};
		extra[] = {{"frag_1", 2}, {"frag_2", 2}, {"frag_3", 2}, {"frag_4", 4}, {"frag_5", 2}, {"frag_6", 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		extra_all = 1;
		sides[] = {"CIV"};
		area = 40;
	};

	class sand_1
	{
		receive[] = {{"sand", 4, 1}};
		tool = "Skyline_Pelle_01";
		sound = "shovel";
		sides[] = {"CIV", "GUER"};
		area = 40;
	};

	class oil_1
	{
		receive[] = {{"oilu", 1, 0}};
		tool = "Skyline_Pioche_01";
		sound = "oil";
		sides[] = {"CIV"};
		area = 40;
	};

	class prunes_1
	{
		receive[] = {{"prune", 3, 1}};
		sound = "gather1";
		sides[] = {"CIV"};
		area = 40;
	};
	class prunes_2: prunes_1 {};

	class vignes_1
	{
		receive[] = {{"raisin", 3, 1}};
		sound = "gather1";
		sides[] = {"CIV"};
		area = 40;
	};

	class gold_1
	{
		receive[] = {{"goldnuggets", 3, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		sides[] = {"CIV"};
		area = 40;
	};

	class clay_1
	{
		receive[] = {{"clay", 5, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		sides[] = {"CIV"};
		area = 40;
	};

	class salt_1
	{
		receive[] = {{"salt", 5, 1}};
		tool = "Skyline_Pelle_01";
		sound = "shovel";
		sides[] = {"CIV"};
		area = 40;
	};

	class baux_1
	{
		receive[] = {{"baux", 4, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		sides[] = {"CIV"};
		area = 40;
	};

	class shell_1
	{
		receive[] = {{"moule", 2, 0}};
		extra[] = {{"palourde", 10}, {"saintjacques", 25}, {"bigorneau", 12}, {"crabe", 15}, {"bulot", 8}};
		water = 1;
		water_depth = 21;
		extra_all = 1;
		sides[] = {"CIV"};
		area = 40;
	};

	class copper_1
	{
		receive[] = {{"copper", 4, 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
		sides[] = {"CIV"};
		area = 40;
	};

	class prison_farm
	{
		receive[] = {{"pierre", 1, 0}};
		tool = "Skyline_Merlin_01";
		sound = "mining";
		sides[] = {"CIV", "GUER", "EAST", "WEST"};
		area = 40;
	};
	class prison_farm_1: prison_farm {};

	class houblon_1
	{
		receive[] = {{"houblon", 3, 1}};
		tool = "";
		sound = "gather2";
		sides[] = {"CIV"};
		area = 40;
	};
};
