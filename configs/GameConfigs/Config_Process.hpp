class ALYSIA_PROCESS
{
	// Sons disponibles = cement_mix / collectoil / cooking / drug_process / salt_process / smelting
	class wood
	{
		name = "Scierie";
		sound = "smelting";
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {"marijuana"};
			};
		};
	};

	class heroin
	{
		name = "Traitement de l'héroine";
		sound = "drug_process";
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 0;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		requiere_target = 1;
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
		class factions
		{
			class CIV
			{
				rank = 0;
				licenses[] = {};
			};
		};
	};
};
