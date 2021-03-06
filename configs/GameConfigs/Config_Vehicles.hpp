class ALYSIA_VEHICLES_INFO
{
	/* MASTER VEHICLES CONFIG */
	insurance_percentage=0.29;
	garage_percentage=0.02;
	steal_percentage=0.20;
	sell_percentage=0.40;
	transfert_percentage=0.05;
	// based on vehicle's buyPrice
};

class ALYSIA_VEHICLES
{
	/*
	class master_vehicleClassname
	{
		buy price 				-NUMBER-	(vehicle shop buy price)
    Ex: buyPrice=1910000;
    ----------------------------
		virtual inventory	    -NUMBER-	(virtual inventory space)
    Ex: inventory=45;
    ----------------------------
		side 					-TXT- (allow vehicles defined as WEST,EAST,GUER to be opened by faction member without having keys)
    possible: [WEST,EAST,GUER,CIV]
    Ex: side="WEST";
    ----------------------------
		insurance 				-NUMBER-	(can be insured)
    possible [0(no),1(yes]
    Ex: insurance=1;
	----------------------------
		license						-TXT-			(license name/empty if no need: player needs to have license x to buy vehicle. Eg: CONFIG_licenses)
    Ex: licenses[]={"truck"};
    ----------------------------
		rank 							-NUMBER-	(use in WEST,EAST,GUER factions: player needs to have alteast rank x to buy vehicle. Must be 0 for civilian. Eg: CONFIG_factions)
    Ex: rank=4;
    ----------------------------
		colors 						-ARRAT-		(vehicle's color classnames)
    Ex: colors[]={"className_color1","className_color2",...};
    ----------------------------
		realname 					-TXT-			(vehicle name in shop)
    Ex: realname="Camion Ben";
    ----------------------------
	};

	OPTIONAL:         (multiple colors for the same model)
	class master_vehicleClassname_color1: master_vehicleClassname {};
	class master_vehicleClassname_color2: master_vehicleClassname {};
	class master_vehicleClassname_color3: master_vehicleClassname {};
	...
	**				CIVILIAN VEHICLES
	*/
	class madsa_hummer_h2
	{
		realname="Hummer H2";
		buyPrice=134000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=121;
		colors[]=
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
	};
	class madsa_hummer_h2_black_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_blue_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_gold_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_green_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_pink_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_purple_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_red_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_silver_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_white_F: madsa_hummer_h2 {};
	class madsa_hummer_h2_yellow_F: madsa_hummer_h2 {};

	class RDS_Zetor6945_Base
	{
		realname="Tracteur Zetor6945";
		buyPrice=90000;
		inventory=155;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_farming"};
		fuel="Diesel";
		fuelCapacity=67;
		tractor=1;
	};
	class madsa_mtz_F: RDS_Zetor6945_Base
	{
		realname="Tracteur MTZ";
		buyPrice=85000;
		inventory=120;
		fuelCapacity=162;
	};

	class DAR_FusionCiv
	{
		realname="Ford Fusion";
		buyPrice=22500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=45;
		colors[]=
		{
			"DAR_FusionCiv",
			"DAR_FusionCivBlack",
			"DAR_FusionCivBlue",
			"DAR_FusionCivRed"
		};
	};
  	class DAR_FusionCivBlack: DAR_FusionCiv {};
  	class DAR_FusionCivBlue: DAR_FusionCiv {};
  	class DAR_FusionCivRed: DAR_FusionCiv {};

  	class DAR_TaurusCiv
	{
		realname="Ford Taurus";
		buyPrice=30000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=72;
		colors[]=
		{
			"DAR_TaurusCiv",
			"DAR_TaurusCivBlack",
			"DAR_TaurusCivBlue"
		};
	};
  	class DAR_TaurusCivBlack: DAR_TaurusCiv {};
  	class DAR_TaurusCivBlue: DAR_TaurusCiv {};

  	class shounka_a3_renaultmagnum_f
	{
		realname="Renault Magnum";
		buyPrice=415750;
		inventory=650;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_transport_goods"};
		fuel="Diesel";
		fuelCapacity=1455;
		colors[]=
		{
			"Skyline_Vehicule_Shounka_Renault_Magnum_01_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_02_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_03_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_04_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_05_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_06_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_07_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_08_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_09_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_10_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_11_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_12_F",
			"Skyline_Vehicule_Shounka_Renault_Magnum_13_F"
		};
	};
	class Skyline_Vehicule_Shounka_Renault_Magnum_01_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_02_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_03_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_04_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_05_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_06_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_07_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_08_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_09_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_10_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_11_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_12_F: shounka_a3_renaultmagnum_f{};
	class Skyline_Vehicule_Shounka_Renault_Magnum_13_F: shounka_a3_renaultmagnum_f{};

	class Mrshounka_Alfa_Romeo_civ
	{
		realname="Alfa Romeo";
		buyPrice=22500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
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
	};
	class Mrshounka_Alfa_Romeo_noir: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_bleufonce: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_rouge: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_jaune: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_rose: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_grise: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_violet: Mrshounka_Alfa_Romeo_civ {};
	class Mrshounka_Alfa_Romeo_orange: Mrshounka_Alfa_Romeo_civ {};

	class shounka_a3_rs5_civ
	{
		realname="Audi RS5";
		buyPrice=105000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=64;
		colors[]=
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
	};
	class shounka_a3_rs5_civ_noir: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_bleufonce: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_rouge: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_jaune: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_rose: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_grise: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_violet: shounka_a3_rs5_civ {};
	class shounka_a3_rs5_civ_orange: shounka_a3_rs5_civ {};

	class shounka_rs6
	{
		realname="Audi RS6";
		buyPrice=96000;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=75;
		colors[]=
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
	};
	class shounka_rs6_noir: shounka_rs6 {};
	class shounka_rs6_bleufonce: shounka_rs6 {};
	class shounka_rs6_rouge: shounka_rs6 {};
	class shounka_rs6_jaune: shounka_rs6 {};
	class shounka_rs6_rose: shounka_rs6 {};
	class shounka_rs6_grise: shounka_rs6 {};
	class shounka_rs6_violet: shounka_rs6 {};
	class shounka_rs6_orange: shounka_rs6 {};

	class Mrshounka_bmwm1_civ
	{
		realname="BMW 1";
		buyPrice=75300;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=51;
		colors[]=
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
	};
	class Mrshounka_bmwm1_civ_noir: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_bleufonce: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_rouge: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_jaune: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_rose: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_grise: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_violet: Mrshounka_bmwm1_civ {};
	class Mrshounka_bmwm1_civ_orange: Mrshounka_bmwm1_civ {};

	class Mrshounka_bmwm6_civ
	{
		realname="BMW M6";
		buyPrice=145000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=70;
		colors[]=
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
	};
	class Mrshounka_bmwm6_noir: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_bleufonce: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_rouge: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_jaune: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_rose: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_grise: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_violet: Mrshounka_bmwm6_civ {};
	class Mrshounka_bmwm6_orange: Mrshounka_bmwm6_civ {};

	class Mrshounka_Bowler_c
	{
		realname="Bowler";
		buyPrice=195000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=140;
		colors[]=
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
	};
	class Mrshounka_Bowler_c_noir: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_bleufonce: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_rouge: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_jaune: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_rose: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_grise: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_violet: Mrshounka_Bowler_c {};
	class Mrshounka_Bowler_c_orange: Mrshounka_Bowler_c {};

	class shounka_buggy
	{
		realname="Buggy";
		buyPrice=2150000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=30;
		colors[]=
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
	};
	class shounka_buggy_noir: shounka_buggy {};
	class shounka_buggy_bleufonce: shounka_buggy {};
	class shounka_buggy_rouge: shounka_buggy {};
	class shounka_buggy_jaune: shounka_buggy {};
	class shounka_buggy_rose: shounka_buggy {};
	class shounka_buggy_grise: shounka_buggy {};
	class shounka_buggy_violet: shounka_buggy {};
	class shounka_buggy_orange: shounka_buggy {};

	class shounka_avalanche
	{
		realname="Chevrolet Avalanche";
		buyPrice=47500;
		inventory=90;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=117;
		colors[]=
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
	};
	class shounka_avalanche_noir: shounka_avalanche {};
	class shounka_avalanche_bleufonce: shounka_avalanche {};
	class shounka_avalanche_rouge: shounka_avalanche {};
	class shounka_avalanche_jaune: shounka_avalanche {};
	class shounka_avalanche_rose: shounka_avalanche {};
	class shounka_avalanche_grise: shounka_avalanche {};
	class shounka_avalanche_violet: shounka_avalanche {};
	class shounka_avalanche_orange: shounka_avalanche {};

	class shounka_monsteur
	{
		realname="Chevrolet Monster";
		buyPrice=3152000;
		inventory=10;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=131;
		colors[]=
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
	};
	class shounka_monsteur_noir: shounka_monsteur {};
	class shounka_monsteur_bleufonce: shounka_monsteur {};
	class shounka_monsteur_rouge: shounka_monsteur {};
	class shounka_monsteur_jaune: shounka_monsteur {};
	class shounka_monsteur_rose: shounka_monsteur {};
	class shounka_monsteur_grise: shounka_monsteur {};
	class shounka_monsteur_violet: shounka_monsteur {};
	class shounka_monsteur_orange: shounka_monsteur {};

	class Mrshounka_a3_ds3_civ
	{
		realname="Citroen DS3";
		buyPrice=15950;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
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
	};
	class Mrshounka_a3_ds3_civ_noir: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_bleufonce: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_rouge: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_jaune: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_rose: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_grise: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_violet: Mrshounka_a3_ds3_civ {};
	class Mrshounka_a3_ds3_civ_civ_orange: Mrshounka_a3_ds3_civ {};

	class shounka_a3_ds4_civ
	{
		realname="Citroen DS4";
		buyPrice=23700;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=60;
		colors[]=
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
	};
	class shounka_a3_ds4_noir: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_bleufonce: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_rouge: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_jaune: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_rose: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_grise: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_violet: shounka_a3_ds4_civ {};
	class shounka_a3_ds4_orange: shounka_a3_ds4_civ {};

	class Mrshounka_c4_p_civ
	{
		realname="Citroen C4";
		buyPrice=19900;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=60;
		colors[]=
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
	};
	class Mrshounka_c4_p_bleufonce: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_grise: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_jaune: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_noir: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_orange: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_rose: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_rouge: Mrshounka_c4_p_civ {};
	class Mrshounka_c4_p_violet: Mrshounka_c4_p_civ {};

	class shounka_nemo
	{
		realname="Citroen Nemo";
		buyPrice=16000;
		inventory=125;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=45;
		colors[]=
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
	};
	class shounka_nemo_bleufonce: shounka_nemo {};
	class shounka_nemo_grise: shounka_nemo {};
	class shounka_nemo_jaune: shounka_nemo {};
	class shounka_nemo_noir: shounka_nemo {};
	class shounka_nemo_orange: shounka_nemo {};
	class shounka_nemo_rose: shounka_nemo {};
	class shounka_nemo_rouge: shounka_nemo {};
	class shounka_nemo_violet: shounka_nemo {};

	class shounka_a3_cliors_civ
	{
		realname="Renault Clio";
		buyPrice=13500;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=45;
		colors[]=
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
	};
	class shounka_a3_cliors_civ_bleufonce: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_grise: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_jaune: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_noir: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_orange: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_rose: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_rouge: shounka_a3_cliors_civ {};
	class shounka_a3_cliors_civ_violet: shounka_a3_cliors_civ {};

	class Mrshounka_a3_dodge15_civ
	{
		realname="Dodge Charger";
		buyPrice=38500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=68;
		colors[]=
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
	};
	class Mrshounka_a3_dodge15_civ_bleufonce: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_grise: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_jaune: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_noir: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_orange: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_rose: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_rouge: Mrshounka_a3_dodge15_civ {};
	class Mrshounka_a3_dodge15_civ_violet: Mrshounka_a3_dodge15_civ {};

	class shounka_f430_spider
	{
		realname="Ferrari 430 Spider";
		buyPrice=685000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=95;
		colors[]=
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
	};
	class shounka_f430_spider_bleufonce: shounka_f430_spider {};
	class shounka_f430_spider_grise: shounka_f430_spider {};
	class shounka_f430_spider_jaune: shounka_f430_spider {};
	class shounka_f430_spider_noir: shounka_f430_spider {};
	class shounka_f430_spider_orange: shounka_f430_spider {};
	class shounka_f430_spider_rose: shounka_f430_spider {};
	class shounka_f430_spider_rouge: shounka_f430_spider {};
	class shounka_f430_spider_violet: shounka_f430_spider {};

	class shounka_gt
	{
		realname="Ford GT";
		buyPrice=450000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=66;
		colors[]=
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
	};
	class shounka_gt_bleufonce: shounka_gt {};
	class shounka_gt_grise: shounka_gt {};
	class shounka_gt_jaune: shounka_gt {};
	class shounka_gt_noir: shounka_gt {};
	class shounka_gt_orange: shounka_gt {};
	class shounka_gt_rose: shounka_gt {};
	class shounka_gt_rouge: shounka_gt {};
	class shounka_gt_violet: shounka_gt {};

	class Mrshounka_mustang_civ
	{
		realname="Ford Mustang";
		buyPrice=63500;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=59;
		colors[]=
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
	};
	class Mrshounka_mustang_mat: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_noir: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_mat_n: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_bleufonce: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_mat_b: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_rouge: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_jaune: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_rose: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_grise: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_violet: Mrshounka_mustang_civ {};
	class Mrshounka_mustang_orange: Mrshounka_mustang_civ {};

	class Skyline_GMC_Vandura
	{
		realname="GMC Vendura";
		buyPrice=26000;
		inventory=165;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=83;
		colors[]=
		{
			"Skyline_GMC_Vandura_01_F",
			"Skyline_GMC_Vandura_02_F",
			"Skyline_GMC_Vandura_03_F",
			"Skyline_GMC_Vandura_04_F",
			"Skyline_GMC_Vandura_05_F",
			"Skyline_GMC_Vandura_06_F",
			"Skyline_GMC_Vandura_07_F",
			"Skyline_GMC_Vandura_08_F",
			"Skyline_GMC_Vandura_09_F",
			"Skyline_GMC_Vandura_10_F",
			"Skyline_GMC_Vandura_11_F",
			"Skyline_GMC_Vandura_12_F",
			"Skyline_GMC_Vandura_13_F",
			"Skyline_GMC_Vandura_14_F",
			"Skyline_GMC_Vandura_15_F",
			"Skyline_GMC_Vandura_16_F",
			"Skyline_GMC_Vandura_17_F"
		};
	};
	class Skyline_GMC_Vandura_01_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_02_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_03_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_04_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_05_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_06_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_07_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_08_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_09_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_10_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_11_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_12_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_13_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_14_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_15_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_16_F: Skyline_GMC_Vandura {};
	class Skyline_GMC_Vandura_17_F: Skyline_GMC_Vandura {};

	class Mrshounka_golfvi_civ
	{
		realname="Golf VI";
		buyPrice=12500;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=55;
		colors[]=
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
	};
	class Mrshounka_golfvi_bleufonce: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_grise: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_jaune: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_noir: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_orange: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_rose: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_rouge: Mrshounka_golfvi_civ {};
	class Mrshounka_golfvi_violet: Mrshounka_golfvi_civ {};

	class Mrshounka_hummer_civ
	{
		realname="Hummer H1";
		buyPrice=145000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=95;
		colors[]=
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
	};
	class Mrshounka_hummer_civ_bleufonce: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_grise: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_jaune: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_noir: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_orange: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_rose: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_rouge: Mrshounka_hummer_civ {};
	class Mrshounka_hummer_civ_violet: Mrshounka_hummer_civ {};

	class Mrshounka_a3_iveco_f
	{
		realname="Iveco";
		buyPrice=576000;
		inventory=950;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_transport_goods"};
		fuel="Diesel";
		fuelCapacity=400;
		colors[]=
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
	};
	class shounka_ivceco_bleufonce: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_grise: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_jaune: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_noir: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_orange: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_rose: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_rouge: Mrshounka_a3_iveco_f {};
	class shounka_ivceco_violet: Mrshounka_a3_iveco_f {};

	class Mrshounka_cherokee_noir
	{
		realname="Jeep Cherokee";
		buyPrice=43000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
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
	};
	class Mrshounka_cherokee_noir_mat: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_bleu_mat: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_blanc: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_blanc_mat: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_violet_mat: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge: Mrshounka_cherokee_noir {};
	class Mrshounka_cherokee_noir_rouge_mat: Mrshounka_cherokee_noir {};

	class Mrshounka_veneno_c
	{
		realname="Lamborgini Veneno";
		buyPrice=535000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=90;
		colors[]=
		{
			"Mrshounka_veneno_c_noir",
			"Mrshounka_veneno_c_bleu",
			"Mrshounka_veneno_c_jaune"
		};
	};
	class Mrshounka_veneno_c_noir: Mrshounka_veneno_c {};
	class Mrshounka_veneno_c_bleu: Mrshounka_veneno_c {};
	class Mrshounka_veneno_c_jaune: Mrshounka_veneno_c {};

	class Mrshounka_evox_civ
	{
		realname="Lancer Evolution";
		buyPrice=23400;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=55;
		colors[]=
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
	};
	class Mrshounka_evox_bleufonce: Mrshounka_evox_civ {};
	class Mrshounka_evox_grise: Mrshounka_evox_civ {};
	class Mrshounka_evox_jaune: Mrshounka_evox_civ {};
	class Mrshounka_evox_noir: Mrshounka_evox_civ {};
	class Mrshounka_evox_orange: Mrshounka_evox_civ {};
	class Mrshounka_evox_rose: Mrshounka_evox_civ {};
	class Mrshounka_evox_rouge: Mrshounka_evox_civ {};
	class Mrshounka_evox_violet: Mrshounka_evox_civ {};

	class shounka_limo_civ
	{
		realname="Limousine";
		buyPrice=180000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_transport_people"};
		fuel="Diesel";
		fuelCapacity=88;
		colors[]=
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
	};
	class shounka_limo_civ_bleufonce: shounka_limo_civ {};
	class shounka_limo_civ_grise: shounka_limo_civ {};
	class shounka_limo_civ_jaune: shounka_limo_civ {};
	class shounka_limo_civ_noir: shounka_limo_civ {};
	class shounka_limo_civ_orange: shounka_limo_civ {};
	class shounka_limo_civ_rose: shounka_limo_civ {};
	class shounka_limo_civ_rouge: shounka_limo_civ {};
	class shounka_limo_civ_violet: shounka_limo_civ {};

	class Mrshounka_lykan_c
	{
		realname="Lykan Hypersport";
		buyPrice=875000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=79;
		colors[]=
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
	};
	class Mrshounka_lykan_c_bleufonce: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_grise: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_jaune: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_noir: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_orange: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_rose: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_rouge: Mrshounka_lykan_c {};
	class Mrshounka_lykan_c_violet: Mrshounka_lykan_c {};

	class shounka_mp4
	{
		realname="McLaren MP4";
		buyPrice=915000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=72;
		colors[]=
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
	};
	class shounka_mp4_bleufonce: shounka_mp4 {};
	class shounka_mp4_grise: shounka_mp4 {};
	class shounka_mp4_jaune: shounka_mp4 {};
	class shounka_mp4_noir: shounka_mp4 {};
	class shounka_mp4_orange: shounka_mp4 {};
	class shounka_mp4_rose: shounka_mp4 {};
	class shounka_mp4_rouge: shounka_mp4 {};
	class shounka_mp4_violet: shounka_mp4 {};

	class Mrshounka_mercedes_190_p_civ
	{
		realname="Mercedes 190";
		buyPrice=45250;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=55;
		colors[]=
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
	};
	class Mrshounka_mercedes_190_p_bleufonce: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_grise: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_jaune: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_noir: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_orange: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_rose: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_rouge: Mrshounka_mercedes_190_p_civ {};
	class Mrshounka_mercedes_190_p_violet: Mrshounka_mercedes_190_p_civ {};

	class Mrshounka_c63_2015_civ
	{
		realname="Mercedes C63";
		buyPrice=96000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=66;
		colors[]=
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
	};
	class Mrshounka_c63_2015_mat: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_noir: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_mat_n: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_bleufonce: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_mat_b: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_rouge: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_jaune: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_rose: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_grise: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_violet: Mrshounka_c63_2015_civ {};
	class Mrshounka_c63_2015_orange: Mrshounka_c63_2015_civ {};

	class shounka_clk
	{
		realname="Mercedes CLK";
		buyPrice=67500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=62;
		colors[]=
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
	};
	class shounka_clk_bleufonce: shounka_clk {};
	class shounka_clk_grise: shounka_clk {};
	class shounka_clk_jaune: shounka_clk {};
	class shounka_clk_noir: shounka_clk {};
	class shounka_clk_orange: shounka_clk {};
	class shounka_clk_rose: shounka_clk {};
	class shounka_clk_rouge: shounka_clk {};
	class shounka_clk_violet: shounka_clk {};

	class shounka_a3_spr_civ
	{
		realname="Mercedes Sprinter";
		buyPrice=51500;
		inventory=200;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=100;
		colors[]=
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
	};
	class shounka_a3_spr_civ_bleufonce: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_grise: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_jaune: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_noir: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_orange: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_rose: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_rouge: shounka_a3_spr_civ {};
	class shounka_a3_spr_civ_violet: shounka_a3_spr_civ {};

	class Skyline_Mercedes_Sprinter
	{
		realname="Mercedes Sprinter";
		buyPrice=51500;
		inventory=200;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=100;
		colors[]=
		{
			"Skyline_Mercedes_Sprinter_01_F",
			"Skyline_Mercedes_Sprinter_02_F",
			"Skyline_Mercedes_Sprinter_03_F",
			"Skyline_Mercedes_Sprinter_04_F",
			"Skyline_Mercedes_Sprinter_05_F",
			"Skyline_Mercedes_Sprinter_06_F",
			"Skyline_Mercedes_Sprinter_07_F",
			"Skyline_Mercedes_Sprinter_08_F",
			"Skyline_Mercedes_Sprinter_09_F",
			"Skyline_Mercedes_Sprinter_10_F",
			"Skyline_Mercedes_Sprinter_11_F",
			"Skyline_Mercedes_Sprinter_12_F",
			"Skyline_Mercedes_Sprinter_13_F",
			"Skyline_Mercedes_Sprinter_14_F",
			"Skyline_Mercedes_Sprinter_15_F",
			"Skyline_Mercedes_Sprinter_16_F"
		};
	};
	class Skyline_Mercedes_Sprinter_01_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_02_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_03_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_04_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_05_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_06_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_07_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_08_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_09_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_10_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_11_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_12_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_13_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_14_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_15_F: Skyline_Mercedes_Sprinter {};
	class Skyline_Mercedes_Sprinter_16_F: Skyline_Mercedes_Sprinter {};
	
	class Skyline_Mercedes_Sprinter_Samu
	{
		realname="Mercedes Sprinter Samu";
		buyPrice=47500;
		inventory=110;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		rank=1;
		fuel="Diesel";
		fuelCapacity=100;
		colors[]=
		{
			"Skyline_Mercedes_Sprinter_Samu_01_F"
		};
	};
	class Skyline_Mercedes_Sprinter_Samu_01_F: Skyline_Mercedes_Sprinter_Samu {};

	class Skyline_Mercedes_Sprinter_Depannage
	{
		realname="Mercedes Sprinter Dépanneur";
		buyPrice=51500;
		inventory=200;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_garagist"};
		fuel="Diesel";
		fuelCapacity=100;
		colors[]=
		{
			"Skyline_Mercedes_Sprinter_Depannage_01_F",
			"Skyline_Mercedes_Sprinter_Depannage_02_F"
		};
	};
	class Skyline_Mercedes_Sprinter_Depannage_01_F: Skyline_Mercedes_Sprinter_Depannage {};
	class Skyline_Mercedes_Sprinter_Depannage_02_F: Skyline_Mercedes_Sprinter_Depannage {};

	class Mrshounka_a3_gtr_civ
	{
		realname="Nissan GTR";
		buyPrice=95300;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=74;
		colors[]=
		{
			"Mrshounka_a3_gtr_civ_noir",
			"Mrshounka_a3_gtr_civ_bleu"
		};
	};
	class Mrshounka_a3_gtr_civ_noir: Mrshounka_a3_gtr_civ {};
	class Mrshounka_a3_gtr_civ_bleu: Mrshounka_a3_gtr_civ {};

	class Mrshounka_pagani_c
	{
		realname="Pagani Huayra";
		buyPrice=845000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=100;
		colors[]=
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
	};
	class Mrshounka_pagani_c_bleufonce: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_grise: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_jaune: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_noir: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_orange: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_rose: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_rouge: Mrshounka_pagani_c {};
	class Mrshounka_pagani_c_violet: Mrshounka_pagani_c {};

	class Mrshounka_207_civ
	{
		realname="Peugeot 207";
		buyPrice=12000;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=50;
		colors[]=
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
	};
	class Mrshounka_207_bleufonce: Mrshounka_207_civ {};
	class Mrshounka_207_grise: Mrshounka_207_civ {};
	class Mrshounka_207_jaune: Mrshounka_207_civ {};
	class Mrshounka_207_noir: Mrshounka_207_civ {};
	class Mrshounka_207_orange: Mrshounka_207_civ {};
	class Mrshounka_207_rose: Mrshounka_207_civ {};
	class Mrshounka_207_rouge: Mrshounka_207_civ {};
	class Mrshounka_207_violet: Mrshounka_207_civ {};

	class Mrshounka_a3_308_rcz
	{
		realname="Peugeot 308 RCZ";
		buyPrice=36100;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=55;
		colors[]=
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
	};
	class Mrshounka_a3_308_rcz_bleufonce: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_grise: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_jaune: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_noir: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_orange: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_rose: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_rouge: Mrshounka_a3_308_rcz {};
	class Mrshounka_a3_308_rcz_violet: Mrshounka_a3_308_rcz {};

	class shounka_a3_peugeot508_civ
	{
		realname="Peugeot 508";
		buyPrice=28000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=72;
		colors[]=
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
	};
	class shounka_a3_peugeot508_civ_bleufonce: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_grise: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_jaune: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_noir: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_orange: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_rose: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_rouge: shounka_a3_peugeot508_civ {};
	class shounka_a3_peugeot508_civ_violet: shounka_a3_peugeot508_civ {};

	class shounka_porsche911
	{
		realname="Porshe 911";
		buyPrice=215000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=64;
		colors[]=
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
	};
	class shounka_porsche911_bleufonce: shounka_porsche911 {};
	class shounka_porsche911_grise: shounka_porsche911 {};
	class shounka_porsche911_jaune: shounka_porsche911 {};
	class shounka_porsche911_noir: shounka_porsche911 {};
	class shounka_porsche911_orange: shounka_porsche911 {};
	class shounka_porsche911_rose: shounka_porsche911 {};
	class shounka_porsche911_rouge: shounka_porsche911 {};
	class shounka_porsche911_violet: shounka_porsche911 {};

	class mrshounka_92_civ
	{
		realname="Porshe 92";
		buyPrice=325000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=68;
		colors[]=
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
	};
	class mrshounka_92_civ_bleufonce: mrshounka_92_civ {};
	class mrshounka_92_civ_grise: mrshounka_92_civ {};
	class mrshounka_92_civ_jaune: mrshounka_92_civ {};
	class mrshounka_92_civ_noir: mrshounka_92_civ {};
	class mrshounka_92_civ_orange: mrshounka_92_civ {};
	class mrshounka_92_civ_rose: mrshounka_92_civ {};
	class mrshounka_92_civ_rouge: mrshounka_92_civ {};
	class mrshounka_92_civ_violet: mrshounka_92_civ {};

	class Mrshounka_cayenne_p_civ
	{
		realname="Porshe Cayenne";
		buyPrice=85000;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
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
	};
	class Mrshounka_cayenne_p_bleufonce: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_grise: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_jaune: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_noir: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_orange: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_rose: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_rouge: Mrshounka_cayenne_p_civ {};
	class Mrshounka_cayenne_p_violet: Mrshounka_cayenne_p_civ {};

	class Mrshounka_r5_civ
	{
		realname="Renault 5";
		buyPrice=8000;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=93;
		colors[]=
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
	};
	class Mrshounka_r5_bleufonce: Mrshounka_r5_civ {};
	class Mrshounka_r5_grise: Mrshounka_r5_civ {};
	class Mrshounka_r5_jaune: Mrshounka_r5_civ {};
	class Mrshounka_r5_noir: Mrshounka_r5_civ {};
	class Mrshounka_r5_orange: Mrshounka_r5_civ {};
	class Mrshounka_r5_rose: Mrshounka_r5_civ {};
	class Mrshounka_r5_rouge: Mrshounka_r5_civ {};
	class Mrshounka_r5_violet: Mrshounka_r5_civ {};

	class Mrshounka_megane_rs_2015_civ
	{
		realname="Renault Megane RS";
		buyPrice=28000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
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
	};
	class Mrshounka_megane_rs_2015_bleufonce: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_grise: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_jaune: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_noir: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_orange: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_rose: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_rouge: Mrshounka_megane_rs_2015_civ {};
	class Mrshounka_megane_rs_2015_violet: Mrshounka_megane_rs_2015_civ {};

	class Mrshounka_twingo_p
	{
		realname="Renault Twingo";
		buyPrice=10900;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=40;
		colors[]=
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
	};
	class Mrshounka_twingo_p_noir: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_bf: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_r: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_j: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_rose: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_g: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_v: Mrshounka_twingo_p {};
	class Mrshounka_twingo_p_o: Mrshounka_twingo_p {};

	class Mrshounka_a3_smart_civ
	{
		realname="Smart";
		buyPrice=18000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=33;
		colors[]=
		{
			"Mrshounka_a3_smart_civ_noir",
			"Mrshounka_a3_smart_civ_bleu"
		};
	};
	class Mrshounka_a3_smart_civ_noir: Mrshounka_a3_smart_civ {};
	class Mrshounka_a3_smart_civ_bleu: Mrshounka_a3_smart_civ {};

	class Mrshounka_subaru08_civ
	{
		realname="Subaru Impreza";
		buyPrice=37000;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
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
	};
	class Mrshounka_subaru08_bleufonce: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_grise: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_jaune: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_noir: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_orange: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_rose: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_rouge: Mrshounka_subaru08_civ {};
	class Mrshounka_subaru08_violet: Mrshounka_subaru08_civ {};

	class shounka_transam
	{
		realname="Transam";
		buyPrice=325000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=59;
		colors[]=
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
	};
	class shounka_transam_bleufonce: shounka_transam {};
	class shounka_transam_grise: shounka_transam {};
	class shounka_transam_jaune: shounka_transam {};
	class shounka_transam_noir: shounka_transam {};
	class shounka_transam_orange: shounka_transam {};
	class shounka_transam_rose: shounka_transam {};
	class shounka_transam_rouge: shounka_transam {};
	class shounka_transam_violet: shounka_transam {};

	class shounka_a3_dafxf_euro6_f
	{
		realname="Daf euro 6";
		buyPrice=25000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=400;
	};

	class shounka_a3_tgs
	{
		realname="Man TGS dépannage";
		buyPrice=25000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_garagist"};
		fuel="Diesel";
		fuelCapacity=400;
	};

  	class SAL_77TRANSAMCiv
	{
		realname="Pontiak";
		buyPrice=350000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=76;
	};

	class max_H3
	{
		realname="Hummer H3";
		buyPrice=135000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=87;
		colors[]=
		{
			"max_H3_red",
			"max_H3_black",
			"max_H3_yellow",
			"max_H3_urbancamo",
			"max_H3_vegeta"
		};
	};
  	class max_H3_red: max_H3 {};
  	class max_H3_black: max_H3 {};
  	class max_H3_yellow: max_H3 {};
	class max_H3_urbancamo: max_H3 {};
	class max_H3_vegeta: max_H3 {};

	class max_impala
	{
		realname="Impala";
		buyPrice=44500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=70;
		colors[]=
		{
			"max_impala_black",
			"max_impala_white",
			"max_impala_red",
			"max_impala_blue"
		};
	};
  	class max_impala_black: max_impala {};
  	class max_impala_white: max_impala {};
  	class max_impala_red: max_impala {};
	class max_impala_blue: max_impala {};

	class DAR_TahoeCiv
	{
		realname="Chevrolet Tahoe";
		buyPrice=51300;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=98;
		colors[]=
		{
			"DAR_TahoeCiv",
			"DAR_TahoeCivBlack",
			"DAR_TahoeCivRed",
			"DAR_TahoeCivBlue",
			"DAR_TahoeCivSilver"
		};
	};
  	class DAR_TahoeCivBlack: DAR_TahoeCiv {};
  	class DAR_TahoeCivRed: DAR_TahoeCiv {};
  	class DAR_TahoeCivBlue: DAR_TahoeCiv {};
	class DAR_TahoeCivSilver: DAR_TahoeCiv {};

	class Tal_Murci
	{
		realname="Lamborgini Murcielago";
		buyPrice=725000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=100;
		colors[]=
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
	};
  	class Tal_Murci_Red: Tal_Murci {};
  	class Tal_Murci_Pink: Tal_Murci {};
  	class Tal_Murci_Black: Tal_Murci {};
	class Tal_Murci_Blue: Tal_Murci {};
	class Tal_Murci_LightBlue: Tal_Murci {};
	class Tal_Murci_Green: Tal_Murci {};
	class Tal_Murci_Lime: Tal_Murci {};
	class Tal_Murci_Purple: Tal_Murci {};
	class Tal_Murci_Grey: Tal_Murci {};
	class Tal_Murci_Orange: Tal_Murci {};
	class Tal_Murci_White: Tal_Murci {};
	class Tal_Murci_Yellow: Tal_Murci {};
	class Tal_Murci_PC: Tal_Murci {};

	class SAL_AudiCiv
	{
		realname="Audi A4";
		buyPrice=60000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=54;
		colors[]=
		{
			"SAL_AudiCiv",
			"SAL_AudiCivRed",
			"SAL_AudiCivSilver",
			"SAL_AudiCivBlack"
		};
	};
  	class SAL_AudiCivRed: SAL_AudiCiv {};
  	class SAL_AudiCivSilver: SAL_AudiCiv {};
  	class SAL_AudiCivBlack: SAL_AudiCiv {};

  	class max_BMW
	{
		realname="BMW M3";
		buyPrice=45000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
		{
			"max_BMW",
			"max_BMW1",
			"max_BMW2"
		};
	};
  	class max_BMW1: max_BMW {};
  	class max_BMW2: max_BMW {};

  	class max_charger
	{
		realname="Dodge Charger";
		buyPrice=95000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=68;
		colors[]=
		{
			"max_charger_black",
			"max_charger_blue",
			"max_charger_red",
			"max_charger_yellow"
		};
	};
  	class max_charger_black: max_charger {};
  	class max_charger_blue: max_charger {};
  	class max_charger_red: max_charger {};
  	class max_charger_yellow: max_charger {};

    class max_CrownVic
	{
		realname="Crown Victoria";
		buyPrice=10000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=72;
		colors[]=
		{
			"max_CrownVic_blue",
			"max_CrownVic_red",
			"max_CrownVic_white"
		};
	};
  	class max_CrownVic_blue: max_CrownVic {};
  	class max_CrownVic_red: max_CrownVic {};
  	class max_CrownVic_white: max_CrownVic {};

  	class max_jeep
	{
		realname="Jeep";
		buyPrice=85000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=60;
		colors[]=
		{
			"max_jeep_green",
			"max_jeep_blue",
			"max_jeep_red",
			"max_jeep_black"
		};
	};
  	class max_jeep_green: max_jeep {};
  	class max_jeep_blue: max_jeep {};
  	class max_jeep_red: max_jeep {};
   	class max_jeep_black: max_jeep {};

    class max_suv
	{
		realname="SUV";
		buyPrice=45000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=80;
		colors[]=
		{
			"max_suv_black",
			"max_suv_red",
			"max_suv_blue",
			"max_suv_green",
			"max_suv_UC"
		};
	};
  	class max_suv_black: max_suv {};
  	class max_suv_red: max_suv {};
  	class max_suv_blue: max_suv {};
   	class max_suv_green: max_suv {};
    class max_suv_UC: max_suv {};

    class max_van
	{
		realname="Van";
		buyPrice=21000;
		inventory=165;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=132;
		colors[]=
		{
			"max_van_white",
			"max_van_cola",
			"max_van_Grey",
			"max_van_red",
			"max_van_blue",
			"max_van_green"
		};
	};
  	class max_van_white: max_van {};
  	class max_van_cola: max_van {};
  	class max_van_Grey: max_van {};
   	class max_van_red: max_van {};
    class max_van_blue: max_van {};
    class max_van_green: max_van {};

    class Tal_Maserati
	{
		realname="Maserati";
		buyPrice=325000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=86;
		colors[]=
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
	};
  	class Tal_Maserati_Red: Tal_Maserati {};
  	class Tal_Maserati_Pink: Tal_Maserati {};
  	class Tal_Maserati_Black: Tal_Maserati {};
  	class Tal_Maserati_Blue: Tal_Maserati {};
  	class Tal_Maserati_LightBlue: Tal_Maserati {};
  	class Tal_Maserati_Green: Tal_Maserati {};
  	class Tal_Maserati_Lime: Tal_Maserati {};
  	class Tal_Maserati_Purple: Tal_Maserati {};
  	class Tal_Maserati_Grey: Tal_Maserati {};
  	class Tal_Maserati_Orange: Tal_Maserati {};
  	class Tal_Maserati_White: Tal_Maserati {};
  	class Tal_Maserati_Yellow: Tal_Maserati {};

  	class DAR_ChallengerCiv
	{
		realname="Dodge Challenger";
		buyPrice=35350;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=70;
		colors[]=
		{
			"DAR_ChallengerCivWhite",
			"DAR_ChallengerCivRed",
			"DAR_ChallengerCivBlack",
			"DAR_ChallengerCivOrange"
		};
	};
  	class DAR_ChallengerCivWhite: DAR_ChallengerCiv {};
  	class DAR_ChallengerCivRed: DAR_ChallengerCiv {};
  	class DAR_ChallengerCivBlack: DAR_ChallengerCiv {};
  	class DAR_ChallengerCivOrange: DAR_ChallengerCiv {};

  	class Skyline_G65_01_F
	{
		realname="Mercedes G65 AMG";
		buyPrice=67000;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_security"};
		fuel="SP98";
		fuelCapacity=96;
	};

	class B_Truck_01_transport_F
	{
		realname="HEMTT Transport";
		buyPrice=25000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=587;
	};

	class B_Truck_01_covered_F
	{
		realname="HEMTT Couvert";
		buyPrice=25000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=587;
	};

	class B_Truck_01_box_F
	{
		realname="HEMTT Box";
		buyPrice=25000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=587;
	};

	class max_impala_security
	{
		realname="Impala Secu";
		buyPrice=12000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_security"};
		fuel="SP95";
		fuelCapacity=70;
	};

	class max_BMW_M3_GTR
	{
		realname="BMW M3 Rally";
		buyPrice=93000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
		{
			"max_BMW_M3_GTR",
			"max_BMW_M3_GTR1",
			"max_BMW_M3_GTR2",
			"max_BMW_M3_GTR3",
			"max_BMW_M3_GTR4"
		};
	};
  	class max_BMW_M3_GTR1: max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR2: max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR3: max_BMW_M3_GTR {};
  	class max_BMW_M3_GTR4: max_BMW_M3_GTR {};

	class max_CrownVic_taxi
	{
		realname="Crown Victoria Taxi";
		buyPrice=12500;
		inventory=50;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_transport_people"};
		fuel="SP95";
		fuelCapacity=72;
	};

  	class DAR_M3Civ
	{
		realname="BMW M3";
		buyPrice=48000;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
		{
			"DAR_M3CivBlack",
			"DAR_M3CivWhite",
			"DAR_M3CivGrey"
		};
	};
  	class DAR_M3CivBlack: DAR_M3Civ {};
  	class DAR_M3CivWhite: DAR_M3Civ {};
  	class DAR_M3CivGrey: DAR_M3Civ {};

    class C_Van_01_transport_F
	{
		realname="Camionnette transport";
		buyPrice=46000;
		inventory=175;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=100;
	};

    class C_Van_01_box_F
	{
		realname="Camionnette caisse";
		buyPrice=49250;
		inventory=185;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=100;
	};

    class RDS_Gaz24_Civ
	{
		realname="Gaz";
		buyPrice=800;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="GPL";
		fuelCapacity=55;
		colors[]=
		{
			"RDS_Gaz24_Civ_01",
			"RDS_Gaz24_Civ_02",
			"RDS_Gaz24_Civ_03"
		};
	};
  	class RDS_Gaz24_Civ_01: RDS_Gaz24_Civ {};
  	class RDS_Gaz24_Civ_02: RDS_Gaz24_Civ {};
  	class RDS_Gaz24_Civ_03: RDS_Gaz24_Civ {};

  	class RDS_Golf4_Civ_01
	{
		realname="Golf IV";
		buyPrice=1800;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=55;
	};

	class C_Quadbike_01_F
	{
		realname="Quad";
		buyPrice=800;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={};
		fuel="SP95";
		fuelCapacity=8;
		colors[]=
		{
			"C_Quadbike_01_black_F",
			"C_Quadbike_01_blue_F",
			"C_Quadbike_01_red_F",
			"C_Quadbike_01_white_F"
		};
	};
	class C_Quadbike_01_black_F: C_Quadbike_01_F {};
	class C_Quadbike_01_blue_F: C_Quadbike_01_F {};
	class C_Quadbike_01_red_F: C_Quadbike_01_F {};
	class C_Quadbike_01_white_F: C_Quadbike_01_F {};

	class RDS_S1203_Civ_01
	{
		realname="Skoda 1203";
		buyPrice=900;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=40;
	};

	class RDS_Octavia_Civ_01
	{
		realname="Skoda Octavia";
		buyPrice=1800;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=50;
	};

	class RDS_Lada_Civ
	{
		realname="Vaz 2103";
		buyPrice=800;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="GPL";
		fuelCapacity=39;
		colors[]=
		{
			"RDS_Lada_Civ_01",
			"RDS_Lada_Civ_02",
			"RDS_Lada_Civ_03",
			"RDS_Lada_Civ_04"
		};
	};
  	class RDS_Lada_Civ_01: RDS_Lada_Civ {};
  	class RDS_Lada_Civ_02: RDS_Lada_Civ {};
  	class RDS_Lada_Civ_03: RDS_Lada_Civ {};
  	class RDS_Lada_Civ_04: RDS_Lada_Civ {};

	class sab_a2
	{
		realname="Sab An2";
		buyPrice=325000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=90;
		colors[]=
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
	};
  	class sab_BI_An2: sab_a2 {};
  	class Sab_cz_An2: sab_a2 {};
  	class Sab_fd_An2: sab_a2 {};
  	class Sab_yel_An2: sab_a2 {};
  	class Sab_ana_An2: sab_a2 {};
  	class sab_AH_An2: sab_a2 {};
  	class sab_ca_An2: sab_a2 {};
  	class Sab_ee_An2: sab_a2 {};
  	class Sab_ru_An2: sab_a2 {};
  	class Sab_tk_An2: sab_a2 {};
  	class Sab_af_An2: sab_a2 {};
  	class Sab_A2_An2: sab_a2 {};

	class CUP_C_DC3_CIV
	{
		realname="DC3";
		buyPrice=145000;
		inventory=220;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=3338;
	};
	class CUP_C_C47_CIV
	{
		realname="DC3 long-courrier";
		buyPrice=145000;
		inventory=150;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=3736;
	};

  	class Skyline_Bus
	{
		realname="Bus";
		buyPrice=25000;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_transport_people"};
		fuel="Diesel";
		fuelCapacity=215;
		colors[]=
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
	};
  	class Skyline_Bus_11_F: Skyline_Bus {};
  	class Skyline_Bus_02_F: Skyline_Bus {};
  	class Skyline_Bus_03_F: Skyline_Bus {};
  	class Skyline_Bus_04_F: Skyline_Bus {};
  	class Skyline_Bus_05_F: Skyline_Bus {};
  	class Skyline_Bus_06_F: Skyline_Bus {};
  	class Skyline_Bus_07_F: Skyline_Bus {};
  	class Skyline_Bus_08_F: Skyline_Bus {};
  	class Skyline_Bus_09_F: Skyline_Bus {};
  	class Skyline_Bus_10_F: Skyline_Bus {};

  	class B_Boat_Transport_01_F
	{
		realname="Zodiac";
		buyPrice=3000;
		inventory=70;
		side="CIV";
		insurance=1;
		licenses[]={"boat"};
		fuel="SP95";
		fuelCapacity=83;
		colors[]=
		{
			"B_Boat_Transport_01_F",
			"O_Boat_Transport_01_F",
			"O_Lifeboat",
			"C_Rubberboat",
			"I_Boat_Transport_01_F"
		};
	};
  	class O_Boat_Transport_01_F: B_Boat_Transport_01_F {};
  	class O_Lifeboat: B_Boat_Transport_01_F {};
  	class C_Rubberboat: B_Boat_Transport_01_F {};
  	class I_Boat_Transport_01_F: B_Boat_Transport_01_F {};

  	class C_Boat_Civil_01_F
	{
		realname="Bateau à moteur civil";
		buyPrice=8000;
		inventory=120;
		side="CIV";
		insurance=1;
		licenses[]={"boat"};
		fuel="SP95";
		fuelCapacity=160;
	};

	class CUP_C_Fishing_Boat_Chernarus
	{
		buyPrice=48500;
		inventory=300;
		side="CIV";
		insurance=1;
		licenses[]={"boat"};
		fuel="Diesel";
		fuelCapacity=410;
		realname="Bateau de pêche";
	};

  	class C_Heli_light
	{
		realname="Little Bird";
		buyPrice=750000;
		inventory=15;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=242;
		colors[]=
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
	};
  	class C_Heli_light_01_blue_F: C_Heli_light {};
  	class C_Heli_light_01_red_F: C_Heli_light {};
  	class C_Heli_light_01_ion_F: C_Heli_light {};
  	class C_Heli_light_01_blueLine_F: C_Heli_light {};
  	class C_Heli_light_01_digital_F: C_Heli_light {};
  	class C_Heli_light_01_elliptical_F: C_Heli_light {};
  	class C_Heli_light_01_furious_F: C_Heli_light {};
  	class C_Heli_light_01_graywatcher_F: C_Heli_light {};
  	class C_Heli_light_01_jeans_F: C_Heli_light {};
  	class C_Heli_light_01_light_F: C_Heli_light {};
  	class C_Heli_light_01_shadow_F: C_Heli_light {};
  	class C_Heli_light_01_sheriff_F: C_Heli_light {};
  	class C_Heli_light_01_speedy_F: C_Heli_light {};
  	class C_Heli_light_01_sunset_F: C_Heli_light {};
  	class C_Heli_light_01_vrana_F: C_Heli_light {};
  	class C_Heli_light_01_wasp_F: C_Heli_light {};
  	class C_Heli_light_01_wave_F: C_Heli_light {};
  	class C_Heli_light_01_stripped_F: C_Heli_light {};
  	class C_Heli_light_01_luxe_F: C_Heli_light {};

  	class Fett_orca
	{
		realname="Orca";
		buyPrice=925000;
		inventory=30;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=720;
		colors[]=
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
	};
  	class Fett_orca_white: Fett_orca {};
  	class Fett_orca_blue: Fett_orca {};
  	class Fett_orca_bloodice: Fett_orca {};
  	class Fett_orca_dpm6: Fett_orca {};
  	class Fett_orca_DPU: Fett_orca {};
  	class Fett_orca_frostbite: Fett_orca {};
  	class Fett_orca_jungle: Fett_orca {};
  	class Fett_orca_matrix: Fett_orca {};
  	class Fett_orca_tiger: Fett_orca {};
  	class Fett_orca_tiger_jungle: Fett_orca {};
  	class Fett_orca_red: Fett_orca {};

  	class Fett_mohawk
	{
		realname="Mohawk";
		buyPrice=2125000;
		inventory=40;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=1500;
		colors[]=
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
	};
  	class Fett_mohawk_matrix: Fett_mohawk {};
  	class Fett_mohawk_jungle: Fett_mohawk {};
  	class Fett_mohawk_frostbite: Fett_mohawk {};
  	class Fett_mohawk_blue: Fett_mohawk {};
  	class Fett_mohawk_DPU: Fett_mohawk {};
  	class Fett_mohawk_dpm6: Fett_mohawk {};
  	class Fett_mohawk_bloodice: Fett_mohawk {};
  	class Fett_mohawk_tiger_jungle: Fett_mohawk {};
  	class Fett_mohawk_orange: Fett_mohawk {};
  	class Fett_mohawk_green: Fett_mohawk {};
  	class Fett_mohawk_red: Fett_mohawk {};
  	class Fett_mohawk_tiger: Fett_mohawk {};

  	class dezkit_b206
	{
		realname="B206";
		buyPrice=825000;
		inventory=60;
		side="CIV";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=344;
		colors[]=
		{
			"dezkit_b206_ls",
			"dezkit_b206_hs"
		};
	};
  	class dezkit_b206_ls: dezkit_b206 {};
  	class dezkit_b206_hs: dezkit_b206 {};

	class Skyline_Scania_G420_Depanneuse
	{
		buyPrice=229500;
		inventory=120;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_garagist"};
		fuel="Diesel";
		fuelCapacity=150;
		colors[]=
		{
			"Skyline_Scania_G420_Depanneuse_01_F",
			"Skyline_Scania_G420_Depanneuse_02_F",
			"Skyline_Scania_G420_Depanneuse_03_F",
			"Skyline_Scania_G420_Depanneuse_04_F",
			"Skyline_Scania_G420_Depanneuse_05_F",
			"Skyline_Scania_G420_Depanneuse_06_F",
			"Skyline_Scania_G420_Depanneuse_07_F",
			"Skyline_Scania_G420_Depanneuse_08_F",
			"Skyline_Scania_G420_Depanneuse_09_F",
			"Skyline_Scania_G420_Depanneuse_10_F",
			"Skyline_Scania_G420_Depanneuse_11_F",
			"Skyline_Scania_G420_Depanneuse_12_F",
			"Skyline_Scania_G420_Depanneuse_13_F"
		};
		realname="Scania G420 (Dépanneuse)";
	};
	class Skyline_Scania_G420_Depanneuse_01_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_02_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_03_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_04_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_05_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_06_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_07_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_08_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_09_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_10_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_11_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_12_F: Skyline_Scania_G420_Depanneuse{};
	class Skyline_Scania_G420_Depanneuse_13_F: Skyline_Scania_G420_Depanneuse{};

	class Jonzie_Flat_Bed
	{
		realname="Man TGX Flat Bed Truck";
		buyPrice=350000;
		inventory=200;
		side="CIV";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=400;
	};
	class Jonzie_Log_Truck: Jonzie_Flat_Bed
	{
		realname="Man TGX Log Truck";
		buyPrice=350000;
	};
	class Jonzie_Tanker_Truck: Jonzie_Flat_Bed
	{
		realname="Man TGX Tanker Truck";
		buyPrice=455000;
		licenses[]={"truck","company_fuel"};
	};

	class Jonzie_Ute
	{
		realname="Holden Commodore Ute";
		buyPrice=27500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=71;
		colors[]=
		{
			"Fett_Ute_red",
			"Fett_Ute_yellow",
			"Fett_Ute_green",
			"Fett_Ute_blue",
			"Fett_Ute_pink",
			"Fett_Ute_dark",
			"Fett_Ute_white"
		};
	};
	class Fett_Ute_red: Jonzie_Ute {};
	class Fett_Ute_yellow: Jonzie_Ute {};
	class Fett_Ute_green: Jonzie_Ute {};
	class Fett_Ute_blue: Jonzie_Ute {};
	class Fett_Ute_pink: Jonzie_Ute {};
	class Fett_Ute_dark: Jonzie_Ute {};
	class Fett_Ute_white: Jonzie_Ute {};

  	/*
	**				WEST VEHICLES
	*/

	/* CARS */
	class Fett_Audi_RS4_12_milice_F
	{
		realname="Audi RS4";
		buyPrice=75000;
		inventory=25;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=61;
		rank=7;
	};
	class DAR_TaurusPolice
	{
		realname="Ford Taurus Milice";
		buyPrice=70000;
		inventory=45;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=72;
		rank=6;
	};
	class DAR_CVPIAux
	{
		realname="Crown Victoria Milice";
		buyPrice=16000;
		inventory=45;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=72;
		rank=2;
	};
	class DAR_TahoePolice
	{
		realname="Chevrolet Tahoe Milice";
		buyPrice=40000;
		inventory=90;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=98;
		rank=4;
	};
	class DAR_ImpalaPolice
	{
		realname="Impala Milice";
		buyPrice=20500;
		inventory=15;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=70;
		rank=3;
	};
	class DAR_ChargerPoliceState
	{
		realname="Dodge Charger Milice";
		buyPrice=85000;
		inventory=45;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=68;
		rank=7;
	};
	class DAR_ExplorerPolice
	{
		realname="Ford Explorer Milice";
		buyPrice=60000;
		inventory=90;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=80;
		rank=5;
	};
	class Gurkha_f5
	{
		realname="Gurkha Milice";
		buyPrice=520000;
		inventory=60;
		side="WEST";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=110;
		rank=7;
	};

	/* TRUCKS */
	class Fett_truck_milice
	{
		realname="Camion Milice";
		buyPrice=280000;
		inventory=300;
		side="WEST";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=587;
		rank=6;
	};

	/* SEA */
	class Fett_boat_milice
	{
		realname="Bateau à moteur";
		buyPrice=65000;
		inventory=30;
		side="WEST";
		insurance=1;
		licenses[]={"boat"};
		fuel="SP95";
		fuelCapacity=160;
		rank=4;
	};

	/* AIRS */
	class EC635_Unarmed
	{
		buyPrice=800000;
		inventory=38;
		side="WEST";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=867;
		rank=8;
		realname="EC635 Milice";
	};
	class dezkit_b206mi
	{
		realname="B206 Milice";
		buyPrice=450000;
		inventory=70;
		side="WEST";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=540;
		rank=6;
		colors[]=
		{
			"dezkit_b206_police",
			"dezkit_b206_fbi"
		};
	};
	class dezkit_b206_police: dezkit_b206mi {};
	class dezkit_b206_fbi: dezkit_b206mi {};

	class Skyline_LittleBird_Milice
	{
		realname="LittleBird de la Milice";
		buyPrice=275000;
		inventory=45;
		side="WEST";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=242;
		rank=6;
		colors[]=
		{
			"Skyline_LittleBird_Milice_01_F"
		};
	};
	class Skyline_LittleBird_Milice_01_F: Skyline_LittleBird_Milice {};

  	/*
	**				EAST VEHICLES
	*/

	/* CARS */
	class RDS_Lada_Civ_05
	{
		realname="Lada";
		buyPrice=2000;
		inventory=30;
		side="EAST";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=43;
		rank=1;
		colors[]={};
	};
	class Alysia_Kubelwagen_Garde: RDS_Lada_Civ_05
	{
		realname="Kubelwagen";
		buyPrice=8700;
		fuelCapacity=46;
		rank=2;
	};
	class Skyline_GMC_Vandura_Propagande_01_F: RDS_Lada_Civ_05
	{
		realname="GMC haut parleurs";
		buyPrice=13500;
		inventory=70;
		fuelCapacity=83;
		rank=4;
		speaker=1;
	};

	/* TANKS */
	class Skyline_T34_01_F: RDS_Lada_Civ_05
	{
		realname="T34";
		buyPrice=370000;
		rank=6;
		insurance=0;
		fuelCapacity=540;
		disableLockpick=1;
		fuel="Diesel";
	};

	/* TRUCKS */
	class RDS_Ikarus_Civ: RDS_Lada_Civ_05
	{
		realname="Bus Ikarus";
		buyPrice=38000;
		inventory=80;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=250;
		rank=3;
		colors[]=
		{
			"RDS_Ikarus_Civ_01",
			"RDS_Ikarus_Civ_02"
		};
	};
  	class RDS_Ikarus_Civ_01: RDS_Ikarus_Civ {};
  	class RDS_Ikarus_Civ_02: RDS_Ikarus_Civ {};
	class Fett_truck_army: RDS_Ikarus_Civ
	{
		realname="HEMTT cargo";
		buyPrice=280000;
		inventory=425;
		rank=5;
		fuelCapacity=587;
	};

	/* AIRS */
	class sfp_bo105_unarmed: RDS_Lada_Civ_05
	{
		realname="bo105";
		buyPrice=375000;
		inventory=90;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=575;
		rank=5;
	};
	class Skyline_LittleBird_Garde: RDS_Lada_Civ_05
	{
		realname="LittleBird";
		buyPrice=275000;
		inventory=45;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=242;
		rank=3;
		colors[]={"Skyline_LittleBird_Garde_01_F"};
	};
	class Skyline_LittleBird_Garde_01_F: Skyline_LittleBird_Garde {};

  	/*
	**				GUER VEHICLES
	*/
	class Jonzie_Ambulance
	{
		realname="Ambulance avec civière";
		buyPrice=45000;
		inventory=100;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="diesel";
		fuelCapacity=112;
		rank=1;
	};

	class Mrshounka_corbillard_base_p
	{
		realname="Corbillard";
		buyPrice=65000;
		inventory=45;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="diesel";
		fuelCapacity=96;
		rank=6;
		colors[]=
		{
			"Mrshounka_corbillard_c_noir",
			"Mrshounka_corbillard_c_bleufonce",
			"Mrshounka_corbillard_c_rouge",
			"Mrshounka_corbillard_c_jaune",
			"Mrshounka_corbillard_c_rose",
			"Mrshounka_corbillard_c_grise",
			"Mrshounka_corbillard_c_violet",
			"Mrshounka_corbillard_c_orange"
		};
	};
	class Mrshounka_corbillard_c: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_noir: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_bleufonce: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_rouge: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_jaune: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_rose: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_grise: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_violet: Mrshounka_corbillard_base_p {};
	class Mrshounka_corbillard_c_orange: Mrshounka_corbillard_base_p {};

	class Fett_boat_samu
	{
		realname="Bateau à moteur";
		buyPrice=5000;
		inventory=50;
		side="GUER";
		insurance=1;
		licenses[]={"boat"};
		fuel="Diesel";
		fuelCapacity=160;
		rank=1;
	};

	class DAR_TaurusPoliceState
	{
		realname="Ford Taurus SAMU";
		buyPrice=75250;
		inventory=45;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="diesel";
		fuelCapacity=72;
		rank=5;
	};

	class Fett_zamak_repair_samu
	{
		realname="Zamak Transport de médicament";
		buyPrice=120000;
		inventory=450;
		side="GUER";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=410;
		rank=4;
	};

	class Fett_zamak_covered_samu
	{
		realname="Zamak Stand SAMU";
		buyPrice=120000;
		inventory=150;
		side="GUER";
		insurance=1;
		licenses[]={"truck"};
		fuel="Diesel";
		fuelCapacity=410;
		rank=4;
	};

	class DAR_TahoeEMS
	{
		realname="Chevrolet Tahoe SAMU";
		buyPrice=52520;
		inventory=90;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=98;
		rank=2;
	};

	class DAR_ExplorerMedic
	{
		realname="Ford Explorer SAMU";
		buyPrice=62500;
		inventory=90;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=80;
		rank=3;
	};

	class EC635_ADAC
	{
		realname="EC635 SAMU";
		buyPrice=385000;
		inventory=70;
		side="GUER";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=867;
		rank=3;
	};

	class dezkit_b206ems
	{
		realname="B206 SAMU";
		buyPrice=425000;
		inventory=70;
		side="GUER";
		insurance=1;
		licenses[]={"pilot"};
		fuel="Kerosene";
		fuelCapacity=540;
		rank=3;
		colors[]=
		{
			"dezkit_b206_ems",
			"dezkit_b206_rescue"
		};
	};
	class dezkit_b206_ems: dezkit_b206ems {};
	class dezkit_b206_rescue: dezkit_b206ems {};

	class Mrshounka_ducati_p_base
	{
		realname="Moto Ducati";
		buyPrice=350000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={"moto"};
		fuel="SP95";
		fuelCapacity=15;
		colors[]=
		{
			"Mrshounka_ducati_p",
			"Mrshounka_ducati_p_noir",
			"Mrshounka_ducati_p_bf",
			"Mrshounka_ducati_p_r",
			"Mrshounka_ducati_p_j",
			"Mrshounka_ducati_p_rose",
			"Mrshounka_ducati_p_g",
			"Mrshounka_ducati_p_v",
			"Mrshounka_ducati_p_o"
		};
	};
	class Mrshounka_ducati_p: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_noir: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_bf: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_r: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_j: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_rose: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_g: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_v: Mrshounka_ducati_p_base {};
	class Mrshounka_ducati_p_o: Mrshounka_ducati_p_base {};

	class Mrshounka_yamaha_p_base
	{
		realname="Moto Yamaha";
		buyPrice=275000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={"moto"};
		fuel="SP95";
		fuelCapacity=14;
		colors[]=
		{
			"Mrshounka_yamaha_p",
			"Mrshounka_yamaha_p_noir",
			"Mrshounka_yamaha_p_bf",
			"Mrshounka_yamaha_p_r",
			"Mrshounka_yamaha_p_j",
			"Mrshounka_yamaha_p_rose",
			"Mrshounka_yamaha_p_g",
			"Mrshounka_yamaha_p_v",
			"Mrshounka_yamaha_p_o"
		};
	};
	class Mrshounka_yamaha_p: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_noir: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_bf: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_r: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_j: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_rose: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_g: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_v: Mrshounka_yamaha_p_base {};
	class Mrshounka_yamaha_p_o: Mrshounka_yamaha_p_base {};

	class max_bike_base
	{
		realname="Vieille Moto";
		buyPrice=12000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={"moto"};
		fuel="SP95";
		fuelCapacity=8;
		colors[]=
		{
			"max_bike",
			"max_bike1",
			"max_bike2",
			"max_bike3",
			"max_bike4"
		};
	};
	class max_bike: max_bike_base {};
	class max_bike1: max_bike_base {};
	class max_bike2: max_bike_base {};
	class max_bike3: max_bike_base {};
	class max_bike4: max_bike_base {};
	
	class shounka_harley_a3
	{
		realname="Harley-Davidson";
		buyPrice=45000;
		inventory=5;
		side="CIV";
		insurance=1;
		licenses[]={"moto"};
		fuel="SP95";
		fuelCapacity=9;
		colors[]=
		{
			"shounka_harley_a3_noir",
			"shounka_harley_a3_bleu",
			"shounka_harley_a3_rouge",
			"shounka_harley_a3_lolz"
		};
	};
	class shounka_harley_a3_noir: shounka_harley_a3 {};
	class shounka_harley_a3_bleu: shounka_harley_a3 {};
	class shounka_harley_a3_rouge: shounka_harley_a3 {};
	class shounka_harley_a3_lolz: shounka_harley_a3 {};

	class ADM_Ford_F100
	{
		realname="Ford F100";
		buyPrice=4500;
		inventory=65;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="GPL";
		fuelCapacity=46;
		colors[]=
		{
			"ADM_Ford_F100_red",
			"ADM_Ford_F100_yellow",
			"ADM_Ford_F100_green",
			"ADM_Ford_F100_blue",
			"ADM_Ford_F100_pink",
			"ADM_Ford_F100_dark",
			"ADM_Ford_F100_white"
		};
	};
	class ADM_Ford_F100_red: ADM_Ford_F100 {};
	class ADM_Ford_F100_yellow: ADM_Ford_F100 {};
	class ADM_Ford_F100_green: ADM_Ford_F100 {};
	class ADM_Ford_F100_blue: ADM_Ford_F100 {};
	class ADM_Ford_F100_pink: ADM_Ford_F100 {};
	class ADM_Ford_F100_dark: ADM_Ford_F100 {};
	class ADM_Ford_F100_white: ADM_Ford_F100 {};

	class Skyline_VW_Touareg
	{
		realname="VW Touareg";
		buyPrice=36500;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=84;
		colors[]=
		{
			"Skyline_VW_TouaregR50_01_F",
			"Skyline_VW_TouaregR50_02_F",
			"Skyline_VW_TouaregR50_03_F",
			"Skyline_VW_TouaregR50_04_F",
			"Skyline_VW_TouaregR50_05_F",
			"Skyline_VW_TouaregR50_06_F",
			"Skyline_VW_TouaregR50_07_F",
			"Skyline_VW_TouaregR50_08_F",
			"Skyline_VW_TouaregR50_09_F",
			"Skyline_VW_TouaregR50_10_F",
			"Skyline_VW_TouaregR50_11_F",
			"Skyline_VW_TouaregR50_12_F",
			"Skyline_VW_TouaregR50_13_F"
		};
	};
	class Skyline_VW_TouaregR50_01_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_02_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_03_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_04_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_05_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_06_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_07_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_08_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_09_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_10_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_11_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_12_F: Skyline_VW_Touareg {};
	class Skyline_VW_TouaregR50_13_F: Skyline_VW_Touareg {};

	class Skyline_Audi_RS4
	{
		realname="Audi RS4";
		buyPrice=123000;
		inventory=25;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=61;
		colors[]=
		{
			"Skyline_Audi_RS4_01_F",
			"Skyline_Audi_RS4_02_F",
			"Skyline_Audi_RS4_03_F",
			"Skyline_Audi_RS4_04_F",
			"Skyline_Audi_RS4_05_F",
			"Skyline_Audi_RS4_06_F",
			"Skyline_Audi_RS4_07_F",
			"Skyline_Audi_RS4_08_F",
			"Skyline_Audi_RS4_09_F",
			"Skyline_Audi_RS4_10_F",
			"Skyline_Audi_RS4_11_F",
			"Skyline_Audi_RS4_12_F",
			"Skyline_Audi_RS4_13_F"
		};
	};
	class Skyline_Audi_RS4_01_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_02_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_03_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_04_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_05_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_06_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_07_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_08_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_09_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_10_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_11_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_12_F: Skyline_Audi_RS4 {};
	class Skyline_Audi_RS4_13_F: Skyline_Audi_RS4 {};

	class Skyline_Ford_Transit
	{
		realname="Ford Transit";
		buyPrice=34200;
		inventory=180;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=60;
		colors[]=
		{
			"Skyline_Ford_Transit_01_F",
			"Skyline_Ford_Transit_02_F",
			"Skyline_Ford_Transit_03_F",
			"Skyline_Ford_Transit_04_F",
			"Skyline_Ford_Transit_05_F",
			"Skyline_Ford_Transit_06_F",
			"Skyline_Ford_Transit_07_F",
			"Skyline_Ford_Transit_08_F",
			"Skyline_Ford_Transit_09_F",
			"Skyline_Ford_Transit_10_F",
			"Skyline_Ford_Transit_11_F",
			"Skyline_Ford_Transit_12_F",
			"Skyline_Ford_Transit_13_F"
		};
	};
	class Skyline_Ford_Transit_01_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_02_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_03_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_04_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_05_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_06_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_07_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_08_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_09_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_10_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_11_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_12_F: Skyline_Ford_Transit {};
	class Skyline_Ford_Transit_13_F: Skyline_Ford_Transit {};

	class Skyline_Peugeot_308
	{
		realname="Peugeot 308";
		buyPrice=25250;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=55;
		colors[]=
		{
			"Skyline_Peugeot_308_01_F",
			"Skyline_Peugeot_308_02_F",
			"Skyline_Peugeot_308_03_F",
			"Skyline_Peugeot_308_04_F",
			"Skyline_Peugeot_308_05_F",
			"Skyline_Peugeot_308_06_F",
			"Skyline_Peugeot_308_07_F",
			"Skyline_Peugeot_308_08_F",
			"Skyline_Peugeot_308_09_F",
			"Skyline_Peugeot_308_10_F",
			"Skyline_Peugeot_308_11_F",
			"Skyline_Peugeot_308_12_F",
			"Skyline_Peugeot_308_13_F"
		};
	};
	class Skyline_Peugeot_308_01_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_02_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_03_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_04_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_05_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_06_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_07_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_08_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_09_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_10_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_11_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_12_F: Skyline_Peugeot_308 {};
	class Skyline_Peugeot_308_13_F: Skyline_Peugeot_308 {};

	class shounka_a3_brinks_noir
	{
		realname="Camion de transport de fond";
		buyPrice=160000;
		inventory=230;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_money_tranfer"};
		fuel="Diesel";
		fuelCapacity=70;
		money_transfer=1;
	};
	class Skyline_Brinks_01_F
	{
		realname="Camion de transport de fond";
		buyPrice=185000;
		inventory=200;
		side="CIV";
		insurance=1;
		licenses[]={"truck","company_money_tranfer"};
		fuel="Diesel";
		fuelCapacity=70;
		money_transfer=1;
	};

	class Skyline_Vehicule_Jonzie_Viper
	{
		realname="Dodge Viper";
		buyPrice=815000;
		inventory=25;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=70;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Viper_01_F",
			"Skyline_Vehicule_Jonzie_Viper_02_F",
			"Skyline_Vehicule_Jonzie_Viper_03_F",
			"Skyline_Vehicule_Jonzie_Viper_04_F",
			"Skyline_Vehicule_Jonzie_Viper_05_F",
			"Skyline_Vehicule_Jonzie_Viper_06_F",
			"Skyline_Vehicule_Jonzie_Viper_07_F",
			"Skyline_Vehicule_Jonzie_Viper_08_F",
			"Skyline_Vehicule_Jonzie_Viper_09_F",
			"Skyline_Vehicule_Jonzie_Viper_10_F",
			"Skyline_Vehicule_Jonzie_Viper_11_F",
			"Skyline_Vehicule_Jonzie_Viper_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Viper_01_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_02_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_03_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_04_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_05_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_06_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_07_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_08_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_09_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_10_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_11_F: Skyline_Vehicule_Jonzie_Viper {};
	class Skyline_Vehicule_Jonzie_Viper_12_F: Skyline_Vehicule_Jonzie_Viper {};

	class Skyline_Vehicule_Jonzie_Escalade
	{
		realname="Cadillac Escalade ESV";
		buyPrice=97500;
		inventory=85;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=117;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Escalade_01_F",
			"Skyline_Vehicule_Jonzie_Escalade_02_F",
			"Skyline_Vehicule_Jonzie_Escalade_03_F",
			"Skyline_Vehicule_Jonzie_Escalade_04_F",
			"Skyline_Vehicule_Jonzie_Escalade_05_F",
			"Skyline_Vehicule_Jonzie_Escalade_06_F",
			"Skyline_Vehicule_Jonzie_Escalade_07_F",
			"Skyline_Vehicule_Jonzie_Escalade_08_F",
			"Skyline_Vehicule_Jonzie_Escalade_09_F",
			"Skyline_Vehicule_Jonzie_Escalade_10_F",
			"Skyline_Vehicule_Jonzie_Escalade_11_F",
			"Skyline_Vehicule_Jonzie_Escalade_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Escalade_01_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_02_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_03_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_04_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_05_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_06_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_07_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_08_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_09_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_10_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_11_F: Skyline_Vehicule_Jonzie_Escalade {};
	class Skyline_Vehicule_Jonzie_Escalade_12_F: Skyline_Vehicule_Jonzie_Escalade {};

  	class Skyline_Vehicule_Jonzie_Galant
	{
		realname="Mitsubishi Galant";
		buyPrice=10000;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=60;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Galant_01_F",
			"Skyline_Vehicule_Jonzie_Galant_02_F",
			"Skyline_Vehicule_Jonzie_Galant_03_F",
			"Skyline_Vehicule_Jonzie_Galant_04_F",
			"Skyline_Vehicule_Jonzie_Galant_05_F",
			"Skyline_Vehicule_Jonzie_Galant_06_F",
			"Skyline_Vehicule_Jonzie_Galant_07_F",
			"Skyline_Vehicule_Jonzie_Galant_08_F",
			"Skyline_Vehicule_Jonzie_Galant_09_F",
			"Skyline_Vehicule_Jonzie_Galant_10_F",
			"Skyline_Vehicule_Jonzie_Galant_11_F",
			"Skyline_Vehicule_Jonzie_Galant_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Galant_01_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_02_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_03_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_04_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_05_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_06_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_07_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_08_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_09_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_10_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_11_F: Skyline_Vehicule_Jonzie_Galant {};
	class Skyline_Vehicule_Jonzie_Galant_12_F: Skyline_Vehicule_Jonzie_Galant {};

  	class Skyline_Vehicule_Jonzie_Mini_Cooper
	{
		realname="Mini Cooper";
		buyPrice=7500;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=50;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Mini_Cooper_01_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_02_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_03_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_04_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_05_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_06_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_07_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_08_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_09_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_10_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_11_F",
			"Skyline_Vehicule_Jonzie_Mini_Cooper_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_01_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_02_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_03_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_04_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_05_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_06_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_07_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_08_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_09_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_10_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_11_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};
	class Skyline_Vehicule_Jonzie_Mini_Cooper_12_F: Skyline_Vehicule_Jonzie_Mini_Cooper {};

  	class Skyline_Vehicule_Jonzie_Quattroporte
	{
		realname="Mini Cooper";
		buyPrice=325000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=120;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Quattroporte_01_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_02_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_03_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_04_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_05_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_06_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_07_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_08_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_09_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_10_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_11_F",
			"Skyline_Vehicule_Jonzie_Quattroporte_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Quattroporte_01_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_02_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_03_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_04_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_05_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_06_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_07_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_08_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_09_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_10_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_11_F: Skyline_Vehicule_Jonzie_Quattroporte {};
	class Skyline_Vehicule_Jonzie_Quattroporte_12_F: Skyline_Vehicule_Jonzie_Quattroporte {};

  	class Skyline_Vehicule_Jonzie_Datsun_510
	{
		realname="Datsun 510";
		buyPrice=7500;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=650;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Datsun_510_01_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_02_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_03_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_04_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_05_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_06_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_07_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_08_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_09_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_10_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_11_F",
			"Skyline_Vehicule_Jonzie_Datsun_510_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Datsun_510_01_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_02_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_03_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_04_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_05_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_06_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_07_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_08_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_09_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_10_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_11_F: Skyline_Vehicule_Jonzie_Datsun_510 {};
	class Skyline_Vehicule_Jonzie_Datsun_510_12_F: Skyline_Vehicule_Jonzie_Datsun_510 {};

  	class Skyline_Vehicule_Jonzie_Corolla
	{
		realname="Toyota Corolla";
		buyPrice=6000;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=55;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Corolla_01_F",
			"Skyline_Vehicule_Jonzie_Corolla_02_F",
			"Skyline_Vehicule_Jonzie_Corolla_03_F",
			"Skyline_Vehicule_Jonzie_Corolla_04_F",
			"Skyline_Vehicule_Jonzie_Corolla_05_F",
			"Skyline_Vehicule_Jonzie_Corolla_06_F",
			"Skyline_Vehicule_Jonzie_Corolla_07_F",
			"Skyline_Vehicule_Jonzie_Corolla_08_F",
			"Skyline_Vehicule_Jonzie_Corolla_09_F",
			"Skyline_Vehicule_Jonzie_Corolla_10_F",
			"Skyline_Vehicule_Jonzie_Corolla_11_F",
			"Skyline_Vehicule_Jonzie_Corolla_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Corolla_01_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_02_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_03_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_04_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_05_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_06_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_07_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_08_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_09_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_10_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_11_F: Skyline_Vehicule_Jonzie_Corolla {};
	class Skyline_Vehicule_Jonzie_Corolla_12_F: Skyline_Vehicule_Jonzie_Corolla {};

  	class Skyline_Vehicule_Jonzie_Datsun_Z432
	{
		realname="Datsun Z432";
		buyPrice=22000;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=60;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Datsun_Z432_01_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_02_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_03_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_04_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_05_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_06_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_07_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_08_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_09_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_10_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_11_F",
			"Skyline_Vehicule_Jonzie_Datsun_Z432_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_01_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_02_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_03_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_04_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_05_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_06_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_07_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_08_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_09_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_10_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_11_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};
	class Skyline_Vehicule_Jonzie_Datsun_Z432_12_F: Skyline_Vehicule_Jonzie_Datsun_Z432 {};

  	class Skyline_Vehicule_Jonzie_Raptor
	{
		realname="Ford Raptor";
		buyPrice=63500;
		inventory=90;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=98;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_Raptor_01_F",
			"Skyline_Vehicule_Jonzie_Raptor_02_F",
			"Skyline_Vehicule_Jonzie_Raptor_03_F",
			"Skyline_Vehicule_Jonzie_Raptor_04_F",
			"Skyline_Vehicule_Jonzie_Raptor_05_F",
			"Skyline_Vehicule_Jonzie_Raptor_06_F",
			"Skyline_Vehicule_Jonzie_Raptor_07_F",
			"Skyline_Vehicule_Jonzie_Raptor_08_F",
			"Skyline_Vehicule_Jonzie_Raptor_09_F",
			"Skyline_Vehicule_Jonzie_Raptor_10_F",
			"Skyline_Vehicule_Jonzie_Raptor_11_F",
			"Skyline_Vehicule_Jonzie_Raptor_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Raptor_01_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_02_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_03_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_04_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_05_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_06_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_07_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_08_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_09_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_10_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_11_F: Skyline_Vehicule_Jonzie_Raptor {};
	class Skyline_Vehicule_Jonzie_Raptor_12_F: Skyline_Vehicule_Jonzie_Raptor {};

  	class Skyline_Vehicule_Jonzie_STI
	{
		realname="Subaru STI";
		buyPrice=47500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_STI_01_F",
			"Skyline_Vehicule_Jonzie_STI_02_F",
			"Skyline_Vehicule_Jonzie_STI_03_F",
			"Skyline_Vehicule_Jonzie_STI_04_F",
			"Skyline_Vehicule_Jonzie_STI_05_F",
			"Skyline_Vehicule_Jonzie_STI_06_F",
			"Skyline_Vehicule_Jonzie_STI_07_F",
			"Skyline_Vehicule_Jonzie_STI_08_F",
			"Skyline_Vehicule_Jonzie_STI_09_F",
			"Skyline_Vehicule_Jonzie_STI_10_F",
			"Skyline_Vehicule_Jonzie_STI_11_F",
			"Skyline_Vehicule_Jonzie_STI_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_STI_01_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_02_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_03_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_04_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_05_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_06_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_07_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_08_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_09_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_10_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_11_F: Skyline_Vehicule_Jonzie_STI {};
	class Skyline_Vehicule_Jonzie_STI_12_F: Skyline_Vehicule_Jonzie_STI {};

  	class Skyline_Vehicule_Jonzie_VE
	{
		realname="Holden Commodore";
		buyPrice=29500;
		inventory=45;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=71;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_VE_01_F",
			"Skyline_Vehicule_Jonzie_VE_02_F",
			"Skyline_Vehicule_Jonzie_VE_03_F",
			"Skyline_Vehicule_Jonzie_VE_04_F",
			"Skyline_Vehicule_Jonzie_VE_05_F",
			"Skyline_Vehicule_Jonzie_VE_06_F",
			"Skyline_Vehicule_Jonzie_VE_07_F",
			"Skyline_Vehicule_Jonzie_VE_08_F",
			"Skyline_Vehicule_Jonzie_VE_09_F",
			"Skyline_Vehicule_Jonzie_VE_10_F",
			"Skyline_Vehicule_Jonzie_VE_11_F",
			"Skyline_Vehicule_Jonzie_VE_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_VE_01_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_02_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_03_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_04_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_05_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_06_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_07_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_08_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_09_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_10_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_11_F: Skyline_Vehicule_Jonzie_VE {};
	class Skyline_Vehicule_Jonzie_VE_12_F: Skyline_Vehicule_Jonzie_VE {};

  	class Skyline_Vehicule_Jonzie_Ceed
	{
		realname="Kia cee'd";
		buyPrice=12500;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=53;
		colors[]=
		{
		  "Skyline_Vehicule_Jonzie_Ceed_01_F",
		  "Skyline_Vehicule_Jonzie_Ceed_02_F",
		  "Skyline_Vehicule_Jonzie_Ceed_03_F",
		  "Skyline_Vehicule_Jonzie_Ceed_04_F",
		  "Skyline_Vehicule_Jonzie_Ceed_05_F",
		  "Skyline_Vehicule_Jonzie_Ceed_06_F",
		  "Skyline_Vehicule_Jonzie_Ceed_07_F",
		  "Skyline_Vehicule_Jonzie_Ceed_08_F",
		  "Skyline_Vehicule_Jonzie_Ceed_09_F",
		  "Skyline_Vehicule_Jonzie_Ceed_10_F",
		  "Skyline_Vehicule_Jonzie_Ceed_11_F",
		  "Skyline_Vehicule_Jonzie_Ceed_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_Ceed_01_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_02_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_03_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_04_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_05_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_06_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_07_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_08_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_09_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_10_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_11_F: Skyline_Vehicule_Jonzie_Ceed {};
	class Skyline_Vehicule_Jonzie_Ceed_12_F: Skyline_Vehicule_Jonzie_Ceed {};

  	class Skyline_Vehicule_Jonzie_30CSL
	{
		realname="BMW 3.0 CSL";
		buyPrice=22500;
		inventory=38;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=60;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_30CSL_01_F",
			"Skyline_Vehicule_Jonzie_30CSL_02_F",
			"Skyline_Vehicule_Jonzie_30CSL_03_F",
			"Skyline_Vehicule_Jonzie_30CSL_04_F",
			"Skyline_Vehicule_Jonzie_30CSL_05_F",
			"Skyline_Vehicule_Jonzie_30CSL_06_F",
			"Skyline_Vehicule_Jonzie_30CSL_07_F",
			"Skyline_Vehicule_Jonzie_30CSL_08_F",
			"Skyline_Vehicule_Jonzie_30CSL_09_F",
			"Skyline_Vehicule_Jonzie_30CSL_10_F",
			"Skyline_Vehicule_Jonzie_30CSL_11_F",
			"Skyline_Vehicule_Jonzie_30CSL_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_30CSL_01_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_02_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_03_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_04_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_05_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_06_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_07_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_08_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_09_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_10_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_11_F: Skyline_Vehicule_Jonzie_30CSL {};
	class Skyline_Vehicule_Jonzie_30CSL_12_F: Skyline_Vehicule_Jonzie_30CSL {};

  	class Skyline_Vehicule_Jonzie_XB
	{
		realname="Ford Falcon XB";
		buyPrice=59250;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=79;
		colors[]=
		{
			"Skyline_Vehicule_Jonzie_XB_01_F",
			"Skyline_Vehicule_Jonzie_XB_02_F",
			"Skyline_Vehicule_Jonzie_XB_03_F",
			"Skyline_Vehicule_Jonzie_XB_04_F",
			"Skyline_Vehicule_Jonzie_XB_05_F",
			"Skyline_Vehicule_Jonzie_XB_06_F",
			"Skyline_Vehicule_Jonzie_XB_07_F",
			"Skyline_Vehicule_Jonzie_XB_08_F",
			"Skyline_Vehicule_Jonzie_XB_09_F",
			"Skyline_Vehicule_Jonzie_XB_10_F",
			"Skyline_Vehicule_Jonzie_XB_11_F",
			"Skyline_Vehicule_Jonzie_XB_12_F"
		};
	};
	class Skyline_Vehicule_Jonzie_XB_01_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_02_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_03_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_04_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_05_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_06_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_07_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_08_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_09_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_10_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_11_F: Skyline_Vehicule_Jonzie_XB {};
	class Skyline_Vehicule_Jonzie_XB_12_F: Skyline_Vehicule_Jonzie_XB {};

	class Skyline_Jeep_Wrangler_Rubicon_Depannage
	{
		realname="Jeep Wrangler Depannage";
		buyPrice=63299;
		inventory=30;
		side="CIV";
		insurance=1;
		licenses[]={"driver","company_garagist"};
		fuel="Diesel";
		fuelCapacity=67;
		colors[]=
		{
			"Skyline_Jeep_Wrangler_Rubicon_Depannage_01_F",
			"Skyline_Jeep_Wrangler_Rubicon_Depannage_02_F"
		};
	};
	class Skyline_Jeep_Wrangler_Rubicon_Depannage_01_F: Skyline_Jeep_Wrangler_Rubicon_Depannage {};
	class Skyline_Jeep_Wrangler_Rubicon_Depannage_02_F: Skyline_Jeep_Wrangler_Rubicon_Depannage {};

	class D41_Trawler
	{
		realname="D41 Trawler";
		buyPrice=145000;
		inventory=520;
		side="CIV";
		insurance=1;
		licenses[]={"boat"};
		fuel="Diesel";
		fuelCapacity=650;
	};

	class Skyline_Jeep_Wrangler_Rubicon
	{
		realname="Jeep Wrangler";
		buyPrice=53299;
		inventory=80;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=67;
		colors[]=
		{
			"Skyline_Jeep_Wrangler_Rubicon_01_F",
			"Skyline_Jeep_Wrangler_Rubicon_02_F",
			"Skyline_Jeep_Wrangler_Rubicon_03_F",
			"Skyline_Jeep_Wrangler_Rubicon_04_F",
			"Skyline_Jeep_Wrangler_Rubicon_05_F",
			"Skyline_Jeep_Wrangler_Rubicon_06_F",
			"Skyline_Jeep_Wrangler_Rubicon_07_F",
			"Skyline_Jeep_Wrangler_Rubicon_08_F",
			"Skyline_Jeep_Wrangler_Rubicon_09_F",
			"Skyline_Jeep_Wrangler_Rubicon_10_F",
			"Skyline_Jeep_Wrangler_Rubicon_11_F",
			"Skyline_Jeep_Wrangler_Rubicon_12_F",
			"Skyline_Jeep_Wrangler_Rubicon_13_F"
		};
	};
	class Skyline_Jeep_Wrangler_Rubicon_01_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_02_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_03_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_04_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_05_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_06_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_07_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_08_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_09_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_10_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_11_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_12_F: Skyline_Jeep_Wrangler_Rubicon {};
	class Skyline_Jeep_Wrangler_Rubicon_13_F: Skyline_Jeep_Wrangler_Rubicon {};

	class Skyline_VW_TouaregR50_Samu_01_F
	{
		realname="VW Touareg R50 SAMU";
		buyPrice=57500;
		inventory=90;
		side="GUER";
		insurance=1;
		licenses[]={"driver"};
		fuel="Diesel";
		fuelCapacity=84;
		rank=4;
	};

	class Skyline_Lotus_Esprit
	{
		realname="Lotus Esprit";
		buyPrice=275000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP98";
		fuelCapacity=70;
		colors[]=
		{
			"Skyline_Lotus_Esprit_01_F",
			"Skyline_Lotus_Esprit_02_F",
			"Skyline_Lotus_Esprit_03_F",
			"Skyline_Lotus_Esprit_04_F",
			"Skyline_Lotus_Esprit_05_F",
			"Skyline_Lotus_Esprit_06_F",
			"Skyline_Lotus_Esprit_07_F",
			"Skyline_Lotus_Esprit_08_F",
			"Skyline_Lotus_Esprit_09_F",
			"Skyline_Lotus_Esprit_10_F",
			"Skyline_Lotus_Esprit_11_F",
			"Skyline_Lotus_Esprit_12_F",
			"Skyline_Lotus_Esprit_13_F"
		};
	};
	class Skyline_Lotus_Esprit_01_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_02_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_03_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_04_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_05_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_06_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_07_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_08_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_09_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_10_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_11_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_12_F: Skyline_Lotus_Esprit {};
	class Skyline_Lotus_Esprit_13_F: Skyline_Lotus_Esprit {};

	class Skyline_Renault_Alpine
	{
		realname="Renault Alpine A110";
		buy_price=120000;
		inventory=20;
		side="CIV";
		insurance=1;
		licenses[]={"driver"};
		fuel="SP95";
		fuelCapacity=38;
		colors[]=
		{
			"Skyline_Renault_Alpine_01_F",
			"Skyline_Renault_Alpine_02_F",
			"Skyline_Renault_Alpine_03_F",
			"Skyline_Renault_Alpine_04_F",
			"Skyline_Renault_Alpine_05_F",
			"Skyline_Renault_Alpine_06_F",
			"Skyline_Renault_Alpine_07_F",
			"Skyline_Renault_Alpine_08_F",
			"Skyline_Renault_Alpine_09_F",
			"Skyline_Renault_Alpine_10_F",
			"Skyline_Renault_Alpine_11_F",
			"Skyline_Renault_Alpine_12_F"
		};
	};
	class Skyline_Renault_Alpine_01_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_02_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_03_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_04_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_05_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_06_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_07_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_08_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_09_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_10_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_11_F: Skyline_Renault_Alpine {};
	class Skyline_Renault_Alpine_12_F: Skyline_Renault_Alpine {};
};
