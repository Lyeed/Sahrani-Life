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
		receive = "wood";
		amount = 1;
		required = "Skyline_Hache_01";
		sound = "axe";
	};
	class wood_2 : wood_1 {};

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
	class archeologie_2 : archeologie_1 {};

	class banane_1
	{
		receive = "banane";
		amount = 2;
		required = "";
		sound = "gather1";
	};
	class banane_2 : banane_1 {};
	class banane_3 : banane_1 {};

	class mangue_1
	{
		receive = "mangue";
		amount = 2;
		required = "";
		sound = "gather1";
	};
	class mangue_2 : mangue_1 {};
	class mangue_3 : mangue_1 {};

	class pillage_1
	{
		receive = "objvaleur";
		amount = 2;
		required = "";
		sound = "mining";
	};
	class pillage_2 : pillage_1 {};

	class platine_1
	{
		receive = "platine";
		amount = 1;
		required = "Skyline_Merlin_01";
		sound = "mining";
	};
};