/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_FARMING_GATHER
{

	class wood_1
	{
		receive[] = {{"wood", 1, 0}};
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
		extra[] = {{"artefact_exrare", 1}, {"artefact_rare", 4}, {"artefact_common", 1}};
		tool = "Skyline_Pioche_01";
		sound = "mining";
	};

	/*
	class iron_1
	{
		receive = "iron";
		amount = 2;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class sand_1
	{
		receive = "sand";
		amount = 5;
		required = "Skyline_Pelle_01";
		sound = "shovel";
	};

	class oil_1
	{
		receive = "oilu";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "oil";
	};

	class archeologie_1
	{
		receive = "artefact";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class prunes_1
	{
		receive = "prune";
		amount = 3;
		required = "";
		sound = "gather1";
	};
	class prunes_2 : prunes_1 {};

	class vignes_1
	{
		receive = "raisin";
		amount = 2;
		required = "";
		sound = "gather1";
	};

	class pillage_1
	{
		receive = "objvaleur";
		amount = 2;
		required = "";
		sound = "mining";
	};
	class pillage_2 : pillage_1 {};

	class plat_1
	{
		receive = "platine";
		amount = 1;
		required = "Skyline_Merlin_01";
		sound = "mining";
	};

	class gold_1
	{
		receive = "gold";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class clay_1
	{
		receive = "clay";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class coal_1
	{
		receive = "coal";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class salt_1
	{
		receive = "salt";
		amount = 1;
		required = "Skyline_Pelle_01";
		sound = "shovel";
	};

	class baux_1
	{
		receive = "baux";
		amount = 1;
		required = "Skyline_Pioche_01";
		sound = "mining";
	};

	class shell_1
	{
		receive = "";
		amount = 1;
		required = "";
		sound = "";
	};

	class fish_1
	{
		receive = "";
		amount = 1;
		required = "";
		sound = "";
	};*/
};