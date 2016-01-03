class ALYSIA_ITEMS 
{
	class raisin
	{
		name        = "Raisin";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 4;
		illegal     = 0;
		removable   = 1;
		use         = "[""raisin""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\raisin.paa";
	};

	class illegal_money
	{
		name        = "kn (argent sale)";
		weight      = 0;
		illegal     = 1;
		removable   = 0;
		use         = "";
		image       = "alysia_items_virtual\data\.paa";
	};

	class engrais
	{
		name        = "Engrais";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\engrais.paa";
	};

	class goldbar
	{
		name        = "Lingot d'or";
		weight      = 40;
		price_buy   = 0;
		price_sell  = 1800;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\lingot_or.paa";
	};

	class water
	{
		name        = "Bouteille d'eau";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""water""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\bouteille_eau.paa";
	};

	class lockpick
	{
		name        = "Kit de crochetage";
		weight      = 2;
		price_buy   = 1200;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "";
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
		use         = "";
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
		use         = "";
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
		use         = "[] call public_fnc_patch;";
		image       = "alysia_items_virtual\data\patch_anti_addiction.paa";
	};

	class nitro
	{
		name        = "Nitro";
		weight      = 4;
		price_buy   = 900;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\nitroboost.paa";
	};

	class storage
	{
		name        = "Coffre";
		weight      = 30;
		price_buy   = 20000;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[] spawn public_fnc_storageBox;";
		image       = "alysia_items_virtual\data\coffre.paa";
	};

	class barriere
	{
		name        = "Barrière";
		weight      = 6;
		price_buy   = 48;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\barriere.paa";
	};

	class cone
	{
		name        = "Cône";
		weight      = 3;
		price_buy   = 10;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\cone.paa";
	};

	class spikeStrip
	{
		name        = "Herse";
		weight      = 5;
		price_buy   = 136;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[%1] spawn public_fnc_objPut;";
		image       = "alysia_items_virtual\data\herse.paa";
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
		image       = "alysia_items_virtual\data\tabac.paa";
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
		image       = "alysia_items_virtual\data\graine_tabac.paa";
	};

	class cigare
	{
		name        = "Cigare";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\cigare.paa";
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
		image       = "alysia_items_virtual\data\cigarette.paa";
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
		image       = "alysia_items_virtual\data\objet_de_valeur.paa";
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
		image       = "alysia_items_virtual\data\tas_bois.paa";
	};

	class woodp
	{
		name        = "Planche";
		weight      = 2;
		price_buy   = 0;
		price_sell  = 8;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\planche.paa";
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
		price_buy   = 0;
		price_sell  = 115;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\meuble.paa";
	};

	class iron
	{
		name        = "Minerai de fer";
		weight      = 5;
		price_buy   = 0;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\minerai_fer.paa";
	};

	class ironp
	{
		name        = "Barre de fer";
		weight      = 3;
		price_buy   = 0;
		price_sell  = 180;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\lingot_fer.paa";
		license     = "iron";
		class market
		{
			max = 120;
			min = 180;
			mult = 3;
			affect[] = {};
		};
	};

	class soufre
	{
		name        = "Soufre";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "[player, ""soufre""] spawn public_fnc_process_action;";
		image       = "alysia_items_virtual\data\soufre.paa";
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
		image       = "alysia_items_virtual\data\minerai_platine.paa";
	};

	class platinep
	{
		name        = "Barre de platine";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\lingot_platine.paa";
		license     = "platine";
		class market
		{
			max = 240;
			min = 180;
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
		use         = "";
		image       = "alysia_items_virtual\data\coca.paa";
	};

	class cocainep
	{
		name        = "Cocaïne pure";
		weight      = 2;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\cocaine.paa";
		class market
		{
			max = 520;
			min = 480;
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
		image       = "alysia_items_virtual\data\cocaine_coupe.paa";
		class market
		{
			max = 340;
			min = 290;
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
		use         = "";
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
		use         = "";
		image       = "alysia_items_virtual\data\heroine.paa";
	};

	class heroinps
	{
		name        = "Seringue d'héroïne pure";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\seringue_heroine.paa";
		class heroinps
		{
			max = 420;
			min = 380;
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
		image       = "alysia_items_virtual\data\seringue_vide.paa";
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
		image       = "alysia_items_virtual\data\graines_ephedra.paa";
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
		image       = "alysia_items_virtual\data\soufre_hydrate.paa";
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
		image       = "alysia_items_virtual\data\ephedra.paa";
	};

	class methp
	{
		name        = "Methamphetamine";
		weight      = 3;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\methamphetamine.paa";
		class market
		{
			max = 820;
			min = 600;
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
		use         = "";
		image       = "alysia_items_virtual\data\canabis.paa";
	};

	class marijuana
	{
		name        = "Marijuana";
		weight      = 4;
		illegal     = 1;
		removable   = 1;
		use         = "[""%1""] call public_fnc_drugConsume;";
		image       = "alysia_items_virtual\data\marijuana.paa";
		license     = "marijuana";
		store[]     = {"B_G_Van_01_fuel_F", "B_Truck_01_fuel_F", "O_Truck_02_fuel_F"};
		class market
		{
			max = 380;
			min = 310;
			mult = 3;
			affect[] = {};
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
		use         = "";
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
		use         = "";
		image       = "alysia_items_virtual\data\filet_peche.paa";
	};

	class bean_seed
	{
		name        = "Graine (haricot)";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\graine_haricot.paa";
	};

	class bean
	{
		name        = "Haricot";
		weight      = 2;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\haricot.paa";
		class market
		{
			max = 8;
			min = 6;
			mult = 3;
			affect[] = {};
		};
	};

	class corn_seed
	{
		name        = "Graine (maïs)";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\graine_mais.paa";
	};

	class corn
	{
		name        = "Maïs";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\mais.paa";
		class market
		{
			max = 8;
			min = 6;
			mult = 3;
			affect[] = {};
		};
	};

	class cotton_seed
	{
		name        = "Graine (coton)";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\graine_coton.paa";
	};

	class cotton
	{
		name        = "Coton";
		weight      = 2;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\coton.paa";
		class market
		{
			max = 9;
			min = 6;
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
		image       = "alysia_items_virtual\data\sable.paa";
	};

	class glass
	{
		name        = "Verre";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\verre.paa";
		license     = "sand";
		class market
		{
			max = 160;
			min = 210;
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
		image       = "alysia_items_virtual\data\barre_de_cereale.paa";
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
		image       = "alysia_items_virtual\data\bouteille_eau_gazeuse.paa";
	};

	class prune
	{
		name        = "Prune";
		weight      = 1;
		price_buy   = 5;
		price_sell  = 4;
		illegal     = 0;
		removable   = 1;
		use         = "[""prune""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\prune.paa";
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
		image       = "alysia_items_virtual\data\sandwich_jambon.paa";
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
		image       = "alysia_items_virtual\data\beignet.paa";
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
		image       = "alysia_items_virtual\data\soda.paa";
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
		image       = "alysia_items_virtual\data\ragout.paa";
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
		image       = "alysia_items_virtual\data\kefir.paa";
	};

	class copper
	{
		name        = "Minerai de cuivre";
		weight      = 1;
		price_buy   = 30;
		price_sell  = 125;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\minerai_cuivre.paa";
	};

	class copperp
	{
		name        = "Barre de cuivre";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 125;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\lingot_cuivre.paa";
	};

	class clay
	{
		name        = "Argile";
		weight      = 1;
		price_buy   = 0;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\argile.paa";
	};

	class pottery
	{
		name        = "Poterie";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\poterie.paa";
		class market
		{
			max = 80;
			min = 40;
			mult = 2;
			affect[] = {};
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
		use         = "";
		image       = "alysia_items_virtual\data\minerai_bauxite.paa";
	};

	class alu
	{
		name        = "Barre d'aliminium";
		weight      = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\alluminium.paa";
		class market
		{
			max = 110;
			min = 85;
			mult = 2;
			affect[] = {};
		};
	};

	class moule
	{
		name        = "Moule";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\moule.paa";
	};

	class palourde
	{
		name        = "Palourde";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 14;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\palourde.paa";
	};

	class saintjacques
	{
		name        = "Coquilles Saint-Jacques";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 6;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\saint_jacques.paa";
	};

	class bigorneau
	{
		name        = "Bigorneau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 11;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\bigorneau.paa";
	};

	class crabe
	{
		name        = "Crabe";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 7;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\crabe.paa";
	};

	class bulot
	{
		name        = "Bulot";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 16;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\bulot.paa";
	};

	class anchois
	{
		name        = "Anchois";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 4;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\anchois.paa";
	};

	class bar
	{
		name        = "Bar";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 19;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\bar.paa";
	};

	class daurade
	{
		name        = "Daurade";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 9;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\daurade.paa";
	};

	class maquereau
	{
		name        = "Maquereau";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 6;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\maquereau.paa";
	};

	class merlu
	{
		name        = "Merlu";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 9;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\merlu.paa";
	};

	class sardine
	{
		name        = "Sardine";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 5;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\sardine.paa";
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
		image       = "alysia_items_virtual\data\sel.paa";
	};

	class saltp
	{
		name        = "Sel traité";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\sel_traiter.paa";
		class market
		{
			max = 180;
			min = 160;
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
		image       = "alysia_items_virtual\data\pepite_or.paa";
	};

	class patate
	{
		name        = "Patate";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\patate.paa";
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
		image       = "alysia_items_virtual\data\patategerme.paa";
	};

	class wheat
	{
		name        = "Blé";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\ble.paa";
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
		image       = "alysia_items_virtual\data\graine_ble.paa";
	};

	class cottonp
	{
		name        = "Coton traité";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\boule_coton.paa";
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
		name        = "Bouteille de Grozdova";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\bouteille_eau_de_vie_raisin.paa";
	};

	class slivovica
	{
		name        = "Bouteille de Slivovica";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\bouteille_eau_de_vie_prune.paa";
	};

	class coal
	{
		name        = "Charbon";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\charbon.paa";
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
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""] call public_fnc_info";
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
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""] call public_fnc_info";
		image       = "alysia_items_virtual\data\telecommande_portail.paa";
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
		image       = "alysia_items_virtual\data\pierre.paa";
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
		image       = "alysia_items_virtual\data\ciment.paa";
	};

	class medova
	{
		name        = "Bouteille de Medova";
		weight      = 1;
		price_buy   = 8;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""medova""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\medova.paa";
	};

	class cafe
	{
		name        = "Tasse de café";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""cafe""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\cafe.paa";
	};

	class ravioli
	{
		name        = "Ravioli en boite";
		weight      = 1;
		price_buy   = 9;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""ravioli""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\ravioli.paa";
	};

	class cookie
	{
		name        = "Cookie";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""cookie""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\cookie.paa";
	};

	class petitbeurre
	{
		name        = "Boite de petit beurre";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""petitbeurre""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\petitbeurre.paa";
	};

	class croissant
	{
		name        = "Croissant";
		weight      = 1;
		price_buy   = 1;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""croissant""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\croissant.paa";
	};

	class pizza
	{
		name        = "Pizza";
		weight      = 1;
		price_buy   = 18;
		price_sell  = 0;
		illegal     = 1;
		removable   = 1;
		use         = "[""pizza""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\pizza.paa";
	};

	class sp98
	{
		name        = "SansPlomb 98";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\sp98.paa";
		license     = "oil";
	};

	class sp95
	{
		name        = "SansPlomb 95";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\sp95.paa";
		license     = "oil";
	};

	class gazole
	{
		name        = "Gazole";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\gazole.paa";
		license     = "oil";
	};

	class gpl
	{
		name        = "GPL";
		weight      = 1;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\gpl.paa";
		license     = "oil";
	};

	class kerosene
	{
		name        = "Kéroséne";
		weight      = 3;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\kerosene.paa";
		license     = "oil";
	};
};
