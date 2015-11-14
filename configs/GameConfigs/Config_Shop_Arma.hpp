/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_SHOPS_ARMA
{
	class EAST_gun
	{
		name = "Armurerie de la Garde";
		side = "EAST";
		stocks[] =
		{
			"SkylineItems_PlaqueMilitaire",
			"Skyline_tl122_blanche",
			"Skyline_tl122_rouge",
			"Skyline_tl122_orange",
			"Skyline_tl122_verte",
			"Skyline_tl122_bleu",
			"Skyline_tl122_rose",
			"Skyline_tl122_jaune",
			"ToolKit",
			"ItemGPS",
			"ItemMap",
			"Skyline_NVGoogle",
			"Binocular",
			"Chemlight_red",
			"Chemlight_yellow",
			"Chemlight_green",
			"Chemlight_blue",
			"SkylineItems_Bandage",
			"hgun_FlashBall_F",
			"1Rnd_FlashBall_Mag",
			"SmokeShellWhite",
			"Rangefinder",
			"RH_fn57",
			"RH_20Rnd_57x28_FN",
			"hlc_rifle_M14_Bipod",
			"hlc_rifle_M14",
			"hlc_20Rnd_762x51_B_M14",
			"hlc_rifle_auga2_b",
			"optic_ACO_grn_smg",
			"hlc_rifle_aughbar_B",
			"hlc_30Rnd_556x45_B_AUG",
			"Trixie_Enfield_Rail",
			"Trixie_Enfield_Mag",
			"optic_LRPS",
			"RH_m1911",
			"RH_7Rnd_45cal_m1911",
			"DemoCharge_Remote_Mag"
		};
	};

	class West_gun
	{
		name = "Armurerie de la Milice";
		side = "WEST";
		stocks[] =
		{
			"SkylineItems_PlaqueMilitaire",
			"hgun_FlashBall_F",
			"1Rnd_FlashBall_Mag",
			"ToolKit",
			"ItemGPS",
			"ItemMap",
			"Skyline_NVGoogle",
			"Binocular",
			"Skyline_tl122_blanche",
			"Skyline_tl122_rouge",
			"Skyline_tl122_orange",
			"Skyline_tl122_verte",
			"Skyline_tl122_bleu",
			"Skyline_tl122_rose",
			"Skyline_tl122_jaune",
			"Chemlight_red",
			"Chemlight_yellow",
			"Chemlight_green",
			"Chemlight_blue",
			"SkylineItems_Bandage",
			"SkylineItems_RadarGun",
			"SkylineItems_Couteau",
			"SmokeShellWhite",
			"Rangefinder"
		};
	};

	class civ_gun
	{
		name = "Armurerie civile";
		side = "CIV";
		stocks[] =
		{
			"Skyline_B95",
			"Skyline_B95_Green",
			"Skyline_B95_Black",
			"2Rnd_762x51_Mag_B95"
		};
	};

	class garagiste
	{
		name = "Garagiste";
		side = "";
		stocks[] =
		{
			"ToolKit"		
		};
	};

	class genstore
	{
		name = "Magasin général";
		side = "CIV";
		stocks[] = 
		{
			"Skyline_Hache_01",
			"Skyline_Pioche_01",
			"Skyline_Pelle_01",
			"Skyline_Merlin_01",
			"SkylineItems_Bandage",
			"ItemGPS",
			"ItemMap",
			"Binocular",
			"Skyline_tl122_blanche",
			"Skyline_tl122_rouge",
			"Skyline_tl122_orange",
			"Skyline_tl122_verte",
			"Skyline_tl122_bleu",
			"Skyline_tl122_rose",
			"Skyline_tl122_jaune",
			"Skyline_NVGoogle"
		};
	};

	class GUER_genstore
	{
		name = "Magasin général Samu";
		side = "GUER";
		stocks[] = 
		{
			"SkylineItems_Bandage",
			"SkylineItems_Adrenaline",
			"SkylineItems_PocheSang",
			"SkylineItems_Defibrilateur",
			"SkylineItems_Morphine",
			"SkylineItems_Penicilline",
			"ItemMap",
			"ItemGPS",
			"Binocular",
			"ToolKit",
			"SmokeShellGreen",
			"SmokeShellRed",
			"Skyline_NVGoogle",
			"hgun_Pistol_Signal_F",
			"6Rnd_RedSignal_F",
			"6Rnd_GreenSignal_F",
			"Skyline_tl122_blanche",
			"Skyline_tl122_rouge",
			"Skyline_tl122_orange",
			"Skyline_tl122_verte",
			"Skyline_tl122_bleu",
			"Skyline_tl122_rose",
			"Skyline_tl122_jaune",
			"Chemlight_red",
			"Chemlight_yellow",
			"Chemlight_green",
			"Chemlight_blue"
		};
	};

	class parachute
	{
		name = "Magasin de parachute et parapente";
		side = "";
		stocks[] = 
		{
			"B_Parachute",
			"FLAY_HangGlider_Bag",
			"FLAY_HangGliderBlack_Bag"
		};
	};
};