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
    ----------------------------²
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
		donator 					-NUMBER-	(must be donator to buy vehicle)
    possible [0(no),1(yes]
    Ex: donator = 1;
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"DAR_TaurusCiv",
			"DAR_TaurusCivBlack",
			"DAR_TaurusCivBlue"
		};
		realname = "Ford Taurus";
	};
  	class DAR_TaurusCivBlack : DAR_TaurusCiv {};
  	class DAR_TaurusCivBlue : DAR_TaurusCiv {};

  	class A3L_Renault_Magnum
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "truck";
		rank = 0;
		colors[] = {};
		realname = "Renault Magnum";
	};

	class A3L_Alfa_Romeo_White
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "drive";
		rank = 0;
		colors[] = {};
		realname = "Alfa Romeo";
	};

	class Peugeot_207
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"Peugeot_207_Red",
			"Peugeot_207_Black",
			"Peugeot_207_DarkBlue",
			"Peugeot_207_Yellow",
			"Peugeot_207_Pink",
			"Peugeot_207_Grey",
			"Peugeot_207_Purple",
			"Peugeot_207_Orange"
		};
		realname = "Peugeot 207";
	};
  	class Peugeot_207_Red : Peugeot_207 {};
  	class Peugeot_207_Black : Peugeot_207 {};
  	class Peugeot_207_DarkBlue : Peugeot_207 {};
  	class Peugeot_207_Yellow : Peugeot_207 {};
  	class Peugeot_207_Pink : Peugeot_207 {};
  	class Peugeot_207_Grey : Peugeot_207 {};
  	class Peugeot_207_Purple : Peugeot_207 {};
  	class Peugeot_207_Orange : Peugeot_207 {};

	class A3L_Audi_RS4
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Audi_RS4_White",
			"A3L_Audi_RS4_Black",
			"A3L_Audi_RS4_DarkBlue",
			"A3L_Audi_RS4_Red",
			"A3L_Audi_RS4_Yellow",
			"A3L_Audi_RS4_Pink",
			"A3L_Audi_RS4_Grey",
			"A3L_Audi_RS4_Purple",
			"A3L_Audi_RS4_orange"
		};
		realname = "Audi RSA4";
	};

	class A3L_Audi_RS4_White : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Black : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_DarkBlue : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Red : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Yellow : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Pink : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Grey : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_Purple : A3L_Audi_RS4 {};
	class A3L_Audi_RS4_orange : A3L_Audi_RS4 {};

	class A3L_BMW_M6
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_BMW_M6_Red",
			"A3L_BMW_M6_Black",
			"A3L_BMW_M6_Darkblue",
			"A3L_BMW_M6_Yellow",
			"A3L_BMW_M6_Pink",
			"A3L_BMW_M6_Grey",
			"A3L_BMW_M6_Purple",
			"A3L_BMW_M6_Orange",
			"A3L_BMW_M6_White",
			"A3L_BMW_M6_Linus"
		};
		realname = "BMW M6";
	};

	class A3L_BMW_M6_Red : A3L_BMW_M6 {};
	class A3L_BMW_M6_Black : A3L_BMW_M6 {};
	class A3L_BMW_M6_Darkblue : A3L_BMW_M6 {};
	class A3L_BMW_M6_Yellow : A3L_BMW_M6 {};
	class A3L_BMW_M6_Pink : A3L_BMW_M6 {};
	class A3L_BMW_M6_Grey : A3L_BMW_M6 {};
	class A3L_BMW_M6_Purple : A3L_BMW_M6 {};
	class A3L_BMW_M6_Orange : A3L_BMW_M6 {};
	class A3L_BMW_M6_White : A3L_BMW_M6 {};
	class A3L_BMW_M6_Linus : A3L_BMW_M6 {};

	class A3L_Citreon_DS3
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Citreon_DS3_White",
			"A3L_Citreon_DS3_Black",
			"A3L_Citreon_DS3_DarkBlue",
			"A3L_Citreon_DS3_Red",
			"A3L_Citreon_DS3_Yellow",
			"A3L_Citreon_DS3_Pink",
			"A3L_Citreon_DS3_Grey",
			"A3L_Citreon_DS3_Purple",
			"A3L_Citreon_DS3_Orange"
		};
		realname = "Citroen DS3";
	};

	class A3L_Citreon_DS3_White : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Black : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_DarkBlue : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Red : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Yellow : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Pink : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Grey : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Purple : A3L_Citreon_DS3 {};
	class A3L_Citreon_DS3_Orange : A3L_Citreon_DS3 {};

	class A3L_Citreon_C4
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Citreon_C4_Black",
			"A3L_Citreon_C4_DarkBlue",
			"A3L_Citreon_C4_Grey",
			"A3L_Citreon_C4_Orange",
			"A3L_Citreon_C4_Pink",
			"A3L_Citreon_C4_Purple",
			"A3L_Citreon_C4_Red",
			"A3L_Citreon_C4_White",
			"A3L_Citreon_C4_Yellow"
		};
		realname = "Citroen C4";
	};

	class A3L_Citreon_C4_Black : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_DarkBlue : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Grey : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Orange : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Pink : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Purple : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Red : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_White : A3L_Citreon_C4 {};
	class A3L_Citreon_C4_Yellow : A3L_Citreon_C4 {};

	class A3L_Ford_Raptor
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Ford_Raptor_White",
			"A3L_Ford_Raptor_Black",
			"A3L_Ford_Raptor_DarkBlue",
			"A3L_Ford_Raptor_Red",
			"A3L_Ford_Raptor_Yellow",
			"A3L_Ford_Raptor_Pink",
			"A3L_Ford_Raptor_Grey",
			"A3L_Ford_Raptor_Purple",
			"A3L_Ford_Raptor_Orange"
		};
		realname = "Ford Raptor";
	};

	class A3L_Ford_Raptor_White : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Black : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_DarkBlue : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Red : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Yellow : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Pink : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Grey : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Purple : A3L_Ford_Raptor {};
	class A3L_Ford_Raptor_Orange : A3L_Ford_Raptor {};

	class A3L_GolfVI
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_GolfVI_Red",
			"A3L_GolfVI_Black",
			"A3L_GolfVI_DarkBlue",
			"A3L_GolfVI_Yellow",
			"A3L_GolfVI_Pink",
			"A3L_GolfVI_Grey",
			"A3L_GolfVI_Purple",
			"A3L_GolfVI_Orange"
		};
		realname = "Golf VI";
	};

	class A3L_GolfVI_Red : A3L_GolfVI {};
	class A3L_GolfVI_Black : A3L_GolfVI {};
	class A3L_GolfVI_DarkBlue : A3L_GolfVI {};
	class A3L_GolfVI_Yellow : A3L_GolfVI {};
	class A3L_GolfVI_Pink : A3L_GolfVI {};
	class A3L_GolfVI_Grey : A3L_GolfVI {};
	class A3L_GolfVI_Purple : A3L_GolfVI {};
	class A3L_GolfVI_Orange : A3L_GolfVI {};

	class A3L_Jeep_Cherokee
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Jeep_Cherokee_Black",
			"A3L_Jeep_Cherokeee_BlackMatte",
			"A3L_Jeep_Cherokee_DarkBlue",
			"A3L_Jeep_Cherokee_DarkBlueMatte",
			"A3L_Jeep_Cherokee_White",
			"A3L_Jeep_Cherokee_WhiteMatte",
			"A3L_Jeep_Cherokee_Purple",
			"A3L_Jeep_Cherokee_PurpleMatte",
			"A3L_Jeep_Cherokee_Red",
			"A3L_Jeep_Cherokee_RedMatte"
		};
		realname = "Jeep Cherokee";
	};

	class A3L_Jeep_Cherokee_Black : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokeee_BlackMatte : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_DarkBlue : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_DarkBlueMatte : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_White : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_WhiteMatte : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_Purple : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_PurpleMatte : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_Red : A3L_Jeep_Cherokee {};
	class A3L_Jeep_Cherokee_RedMatte : A3L_Jeep_Cherokee {};

	class A3L_Mercedes_ML63
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Mercedes_ML63_White",
			"A3L_Mercedes_ML63_Red",
			"A3L_Mercedes_ML63_Pink",
			"A3L_Mercedes_ML63_DarkBlue",
			"A3L_Mercedes_ML63_Black",
			"A3L_Mercedes_ML63_Yellow",
			"A3L_Mercedes_ML63_Orange"
		};
		realname = "Mercedes ML63";
	};

	class A3L_Mercedes_ML63_White : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_Red : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_Pink : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_DarkBlue : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_Black : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_Yellow : A3L_Mercedes_ML63 {};
	class A3L_Mercedes_ML63_Orange : A3L_Mercedes_ML63 {};

	class A3L_Smartcar
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Smartcar_Red",
			"A3L_Smartcar_Black",
			"A3L_Smartcar_Blue"
		};
		realname = "Smart";
	};

	class A3L_Smartcar_Red : A3L_Smartcar {};
	class A3L_Smartcar_Black : A3L_Smartcar {};
	class A3L_Smartcar_Blue : A3L_Smartcar {};

	class A3L_Subaru_WRX
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Subaru_WRX_Red",
			"A3L_Subaru_WRX_Black",
			"A3L_Subaru_WRX_DarkBlue",
			"A3L_Subaru_WRX_Yellow",
			"A3L_Subaru_WRX_Pink",
			"A3L_Subaru_WRX_Grey",
			"A3L_Subaru_WRX_Purple",
			"A3L_Subaru_WRX_Orange"
		};
		realname = "Smart";
	};

	class A3L_Subaru_WRX_Red : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Black : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_DarkBlue : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Yellow : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Pink : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Grey : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Purple : A3L_Subaru_WRX {};
	class A3L_Subaru_WRX_Orange : A3L_Subaru_WRX {};

  	class A3L_Peugeot_308_RCZ
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
			"A3L_Peugeot_308_RCZ_Red",
			"A3L_Peugeot_308_RCZ_Black",
			"AA3L_Peugeot_308_RCZ_DarkBlue",
			"A3L_Peugeot_308_RCZ_Yellow",
			"A3L_Peugeot_308_RCZ_Pink",
			"A3L_Peugeot_308_RCZ_Grey",
			"A3L_Peugeot_308_RCZ_Purple",
			"A3L_Peugeot_308_RCZ_Orange"
		};
		realname = "Peugeot 308";
	};

	class A3L_Peugeot_308_RCZ_Red : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Black : A3L_Peugeot_308_RCZ {};
	class AA3L_Peugeot_308_RCZ_DarkBlue : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Yellow : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Pink : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Grey : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Purple : A3L_Peugeot_308_RCZ {};
	class A3L_Peugeot_308_RCZ_Orange : A3L_Peugeot_308_RCZ {};

  	class SAL_77TRANSAMCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
	class mmax_impala_blue : max_impala {};
	
	class DAR_TahoeCiv
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "truck";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
		license = "truck";
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
		donator = 0;
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "taxi";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {};
		realname = "Voiture blindé VIP";
	};

	class b737
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {};
		realname = "Boeing 737";
	};

	class DAR_MF1
	{
		buyPrice = 25000;
		inventory = 150;
		side = "CIV";
		insurance = 1;
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "truck";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "driver";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "truck";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "boat";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "boat";
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
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {
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
		donator = 0;
		license = "pilot";
		rank = 0;
		colors[] = {
			"dezkit_b206_ls",
			"dezkit_b206_hs"
			};
		realname = "B206";
	};
  	class dezkit_b206_ls : dezkit_b206 {};
  	class dezkit_b206_hs : dezkit_b206 {};

  /*
	**				WEST VEHICLES
	*/
	class DAR_TahoePolice
	{
		buyPrice = 75000;
		inventory = 90;
		side = "WEST";
		insurance = 1;
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
		rank = 3;
		colors[] = {
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
  
  /*
	**				GUER VEHICLES
	*/  
	class max_ambulance
	{
		buyPrice = 25000;
		inventory = 150;
		side = "GUER";
		insurance = 1;
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
		rank = 3;
		colors[] = {};
		realname = "Ford Explorer SAMU";
	};

	class EC635_DAES_Lifeliner
	{
		buyPrice = 250000;
		inventory = 70;
		side = "GUER";
		insurance = 1;
		donator = 0;
		license = "";
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
		donator = 0;
		license = "";
		rank = 3;
		colors[] = {
			"dezkit_b206_ems",
			"dezkit_b206_rescue"
		};
		realname = "EC635 SAMU";
	};
	class dezkit_b206_ems : dezkit_b206ems {};
	class dezkit_b206_rescue : dezkit_b206ems {};
};
	