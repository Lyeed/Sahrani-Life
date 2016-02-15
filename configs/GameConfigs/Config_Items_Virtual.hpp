class ALYSIA_ITEMS
{
	class raisin
	{
		name        = "Raisin";
		weight      = 1;
		price_buy   = 10;
		price_sell  = 8;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\raisin.paa";
		class food
		{
			hunger = 10;
			thirst = 2;
			sound = "eat";
		};
	};

	class illegal_money
	{
		name        = "kn (argent sale)";
		weight      = 0;
		illegal     = 1;
		removable   = 0;
		image       = "alysia_items_virtual\data\money.paa";
	};

	class engrais
	{
		name        = "Engrais";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\engrais.paa";
	};

	class goldbar
	{
		name        = "Lingot d'or";
		weight      = 40;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\lingot_or.paa";
		class market
		{
			max = 2750;
			min = 1500;
			mult = 2;
			affect[] = {"ironp", "soufre", "platinep", "souffre", "hsoufre", "copperp", "alu","steel"};
		};
	};

	class water
	{
		name        = "Bouteille d'eau";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bouteille_eau.paa";
		class food
		{
			thirst = 40;
			hunger = 0;
			sound = "drink";
		};
	};

	class lockpick
	{
		name        = "Kit de crochetage";
		weight      = 6;
		price_buy   = 600;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\kit_crochetage.paa";
	};

	class handcuffs
	{
		name        = "Menottes";
		weight      = 2;
		price_buy   = 45;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\menottes.paa";
	};

	class handcuffkeys
	{
		name        = "Clés de menottes";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\clee_menottes.paa";
	};

	class patch
	{
		name        = "Patch anti addiction";
		weight      = 1;
		price_buy   = 400;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\patch_anti_addiction.paa";
		class use
		{
			action = "[] call AlysiaClient_fnc_patch;";
		};
	};

	class nitro
	{
		name        = "Nitro";
		weight      = 4;
		price_buy   = 500;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\nitroboost.paa";
	};

	class storage_small
	{
		name        = "Coffre (Petit)";
		weight      = 10;
		price_buy   = 20000;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\coffre.paa";
		class use
		{
			action = "['storage_small'] spawn AlysiaClient_fnc_storageBox;";
		};
	};
	class storage_medium: storage_small
	{
		name        = "Coffre (Moyen)";
		weight      = 20;
		price_buy   = 31000;
		class use
		{
			action = "['storage_medium'] spawn AlysiaClient_fnc_storageBox;";
		};
	};
	class storage_large: storage_small
	{
		name        = "Coffre (Grand)";
		weight      = 30;
		price_buy   = 43000;
		class use
		{
			action = "['storage_large'] spawn AlysiaClient_fnc_storageBox;";
		};
	};
	class storage_stock: storage_small
	{
		name        = "Coffre (Stock)";
		weight      = 35;
		price_buy   = 50000;
		class use
		{
			action = "['storage_stock'] spawn AlysiaClient_fnc_storageBox;";
		};
	};
	
	class barriere
	{
		name        = "Barrière";
		weight      = 6;
		price_buy   = 48;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\barriere.paa";
		class use
		{
			action = "['barriere'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class cone
	{
		name        = "Cône";
		weight      = 3;
		price_buy   = 10;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cone.paa";
		class use
		{
			action = "['cone'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class table_wood
	{
		name        = "Table en bois";
		weight      = 30;
		price_buy   = 100;
		price_sell  = 100;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\table_wood.paa";
		class use
		{
			action = "['table_bois'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class chair_wood
	{
		name        = "Chaise en bois";
		weight      = 10;
		price_buy   = 10;
		price_sell  = 10;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\chair_wood.paa";
		class use
		{
			action = "['chaise_bois'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class spikeStrip
	{
		name        = "Herse";
		weight      = 5;
		price_buy   = 136;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\herse.paa";
		class use
		{
			action = "['spikeStrip'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class tabac
	{
		name        = "Tabac";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\tabac.paa";
	};

	class tabac_seed
	{
		name        = "Graine (tabac)";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_tabac.paa";
	};

	class cigare
	{
		name        = "Cigare";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cigare.paa";
		license     = "tabac";
		class market
		{
			max = 176;
			min = 120;
			mult = 2;
			affect[] = {};
		};
	};

	class cigarette
	{
		name        = "Cigarette";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\cigarette.paa";
		license     = "tabac";
		class market
		{
			max = 57;
			min = 32;
			mult = 2;
			affect[] = {};
		};
	};

	class objvaleur
	{
		name        = "Objet de valeur";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\objet_de_valeur.paa";
		class market
		{
			max = 308;
			min = 200;
			mult = 4;
			affect[] = {};
		};
	};

	class artefact
	{
		name        = "Artefact";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\artefact.paa";
		license     = "archeologie";
		class market
		{
			max = 5632;
			min = 475;
			mult = 2;
			affect[] = {};
		};
	};

	class artefact_R
	{
		name        = "Artefact rénové";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\artefact_R.paa";
		license     = "archeologie";
		class market
		{
			max = 1100;
			min = 300;
			mult = 4;
			affect[] = {};
		};
	};

	class wood
	{
		name        = "Bois";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\tas_bois.paa";
	};

	class woodp
	{
		name        = "Planche";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\planche.paa";
		license     = "wood";
		class market
		{
			max = 23;
			min = 15;
			mult = 1;
			affect[] = {"furniture", "glass", "brique", "saltp", "cottonp", "ciment", "coal"};
		};
	};

	class furniture
	{
		name        = "Meuble";
		weight      = 10;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\meuble.paa";
		class market
		{
			max = 660;
			min = 500;
			mult = 2;
			affect[] = {"woodp", "glass", "brique", "saltp", "cottonp", "ciment", "coal"};
		};
	};

	class iron
	{
		name        = "Minerai de fer";
		weight      = 5;
		price_buy   = 0;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\minerai_fer.paa";
	};

	class ironp
	{
		name        = "Lingot de fer";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\lingot_fer.paa";
		license     = "iron";
		class market
		{
			max = 170;
			min = 125;
			mult = 3;
			affect[] = {"goldbar", "soufre", "platinep", "souffre", "hsoufre", "copperp", "alu","steel"};
		};
	};

	class soufre
	{
		name        = "Soufre";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\soufre.paa";
		class market
		{
			max = 19;
			min = 10;
			mult = 2;
			affect[] = {"goldbar", "ironp", "platinep", "hsoufre", "copperp", "alu"};
		};
	};

	class platine
	{
		name        = "Minerai de platine";
		weight      = 7;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\minerai_platine.paa";
	};

	class platinep
	{
		name        = "Lingot de platine";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\lingot_platine.paa";
		license     = "platine";
		class market
		{
			max = 286;
			min = 200;
			mult = 4;
			affect[] = {"goldbar", "ironp", "soufre", "hsoufre", "copperp", "alu"};
		};
	};

	class cocaine_seed
	{
		name        = "Graine (coca)";
		weight      = 1;
		price_buy   = 20;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\graines_coca.paa";
	};

	class cocaine
	{
		name        = "Feuille de coca";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\coca.paa";
	};

	class cocainep
	{
		name        = "Cocaïne pure";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cocaine.paa";
		class market
		{
			max = 468;
			min = 350;
			mult = 3;
			affect[] = {"methp", "cocainepc", "heroinp", "heroinps", "marijuana", "opium"};
		};
		class use
		{
			action = "['cocainep'] call AlysiaClient_fnc_drugConsume;";
		};
	};

	class cocainepc
	{
		name        = "Cocaïne coupée";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cocaine_coupe.paa";
		class market
		{
			max = 330;
			min = 210;
			mult = 4;
			affect[] = {"methp", "cocainep", "heroinp", "heroinps", "marijuana", "opium"};
		};
		class use
		{
			action = "['cocainepc'] call AlysiaClient_fnc_drugConsume;";
		};
	};

	class heroin_seed
	{
		name        = "Graine (pavot)";
		weight      = 1;
		price_buy   = 25;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_pavot.paa";
	};

	class heroin
	{
		name        = "Fleur de pavot";
		weight      = 6;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\pavot.paa";
	};

	class heroinp
	{
		name        = "Heroïne pure";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 640;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\heroine.paa";
		class market
		{
			max = 550;
			min = 400;
			mult = 2;
			affect[] = {"methp", "cocainep", "cocainepc", "heroinps", "marijuana", "opium"};
		};
	};

	class heroinps
	{
		name        = "Seringue d'héroïne pure";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\seringue_heroine.paa";
		class market
		{
			max = 358;
			min = 250;
			mult = 5;
			affect[] = {"methp", "cocainep", "cocainepc", "heroinp", "marijuana", "opium"};
		};
		class use
		{
			action = "['heroinps'] call AlysiaClient_fnc_drugConsume;";
		};
	};

	class seringue
	{
		name        = "Seringue";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\seringue_vide.paa";
	};

	class meth_seed
	{
		name        = "Graine (Ephedra)";
		weight      = 1;
		price_buy   = 35;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\graines_ephedra.paa";
	};

	class hsoufre
	{
		name        = "Hydrate de soufre";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\soufre_hydrate.paa";
		class market
		{
			max = 25;
			min = 15;
			mult = 2;
			affect[] = {"goldbar", "ironp", "soufre", "platinep", "copperp", "alu"};
		};
	};

	class meth
	{
		name        = "Feuille d'ephedra";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\ephedra.paa";
	};

	class methp
	{
		name        = "Méthamphétamine";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\methamphetamine.paa";
		class market
		{
			max = 990;
			min = 650;
			mult = 4;
			affect[] = {"cocainep", "cocainepc", "heroinp", "heroinps", "marijuana", "opium"};
		};
		class use
		{
			action = "['methp'] call AlysiaClient_fnc_drugConsume;";
		};
	};

	class cannabis_seed
	{
		name        = "Graine (cannabis)";
		weight      = 1;
		price_buy   = 18;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\graines_canabis.paa";
	};

	class cannabis
	{
		name        = "Cannabis";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\canabis.paa";
	};

	class marijuana
	{
		name        = "Marijuana";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\marijuana.paa";
		license     = "marijuana";
		class market
		{
			max = 588;
			min = 400;
			mult = 3;
			affect[] = {"methp", "cocainep", "cocainepc", "heroinp", "heroinps", "opium"};
		};
		class use
		{
			action = "['marijuana'] call AlysiaClient_fnc_drugConsume;";
		};
	};

	class oilu
	{
		name        = "Pétrole";
		weight      = 10;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\petrole.paa";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class fishingpoles
	{
		name        = "Filet de pêche";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\filet_peche.paa";
	};

	class bean_seed
	{
		name        = "Graine (haricot)";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_haricot.paa";
	};

	class bean
	{
		name        = "Haricot";
		weight      = 2;
		removable   = 1;
		image       = "alysia_items_virtual\data\haricot.paa";
		class market
		{
			max = 35;
			min = 23;
			mult = 3;
			affect[] = {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine", "corn", "cotton", "wheat", "patate"};
		};
	};

	class corn_seed
	{
		name        = "Graine (maïs)";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_mais.paa";
	};

	class corn
	{
		name        = "Maïs";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\mais.paa";
		class market
		{
			max = 37;
			min = 26;
			mult = 3;
			affect[] = {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine", "bean", "cotton", "wheat", "patate"};
		};
	};

	class cotton_seed
	{
		name        = "Graine (coton)";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_coton.paa";
	};

	class cotton
	{
		name        = "Coton";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\coton.paa";
		class market
		{
			max = 39;
			min = 31;
			mult = 2;
			affect[] = {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine", "bean", "corn", "wheat", "patate"};
		};
	};

	class sand
	{
		name        = "Sable";
		weight      = 3;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sable.paa";
	};

	class glass
	{
		name        = "Verre";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\verre.paa";
		license     = "sand";
		class market
		{
			max = 154;
			min = 110;
			mult = 3;
			affect[] = {"woodp", "furniture", "brique", "saltp", "cottonp", "ciment", "coal"};
		};
	};

	class cerealbar
	{
		name        = "Barre de céréale";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\barre_de_cereale.paa";
		class food
		{
			thirst = 0;
			hunger = 50;
			sound = "eat";
		};
	};

	class sparklingwater
	{
		name        = "Eau gazeuse";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bouteille_eau_gazeuse.paa";
		class food
		{
			thirst = 50;
			hunger = 0;
			sound = "eat";
		};
	};

	class prune
	{
		name        = "Prune";
		weight      = 1;
		price_buy   = 9;
		price_sell  = 8;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\prune.paa";
		class food
		{
			hunger = 15;
			thirst = 5;
			sound = "eat";
		};
	};

	class sandwich
	{
		name        = "Sandwich au jambon";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sandwich_jambon.paa";
		class food
		{
			thirst = 0;
			hunger = 40;
			sound = "eat";
		};
	};

	class donut
	{
		name        = "Beignet";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\beignet.paa";
		class food
		{
			thirst = 0;
			hunger = 40;
			sound = "eat";
		};
	};

	class soda
	{
		name        = "Soda";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\soda.paa";
		class food
		{
			thirst = 40;
			hunger = 0;
			sound = "drink";
		};
	};

	class ragout
	{
		name        = "Boite de ragout";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\ragout.paa";
		class food
		{
			thirst = 0;
			hunger = 40;
			sound = "eat";
		};
	};

	class kefir
	{
		name        = "Kéfir";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\kefir.paa";
		class food
		{
			thirst = 40;
			hunger = 0;
			sound = "drink";
		};
	};

	class copper
	{
		name        = "Minerai de cuivre";
		weight      = 3;
		price_buy   = 30;
		price_sell  = 125;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\minerai_cuivre.paa";
	};

	class copperp
	{
		name        = "Lingot de cuivre";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\lingot_cuivre.paa";
		class market
		{
			max = 220;
			min = 160;
			mult = 2;
			affect[] = {"goldbar", "ironp", "soufre", "platinep", "hsoufre", "alu","steel"};
		};
	};

	class clay
	{
		name        = "Argile";
		weight      = 3;
		price_buy   = 0;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\argile.paa";
	};

	class brique
	{
		name        = "Brique";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\brique.paa";
		class market
		{
			max = 112;
			min = 70;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "saltp", "cottonp", "ciment", "coal"};
		};
	};

	class baux
	{
		name        = "Minerai de bauxite";
		weight      = 5;
		price_buy   = 0;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\minerai_bauxite.paa";
	};

	class alu
	{
		name        = "Lingot d'aluminium";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\alluminium.paa";
		class market
		{
			max = 242;
			min = 170;
			mult = 2;
			affect[] = {"goldbar", "ironp", "soufre", "platinep", "hsoufre", "copperp","steel"};
		};
	};

	class moule
	{
		name        = "Moule";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 9;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\moule.paa";
	};

	class palourde
	{
		name        = "Palourde";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\palourde.paa";
	};

	class saintjacques
	{
		name        = "Coquilles Saint-Jacques";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 13;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\saint_jacques.paa";
	};

	class bigorneau
	{
		name        = "Bigorneau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 24;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bigorneau.paa";
	};

	class crabe
	{
		name        = "Crabe";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 15;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\crabe.paa";
	};

	class bulot
	{
		name        = "Bulot";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 37;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bulot.paa";
	};

	class anchois
	{
		name        = "Anchois";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 9;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\anchois.paa";
	};

	class bar
	{
		name        = "Bar";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 42;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bar.paa";
	};

	class daurade
	{
		name        = "Daurade";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 20;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\daurade.paa";
	};

	class maquereau
	{
		name        = "Maquereau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 13;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\maquereau.paa";
	};

	class merlu
	{
		name        = "Merlu";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 20;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\merlu.paa";
	};

	class sardine
	{
		name        = "Sardine";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 11;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sardine.paa";
	};

	class salt
	{
		name        = "Sel";
		weight      = 3;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sel.paa";
	};

	class saltp
	{
		name        = "Sel traité";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sel_traiter.paa";
		class market
		{
			max = 165;
			min = 115;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "brique", "cottonp", "ciment", "coal"};
		};
	};

	class goldnuggets
	{
		name        = "Pépite d'or";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\pepite_or.paa";
	};

	class patate
	{
		name        = "Patate";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\patate.paa";
		class market
		{
			max = 42;
			min = 30;
			mult = 2;
			affect[] = {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine", "bean", "corn", "cotton", "wheat"};
		};
	};

	class patate_seed
	{
		name        = "Patate germée";
		weight      = 1;
		illegal     = 0;
		price_buy   = 6;
		price_sell  = 30;
		removable   = 1;
		image       = "alysia_items_virtual\data\patategerme.paa";
	};

	class wheat
	{
		name        = "Blé";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\ble.paa";
		class market
		{
			max = 36;
			min = 25;
			mult = 2;
			affect[] = {"moule", "palourde", "saintjacques", "bigorneau", "crabe", "bulot", "anchois", "bar", "daurade", "maquereau", "merlu", "sardine", "bean", "corn", "cotton", "patate"};
		};
	};

	class wheatseed
	{
		name        = "Graine (blé)";
		weight      = 1;
		price_buy   = 3;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\graine_ble.paa";
	};

	class cottonp
	{
		name        = "Coton traité";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\boule_coton.paa";
		class market
		{
			max = 99;
			min = 65;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "brique", "saltp", "ciment", "coal"};
		};
	};

	class grozdova
	{
		name        = "Bouteille de Grozdova";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bouteille_eau_de_vie_raisin.paa";
		class market
		{
			max = 330;
			min = 220;
			mult = 2;
			affect[] = {};
		};
		class food
		{
			alcool = 0.55;
			thirst = 50;
			hunger = 0;
			sound = "drink";
		};
	};

	class slivovica
	{
		name        = "Bouteille de Slivovica";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bouteille_eau_de_vie_prune.paa";
		class market
		{
			max = 347;
			min = 220;
			mult = 2;
			affect[] = {};
		};
		class food
		{
			alcool = 0.50;
			thirst = 40;
			hunger = 0;
			sound = "drink";
		};
	};

	class coal
	{
		name        = "Charbon";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\charbon.paa";
		class market
		{
			max = 33;
			min = 20;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "brique", "saltp", "cottonp", "ciment"};
		};
	};

	class opium
	{
		name        = "Opium";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\opium.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class sifflet
	{
		name        = "Sifflet";
		weight      = 1;
		price_buy   = 3;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sifflet.paa";
	};

	class bip
	{
		name        = "Télécommande (barrière)";
		weight      = 1;
		price_buy   = 15;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\telecommande_portail.paa";
	};
	
	class pierre
	{
		name        = "Pierre";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\pierre.paa";
	};
	
	class ciment
	{
		name        = "Ciment";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\ciment.paa";
		class market
		{
			max = 165;
			min = 115;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "brique", "saltp", "cottonp", "coal"};
		};
	};

	class medova
	{
		name        = "Bouteille de Medova";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\medova.paa";
		class food
		{
			thirst = 40;
			hunger = -10;
			sound = "drink";
		};
	};

	class cafe
	{
		name        = "Tasse de café";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cafe.paa";
		class food
		{
			thirst = 40;
			hunger = 0;
			sound = "drink";
		};
	};

	class ravioli
	{
		name        = "Ravioli en boite";
		weight      = 1;
		price_buy   = 9;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\ravioli.paa";
		class food
		{
			thirst = 0;
			hunger = 40;
			sound = "eat";
		};
	};

	class cookie
	{
		name        = "Cookie";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\cookie.paa";
		class food
		{
			thirst = 0;
			hunger = 20;
			sound = "eat";
		};
	};

	class petitbeurre
	{
		name        = "Boîte de petits beurres";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\petitbeurre.paa";
		class food
		{
			thirst = 0;
			hunger = 40;
			sound = "eat";
		};
	};

	class croissant
	{
		name        = "Croissant";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\croissant.paa";
		class food
		{
			thirst = 0;
			hunger = 20;
			sound = "eat";
		};
	};

	class pizza
	{
		name        = "Pizza";
		weight      = 1;
		price_buy   = 18;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\pizza.paa";
		class food
		{
			thirst = 0;
			hunger = 70;
			sound = "eat";
		};
	};

	class sp98
	{
		name        = "SansPlomb 98";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sp98.paa";
		license     = "oil";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class sp95
	{
		name        = "SansPlomb 95";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\sp95.paa";
		license     = "oil";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class gazole
	{
		name        = "Gazole";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\gazole.paa";
		license     = "oil";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class gpl
	{
		name        = "GPL";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\gpl.paa";
		license     = "oil";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class kerosene
	{
		name        = "Kéroséne";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\kerosene.paa";
		license     = "oil";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};
	
	class turtle 
	{
		name        = "Viande de tortue";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		price_buy   = 8;
		price_sell  = 0;
		image       = "alysia_items_virtual\data\tortue.paa";
		license     = "";
		class market
		{
			max = 825;
			min = 600;
			mult = 2;
			affect[] = {"woodp", "furniture", "glass", "brique", "saltp", "cottonp", "coal"};
		};
	};

	class bouteillevide
	{
		name        = "Bouteille Vide";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bouteillevide.paa";
	};

	class frag_1
	{
		name        = "Fragment (1)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_1.paa";
	};

	class frag_2
	{
		name        = "Fragment (2)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_2.paa";
	};

	class frag_3
	{
		name        = "Fragment (3)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_3.paa";
	};

	class frag_4
	{
		name        = "Fragment (4)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_4.paa";
	};

	class frag_5
	{
		name        = "Fragment (5)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_5.paa";
	};

	class frag_6
	{
		name        = "Fragment (6)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_6.paa";
	};

	class frag_7
	{
		name        = "Fragment (7)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_7.paa";
	};

	class frag_8
	{
		name        = "Fragment (8)";
		weight      = 1;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\frag_8.paa";
	};

	class destroy_archeo
	{
		name        = "Kit (Archélogie)";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\boite1.paa";
	};
	class destroy_stand
	{
		name        = "Kit (Infrastructure)";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\boite3.paa";
	};
	class destroy_field
	{
		name        = "Kit (Champs)";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\boite4.paa";
	};
	class destroy_labo
	{
		name        = "Kit (Laboratoire)";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		image       = "alysia_items_virtual\data\boite2.paa";
	};

	class steel
	{
		name        = "Acier";
		weight      = 5;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\steel.paa";
		class market
		{
			max = 210;
			min = 150;
			mult = 2;
			affect[] = {"ironp", "soufre", "platinep", "souffre", "hsoufre", "copperp", "alu"};
		};
	};

	class buckshot
	{
		name        = "Chevrotine";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\buckshot.paa";
	};

	class bullet
	{
		name        = "Balle";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bullet.paa";
	};

	class magazine
	{
		name        = "Chargeur vide";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\magazine.paa";
	};

	class barillet
	{
		name        = "Barillet (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\barillet.paa";
	};

	class canon
	{
		name        = "Canon (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 3;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\canon.paa";
	};

	class crosse_wood
	{
		name        = "Crosse (bois)(pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\crosse_wood.paa";
	};

	class crosse_steel
	{
		name        = "Crosse (acier)(pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\crosse_steel.paa";
	};

	class garde_main_wood
	{
		name        = "Garde-main (bois)(pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\garde_main_wood.paa";
	};

	class garde_main_steel
	{
		name        = "Garde-main (acier)(pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\garde_main_steel.paa";
	};

	class poignee
	{
		name        = "Poignée (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\poignee.paa";
	};

	class detente
	{
		name        = "Détente (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\detente.paa";
	};

	class percuteur
	{
		name        = "Percuteur (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\percuteur.paa";
	};

	class carcasse
	{
		name        = "Carcasse (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\carcasse.paa";
	};

	class bloc_culasse
	{
		name        = "Bloc culasse (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\bloc_culasse.paa";
	};

	class marteau
	{
		name        = "Marteau (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\marteau.paa";
	};

	class culasse
	{
		name        = "Culasse (pièce)";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		image       = "alysia_items_virtual\data\culasse.paa";
	};

	class lab_marijuana
	{
		name = "Laboratoire de marijuana";
		price_buy = 10000;
		price_sell = 0;
		weight = 15;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_marijuana'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_meth
	{
		name = "Laboratoire de methamphetamine";
		price_buy = 10000;
		price_sell = 0;
		weight = 40;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_meth'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_cocaine
	{
		name = "Laboratoire de cocaïne";
		price_buy = 10000;
		price_sell = 0;
		weight = 30;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_cocaine'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_heroin
	{
		name = "Laboratoire d'héroïne";
		price_buy = 10000;
		price_sell = 0;
		weight = 30;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_heroin'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_weapon
	{
		name = "Usine d'armes illégales";
		price_buy = 10000;
		price_sell = 0;
		weight = 40;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_weapon'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_clothing
	{
		name = "Usine de vêtements illégaux";
		price_buy = 10000;
		price_sell = 0;
		weight = 35;
		illegal = 1;
		removable = 1;
		image = "";
		class use
		{
			action = "['lab_clothing'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};

	class money_transfer
	{
		name = "Sac de billets de banque";
		weight = 18;
		illegal = 0;
		removable = 0;
		image = "";
	};

	class alcool_test
	{
		name = "Alcootest";
		price_buy = 15;
		price_sell = 0;
		weight = 1;
		illegal = 0;
		removable = 1;
		image = "";
	};
};
