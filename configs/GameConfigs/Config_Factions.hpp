class ALYSIA_FACTIONS
{
	class WEST
	{
		/*** GLOBAL ***/
		name = "Milice";
		icon = "lyeed_IMG\data\faction\WEST_logo.paa";
		identity_item = "SkylineItems_PlaqueMilitaire";
		launder = 0;
		faction_bank_handle_rank = 9;

		/*** SALARY ***/
		salary = 750;
		salary_tax = 0.05;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 1;
		phone_send_global_message_rank = 4;
		phone_send_to_faction_price = 0;
		
		/*** COMPANIES ***/
		companies_search = 1;
		company_own = 0;

		/*** GEAR MISSION ***/
		mission_vehicle = "Fett_truck_milice";
		mission_items[] =
		{
			{"Weapons",
				{
					"SMG_01_F",
					"RH_fnp45",
					"Skyline_HK_SL8",
					"hlc_rifle_aks74u",
					"hlc_rifle_akm",
					"hlc_rifle_rpk",
					"hlc_rifle_RPK12",
					"RH_g19",
					"Fett_SDAR",
					"RH_Deagle",
					"srifle_EBR_F"
				}
			},
			{"Magazines",
				{
					"30Rnd_45ACP_Mag_SMG_01_Tracer_Red",
					"hlc_30Rnd_545x39_B_AK",
					"RH_15Rnd_45cal_fnp",
					"30Rnd_556x45_Stanag",
					"hlc_30Rnd_762x39_b_ak",
					"hlc_75Rnd_762x39_m_rpk",
					"hlc_45Rnd_545x39_t_rpk",
					"RH_17Rnd_9x19_g17",
					"Fett_20Rnd_556x45_UW_mag",
					"RH_7Rnd_50_AE",
					"20Rnd_762x51_Mag"
				}
			},
			{"Items",
				{
					"SmokeShellWhite",
					"Rangefinder",
					"optic_Aco",
					"optic_Hamr",
					"hlc_optic_kobra",
					"optic_DMS",
					"optic_LRPS",
					"optic_Holosight",
					"TRYK_HRPIGEAR_NV",
					"Skyline_NVGoogle"
				}
			},
			{"Backpacks",
				{

				}
			},
			{"Virtual",
				{
					"destroy_archeo",
					"destroy_stand",
					"destroy_field"
				}
			}
		};
		mission_start[] =
		{
			{{17742.5,12402.9,0.00144196}, 265.788},
			{{10818.1,12604.2,0.00143814}, 289.467},
			{{8186.99,17044.1,0.00143814}, 20.2156}
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
		house_tax_per_house_per_salary = 0;
		house_tax_percentage_buyPrice_per_house = 0;

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
		identity_item = "SkylineItems_PlaqueMilitaire";
		launder = 0;
		faction_bank_handle_rank = 5;

		/*** SALARY ***/
		salary = 750;
		salary_tax = 0.05;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 1;
		phone_send_global_message_rank = 3;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		companies_search = 1;
		company_own = 0;

		/*** GEAR MISSION ***/
		mission_vehicle = "Fett_truck_army";
		mission_items[] =
		{
			{"Weapons",
				{
					"hlc_rifle_M14_Bipod",
					"Trixie_Enfield_Rail",
					"hlc_rifle_aughbar_B",
					"hlc_rifle_auga2_b",
					"Fett_SDAR",
					"wc_gr_smg_mp40"
				}
			},
			{"Magazines",
				{
					"Trixie_Enfield_Mag",
					"hlc_30Rnd_556x45_B_AUG",
					"Fett_20Rnd_556x45_UW_mag",
					"wc_32Rnd_9x19_mag"
				}
			},
			{"Items",
				{
					"DemoCharge_Remote_Mag",
					"optic_DMS",
					"SmokeShellWhite",
					"Rangefinder",
					"optic_ACO_grn_smg",
					"Skyline_NVGoogle"
				}
			},
			{"Backpacks",
				{

				}
			},
			{"Virtual",
				{
					"destroy_archeo",
					"destroy_stand",
					"destroy_field"
				}
			}
		};
		mission_start[] =
		{
			{{6354.66,7456.13,0.00125122}, 39.8453},
			{{10400.8,5252.98,0.00162888}, 0.137371},
			{{13366.3,6887.15,0.00107718}, 264.853}
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
		house_tax_per_house_per_salary = 0;
		house_tax_percentage_buyPrice_per_house = 0;

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
		identity_item = "SkylineItems_Passeport";
		launder = 1;
		faction_bank_handle_rank = 1;

		/*** SALARY ***/
		salary = 700;
		salary_tax = 0.05;
		salary_apply_rank = 0;
		salary_timer = 15;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 0;
		phone_send_global_message_rank = 0;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		companies_search = 0;
		company_own = 1;

		/*** GEAR MISSION ***/
		mission_vehicle = "";
		mission_items[] =
		{
			{"Weapons",
				{

				}
			},
			{"Magazines",
				{

				}
			},
			{"Items",
				{

				}
			},
			{"Backpacks",
				{

				}
			},
			{"Virtual",
				{

				}
			}
		};
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
		house_tax_per_house_per_salary = 180;
		house_tax_percentage_buyPrice_per_house = 0.003;

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
		identity_item = "Badge_samu";
		launder = 0;
		faction_bank_handle_rank = 6;

		/*** SALARY ***/
		salary = 600;
		salary_tax = 0.05;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 0;
		phone_send_global_message_rank = 1;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		companies_search = 0;
		company_own = 0;

		/*** GEAR MISSION ***/
		mission_vehicle = "";
		mission_items[] = 
		{
			{"Weapons",
				{

				}
			},
			{"Magazines",
				{

				}
			},
			{"Items",
				{

				}
			},
			{"Backpacks",
				{

				}
			},
			{"Virtual",
				{

				}
			}
		};
		mission_start[] = {};

		/*** MAP ***/
		faction_markers_on_map = 1;
		faction_markers_color = "ColorPink";
		faction_markers_type = "Mil_dot";
		faction_markers_deaths = 1;

		/*** SIRENE ***/
		sirene_sound = "sirene_guer";
		sirene_sleep = 2;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "guer_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_search = 0;
		house_max = 1;
		house_tax_per_house_per_salary = 180;
		house_tax_percentage_buyPrice_per_house = 0.003;

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
