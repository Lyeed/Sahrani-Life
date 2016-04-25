#define AFFECT_FARM {"bean","corn","patate","wheat","cottonp","sunflower","cotton","huile_bottle","tissue"}
#define AFFECT_PROCESSED {"brique","soufre","saltp","coal","ciment","woodp","furniture","glass"}
#define AFFECT_MINERAL {"steel","ironp","platinep","copperp","alu","sp98","sp95","gazole","gpl","kerosene","goldbar"}
#define AFFECT_DRUGS {"cigarette","cigare","heroinps","methp","marijuana","cocainepc","cocainep"}
#define AFFECT_ILLEGAL {"grozdova","slivovica","turtle","artefact","artefact_R","objvaleur"}

class ALYSIA_ITEMS
{
	class illegal_money
	{
		name = "kn (argent sale)";
		weight = 0;
		illegal = 1;
		image = "alysia_items_virtual\data\money.paa";
	};

	class engrais
	{
		name = "Engrais";
		weight = 1;
		price_buy = 10;
		image = "alysia_items_virtual\data\engrais.paa";
	};

	class goldnuggets
	{
		name = "Pépite d'or";
		weight = 1;
		image = "alysia_items_virtual\data\pepite_or.paa";
	};
	class goldbar
	{
		name = "Lingot d'or";
		weight = 30;
		image = "alysia_items_virtual\data\lingot_or.paa";
		license = "gold";
		class market
		{
			max = 4900;
			min = 1100;
			affect[] = AFFECT_MINERAL;
		};
	};

	class lockpick
	{
		name = "Kit de crochetage";
		weight = 6;
		price_buy = 600;
		illegal = 1;
		image = "alysia_items_virtual\data\kit_crochetage.paa";
	};

	class handcuffs
	{
		name = "Menottes";
		weight = 2;
		price_buy = 45;
		illegal = 1;
		image = "alysia_items_virtual\data\menottes.paa";
	};
	class handcuffkeys
	{
		name = "Clés de menottes";
		weight = 1;
		price_buy = 5;
		illegal = 1;
		image = "alysia_items_virtual\data\clee_menottes.paa";
	};

	class patch
	{
		name = "Patch anti addiction";
		weight = 1;
		price_buy = 75;
		image = "alysia_items_virtual\data\patch_anti_addiction.paa";
		class use
		{
			action = "[] call AlysiaClient_fnc_item_patch;";
		};
	};

	class adn
	{
		name = "Test ADN";
		buy_license_GUER = "guer_gen";
		weight = 3;
		price_buy = 24500;
		image = "alysia_items_virtual\data\adn.paa";
	};

	class nitro
	{
		name = "Nitro";
		weight = 4;
		price_buy = 500;
		illegal = 1;
		image = "alysia_items_virtual\data\nitroboost.paa";
	};

	class storage_small
	{
		name = "Coffre (Petit)";
		weight = 10;
		price_buy = 20000;
		image = "alysia_items_virtual\data\coffre.paa";
		class use
		{
			action = "['storage_small'] spawn AlysiaClient_fnc_item_chest;";
		};
	};
	class storage_medium: storage_small
	{
		name = "Coffre (Moyen)";
		weight = 20;
		price_buy = 31000;
		class use
		{
			action = "['storage_medium'] spawn AlysiaClient_fnc_item_chest;";
		};
	};
	class storage_large: storage_small
	{
		name = "Coffre (Grand)";
		weight = 30;
		price_buy = 43000;
		class use
		{
			action = "['storage_large'] spawn AlysiaClient_fnc_item_chest;";
		};
	};
	class storage_stock: storage_small
	{
		name = "Coffre (Stock)";
		weight = 35;
		price_buy = 50000;
		class use
		{
			action = "['storage_stock'] spawn AlysiaClient_fnc_item_chest;";
		};
	};
	
	class barriere
	{
		name = "Barrière (fixe)";
		weight = 6;
		price_buy = 120;
		image = "alysia_items_virtual\data\barriere.paa";
		class use
		{
			action = "['barriere'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class cone
	{
		name = "Cône";
		weight = 2;
		price_buy = 50;
		image = "alysia_items_virtual\data\cone.paa";
		class use
		{
			action = "['cone'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class bargate
	{
		name = "Barrière (porte)";
		weight = 11;
		price_buy = 550;
		image = "alysia_items_virtual\data\bargate.paa";
		class use
		{
			action = "['bargate'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class table_wood
	{
		name = "Table en bois";
		weight = 9;
		image = "alysia_items_virtual\data\table_wood.paa";
		class use
		{
			action = "['table_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class chair_wood
	{
		name = "Chaise en bois";
		weight = 3;
		image = "alysia_items_virtual\data\chair_wood.paa";
		class use
		{
			action = "['chair_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class tribune_wood
	{
		name = "Tribune en bois";
		weight = 20;
		image = "alysia_items_virtual\data\tribune_wood.paa";
		class use
		{
			action = "['tribune_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class bagfence_sand
	{
		name = "Sacs de sable";
		weight = 10;
		image = "alysia_items_virtual\data\bagfence_sand.paa";
		class use
		{
			action = "['bagfence_sand'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class antitank_steel
	{
		name = "Piège anti-chars";
		weight = 19;
		image = "alysia_items_virtual\data\antitank_steel.paa";
		class use
		{
			action = "['antitank_steel'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
	class guardshed_wood
	{
		name = "Abri en bois";
		weight = 13;
		image = "alysia_items_virtual\data\guardshed_wood.paa";
		class use
		{
			action = "['guardshed_wood'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class spikeStrip
	{
		name = "Herse";
		weight = 5;
		price_buy = 130;
		image = "alysia_items_virtual\data\herse.paa";
		class use
		{
			action = "['spikeStrip'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};

	class tabac
	{
		name = "Tabac";
		weight = 2;
		image = "alysia_items_virtual\data\tabac.paa";
	};
	class tabac_seed
	{
		name = "Graine (tabac)";
		weight = 1;
		price_buy = 8;
		illegal = 1;
		image = "alysia_items_virtual\data\graine_tabac.paa";
	};
	class cigare
	{
		name = "Cigare";
		weight = 2;
		illegal = 1;
		image = "alysia_items_virtual\data\cigare.paa";
		license = "tabac";
		class market
		{
			max = 1326;
			min = 98;
			affect[] = AFFECT_DRUGS;
		};
	};
	class cigarette
	{
		name = "Cigarette";
		weight = 2;
		illegal = 1;
		image = "alysia_items_virtual\data\cigarette.paa";
		license = "tabac";
		class market
		{
			max = 825;
			min = 15;
			affect[] = AFFECT_DRUGS;
		};
	};

	class objvaleur
	{
		name = "Objet de valeur";
		weight = 2;
		illegal = 1;
		image = "alysia_items_virtual\data\objet_de_valeur.paa";
		class market
		{
			max = 828;
			min = 190;
			affect[] = AFFECT_ILLEGAL;
		};
	};

	class artefact
	{
		name = "Artefact";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\artefact.paa";
		class market
		{
			max = 925;
			min = 120;
			affect[] = AFFECT_ILLEGAL;
		};
	};
	class artefact_R
	{
		name = "Artefact rénové";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\artefact_R.paa";
		license = "archeologie";
		class market
		{
			max = 13032;
			min = 528;
			affect[] = AFFECT_ILLEGAL;
		};
	};

	class wood
	{
		name = "Bois";
		weight = 2;
		image = "alysia_items_virtual\data\tas_bois.paa";
	};
	class woodp
	{
		name = "Planche";
		weight = 2;
		image = "alysia_items_virtual\data\planche.paa";
		license = "wood";
		class market
		{
			max = 56;
			min = 15;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class furniture
	{
		name = "Meuble";
		weight = 8;
		image = "alysia_items_virtual\data\meuble.paa";
		license = "furniture";
		class market
		{
			max = 620;
			min = 190;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class iron
	{
		name = "Minerai de fer";
		weight = 5;
		image = "alysia_items_virtual\data\minerai_fer.paa";
	};
	class ironp
	{
		name = "Lingot de fer";
		weight = 3;
		image = "alysia_items_virtual\data\lingot_fer.paa";
		license = "iron";
		class market
		{
			max = 350;
			min = 125;
			affect[] = AFFECT_MINERAL;
		};
	};

	class soufre
	{
		name = "Soufre";
		weight = 1;
		image = "alysia_items_virtual\data\soufre.paa";
		class market
		{
			max = 49;
			min = 10;
			affect[] = AFFECT_PROCESSED;
		};
	};
	class hsoufre
	{
		name = "Hydrate de soufre";
		weight = 2;
		illegal = 1;
		image = "alysia_items_virtual\data\soufre_hydrate.paa";
	};

	class platine
	{
		name = "Minerai de platine";
		weight = 6;
		image = "alysia_items_virtual\data\minerai_platine.paa";
	};
	class platinep
	{
		name = "Lingot de platine";
		weight = 4;
		image = "alysia_items_virtual\data\lingot_platine.paa";
		license = "platine";
		class market
		{
			max = 823;
			min = 200;
			affect[] = AFFECT_MINERAL;
		};
	};

	class cocaine_seed
	{
		name = "Graine (coca)";
		weight = 1;
		price_buy = 20;
		illegal = 1;
		image = "alysia_items_virtual\data\graines_coca.paa";
	};
	class cocaine
	{
		name = "Feuille de coca";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\coca.paa";
	};
	class cocainep
	{
		name = "Cocaïne pure";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\cocaine.paa";
		class market
		{
			max = 1830;
			min = 120;
			affect[] = AFFECT_DRUGS;
		};
	};
	class cocainepc
	{
		name = "Cocaïne coupée";
		weight = 2;
		illegal = 1;
		image = "alysia_items_virtual\data\cocaine_coupe.paa";
		class market
		{
			max = 1120;
			min = 50;
			affect[] = AFFECT_DRUGS;
		};
	};

	class heroin_seed
	{
		name = "Graine (pavot)";
		weight = 1;
		price_buy = 25;
		illegal = 1;
		image = "alysia_items_virtual\data\graine_pavot.paa";
	};
	class heroin
	{
		name = "Fleur de pavot";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\pavot.paa";
	};
	class heroinp
	{
		name = "Heroïne pure";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\heroine.paa";
	};
	class heroinps
	{
		name = "Seringue d'héroïne pure";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\seringue_heroine.paa";
		class market
		{
			max = 2420;
			min = 90;
			affect[] = AFFECT_DRUGS;
		};
	};

	class seringue
	{
		name = "Seringue";
		weight = 1;
		price_buy = 90;
		price_sell = 10;
		image = "alysia_items_virtual\data\seringue_vide.paa";
	};

	class meth_seed
	{
		name = "Graine (Ephedra)";
		weight = 1;
		price_buy = 35;
		illegal = 1;
		image = "alysia_items_virtual\data\graines_ephedra.paa";
	};
	class meth
	{
		name = "Feuille d'ephedra";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\ephedra.paa";
	};
	class methp
	{
		name = "Méthamphétamine";
		weight = 5;
		illegal = 1;
		image = "alysia_items_virtual\data\methamphetamine.paa";
		class market
		{
			max = 2320;
			min = 290;
			affect[] = AFFECT_DRUGS;
		};
	};

	class cannabis_seed
	{
		name = "Graine (cannabis)";
		weight = 1;
		price_buy = 18;
		illegal = 1;
		image = "alysia_items_virtual\data\graines_canabis.paa";
	};
	class cannabis
	{
		name = "Cannabis";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\canabis.paa";
	};
	class marijuana
	{
		name = "Marijuana";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\marijuana.paa";
		class market
		{
			max = 1720;
			min = 90;
			affect[] = AFFECT_DRUGS;
		};
	};

	class fishingpoles
	{
		name = "Filet de pêche";
		weight = 1;
		price_buy = 60;
		image = "alysia_items_virtual\data\filet_peche.paa";
	};

	class bean_seed
	{
		name = "Graine (haricot)";
		weight = 1;
		price_buy = 5;
		image = "alysia_items_virtual\data\graine_haricot.paa";
	};
	class bean
	{
		name = "Haricot";
		weight = 2;
		image = "alysia_items_virtual\data\haricot.paa";
		class market
		{
			max = 45;
			min = 4;
			affect[] = AFFECT_FARM;
		};
	};

	class corn_seed
	{
		name = "Graine (maïs)";
		weight = 1;
		price_buy = 5;
		image = "alysia_items_virtual\data\graine_mais.paa";
	};
	class corn
	{
		name = "Maïs";
		weight = 2;
		image = "alysia_items_virtual\data\mais.paa";
		class market
		{
			max = 47;
			min = 6;
			affect[] = AFFECT_FARM;
		};
	};

	class sunflower_seed
	{
		name = "Graine (Tournesol)";
		weight = 1;
		price_buy = 5;
		buy_license_CIV = "company_farming";
		image = "alysia_items_virtual\data\sunflower_seed.paa";
	};
	class sunflower
	{
		name = "Fleur de tournesol";
		weight = 2;
		image = "alysia_items_virtual\data\sunflower.paa";
		class market
		{
			max = 90;
			min = 9;
			affect[] = AFFECT_FARM;
		};
	};
	class huile
	{
		name = "Huile de tournesol";
		weight = 1;
		image = "alysia_items_virtual\data\huile.paa";
	};
	class huile_bottle
	{
		name = "Bouteille d'huile de tournesol";
		weight = 3;
		image = "alysia_items_virtual\data\huile_bottle.paa";
		class market
		{
			max = 605;
			min = 40;
			affect[] = AFFECT_FARM;
		};
	};

	class houblon
	{
		name = "Houblon";
		weight = 1;
		image = "alysia_items_virtual\data\houblon.paa";
		price_sell = 13;
	};

	class pumpkin_seed
	{
		name = "Graine (citrouille)";
		weight = 1;
		price_buy = 5;
		image = "alysia_items_virtual\data\pumpkin_seed.paa";
		buy_license_CIV = "company_farming";
	};
	class pumpkin
	{
		name = "Citrouille";
		weight = 4;
		image = "alysia_items_virtual\data\pumpkin.paa";
		price_sell = 90;
		class food
		{
			hunger = 80;
			sound = "eat_biscuit";
		};
	};
	class pumpkin_juice
	{
		name = "Jus de citrouille";
		weight = 1;
		image = "alysia_items_virtual\data\pumpkin_juice.paa";
	};
	class pumpkin_bottle
	{
		name = "Bouteille de jus de citrouille";
		weight = 2;
		image = "alysia_items_virtual\data\pumpkin_bottle.paa";
		class food
		{
			thirst = 40;
			sound = "drink_water";
			unlimitedRun = 180;
		};
	};

	class cotton_seed
	{
		name = "Graine (coton)";
		weight = 1;
		price_buy = 5;
		image = "alysia_items_virtual\data\graine_coton.paa";
	};
	class cotton
	{
		name = "Coton";
		weight = 2;
		image = "alysia_items_virtual\data\coton.paa";
		class market
		{
			max = 59;
			min = 8;
			affect[] = AFFECT_FARM;
		};
	};
	class cottonp
	{
		name = "Coton traité";
		weight = 2;
		image = "alysia_items_virtual\data\boule_coton.paa";
		class market
		{
			max = 195;
			min = 55;
			affect[] = AFFECT_FARM;
		};
	};
	class tissue
	{
		name = "Tissue";
		weight = 2;
		image = "alysia_items_virtual\data\tissue.paa";
		class market
		{
			max = 750;
			min = 55;
			affect[] = AFFECT_FARM;
		};
	};

	class sand
	{
		name = "Sable";
		weight = 3;
		image = "alysia_items_virtual\data\sable.paa";
	};
	class glass
	{
		name = "Verre";
		weight = 2;
		image = "alysia_items_virtual\data\verre.paa";
		license = "sand";
		class market
		{
			max = 315;
			min = 110;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class chips
	{
		name = "Paquet de chips";
		weight = 1;
		price_buy = 41;
		image = "alysia_items_virtual\data\chips.paa";
		class food
		{
			hunger = 30;
			thirst = -10;
			sound = "eat_biscuit";
		};
	};
	class chocolat
	{
		name = "Barre chocolaté";
		weight = 1;
		price_buy = 14;
		image = "alysia_items_virtual\data\chocolat.paa";
		class food
		{
			hunger = 10;
			sound = "eat_biscuit";
		};
	};
	class villagoise
	{
		name = "Villagoise";
		weight = 1;
		price_buy = 71;
		image = "alysia_items_virtual\data\villageoise.paa";
		class food
		{
			hunger = -5;
			thirst = 15;
			sound = "drink_wine";
			alcool = 0.15;
		};
	};
	class eau50
	{
		name = "Bouteille d'eau de 50cl";
		weight = 1;
		price_buy = 23;
		image = "alysia_items_virtual\data\eau50.paa";
		class food
		{
			thirst = 15;
			sound = "drink_water";
		};
	};
	class cerealbar
	{
		name = "Barre de céréale";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\barre_de_cereale.paa";
		class food
		{
			hunger = 50;
			sound = "eat_biscuit";
		};
	};
	class raisin
	{
		name = "Raisin";
		weight = 1;
		price_buy = 9;
		price_sell  = 7;
		image = "alysia_items_virtual\data\raisin.paa";
		class food
		{
			hunger = 10;
			thirst = 2;
			sound = "eat_biscuit";
		};
	};
	class sparklingwater
	{
		name = "Eau gazeuse";
		weight = 1;
		price_buy = 1;
		image = "alysia_items_virtual\data\bouteille_eau_gazeuse.paa";
		class food
		{
			thirst = 50;
			sound = "drink_soda";
		};
	};
	class prune
	{
		name = "Prune";
		weight = 1;
		price_buy = 7;
		price_sell = 5;
		image = "alysia_items_virtual\data\prune.paa";
		class food
		{
			hunger = 15;
			thirst = 5;
			sound = "eat_biscuit";
		};
	};
	class sandwich
	{
		name = "Sandwich au jambon";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\sandwich_jambon.paa";
		class food
		{
			hunger = 40;
			sound = "eat_biscuit";
		};
	};
	class donut
	{
		name = "Beignet";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\beignet.paa";
		class food
		{
			hunger = 40;
			sound = "eat_biscuit";
		};
	};
	class soda
	{
		name = "Soda";
		weight = 1;
		price_buy = 3;
		image = "alysia_items_virtual\data\soda.paa";
		class food
		{
			thirst = 40;
			sound = "drink_soda";
		};
	};
	class water
	{
		name = "Bouteille d'eau";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\bouteille_eau.paa";
		class food
		{
			thirst = 40;
			sound = "drink_water";
		};
	};
	class ragout
	{
		name = "Boite de ragout";
		weight = 1;
		price_buy = 6;
		image = "alysia_items_virtual\data\ragout.paa";
		class food
		{
			hunger = 40;
			sound = "eat_biscuit";
		};
	};
	class kefir
	{
		name = "Kéfir";
		weight = 1;
		price_buy = 1;
		image = "alysia_items_virtual\data\kefir.paa";
		class food
		{
			thirst = 40;
			sound = "drink_water";
		};
	};

	class copper
	{
		name = "Minerai de cuivre";
		weight = 3;
		image = "alysia_items_virtual\data\minerai_cuivre.paa";
	};
	class copperp
	{
		name = "Lingot de cuivre";
		weight = 3;
		image = "alysia_items_virtual\data\lingot_cuivre.paa";
		license = "copper";
		class market
		{
			max = 315;
			min = 130;
			affect[] = AFFECT_MINERAL;
		};
	};

	class clay
	{
		name = "Argile";
		weight = 3;
		image = "alysia_items_virtual\data\argile.paa";
	};
	class brique
	{
		name = "Brique";
		weight = 3;
		image = "alysia_items_virtual\data\brique.paa";
		license = "company_construction";
		class market
		{
			max = 282;
			min = 70;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class baux
	{
		name = "Minerai de bauxite";
		weight = 4;
		image = "alysia_items_virtual\data\minerai_bauxite.paa";
	};
	class alu
	{
		name = "Lingot d'aluminium";
		weight = 3;
		image = "alysia_items_virtual\data\alluminium.paa";
		license = "bauxite";
		class market
		{
			max = 352;
			min = 120;
			affect[] = AFFECT_MINERAL;
		};
	};

	class moule
	{
		name = "Moule";
		weight = 1;
		price_sell  = 31;
		image = "alysia_items_virtual\data\moule.paa";
	};
	class palourde
	{
		name = "Palourde";
		weight = 1;
		price_sell  = 80;
		image = "alysia_items_virtual\data\palourde.paa";
	};
	class saintjacques
	{
		name = "Coquilles Saint-Jacques";
		weight = 1;
		price_sell  = 73;
		image = "alysia_items_virtual\data\saint_jacques.paa";
	};
	class bigorneau
	{
		name = "Bigorneau";
		weight = 1;
		price_sell  = 61;
		image = "alysia_items_virtual\data\bigorneau.paa";
	};
	class crabe
	{
		name = "Crabe";
		weight = 1;
		price_sell  = 88;
		image = "alysia_items_virtual\data\crabe.paa";
	};

	class bulot
	{
		name = "Bulot";
		weight = 1;
		price_sell  = 57;
		image = "alysia_items_virtual\data\bulot.paa";
	};
	class anchois
	{
		name = "Anchois";
		weight = 1;
		price_sell  = 65;
		image = "alysia_items_virtual\data\anchois.paa";
	};
	class bar
	{
		name = "Bar";
		weight = 1;
		price_sell  = 72;
		image = "alysia_items_virtual\data\bar.paa";
	};
	class daurade
	{
		name = "Daurade";
		weight = 1;
		price_sell  = 65;
		image = "alysia_items_virtual\data\daurade.paa";
	};
	class maquereau
	{
		name = "Maquereau";
		weight = 1;
		price_sell  = 75;
		image = "alysia_items_virtual\data\maquereau.paa";
	};
	class merlu
	{
		name = "Merlu";
		weight = 1;
		price_sell  = 85;
		image = "alysia_items_virtual\data\merlu.paa";
	};
	class sardine
	{
		name = "Sardine";
		weight = 1;
		price_sell  = 58;
		image = "alysia_items_virtual\data\sardine.paa";
	};

	class salt
	{
		name = "Sel";
		weight = 4;
		price_buy = 60;
		price_sell  = 30;
		image = "alysia_items_virtual\data\sel.paa";
	};
	class saltp
	{
		name = "Sel traité";
		weight = 3;
		image = "alysia_items_virtual\data\sel_traiter.paa";
		class market
		{
			max = 245;
			min = 95;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class patate
	{
		name = "Patate";
		weight = 2;
		image = "alysia_items_virtual\data\patate.paa";
		class market
		{
			max = 52;
			min = 30;
			affect[] = AFFECT_FARM;
		};
	};
	class patate_seed
	{
		name = "Patate germée";
		weight = 1;
		price_buy = 6;
		image = "alysia_items_virtual\data\patategerme.paa";
	};

	class wheat
	{
		name = "Blé";
		weight = 2;
		image = "alysia_items_virtual\data\ble.paa";
		class market
		{
			max = 46;
			min = 25;
			affect[] = AFFECT_FARM;
		};
	};
	class wheatseed
	{
		name = "Graine (blé)";
		weight = 1;
		price_buy = 3;
		image = "alysia_items_virtual\data\graine_ble.paa";
	};

	class grozdova
	{
		name = "Bouteille de Grozdova";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\bouteille_eau_de_vie_raisin.paa";
		class market
		{
			max = 1180;
			min = 220;
			affect[] = AFFECT_ILLEGAL;
		};
		class food
		{
			alcool = 0.55;
			thirst = 50;
			sound = "drink_wine";
		};
	};
	class slivovica
	{
		name = "Bouteille de Slivovica";
		weight = 3;
		illegal = 1;
		image = "alysia_items_virtual\data\bouteille_eau_de_vie_prune.paa";
		class market
		{
			max = 1310;
			min = 220;
			affect[] = AFFECT_ILLEGAL;
		};
		class food
		{
			alcool = 0.50;
			thirst = 40;
			sound = "drink_wine";
		};
	};

	class coal
	{
		name = "Charbon";
		weight = 2;
		image = "alysia_items_virtual\data\charbon.paa";
		class market
		{
			max = 72;
			min = 20;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class sifflet
	{
		name = "Sifflet";
		weight = 1;
		price_buy = 3;
		image = "alysia_items_virtual\data\sifflet.paa";
	};
	class alcool_test
	{
		name = "Alcootest";
		price_buy = 15;
		weight = 1;
		image = "alysia_items_virtual\data\alcool_test.paa";
	};

	class pierre
	{
		name = "Pierre";
		weight = 4;
		image = "alysia_items_virtual\data\pierre.paa";
	};
	class ciment
	{
		name = "Ciment";
		weight = 3;
		image = "alysia_items_virtual\data\ciment.paa";
		license = "company_construction";
		class market
		{
			max = 305;
			min = 115;
			affect[] = AFFECT_PROCESSED;
		};
	};

	class steel
	{
		name = "Acier";
		weight = 4;
		image = "alysia_items_virtual\data\steel.paa";
		license = "company_foundry";
		class market
		{
			max = 320;
			min = 150;
			affect[] = AFFECT_MINERAL;
		};
	};

	class medova
	{
		name = "Bouteille de Medova";
		weight = 1;
		price_buy = 8;
		illegal = 1;
		image = "alysia_items_virtual\data\medova.paa";
		class food
		{
			thirst = 65;
			hunger = 0;
			sound = "drink_wine";
			alcool = 0.01;
		};
	};
	class cafe
	{
		name = "Tasse de café";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\cafe.paa";
		class food
		{
			thirst = 40;
			sound = "drink_water";
		};
	};
	class ravioli
	{
		name = "Ravioli en boite";
		weight = 1;
		price_buy = 9;
		image = "alysia_items_virtual\data\ravioli.paa";
		class food
		{
			hunger = 40;
			sound = "eat_biscuit";
		};
	};
	class cookie
	{
		name = "Cookie";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\cookie.paa";
		class food
		{
			hunger = 20;
			sound = "eat_biscuit";
		};
	};
	class petitbeurre
	{
		name = "Boîte de petits beurres";
		weight = 1;
		price_buy = 2;
		image = "alysia_items_virtual\data\petitbeurre.paa";
		class food
		{
			hunger = 40;
			sound = "eat_biscuit";
		};
	};
	class croissant
	{
		name = "Croissant";
		weight = 1;
		price_buy = 1;
		image = "alysia_items_virtual\data\croissant.paa";
		class food
		{
			hunger = 20;
			sound = "eat_biscuit";
		};
	};
	class pizza
	{
		name = "Pizza";
		weight = 1;
		price_buy = 8;
		image = "alysia_items_virtual\data\pizza.paa";
		class food
		{
			hunger = 70;
			sound = "eat_biscuit";
		};
	};

	class oilu
	{
		name = "Pétrole";
		weight = 10;
		image = "alysia_items_virtual\data\petrole.paa";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
	};
	class sp98
	{
		name = "SansPlomb 98";
		weight = 1;
		image = "alysia_items_virtual\data\sp98.paa";
		license = "company_fuel";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
		class market
		{
			max = 390;
			min = 250;
			affect[] = AFFECT_MINERAL;
		};
	};
	class sp95
	{
		name = "SansPlomb 95";
		weight = 1;
		image = "alysia_items_virtual\data\sp95.paa";
		license = "company_fuel";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
		class market
		{
			max = 390;
			min = 250;
			affect[] = AFFECT_MINERAL;
		};
	};
	class gazole
	{
		name = "Gazole";
		weight = 1;
		image = "alysia_items_virtual\data\gazole.paa";
		license = "company_fuel";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
		class market
		{
			max = 390;
			min = 250;
			affect[] = AFFECT_MINERAL;
		};
	};
	class gpl
	{
		name = "GPL";
		weight = 1;
		image = "alysia_items_virtual\data\gpl.paa";
		license = "company_fuel";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
		class market
		{
			max = 390;
			min = 250;
			affect[] = AFFECT_MINERAL;
		};
	};
	class kerosene
	{
		name = "Kéroséne";
		weight = 3;
		image = "alysia_items_virtual\data\kerosene.paa";
		license = "company_fuel";
		store[] = {"Jonzie_Tanker_Truck","xcam_Ind_Oil_Tower_EP1","Skyline_Coffre_Small","Skyline_Coffre_Medium","Skyline_Coffre_Large","R3F_WeaponStock"};
		class market
		{
			max = 390;
			min = 250;
			affect[] = AFFECT_MINERAL;
		};
	};
	
	class turtle
	{
		name = "Viande de tortue";
		weight = 4;
		illegal = 1;
		image = "alysia_items_virtual\data\tortue.paa";
		class market
		{
			max = 925;
			min = 600;
			affect[] = AFFECT_ILLEGAL;
		};
	};

	class bouteillevide
	{
		name = "Bouteille Vide";
		weight = 1;
		image = "alysia_items_virtual\data\bouteillevide.paa";
	};

	class frag_1
	{
		name = "Fragment (1)";
		weight = 1;
		illegal = 1;
		image = "alysia_items_virtual\data\frag_1.paa";
	};
	class frag_2: frag_1
	{
		name = "Fragment (2)";
		image = "alysia_items_virtual\data\frag_2.paa";
	};
	class frag_3: frag_1
	{
		name = "Fragment (3)";
		image = "alysia_items_virtual\data\frag_3.paa";
	};
	class frag_4: frag_1
	{
		name = "Fragment (4)";
		image = "alysia_items_virtual\data\frag_4.paa";
	};
	class frag_5: frag_1
	{
		name = "Fragment (5)";
		image = "alysia_items_virtual\data\frag_5.paa";
	};
	class frag_6: frag_1
	{
		name = "Fragment (6)";
		image = "alysia_items_virtual\data\frag_6.paa";
	};

	class destroy_archeo
	{
		name = "Kit (Archélogie)";
		weight = 6;
		illegal = 1;
		image = "alysia_items_virtual\data\boite1.paa";
	};
	class destroy_stand: destroy_archeo
	{
		name = "Kit (Infrastructure)";
		image = "alysia_items_virtual\data\boite3.paa";
	};
	class destroy_field: destroy_archeo
	{
		name = "Kit (Champs)";
		image = "alysia_items_virtual\data\boite4.paa";
	};
	class destroy_labo: destroy_archeo
	{
		name = "Kit (Laboratoire)";
		image = "alysia_items_virtual\data\boite2.paa";
	};

	class buckshot
	{
		name = "Chevrotine";
		weight = 1;
		image = "alysia_items_virtual\data\buckshot.paa";
	};
	class bullet
	{
		name = "Balle";
		weight = 1;
		image = "alysia_items_virtual\data\bullet.paa";
	};
	class magazine
	{
		name = "Chargeur vide";
		weight = 1;
		image = "alysia_items_virtual\data\magazine.paa";
	};
	class barillet
	{
		name = "Barillet (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\barillet.paa";
	};
	class canon
	{
		name = "Canon (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\canon.paa";
	};
	class crosse_wood
	{
		name = "Crosse (bois)(pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\crosse_wood.paa";
	};
	class crosse_steel
	{
		name = "Crosse (acier)(pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\crosse_steel.paa";
	};
	class garde_main_wood
	{
		name = "Garde-main (bois)(pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\garde_main_wood.paa";
	};
	class garde_main_steel
	{
		name = "Garde-main (acier)(pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\garde_main_steel.paa";
	};
	class poignee
	{
		name = "Poignée (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\poignee.paa";
	};
	class detente
	{
		name = "Détente (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\detente.paa";
	};
	class percuteur
	{
		name = "Percuteur (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\percuteur.paa";
	};
	class carcasse
	{
		name = "Carcasse (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\carcasse.paa";
	};
	class bloc_culasse
	{
		name = "Bloc culasse (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\bloc_culasse.paa";
	};
	class marteau
	{
		name = "Marteau (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\marteau.paa";
	};
	class culasse
	{
		name = "Culasse (pièce)";
		weight = 1;
		image = "alysia_items_virtual\data\culasse.paa";
	};

	class lab_marijuana
	{
		name = "Laboratoire de marijuana";
		price_buy = 185000;
		weight = 15;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_marijuana.paa";
		class use
		{
			action = "['lab_marijuana'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_meth
	{
		name = "Laboratoire de methamphetamine";
		price_buy = 226000;
		weight = 40;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_meth.paa";
		class use
		{
			action = "['lab_meth'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_cocaine
	{
		name = "Laboratoire de cocaïne";
		price_buy = 209000;
		weight = 30;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_cocaine.paa";
		class use
		{
			action = "['lab_cocaine'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_heroin
	{
		name = "Laboratoire d'héroïne";
		price_buy = 192000;
		weight = 30;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_heroin.paa";
		class use
		{
			action = "['lab_heroin'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_weapon
	{
		name = "Usine d'armes illégales";
		price_buy = 325000;
		weight = 40;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_weapon.paa";
		class use
		{
			action = "['lab_weapon'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_clothing
	{
		name = "Usine de vêtements illégaux";
		price_buy = 185000;
		weight = 35;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_clothing.paa";
		class use
		{
			action = "['lab_clothing'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_cigare
	{
		name = "Usine à cigares";
		price_buy = 90000;
		weight = 25;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_cigare.paa";
		class use
		{
			action = "['lab_cigare'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_heal
	{
		name = "Table d'opération illégale";
		price_buy = 110000;
		weight = 20;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_heal.paa";
		class use
		{
			action = "['lab_heal'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};
	class lab_construction
	{
		name = "Usines de constructions illégales";
		price_buy = 160000;
		weight = 20;
		illegal = 1;
		image = "alysia_items_virtual\data\lab_construction.paa";
		class use
		{
			action = "['lab_construction'] spawn AlysiaClient_fnc_labo_deploy;";
		};
	};

	class money_transfer
	{
		name = "Sac de billets de banque";
		weight = 10;
		image = "alysia_items_virtual\data\money_transfer.paa";
		buy_license_CIV = "company_money_tranfer";
		price_buy = 5000;
	};

	class opium
	{
		name = "Opium";
		weight = 4;
		image = "alysia_items_virtual\data\opium.paa";
	};
	class phenylalanine
	{
		name = "Phénylalanine";
		weight = 2;
		image = "alysia_items_virtual\data\phenylalanine.paa";
	};

	class serrure
	{
		name = "Serrure neuve";
		weight = 2;
		price_buy = 1750;
		image = "alysia_items_virtual\data\serrure.paa";
		buy_license_CIV = "company_construction";
		class use
		{
			action = "[] spawn AlysiaClient_fnc_item_serrure;";
		};
	};

	class electric_system
	{
		name = "Installation électrique";
		weight = 8;
		price_buy = 9500;
		image = "alysia_items_virtual\data\electric_system.paa";
		buy_license_CIV = "company_construction";
		class use
		{
			action = "[] spawn AlysiaClient_fnc_item_electricSystem;";
		};
	};

	class horn_milice_1
	{
		name = "Sirène 1 (Milice)";
		weight = 5;
		price_buy = 1000;
		image = "alysia_items_virtual\data\sirene.paa";
	};
	class horn_milice_2: horn_milice_1
	{
		name = "Sirène 2 (Milice)";
	};
	class horn_garde: horn_milice_1
	{
		name = "Sirène (Garde)";
	};
	class horn_samu: horn_milice_1
	{
		name = "Sirène (Samu)";
		price_buy = 100;
	};

	class scalpel
	{
		name = "Scalpel chirurgical";
		weight = 1;
		image = "alysia_items_virtual\data\scalpel.paa";
	};

	class perqui_north
	{
		name = "Mandat de perquisition";
		weight = 1;
		price_buy = 5000;
		buy_license_CIV = "judge";
		image = "alysia_items_virtual\data\perqui_north.paa";
		class use
		{
			action = "['NORTH', 'perqui_north', west] spawn AlysiaClient_fnc_item_perquisition;";
		};
	};
	class perqui_south
	{
		name = "Ordonnance de fouille";
		weight = 1;
		image = "alysia_items_virtual\data\perqui_south.paa";
		price_buy = 5000;
		buy_license_CIV = "central_com";
		class use
		{
			action = "['SOUTH', 'perqui_south', east] spawn AlysiaClient_fnc_item_perquisition;";
		};
	};

	class patron_AK74
	{
		name = "Patron (AK74)";
		weight = 0;
		price_buy = 575000;
		image = "alysia_items_virtual\data\patron.paa";
		class use
		{
			action = "['patron_AK74'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_M21: patron_AK74
	{
		name = "Patron (M21)";
		price_buy = 825000;
		class use
		{
			action = "['patron_M21'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_CZ: patron_AK74
	{
		name = "Patron (CZ)";
		price_buy = 439000;
		class use
		{
			action = "['patron_CZ'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_sawed: patron_AK74
	{
		name = "Patron (Fusil scié)";
		price_buy = 210000;
		class use
		{
			action = "['patron_sawed'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_AKM: patron_AK74
	{
		name = "Patron (AKM)";
		price_buy = 995000;
		class use
		{
			action = "['patron_AKM'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_mosin: patron_AK74
	{
		name = "Patron (Mosin)";
		price_buy = 260000;
		class use
		{
			action = "['patron_mosin'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_NVG: patron_AK74
	{
		name = "Patron (NVG)";
		price_buy = 115000;
		class use
		{
			action = "['patron_NVG'] call AlysiaClient_fnc_item_patron;";
		};
	};
	class patron_deagle: patron_AK74
	{
		name = "Patron (Deagle)";
		price_buy = 165000;
		class use
		{
			action = "['patron_deagle'] call AlysiaClient_fnc_item_patron;";
		};
	};

	class medoc_rhume
	{
		name = "Comprimé de Nurofex";
		weight = 1;
		image = "alysia_items_virtual\data\medoc_rhume.paa";
		class food
		{
			sound = "painkiller_01";
		};
	};
	class medoc_toux_1
	{
		name = "Bouteille de Sirop de Tussidax";
		weight = 1;
		image = "alysia_items_virtual\data\medoc_toux_1.paa";
		class food
		{
			thirst = 10;
			sound = "drink_water";
		};
	};
	class medoc_toux_2
	{
		name = "Comprimé de Padéryx";
		weight = 1;
		image = "alysia_items_virtual\data\medoc_toux_2.paa";
		class food
		{
			sound = "painkiller_01";
		};
	};

	class stethoscope
	{
		name = "Stethoscope";
		weight = 2;
		image = "alysia_items_virtual\data\stethoscope.paa";
		price_buy = 1600;
	};

	class brancard
	{
		name = "Brancard";
		weight = 7;
		image = "alysia_items_virtual\data\brancard.paa";
		price_buy = 250;
		class use
		{
			action = "['brancard'] spawn AlysiaClient_fnc_dynamicObject_deploy;";
		};
	};
};
