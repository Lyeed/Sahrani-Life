class ALYSIA_PROCESS
{
	// Sons disponibles = cement_mix / collectoil / cooking / drug_process / salt_process / smelting
	
	/*************                       ******************
	**************  	 FARMING         ******************
	**************                       *******************/
	class wood
	{
		name = "Scierie";
		sound = "smelting";
		require[] = {{"wood",1}};
		receive[] = {{{"woodp",1}},{},0};
		time_per_item = 2;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"wood"};
			};
		};
	};
	class furniture
	{
		name = "Menuiserie";
		sound = "smelting";
		require[] = {{"woodp",5}};
		receive[] = {{{"furniture",1}},{},0};
		time_per_item = 2;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"furniture"};
			};
		};
	};
	class sand
	{
		name = "Fonte du verre";
		sound = "salt_process";
		require[] = {{"sand",1}};
		receive[] = {{{"glass",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"sand"};
			};
			class GUER {};
		};
	};
	class seringue
	{
		name = "Fonte du verre en seringues";
		sound = "smelting";
		require[] = {{"glass",1}};
		receive[] = {{{"seringue",2}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"sand"};
			};
			class GUER {};
		};
	};
	class iron
	{
		name = "Fonte du fer";
		sound = "smelting";
		require[] = {{"iron",1}};
		receive[] = {{{"ironp",1},{"soufre",1}},{},0};
		time_per_item = 2;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"iron"};
			};
		};
	};

	class platine
	{
		name = "Fonte du platine";
		sound = "smelting";
		require[] = {{"platine",1}};
		receive[] = {{{"platinep",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"platine"};
			};
		};
	};
	class marijuana
	{
		name = "Traitement du cannabis";
		sound = "smelting";
		require[] = {{"cannabis",1}};
		receive[] = {{{"marijuana",1}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class heroin
	{
		name = "Traitement de l'héroine";
		sound = "drug_process";
		require[] = {{"heroin",1}};
		receive[] = {{{"heroinp",1}},{},0};
		time_per_item = 4;
		time_default = 8;
		class target
		{
			smoke_type = "SmokeShellYellow";
		};
		class factions
		{
			class CIV {};
		};
	};
	class seringueheroin
	{
		name = "Traitement des seringues d'héroine";
		sound = "drug_process";
		require[] = {{"heroinp",1},{"seringue",1}};
		receive[] = {{{"heroinps",1}},{},0};
		time_per_item = 2;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class cocaine
	{
		name = "Traitement de la cocaine";
		sound = "cooking";
		require[] = {{"cocaine",1}};
		receive[] = {{{"cocainep",1}},{},0};
		time_per_item = 4;
		time_default = 5;
		class target
		{
			smoke_type = "SmokeShellGreen";
		};
		class factions
		{
			class CIV {};
		};
	};
	class cocainec
	{
		name = "Coupe de la cocaine";
		sound = "cooking";
		require[] = {{"cocainep",1},{"glass",1}};
		receive[] = {{{"cocainepc",2}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target
		{
			smoke_type = "SmokeShellGreen";
		};
		class factions
		{
			class CIV {};
		};
	};
	class meth
	{
		name = "Traitement de la meth";
		sound = "cooking";
		require[] = {{"meth",1},{"hsoufre",1}};
		receive[] = {{{"methp",1}},{},0};
		time_per_item = 5;
		time_default = 10;
		class target
		{
			smoke_type = "SmokeShellBlue";
		};
		class factions
		{
			class CIV {};
		};
	};
	class soufre
	{
		name = "Hydratation du soufre";
		sound = "drug_process";
		require[] = {{"soufre",1},{"water",1}};
		receive[] = {{{"hsoufre",1}},{},0};
		time_per_item = 2;
		time_default = 5;
		class factions
		{
			class CIV {};
		};
	};
	class archeologue
	{
		name = "Rénovation";
		sound = "cooking";
		require[] = {{"frag_1",1},{"frag_2",1},{"frag_3",1},{"frag_4",1},{"frag_5",1},{"frag_6",1}};
		receive[] = {{{"artefact_R",1}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"archeologie"};
			};
		};
	};
	class tabac
	{
		name = "Tubage de cigarettes";
		sound = "salt_process";
		require[] = {{"tabac",1}};
		receive[] = {{{"cigarette",1}},{},0};
		time_per_item = 2;
		time_default = 2;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class cigare
	{
		name = "Fabrication de cigare";
		sound = "salt_process";
		require[] = {{"tabac",2}};
		receive[] = {{{"cigare",1}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};	
	class copper
	{
		name = "Traitement du cuivre";
		sound = "smelting";
		require[] = {{"copper",1}};
		receive[] = {{{"copperp",1}},{},0};
		time_per_item = 4;
		time_default = 6;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"copper"};
			};
		};
	};
	class cotton
	{
		name = "Traitement du cotton";
		sound = "smelting";
		require[] = {{"cotton",1}};
		receive[] = {{{"cottonp",1}},{},0};
		time_per_item = 4;
		time_default = 6;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class tissue
	{
		name = "Tissage";
		sound = "salt_process";
		require[] = {{"cottonp",5}};
		receive[] = {{{"tissue",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class factions
		{
			class CIV {};
		};
	};
	class gold
	{
		name = "Fonte de l'or";
		sound = "salt_process";
		require[] = {{"goldnuggets",40}};
		receive[] = {{{"goldbar",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"gold"};
			};
		};
	};
	class salt
	{
		name = "Traitement du sel";
		sound = "salt_process";
		require[] = {{"salt",1}};
		receive[] = {{{"saltp",1}},{},0};
		time_per_item = 2;
		time_default = 6;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"salt"};
			};
		};
	};
	class bauxite
	{
		name = "Traitement du bauxite";
		sound = "salt_process";
		require[] = {{"baux",1}};
		receive[] = {{{"alu",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"bauxite"};
			};
		};
	};
	class Distillerie_Grozdova
	{
		name = "Mise en bouteille : Grozdova";
		sound = "smelting";
		require[] = {{"raisin",2},{"bouteillevide",1}};
		receive[] = {{{"grozdova",1}},{},0};
		time_per_item = 5;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class Distillerie_Slivovica
	{
		name = "Mise en bouteille : Slivovica";
		sound = "smelting";
		require[] = {{"Prune",2},{"bouteillevide",1}};
		receive[] = {{{"slivovica",1}},{},0};
		time_per_item = 5;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class steel
	{
		name = "Fonte de l'acier";
		sound = "smelting";
		require[] = {{"ironp",1},{"coal",1}};
		receive[] = {{{"steel",1}},{},0};
		time_per_item = 8;
		time_default = 8;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_foundry"};
			};
		};
	};
	class brique
	{
		name = "Traitement de l'argile";
		sound = "salt_process";
		require[] = {{"clay",2}};
		receive[] = {{{"brique",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_construction"};
			};
		};
	};
	class Cimenttr
	{
		name = "Traitement de la pierre";
		sound = "salt_process";
		require[] = {{"pierre",1}};
		receive[] = {{{"ciment",1}},{},0};
		time_per_item = 5;
		time_default = 8;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_construction"};
			};
		};
	};
	class oil
	{
		name = "Traitement du pétrole";
		sound = "drug_process";
		require[] = {{"oilu",1}};
		receive[] = {{{"sp98",2},{"sp95",1},{"gpl",1},{"kerosene",1},{"gazole",3}},{},0};
		time_per_item = 12;
		time_default = 8;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_fuel"};
			};
		};
	};
	class bouteille
	{
		name = "Fonte du verre en Bouteille";
		sound = "smelting";
		require[] = {{"glass",1}};
		receive[] = {{{"bouteillevide",2}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"sand"};
			};
		};
	};
	class huile
	{
		name = "Traitement de fleur de tournesol";
		sound = "salt_process";
		require[] = {{"sunflower",2}};
		receive[] = {{{"huile",1}},{},0};
		time_per_item = 3;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"company_farming"};
			};
		};
	};
	class huile_bottle
	{
		name = "Mise en bouteille : huile de tournesol";
		sound = "salt_process";
		require[] = {{"huile",2}, {"bouteillevide", 1}};
		receive[] = {{{"huile_bottle",1}},{},0};
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"company_farming"};
			};
		};
	};

	/*************                              ******************
	**************  	 OBJETS DYNAMIC         ******************
	**************                              *******************/
	class chair_wood
	{
		name = "Fabrication de chaises (bois)";
		require[] = {{"woodp",5}};
		receive[] = {{{"chair_wood",1}},{},0};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"furniture"};
			};
		};
	};
	class table_wood
	{
		name = "Fabrication de tables (bois)";
		require[] = {{"woodp",11}};
		receive[] = {{{"table_wood",1}},{},0};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"furniture"};
			};
		};
	};
	class tribune_wood
	{
		name = "Fabrication de tribune (bois)";
		require[] = {{"woodp",30}};
		receive[] = {{{"tribune_wood",1}},{},0};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"furniture"};
			};
		};
	};

	/*************                   ******************
	**************  	 SAMU        ******************
	**************                   *******************/
	class opium
	{
		name = "Traitement du pavot";
		sound = "salt_process";
		require[] = {{"heroin",1}};
		receive[] = {{{"opium",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class GUER
			{
				rank = 4;
			};
		};
	};
	class morphine: opium
	{
		name = "Traitement de l'opium";
		sound = "salt_process";
		require[] = {{"opium",1},{"seringue",1}};
		receive[] = {{},{"SkylineItems_Morphine"},0};
		class target {};
		class factions: factions {};
	};
	class phenylalanine: opium
	{
		name = "Traitement du blé";
		sound = "salt_process";
		require[] = {{"wheat",2}};
		receive[] = {{{"phenylalanine",1}},{},0};
		class target {};
		class factions: factions {};
	};
	class epinephrine: opium
	{
		name = "Traitement de la phenylalanine";
		sound = "salt_process";
		require[] = {{"phenylalanine",1},{"seringue",1}};
		receive[] = {{},{"SkylineItems_Adrenaline"},0};
		class target {};
		class factions: factions {};
	};

	/*************                   ******************
	**************  	TENUES       ******************
	**************                   *******************/
	class clothing_suit_1
	{
		name = "Confection de costume (1)";
		sound = "smelting";
		require[] = {{"tissue",11},{"cottonp",10}};
		receive[] = {{},{"rds_uniform_Functionary1"},0};
		time_per_item = 20;
		time_default = 5;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_clothing"};
			};
		};
	};
	class clothing_suit_2: clothing_suit_1
	{
		name = "Confection de costume (2)";
		receive[] = {{},{"rds_uniform_Functionary2"},0};
		class factions: factions {};
	};
	class clothing_suit_3: clothing_suit_1
	{
		name = "Confection de costume (3)";
		receive[] = {{},{"TRYK_SUITS_BLK_F"},0};
		class factions: factions {};
	};
	class clothing_suit_4: clothing_suit_1
	{
		name = "Confection de costume (4)";
		receive[] = {{},{"TRYK_SUITS_BR_F"},0};
		class factions: factions {};
	};
	class clothing_suit_5: clothing_suit_1
	{
		name = "Confection de costume (5)";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"druglord_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_6: clothing_suit_1
	{
		name = "Confection de costume (6)";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"special_agent_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_7: clothing_suit_1
	{
		name = "Confection de costume (7)";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"Robber_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_8: clothing_suit_1
	{
		name = "Confection de costume (8)";
		require[] = {{"tissue",9},{"cottonp",20}};
		receive[] = {{},{"Killer_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_9: clothing_suit_1
	{
		name = "Confection de costume (9)";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"mafiaboss_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_10: clothing_suit_1
	{
		name = "Confection de costume (10)";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"agent_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_11: clothing_suit_1
	{
		name = "Confection de costume (11)";
		require[] = {{"tissue",10},{"cottonp",10}};
		receive[] = {{},{"vip1_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_12: clothing_suit_11
	{
		name = "Confection de costume (12)";
		receive[] = {{},{"vip2_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_13: clothing_suit_11
	{
		name = "Confection de costume (13)";
		receive[] = {{},{"vip3_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_suit_14: clothing_suit_1
	{
		name = "Confection de costume (9)";
		require[] = {{"tissue",11},{"cottonp",11}};
		receive[] = {{},{"president_uniform_new"},0};
		class factions: factions {};
	};

	class headgear_news_1: clothing_suit_1
	{
		name = "Confection de casquette presse";
		require[] = {{"tissue",1},{"cottonp",1}};
		receive[] = {{},{"H_Cap_press"},0};
		class factions: factions {};
	};
	class vest_news_1: clothing_suit_1
	{
		name = "Confection de gilet Presse";
		require[] = {{"tissue",4},{"steel",4}};
		receive[] = {{},{"V_Press_F"},0};
		time_per_item = 30;
		class factions: factions {};
	};

	class backpack_parachute: clothing_suit_1
	{
		name = "Confection de parachute";
		require[] = {{"tissue",6}};
		receive[] = {{},{"B_Parachute"},0};
		time_per_item = 15;
		class factions: factions {};
	};

	class headgear_construction_1: headgear_news_1
	{
		name = "Confection de casque de construction";
		receive[] = {{},{"usm_helmet_safety"},0};
		class factions: factions {};
	};
	class vest_construction_1: clothing_suit_1
	{
		name = "Confection de gilet de construction";
		require[] = {{"tissue",2},{"cottonp",10}};
		receive[] = {{},{"usm_vest_safety"},0};
		time_per_item = 30;
		class factions: factions {};
	};

	class clothing_moneyTransfert_1: clothing_suit_1
	{
		name = "Confection d'uniforme de convoyeur";
		require[] = {{"tissue",2},{"cottonp",8}};
		receive[] = {{},{"TRYK_U_B_BLK3CD"},0};
		class factions: factions {};
	};
	class vest_moneyTransfert_1: vest_news_1
	{
		name = "Confection de gilet Convoyeur";
		receive[] = {{},{"TRYK_V_Bulletproof_BL"},0};
		class factions: factions {};
	};
	class goggles_moneyTransfert_1: clothing_suit_1
	{
		name = "Confection de cagoule de convoyeur";
		require[] = {{"tissue",1},{"cottonp",1}};
		receive[] = {{},{"TRYK_kio_balaclava_BLK"},0};
		class factions: factions {};
	};

	class clothing_depann_1: clothing_suit_1
	{
		name = "Confection d'uniforme dépanneur (1)";
		require[] = {{"cottonp",20}};
		receive[] = {{},{"U_C_WorkerCoveralls"},0};
		class factions: factions {};
	};
	class clothing_depann_2: clothing_suit_1
	{
		name = "Confection d'uniforme dépanneur (2)";
		require[] = {{"tissue",2},{"cotténp",8}};
		receive[] = {{},{"Skyline_Uniforme_Depanneur_01_F"},0};
		class factions: factions {};
	};
	class clothing_depann_SDNS: clothing_suit_1
	{
		name = "Confection d'uniforme dépanneur (SDNS)";
		require[] = {{"tissue",3},{"cottonp",10}};
		receive[] = {{},{"SDNS_depannage"},0};
		class factions: factions {};
	};
	class backpack_depann_1: clothing_suit_1
	{
		name = "Confection de sac à dos dépanneur";
		require[] = {{"tissue",15},{"cottonp",10}};
		receive[] = {{},{"Skyline_Sac_Depanneur_01_F"},0};
		class factions: factions {};
	};

	class clothing_clothing_lectra: clothing_suit_1
	{
		name = "Confection d'uniforme textile (Lectra)";
		require[] = {{"tissue",3},{"cottonp",10}};
		receive[] = {{},{"Lectra_textile"},0};
		class factions: factions {};
	};

	class clothing_secu_1: clothing_suit_1
	{
		name = "Confection de costume sécurité";
		require[] = {{"tissue",8},{"cottonp",20}};
		receive[] = {{},{"bodyguard_uniform_new"},0};
		class factions: factions {};
	};
	class clothing_secu_2: clothing_suit_1
	{
		name = "Confection d'uniforme sécurité (1)";
		require[] = {{"tissue",2},{"cottonp",8}};
		receive[] = {{},{"Skyline_Uniforme_Securite_01_F"},0};
		class factions: factions {};
	};
	class clothing_secu_3: clothing_secu_2
	{
		name = "Confection d'uniforme sécurité (2)";
		receive[] = {{},{"Skyline_Uniforme_Securite_02_F"},0};
		class factions: factions {};
	};
	class clothing_secu_4: clothing_secu_2
	{
		name = "Confection d'uniforme sécurité (3)";
		receive[] = {{},{"Skyline_Uniforme_Securite_03_F"},0};
		class factions: factions {};
	};
	class vest_secu_1: vest_news_1
	{
		name = "Confection de gilet sécurité";
		receive[] = {{},{"TRYK_V_Bulletproof_BLK"},0};
		class factions: factions {};
	};
	class googles_secu_1: goggles_moneyTransfert_1
	{
		name = "Confection de cagoule sécurité";
		receive[] = {{},{"TRYK_kio_balaclava_BLK"},0};
		class factions: factions {};
	};

	class clothing_criminal_1
	{
		name = "Confection de tenue criminelle 1";
		sound = "smelting";
		require[] = {{"tissue",5}};
		receive[] = {{},{"TRYK_ZARATAKI"},0};
		time_per_item = 20;
		time_default = 20;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class clothing_criminal_2: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 2";
		receive[] = {{},{"TRYK_ZARATAKI2"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_3: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 3";
		receive[] = {{},{"TRYK_ZARATAKI3"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_4: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 4";
		receive[] = {{},{"TRYK_U_taki_BL"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_5: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 5";
		receive[] = {{},{"TRYK_U_taki_COY"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_6: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 6";
		receive[] = {{},{"TRYK_U_taki_wh"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_7: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 7";
		receive[] = {{},{"TRYK_T_camo_3c_BG"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_8: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 8";
		receive[] = {{},{"TRYK_T_camo_desert_marpat_BG"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_9: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 9";
		receive[] = {{},{"TRYK_T_camo_Wood_BG"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_10: clothing_criminal_1
	{
		name = "Confection de tenue criminelle 10";
		receive[] = {{},{"TRYK_U_B_PCUHsW3"},0};
		class target {};
		class factions: factions {};
	};
	class goggles_criminal_1: clothing_criminal_1
	{
		name = "Confection cagoule criminelle 1";
		receive[] = {{},{"G_Balaclava_blk"},0};
		class target {};
		class factions: factions {};
	};
	class goggles_criminal_2: clothing_criminal_1
	{
		name = "Confection masque à gaz";
		receive[] = {{},{"Mask_M40"},0};
		class target {};
		class factions: factions {};
	};
	class goggles_criminal_3: clothing_criminal_1
	{
		name = "Confection masque de voleur";
		receive[] = {{},{"Masque_Solitaire"},0};
		class target {};
		class factions: factions {};
	};
	class vest_criminal_1: vest_news_1
	{
		name = "Confection de gilet barre-balles";
		receive[] = {{},{"TRYK_V_IOTV_BLK"},0};
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class backpack_radio_1
	{
		name = "Fabrication de radio (1)";
		sound = "smelting";
		require[] = {{"steel",5},{"glass", 4},{"ironp",2},{"tissue",9},{"goldbar", 1},{"alu",4}};
		receive[] = {{},{"tf_rt1523g_bwmod"},0};
		time_per_item = 30;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class backpack_radio_2: backpack_radio_1
	{
		name = "Fabrication de radio (2)";
		receive[] = {{},{"tf_rt1523g"},0};
		class target {};
		class factions: factions {};
	};

	class googles_NVG
	{
		name = "Fabrication de vision nocturne";
		sound = "smelting";
		require[] = {{"steel",8},{"glass", 4},{"ironp",2},{"goldbar", 1},{"alu",10}};
		receive[] = {{},{"NVGoggles_INDEP"},0};
		time_per_item = 20;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class headgear_mask
	{
		name = "Confection de cagoule (otage)";
		sound = "smelting";
		require[] = {{"tissue",5}};
		receive[] = {{},{"mgsr_headbag"},0};
		time_per_item = 10;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class google_mask
	{
		name = "Confection de bâillon (otage)";
		sound = "smelting";
		require[] = {{"tissue",4}};
		receive[] = {{},{"G_Bandanna_blk"},0};
		time_per_item = 8;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	/*************                            ******************
	**************  	MORCEAUX ARMES        ******************
	**************                            *******************/
	class bullet
	{
		name = "Moulage de balles";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"bullet",30}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class buckshot
	{
		name = "Moulage de la chevrotine";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"buckshot",5}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class magazine
	{
		name = "Moulage de chargeurs";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"magazine",2}},{},0};
		time_per_item = 12;
		time_default = 8;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class barillet
	{
		name = "Moulage de barillets";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"barillet",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class canon
	{
		name = "Moulage de canons";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"canon",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class crosse_wood
	{
		name = "Fabrication de crosses (bois)";
		sound = "smelting";
		require[] = {{"woodp",1}};
		receive[] = {{{"crosse_wood",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class crosse_steel
	{
		name = "Fabrication de crosses (acier)";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"crosse_steel",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class garde_main_wood
	{
		name = "Fabrication de gardes-mains (bois)";
		sound = "smelting";
		require[] = {{"woodp",1}};
		receive[] = {{{"garde_main_wood",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class garde_main_steel
	{
		name = "Fabrication de gardes-mains (acier)";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"garde_main_steel",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class poignee
	{
		name = "Fabrication de poignées";
		sound = "smelting";
		require[] = {{"steel",1},{"woodp",1}
		};
		receive[] = {{{"poignee",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class detente
	{
		name = "Moulage de détentes";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"detente",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class percuteur
	{
		name = "Moulage de percuteurs";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"percuteur",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class carcasse
	{
		name = "Moulage de carcasses";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"carcasse",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class bloc_culasse
	{
		name = "Moulage de blocs culasse";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"bloc_culasse",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class marteau
	{
		name = "Moulage de marteaux";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"marteau",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class culasse
	{
		name = "Moulage de culasses";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"culasse",2}},{},0};
		time_per_item = 8;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};

	/*************                         ******************
	**************  ARMES ILLEGALLES       ******************
	**************                         *******************/
	class weapon_ak_1
	{
		name = "Arme : AK74 (1)";
		sound = "smelting";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"poignee",1},{"detente",1},{"percuteur",1},{"woodp",7},{"steel",5},{"ironp",8}};
		receive[] = {{},{"hlc_rifle_ak74_dirty"},0};
		time_per_item = 40;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class weapon_ak_2: weapon_ak_1
	{
		name = "Arme : AK74 (2)";
		receive[] = {{},{"hlc_rifle_ak74_dirty2"},0};
		class target {};
		class factions: factions {};
	};
	class weapon_ak_3: weapon_ak_1
	{
		name = "Arme : AK74 (3)";
		receive[] = {{},{"hlc_rifle_ak74"},0};
		class target {};
		class factions: factions {};
	};
	class magazine_ak: weapon_ak_1
	{
		name = "Munitions : AK74";
		require[] = {{"bullet",30},{"magazine",1}};
		receive[] = {{},{"hlc_30Rnd_545x39_B_AK"},0};
		time_per_item = 8;
		class target {};
		class factions: factions {};
	};
	class scope_ak: weapon_ak_1
	{
		name = "Viseur : AK74";
		require[] = {{"steel",5},{"glass",1},{"ironp",2}};
		receive[] = {{},{"hlc_optic_kobra"},0};
		time_per_item = 15;
		class target {};
		class factions: factions {};
	};

	class weapon_m21: weapon_ak_1
	{
		name = "Arme : M21";
		require[] = {{"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",5},{"steel",12}};
		receive[] = {{},{"hlc_rifle_M21"},0};
		class target {};
		class factions: factions {};
	};
	class magazine_m21: magazine_ak
	{
		name = "Munitions : M21";
		require[] = {{"bullet",20},{"magazine",1}};
		receive[] = {{},{"hlc_20Rnd_762x51_B_M14"},0};
		class target {};
		class factions: factions {};
	};
	class scope_m21: scope_ak
	{
		name = "Viseur : M21";
		require[] = {{"steel",15},{"glass",5}};
		receive[] = {{},{"hlc_optic_artel_m14"},0};
		time_per_item = 30;
		class target {};
		class factions: factions {};
	};

	class weapon_cz: weapon_ak_1
	{
		name = "Arme : Fusil CZ550";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",15},{"ironp",2},{"steel",3}};
		receive[] = {{},{"Trixie_CZ550"},0};
		class target {};
		class factions: factions {};
	};
	class magazine_cz: magazine_ak
	{
		name = "Munitions : Fusil CZ550";
		require[] = {{"bullet",5},{"magazine",1}};
		receive[] = {{},{"Trixie_CZ550_Mag"},0};
		class target {};
		class factions: factions {};
	};

	class weapon_sawed: weapon_ak_1
	{
		name = "Arme : Fusil scié";
		require[] = {{"canon",2},{"crosse_wood",1},{"detente",1},{"percuteur",1},{"woodp",8},{"ironp",1},{"steel",2}};
		receive[] = {{},{"Sawed_Off_Shotgun"},0};
		time_per_item = 25;
		class target {};
		class factions: factions {};
	};
	class magazine_sawed: magazine_ak
	{
		name = "Munitions : Fusil scié";
		require[] = {{"buckshot",10},{"magazine",1}};
		receive[] = {{},{"2Rnd_Sawed_Off_Shotgun_Pellets"},0};
		class target {};
		class factions: factions {};
	};

	class weapon_tec: weapon_ak_1
	{
		name = "Arme : Pistolet TEC9";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"percuteur",1},{"carcasse",1},{"bloc_culasse",1},{"ironp",2},{"steel",3}};
		receive[] = {{},{"RH_tec9"},0};
		time_per_item = 15;
		class target {};
		class factions: factions {};
	};
	class magazine_tec: magazine_ak
	{
		name = "Munitions : Pistolet TEC9";
		require[] = {{"bullet",32},{"magazine",1}};
		receive[] = {{},{"RH_32Rnd_9x19_tec"},0};
		class target {};
		class factions: factions {};
	};

	class magazine_tracker: magazine_ak
	{
		name = "Munitions : Revolver Tracker";
		require[] = {{"bullet",6},{"magazine",1}};
		receive[] = {{},{"RH_6Rnd_45ACP_Mag"},0};
		class target {};
		class factions: factions {};
	};
	class weapon_tracker: weapon_ak_1
	{
		name = "Arme : Revolver Tracker";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"marteau",1},{"barillet",1},{"ironp",2},{"steel",3}};
		receive[] = {{},{"RH_ttracker"},0};
		time_per_item = 12;
		class target {};
		class factions: factions {};
	};
	class weapon_tracker_gold: weapon_ak_1
	{
		name = "Arme : Revolver Tracker or";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"marteau",1},{"barillet",1},{"ironp",2},{"goldbar",1}};
		receive[] = {{},{"RH_ttracker_g"},0};
		time_per_item = 50;
		class target {};
		class factions: factions {};
	};

	class board_1: weapon_ak_1
	{
		name = "Pancarte : Vive Brajva";
		require[] = {{"woodp",5}};
		receive[] = {{},{"Skyline_Pancarte_brajva"},0};
		time_per_item = 5;
		class target {};
		class factions: factions {};
	};
	class board_2: board_1
	{
		name = "Pancarte : Clochard";
		receive[] = {{},{"Skyline_Pancarte_clochard"},0};
		class target {};
		class factions: factions {};
	};
	class board_3: board_1
	{
		name = "Pancarte : Vive la Garde";
		receive[] = {{},{"Skyline_Pancarte_garde"},0};
		class target {};
		class factions: factions {};
	};
	class board_4: board_1
	{
		name = "Pancarte : Marijuana";
		receive[] = {{},{"Skyline_Pancarte_marijuana"},0};
		class target {};
		class factions: factions {};
	};
	class board_5: board_1
	{
		name = "Pancarte : Vive Novak";
		receive[] = {{},{"Skyline_Pancarte_novak"},0};
		class target {};
		class factions: factions {};
	};
	/*************                        ******************
	**************  	ARMES LEGALES     ******************
	**************                        *******************/
	class weapon_b95
	{
		name = "Arme : Fusil B95";
		sound = "smelting";
		require[] = {{"canon",2},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",2},{"woodp",10},{"ironp",2},{"steel",3}};
		receive[] = {{},{"Skyline_B95"},0};
		time_per_item = 40;
		time_default = 5;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class magazine_b95: weapon_b95
	{
		name = "Munitions : Fusil B95";
		require[] = {{"buckshot",10},{"magazine",1}};
		receive[] = {{},{"2Rnd_762x51_Mag_B95"},0};
		time_per_item = 8;
		class factions: factions {};
	};

	class weapon_cz75: weapon_b95
	{
		name = "Arme : Pistolet CZ 75";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"percuteur",1},{"carcasse",1},{"bloc_culasse",1},{"marteau",1},{"ironp",2},{"steel",3}};
		receive[] = {{},{"RH_cz75"},0};
		time_per_item = 30;
		class factions: factions {};
	};
	class magazine_cz75: magazine_b95
	{
		name = "Munitions : Pistolet CZ 75";
		require[] = {{"bullet",16},{"magazine",1}};
		receive[] = {{},{"RH_16Rnd_9x19_CZ"},0};
		class factions: factions {};
	};

	class weapon_p226: weapon_cz75
	{
		name = "Arme : Pistolet Sig-Sauer P226";
		receive[] = {{},{"RH_p226"},0};
		time_per_item = 20;
		class factions: factions {};
	};
	class magazine_p226: magazine_b95
	{
		name = "Munitions : Pistolet Sig-Sauer P226";
		require[] = {{"bullet",15},{"magazine",1}};
		receive[] = {{},{"RH_15Rnd_9x19_SIG"},0};
		class factions: factions {};
	};

	class weapon_gsh18: weapon_cz75
	{
		name = "Arme : Pistolet GSh-18";
		receive[] = {{},{"RH_gsh18"},0};
		time_per_item = 15;
		class factions: factions {};
	};
	class magazine_gsh18: magazine_b95
	{
		name = "Munitions : Pistolet GSh-18";
		require[] = {{"bullet",18},{"magazine",1}};
		receive[] = {{},{"RH_18Rnd_9x19_gsh"},0};
		class factions: factions {};
	};

	class weapon_sdar: weapon_b95
	{
		name = "Arme : SDAR";
		require[] = { {"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"poignee",1},{"detente",1},{"percuteur",1},{"ironp",5},{"steel",5}};
		receive[] = {{},{"Fett_SDAR"},0};
		time_per_item = 30;
		class factions: factions {};
	};
	class magazine_sdar: magazine_b95
	{
		name = "Munitions : SDAR";
		require[] = {{"bullet",20},{"magazine",1}};
		receive[] = {{},{"Fett_20Rnd_556x45_UW_mag"},0};
		class factions: factions {};
	};

	class weapon_vermin: weapon_b95
	{
		name = "Arme : Vermin";
		require[] = { {"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"poignee",1},{"detente",1},{"percuteur",1},{"ironp",5},{"steel",5}};
		receive[] = {{},{"SMG_01_F"},0};
		time_per_item = 40;
		class factions: factions {};
	};
	class magazine_vermin: magazine_b95
	{
		name = "Munitions : Vermin";
		require[] = {{"bullet",30},{"magazine",1}};
		receive[] = {{},{"30Rnd_45ACP_Mag_SMG_01"},0};
		class factions: factions {};
	};

	class scope_holosight: magazine_b95
	{
		name = "Viseur : Holosight";
		require[] = {{"steel",5},{"glass",1},{"ironp",1}};
		receive[] = {{},{"optic_Holosight"},0};
		time_per_item = 30;
		class factions: factions {};
	};
};
