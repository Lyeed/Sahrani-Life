/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_ITEMS 
{
	class banane
	{
		name        = "Banane";
		weight      = 1;
		price_buy   = 60;
		price_sell  = 30;
		market      = 0;
		illegal     = 0;
		removable   = 1;
		use         = "[""banane""] call public_fnc_eatFood;";
		image       = "Alysia_textures\data\life_inv_banane.paa";
	};

	class illegal_money
	{
		weight = 0;
		name = "$ (argent sale)";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 0;
		use = 
		"\
		\
		";
	};

	class engrais
	{
		weight = 1;
		name = "Engrais";
		price = 450;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class weapon_paint
	{
		weight = 2;
		name = "Peinture";
		price = 1200;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[] call public_fnc_paintWeapon;\
		";
	};

	class goldbar
	{
		weight = 12;
		name = "Barre d'or";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class blastingcharge
	{
		weight = 4;
		name = "Charge explosive";
		price = 45000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			player reveal fed_bank;\
			(group player) reveal fed_bank;\
			[cursorTarget] spawn public_fnc_blastingCharge;\
		";
	};

	class defusekit
	{
		weight = 3;
		name = "Kit de désamorçage";
		price = 20000;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[cursorTarget] spawn public_fnc_defuseKit;\
		";
	};

	class water
	{
		weight = 1;
		name = "Bouteille d'eau";
		price = 50;
		illegal = 0;
		drop = "Land_BottlePlastic_V2_F";
		removable = 1;
		use = 
		"\
			[%1] call public_fnc_eatFood;\
		";
	};

	class lockpick
	{
		weight = 2;
		name = "Kit de crochetage";
		price = 5000;
		illegal = 1;
		drop = "Land_File_F";
		removable = 1;
		use = 
		"\
			[] spawn public_fnc_lockpick;\
		";
	};

	class baillon
	{
		weight = 1;
		name = "Baillon";
		price = 9000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class bandeau
	{
		weight = 1;
		name = "Bandeau";
		price = 9000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class handcuffs
	{
		weight = 2;
		name = "Menottes";
		price = 750;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class handcuffkeys
	{
		weight = 1;
		name = "Clés de menottes";
		price = 200;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class patch
	{
		weight = 1;
		name = "Patch anti addiction";
		price = 2000;
		illegal = 0;
		drop = "Land_Suitcase_F";
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
	};

	class nitro
	{
		weight = 4;
		name = "Nitro";
		price = 5000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class storage
	{
		weight = 30;
		name = "Coffre";
		price = 550000;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[] spawn public_fnc_storageBox;\
		";
	};

	class barriere
	{
		weight = 6;
		name = "Barrière";
		price = 1000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
	};

	class cone
	{
		weight = 3;
		name = "Cône";
		price = 700;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
	};

	class bip
	{
		weight = 1;
		name = "Télécommande (barrière)";
		price = 1200;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = "[] call public_fnc_copOpener;";
	};

	class spikeStrip
	{
		weight = 5;
		name = "Herse";
		price = 1500;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[%1] spawn public_fnc_objPut;\
		";
	};

	class tabac
	{
		weight = 4;
		name = "Tabac";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class tabac_seed
	{
		weight = 1;
		name = "Graine (tabac)";
		price = 820;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cigare
	{
		weight = 3;
		name = "Cigare";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cigarette
	{
		weight = 2;
		name = "Cigarette";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class objvaleur
	{
		weight = 2;
		name = "Objet de valeur";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class artefact
	{
		weight = 6;
		name = "Artefact";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class artefact_R
	{
		weight = 4;
		name = "Artefact rénové";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class artefact_exrare
	{
		weight = 2;
		name = "Artefact extrèmement rare";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class artefact_rare
	{
		weight = 2;
		name = "Arteftact rare";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class artefact_common
	{
		weight = 2;
		name = "Artefact commum";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class wood
	{
		weight = 8;
		name = "Bois";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class woodp
	{
		weight = 4;
		name = "Planche";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class iron
	{
		weight = 5;
		name = "Minerai de fer";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class ironp
	{
		weight = 3;
		name = "Barre de fer";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class soufre
	{
		weight = 1;
		name = "Soufre";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[ObjNull, ""soufre""] spawn public_fnc_processAction;\
		";
	};

	class platine
	{
		weight = 7;
		name = "Minerai de platine";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class platinep
	{
		weight = 4;
		name = "Barre de platine";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class platinepa
	{
		weight = 4;
		name = "Barre de platine enrichi";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cocaine_seed
	{
		weight = 1;
		name = "Graine (coca)";
		price = 1750;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cocaine
	{
		weight = 5;
		name = "Feuille de coca";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cocainep
	{
		weight = 2;
		name = "Cocaïne pure";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
	};

	class cocainepc
	{
		weight = 2;
		name = "Cocaïne coupé";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
	};

	class heroin_seed
	{
		weight = 1;
		name = "Graine (pavot)";
		price = 1850;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class heroin
	{
		weight = 6;
		name = "Fleur de pavot";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class heroinp
	{
		weight = 4;
		name = "Heroïne pure";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class seringue
	{
		weight = 1;
		name = "Seringue";
		price = 3000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class heroinps
	{
		weight = 3;
		name = "Seringue d'héroïne pure";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
	};

	class meth_seed
	{
		weight = 1;
		name = "Graine (Ephedra)";
		price = 3000;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class hsoufre
	{
		weight = 1;
		name = "Soufre hydraté";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class meth
	{
		weight = 4;
		name = "Feuille d'ephedra";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class methp
	{
		weight = 3;
		name = "Methamphetamine";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
	};

	class cannabis_seed
	{
		weight = 1;
		name = "Graine (cannabis)";
		price = 1100;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cannabis
	{
		weight = 5;
		name = "Cannabis";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class marijuana
	{
		weight = 4;
		name = "Marijuana";
		price = 0;
		illegal = 1;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
			[""%1""] call public_fnc_drugConsume;\
		";
	};

	class oilu
	{
		weight = 7;
		name = "Pétrole brut";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class oilp
	{
		weight = 5;
		name = "Pétrole traité";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class fishingpoles
	{
		weight = 1;
		name = "Filet de pêche";
		price = 1000;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class bean_seed
	{
		weight = 1;
		name = "Graine (haricot)";
		price = 350;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class bean
	{
		weight = 2;
		name = "Haricot";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class corn_seed
	{
		weight = 1;
		name = "Graine (maïs)";
		price = 200;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class corn
	{
		weight = 2;
		name = "Maïs";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cotton_seed
	{
		weight = 1;
		name = "Graine (cotton)";
		price = 275;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class cotton
	{
		weight = 2;
		name = "Cotton";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class sand
	{
		weight = 3;
		name = "Sable";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};

	class glass
	{
		weight = 3;
		name = "Verre";
		price = 0;
		illegal = 0;
		drop = "Land_Suitcase_F";
		removable = 1;
		use = 
		"\
		\
		";
	};
};
