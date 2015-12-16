class ALYSIA_ITEMS 
{
	class raisin
	{
		name        = "Raisin";
		weight      = 1;
		price_buy   = 3;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		use         = "[""raisin""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\raisin.paa";
	};

	class illegal_money
	{
		name        = "kn (argent sale)";
		weight      = 0;
		illegal     = 1;
		removable   = 0;
		use         = "";
		image       = "alysia_items_virtual\data\1\.paa";
	};

	class engrais
	{
		name        = "Engrais";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\engrais.paa";
	};

	class goldbar
	{
		name        = "Lingot d'or";
		weight      = 40;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\lingot_or.paa";
	};

	class water
	{
		name        = "Bouteille d'eau";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "[""water""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\bouteille_eau.paa";
	};

	class lockpick
	{
		name        = "Kit de crochetage";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\kit_crochetage.paa";
	};

	class handcuffs
	{
		name        = "Menottes";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\menottes.paa";
	};

	class handcuffkeys
	{
		name        = "Clés de menottes";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\clee_menottes.paa";
	};

	class patch
	{
		name        = "Patch anti addiction";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[] call public_fnc_patch;";
		image       = "alysia_items_virtual\data\1\patch_anti_addiction.paa";
	};

	class nitro
	{
		name        = "Nitro";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\nitroboost.paa";
	};

	class storage
	{
		name        = "Coffre";
		weight      = 30;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[] spawn public_fnc_storageBox;";
		image       = "alysia_items_virtual\data\1\coffre.paa";
	};

	class barriere
	{
		name        = "Barrière";
		weight      = 6;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\1\barriere.paa";
	};

	class cone
	{
		name        = "Cône";
		weight      = 3;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\1\cone.paa";
	};

	class spikeStrip
	{
		name        = "Herse";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\1\herse.paa";
	};

	class tabac
	{
		name        = "Tabac";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\tabac.paa";
	};

	class tabac_seed
	{
		name        = "Graine (tabac)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_tabac.paa";
	};

	class cigare
	{
		name        = "Cigare";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\cigare.paa";
		license     = "tabac";
		class market
		{
			max = 3100;
			min = 1400;
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
		use         = "";
		image       = "alysia_items_virtual\data\1\cigarette.paa";
		license     = "tabac";
		class market
		{
			max = 3100;
			min = 1400;
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
		use         = "";
		image       = "alysia_items_virtual\data\1\objet_de_valeur.paa";
		class market
		{
			max = 2250;
			min = 900;
			mult = 4;
			affect[] = {};
		};
	};

	class artefact
	{
		name        = "Artefact";
		weight      = 6;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
		license     = "archeologie";
		class market
		{
			max = 1500;
			min = 900;
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
		use         = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
		license     = "archeologie";
		class market
		{
			max = 6000;
			min = 2400;
			mult = 4;
			affect[] = {};
		};
	};

	class artefact_exrare
	{
		name        = "Artefact extrèmement rare";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
		class market
		{
			max = 21000;
			min = 9000;
			mult = 6;
			affect[] = {};
		};
	};

	class artefact_rare
	{
		name        = "Arteftact rare";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
		class market
		{
			max = 9000;
			min = 4000;
			mult = 5;
			affect[] = {};
		};
	};

	class artefact_common
	{
		name        = "Artefact commum";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
		class market
		{
			max = 4000;
			min = 2500;
			mult = 3;
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
		use         = "";
		image       = "alysia_items_virtual\data\1\tas_bois.paa";
	};

	class woodp
	{
		name        = "Planche";
		weight      = 2;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\planche.paa";
		license     = "wood";
		class market
		{
			max = 1500;
			min = 700;
			mult = 1;
			affect[] = {};
		};
	};

	class furniture
	{
		name        = "Meuble";
		weight      = 20;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\meuble.paa";
	};

	class iron
	{
		name        = "Minerai de fer";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\minerai_fer.paa";
	};

	class ironp
	{
		name        = "Barre de fer";
		weight      = 3;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\lingot_fer.paa";
		license     = "iron";
		class market
		{
			max = 2600;
			min = 800;
			mult = 3;
			affect[] = {};
		};
	};

	class soufre
	{
		name        = "Soufre";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[player, ""soufre""] spawn public_fnc_process_action;";
		image       = "alysia_items_virtual\data\1\soufre.paa";
	};

	class platine
	{
		name        = "Minerai de platine";
		weight      = 7;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\minerai_platine.paa";
	};

	class platinep
	{
		name        = "Barre de platine";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\lingot_platine.paa";
		license     = "platine";
		class market
		{
			max = 5600;
			min = 1100;
			mult = 4;
			affect[] = {};
		};
	};

	class cocaine_seed
	{
		name        = "Graine (coca)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\graines_coca.paa";
	};

	class cocaine
	{
		name        = "Feuille de coca";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\coca.paa";
	};

	class cocainep
	{
		name        = "Cocaïne pure";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\drogue\cocaine.paa";
		class market
		{
			max = 9800;
			min = 3700;
			mult = 3;
			affect[] = {};
		};
	};

	class cocainepc
	{
		name        = "Cocaïne coupée";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\drogue\cocaine_coupe.paa";
		class market
		{
			max = 7100;
			min = 2800;
			mult = 4;
			affect[] = {};
		};
	};

	class heroin_seed
	{
		name        = "Graine (pavot)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\graine_pavot.paa";
	};

	class heroin
	{
		name        = "Fleur de pavot";
		weight      = 6;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\pavot.paa";
	};

	class heroinp
	{
		name        = "Heroïne pure";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\heroine.paa";
	};

	class heroinps
	{
		name        = "Seringue d'héroïne pure";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\drogue\seringue_heroine.paa";
		class heroinps
		{
			max = 11000;
			min = 4200;
			mult = 5;
			affect[] = {};
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
		use         = "";
		image       = "alysia_items_virtual\data\1\seringue_vide.paa";
	};

	class meth_seed
	{
		name        = "Graine (Ephedra)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\graines_ephedra.paa";
	};

	class hsoufre
	{
		name        = "Hydrate de soufre";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\soufre_hydrate.paa";
	};

	class meth
	{
		name        = "Feuille d'ephedra";
		weight      = 4;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\ephedra.paa";
	};

	class methp
	{
		name        = "Methamphetamine";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\drogue\methamphetamine.paa";
		class market
		{
			max = 15600;
			min = 2000;
			mult = 4;
			affect[] = {};
		};
	};

	class cannabis_seed
	{
		name        = "Graine (cannabis)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\graines_canabis.paa";
	};

	class cannabis
	{
		name        = "Cannabis";
		weight      = 5;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\canabis.paa";
	};

	class marijuana
	{
		name        = "Marijuana";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\drogue\marijuana.paa";
		license     = "marijuana";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
		class market
		{
			max = 5300;
			min = 1900;
			mult = 3;
			affect[] = {};
		};
	};

	class oilu
	{
		name        = "Pétrole";
		weight      = 7;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\petrole.paa";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
	};

	class oilp
	{
		name        = "Pétrole traité";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\essence.paa";
		license     = "oil";
		class market
		{
			max = 24;
			min = 16;
			mult = 3;
			affect[] = {};
		};
	};

	class fishingpoles
	{
		name        = "Filet de pêche";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\filet_peche.paa";
	};

	class bean_seed
	{
		name        = "Graine (haricot)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_haricot.paa";
	};

	class bean
	{
		name        = "Haricot";
		weight      = 2;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\haricot.paa";
		class market
		{
			max = 350;
			min = 80;
			mult = 3;
			affect[] = {};
		};
	};

	class corn_seed
	{
		name        = "Graine (maïs)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_mais.paa";
	};

	class corn
	{
		name        = "Maïs";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\mais.paa";
		class market
		{
			max = 260;
			min = 60;
			mult = 3;
			affect[] = {};
		};
	};

	class cotton_seed
	{
		name        = "Graine (coton)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_coton.paa";
	};

	class cotton
	{
		name        = "Coton";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\coton.paa";
		class market
		{
			max = 350;
			min = 60;
			mult = 2;
			affect[] = {};
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
		use         = "";
		image       = "alysia_items_virtual\data\1\sable.paa";
	};

	class glass
	{
		name        = "Verre";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\verre.paa";
		license     = "sand";
		class market
		{
			max = 1900;
			min = 800;
			mult = 3;
			affect[] = {};
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
		use         = "[""cerealbar""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\barre_de_cereale.paa";
	};

	class sparklingwater
	{
		name        = "Eau gazeuse";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "[""sparklingwater""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\bouteille_eau_gazeuse.paa";
	};

	class prune
	{
		name        = "Prune";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 3;
		illegal     = 0;
		removable   = 1;
		use         = "[""prune""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\prune.paa";
	};

	class sandwich
	{
		name        = "Sandwich au jambon";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		use         = "[""sandwich""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\sandwich_jambon.paa";
	};

	class donut
	{
		name        = "Beignet";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "[""donut""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\beignet.paa";
	};

	class soda
	{
		name        = "Soda";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "[""soda""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\soda.paa";
	};

	class ragout
	{
		name        = "Boite de ragout";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		illegal     = 0;
		removable   = 1;
		use         = "[""ragout""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\ragout.paa";
	};

	class kefir
	{
		name        = "Kéfir";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "[""kefir""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\kefir.paa";
	};

	class copper
	{
		name        = "Minerai de cuivre";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\minerai_cuivre.paa";
	};

	class copperp
	{
		name        = "Barre de cuivre";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\lingot_cuivre.paa";
	};

	class clay
	{
		name        = "Argile";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\argile.paa";
	};

	class pottery
	{
		name        = "Poterie";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\poterie.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class baux
	{
		name        = "Minerai de bauxite";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\minerai_bauxite.paa";
	};

	class alu
	{
		name        = "Barre d'aliminium";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\alluminium.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class moule
	{
		name        = "Moule";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\moule.paa";
	};

	class palourde
	{
		name        = "Palourde";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\palourde.paa";
	};

	class saintjacques
	{
		name        = "Coquilles Saint-Jacques";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\saint_jacques.paa";
	};

	class bigorneau
	{
		name        = "Bigorneau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\bigorneau.paa";
	};

	class crabe
	{
		name        = "Crabe";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\crabe.paa";
	};

	class bulot
	{
		name        = "Bulot";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\bulot.paa";
	};

	class anchois
	{
		name        = "Anchois";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\anchois.paa";
	};

	class bar
	{
		name        = "Bar";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\bar.paa";
	};

	class daurade
	{
		name        = "Daurade";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\daurade.paa";
	};

	class maquereau
	{
		name        = "Maquereau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\maquereau.paa";
	};

	class merlu
	{
		name        = "Merlu";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\merlu.paa";
	};

	class sardine
	{
		name        = "Sardine";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\fruit_de_mer\sardine.paa";
	};

	class salt
	{
		name        = "Sel";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\sel.paa";
	};

	class saltp
	{
		name        = "Sel traité";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\sel_traiter.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
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
		use         = "";
		image       = "alysia_items_virtual\data\1\pepite_or.paa";
	};

	class patate
	{
		name        = "Patate";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\patate.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class patate_seed
	{
		name        = "Patate germé";
		weight      = 1;
		illegal     = 0;
		price_buy   = 60;
		price_sell  = 30;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\patategerme.paa";
	};

	class wheat
	{
		name        = "Blé";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\ble.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class wheatseed
	{
		name        = "Graine (blé)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_ble.paa";
	};

	class cottonp
	{
		name        = "Coton traité";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\boule_coton.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class grozdova
	{
		name        = "Grozdova";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\bouteille_eau_de_vie_raisin.paa";
	};

	class slivovica
	{
		name        = "Slivovica";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\bouteille_eau_de_vie_prune.paa";
	};

	class coal
	{
		name        = "Charbon";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\charbon.paa";
		class market
		{
			max = 60;
			min = 30;
			mult = 2;
			affect[] = {};
		};
	};

	class opium
	{
		name        = "Opium";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\opium.paa";
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
		price_buy   = 60;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""] call public_fnc_info";
		image       = "alysia_items_virtual\data\1\sifflet.paa";
	};

	class bip
	{
		name        = "Télécommande (barrière)";
		weight      = 1;
		price_buy   = 120;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""] call public_fnc_info";
		image       = "alysia_items_virtual\data\1\telecommande_portail.paa";
	};
	
	class pierre
	{
		name        = "Pierre";
		weight      = 7;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\pierre.paa";
	};
	
	class ciment
	{
		name        = "Ciment";
		weight      = 10;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\ciment.paa";
	};
};
