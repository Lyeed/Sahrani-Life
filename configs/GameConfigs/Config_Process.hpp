class ALYSIA_PROCESS
{

	class wood
	{
		name = "Scierie";
		license = "wood";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"wood", 1}};
		receive[] = {{"woodp", 1}};
		time_per_item = 2;
		time_default = 4;
		sides[] = {"CIV"};
		//rank = 0; if sides != CIV; will check if player rank >= rank
	};

	class furniture
	{
		name = "Menuiserie";
		license = "wood";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"woodp", 5}};
		receive[] = {{"furniture", 1}};
		time_per_item = 2;
		time_default = 4;
		sides[] = {"CIV"};
	};

	class sand
	{
		name = "Fonte du verre";
		license = "sand";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"sand", 1}};
		receive[] = {{"glass", 1}};
		time_per_item = 1;
		time_default = 3;
		sides[] = {"CIV"};
	};

	class seringue
	{
		name = "Fonte du verre en seringues";
		license = "sand";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"glass", 1}};
		receive[] = {{"seringue", 2}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class iron
	{
		name = "Fonte du fer";
		license = "iron";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"iron", 1}};
		receive[] = {{"ironp", 1}, {"soufre", 1}};
		time_per_item = 2;
		time_default = 4;
		sides[] = {"CIV"};
	};

	class platine1
	{
		name = "Fonte du platine";
		license = "platine";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"platine", 1}};
		receive[] = {{"platinep", 1}};
		time_per_item = 2;
		time_default = 4;
		sides[] = {"CIV"};
	};

	class platine2
	{
		name = "Enrichissement du platine";
		license = "platine";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"platinep", 1}, {"soufre", 1}};
		receive[] = {{"platinepa", 1}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class marijuana
	{
		name = "Traitement du cannabis";
		license = "marijuana";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"cannabis", 1}};
		receive[] = {{"marijuana", 1}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class heroin
	{
		name = "Traitement de l'héroine";
		license = "";
		sound = "processoil";
		requiere_target = 1;
		require[] = {{"heroin", 1}};
		receive[] = {{"heroinp", 1}};
		time_per_item = 4;
		time_default = 8;
		sides[] = {"CIV"};
	};

	class seringueheroin
	{
		name = "Traitement des seringues d'héroine";
		license = "";
		sound = "processoil";
		requiere_target = 1;
		require[] = {{"heroinp", 1}, {"seringue", 1}};
		receive[] = {{"heroinps", 1}};
		time_per_item = 2;
		time_default = 4;
		sides[] = {"CIV"};
	};
	
	class cocaine
	{
		name = "Traitement de la cocaine";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {{"cocaine", 1}};
		receive[] = {{"cocainep", 1}};
		time_per_item = 4;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class cocainec
	{
		name = "Coupe de la cocaine";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {{"cocainep", 1}, {"glass", 1}};
		receive[] = {{"cocainepc", 2}};
		time_per_item = 2;
		time_default = 3;
		sides[] = {"CIV"};
	};

	class meth
	{
		name = "Traitement de la meth";
		license = "";
		sound = "cooking";
		requiere_target = 1;
		require[] = {{"meth", 1},{"hsoufre", 1}};
		receive[] = {{"methp", 1}};
		time_per_item = 5;
		time_default = 10;
		sides[] = {"CIV"};
	};

	class soufre
	{
		name = "Hydratation du soufre";
		license = "";
		sound = "processoil";
		requiere_target = 0;
		require[] = {{"soufre", 1},{"water", 1}};
		receive[] = {{"hsoufre", 1}};
		time_per_item = 1;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class archeologue
	{
		name = "Rénovation";
		license = "archeologie";
		sound = "cooking";
		requiere_target = 1;
		require[] = {{"artefact", 1}};
		receive[] = {{"artefact_R", 1}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};

	class tabac
	{
		name = "Tubage de cigarettes";
		license = "tabac";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"tabac", 1}};
		receive[] = {{"cigarette", 1}};
		time_per_item = 4;
		time_default = 6;
		sides[] = {"CIV"};
	};	

	class copper
	{
		name = "Traitement du cuivre";
		license = "copper";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"copper", 1}};
		receive[] = {{"copperp", 1}};
		time_per_item = 4;
		time_default = 6;
		sides[] = {"CIV"};
	};

	class cotton
	{
		name = "Traitement du cotton";
		license = "";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"cotton", 1}};
		receive[] = {{"cottonp", 1}};
		time_per_item = 4;
		time_default = 6;
		sides[] = {"CIV"};
	};

	class gold
	{
		name = "Fonte de l'or";
		license = "gold";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"goldnuggets", 40}};
		receive[] = {{"goldbar", 1}};
		time_per_item = 1;
		time_default = 3;
		sides[] = {"CIV"};
	};

	class salt
	{
		name = "Traitement du sel";
		license = "salt";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"salt", 1}};
		receive[] = {{"saltp", 1}};
		time_per_item = 1;
		time_default = 3;
		sides[] = {"CIV"};
	};

	class pottery
	{
		name = "Traitement de l'argile";
		license = "pottery";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"clay", 2}};
		receive[] = {{"pottery", 1}};
		time_per_item = 1;
		time_default = 3;
		sides[] = {"CIV"};
	};

	class bauxite
	{
		name = "Traitement du bauxite";
		license = "bauxite";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"baux", 1}};
		receive[] = {{"alu", 1}};
		time_per_item = 1;
		time_default = 3;
		sides[] = {"CIV"};
	};
	
	class Distillerie_Grozdova
	{
		name = "Distillerie Grozdova";
		license = "";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"raisin", 2}, {"bouteillevide", 1}};
		receive[] = {{"grozdova", 1}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};
	
	class Distillerie_Slivovica
	{
		name = "Distillerie Slivovica";
		license = "";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"Prune", 2}, {"bouteillevide", 1}};
		receive[] = {{"slivovica", 1}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};
	
	class Cimenttr
	{
		name = "Traitement de la pierre";
		license = "Pierretr";
		sound = "salt_process";
		requiere_target = 1;
		require[] = {{"pierre", 1}};
		receive[] = {{"ciment", 1}};
		time_per_item = 5;
		time_default = 8;
		sides[] = {"CIV"};
	};

	class oil
	{
		name = "Traitement du pétrole";
		license = "oil";
		sound = "processoil";
		requiere_target = 1;
		require[] = {{"oilu", 1}};
		receive[] = {{"sp98", 2}, {"sp95", 1}, {"gpl", 1}, {"kerosene", 1}, {"gazole", 3}};
		time_per_item = 12;
		time_default = 8;
		sides[] = {"CIV"};
	};

	class bouteille
	{
		name = "Fonte du verre en Bouteille";
		license = "sand";
		sound = "smelting";
		requiere_target = 1;
		require[] = {{"glass", 1}};
		receive[] = {{"bouteille", 2}};
		time_per_item = 3;
		time_default = 5;
		sides[] = {"CIV"};
	};
};
