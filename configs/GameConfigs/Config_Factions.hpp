class ALYSIA_FACTIONS
{
	class WEST
	{
		/*** GLOBAL ***/
		name="Milice";
		icon="lyeed_IMG\data\faction\WEST_logo.paa";
		identity_item="Alysia_Identity_Milice";

		/*** LABORATORIES ***/
		laboratory_destroy=1;

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=500;
			taxes_rate=0.05;
			apply_rank=1;
			timer=15;
		};

		/*** PHONE ***/
		phone_change_number_price=-1;
		phone_send_global_message=1;
		phone_send_global_message_rank=7;
		phone_send_to_faction_price=0;
		
		/*** COMPANIES ***/
		class companies
		{
			search=1;
			owner=0;
			employee=0;
		};

		class auction_house
		{
			can_buy=1;
			can_sell=0;
			can_search=1;
		};

		class launder_transfer
		{
			rank=9;
		};
		class bank_faction: launder_transfer {};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle="Fett_truck_milice";
			positions[]=
			{
				{{11163.3,16942.5,0.00135565}, 183.454},
				{{8184.01,17042.1,0.00143814}, 28.3948},
				{{7579.09,15669,0.00150299}, 75.4663},
				{{10835.7,12579.6,0.00143814}, 88.1192},
				{{17549.2,9548.51,0.00143814}, 275.068},
				{{17710.5,12404.3,0.0016098}, 3.75067},
				{{13974.8,15738.8,0.0015564}, 281.457},
				{{17197.4,13586,0.00151062}, 58.9541}
			};
			items[]=
			{
				{"Weapons",
					{
						"RH_g17",
						"RH_g19",
						"Skyline_HK_SL8",
						"Skyline_M4A1_01_F",
						"Skyline_M4A1_02_F"
					}
				},
				{"Magazines",
					{
						"30Rnd_556x45_Stanag_Tracer_Red",
						"RH_17Rnd_9x19_g17"
					}
				},
				{"Items",
					{
						"Rangefinder",
						"optic_Aco",
						"optic_Arco",
						"optic_Hamr",
						"NVGoggles",
						"Mask_M40_OD",
						"bipod_01_F_blk",
						"bipod_02_F_blk"
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
			color="ColorWEST";
			type="Mil_dot";
			shape="ICON";
		};

		/* Licenses */
		class licenses_give
		{
			class pilot
			{
				rank=9;
				same_side_only=1;
			};
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="west_spawn";
			price=2500;
			suicide=0.05;
		};

		/*** HOUSING ***/
		house_search=1;
		house_max=2;
		house_tax_per_house_per_salary=0;
		house_tax_percentage_buyPrice_per_house=0;

		/*** HEAL ***/
		price_heal_hopital=0;
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;// can check skull owner's identity
		skull_take=0;// can pack-up skull

		/*** INTERACTIONS ***/
		interaction_seize_gear=1;// can size near gear

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]=
			{
				"SMG_03C_black",
				"SMG_03C_camo",
				"SMG_03C_khaki",
				"SMG_03_khaki",
				"SMG_03_camo",
				"SMG_03_black",
				"RH_m9"
			};
			class leader_board
			{
				access_rank=8;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="tenue_de_milice_cadet";
			headgear="";
			vest="";
			backpack="";
			items[]=
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
			ranks_complet[]=
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

			ranks_short[]=
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
		name="Garde";
		icon="lyeed_IMG\data\faction\EAST_logo.paa";
		identity_item="Alysia_Identity_Garde";

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=800;
			taxes_rate=0;
			apply_rank=1;
			timer=15;
		};

		/*** LABORATORIES ***/
		laboratory_destroy=1;

		/*** PHONE ***/
		phone_change_number_price=5000;
		phone_send_global_message=1;
		phone_send_global_message_rank=5;
		phone_send_to_faction_price=0;

		/*** COMPANIES ***/
		class companies
		{
			search=1;
			owner=0;
			employee=0;
		};

		class auction_house
		{
			can_buy=0;
			can_sell=0;
			can_search=1;
		};

		class launder_transfer
		{
			rank=2;
		};
		class bank_faction
		{
			rank=6;
		};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle="Fett_truck_army";
			positions[]=
			{
				{{6354.66,7456.13,0.00125122}, 39.8453},
				{{10400.8,5252.98,0.00162888}, 0.137371},
				{{13366.3,6887.15,0.00107718}, 264.853}
			};
			items[]=
			{
				{"Weapons",
					{
						"Trixie_Enfield_Rail",
						"hlc_rifle_m14sopmod",
						"hlc_rifle_auga3_b",
						"hlc_rifle_auga2_b",
						"hlc_rifle_auga2lsw_b",
						"hlc_rifle_auga2carb_b",
						"hlc_rifle_auga2para_b",
						"hlc_rifle_auga1_b",
						"hlc_rifle_aughbar_B",
						"hlc_rifle_auga1carb_B",
						"hlc_rifle_augpara_b",
						"hlc_rifle_augsr_b",
						"hlc_rifle_augsrhbar_b",
						"hlc_rifle_augsrcarb_b",
						"RH_fn57"
					}
				},
				{"Magazines",
					{
						"Trixie_Enfield_Mag",
						"hlc_20Rnd_762x51_B_M14",
						"hlc_40Rnd_556x45_SPR_AUG",
						"hlc_30Rnd_556x45_B_AUG",
						"RH_20Rnd_57x28_FN"
					}
				},
				{"Items",
					{
						"DemoCharge_Remote_Mag",
						"SmokeShellWhite",
						"Rangefinder",
						"NVGoggles_OPFOR",
						"optic_DMS",
						"optic_ACO_grn_smg",
						"optic_MRCO",
						"optic_LRPS",
						"Mask_M40"
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
				rank=5;
				same_side_only=1;
			};
		};

		/*** MAP ***/
		class map_team_markers
		{
			color="ColorEAST";
			type="Mil_dot";
			shape="ICON";
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="east_spawn";
			price=2200;
			suicide=0.05;
		};

		/*** HOUSING ***/
		house_search=1;
		house_max=2;
		house_tax_per_house_per_salary=0;
		house_tax_percentage_buyPrice_per_house=0;

		/*** HEAL ***/
		price_heal_hopital=0;
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=1;

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]=
			{
				"Alysia_MP44",
				"RH_m1911"
			};
			class leader_board
			{
				access_rank=5;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="tenue_de_garde_basique";
			headgear="";
			vest="";
			backpack="";
			items[]=
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
			ranks_complet[]=
			{
				"Civil",
				"Recrue",
				"Garde",
				"Caporal",
				"Sergent",
				"Lieutenant",
				"Capitaine"
			};

			ranks_short[]=
			{
				"Civ",
				"Rec",
				"Gar",
				"Cap",
				"Sgt",
				"Ltn",
				"Cpt"
			};
		};
	};

	class CIV
	{
		/*** GLOBAL ***/
		name="Civil";
		icon="lyeed_IMG\data\faction\CIV_logo.paa";
		identity_item="SkylineItems_Passeport";

		/*** SALARY ***/
		class salary
		{
			name="Aides";
			amount=900;
			taxes_rate=0.05;
			apply_rank=0;
			timer=15;
		};

		/*** LABORATORIES ***/
		laboratory_destroy=0;

		/*** PHONE ***/
		phone_change_number_price=1000;
		phone_send_global_message=0;
		phone_send_global_message_rank=0;
		phone_send_to_faction_price=0;

		/* Licenses */
		class licenses_give
		{
			class central_com
			{
				rank=0;
				same_side_only=1;
				license="central_com_gen";
			};
			class central
			{
				rank=0;
				same_side_only=0;
				license="central_com";
			};
			class judge
			{
				rank=0;
				same_side_only=1;
				license="judge_supreme";
			};
		};

		/*** COMPANIES ***/
		class companies
		{
			search=0;
			owner=1;
			employee=1;
		};

		class auction_house
		{
			can_buy=1;
			can_sell=1;
			can_search=0;
		};

		class bank_faction
		{
			rank=1;
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="civ_spawn";
			price=1000;
			suicide=0.05;
		};

		/*** HOUSING ***/
		house_search=0;
		house_max=2;
		house_tax_per_house_per_salary=150;
		house_tax_percentage_buyPrice_per_house=0.002;

		/*** HEAL ***/
		price_heal_hopital=120;
		can_use_debrif=0;

		/*** SKULL ***/
		skull_who=0;
		skull_take=0;

		/*** INTERACTIONS ***/
		interaction_seize_gear=0;

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="Skyline_Uniforme_Alysia_01_F";
			headgear="";
			vest="";
			backpack="";
			items[]=
			{
				"ItemMap",
				"ItemCompass",
				"ItemWatch"
			};
		};

		/*** RANKS ***/
		class Ranks
		{
			ranks_complet[]=
			{
				"Civil",
				"Parlementaire"
			};
			ranks_short[]=
			{
				"Civ",
				"Parlm"
			};
		};
	};

	class GUER
	{
		/*** GLOBAL ***/
		name="SAMU";
		icon="lyeed_IMG\data\faction\GUER_logo.paa";
		identity_item="SkylineItems_Passeport";

		/*** SALARY ***/
		class salary
		{
			name="Salaire";
			amount=250;
			taxes_rate=0;
			apply_rank=1;
			timer=15;
		};

		/*** LABORATORIES ***/
		laboratory_destroy=0;

		/*** PHONE ***/
		phone_change_number_price=1000;
		phone_send_global_message=1;
		phone_send_global_message_rank=5;
		phone_send_to_faction_price=0;

		/*** COMPANIES ***/
		class companies
		{
			search=0;
			owner=0;
			employee=0;
		};

		class auction_house
		{
			can_buy=1;
			can_sell=0;
			can_search=0;
		};
		
		class bank_faction
		{
			rank=6;
		};

		/*** GEAR MISSION ***/
		class mission
		{
			vehicle="Fett_zamak_repair_samu";
			items[]=
			{
				{"Weapons",
					{

					}
				},
				{"Magazines",
					{
						"SkylineItems_Adrenaline",
						"SkylineItems_Morphine",
						"SkylineItems_Defibrilateur",
						"SkylineItems_Bandage"
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
						"water",
						"sandwich",
						"medoc_rhume",
						"medoc_toux_1",
						"medoc_toux_2",
						"scalpel",
						"horn_samu",
						"stethoscope"
					}
				}
			};
			positions[]=
			{
				{{9736.77,14400.3,0.00168991}, 150.65},
				{{11170.7,14605.9,0.00143433}, 240.656},
				{{16641.3,9200.08,0.00143623}, 133.536},
				{{17594.3,9525.85,0.00143814}, 270.561},
				{{12045.5,17583.4,0.00143814}, 2.43557},
				{{13387.2,9272.55,0.0014534}, 171.817},
				{{17351,14093.8,0.00143909}, 356.626},
				{{13965.8,15743.8,0.00146484}, 258.009},
				{{13913.4,16698,0.00137901}, 125.591},
				{{10891.7,12556.3,0.00143814}, 46.0481},
				{{12540.6,12702.5,0.00154114}, 83.635},
				{{11197.9,8871.77,0.00143433}, 228.673}
			};
		};

		/*** MAP ***/
		class map_coma_markers {};
		class map_team_markers
		{
			color="ColorPink";
			type="Mil_dot";
			shape="ICON";
		};

		/*** SPAWN/RESPAWN ***/
		class respawn
		{
			marker="guer_spawn_1";
			price=0;
			suicide=0;
		};

		/*** HOUSING ***/
		house_search=0;
		house_max=2;
		house_tax_per_house_per_salary=0;
		house_tax_percentage_buyPrice_per_house=0.003;

		/*** HEAL ***/
		price_heal_hopital=0;
		can_use_debrif=1;

		/*** SKULL ***/
		skull_who=1;
		skull_take=1;

		/*** INTERACTIONS ***/
		interaction_seize_gear=0;

		/* Licenses */
		class licenses_give
		{
			class pilot
			{
				rank=6;
				same_side_only=1;
			};
			class medical
			{
				rank=1;
				same_side_only=0;
				license="guer_medical";
			};
			class guer_medical
			{
				rank=6;
				same_side_only=1;
			};
			class guer_gen
			{
				rank=6;
				same_side_only=1;
			};
			class guer_chirurgien
			{
				rank=6;
				same_side_only=1;
			};
			class guer_inspector
			{
				rank=6;
				same_side_only=1;
			};
		};

		/*** LEADER BOARD ***/
		class board
		{
			history_items[]={};
			class leader_board
			{
				access_rank=5;
			};
		};

		/*** LOADOUT ***/
		class Loadout
		{
			uniform="rds_uniform_assistant";
			headgear="";
			vest="";
			backpack="";
			items[]=
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
			ranks_complet[]=
			{
				"Civil",
				"Stagiaire",
				"Infirmier",
				"Médecin Externe",
				"Médecin Interne",
				"Médecin Titulaire",
				"Médecin Chef"
			};

			ranks_short[]=
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
