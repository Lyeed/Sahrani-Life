class ALYSIA_FACTIONS
{
	class WEST
	{
		/*** GLOBAL ***/
		name = "Milice";
		icon = "lyeed_IMG\data\faction\WEST_logo.paa";
		paycheck = 750;
		identity_item = "SkylineItems_PlaqueMilitaire";
		launder = 0;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 1;

		/*** GEAR MISSION ***/
		mission_vehicle = "Fett_truck_milice";
		mission_items[] =
		{

		};
		mission_start[] =
		{
			{17736.2,12417.5,0.00143433},
			{10811.7,12593.7,0.00143814},
			{8136.29,16978.4,0.00143814}
		};

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
		house_search = 1;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 0;

		/*** FARM ***/
		farming_markers_plant[] = {};
		farming_markers_gather[] = {};

		/*** SKULL ***/
		skull_who = 0;// can check skull owner's identity
		skull_take = 0;// can pack-up skull

		/*** INTERACTIONS ***/
		interaction_seize_gear = 1;// can size near gear
		interaction_ticket = 1;// can put ticket

		/*** LEADER BOARD ***/
		leader_rank = 9;
		leader_board_rank_require = 9;
		leader_bord_history[] = {};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "tenue_de_milice_cadet";
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
		icon = "lyeed_IMG\data\faction\EAST_logo.paa";
		paycheck = 750;
		identity_item = "SkylineItems_PlaqueMilitaire";
		launder = 0;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 1;

		/*** GEAR MISSION ***/
		mission_vehicle = "Fett_truck_army";
		mission_items[] =
		{

		};
		mission_start[] =
		{

		};

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
		house_search = 1;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 0;

		/*** FARM ***/
		farming_markers[] = {};
		farming_markers_plant[] = {};

		/*** SKULL ***/
		skull_who = 0;
		skull_take = 0;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 1;
		interaction_ticket = 1;

		/*** LEADER BOARD ***/
		leader_rank = 5;
		leader_board_rank_require = 5;
		leader_bord_history[] = {};
		
		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "tenue_de_garde_basique";
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
		icon = "lyeed_IMG\data\faction\CIV_logo.paa";
		paycheck = 600;
		identity_item = "SkylineItems_Passeport";
		launder = 1;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 0;

		/*** GEAR MISSION ***/
		mission_vehicle = "";
		mission_items[] = {};
		mission_start[] = {};

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
		house_search = 0;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 500;
		can_use_debrif = 0;

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
			"clay_1",
			"pierre_1",
			"prison_farm",
			"prison_farm_1"
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
			"tabac_3",
			"potato_1"
		};

		/*** SKULL ***/
		skull_who = 0;
		skull_take = 0;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 0;
		interaction_ticket = 0;

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
			ranks_complet[] =
			{
				"Civil",
				"Parlementaire"
			};
			ranks_short[] =
			{
				"Civ",
				"Parlm"
			};
		};
	};

	class GUER
	{
		/*** GLOBAL ***/
		name = "SAMU";
		icon = "lyeed_IMG\data\faction\GUER_logo.paa";
		paycheck = 600;
		identity_item = "Badge_samu";
		launder = 0;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 0;

		/*** GEAR MISSION ***/
		mission_vehicle = "";
		mission_items[] = {};
		mission_start[] = {};

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
		house_search = 0;
		house_max = 1;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 1;

		/*** FARM ***/
		farming_markers_gather[] = {};
		farming_markers_plant[] = {};

		/*** SKULL ***/
		skull_who = 1;
		skull_take = 1;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 0;
		interaction_ticket = 1;// can put ticket

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
