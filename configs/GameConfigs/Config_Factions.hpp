class ALYSIA_FACTIONS
{
	class WEST
	{
		/*** GLOBAL ***/
		name = "Milice";
		icon = "lyeed_IMG\data\faction\WEST_logo.paa";
		identity_item = "SkylineItems_PlaqueMilitaire";

		/*** LABORATORIES ***/
		laboratory_destroy = 1;

		/*** SALARY ***/
		salary = 500;
		salary_tax = 0.05;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** PHONE ***/
		phone_change_number_price = -1;
		phone_send_global_message = 1;
		phone_send_global_message_rank = 7;
		phone_send_to_faction_price = 0;
		
		/*** COMPANIES ***/
		class companies
		{
			search = 1;
			owner = 0;
			employee = 0;
		};

		class auction_house
		{
			can_buy = 1;
			can_sell = 0;
			can_search = 1;
		};

		class launder_transfer
		{
			rank = 9;
		};
		class bank_faction: launder_transfer {};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle = "Fett_truck_milice";
			positions[] =
			{
				{{17742.5,12402.9,0.00144196}, 265.788},
				{{10818.1,12604.2,0.00143814}, 289.467},
				{{8186.99,17044.1,0.00143814}, 20.2156}
			};
			items[] =
			{
				{"Weapons",
					{
						"SMG_01_F",
						"RH_fnp45",
						"Skyline_HK_SL8",
						"hlc_rifle_aks74u",
						"hlc_rifle_akm",
						"hlc_rifle_rpk",
						"hlc_rifle_rpk74n",
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
						"20Rnd_762x51_Mag",
						"Bank_DefuseKit"
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
						"destroy_field",
						"destroy_labo"
					}
				}
			};
		};

		/*** MAP ***/
		class map_team_markers
		{
			color = "ColorWEST";
			type = "Mil_dot";
			shape = "ICON";
		};

		/* Licenses */
		class licenses_give
		{
			class pilot
			{
				rank = 9;
				same_side_only = 1;
			};
		};

		/*** SIRENE ***/
		sirene_sound = "sirene_west";
		sirene_sleep = 5;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "west_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_search = 1;
		house_max = 2;
		house_tax_per_house_per_salary = 0;
		house_tax_percentage_buyPrice_per_house = 0;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 0;

		/*** SKULL ***/
		skull_who = 0;// can check skull owner's identity
		skull_take = 0;// can pack-up skull

		/*** INTERACTIONS ***/
		interaction_seize_gear = 1;// can size near gear

		/*** LEADER BOARD ***/
		class board
		{
			history_items[] =
			{
				"hlc_rifle_ak74_dirty2",
				"hlc_rifle_ak74_dirty",
				"hlc_rifle_ak74",
				"RH_g17",
				"RH_m9"
			};
			class leader_board
			{
				access_rank = 8;
			};
		};

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

		/*** SALARY ***/
		salary = 900;
		salary_tax = 0;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** LABORATORIES ***/
		laboratory_destroy = 1;

		/*** PHONE ***/
		phone_change_number_price = 5000;
		phone_send_global_message = 1;
		phone_send_global_message_rank = 4;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		class companies
		{
			search = 1;
			owner = 0;
			employee = 0;
		};

		class auction_house
		{
			can_buy = 0;
			can_sell = 0;
			can_search = 1;
		};

		class launder_transfer
		{
			rank = 1;
		};
		class bank_faction
		{
			rank = 5;
		};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle = "Fett_truck_army";
			positions[] =
			{
				{{6354.66,7456.13,0.00125122}, 39.8453},
				{{10400.8,5252.98,0.00162888}, 0.137371},
				{{13366.3,6887.15,0.00107718}, 264.853}
			};
			items[] =
			{
				{"Weapons",
					{
						"hlc_rifle_M14_Bipod",
						"hlc_rifle_M14_Bipod",
						"hlc_rifle_m14dmr",
						"hlc_rifle_m14sopmod",
						"Trixie_Enfield_Rail",
						"hlc_rifle_aughbar_B",
						"Fett_SDAR",
						"hlc_rifle_M14"
					}
				},
				{"Magazines",
					{
						"Trixie_Enfield_Mag",
						"Fett_20Rnd_556x45_UW_mag",
						"hlc_20Rnd_762x51_B_M14",
						"Bank_DefuseKit"
					}
				},
				{"Items",
					{
						"DemoCharge_Remote_Mag",
						"optic_DMS",
						"SmokeShellWhite",
						"Rangefinder",
						"optic_ACO_grn_smg",
						"Skyline_NVGoogle",
						"optic_MRCO"
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
						"destroy_field",
						"destroy_labo"
					}
				}
			};
		};

		/* Licenses */
		class licenses_give
		{
			class pilot
			{
				rank = 4;
				same_side_only = 1;
			};
		};

		/*** MAP ***/
		class map_team_markers
		{
			color = "ColorEAST";
			type = "Mil_dot";
			shape = "ICON";
		};

		/*** SIRENE ***/
		sirene_sound = "sirene_east";
		sirene_sleep = 3;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "east_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_search = 1;
		house_max = 2;
		house_tax_per_house_per_salary = 0;
		house_tax_percentage_buyPrice_per_house = 0;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 0;

		/*** SKULL ***/
		skull_who = 0;
		skull_take = 1;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 1;

		/*** LEADER BOARD ***/
		class board
		{
			history_items[] =
			{
				"RH_fn57",
				"RH_m1911",
				"hlc_rifle_auga3_b"
			};
			class leader_board
			{
				access_rank = 4;
			};
		};

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

		/*** SALARY ***/
		salary = 600;
		salary_tax = 0.05;
		salary_apply_rank = 0;
		salary_timer = 15;

		/*** LABORATORIES ***/
		laboratory_destroy = 0;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 0;
		phone_send_global_message_rank = 0;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		class companies
		{
			search = 0;
			owner = 1;
			employee = 1;
		};

		class auction_house
		{
			can_buy = 1;
			can_sell = 1;
			can_search = 0;
		};

		class launder {};
		class bank_faction
		{
			rank = 1;
		};

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "civ_spawn";
		respawn_price = 800;

		/*** HOUSING ***/
		house_search = 0;
		house_max = 2;
		house_tax_per_house_per_salary = 180;
		house_tax_percentage_buyPrice_per_house = 0.003;

		/*** HEAL ***/
		price_heal_hopital = 120;
		can_use_debrif = 0;

		/*** SKULL ***/
		skull_who = 0;
		skull_take = 0;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 0;

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "Skyline_Uniforme_Alysia_01_F";
			headgear = "";
			vest = "";
			backpack = "";
			items[] =
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch"
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
		identity_item = "SkylineItems_Passeport";

		/*** SALARY ***/
		salary = 50;
		salary_tax = 0;
		salary_apply_rank = 1;
		salary_timer = 15;

		/*** LABORATORIES ***/
		laboratory_destroy = 0;

		/*** PHONE ***/
		phone_change_number_price = 1000;
		phone_send_global_message = 1;
		phone_send_global_message_rank = 5;
		phone_send_to_faction_price = 0;

		/*** COMPANIES ***/
		class companies
		{
			search = 0;
			owner = 0;
			employee = 0;
		};

		class auction_house
		{
			can_buy = 1;
			can_sell = 0;
			can_search = 0;
		};
		
		class bank_faction
		{
			rank = 6;
		};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle = "Fett_zamak_repair_samu";
			items[] = 
			{
				{"Weapons",
					{

					}
				},
				{"Magazines",
					{
						"SkylineItems_Adrenaline",
						"SkylineItems_Morphine"
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
			positions[] = {};
		};

		/*** MAP ***/
		class map_coma_markers {};
		class map_team_markers
		{
			color = "ColorPink";
			type = "Mil_dot";
			shape = "ICON";
		};

		/*** SIRENE ***/
		sirene_sound = "sirene_guer";
		sirene_sleep = 2;

		/*** SPAWN/RESPAWN ***/
		respawn_marker = "guer_spawn";
		respawn_price = 0;

		/*** HOUSING ***/
		house_search = 0;
		house_max = 2;
		house_tax_per_house_per_salary = 0;
		house_tax_percentage_buyPrice_per_house = 0.003;

		/*** HEAL ***/
		price_heal_hopital = 0;
		can_use_debrif = 1;

		/*** SKULL ***/
		skull_who = 1;
		skull_take = 1;

		/*** INTERACTIONS ***/
		interaction_seize_gear = 0;

		/* Licenses */
		class licenses_give
		{
			class pilot
			{
				rank = 6;
				same_side_only = 1;
			};
		};

		/*** LEADER BOARD ***/
		class board
		{
			history_items[] = {};
			class leader_board
			{
				access_rank = 5;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform = "rds_uniform_assistant";
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
