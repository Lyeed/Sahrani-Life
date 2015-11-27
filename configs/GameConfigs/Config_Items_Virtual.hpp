/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_ITEMS 
{
	class raisin
	{
		name        = "Raisin";
		weight      = 1;
		price_buy   = 3;
		price_sell  = 2;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""raisin""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\raisin.paa";
	};

	class illegal_money
	{
		name = "kn (argent sale)";
		weight = 0;
		illegal = 1;
		removable = 0;
		image       = "alysia_items_virtual\data\1\.paa";
		use = "";
	};

	class engrais
	{
		name = "Engrais";
		weight = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 0;
		removable = 1;
		use = 	"";
		image       = "alysia_items_virtual\data\1\engrais.paa";
	};

	class goldbar
	{
		weight = 40;
		name = "Barre d'or";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = 	"";
		image       = "alysia_items_virtual\data\1\lingot_or.paa";
	};

	class water
	{
		weight = 1;
		name = "Bouteille d'eau";
		price_buy   = 1;
		price_sell  = 1;
		illegal = 0;
		market      = 0;
		removable = 1;
		use         = "[""water""] call public_fnc_eatFood;";
		image       = "alysia_items_virtual\data\1\bouteille_eau.paa";
	};

	class lockpick
	{
		weight = 2;
		name = "Kit de crochetage";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\kit_crochetage.paa";
	};

	class handcuffs
	{
		weight = 2;
		name = "Menottes";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\menottes.paa";
	};

	class handcuffkeys
	{
		weight = 1;
		name = "Clés de menottes";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\clee_menottes.paa";
	};

	class patch
	{
		weight = 1;
		name = "Patch anti addiction";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 0;
		removable = 1;
		use = 
		"\
			if (g_drugs_patched != 0) exitWith {\
				[""Vous avez déjà un patch d'appliqué""] call public_fnc_error;\
			};\
			if ([false, ""patch"", 1] call public_fnc_handleInv) then \
			{\
				[""Vous vous êtes appliqué un patch anti-addiction""] call public_fnc_info;\
				g_drugs_patched = 60 * 20;\
				[] spawn\
				{\
					while {(g_drugs_patched > 0)} do\
					{\
						g_drugs_patched = g_drugs_patched - 5;\
						sleep 5;\
					};\
				};\
			};\
		";
		image       = "alysia_items_virtual\data\1\patch_anti_addiction.paa";
	};

	class nitro
	{
		weight = 4;
		name = "Nitro";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\nitroboost.paa";
	};

	class storage
	{
		weight = 30;
		name = "Coffre";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = 
		"\
			[] spawn public_fnc_storageBox;\
		";
		image       = "alysia_items_virtual\data\1\coffre.paa";
	};

	class barriere
	{
		weight = 6;
		name = "Barrière";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
		image       = "alysia_items_virtual\data\1\barriere.paa";
	};

	class cone
	{
		weight = 3;
		name = "Cône";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
		image       = "alysia_items_virtual\data\1\cone.paa";
	};

	class spikeStrip
	{
		weight = 5;
		name = "Herse";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
		image       = "alysia_items_virtual\data\1\herse.paa";
	};

	class tabac
	{
		weight = 4;
		name = "Tabac";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\tabac.paa";
	};

	class tabac_seed
	{
		weight = 1;
		name = "Graine (tabac)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\graine_tabac.paa";
	};

	class cigare
	{
		weight = 3;
		name = "Cigare";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\cigare.paa";
	};

	class cigarette
	{
		weight = 2;
		name = "Cigarette";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\cigarette.paa";
	};

	class objvaleur
	{
		weight = 2;
		name = "Objet de valeur";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\objet_de_valeur.paa";
	};

	class artefact
	{
		weight = 6;
		name = "Artefact";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class artefact_R
	{
		weight = 4;
		name = "Artefact rénové";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class artefact_exrare
	{
		weight = 2;
		name = "Artefact extrèmement rare";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class artefact_rare
	{
		weight = 2;
		name = "Arteftact rare";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class artefact_common
	{
		weight = 2;
		name = "Artefact commum";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class wood
	{
		weight = 2;
		name = "Bois";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\tas_bois.paa";
	};

	class woodp
	{
		weight = 2;
		name = "Planche";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\planche.paa";
	};

	class furniture
	{
		weight = 20;
		name = "Meuble";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\meuble.paa";
	};

	class iron
	{
		weight = 5;
		name = "Minerai de fer";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\minerai_fer.paa";
	};

	class ironp
	{
		weight = 3;
		name = "Barre de fer";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\lingot_fer.paa";
	};

	class soufre
	{
		weight = 1;
		name = "Soufre";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = 
		"\
			[ObjNull, ""soufre""] spawn public_fnc_processAction;\
		";
		image       = "alysia_items_virtual\data\1\soufre.paa";
	};

	class platine
	{
		weight = 7;
		name = "Minerai de platine";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\minerai_platine.paa";
	};

	class platinep
	{
		weight = 4;
		name = "Barre de platine";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\lingot_platine.paa";
	};

	class cocaine_seed
	{
		weight = 1;
		name = "Graine (coca)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\graines_coca.paa";
	};

	class cocaine
	{
		weight = 5;
		name = "Feuille de coca";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\coca.paa";
	};

	class cocainep
	{
		weight = 2;
		name = "Cocaïne pure";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "alysia_items_virtual\data\drogue\cocaine.paa";
	};

	class cocainepc
	{
		weight = 2;
		name = "Cocaïne coupée";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "alysia_items_virtual\data\drogue\cocaine_coupe.paa";
	};

	class heroin_seed
	{
		weight = 1;
		name = "Graine (pavot)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\graine_pavot.paa";
	};

	class heroin
	{
		weight = 6;
		name = "Fleur de pavot";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\pavot.paa";
	};

	class heroinp
	{
		weight = 4;
		name = "Heroïne pure";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\heroine.paa";
	};

	class seringue
	{
		weight = 1;
		name = "Seringue";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\seringue_vide.paa";
	};

	class heroinps
	{
		weight = 3;
		name = "Seringue d'héroïne pure";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "alysia_items_virtual\data\drogue\seringue_heroine.paa";
	};

	class meth_seed
	{
		weight = 1;
		name = "Graine (Ephedra)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\graines_ephedra.paa";
	};

	class hsoufre
	{
		weight = 1;
		name = "Hydrate de soufre";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\soufre_hydrate.paa";
	};

	class meth
	{
		weight = 4;
		name = "Feuille d'ephedra";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\ephedra.paa";
	};

	class methp
	{
		weight = 3;
		name = "Methamphetamine";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "alysia_items_virtual\data\drogue\methamphetamine.paa";
	};

	class cannabis_seed
	{
		weight = 1;
		name = "Graine (cannabis)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\graines_canabis.paa";
	};

	class cannabis
	{
		weight = 5;
		name = "Cannabis";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\drogue\canabis.paa";
	};

	class marijuana
	{
		weight = 4;
		name = "Marijuana";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "alysia_items_virtual\data\drogue\marijuana.paa";
	};

	class oilu
	{
		weight = 7;
		name = "Pétrole";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\petrole.paa";
	};

	class oilp
	{
		weight = 5;
		name = "Pétrole traité";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\essence.paa";
	};

	class fishingpoles
	{
		weight = 1;
		name = "Filet de pêche";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\filet_peche.paa";
	};

	class bean_seed
	{
		weight = 1;
		name = "Graine (haricot)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\graine_haricot.paa";
	};

	class bean
	{
		weight = 2;
		name = "Haricot";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\haricot.paa";
	};

	class corn_seed
	{
		weight = 1;
		name = "Graine (maïs)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\graine_mais.paa";
	};

	class corn
	{
		weight = 2;
		name = "Maïs";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\mais.paa";
	};

	class cotton_seed
	{
		weight = 1;
		name = "Graine (coton)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\graine_coton.paa";
	};

	class cotton
	{
		weight = 2;
		name = "Coton";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\coton.paa";
	};

	class sand
	{
		weight = 3;
		name = "Sable";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\sable.paa";
	};

	class glass
	{
		weight = 3;
		name = "Verre";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "alysia_items_virtual\data\1\verre.paa";
	};

	class cerealbar
	{
		name        = "Barre de céréale";
		weight      = 1;
		price_buy   = 2;
		price_sell  = 2;
		market      = 0;
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
		market      = 0;
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
		price_sell  = 2;
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\argile.paa";
	};

	class pottery
	{
		name        = "Poterie";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\poterie.paa";
	};

	class baux
	{
		name        = "Minerai de bauxite";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\minerai_bauxite.paa";
	};

	class alu
	{
		name        = "Barre d'aliminium";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\alluminium.paa";
	};

	class moule
	{
		name        = "Moule";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
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
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\sel.paa";
	};

	class saltp
	{
		name        = "Sel traité";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\sel_traiter.paa";
	};

	class goldnuggets
	{
		name        = "Pépite d'or";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\pepite_or.paa";
	};

	class patate
	{
		name        = "Patate";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\patate.paa";
	};

	class wheat
	{
		name        = "Blé";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\ble.paa";
	};

	class wheatseed
	{
		name        = "Graine (blé)";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\graine_ble.paa";
	};

	class cottonp
	{
		name        = "Coton traité";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\boule_coton.paa";
	};

	class grozdova
	{
		name        = "Grozdova";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
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
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\bouteille_eau_de_vie_prune.paa";
	};

	class coal
	{
		name        = "Charbon";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\1\charbon.paa";
	};

	class opium
	{
		name        = "Opium";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "";
		image       = "alysia_items_virtual\data\drogue\opium.paa";
	};

	class sifflet
	{
		name        = "Sifflet";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 0;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""]";
		image       = "alysia_items_virtual\data\drogue\opium.paa";// A CHANGER
	};

	class bip
	{
		weight      = 1;
		name        = "Télécommande (barrière)";
		price_buy   = 120;
		price_sell  = 0;
		illegal     = 0;
		market      = 0;
		removable   = 1;
		use         = "[""Vous devez utiliser le raccourci clavier pour utiliser cet objet""]";
		image       = "alysia_items_virtual\data\1\telecommande_portail.paa";
	};
};
