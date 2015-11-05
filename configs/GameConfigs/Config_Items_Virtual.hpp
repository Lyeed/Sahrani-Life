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
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""raisin""] call public_fnc_eatFood;";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class illegal_money
	{
		name = "$ (argent sale)";
		weight = 0;
		illegal = 1;
		removable = 0;
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class goldbar
	{
		weight = 12;
		name = "Barre d'or";
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal = 1;
		removable = 1;
		use = 	"";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class water
	{
		weight = 1;
		name = "Bouteille d'eau";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use         = "[""water""] call public_fnc_eatFood;";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class bip
	{
		weight = 1;
		name = "Télécommande (barrière)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "[] call public_fnc_copOpener;";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		weight = 8;
		name = "Bois";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class woodp
	{
		weight = 4;
		name = "Planche";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class platinepa
	{
		weight = 4;
		name = "Barre de platine enrichi";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class cocainepc
	{
		weight = 2;
		name = "Cocaïne coupé";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class hsoufre
	{
		weight = 1;
		name = "Soufre hydraté";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 1;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class oilu
	{
		weight = 7;
		name = "Pétrole brut";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class cotton_seed
	{
		weight = 1;
		name = "Graine (cotton)";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class cotton
	{
		weight = 2;
		name = "Cotton";
		price_buy   = 60;
		price_sell  = 30;
		illegal = 0;
		market      = 0;
		removable = 1;
		use = "";
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
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
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};
};
