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
				rank = 0;
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
				rank = 0;
				licenses[] = {"wood"};
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
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
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
				rank = 0;
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
				rank = 0;
				licenses[] = {"iron"};
			};
		};
	};

	class platine1
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
		time_per_item = 2;
		time_default = 4;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {"platine"};
			};
		};
	};

	class platine2
	{
		name = "Enrichissement du platine";
		sound = "smelting";
		require[] =
		{
			{"platinep", 1}, {"soufre", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"platinepa", 1}},
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
				rank = 0;
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
		time_per_item = 1;
		time_default = 5;
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class archeologue
	{
		name = "Rénovation";
		sound = "cooking";
		require[] =
		{
			{"frag_1", 1}, {"frag_2", 1}, {"frag_3", 1}, {"frag_4", 1}, {"frag_5", 1}, {"frag_6", 1}, {"frag_7", 1}, {"frag_8", 1}
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
				rank = 0;
				licenses[] = {"archeologie"};
			};
		};
	};

	class tabac
	{
		name = "Tubage de cigarettes";
		sound = "smelting";
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
		time_per_item = 4;
		time_default = 6;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {"tabac"};
			};
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
				rank = 0;
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
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
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {"salt"};
			};
		};
	};

	class pottery
	{
		name = "Traitement de l'argile";
		sound = "salt_process";
		require[] =
		{
			{"clay", 2}
		};
		receive[] =
		{
			/* VIRTUAL */{{"pottery", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {"pottery"};
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
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
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
				rank = 0;
				licenses[] = {"Pierretr", "company_construction"};
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
				rank = 0;
				licenses[] = {"oil", "company_fuel"};
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
				rank = 0;
				licenses[] = {"sand"};
			};
		};
	};

	class artefact
	{
		name = "Reconstitution d'artefact";
		sound = "salt_process";
		require[] =
		{
			{"frag_1", 1}, {"frag_2", 1}, {"frag_3", 1}, {"frag_4", 1}, {"frag_5", 1}, {"frag_6", 1}, {"frag_7", 1}, {"frag_8", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"artefact_R", 1}},
			/* ARMA */{},
			/* CASH */0
		};
		time_per_item = 1;
		time_default = 3;
		class target {};
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
			};
		};
	};

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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class crosse
	{
		name = "Fabrication de crosses";
		sound = "smelting";
		require[] =
		{
			{"steel", 1},
			{"woodp", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"crosse", 2}},
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
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class garde_main
	{
		name = "Fabrication de gardes-mains";
		sound = "smelting";
		require[] =
		{
			{"woodp", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"garde_main", 2}},
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class levier
	{
		name = "Moulage de leviers";
		sound = "smelting";
		require[] =
		{
			{"steel", 1}
		};
		receive[] =
		{
			/* VIRTUAL */{{"levier", 2}},
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
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
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class weapon_thompson
	{
		name = "Arme : Thompson";
		sound = "smelting";
		require[] =
		{
			{"canon", 1},
			{"crosse", 1},
			{"garde_main", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"levier", 1},
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
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
		};
	};

	class magazine_thompson: weapon_thompson
	{
		name = "Munitions : Thompson";
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
	};

	class weapon_cz: weapon_thompson
	{
		name = "Arme : CZ550";
		require[] =
		{
			{"canon", 1},
			{"crosse", 1},
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
	};
	class magazine_cz: weapon_thompson
	{
		name = "Munitions : CZ550";
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
	};

	class weapon_sawed: weapon_thompson
	{
		name = "Arme : Fusil scié";
		require[] =
		{
			{"canon", 2},
			{"crosse", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"levier",1},
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
	};

	class magazine_tec: weapon_thompson
	{
		name = "Munitions : Tec9";
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
	};
	class weapon_tec: weapon_thompson
	{
		name = "Arme : Tec9";
		require[] =
		{
			{"canon", 1},
			{"poignee", 1},
			{"detente", 1},
			{"percuteur", 1},
			{"carcasse", 1},
			{"bloc_culasse", 1},
			{"levier", 1},
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
	};

	class magazine_tracker: weapon_thompson
	{
		name = "Munitions : Tracker";
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
	};
	class weapon_tracker: weapon_thompson
	{
		name = "Arme : Tracker";
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
	};
	class weapon_tracker_gold: weapon_thompson
	{
		name = "Arme : Tracker or";
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
	};
};
