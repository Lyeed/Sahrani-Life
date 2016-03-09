class ALYSIA_PROCESS
{
	// Sons disponibles = cement_mix / collectoil / cooking / drug_process / salt_process / smelting
	class wood
	{
		name = "Scierie";
		sound = "smelting";
		require[] =
		{
			{"wood", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"woodp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"woodp", 5}
		};
		receive[] =
		{
			/* VIRTUAL */{{"furniture", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"sand", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"glass", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"sand"};
			};
		};
	};

	class seringue
	{
		name = "Fonte du verre en seringues";
		sound = "smelting";
		require[] =
		{
			{"glass", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"seringue", 2}},
			/* ARMA */{},
			/* CASH */0
		};
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

	class iron
	{
		name = "Fonte du fer";
		sound = "smelting";
		require[] =
		{
			{"iron", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"ironp", 1}, {"soufre", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"platine", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"platinep", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"cannabis", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"marijuana", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"heroin", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"heroinp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"heroinp", 1}, {"seringue", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"heroinps", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"cocaine", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"cocainep", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"cocainep", 1}, {"glass", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"cocainepc", 2}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"meth", 1},{"hsoufre", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"methp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"soufre", 1},{"water", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"hsoufre", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"frag_1", 1}, {"frag_2", 1}, {"frag_3", 1}, {"frag_4", 1}, {"frag_5", 1}, {"frag_6", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"artefact_R", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"tabac", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"cigarette", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"tabac", 2}
		};
		receive[] =
		{
			/* VIRTUAL */{{"cigare", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"copper", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"copperp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"cotton", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"cottonp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 4;
		time_default = 6;
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
		require[] =
		{
			{"goldnuggets", 40}
		};
		receive[] =
		{
			/* VIRTUAL */{{"goldbar", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		require[] =
		{
			{"salt", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"saltp", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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

	class brique
	{
		name = "Traitement de l'argile";
		sound = "salt_process";
		require[] =
		{
			{"clay", 2}
		};
		receive[] =
		{
			/* VIRTUAL */{{"brique", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"company_construction"};
			};
		};
	};

	class bauxite
	{
		name = "Traitement du bauxite";
		sound = "salt_process";
		require[] =
		{
			{"baux", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"alu", 1}},
			/* ARMA */{},
			/* CASH */0
		};
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
		name = "Distillerie Grozdova";
		sound = "smelting";
		require[] =
		{
			{"raisin", 2}, {"bouteillevide", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"grozdova", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	
	class Distillerie_Slivovica
	{
		name = "Distillerie Slivovica";
		sound = "smelting";
		require[] =
		{
			{"Prune", 2}, {"bouteillevide", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"slivovica", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 3;
		time_default = 5;
		class target {};
		class factions
		{
			class CIV {};
		};
	};
	
	class Cimenttr
	{
		name = "Traitement de la pierre";
		sound = "salt_process";
		require[] =
		{
			{"pierre", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"ciment", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 5;
		time_default = 8;
		class target {};
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
		require[] =
		{
			{"oilu", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"sp98", 2}, {"sp95", 1}, {"gpl", 1}, {"kerosene", 1}, {"gazole", 3}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 12;
		time_default = 8;
		class target {};
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
		require[] =
		{
			{"glass", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"bouteillevide", 2}},
			/* ARMA */{},
			/* CASH */0
		};
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

	class chair_wood
	{
		name = "Fabrication de chaises (bois)";
		require[] =
		{
			{"woodp", 8}
		};
		receive[] =
		{
			{{"chair_wood", 1}},
			{},
			0
		};
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
		require[] =
		{
			{"woodp", 15}
		};
		receive[] =
		{
			{{"table_wood", 1}},
			{},
			0
		};
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

	class steel
	{
		name = "Fonte de l'acier";
		sound = "smelting";
		require[] =
		{
			{"ironp", 1}, {"coal", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"acier", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 12;
		time_default = 8;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"company_foundry"};
			};
		};
	};

	/* Crafting des pièces d'armes */

	class bullet
	{
		name = "Moulage de balles";
		sound = "smelting";
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"bullet", 30}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"buckshot", 5}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"magazine", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 12;
		time_default = 8;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"barillet", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"canon", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"woodp", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"crosse_wood", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"crosse_steel", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"woodp", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"garde_main_wood", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"garde_main_steel", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1},
			{"woodp", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"poignee", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"detente", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"percuteur", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"carcasse", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"bloc_culasse", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"marteau", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
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
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"culasse", 2}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 8;
		time_default = 2;
		class target {};
		class factions
		{
			class CIV
			{
				licenses[] = {"company_weapon"};
			};
		};
	};

	/* Crafting des armes */
	class weapon_thompson
	{
		name = "Arme : Fusil Thompson";
		sound = "smelting";
		require[] =
		{
			{"canon", 1},
			{"crosse_wood", 1},
			{"garde_main_wood", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"woodp", 10},
			{"ironp", 3},
			{"steel", 5}
		};
		receive[] =
		{
			{},
			{"wc_us_smg_m1a1"},
			0
		};
		time_per_item = 50;
		time_default = 10;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class magazine_thompson: weapon_thompson
	{
		name = "Munitions : Fusil Thompson";
		require[] =
		{
			{"bullet", 30},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"wc_30Rnd_45acp"},
			0
		};
		time_per_item = 5;
		time_default = 1;
		class target {};
		class factions: factions {};
	};

	class weapon_cz: weapon_thompson
	{
		name = "Arme : Fusil CZ550";
		require[] =
		{
			{"canon", 1},
			{"crosse_wood", 1},
			{"garde_main", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"culasse",1},
			{"woodp", 15},
			{"ironp", 2},
			{"steel", 3}
		};
		receive[] =
		{
			{},
			{"Trixie_CZ550"},
			0
		};
		time_per_item = 50;
		time_default = 10;
		class target {};
		class factions: factions {};
	};
	class magazine_cz: weapon_thompson
	{
		name = "Munitions : Fusil CZ550";
		require[] =
		{
			{"balle", 5},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"Trixie_CZ550_Mag"},
			0
		};
		time_per_item = 5;
		time_default = 3;
		class target {};
		class factions: factions {};
	};

	class weapon_sawed: weapon_thompson
	{
		name = "Arme : Fusil scié";
		require[] =
		{
			{"canon", 2},
			{"crosse_wood", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"woodp", 8},
			{"ironp", 1},
			{"steel", 2}
		};
		receive[] =
		{
			{},
			{"Sawed_Off_Shotgun"},
			0
		};
		time_per_item = 30;
		time_default = 10;
		class target {};
		class factions: factions {};
	};
	class magazine_sawed: weapon_thompson
	{
		name = "Munitions : Fusil scié";
		require[] =
		{
			{"buckshot", 10},
			{"chargeur",1}
		};
		receive[] =
		{
			{},
			{"2Rnd_Sawed_Off_Shotgun_Pellets"},
			0
		};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions: factions {};
	};

	class magazine_tec: weapon_thompson
	{
		name = "Munitions : Pistolet Tec9";
		require[] =
		{
			{"balle", 32},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"RH_32Rnd_9x19_tec"},
			0
		};
		time_per_item = 5;
		time_default = 6;
		class target {};
		class factions: factions {};
	};
	class weapon_tec: weapon_thompson
	{
		name = "Arme : Pistolet Tec9";
		require[] =
		{
			{"canon", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"carcasse", 1},
			{"bloc_culasse", 1},
			{"ironp", 2},
			{"steel", 3}
		};
		receive[] =
		{
			{},
			{"RH_tec9"},
			0
		};
		time_per_item = 30;
		time_default = 10;
		class target {};
		class factions: factions {};
	};

	class magazine_tracker: weapon_thompson
	{
		name = "Munitions : Revolver Tracker";
		require[] =
		{
			{"balle", 6},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"RH_6Rnd_45ACP_Mag"},
			0
		};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions: factions {};
	};
	class weapon_tracker: weapon_thompson
	{
		name = "Arme : Revolver Tracker";
		require[] =
		{
			{"canon", 1},
			{"poignee", 1},
			{"detente", 1},
			{"marteau", 1},
			{"barillet", 1},
			{"ironp", 2},
			{"steel", 3}
		};
		receive[] =
		{
			{},
			{"RH_ttracker"},
			0
		};
		time_per_item = 30;
		time_default = 10;
		class target {};
		class factions: factions {};
	};
	class weapon_tracker_gold: weapon_thompson
	{
		name = "Arme : Revolver Tracker or";
		require[] =
		{
			{"canon", 1},
			{"poignee", 1},
			{"detente", 1},
			{"marteau", 1},
			{"barillet", 1},
			{"ironp", 2},
			{"goldbar", 1}
		};
		receive[] =
		{
			{},
			{"RH_ttracker_g"},
			0
		};
		time_per_item = 30;
		time_default = 20;
		class target {};
		class factions: factions {};
	};

	class weapon_b95: weapon_thompson
	{
		name = "Arme : Fusil B95";
		sound = "smelting";
		require[] =
		{
			{"canon", 2},
			{"crosse_wood", 1},
			{"garde_main", 1},
			{"detente", 1},
			{"percuteur", 2},
			{"woodp", 10},
			{"ironp", 2},
			{"steel", 3}
		};
		receive[] =
		{
			{},
			{"Skyline_B95"},
			0
		};
		time_per_item = 50;
		time_default = 10;
		class target {};
		class factions: factions {};
	};

	class magazine_b95: weapon_thompson
	{
		name = "Munitions : Fusil B95";
		require[] =
		{
			{"buckshot", 10},
			{"chargeur",1}
		};
		receive[] =
		{
			{},
			{"2Rnd_762x51_Mag_B95"},
			0
		};
		time_per_item = 5;
		time_default = 4;
		class target {};
		class factions: factions {};
	};

	class weapon_cz75: weapon_thompson
	{
		name = "Arme : Pistolet CZ 75";
		require[] =
		{
			{"canon", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"carcasse", 1},
			{"bloc_culasse", 1},
			{"marteau", 1},
			{"ironp", 2},
			{"steel", 3}
		};
		receive[] =
		{
			{},
			{"RH_cz75"},
			0
		};
		time_per_item = 30;
		time_default = 10;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class magazine_cz75: weapon_thompson
	{
		name = "Munitions : Pistolet CZ 75";
		require[] =
		{
			{"balle", 16},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"RH_16Rnd_9x19_CZ"},
			0
		};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions: factions {};
	};

	class weapon_p226: weapon_cz75
	{
		name = "Arme : Pistolet Sig-Sauer P226";
		receive[] =
		{
			{},
			{"RH_p226"},
			0
		};
		class target {};
		class factions: factions {};
	};

	class magazine_p226: weapon_thompson
	{
		name = "Munitions : Pistolet Sig-Sauer P226";
		require[] =
		{
			{"balle", 15},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"RH_15Rnd_9x19_SIG"},
			0
		};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions: factions {};
	};

	class weapon_gsh18: weapon_cz75
	{
		name = "Arme : Pistolet GSh-18";
		receive[] =
		{
			{},
			{"RH_gsh18"},
			0
		};
		class target {};
		class factions: factions {};
	};

	class magazine_gsh18: weapon_thompson
	{
		name = "Munitions : Pistolet GSh-18";
		require[] =
		{
			{"balle", 18},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"RH_18Rnd_9x19_gsh"},
			0
		};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions: factions {};
	};

	class weapon_sdar: weapon_thompson
	{
		name = "Arme : SDAR";
		sound = "smelting";
		require[] =
		{
			{"canon", 1},
			{"crosse_steel", 1},
			{"garde_main", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"ironp", 5},
			{"steel", 5}
		};
		receive[] =
		{
			{},
			{"Fett_SDAR"},
			0
		};
		time_per_item = 50;
		time_default = 10;
		class target {};
		class factions: factions {};
	};

	class magazine_sdar: weapon_thompson
	{
		name = "Munitions : SDAR";
		require[] =
		{
			{"balle", 20},
			{"magazine", 1}
		};
		receive[] =
		{
			{},
			{"Fett_20Rnd_556x45_UW_mag"},
			0
		};
		time_per_item = 5;
		time_default = 5;
		class target {};
		class factions: factions {};
	};

	class opium
	{
		name = "Traitement du pavot";
		sound = "salt_process";
		require[] =
		{
			{"heroin", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"opium", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 2;
		time_default = 3;
		class target {};
		class factions
		{
			class GUER
			{
				rank = 2;
			};
		};
	};
	class morphine: opium
	{
		name = "Traitement de l'opium";
		sound = "salt_process";
		require[] =
		{
			{"opium", 1}, {"seringue", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"SkylineItems_Morphine"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};
	class phenylalanine: opium
	{
		name = "Traitement du blé";
		sound = "salt_process";
		require[] =
		{
			{"wheat", 2}
		};
		receive[] =
		{
			/* VIRTUAL */{{"phenylalanine", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};
	class epinephrine: opium
	{
		name = "Traitement de la phenylalanine";
		sound = "salt_process";
		require[] =
		{
			{"phenylalanine", 1}, {"seringue", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"SkylineItems_Adrenaline"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class bulletproofvest_criminal
	{
		name = "Fabrication de gilet barre-balles";
		sound = "smelting";
		require[] =
		{
			{"cottonp", 10},
			{"steel",4}
		};
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_V_IOTV_BLK"},
			/* CASH */0
		};
		time_per_item = 30;
		time_default = 30;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 1";
		sound = "smelting";
		require[] =
		{
			{"cottonp", 10}
		};
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_ZARATAKI"},
			/* CASH */0
		};
		time_per_item = 20;
		time_default = 20;
		class target {};
		class factions
		{
			class CIV {};
		};
	};

	class clothing_criminal2 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 2";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_ZARATAKI2"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal3 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 3";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_ZARATAKI3"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};

	};

	class clothing_criminal4 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 4";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_U_taki_BL"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal5 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 5";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_U_taki_COY"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal6 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 6";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_U_taki_wh"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal7 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 7";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_T_camo_3c_BG"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal8 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 8";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_T_camo_desert_marpat_BG"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal9 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 9";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_T_camo_Wood_BG"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class clothing_criminal10 : clothing_criminal1
	{
		name = "Fabrication de tenue criminelle 10";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"TRYK_U_B_PCUHsW3"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};
	
	class goggles_criminal1 : clothing_criminal1
	{
		name = "Fabrication cagoule criminelle 1";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"G_Balaclava_blk"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class goggles_criminal2 : clothing_criminal1
	{
		name = "Fabrication masque à gaz";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"Mask_M40"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

	class goggles_criminal3 : clothing_criminal1
	{
		name = "Fabrication masque de voleur";
		receive[] =
		{
			/* VIRTUAL */{},
			/* ARMA */{"Masque_Solitaire"},
			/* CASH */0
		};
		class target {};
		class factions: factions {};
	};

};