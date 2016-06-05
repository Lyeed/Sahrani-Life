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
		receive[] = {{{"woodp",2}},{},0};
		time_per_item = 1;
		time_default = 5;
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
		time_per_item = 1;
		time_default = 3;
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
		time_per_item = 1;
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
	class iron
	{
		name = "Fonte du fer";
		sound = "smelting";
		require[] = {{"iron",1}};
		receive[] = {{{"ironp",1},{"soufre",1}},{},0};
		time_per_item = 2;
		time_default = 3;
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
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"platine"};
			};
		};
	};

	class heroin
	{
		name = "Traitement de l'héroine";
		sound = "drug_process";
		require[] = {{"heroin",1}};
		receive[] = {{{"heroinp",1}},{},0};
		time_per_item = 2;
		time_default = 3;
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
		time_default = 3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class cocaine
	{
		name = "Traitement de la cocaine";
		sound = "collectoil";
		require[] = {{"cocaine",1}};
		receive[] = {{{"cocainep",1}},{},0};
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
	class cocainec
	{
		name = "Coupe de la cocaine";
		sound = "cooking";
		require[] = {{"cocainep",1},{"glass",1}};
		receive[] = {{{"cocainepc",3}},{},0};
		time_per_item = 1;
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
	class cocainep_bag
	{
		name = "Emballage : cocaine pure";
		sound = "salt_process";
		require[] = {{"cocainep",4},{"tissue",1}};
		receive[] = {{{"cocainep_bag",1}},{},0};
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class cocainepc_bag: cocainep_bag
	{
		name = "Emballage : cocaine coupée";
		require[] = {{"cocainepc",4},{"tissue",1}};
		receive[] = {{{"cocainepc_bag",1}},{},0};
		class factions: factions {};
		class target {};
	};

	class meth
	{
		name = "Traitement de la Méthamphétamine";
		sound = "cooking";
		require[] = {{"meth",1},{"hsoufre",1}};
		receive[] = {{{"methp",1}},{},0};
		time_per_item = 2;
		time_default = 20;
		class target
		{
			smoke_type = "SmokeShellBlue";
		};
		class factions
		{
			class CIV {};
		};
	};
	class meth_bag: cocainep_bag
	{
		name = "Emballage : Méthamphétamine";
		require[] = {{"methp",4},{"tissue",1}};
		receive[] = {{{"meth_bag",1}},{},0};
		class factions: factions {};
		class target {};
	};
	
	class marijuana
	{
		name = "Traitement du cannabis";
		sound = "smelting";
		require[] = {{"cannabis",1}};
		receive[] = {{{"marijuana",1}},{},0};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class marijuana_bag: cocainep_bag
	{
		name = "Emballage : Marijuana";
		require[] = {{"marijuana",4},{"tissue",1}};
		receive[] = {{{"marijuana_bag",1}},{},0};
		class factions: factions {};
		class target {};
	};

	class soufre
	{
		name = "Hydratation du soufre";
		sound = "drug_process";
		require[] = {{"soufre",1},{"water",1}};
		receive[] = {{{"hsoufre",1}},{},0};
		time_per_item = 2;
		time_default = 2;
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
		time_default = 3;
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
		time_default = 2;
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
		time_per_item = 2;
		time_default = 3;
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
		receive[] = {{{"cottonp",2}},{},0};
		time_per_item = 1;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"cotton"};
			};
		};
	};
	class tissue
	{
		name = "Tissage";
		sound = "salt_process";
		require[] = {{"cottonp",5}};
		receive[] = {{{"tissue",3}},{},0};
		time_per_item = 2;
		time_default = 3;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_clothing"};
			};
		};
	};
	class tissue_illegal: tissue
	{
		require[] = {{"cottonp",3}};
		receive[] = {{{"tissue",1}},{},0};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class lockpick
	{
		name = "Fabrication de kit de crochetage";
		sound = "smelting";
		require[] = {{"ironp", 1},{"alu",1}};
		receive[] = {{},{"Alysia_Lockpick"},4};
		time_per_item = 2;
		time_default = 4;
		class target {};
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
		time_per_item = 4;
		time_default = 1;
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
		time_per_item = 1;
		time_default = 5;
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
		time_per_item = 1;
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
		require[] = {{"raisin",3},{"bouteillevide",1}};
		receive[] = {{{"grozdova",1}},{},0};
		time_per_item = 3;
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
		require[] = {{"Prune",3},{"bouteillevide",1}};
		receive[] = {{{"slivovica",1}},{},0};
		time_per_item = 3;
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
		receive[] = {{{"steel",2}},{},0};
		time_per_item = 4;
		time_default = 4;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_foundry"};
			};
		};
	};
	class steel_illegal: steel
	{
		receive[] = {{{"steel",1}},{},0};
		time_per_item = 6;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class scalpel
	{
		name = "Création de scalpel chirurgical";
		sound = "smelting";
		require[] = {{"steel",2}};
		receive[] = {{{"scalpel",1}},{},0};
		time_per_item = 2;
		time_default = 5;
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
		time_per_item = 1;
		time_default = 4;
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
		time_per_item = 4;
		time_default = 3;
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
		time_per_item = 2;
		time_default = 3;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_farming"};
			};
		};
	};
	class pumpkin_juice
	{
		name = "Extraction du jus de citrouille";
		sound = "salt_process";
		require[] = {{"pumpkin",1}};
		receive[] = {{{"pumpkin_juice",2}},{},0};
		time_per_item = 2;
		time_default = 1;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_farming"};
			};
		};
	};
	class pumpkin_bottle
	{
		name = "Mise en bouteille : Jus de citrouille";
		sound = "salt_process";
		require[] = {{"pumpkin_juice",2}, {"bouteillevide", 1}};
		receive[] = {{{"pumpkin_bottle",1}},{},0};
		time_per_item = 2;
		time_default = 3;
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
	class bagfence_sand
	{
		name = "Fabrication de sacs de sable";
		require[] = {{"sand",15},{"tissue",3}};
		receive[] = {{{"bagfence_sand",1}},{},0};
		time_per_item = 4;
		time_default = 5;
		class factions
		{
			class CIV {};
		};
	};
	class antitank_steel
	{
		name = "Fabrication de piege anti-chars";
		require[] = {{"steel",5}};
		receive[] = {{{"antitank_steel",1}},{},0};
		time_per_item = 8;
		time_default = 5;
		class factions
		{
			class CIV {};
		};
	};
	class guardshed_wood
	{
		name = "Fabrication d'abri en bois";
		require[] = {{"woodp",20}};
		receive[] = {{{"guardshed_wood",1}},{},0};
		time_per_item = 8;
		time_default = 5;
		class factions
		{
			class CIV {};
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
		receive[] = {{},{"TRYK_V_Bulletproof_BLK"},0};
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
		require[] = {{"tissue",2},{"cottonp",8}};
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
		receive[] = {{},{"Lectra_textile_uniform"},0};
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
		receive[] = {{},{"Skyline_Veste_Securite_01_F"},0};
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
		time_default = 5;
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
	class clothing_criminal_11: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (11)";
		receive[] = {{},{"digital_uniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_12: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (12)";
		receive[] = {{},{"surpat_uniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_13: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (13)";
		receive[] = {{},{"camorra_uniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_14: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (14)";
		receive[] = {{},{"TRYK_U_B_wood_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_15: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (15)";
		receive[] = {{},{"TRYK_B_USMC_R"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_16: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (16)";
		receive[] = {{},{"TRYK_U_B_TANTAN_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_17: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (17)";
		receive[] = {{},{"TRYK_U_B_TANOCP_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_18: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (18)";
		receive[] = {{},{"TRYK_U_B_woodtanR_CombatUniformTshirt"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_19: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (19)";
		receive[] = {{},{"TRYK_U_B_OD_OD_R_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_20: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (20)";
		receive[] = {{},{"TRYK_U_B_MTP_BLK_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_21: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (21)";
		receive[] = {{},{"TRYK_U_B_MTP_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_22: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (22)";
		receive[] = {{},{"TRYK_U_B_MARPAT_Wood_Tshirt"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_23: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (23)";
		receive[] = {{},{"TRYK_U_B_BLK"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_24: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (24)";
		receive[] = {{},{"TRYK_U_B_BLKBLK_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_25: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (25)";
		receive[] = {{},{"TRYK_U_B_AOR2_OD_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_26: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (26)";
		receive[] = {{},{"TRYK_U_B_AOR2_BLK_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_27: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (27)";
		receive[] = {{},{"TRYK_U_B_ARO2_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};
	class clothing_criminal_28: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (28)";
		receive[] = {{},{"TRYK_U_B_ARO2R_CombatUniform"},0};
		class target {};
		class factions: factions {};
	};

	class clothing_reb_coa: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (Coalition)";
		receive[] = {{},{"Skyline_Uniforme_Coalition_01_F"},0};
		class target {};
		class factions: factions {};
	};
	
	class clothing_reb_ace: clothing_criminal_1
	{
		name = "Confection de tenue criminelle (Ace)";
		receive[] = {{},{"Skyline_Uniforme_ACE_01_F"},0};
		class target {};
		class factions: factions {};
	};

	class goggles_criminal_gas: clothing_criminal_1
	{
		name = "Confection masque à gaz";
		require[] = {{"tissue",3},{"glass", 2},{"alu", 1}};
		receive[] = {{},{"Skyline_GasMask"},0};
		class target {};
		class factions: factions {};
	};

	class vest_criminal_1: vest_news_1
	{
		name = "Confection de gilet pare balles";
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
		require[] = {{"steel",4},{"glass", 2},{"ironp",1},{"goldbar", 1},{"alu",3}};
		receive[] = {{},{"NVGoggles_INDEP"},0};
		time_per_item = 20;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class google_criminal_1
	{
		name = "Confection de lunette criminel 1";
		sound = "smelting";
		require[] = {{"tissue",2}};
		receive[] = {{},{"TRYK_Shemagh_ESS_G"},0};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class google_criminal_2: google_criminal_1
	{
		name = "Confection de lunette criminel 2";
		receive[] = {{}, {"TRYK_Shemagh"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_3: google_criminal_1
	{
		name = "Confection de lunette criminel 3";
		receive[] = {{}, {"TRYK_Shemagh_mesh"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_4: google_criminal_1
	{
		name = "Confection de lunette criminel 4";
		receive[] = {{}, {"mgsr_eyepatch_goggles"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_5: google_criminal_1
	{
		name = "Confection de lunette criminel 5";
		receive[] = {{}, {"shemagh_faceD"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_6: google_criminal_1
	{
		name = "Confection de lunette criminel 6";
		receive[] = {{}, {"shemagh_faceOD"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_7: google_criminal_1
	{
		name = "Confection de lunette criminel 7";
		receive[] = {{}, {"Recon_MskullBLK"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_8: google_criminal_1
	{
		name = "Confection de lunette criminel 8";
		receive[] = {{}, {"Payday_Cagoule"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_9: google_criminal_1
	{
		name = "Confection de lunette criminel 9";
		receive[] = {{}, {"G_Balaclava_Whitehand"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_10: google_criminal_1
	{
		name = "Confection de lunette criminel 10";
		receive[] = {{}, {"G_Balaclava_whitecross"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_11: google_criminal_1
	{
		name = "Confection de lunette criminel 11";
		receive[] = {{}, {"G_Balaclava_oli"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_12: google_criminal_1
	{
		name = "Confection de lunette criminel 12";
		receive[] = {{}, {"G_Balaclava_lowprofile"}, 0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_13: google_criminal_1
	{
		name = "Confection de lunette criminel 13";
		receive[] = {{},{"G_Balaclava_blk"},0};
		class target {};
		class factions: factions {};
	};
	class google_criminal_14: google_criminal_1
	{
		name = "Confection de lunette criminel 14";
		receive[] = {{},{"Masque_Solitaire"},0};
		class target {};
		class factions: factions {};
	};

	class headgear_criminal_1
	{
		name = "Confection de chapeau criminel 1";
		sound = "smelting";
		require[] = {{"tissue",2}};
		receive[] = {{},{"TRYK_H_Bandana_H"},0};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	class headgear_criminal_2: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 2";
		receive[] = {{}, {"TRYK_H_Booniehat_AOR2"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_3: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 3";
		receive[] = {{}, {"TRYK_H_Booniehat_3CD"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_4: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 4";
		receive[] = {{}, {"TRYK_H_Booniehat_AOR1"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_5: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 5";
		receive[] = {{}, {"TRYK_H_Booniehat_WOOD"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_6: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 6";
		receive[] = {{}, {"TRYK_H_Booniehat_MARPAT_WOOD"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_7: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 7";
		receive[] = {{}, {"H_Cap_blk_Raven"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_8: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 8";
		receive[] = {{}, {"H_Cap_brn_SPECOPS"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_9: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 9";
		receive[] = {{}, {"H_LIB_SOV_RA_PrivateCap"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_10: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 10";
		receive[] = {{}, {"H_LIB_SOV_RA_OfficerCap"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_11: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 11";
		receive[] = {{}, {"H_ShemagOpen_khk"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_12: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 12";
		receive[] = {{}, {"Head_Wrap"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_13: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 13";
		receive[] = {{}, {"Head_WrapTAN"}, 0};
		class target {};
		class factions: factions {};
	};
	class headgear_criminal_14: headgear_criminal_1
	{
		name = "Confection de chapeau criminel 14";
		receive[] = {{}, {"TRYK_Kio_Balaclava"}, 0};
		class target {};
		class factions: factions {};
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
		receive[] = {{{"bullet",60}},{},0};
		time_per_item = 1;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class bullet_illegal: bullet
	{
		receive[] = {{{"bullet",30}},{},0};
		time_default = 2;
		time_per_item = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class buckshot
	{
		name = "Moulage de la chevrotine";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"buckshot",10}},{},0};
		time_per_item = 4;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class buckshot_illegal: buckshot
	{
		require[] = {{"steel",2}};
		time_per_item = 6;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class magazine
	{
		name = "Moulage de chargeurs";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"magazine",3}},{},0};
		time_per_item = 4;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class magazine_illegal: magazine
	{
		receive[] = {{{"magazine",1}},{},0};
		time_per_item = 6;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class barillet
	{
		name = "Moulage de barillets";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"barillet",3}},{},0};
		time_per_item = 3;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class barillet_illegal: barillet
	{
		receive[] = {{{"barillet",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class canon
	{
		name = "Moulage de canons";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"canon",2}},{},0};
		time_per_item = 3;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class canon_illegal: canon
	{
		receive[] = {{{"canon",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class crosse_wood
	{
		name = "Fabrication de crosses (bois)";
		sound = "smelting";
		require[] = {{"woodp",2}};
		receive[] = {{{"crosse_wood",3}},{},0};
		time_per_item = 2;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class crosse_wood_illegal: crosse_wood
	{
		receive[] = {{{"crosse_wood",1}},{},0};
		time_per_item = 4;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	
	class crosse_steel
	{
		name = "Fabrication de crosses (acier)";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"crosse_steel",3}},{},0};
		time_per_item = 4;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class crosse_steel_illegal: crosse_steel
	{
		receive[] = {{{"crosse_steel",1}},{},0};
		time_per_item = 6;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class garde_main_wood
	{
		name = "Fabrication de gardes-mains (bois)";
		sound = "smelting";
		require[] = {{"woodp",2}};
		receive[] = {{{"garde_main_wood",3}},{},0};
		time_per_item = 2;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class garde_main_wood_illegal: garde_main_wood
	{
		receive[] = {{{"garde_main_wood",1}},{},0};
		time_per_item = 4;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class garde_main_steel
	{
		name = "Fabrication de gardes-mains (acier)";
		sound = "smelting";
		require[] = {{"steel",2}};
		receive[] = {{{"garde_main_steel",3}},{},0};
		time_per_item = 5;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class garde_main_steel_illegal: garde_main_steel
	{
		receive[] = {{{"garde_main_steel",1}},{},0};
		time_per_item = 7;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class poignee
	{
		name = "Fabrication de poignées";
		sound = "smelting";
		require[] = {{"steel",1},{"woodp",1}};
		receive[] = {{{"poignee",2}},{},0};
		time_per_item = 2;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class poignee_illegal: poignee
	{
		receive[] = {{{"poignee",1}},{},0};
		time_per_item = 4;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class detente
	{
		name = "Moulage de détentes";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"detente",5}},{},0};
		time_per_item = 1;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class detente_illegal: detente
	{
		receive[] = {{{"detente",2}},{},0};
		time_per_item = 3;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class percuteur
	{
		name = "Moulage de percuteurs";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"percuteur",6}},{},0};
		time_per_item = 1;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class percuteur_illegal: percuteur
	{
		receive[] = {{{"percuteur",2}},{},0};
		time_per_item = 3;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class carcasse
	{
		name = "Moulage de carcasses";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"carcasse",3}},{},0};
		time_per_item = 4;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class carcasse_illegal: carcasse
	{
		receive[] = {{{"carcasse",1}},{},0};
		time_per_item = 6;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class bloc_culasse
	{
		name = "Moulage de blocs culasse";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"bloc_culasse",4}},{},0};
		time_per_item = 4;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class bloc_culasse_illegal: bloc_culasse
	{
		receive[] = {{{"bloc_culasse",1}},{},0};
		time_per_item = 6;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class marteau
	{
		name = "Moulage de marteaux";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"marteau",2}},{},0};
		time_per_item = 3;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class marteau_illegal: marteau
	{
		receive[] = {{{"marteau",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class culasse
	{
		name = "Moulage de culasses";
		sound = "smelting";
		require[] = {{"steel",1}};
		receive[] = {{{"culasse",2}},{},0};
		time_per_item = 3;
		time_default = 2;
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};
	class culasse_illegal: culasse
	{
		receive[] = {{{"culasse",1}},{},0};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	/*************                         ******************
	**************  ARMES ILLEGALLES       ******************
	**************                         *******************/
	class weapon_ak_1
	{
		name = "Arme : AK74 (1)";
		sound = "smelting";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"poignee",1},{"detente",1},{"percuteur",1},{"woodp",3},{"steel",2}};
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

	class weapon_AKM_1: weapon_ak_1
	{
		name = "Arme : AKM (1)";
		require[] = {{"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",4},{"steel",10}};
		receive[] = {{},{"Skyline_AKM_01_F"},0};
		class target {};
		class factions: factions {};
	};
	class weapon_AKM_2: weapon_AKM_1
	{
		name = "Arme : AKM (2)";
		receive[] = {{},{"Skyline_AKM_Compact_01_F"},0};
		class target {};
		class factions: factions {};
	};
	class magazine_AKM: magazine_ak
	{
		name = "Munitions : AKM";
		require[] = {{"bullet",30},{"magazine",1}};
		receive[] = {{},{"30Rnd_762x39_AKM"},0};
		class target {};
		class factions: factions {};
	};
	class scope_AKM: scope_ak
	{
		name = "Viseur : AKM";
		require[] = {{"steel",3},{"glass",2}};
		receive[] = {{},{"optic_Aco_smg"},0};
		time_per_item = 15;
		class target {};
		class factions: factions {};
	};

	class weapon_mosin_1: weapon_ak_1
	{
		name = "Arme : Mosin";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",6},{"steel",1}};
		receive[] = {{},{"Skyline_Mosin9130_01_F"},0};
		class target {};
		class factions: factions {};
	};
	class weapon_mosin_2: weapon_AKM_1
	{
		name = "Arme : Mosin baïonnette";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",6},{"steel",2}};
		receive[] = {{},{"Skyline_Mosin9130_Bayonette_01_F"},0};
		class target {};
		class factions: factions {};
	};
	class magazine_mosin: magazine_ak
	{
		name = "Munitions : Mosin";
		require[] = {{"bullet",5},{"magazine",1}};
		receive[] = {{},{"5Rnd_762x54_Mosin"},0};
		class target {};
		class factions: factions {};
	};

	class weapon_m21: weapon_ak_1
	{
		name = "Arme : M21";
		require[] = {{"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",4},{"steel",12}};
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
		require[] = {{"steel",10},{"glass",3}};
		receive[] = {{},{"hlc_optic_LRT_m14"},0};
		time_per_item = 30;
		class target {};
		class factions: factions {};
	};

	class weapon_cz: weapon_ak_1
	{
		name = "Arme : Fusil CZ550";
		require[] = {{"canon",1},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",1},{"culasse",1},{"woodp",6},{"steel",1}};
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
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"percuteur",1},{"carcasse",1},{"bloc_culasse",1},{"steel",1}};
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

	class weapon_deagle_normal: weapon_ak_1
	{
		name = "Arme : Deagle";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"marteau",1},{"barillet",1},{"ironp",5},{"steel",6},{"alu",2}};
		receive[] = {{},{"RH_deagle"},0};
		time_per_item = 20;
		class target {};
		class factions: factions {};
	};
	class weapon_deagle_gold: weapon_deagle_normal
	{
		name = "Arme : Deagle plaqué Or";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"marteau",1},{"barillet",1},{"ironp",5},{"steel",2},{"goldbar",1}};
		receive[] = {{},{"RH_Deagleg"},0};
		time_per_item = 60;
		class target {};
		class factions: factions {};
	};
	class magazine_deagle: magazine_ak
	{
		name = "Munitions : Deagle";
		require[] = {{"bullet",7},{"magazine",1}};
		receive[] = {{},{"RH_7Rnd_50_AE"},0};
		class target {};
		class factions: factions {};
	};

	class weapon_tracker: weapon_ak_1
	{
		name = "Arme : Revolver Tracker";
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"marteau",1},{"barillet",1},{"ironp",2}};
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
	class magazine_tracker: magazine_ak
	{
		name = "Munitions : Revolver Tracker";
		require[] = {{"bullet",6},{"magazine",1}};
		receive[] = {{},{"RH_6Rnd_45ACP_Mag"},0};
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
		require[] = {{"canon",2},{"crosse_wood",1},{"garde_main_wood",1},{"detente",1},{"percuteur",2},{"woodp",5},{"steel",2}};
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
		require[] = {{"canon",1},{"poignee",1},{"detente",1},{"percuteur",1},{"carcasse",1},{"bloc_culasse",1},{"marteau",1},{"ironp",2}};
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
		require[] = { {"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"poignee",1},{"detente",1},{"percuteur",1},{"steel",2}};
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
		require[] = { {"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"poignee",1},{"detente",1},{"percuteur",1},{"steel",3}};
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

	class weapon_ump: weapon_b95
	{
		name = "Arme : UMP45";
		require[] = {{"canon",1},{"crosse_steel",1},{"garde_main_steel",1},{"poignee",1},{"detente",1},{"percuteur",1},{"steel",5}};
		receive[] = {{},{"Skyline_UMP45_01_F"},0};
		time_per_item = 40;
		class factions: factions {};
	};
	class magazine_ump: magazine_b95
	{
		name = "Munitions : UMP45";
		require[] = {{"bullet",25},{"magazine",1}};
		receive[] = {{},{"25Rnd_45ACP_Mag"},0};
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
