/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_PROCESS {
	class wood {
		name = "Coupe du bois";
		license = "license_civ_wood";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["wood", 1]};
		receive[] = {["woodp", 1]};
		process_item_time = 2;
		process_default_time = 4;
	};

	class oil {
		name = "Traitement du pétrole";
		license = "license_civ_oil";
		sound = "processoil";
		requiere_target = 1;
		require[] = {["oilu", 1]};
		receive[] = {["oilp", 1]};
		process_item_time = 3;
		process_default_time = 8;
	};

	class sand {
		name = "Fonte du verre";
		license = "license_civ_sand";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {["sand", 1]};
		receive[] = {["glass", 1]};
		process_item_time = 1;
		process_default_time = 3;
	};

	class seringue {
		name = "Fonte du verre en seringues";
		license = "license_civ_sand";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["glass", 1]};
		receive[] = {["seringue", 2]};
		process_item_time = 3;
		process_default_time = 5;
	};

	class iron {
		name = "Fonte du fer";
		license = "license_civ_iron";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["iron", 1]};
		receive[] = {["ironp", 1], ["soufre", 1]};
		process_item_time = 2;
		process_default_time = 4;
	};

	class platine1 {
		name = "Fonte du platine";
		license = "license_civ_platine";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["platine", 1]};
		receive[] = {["platinep", 1]};
		process_item_time = 2;
		process_default_time = 4;
	};

	class platine2 {
		name = "Enrichissement du platine";
		license = "license_civ_platine";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["platinep", 1], ["soufre", 1]};
		receive[] = {["platinepa", 1]};
		process_item_time = 3;
		process_default_time = 5;
	};

	class marijuana {
		name = "Traitement du cannabis";
		license = "license_civ_marijuana";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["cannabis", 1]};
		receive[] = {["marijuana", 1]};
		process_item_time = 3;
		process_default_time = 5;
	};

	class heroin {
		name = "Traitement de l'héroine";
		license = "";
		sound = "processoil";
		requiere_target = 1;
		require[] = {["heroin", 1]};
		receive[] = {["heroinp", 1]};
		process_item_time = 4;
		process_default_time = 8;
	};

	class seringueheroin {
		name = "Traitement des seringues d'héroine";
		license = "";
		sound = "processoil";
		requiere_target = 1;
		require[] = {["heroinp", 1], ["seringue", 1]};
		receive[] = {["heroinps", 1]};
		process_item_time = 2;
		process_default_time = 4;
	};
	
	class cocaine {
		name = "Traitement de la cocaine";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {["cocaine", 1]};
		receive[] = {["cocainep", 1]};
		process_item_time = 4;
		process_default_time = 5;
	};

	class cocainec {
		name = "Coupe de la cocaine";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {["cocainep", 1],["glass", 1]};
		receive[] = {["cocainepc", 2]};
		process_item_time = 2;
		process_default_time = 3;
	};

	class meth {
		name = "Traitement de la meth";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {["meth", 1], ["hsoufre", 1]};
		receive[] = {["methp", 1]};
		process_item_time = 5;
		process_default_time = 10;
	};

	class soufre {
		name = "Hydratation du soufre";
		license = "";
		sound = "processoil";
		requiere_target = 0;
		require[] = {["soufre", 1], ["water", 1]};
		receive[] = {["hsoufre", 1]};
		process_item_time = 1;
		process_default_time = 5;
	};

	class archeologue {
		name = "Rénovation";
		license = "license_civ_archeologie";
		sound = "cooking";
		requiere_target = 1;
		require[] = {["artefact", 1]};
		receive[] = {["artefact_R", 1]};
		process_item_time = 3;
		process_default_time = 5;
	};

	class tabac {
		name = "Tubage de cigarettes";
		license = "license_civ_tabac";
		sound = "smelting";
		requiere_target = 1;
		require[] = {["tabac", 1]};
		receive[] = {["cigarette", 1]};
		process_item_time = 4;
		process_default_time = 6;
	};
};
