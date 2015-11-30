class ALYSIA_FACTIONS
{
	class WEST
	{
		/*** GLOBAL ***/
		name = "Milice";
		icon = "\lyeed_IMG\data\faction\WEST_logo.paa";
		paycheck = 750;
		identity_item = "SkylineItems_PlaqueMilitaire";

		/*** MAP ***/
		faction_markers_on_map = 1;
		faction_markers_color = "ColorBlue";
		faction_markers_type = "Mil_dot";
		faction_markers_deaths = 0;

		/*** SIRENE ***/
		sirene_sound = "sirene_west";
		sirene_sleep = 5;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "west_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_can_search = 1;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;

		/*** FARM ***/
		farming_markers_plant[] = {};
		farming_markers_gather[] = {};

		/*** DYNAMIC MARKERS ***/
		dynamic_markers_shown    = 0;
		dynamic_markers_destroy  = 1;
		dynamic_markers_discover = 0;
		
		/*** INTERACTIONS ***/
		skull_who = 0;// can check skull owner's identity
		skull_take = 0;// can pack-up skull
		can_seize_gear = 1;// can size near gear

		/*** LEADER BOARD ***/
		leader_rank = 9;
		leader_board_rank_require = 9;
		leader_bord_history[] = {};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "Skyline_Army_Uniform";
			headgear = "";
			vest = "";
			backpack = "";
			items[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemGPS",
				"tf_anprc152"
			};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[] =
			{
				"Civil",
				"Cadet",
				"Milicien",
				"Caporal",
				"Sergent",
				"Adjudant",
				"Major",
				"Lieutenant",
				"Capitaine",
				"Commandant"
			};

			ranks_short[] =
			{
				"Civ",
				"Cdt",
				"Mil",
				"Cap",
				"Sgt",
				"Adj",
				"Maj",
				"Ltn",
				"Cne",
				"Cdt"
			};
		};
	};

	class EAST
	{
		/*** GLOBAL ***/
		name = "Garde";
		icon = "\lyeed_IMG\data\faction\EAST_logo.paa";
		paycheck = 750;
		identity_item = "SkylineItems_PlaqueMilitaire";

		/*** MAP ***/
		faction_markers_on_map = 1;
		faction_markers_color = "ColorWhite";
		faction_markers_type = "Mil_dot";
		faction_markers_deaths = 0;

		/*** SIRENE ***/
		sirene_sound = "sirene_east";
		sirene_sleep = 3;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "east_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_can_search = 1;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;

		/*** FARM ***/
		farming_markers[] = {};
		farming_markers_plant[] = {};

		/*** DYNAMIC MARKERS ***/
		dynamic_markers_shown    = 0;
		dynamic_markers_destroy  = 1;
		dynamic_markers_discover = 0;

		/*** INTERACTIONS ***/
		skull_who = 0;
		skull_take = 0;
		can_seize_gear = 1;

		/*** LEADER BOARD ***/
		leader_rank = 5;
		leader_board_rank_require = 5;
		leader_bord_history[] = {};
		
		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "U_mas_afr_B_uniform_s";
			headgear = "";
			vest = "";
			backpack = "";
			items[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemGPS",
				"tf_anprc152"
			};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[] =
			{
				"Civil",
				"Garde",
				"Caporal",
				"Sergent",
				"Lieutenant",
				"Commandant"
			};

			ranks_short[] =
			{
				"Civ",
				"Gar",
				"Cap",
				"Sgt",
				"Ltn",
				"Cdt"
			};
		};
	};

	class CIV
	{
		/*** GLOBAL ***/
		name = "Civil";
		icon = "\lyeed_IMG\data\faction\CIV_logo.paa";
		paycheck = 600;
		identity_item = "SkylineItems_Passeport";
		
		/*** MAP ***/
		faction_markers_on_map = 0;
		faction_markers_color = "";
		faction_markers_type = "";
		faction_markers_deaths = 0;

		/*** SIRENE ***/
		sirene_sound = "";
		sirene_sleep = 0;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "civ_spawn";
		respawn_price = 10000;

		/*** HOUSING ***/
		house_can_search = 0;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 500;

		/*** FARM ***/
		farming_markers_gather[] = 
		{
			"iron_1",
			"sand_1",
			"wood_1",
			"oil_1",
			"archeologie_1",
			"prunes_1",
			"prunes_2",
			"vignes_1",
			"pillage_1",
			"pillage_2",
			"plat_1",
			"coal_1",
			"gold_1",
			"salt_1",
			"baux_1",
			"copper_1",
			"shell_1",
			"fish_1",
			"clay_1"
		};
		farming_markers_plant[] = 
		{
			"corn_1",
			"bean_1",
			"cotton_1",
			"wheat_1",
			"heroin_1",
			"cannabis_1",
			"meth_1",
			"cocaine_1",
			"tabac_1",
			"tabac_2", 
			"tabac_3"
		};

		/*** DYNAMIC MARKERS ***/
		dynamic_markers_shown     = 0;
		dynamic_markers_destroy   = 0;
		dynamic_markers_discover  = 1;

		/*** INTERACTIONS ***/
		skull_who = 0;
		skull_take = 0;
		can_seize_gear = 0;

		/*** LEADER BOARD ***/
		leader_rank = -1;// MUST BE -1
		leader_board_rank_require = -1;// MUST BE -1
		leader_bord_history[] = {};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "U_C_Alysia_01";
			headgear = "";
			vest = "";
			backpack = "";
			items[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"tf_anprc152"
			};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[] = {"Civil"};
			ranks_short[] = {"Civ"};
		};
	};

	class GUER
	{
		/*** GLOBAL ***/
		name = "SAMU";
		icon = "\lyeed_IMG\data\faction\GUER_logo.paa";
		paycheck = 600;
		identity_item = "Badge_samu";

		/*** MAP ***/
		faction_markers_on_map = 1;
		faction_markers_color = "ColorPink";
		faction_markers_type = "Mil_dot";
		faction_markers_deaths = 1;

		/*** SIRENE ***/
		sirene_sound = "sirene_guer";
		sirene_sleep = 3;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "guer_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_can_search = 0;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;

		/*** FARM ***/
		farming_markers_gather[] = {};
		farming_markers_plant[] = {};

		/*** DYNAMIC MARKERS ***/
		dynamic_markers_shown     = 0;
		dynamic_markers_destroy   = 0;
		dynamic_markers_discover  = 0;

		/*** INTERACTIONS ***/
		skull_who = 1;
		skull_take = 1;
		can_seize_gear = 0;

		/*** LEADER BOARD ***/
		leader_rank = 6;
		leader_board_rank_require = 6;
		leader_bord_history[] = {};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "max_paramedic_uniform";
			headgear = "";
			vest = "";
			backpack = "";
			items[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch",
				"ItemGPS",
				"Badge_samu",
				"tf_anprc152"
			};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[] =
			{
				"Civil",
				"Stagiaire",
				"Infirmier",
				"Médecin Externe",
				"Médecin Interne",
				"Médecin Titulaire",
				"Médecin Chef"
			};

			ranks_short[] =
			{
				"Civ",
				"Stg",
				"Inf",
				"Ext",
				"Int",
				"Tit",
				"Chef"
			};
		};
	};
};
