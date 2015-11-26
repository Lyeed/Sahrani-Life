class ALYSIA_VEHICLES_INFO
{
	/* MASTER VEHICLES CONFIG */
	insurance_percentage = 0.37;
	garage_percentage = 0.04;
	steal_percentage = 0.20;
	sell_percentage = 0.40;
	transfert_percentage = 0.03;
	// based on vehicle's buyPrice
};

class ALYSIA_VEHICLES
{
	/*
	class master_vehicleClassname
	{
		buy price 				-NUMBER-	(vehicle shop buy price)
    Ex: buyPrice = 1910000;
    ----------------------------
		virtual inventory	-NUMBER-	(virtual inventory space)
    Ex: inventory = 45;
    ----------------------------
		side 							-TXT-			(allow vehicles defined as WEST,EAST,GUER to be opened by faction member without having keys) 
    possible : [WEST,EAST,GUER,CIV]
    Ex: side = "WEST";
    ----------------------------
		insurance 				-NUMBER-	(can be insured)
    possible [0(no),1(yes]
    Ex: insurance = 1;
	----------------------------
		license						-TXT-			(license name/empty if no need : player needs to have license x to buy vehicle. Eg: CONFIG_licenses)
    Ex: license = "truck";
    ----------------------------
		rank 							-NUMBER-	(use in WEST,EAST,GUER factions : player needs to have alteast rank x to buy vehicle. Must be 0 for civilian. Eg: CONFIG_factions)
    Ex: rank = 4;
    ----------------------------
		colors 						-ARRAT-		(vehicle's color classnames)
    Ex: colors[] = {"className_color1", "className_color2", ...};
    ----------------------------
		realname 					-TXT-			(vehicle name in shop)
    Ex: realname = "Camion Ben";
    ----------------------------
	};

	OPTIONAL:         (multiple colors for the same model)
	class master_vehicleClassname_color1 : master_vehicleClassname {};
	class master_vehicleClassname_color2 : master_vehicleClassname {};
	class master_vehicleClassname_color3 : master_vehicleClassname {};
	...
	**				CIVILIAN VEHICLES
	*/
	class madsa_hummer_h2
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"madsa_hummer_h2_black_F",
			"madsa_hummer_h2_blue_F",
			"madsa_hummer_h2_gold_F",
			"madsa_hummer_h2_green_F",
			"madsa_hummer_h2_pink_F",
			"madsa_hummer_h2_purple_F",
			"madsa_hummer_h2_red_F",
			"madsa_hummer_h2_silver_F",
			"madsa_hummer_h2_white_F",
			"madsa_hummer_h2_yellow_F"
		};
		realname = "Hummer H2";
	};
	class madsa_hummer_h2_black_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_blue_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_gold_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_green_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_pink_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_purple_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_red_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_silver_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_white_F : madsa_hummer_h2 {};
	class madsa_hummer_h2_yellow_F : madsa_hummer_h2 {};

	class DAR_FusionCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"DAR_FusionCiv",
			"DAR_FusionCivBlack",
			"DAR_FusionCivBlue",
			"DAR_FusionCivRed"
		};
		realname = "Ford Fusion";
	};
  	class DAR_FusionCivBlack : DAR_FusionCiv {};
  	class DAR_FusionCivBlue : DAR_FusionCiv {};
  	class DAR_FusionCivRed : DAR_FusionCiv {};

  	class DAR_TaurusCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"DAR_TaurusCiv",
			"DAR_TaurusCivBlack",
			"DAR_TaurusCivBlue"
		};
		realname = "Ford Taurus";
	};
  	class DAR_TaurusCivBlack : DAR_TaurusCiv {};
  	class DAR_TaurusCivBlue : DAR_TaurusCiv {};

  	class shounka_a3_renaultmagnum_f
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Renault Magnum";
	};

	class Mrshounka_Alfa_Romeo_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "drive";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_Alfa_Romeo_noir",
			"Mrshounka_Alfa_Romeo_bleufonce",
			"Mrshounka_Alfa_Romeo_rouge",
			"Mrshounka_Alfa_Romeo_jaune",
			"Mrshounka_Alfa_Romeo_rose",
			"Mrshounka_Alfa_Romeo_grise",
			"Mrshounka_Alfa_Romeo_violet",
			"Mrshounka_Alfa_Romeo_orange"
		};
		realname = "Alfa Romeo";
	};
	class Mrshounka_Alfa_Romeo_noir : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_bleufonce : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_rouge : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_jaune : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_rose : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_grise : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_violet : Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_orange : Mrshounka_Alfa_Romeo_civ {};

	class Mrshounka_rs4_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_rs4_civ_noir",
			"Mrshounka_rs4_civ_bleufonce",
			"Mrshounka_rs4_civ_rouge",
			"Mrshounka_rs4_civ_jaune",
			"Mrshounka_rs4_civ_rose",
			"Mrshounka_rs4_civ_grise",
			"Mrshounka_rs4_civ_violet",
			"Mrshounka_rs4_civ_orange"
		};
		realname = "Audi RSA4";
	};

	class Mrshounka_rs4_civ_noir : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_bleufonce : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_rouge : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_jaune : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_rose : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_grise : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_violet : Mrshounka_rs4_civ {};
	class Mrshounka_rs4_civ_orange : Mrshounka_rs4_civ {};

	class shounka_a3_rs5_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_a3_rs5_civ_noir",
			"shounka_a3_rs5_civ_bleufonce",
			"shounka_a3_rs5_civ_rouge",
			"shounka_a3_rs5_civ_jaune",
			"shounka_a3_rs5_civ_rose",
			"shounka_a3_rs5_civ_grise",
			"shounka_a3_rs5_civ_violet",
			"shounka_a3_rs5_civ_orange"
		};
		realname = "Audi RS5";
	};
	
	class shounka_a3_rs5_civ_noir : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_bleufonce : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_rouge : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_jaune : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_rose : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_grise : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_violet : shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_orange : shounka_a3_rs5_civ {};

	class shounka_rs6
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_rs6_noir",
			"shounka_rs6_bleufonce",
			"shounka_rs6_rouge",
			"shounka_rs6_jaune",
			"shounka_rs6_rose",
			"shounka_rs6_grise",
			"shounka_rs6_violet",
			"shounka_rs6_orange"
		};
		realname = "Audi RS6";
	};
	
	class shounka_rs6_noir : shounka_rs6 {};
	class shounka_rs6_bleufonce : shounka_rs6 {};
	class shounka_rs6_rouge : shounka_rs6 {};
	class shounka_rs6_jaune : shounka_rs6 {};
	class shounka_rs6_rose : shounka_rs6 {};
	class shounka_rs6_grise : shounka_rs6 {};
	class shounka_rs6_violet : shounka_rs6 {};
	class shounka_rs6_orange : shounka_rs6 {};

	class Mrshounka_bmwm1_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_bmwm1_civ_noir",
			"Mrshounka_bmwm1_civ_bleufonce",
			"Mrshounka_bmwm1_civ_rouge",
			"Mrshounka_bmwm1_civ_jaune",
			"Mrshounka_bmwm1_civ_rose",
			"Mrshounka_bmwm1_civ_grise",
			"Mrshounka_bmwm1_civ_violet",
			"Mrshounka_bmwm1_civ_orange"
		};
		realname = "BMW 1";
	};
	
	class Mrshounka_bmwm1_civ_noir : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_bleufonce : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_rouge : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_jaune : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_rose : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_grise : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_violet : Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_orange : Mrshounka_bmwm1_civ {};

	class Mrshounka_bmwm6_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_bmwm6_noir",
			"Mrshounka_bmwm6_bleufonce",
			"Mrshounka_bmwm6_rouge",
			"Mrshounka_bmwm6_jaune",
			"Mrshounka_bmwm6_rose",
			"Mrshounka_bmwm6_grise",
			"Mrshounka_bmwm6_violet",
			"Mrshounka_bmwm6_orange"
		};
		realname = "BMW M6";
	};
	
	class Mrshounka_bmwm6_noir : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_bleufonce : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_rouge : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_jaune : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_rose : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_grise : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_violet : Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_orange : Mrshounka_bmwm6_civ {};

	class Mrshounka_Bowler_c
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_Bowler_c_noir",
			"Mrshounka_Bowler_c_bleufonce",
			"Mrshounka_Bowler_c_rouge",
			"Mrshounka_Bowler_c_jaune",
			"Mrshounka_Bowler_c_rose",
			"Mrshounka_Bowler_c_grise",
			"Mrshounka_Bowler_c_violet",
			"Mrshounka_Bowler_c_orange"
		};
		realname = "Bowler";
	};
	
	class Mrshounka_Bowler_c_noir : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_bleufonce : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_rouge : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_jaune : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_rose : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_grise : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_violet : Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_orange : Mrshounka_Bowler_c {};

	class shounka_buggy
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_buggy_noir",
			"shounka_buggy_bleufonce",
			"shounka_buggy_rouge",
			"shounka_buggy_jaune",
			"shounka_buggy_rose",
			"shounka_buggy_grise",
			"shounka_buggy_violet",
			"shounka_buggy_orange"
		};
		realname = "Buggy";
	};
	
	class shounka_buggy_noir : shounka_buggy {};
	class shounka_buggy_bleufonce : shounka_buggy {};
	class shounka_buggy_rouge : shounka_buggy {};
	class shounka_buggy_jaune : shounka_buggy {};
	class shounka_buggy_rose : shounka_buggy {};
	class shounka_buggy_grise : shounka_buggy {};
	class shounka_buggy_violet : shounka_buggy {};
	class shounka_buggy_orange : shounka_buggy {};

	class shounka_avalanche
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_avalanche_noir",
			"shounka_avalanche_bleufonce",
			"shounka_avalanche_rouge",
			"shounka_avalanche_jaune",
			"shounka_avalanche_rose",
			"shounka_avalanche_grise",
			"shounka_avalanche_violet",
			"shounka_avalanche_orange"
		};
		realname = "Chevrolet Avalanche";
	};
	
	class shounka_avalanche_noir : shounka_avalanche {};
	class shounka_avalanche_bleufonce : shounka_avalanche {};
	class shounka_avalanche_rouge : shounka_avalanche {};
	class shounka_avalanche_jaune : shounka_avalanche {};
	class shounka_avalanche_rose : shounka_avalanche {};
	class shounka_avalanche_grise : shounka_avalanche {};
	class shounka_avalanche_violet : shounka_avalanche {};
	class shounka_avalanche_orange : shounka_avalanche {};

	class shounka_monsteur
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_monsteur_noir",
			"shounka_monsteur_bleufonce",
			"shounka_monsteur_rouge",
			"shounka_monsteur_jaune",
			"shounka_monsteur_rose",
			"shounka_monsteur_grise",
			"shounka_monsteur_violet",
			"shounka_monsteur_orange"
		};
		realname = "Chevrolet Monster";
	};
	
	class shounka_monsteur_noir : shounka_monsteur {};
	class shounka_monsteur_bleufonce : shounka_monsteur {};
	class shounka_monsteur_rouge : shounka_monsteur {};
	class shounka_monsteur_jaune : shounka_monsteur {};
	class shounka_monsteur_rose : shounka_monsteur {};
	class shounka_monsteur_grise : shounka_monsteur {};
	class shounka_monsteur_violet : shounka_monsteur {};
	class shounka_monsteur_orange : shounka_monsteur {};

	class Mrshounka_a3_ds3_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_ds3_civ_noir",
			"Mrshounka_a3_ds3_civ_bleufonce",
			"Mrshounka_a3_ds3_civ_civ_rouge",
			"Mrshounka_a3_ds3_civ_civ_jaune",
			"Mrshounka_a3_ds3_civ_civ_rose",
			"Mrshounka_a3_ds3_civ_civ_grise",
			"Mrshounka_a3_ds3_civ_civ_violet",
			"Mrshounka_a3_ds3_civ_civ_orange"
		};
		realname = "Citroen DS3";
	};

	class Mrshounka_a3_ds3_civ_noir : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_bleufonce : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_rouge : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_jaune : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_rose : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_grise : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_violet : Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_orange : Mrshounka_a3_ds3_civ {};

	class shounka_a3_ds4_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"shounka_a3_ds4_noir",
			"shounka_a3_ds4_bleufonce",
			"shounka_a3_ds4_rouge",
			"shounka_a3_ds4_jaune",
			"shounka_a3_ds4_rose",
			"shounka_a3_ds4_grise",
			"shounka_a3_ds4_violet",
			"shounka_a3_ds4_orange"
		};
		realname = "Citroen DS4";
	};

	class shounka_a3_ds4_noir : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_bleufonce : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_rouge : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_jaune : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_rose : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_grise : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_violet : shounka_a3_ds4_civ {};
	class shounka_a3_ds4_orange : shounka_a3_ds4_civ {};

	class Mrshounka_c4_p_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_c4_p_bleufonce",
			"Mrshounka_c4_p_grise",
			"Mrshounka_c4_p_jaune",
			"Mrshounka_c4_p_noir",
			"Mrshounka_c4_p_orange",
			"Mrshounka_c4_p_rose",
			"Mrshounka_c4_p_rouge",
			"Mrshounka_c4_p_violet"
		};
		realname = "Citroen C4";
	};

	class Mrshounka_c4_p_bleufonce : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_grise : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_jaune : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_noir : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_orange : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_rose : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_rouge : Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_violet : Mrshounka_c4_p_civ {};

	class shounka_nemo
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"shounka_nemo_bleufonce",
			"shounka_nemo_grise",
			"shounka_nemo_jaune",
			"shounka_nemo_noir",
			"shounka_nemo_orange",
			"shounka_nemo_rose",
			"shounka_nemo_rouge",
			"shounka_nemo_violet"
		};
		realname = "Citroen Nemo";
	};

	class shounka_nemo_bleufonce : shounka_nemo {};
	class shounka_nemo_grise : shounka_nemo {};
	class shounka_nemo_jaune : shounka_nemo {};
	class shounka_nemo_noir : shounka_nemo {};
	class shounka_nemo_orange : shounka_nemo {};
	class shounka_nemo_rose : shounka_nemo {};
	class shounka_nemo_rouge : shounka_nemo {};
	class shounka_nemo_violet : shounka_nemo {};

	class shounka_a3_cliors_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"shounka_a3_cliors_civ_bleufonce",
			"shounka_a3_cliors_civ_grise",
			"shounka_a3_cliors_civ_jaune",
			"shounka_a3_cliors_civ_noir",
			"shounka_a3_cliors_civ_orange",
			"shounka_a3_cliors_civ_rose",
			"shounka_a3_cliors_civ_rouge",
			"shounka_a3_cliors_civ_violet"
		};
		realname = "Renault Clio";
	};

	class shounka_a3_cliors_civ_bleufonce : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_grise : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_jaune : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_noir : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_orange : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_rose : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_rouge : shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_violet : shounka_a3_cliors_civ {};

	class Mrshounka_a3_dodge15_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_dodge15_civ_bleufonce",
			"Mrshounka_a3_dodge15_civ_grise",
			"Mrshounka_a3_dodge15_civ_jaune",
			"Mrshounka_a3_dodge15_civ_noir",
			"Mrshounka_a3_dodge15_civ_orange",
			"Mrshounka_a3_dodge15_civ_rose",
			"Mrshounka_a3_dodge15_civ_rouge",
			"Mrshounka_a3_dodge15_civ_violet"
		};
		realname = "Dodge Charger";
	};

	class Mrshounka_a3_dodge15_civ_bleufonce : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_grise : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_jaune : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_noir : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_orange : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_rose : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_rouge : Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_violet : Mrshounka_a3_dodge15_civ {};

	class shounka_f430_spider
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_f430_spider_bleufonce",
			"shounka_f430_spider_grise",
			"shounka_f430_spider_jaune",
			"shounka_f430_spider_noir",
			"shounka_f430_spider_orange",
			"shounka_f430_spider_rose",
			"shounka_f430_spider_rouge",
			"shounka_f430_spider_violet"
		};
		realname = "Ferrari 430 Spider";
	};

	class shounka_f430_spider_bleufonce : shounka_f430_spider {};
	class shounka_f430_spider_grise : shounka_f430_spider {};
	class shounka_f430_spider_jaune : shounka_f430_spider {};
	class shounka_f430_spider_noir : shounka_f430_spider {};
	class shounka_f430_spider_orange : shounka_f430_spider {};
	class shounka_f430_spider_rose : shounka_f430_spider {};
	class shounka_f430_spider_rouge : shounka_f430_spider {};
	class shounka_f430_spider_violet : shounka_f430_spider {};

	class shounka_gt
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"shounka_gt_bleufonce",
			"shounka_gt_grise",
			"shounka_gt_jaune",
			"shounka_gt_noir",
			"shounka_gt_orange",
			"shounka_gt_rose",
			"shounka_gt_rouge",
			"shounka_gt_violet"
		};
		realname = "Ford GT";
	};

	class shounka_gt_bleufonce : shounka_gt {};
	class shounka_gt_grise : shounka_gt {};
	class shounka_gt_jaune : shounka_gt {};
	class shounka_gt_noir : shounka_gt {};
	class shounka_gt_orange : shounka_gt {};
	class shounka_gt_rose : shounka_gt {};
	class shounka_gt_rouge : shounka_gt {};
	class shounka_gt_violet : shounka_gt {};

	class Mrshounka_mustang_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_mustang_mat",
			"Mrshounka_mustang_noir",
			"Mrshounka_mustang_mat_n",
			"Mrshounka_mustang_bleufonce",
			"Mrshounka_mustang_mat_b",
			"Mrshounka_mustang_rouge",
			"Mrshounka_mustang_jaune",
			"Mrshounka_mustang_rose",
			"Mrshounka_mustang_grise",
			"Mrshounka_mustang_violet",
			"Mrshounka_mustang_orange"
		};
		realname = "Ford Mustang";
	};

	class Mrshounka_mustang_mat : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_noir : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_mat_n : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_bleufonce : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_mat_b : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_rouge : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_jaune : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_rose : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_grise : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_violet : Mrshounka_mustang_civ {};
	class Mrshounka_mustang_orange : Mrshounka_mustang_civ {};

	class Mrshounka_raptor2_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_raptor2_bleufonce",
			"Mrshounka_raptor2_grise",
			"Mrshounka_raptor2_jaune",
			"Mrshounka_raptor2_noir",
			"Mrshounka_raptor2_orange",
			"Mrshounka_raptor2_rose",
			"Mrshounka_raptor2_rouge",
			"Mrshounka_raptor2_violet"
		};
		realname = "Ford Raptor";
	};

	class Mrshounka_raptor2_bleufonce : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_grise : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_jaune : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_noir : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_orange : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_rose : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_rouge : Mrshounka_raptor2_civ {};
	class Mrshounka_raptor2_violet : Mrshounka_raptor2_civ {};

	class Mrshounka_Vandura_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_Vandura_civ_bleufonce",
			"Mrshounka_Vandura_civ_grise",
			"Mrshounka_Vandura_civ_jaune",
			"Mrshounka_Vandura_civ_noir",
			"Mrshounka_Vandura_civ_orange",
			"Mrshounka_Vandura_civ_rose",
			"Mrshounka_Vandura_civ_rouge",
			"Mrshounka_Vandura_civ_violet"
		};
		realname = "GMC Vendura";
	};

	class Mrshounka_Vandura_civ_bleufonce : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_grise : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_jaune : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_noir : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_orange : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_rose : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_rouge : Mrshounka_Vandura_civ {};
	class Mrshounka_Vandura_civ_violet : Mrshounka_Vandura_civ {};

	class Mrshounka_golfvi_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_golfvi_bleufonce",
			"Mrshounka_golfvi_grise",
			"Mrshounka_golfvi_jaune",
			"Mrshounka_golfvi_noir",
			"Mrshounka_golfvi_orange",
			"Mrshounka_golfvi_rose",
			"Mrshounka_golfvi_rouge",
			"Mrshounka_golfvi_violet"
		};
		realname = "Golf VI";
	};

	class Mrshounka_golfvi_bleufonce : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_grise : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_jaune : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_noir : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_orange : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_rose : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_rouge : Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_violet : Mrshounka_golfvi_civ {};

	class Mrshounka_hummer_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_hummer_civ_bleufonce",
			"Mrshounka_hummer_civ_grise",
			"Mrshounka_hummer_civ_jaune",
			"Mrshounka_hummer_civ_noir",
			"Mrshounka_hummer_civ_orange",
			"Mrshounka_hummer_civ_rose",
			"Mrshounka_hummer_civ_rouge",
			"Mrshounka_hummer_civ_violet"
		};
		realname = "Hummer H1";
	};

	class Mrshounka_hummer_civ_bleufonce : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_grise :Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_jaune : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_noir : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_orange : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_rose : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_rouge : Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_violet : Mrshounka_hummer_civ {};

	class Mrshounka_a3_iveco_f
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"shounka_ivceco_bleufonce",
			"shounka_ivceco_grise",
			"shounka_ivceco_jaune",
			"shounka_ivceco_noir",
			"shounka_ivceco_orange",
			"shounka_ivceco_rose",
			"shounka_ivceco_rouge",
			"shounka_ivceco_violet"
		};
		realname = "Iveco";
	};

	class shounka_ivceco_bleufonce : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_grise : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_jaune : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_noir : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_orange : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_rose : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_rouge : Mrshounka_a3_iveco_f {};
	class shounka_ivceco_violet : Mrshounka_a3_iveco_f {};

	class Mrshounka_cherokee_noir
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_cherokee_noir_mat",
			"Mrshounka_cherokee_noir_bleu",
			"Mrshounka_cherokee_noir_bleu_mat",
			"Mrshounka_cherokee_noir_blanc",
			"Mrshounka_cherokee_noir_blanc_mat",
			"Mrshounka_cherokee_noir_violet",
			"Mrshounka_cherokee_noir_violet_mat",
			"Mrshounka_cherokee_noir_rouge",
			"Mrshounka_cherokee_noir_rouge_mat"
		};
		realname = "Jeep Cherokee";
	};

	class Mrshounka_cherokee_noir_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_blanc : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_blanc_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet_mat : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge : Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge_mat : Mrshounka_cherokee_noir {};

	class mrshounka_huracan_c
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"mrshounka_huracan_c_bleufonce",
			"mrshounka_huracan_c_grise",
			"mrshounka_huracan_c_jaune",
			"mrshounka_huracan_c_noir",
			"mrshounka_huracan_c_orange",
			"mrshounka_huracan_c_rose",
			"mrshounka_huracan_c_rouge",
			"mrshounka_huracan_c_violet"
		};
		realname = "Lamborgini Huracan";
	};

	class mrshounka_huracan_c_bleufonce : mrshounka_huracan_c {};
	class mrshounka_huracan_c_grise : mrshounka_huracan_c {};
	class mrshounka_huracan_c_jaune : mrshounka_huracan_c {};
	class mrshounka_huracan_c_noir : mrshounka_huracan_c {};
	class mrshounka_huracan_c_orange : mrshounka_huracan_c {};
	class mrshounka_huracan_c_rose : mrshounka_huracan_c {};
	class mrshounka_huracan_c_rouge : mrshounka_huracan_c {};
	class mrshounka_huracan_c_violet : mrshounka_huracan_c {};

	class Mrshounka_veneno_c
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_veneno_c_noir",
			"Mrshounka_veneno_c_bleu",
			"Mrshounka_veneno_c_jaune"
		};
		realname = "Lamborgini Veneno";
	};

	class Mrshounka_veneno_c_noir : Mrshounka_veneno_c {};
	class Mrshounka_veneno_c_bleu : Mrshounka_veneno_c {};
	class Mrshounka_veneno_c_jaune : Mrshounka_veneno_c {};

	class Mrshounka_evox_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_evox_bleufonce",
			"Mrshounka_evox_grise",
			"Mrshounka_evox_jaune",
			"Mrshounka_evox_noir",
			"Mrshounka_evox_orange",
			"Mrshounka_evox_rose",
			"Mrshounka_evox_rouge",
			"Mrshounka_evox_violet"
		};
		realname = "Lancer Evolution";
	};

	class Mrshounka_evox_bleufonce : Mrshounka_evox_civ {};
	class Mrshounka_evox_grise : Mrshounka_evox_civ {};
	class Mrshounka_evox_jaune : Mrshounka_evox_civ {};
	class Mrshounka_evox_noir : Mrshounka_evox_civ {};
	class Mrshounka_evox_orange : Mrshounka_evox_civ {};
	class Mrshounka_evox_rose : Mrshounka_evox_civ {};
	class Mrshounka_evox_rouge : Mrshounka_evox_civ {};
	class Mrshounka_evox_violet : Mrshounka_evox_civ {};

	class shounka_limo_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_limo_civ_bleufonce",
			"shounka_limo_civ_grise",
			"shounka_limo_civ_jaune",
			"shounka_limo_civ_noir",
			"shounka_limo_civ_orange",
			"shounka_limo_civ_rose",
			"shounka_limo_civ_rouge",
			"shounka_limo_civ_violet"
		};
		realname = "Limousine";
	};

	class shounka_limo_civ_bleufonce : shounka_limo_civ {};
	class shounka_limo_civ_grise : shounka_limo_civ {};
	class shounka_limo_civ_jaune : shounka_limo_civ {};
	class shounka_limo_civ_noir : shounka_limo_civ {};
	class shounka_limo_civ_orange : shounka_limo_civ {};
	class shounka_limo_civ_rose : shounka_limo_civ {};
	class shounka_limo_civ_rouge : shounka_limo_civ {};
	class shounka_limo_civ_violet : shounka_limo_civ {};

	class Mrshounka_lincoln_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_lincoln_bleufonce",
			"Mrshounka_lincoln_grise",
			"Mrshounka_lincoln_jaune",
			"Mrshounka_lincoln_noir",
			"Mrshounka_lincoln_orange",
			"Mrshounka_lincoln_rose",
			"Mrshounka_lincoln_rouge",
			"Mrshounka_lincoln_violet"
		};
		realname = "Lincoln";
	};

	class Mrshounka_lincoln_bleufonce : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_grise : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_jaune : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_noir : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_orange : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_rose : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_rouge : Mrshounka_lincoln_civ {};
	class Mrshounka_lincoln_violet : Mrshounka_lincoln_civ {};

	class Mrshounka_lykan_c
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_lykan_c_bleufonce",
			"Mrshounka_lykan_c_grise",
			"Mrshounka_lykan_c_jaune",
			"Mrshounka_lykan_c_noir",
			"Mrshounka_lykan_c_orange",
			"Mrshounka_lykan_c_rose",
			"Mrshounka_lykan_c_rouge",
			"Mrshounka_lykan_c_violet"
		};
		realname = "Lykan Hypersport";
	};

	class Mrshounka_lykan_c_bleufonce : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_grise : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_jaune : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_noir : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_orange : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_rose : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_rouge : Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_violet : Mrshounka_lykan_c {};

	class shounka_mp4
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_mp4_bleufonce",
			"shounka_mp4_grise",
			"shounka_mp4_jaune",
			"shounka_mp4_noir",
			"shounka_mp4_orange",
			"shounka_mp4_rose",
			"shounka_mp4_rouge",
			"shounka_mp4_violet"
		};
		realname = "McLaren MP4";
	};

	class shounka_mp4_bleufonce : shounka_mp4 {};
	class shounka_mp4_grise : shounka_mp4 {};
	class shounka_mp4_jaune : shounka_mp4 {};
	class shounka_mp4_noir : shounka_mp4 {};
	class shounka_mp4_orange : shounka_mp4 {};
	class shounka_mp4_rose : shounka_mp4 {};
	class shounka_mp4_rouge : shounka_mp4 {};
	class shounka_mp4_violet : shounka_mp4 {};

	class Mrshounka_mercedes_190_p_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_mercedes_190_p_bleufonce",
			"Mrshounka_mercedes_190_p_grise",
			"Mrshounka_mercedes_190_p_jaune",
			"Mrshounka_mercedes_190_p_noir",
			"Mrshounka_mercedes_190_p_orange",
			"Mrshounka_mercedes_190_p_rose",
			"Mrshounka_mercedes_190_p_rouge",
			"Mrshounka_mercedes_190_p_violet"
		};
		realname = "Mercedes 190";
	};

	class Mrshounka_mercedes_190_p_bleufonce : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_grise : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_jaune : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_noir : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_orange : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_rose : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_rouge : Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_violet : Mrshounka_mercedes_190_p_civ {};

	class Mrshounka_c63_2015_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_c63_2015_mat",
			"Mrshounka_c63_2015_noir",
			"Mrshounka_c63_2015_mat_n",
			"Mrshounka_c63_2015_bleufonce",
			"Mrshounka_c63_2015_mat_b",
			"Mrshounka_c63_2015_rouge",
			"Mrshounka_c63_2015_jaune",
			"Mrshounka_c63_2015_rose",
			"Mrshounka_c63_2015_grise",
			"Mrshounka_c63_2015_violet",
			"Mrshounka_c63_2015_orange"
		};
		realname = "Mercedes C63";
	};

	class Mrshounka_c63_2015_mat : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_noir : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_mat_n : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_bleufonce : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_mat_b : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_rouge : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_jaune : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_rose : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_grise : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_violet : Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_orange : Mrshounka_c63_2015_civ {};

	class shounka_clk
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_clk_bleufonce",
			"shounka_clk_grise",
			"shounka_clk_jaune",
			"shounka_clk_noir",
			"shounka_clk_orange",
			"shounka_clk_rose",
			"shounka_clk_rouge",
			"shounka_clk_violet"
		};
		realname = "Mercedes CLK";
	};

	class shounka_clk_bleufonce : shounka_clk {};
	class shounka_clk_grise : shounka_clk {};
	class shounka_clk_jaune : shounka_clk {};
	class shounka_clk_noir : shounka_clk {};
	class shounka_clk_orange : shounka_clk {};
	class shounka_clk_rose : shounka_clk {};
	class shounka_clk_rouge : shounka_clk {};
	class shounka_clk_violet : shounka_clk {};

	class shounka_a3_spr_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"shounka_a3_spr_civ_bleufonce",
			"shounka_a3_spr_civ_grise",
			"shounka_a3_spr_civ_jaune",
			"shounka_a3_spr_civ_noir",
			"shounka_a3_spr_civ_orange",
			"shounka_a3_spr_civ_rose",
			"shounka_a3_spr_civ_rouge",
			"shounka_a3_spr_civ_violet"
		};
		realname = "Mercedes Sprinter";
	};

	class shounka_a3_spr_civ_bleufonce : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_grise : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_jaune : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_noir : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_orange : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_rose : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_rouge : shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_violet : shounka_a3_spr_civ {};

	class Mrshounka_a3_gtr_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_gtr_civ_noir",
			"Mrshounka_a3_gtr_civ_bleu"
		};
		realname = "Nissan GTR";
	};

	class Mrshounka_a3_gtr_civ_noir : Mrshounka_a3_gtr_civ {};
	class Mrshounka_a3_gtr_civ_bleu : Mrshounka_a3_gtr_civ {};

	class Mrshounka_pagani_c
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_pagani_c_bleufonce",
			"Mrshounka_pagani_c_grise",
			"Mrshounka_pagani_c_jaune",
			"Mrshounka_pagani_c_noir",
			"Mrshounka_pagani_c_orange",
			"Mrshounka_pagani_c_rose",
			"Mrshounka_pagani_c_rouge",
			"Mrshounka_pagani_c_violet"
		};
		realname = "Pagani Huayra";
	};

	class Mrshounka_pagani_c_bleufonce : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_grise : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_jaune : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_noir : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_orange : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_rose : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_rouge : Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_violet : Mrshounka_pagani_c {};

	class Mrshounka_207_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_207_bleufonce",
			"Mrshounka_207_grise",
			"Mrshounka_207_jaune",
			"Mrshounka_207_noir",
			"Mrshounka_207_orange",
			"Mrshounka_207_rose",
			"Mrshounka_207_rouge",
			"Mrshounka_207_violet"
		};
		realname = "Peugeot 207";
	};

	class Mrshounka_207_bleufonce : Mrshounka_207_civ {};
	class Mrshounka_207_grise : Mrshounka_207_civ {};
	class Mrshounka_207_jaune : Mrshounka_207_civ {};
	class Mrshounka_207_noir : Mrshounka_207_civ {};
	class Mrshounka_207_orange : Mrshounka_207_civ {};
	class Mrshounka_207_rose : Mrshounka_207_civ {};
	class Mrshounka_207_rouge : Mrshounka_207_civ {};
	class Mrshounka_207_violet : Mrshounka_207_civ {};

	class Mrshounka_a3_308_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_308_civ_bleufonce",
			"Mrshounka_a3_308_civ_grise",
			"Mrshounka_a3_308_civ_jaune",
			"Mrshounka_a3_308_civ_noir",
			"Mrshounka_a3_308_civ_orange",
			"Mrshounka_a3_308_civ_rose",
			"Mrshounka_a3_308_civ_rouge",
			"Mrshounka_a3_308_civ_violet"
		};
		realname = "Peugeot 308";
	};

	class Mrshounka_a3_308_civ_bleufonce : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_grise : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_jaune : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_noir : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_orange : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_rose : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_rouge : Mrshounka_a3_308_civ {};
	class Mrshounka_a3_308_civ_violet : Mrshounka_a3_308_civ {};

	class Mrshounka_a3_308_rcz
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_308_rcz_bleufonce",
			"Mrshounka_a3_308_rcz_grise",
			"Mrshounka_a3_308_rcz_jaune",
			"Mrshounka_a3_308_rcz_noir",
			"Mrshounka_a3_308_rcz_orange",
			"Mrshounka_a3_308_rcz_rose",
			"Mrshounka_a3_308_rcz_rouge",
			"Mrshounka_a3_308_rcz_violet"
		};
		realname = "Peugeot 308 RCZ";
	};

	class Mrshounka_a3_308_rcz_bleufonce : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_grise : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_jaune : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_noir : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_orange : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_rose : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_rouge : Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_violet : Mrshounka_a3_308_rcz {};

	class shounka_a3_peugeot508_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"shounka_a3_peugeot508_civ_bleufonce",
			"shounka_a3_peugeot508_civ_grise",
			"shounka_a3_peugeot508_civ_jaune",
			"shounka_a3_peugeot508_civ_noir",
			"shounka_a3_peugeot508_civ_orange",
			"shounka_a3_peugeot508_civ_rose",
			"shounka_a3_peugeot508_civ_rouge",
			"shounka_a3_peugeot508_civ_violet"
		};
		realname = "Peugeot 508";
	};

	class shounka_a3_peugeot508_civ_bleufonce : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_grise : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_jaune : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_noir : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_orange : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_rose : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_rouge : shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_violet : shounka_a3_peugeot508_civ {};

	class shounka_porsche911
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_porsche911_bleufonce",
			"shounka_porsche911_grise",
			"shounka_porsche911_jaune",
			"shounka_porsche911_noir",
			"shounka_porsche911_orange",
			"shounka_porsche911_rose",
			"shounka_porsche911_rouge",
			"shounka_porsche911_violet"
		};
		realname = "Porshe 911";
	};

	class shounka_porsche911_bleufonce : shounka_porsche911 {};
	class shounka_porsche911_grise : shounka_porsche911 {};
	class shounka_porsche911_jaune : shounka_porsche911 {};
	class shounka_porsche911_noir : shounka_porsche911 {};
	class shounka_porsche911_orange : shounka_porsche911 {};
	class shounka_porsche911_rose : shounka_porsche911 {};
	class shounka_porsche911_rouge : shounka_porsche911 {};
	class shounka_porsche911_violet : shounka_porsche911 {};

	class mrshounka_92_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"mrshounka_92_civ_bleufonce",
			"mrshounka_92_civ_grise",
			"mrshounka_92_civ_jaune",
			"mrshounka_92_civ_noir",
			"mrshounka_92_civ_orange",
			"mrshounka_92_civ_rose",
			"mrshounka_92_civ_rouge",
			"mrshounka_92_civ_violet"
		};
		realname = "Porshe 92";
	};

	class mrshounka_92_civ_bleufonce : mrshounka_92_civ {};
	class mrshounka_92_civ_grise : mrshounka_92_civ {};
	class mrshounka_92_civ_jaune : mrshounka_92_civ {};
	class mrshounka_92_civ_noir : mrshounka_92_civ {};
	class mrshounka_92_civ_orange : mrshounka_92_civ {};
	class mrshounka_92_civ_rose : mrshounka_92_civ {};
	class mrshounka_92_civ_rouge : mrshounka_92_civ {};
	class mrshounka_92_civ_violet : mrshounka_92_civ {};

	class Mrshounka_cayenne_p_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_cayenne_p_bleufonce",
			"Mrshounka_cayenne_p_grise",
			"Mrshounka_cayenne_p_jaune",
			"Mrshounka_cayenne_p_noir",
			"Mrshounka_cayenne_p_orange",
			"Mrshounka_cayenne_p_rose",
			"Mrshounka_cayenne_p_rouge",
			"Mrshounka_cayenne_p_violet"
		};
		realname = "Porshe Cayenne";
	};

	class Mrshounka_cayenne_p_bleufonce : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_grise : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_jaune : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_noir : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_orange : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_rose : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_rouge : Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_violet : Mrshounka_cayenne_p_civ {};

	class Mrshounka_r5_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_r5_bleufonce",
			"Mrshounka_r5_grise",
			"Mrshounka_r5_jaune",
			"Mrshounka_r5_noir",
			"Mrshounka_r5_orange",
			"Mrshounka_r5_rose",
			"Mrshounka_r5_rouge",
			"Mrshounka_r5_violet"
		};
		realname = "Renault 5";
	};

	class Mrshounka_r5_bleufonce : Mrshounka_r5_civ {};
	class Mrshounka_r5_grise : Mrshounka_r5_civ {};
	class Mrshounka_r5_jaune : Mrshounka_r5_civ {};
	class Mrshounka_r5_noir : Mrshounka_r5_civ {};
	class Mrshounka_r5_orange : Mrshounka_r5_civ {};
	class Mrshounka_r5_rose : Mrshounka_r5_civ {};
	class Mrshounka_r5_rouge : Mrshounka_r5_civ {};
	class Mrshounka_r5_violet : Mrshounka_r5_civ {};

	class Mrshounka_megane_rs_2015_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_megane_rs_2015_bleufonce",
			"Mrshounka_megane_rs_2015_grise",
			"Mrshounka_megane_rs_2015_jaune",
			"Mrshounka_megane_rs_2015_noir",
			"Mrshounka_megane_rs_2015_orange",
			"Mrshounka_megane_rs_2015_rose",
			"Mrshounka_megane_rs_2015_rouge",
			"Mrshounka_megane_rs_2015_violet"
		};
		realname = "Renault Megane RS";
	};

	class Mrshounka_megane_rs_2015_bleufonce : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_grise : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_jaune : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_noir : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_orange : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_rose : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_rouge : Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_violet : Mrshounka_megane_rs_2015_civ {};

	class Mrshounka_twingo_p
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_twingo_p_noir",
			"Mrshounka_twingo_p_bf",
			"Mrshounka_twingo_p_r",
			"Mrshounka_twingo_p_j",
			"Mrshounka_twingo_p_rose",
			"Mrshounka_twingo_p_g",
			"Mrshounka_twingo_p_v",
			"Mrshounka_twingo_p_o"
		};
		realname = "Renault Twingo";
	};

	class Mrshounka_twingo_p_noir : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_bf : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_r : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_j : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_rose : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_g : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_v : Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_o : Mrshounka_twingo_p {};

	class Mrshounka_a3_smart_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_a3_smart_civ_noir",
			"Mrshounka_a3_smart_civ_bleu"
		};
		realname = "Smart";
	};

	class Mrshounka_a3_smart_civ_noir : Mrshounka_a3_smart_civ {};
	class Mrshounka_a3_smart_civ_bleu : Mrshounka_a3_smart_civ {};

	class Mrshounka_subaru08_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_subaru08_bleufonce",
			"Mrshounka_subaru08_grise",
			"Mrshounka_subaru08_jaune",
			"Mrshounka_subaru08_noir",
			"Mrshounka_subaru08_orange",
			"Mrshounka_subaru08_rose",
			"Mrshounka_subaru08_rouge",
			"Mrshounka_subaru08_violet"
		};
		realname = "Subaru Impreza";
	};

	class Mrshounka_subaru08_bleufonce : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_grise : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_jaune : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_noir : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_orange : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_rose : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_rouge : Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_violet : Mrshounka_subaru08_civ {};

	class shounka_transam
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"shounka_transam_bleufonce",
			"shounka_transam_grise",
			"shounka_transam_jaune",
			"shounka_transam_noir",
			"shounka_transam_orange",
			"shounka_transam_rose",
			"shounka_transam_rouge",
			"shounka_transam_violet"
		};
		realname = "Transam";
	};

	class shounka_transam_bleufonce : shounka_transam {};
	class shounka_transam_grise : shounka_transam {};
	class shounka_transam_jaune : shounka_transam {};
	class shounka_transam_noir : shounka_transam {};
	class shounka_transam_orange : shounka_transam {};
	class shounka_transam_rose : shounka_transam {};
	class shounka_transam_rouge : shounka_transam {};
	class shounka_transam_violet : shounka_transam {};

	class Mrshounka_Volkswagen_Touareg_civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Mrshounka_Volkswagen_Touareg_bleufonce",
			"Mrshounka_Volkswagen_Touareg_grise",
			"Mrshounka_Volkswagen_Touareg_jaune",
			"Mrshounka_Volkswagen_Touareg_noir",
			"Mrshounka_Volkswagen_Touareg_orange",
			"Mrshounka_Volkswagen_Touareg_rose",
			"Mrshounka_Volkswagen_Touareg_rouge",
			"Mrshounka_Volkswagen_Touareg_violet"
		};
		realname = "Volswagen Touareg";
	};

	class Mrshounka_Volkswagen_Touareg_bleufonce : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_grise : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_jaune : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_noir : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_orange : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_rose : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_rouge : Mrshounka_Volkswagen_Touareg_civ {};
	class Mrshounka_Volkswagen_Touareg_violet : Mrshounka_Volkswagen_Touareg_civ {};

	class shounka_a3_dafxf_euro6_f
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Daf euro 6";
	};

	class shounka_a3_mantgs
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Man TGS dépannage";
	};

  	class SAL_77TRANSAMCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = {};
		realname = "Pontiak";
	};

	class max_H3
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"max_H3_red",
			"max_H3_black",
			"max_H3_yellow",
			"max_H3_urbancamo",
			"max_H3_vegeta"
		};
		realname = "Hummer H3";
	};
  	class max_H3_red : max_H3 {};
  	class max_H3_black : max_H3 {};
  	class max_H3_yellow : max_H3 {};
	class max_H3_urbancamo : max_H3 {};
	class max_H3_vegeta : max_H3 {};

	class max_impala
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"max_impala_black",
			"max_impala_white",
			"max_impala_red",
			"max_impala_blue"
		};
		realname = "Impala";
	};
  	class max_impala_black : max_impala {};
  	class max_impala_white : max_impala {};
  	class max_impala_red : max_impala {};
	class max_impala_blue : max_impala {};
	
	class DAR_TahoeCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"DAR_TahoeCiv",
			"DAR_TahoeCivBlack",
			"DAR_TahoeCivRed",
			"DAR_TahoeCivBlue",
			"DAR_TahoeCivSilver"
		};
		realname = "Chevrolet Tahoe";
	};
  	class DAR_TahoeCivBlack : DAR_TahoeCiv {};
  	class DAR_TahoeCivRed : DAR_TahoeCiv {};
  	class DAR_TahoeCivBlue : DAR_TahoeCiv {};
	class DAR_TahoeCivSilver : DAR_TahoeCiv {};

	class Tal_Murci
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Tal_Murci_Red",
			"Tal_Murci_Pink",
			"Tal_Murci_Black",
			"Tal_Murci_Blue",
			"Tal_Murci_LightBlue",
			"Tal_Murci_Green",
			"Tal_Murci_Lime",
			"Tal_Murci_Purple",
			"Tal_Murci_Grey",
			"Tal_Murci_Orange",
			"Tal_Murci_White",
			"Tal_Murci_Yellow",
			"Tal_Murci_PC"
		};
		realname = "Lamborgini Murcielago";
	};
  	class Tal_Murci_Red : Tal_Murci {};
  	class Tal_Murci_Pink : Tal_Murci {};
  	class Tal_Murci_Black : Tal_Murci {};
	class Tal_Murci_Blue : Tal_Murci {};
	class Tal_Murci_LightBlue : Tal_Murci {};
	class Tal_Murci_Green : Tal_Murci {};
	class Tal_Murci_Lime : Tal_Murci {};
	class Tal_Murci_Purple : Tal_Murci {};
	class Tal_Murci_Grey : Tal_Murci {};
	class Tal_Murci_Orange : Tal_Murci {};
	class Tal_Murci_White : Tal_Murci {};
	class Tal_Murci_Yellow : Tal_Murci {};
	class Tal_Murci_PC : Tal_Murci {};

	class SAL_AudiCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"SAL_AudiCiv",
			"SAL_AudiCivRed",
			"SAL_AudiCivSilver",
			"SAL_AudiCivBlack"
		};
		realname = "Audi A4";
	};
  	class SAL_AudiCivRed : SAL_AudiCiv {};
  	class SAL_AudiCivSilver : SAL_AudiCiv {};
  	class SAL_AudiCivBlack : SAL_AudiCiv {};

  	class max_BMW
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"max_BMW",
			"max_BMW1",
			"max_BMW2"
		};
		realname = "BMW M3";
	};
  	class max_BMW1 : max_BMW {};
  	class max_BMW2 : max_BMW {};

  	class max_charger
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"max_charger_black",
			"max_charger_blue",
			"max_charger_red",
			"max_charger_yellow"
		};
		realname = "Dodge Charger";
	};
  	class max_charger_black : max_charger {};
  	class max_charger_blue : max_charger {};
  	class max_charger_red : max_charger {};
  	class max_charger_yellow : max_charger {};

    class max_CrownVic
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"max_CrownVic_blue",
			"max_CrownVic_red",
			"max_CrownVic_white"
		};
		realname = "Crown Victoria";
	};
  	class max_CrownVic_blue : max_CrownVic {};
  	class max_CrownVic_red : max_CrownVic {};
  	class max_CrownVic_white : max_CrownVic {};

  	class max_jeep
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"max_jeep_green",
			"max_jeep_blue",
			"max_jeep_red",
			"max_jeep_black"
		};
		realname = "Jeep";
	};
  	class max_jeep_green : max_jeep {};
  	class max_jeep_blue : max_jeep {};
  	class max_jeep_red : max_jeep {};
   	class max_jeep_black : max_jeep {};

   	class Skyline_Mercedes_300_SEL
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Skyline_Mercedes_300_SEL_11_F",
			"Skyline_Mercedes_300_SEL_02_F",
			"Skyline_Mercedes_300_SEL_06_F",
			"Skyline_Mercedes_300_SEL_09_F",
			"Skyline_Mercedes_300_SEL_07_F",
			"Skyline_Mercedes_300_SEL_05_F",
			"Skyline_Mercedes_300_SEL_10_F",
			"Skyline_Mercedes_300_SEL_08_F",
			"Skyline_Mercedes_300_SEL_04_F",
			"Skyline_Mercedes_300_SEL_03_F"
		};
		realname = "Mercedes 300 SEL";
	};
  	class Skyline_Mercedes_300_SEL_11_F : Skyline_Mercedes_300_SEL {};
  	class Skyline_Mercedes_300_SEL_02_F : Skyline_Mercedes_300_SEL {};
  	class Skyline_Mercedes_300_SEL_06_F : Skyline_Mercedes_300_SEL {};
   	class Skyline_Mercedes_300_SEL_09_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_07_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_05_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_10_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_08_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_04_F : Skyline_Mercedes_300_SEL {};
    class Skyline_Mercedes_300_SEL_03_F : Skyline_Mercedes_300_SEL {};

    class max_suv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"max_suv_black",
			"max_suv_red",
			"max_suv_blue",
			"max_suv_green",
			"max_suv_UC"
		};
		realname = "SUV";
	};
  	class max_suv_black : max_suv {};
  	class max_suv_red : max_suv {};
  	class max_suv_blue : max_suv {};
   	class max_suv_green : max_suv {};
    class max_suv_UC : max_suv {};

    class max_van
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"max_van_white",
			"max_van_cola",
			"max_van_Grey",
			"max_van_red",
			"max_van_blue",
			"max_van_green"
		};
		realname = "Van";
	};
  	class max_van_white : max_van {};
  	class max_van_cola : max_van {};
  	class max_van_Grey : max_van {};
   	class max_van_red : max_van {};
    class max_van_blue : max_van {};
    class max_van_green : max_van {};

    class Tal_Maserati
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"Tal_Maserati_Red",
			"Tal_Maserati_Pink",
			"Tal_Maserati_Black",
			"Tal_Maserati_Blue",
			"Tal_Maserati_LightBlue",
			"Tal_Maserati_Green",
			"Tal_Maserati_Lime",
			"Tal_Maserati_Purple",
			"Tal_Maserati_Grey",
			"Tal_Maserati_Orange",
			"Tal_Maserati_White",
			"Tal_Maserati_Yellow"
		};
		realname = "Maserati";
	};
  	class Tal_Maserati_Red : Tal_Maserati {};
  	class Tal_Maserati_Pink : Tal_Maserati {};
  	class Tal_Maserati_Black : Tal_Maserati {};
  	class Tal_Maserati_Blue : Tal_Maserati {};
  	class Tal_Maserati_LightBlue : Tal_Maserati {};
  	class Tal_Maserati_Green : Tal_Maserati {};
  	class Tal_Maserati_Lime : Tal_Maserati {};
  	class Tal_Maserati_Purple : Tal_Maserati {};
  	class Tal_Maserati_Grey : Tal_Maserati {};
  	class Tal_Maserati_Orange : Tal_Maserati {};
  	class Tal_Maserati_White : Tal_Maserati {};
  	class Tal_Maserati_Yellow : Tal_Maserati {};

  	class DAR_ChallengerCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"DAR_ChallengerCivWhite",
			"DAR_ChallengerCivRed",
			"DAR_ChallengerCivBlack",
			"DAR_ChallengerCivOrange"
		};
		realname = "Dodge CHallenger";
	};
  	class DAR_ChallengerCivWhite : DAR_ChallengerCiv {};
  	class DAR_ChallengerCivRed : DAR_ChallengerCiv {};
  	class DAR_ChallengerCivBlack : DAR_ChallengerCiv {};
  	class DAR_ChallengerCivOrange : DAR_ChallengerCiv {};

  	class Skyline_G65_01_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = {};
		realname = "Mercedes G65 AMG";
	};

  	class Tal_Wrangler
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Tal_Wrangler_Red",
			"Tal_Wrangler_Pink",
			"Tal_Wrangler_Black",
			"Tal_Wrangler_Blue",
			"Tal_Wrangler_LightBlue",
			"Tal_Wrangler_Green",
			"Tal_Wrangler_Lime",
			"Tal_Wrangler_Purple",
			"Tal_Wrangler_Grey",
			"Tal_Wrangler_Orange",
			"Tal_Wrangler_White",
			"Tal_Wrangler_Yellow"
		};
		realname = "Jeep Wrangler";
	};
  	class Tal_Wrangler_Red : Tal_Wrangler {};
  	class Tal_Wrangler_Pink : Tal_Wrangler {};
  	class Tal_Wrangler_Black : Tal_Wrangler {};
  	class Tal_Wrangler_Blue : Tal_Wrangler {};
  	class Tal_Wrangler_LightBlue : Tal_Wrangler {};
  	class Tal_Wrangler_Green : Tal_Wrangler {};
  	class Tal_Wrangler_Lime : Tal_Wrangler {};
  	class Tal_Wrangler_Purple : Tal_Wrangler {};
  	class Tal_Wrangler_Grey : Tal_Wrangler {};
  	class Tal_Wrangler_Orange : Tal_Wrangler {};
  	class Tal_Wrangler_White : Tal_Wrangler {};
  	class Tal_Wrangler_Yellow : Tal_Wrangler {};

	class ALFR_GeK_Scania_420
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"ALFR_GeK_Scania_420",
			"ALFR_GeK_Scania_420_blanc",
			"ALFR_GeK_Scania_420_bleu",
			"ALFR_GeK_Scania_420_noir",
			"ALFR_GeK_Scania_420_orange"
		};
		realname = "Scania 420";
	};
  	class ALFR_GeK_Scania_420_blanc : ALFR_GeK_Scania_420 {};
  	class ALFR_GeK_Scania_420_bleu : ALFR_GeK_Scania_420 {};
  	class ALFR_GeK_Scania_420_noir : ALFR_GeK_Scania_420 {};
  	class ALFR_GeK_Scania_420_orange : ALFR_GeK_Scania_420 {};

  	class ALFR_GeK_Volvo_FH16_2012
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Volvo FH16";
	};

	class DAR_MK23
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "MK 23";
	};

	class DAR_MK27
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "MK 27";
	};

	class DAR_MK27T
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "MK 27T";
	};

	class DAR_4x4
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "DAR_4x4";
	};

	class DAR_LHS_16
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "LHS_16";
	};

	class B_Truck_01_transport_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "HEMTT Transport";
	};

	class O_Truck_02_transport_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Zamak Transport";
	};

	class B_Truck_01_covered_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "HEMTT Couvert";
	};

	class O_Truck_02_covered_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Zamak Couvert";
	};

	class B_Truck_01_box_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "HEMTT Box";
	};

	class B_G_Van_01_fuel_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Camionette Fuel";
	};

	class B_Truck_01_fuel_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "HEMTT Fuel";
	};

	class O_Truck_02_fuel_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		rank = 0;
		colors[] = {};
		realname = "Zamak Fuel";
	};

	class max_moneytruck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Money Truck";
	};

	class max_impala_security
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = {};
		realname = "Impala Secu";
	};

	class max_towtruck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Pick Up dépannage";
	};

	class max_BMW_M3_GTR
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"max_BMW_M3_GTR",
			"max_BMW_M3_GTR1",
			"max_BMW_M3_GTR2",
			"max_BMW_M3_GTR3",
			"max_BMW_M3_GTR4"
		};
		realname = "BMW M3 Rally";
	};
  	class max_BMW_M3_GTR1 : max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR2 : max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR3 : max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR4 : max_BMW_M3_GTR {};

	class max_CrownVic_taxi
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "taxi";
		fuel = "SP98";
		rank = 0;
		colors[] = {};
		realname = "Crown Victoria Taxi";
	};

	class max_vipcar
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = {};
		realname = "Voiture blindé VIP";
	};

	class DAR_MF1
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = 
		{
			"DAR_MF1Civ",
			"DAR_MF1Burgundy",
			"DAR_MF1Orange",
			"DAR_MF1Red",
			"DAR_MF1Silver"
		};
		realname = "Mclaren F1";
	};
  	class DAR_MF1Civ : DAR_MF1 {};
  	class DAR_MF1Burgundy : DAR_MF1 {};
  	class DAR_MF1Orange : DAR_MF1 {};
  	class DAR_MF1Red : DAR_MF1 {};
  	class DAR_MF1Silver : DAR_MF1 {};

  	class DAR_M3Civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"DAR_M3CivBlack",
			"DAR_M3CivWhite",
			"DAR_M3CivGrey"
		};
		realname = "BMW M3 Civ";
	};
  	class DAR_M3CivBlack : DAR_M3Civ {};
  	class DAR_M3CivWhite : DAR_M3Civ {};
  	class DAR_M3CivGrey : DAR_M3Civ {};

    class C_Van_01_transport_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Camionnette";
	};

    class C_Van_01_box_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Camionnette Caisse";
	};


    class RDS_Gaz24_Civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "GPL";
		rank = 0;
		colors[] = 
		{
			"RDS_Gaz24_Civ_01",
			"RDS_Gaz24_Civ_02",
			"RDS_Gaz24_Civ_03"
		};
		realname = "Gaz";
	};
  	class RDS_Gaz24_Civ_01 : RDS_Gaz24_Civ {};
  	class RDS_Gaz24_Civ_02 : RDS_Gaz24_Civ {};
  	class RDS_Gaz24_Civ_03 : RDS_Gaz24_Civ {};

  	class RDS_Golf4_Civ_01
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = {};
		realname = "Golf IV";
	};

	class RDS_Ikarus_Civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"RDS_Ikarus_Civ_01",
			"RDS_Ikarus_Civ_02"
		};
		realname = "Bus Ikarus";
	};
  	class RDS_Ikarus_Civ_01 : RDS_Ikarus_Civ {};
  	class RDS_Ikarus_Civ_02 : RDS_Ikarus_Civ {};

	class C_Quadbike_01_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"C_Quadbike_01_black_F",
			"C_Quadbike_01_blue_F",
			"C_Quadbike_01_red_F",
			"C_Quadbike_01_white_F"
		};
		realname = "Quad";
	};
	class C_Quadbike_01_black_F : C_Quadbike_01_F {};
	class C_Quadbike_01_blue_F : C_Quadbike_01_F {};
	class C_Quadbike_01_red_F : C_Quadbike_01_F {};
	class C_Quadbike_01_white_F : C_Quadbike_01_F {};

	class RDS_S1203_Civ_01
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Skoda 1203";
	};

	class RDS_Octavia_Civ_01
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Skoda Octavia";
	};

	class C_Offroad_01_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"C_Offroad_01_red_F",
			"C_Offroad_01_sand_F",
			"C_Offroad_01_white_F",
			"C_Offroad_01_blue_F",
			"C_Offroad_01_darkred_F",
			"C_Offroad_luxe_F",
			"C_Offroad_default_F",
			"C_Offroad_stripped_F"
		};
		realname = "Pick Up";
	};
  	class C_Offroad_01_red_F : C_Offroad_01_F {};
  	class C_Offroad_01_sand_F : C_Offroad_01_F {};
  	class C_Offroad_01_white_F : C_Offroad_01_F {};
  	class C_Offroad_01_blue_F : C_Offroad_01_F {};
  	class C_Offroad_01_darkred_F : C_Offroad_01_F {};
  	class C_Offroad_luxe_F : C_Offroad_01_F {};
  	class C_Offroad_default_F : C_Offroad_01_F {};
  	class C_Offroad_stripped_F : C_Offroad_01_F {};

	class RDS_Lada_Civ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "GPL";
		rank = 0;
		colors[] = 
		{
			"RDS_Lada_Civ_01",
			"RDS_Lada_Civ_02",
			"RDS_Lada_Civ_03",
			"RDS_Lada_Civ_04"
		};
		realname = "Vaz 2103";
	};
  	class RDS_Lada_Civ_01 : RDS_Lada_Civ {};
  	class RDS_Lada_Civ_02 : RDS_Lada_Civ {};
  	class RDS_Lada_Civ_03 : RDS_Lada_Civ {};
  	class RDS_Lada_Civ_04 : RDS_Lada_Civ {};

	class sab_a2
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "pilot";
		fuel = "SP98";
		rank = 0;
		colors[] = 
		{
			"sab_BI_An2",
			"Sab_cz_An2",
			"Sab_fd_An2",
			"Sab_yel_An2",
			"Sab_ana_An2",
			"sab_AH_An2",
			"sab_ca_An2",
			"Sab_ee_An2",
			"Sab_ru_An2",
			"Sab_tk_An2",
			"Sab_af_An2",
			"Sab_A2_An2"
		};
		realname = "Sab An2";
	};
  	class sab_BI_An2 : sab_a2 {};
  	class Sab_cz_An2 : sab_a2 {};
  	class Sab_fd_An2 : sab_a2 {};
  	class Sab_yel_An2 : sab_a2 {};
  	class Sab_ana_An2 : sab_a2 {};
  	class sab_AH_An2 : sab_a2 {};
  	class sab_ca_An2 : sab_a2 {};
  	class Sab_ee_An2 : sab_a2 {};
  	class Sab_ru_An2 : sab_a2 {};
  	class Sab_tk_An2 : sab_a2 {};
  	class Sab_af_An2 : sab_a2 {};
  	class Sab_A2_An2 : sab_a2 {};

  	class Skyline_Bus
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Skyline_Bus_11_F",
			"Skyline_Bus_02_F",
			"Skyline_Bus_03_F",
			"Skyline_Bus_04_F",
			"Skyline_Bus_05_F",
			"Skyline_Bus_06_F",
			"Skyline_Bus_07_F",
			"Skyline_Bus_08_F",
			"Skyline_Bus_09_F",
			"Skyline_Bus_10_F"
		};
		realname = "Bus";
	};
  	class Skyline_Bus_11_F : Skyline_Bus {};
  	class Skyline_Bus_02_F : Skyline_Bus {};
  	class Skyline_Bus_03_F : Skyline_Bus {};
  	class Skyline_Bus_04_F : Skyline_Bus {};
  	class Skyline_Bus_05_F : Skyline_Bus {};
  	class Skyline_Bus_06_F : Skyline_Bus {};
  	class Skyline_Bus_07_F : Skyline_Bus {};
  	class Skyline_Bus_08_F : Skyline_Bus {};
  	class Skyline_Bus_09_F : Skyline_Bus {};
  	class Skyline_Bus_10_F : Skyline_Bus {};

  	class B_Boat_Transport_01_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "boat";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"B_Boat_Transport_01_F",
			"O_Boat_Transport_01_F",
			"O_Lifeboat",
			"C_Rubberboat",
			"I_Boat_Transport_01_F"
		};
		realname = "Zodiac";
	};
  	class O_Boat_Transport_01_F : B_Boat_Transport_01_F {};
  	class O_Lifeboat : B_Boat_Transport_01_F {};
  	class C_Rubberboat : B_Boat_Transport_01_F {};
  	class I_Boat_Transport_01_F : B_Boat_Transport_01_F {};

  	class C_Boat_Civil_01_F
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "boat";
		fuel = "Diesel";
		rank = 0;
		colors[] = {};
		realname = "Bateau à moteur civil";
	};

  	class C_Heli_light
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "pilot";
		fuel = "Kerosene";
		rank = 0;
		colors[] = 
		{
			"C_Heli_light_01_blue_F",
			"C_Heli_light_01_red_F",
			"C_Heli_light_01_ion_F",
			"C_Heli_light_01_blueLine_F",
			"C_Heli_light_01_digital_F",
			"C_Heli_light_01_elliptical_F",
			"C_Heli_light_01_furious_F",
			"C_Heli_light_01_graywatcher_F",
			"C_Heli_light_01_jeans_F",
			"C_Heli_light_01_light_F",
			"C_Heli_light_01_shadow_F",
			"C_Heli_light_01_sheriff_F",
			"C_Heli_light_01_speedy_F",
			"C_Heli_light_01_sunset_F",
			"C_Heli_light_01_vrana_F",
			"C_Heli_light_01_wasp_F",
			"C_Heli_light_01_wave_F",
			"C_Heli_light_01_stripped_F",
			"C_Heli_light_01_luxe_F"
			};
		realname = "Little BIrd";
	};
  	class C_Heli_light_01_blue_F : C_Heli_light {};
  	class C_Heli_light_01_red_F : C_Heli_light {};
  	class C_Heli_light_01_ion_F : C_Heli_light {};
  	class C_Heli_light_01_blueLine_F : C_Heli_light {};
  	class C_Heli_light_01_digital_F : C_Heli_light {};
  	class C_Heli_light_01_elliptical_F : C_Heli_light {};
  	class C_Heli_light_01_furious_F : C_Heli_light {};
  	class C_Heli_light_01_graywatcher_F : C_Heli_light {};
  	class C_Heli_light_01_jeans_F : C_Heli_light {};
  	class C_Heli_light_01_light_F : C_Heli_light {};
  	class C_Heli_light_01_shadow_F : C_Heli_light {};
  	class C_Heli_light_01_sheriff_F : C_Heli_light {};
  	class C_Heli_light_01_speedy_F : C_Heli_light {};
  	class C_Heli_light_01_sunset_F : C_Heli_light {};
  	class C_Heli_light_01_vrana_F : C_Heli_light {};
  	class C_Heli_light_01_wasp_F : C_Heli_light {};
  	class C_Heli_light_01_wave_F : C_Heli_light {};
  	class C_Heli_light_01_stripped_F : C_Heli_light {};
  	class C_Heli_light_01_luxe_F : C_Heli_light {};	

  	class Fett_orca
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "pilot";
		fuel = "Kerosene";
		rank = 0;
		colors[] = 
		{
			"Fett_orca_white",
			"Fett_orca_blue",
			"Fett_orca_bloodice",
			"Fett_orca_dpm6",
			"Fett_orca_DPU",
			"Fett_orca_frostbite",
			"Fett_orca_jungle",
			"Fett_orca_matrix",
			"Fett_orca_tiger",
			"Fett_orca_tiger_jungle",
			"Fett_orca_red"
			};
		realname = "Orca";
	};
  	class Fett_orca_white : Fett_orca {};
  	class Fett_orca_blue : Fett_orca {};
  	class Fett_orca_bloodice : Fett_orca {};
  	class Fett_orca_dpm6 : Fett_orca {};
  	class Fett_orca_DPU : Fett_orca {};
  	class Fett_orca_frostbite : Fett_orca {};
  	class Fett_orca_jungle : Fett_orca {};
  	class Fett_orca_matrix : Fett_orca {};
  	class Fett_orca_tiger : Fett_orca {};
  	class Fett_orca_tiger_jungle : Fett_orca {};
  	class Fett_orca_red : Fett_orca {};

  	class Fett_mohawk
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "pilot";
		fuel = "Kerosene";
		rank = 0;
		colors[] = 
		{
			"Fett_mohawk_matrix",
			"Fett_mohawk_jungle",
			"Fett_mohawk_frostbite",
			"Fett_mohawk_blue",
			"Fett_mohawk_DPU",
			"Fett_mohawk_dpm6",
			"Fett_mohawk_bloodice",
			"Fett_mohawk_tiger_jungle",
			"Fett_mohawk_orange",
			"Fett_mohawk_green",
			"Fett_mohawk_red",
			"Fett_mohawk_tiger"
			};
		realname = "Mohawk";
	};
  	class Fett_mohawk_matrix : Fett_mohawk {};
  	class Fett_mohawk_jungle : Fett_mohawk {};
  	class Fett_mohawk_frostbite : Fett_mohawk {};
  	class Fett_mohawk_blue : Fett_mohawk {};
  	class Fett_mohawk_DPU : Fett_mohawk {};
  	class Fett_mohawk_dpm6 : Fett_mohawk {};
  	class Fett_mohawk_bloodice : Fett_mohawk {};
  	class Fett_mohawk_tiger_jungle : Fett_mohawk {};
  	class Fett_mohawk_orange : Fett_mohawk {};
  	class Fett_mohawk_green : Fett_mohawk {};
  	class Fett_mohawk_red : Fett_mohawk {};
  	class Fett_mohawk_tiger : Fett_mohawk {};

  	class dezkit_b206
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "pilot";
		fuel = "Kerosene";
		rank = 0;
		colors[] = 
		{
			"dezkit_b206_ls",
			"dezkit_b206_hs"
			};
		realname = "B206";
	};
  	class dezkit_b206_ls : dezkit_b206 {};
  	class dezkit_b206_hs : dezkit_b206 {};

  	class Mrshounka_agera_p
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "driver";
		fuel = "SP95";
		rank = 0;
		colors[] = {};
		realname = "Agera";
	};

  /*
	**				WEST VEHICLES
	*/
	class DAR_TahoePolice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP95";
		rank = 3;
		colors[] = {};
		realname = "Chevrolet Tahoe Milice";
	};

	class Fett_boat_milice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP95";
		rank = 3;
		colors[] = {};
		realname = "Bateau à moteur";
	};

	class DAR_ImpalaPolice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP95";
		rank = 3;
		colors[] = {};
		realname = "Impala Milice";
	};

	class DAR_ChargerPoliceState
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP95";
		rank = 3;
		colors[] = {};
		realname = "Dodge Charger Milice";
	};

	class DAR_ExplorerPolice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP95";
		rank = 3;
		colors[] = {};
		realname = "Ford Explorer Milice";
	};

	class DAR_TaurusPolice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP98";
		rank = 3;
		colors[] = {};
		realname = "Ford Taurus Milice";
	};

	class DAR_CVPIAux
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "SP98";
		rank = 3;
		colors[] = {};
		realname = "Crown Victoria Milice";
	};

	class DDAR_TahoePoliceDet
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 3;
		colors[] = {};
		realname = "Chevrolet Tahoe noir";
	};

	class EC635_Unarmed
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "Kerosene";
		rank = 3;
		colors[] = {};
		realname = "EC635 Milice";
	};

	class dezkit_b206mi
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		license = "";
		fuel = "Kerosene";
		rank = 3;
		colors[] = 
		{
			"dezkit_b206_police",
			"dezkit_b206_fbi"
		};
		realname = "B206 Milice";
	};
	class dezkit_b206_police : dezkit_b206mi {};
	class dezkit_b206_fbi : dezkit_b206mi {};
  
  /*
	**				EAST VEHICLES
	*/
  
	class Cha_BTR60_Cuba
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 5;
		colors[] = {};
		realname = "btr";
	};

	class sfp_bo105_unarmed
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Kerosene";
		rank = 4;
		colors[] = {};
		realname = "helico";
	};

	class gac_JGSDF_BXD10_MG
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 4;
		colors[] = {};
		realname = "BXD10_MG";
	};

	class gac_JGSDF_V16_Rcn
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 3;
		colors[] = {};
		realname = "V16 Rcn";
	};

	class gac_JGSDF_BXD10
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 3;
		colors[] = {};
		realname = "BXD10";
	};

	class gac_JMSDF_SKW475
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 2;
		colors[] = {};
		realname = "truck";
	};

	class gac_jsdf_klx
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 1;
		colors[] = {};
		realname = "moto";
	};

	class gac_JGSDF_V16
	{
		buyPrice = 75000;
		inventory = 90;
		side = "EAST";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 1;
		colors[] = {};
		realname = "V16";
	};


  /*
	**				GUER VEHICLES
	*/  
	class max_ambulance
	{
		buyPrice = 25000;
		inventory = 150;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "SP98";
		rank = 1;
		colors[] = {};
		realname = "Ambulance";
	};

	class Fett_boat_samu
	{
		buyPrice = 25000;
		inventory = 150;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 1;
		colors[] = {};
		realname = "Bateau à moteur";
	};

	class DAR_TaurusPoliceState
	{
		buyPrice = 25000;
		inventory = 70;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "SP98";
		rank = 5;
		colors[] = {};
		realname = "Ford Taurus SAMU";
	};

	class Fett_zamak_repair_samu
	{
		buyPrice = 25000;
		inventory = 450;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 2;
		colors[] = {};
		realname = "Zamak Transport de médicament";
	};

	class Fett_zamak_covered_samu
	{
		buyPrice = 25000;
		inventory = 150;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 3;
		colors[] = {};
		realname = "Zamak Stand SAMU";
	};

	class DAR_TahoeEMS
	{
		buyPrice = 50000;
		inventory = 90;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 2;
		colors[] = {};
		realname = "Chevrolet Tahoe SAMU";
	};

	class DAR_ExplorerMedic
	{
		buyPrice = 75000;
		inventory = 90;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Diesel";
		rank = 3;
		colors[] = {};
		realname = "Ford Explorer SAMU";
	};

	class EC635_SAR
	{
		buyPrice = 250000;
		inventory = 70;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Kerosene";
		rank = 3;
		colors[] = {};
		realname = "EC635 SAMU";
	};

	class dezkit_b206ems
	{
		buyPrice = 250000;
		inventory = 70;
		side = "GUER";
		insurance = 1;
		license = "";
		fuel = "Kerosene";
		rank = 3;
		colors[] = 
		{
			"dezkit_b206_ems",
			"dezkit_b206_rescue"
		};
		realname = "B206 SAMU";
	};
	class dezkit_b206_ems : dezkit_b206ems {};
	class dezkit_b206_rescue : dezkit_b206ems {};
	
	class Jonzie_Tow_Truck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Fett_Tow_Truck_red",
			"Fett_Tow_Truck_yellow",
			"Fett_Tow_Truck_green",
			"Fett_Tow_Truck_blue",
			"Fett_Tow_Truck_pink",
			"Fett_Tow_Truck_dark",
			"Fett_Tow_Truck_white"
		};
		realname = "Remorqueur";
	};
	class Fett_Tow_Truck_red: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_yellow: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_green: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_blue: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_pink: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_dark: Jonzie_Tow_Truck {};
	class Fett_Tow_Truck_white: Jonzie_Tow_Truck {};
	
	class Jonzie_Flat_Bed
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Fett_Flat_Bed_red",
			"Fett_Flat_Bed_yellow",
			"Fett_Flat_Bed_green",
			"Fett_Flat_Bed_blue",
			"Fett_Flat_Bed_pink",
			"Fett_Flat_Bed_dark",
			"Fett_Flat_Bed_white"
		};
		realname = "Man TGX Flat Bed Truck";
	};
	class Fett_Flat_Bed_red: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_yellow: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_green: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_blue: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_pink: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_dark: Jonzie_Flat_Bed {};
	class Fett_Flat_Bed_white: Jonzie_Flat_Bed {};
	
	class Jonzie_Log_Truck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Fett_Log_Truck_red",
			"Fett_Log_Truck_yellow",
			"Fett_Log_Truck_green",
			"Fett_Log_Truck_blue",
			"Fett_Log_Truck_pink",
			"Fett_Log_Truck_dark",
			"Fett_Log_Truck_white"
		};
		realname = "Man TGX Log Truck";
	};
	class Fett_Log_Truck_red: Jonzie_Log_Truck {};
	class Fett_Log_Truck_yellow: Jonzie_Log_Truck {};
	class Fett_Log_Truck_green: Jonzie_Log_Truck {};
	class Fett_Log_Truck_blue: Jonzie_Log_Truck {};
	class Fett_Log_Truck_pink: Jonzie_Log_Truck {};
	class Fett_Log_Truck_dark: Jonzie_Log_Truck {};
	class Fett_Log_Truck_white: Jonzie_Log_Truck {};
	
	class Jonzie_Tanker_Truck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Fett_Tanker_Truck_red",
			"Fett_Tanker_Truck_yellow",
			"Fett_Tanker_Truck_green",
			"Fett_Tanker_Truck_blue",
			"Fett_Tanker_Truck_pink",
			"Fett_Tanker_Truck_dark",
			"Fett_Tanker_Truck_white"
		};
		realname = "Man TGX Tanker Truck";
	};
	class Fett_Tanker_Truck_red: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_yellow: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_green: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_blue: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_pink: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_dark: Jonzie_Tanker_Truck {};
	class Fett_Tanker_Truck_white: Jonzie_Tanker_Truck {};
	
	class Jonzie_Box_Truck
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		license = "truck";
		fuel = "Diesel";
		rank = 0;
		colors[] = 
		{
			"Fett_Box_Truck_red",
			"Fett_Box_Truck_yellow",
			"Fett_Box_Truck_green",
			"Fett_Box_Truck_blue",
			"Fett_Box_Truck_pink",
			"Fett_Box_Truck_dark",
			"Fett_Box_Truck_white"
		};
		realname = "Man TGX Box Truck";
	};
	class Fett_Box_Truck_red: Jonzie_Box_Truck {};
	class Fett_Box_Truck_yellow: Jonzie_Box_Truck {};
	class Fett_Box_Truck_green: Jonzie_Box_Truck {};
	class Fett_Box_Truck_blue: Jonzie_Box_Truck {};
	class Fett_Box_Truck_pink: Jonzie_Box_Truck {};
	class Fett_Box_Truck_dark: Jonzie_Box_Truck {};
	class Fett_Box_Truck_white: Jonzie_Box_Truck {};
};
	