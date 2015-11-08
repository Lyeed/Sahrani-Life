/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_SHOPS_VEHICLES
{
	//
	class WEST_vehicles_land
	{
		name = "Concessionnaire terrestre militaire";
		side = "west";
		stock[] = {
			"DAR_TahoePolice",
			"DAR_ChargerPoliceState", 
			"DAR_ExplorerPolice",
			"DAR_TaurusPolice", 
			"DAR_CVPIAux", 
			"DAR_TahoePoliceDet",
			"DAR_ImpalaPolice"
		};
		background = "\lyeed_IMG\data\shop\back_WEST_vehicles_land.jpg";
	};
	class WEST_vehicles_air
	{
		name = "Concessionnaire aérien militaire";
		side = "west";
		stock[] = {
			"EC635_Unarmed",
			"dezkit_b206mi"
		};
		background = "\lyeed_IMG\data\shop\back_WEST_vehicles_air.jpg";
	};
	class WEST_vehicles_sea
	{
		name = "Concessionnaire maritime militaire";
		side = "west";
		stock[] = {
			"Fett_boat_milice"
		};
		background = "\lyeed_IMG\data\shop\back_WEST_vehicles_sea.jpg";
	};

	//
	class EAST_vehicles_land
	{
		name = "";
		side = "east";
		stock[] = {};
		background = "\lyeed_IMG\data\shop\back_EAST_vehicles_land.jpg";	
	};
	class EAST_vehicles_air
	{
		name = "";
		side = "east";
		stock[] = {};
		background = "\lyeed_IMG\data\shop\back_EAST_vehicles_air.jpg";
	};
	class EAST_vehicles_sea
	{
		name = "";
		side = "east";
		stock[] = {};
		background = "\lyeed_IMG\data\shop\back_EAST_vehicles_sea.jpg";
	};

	//
	class GUER_vehicles_land
	{
		name = "Concessionnaire auto SAMU";
		side = "independent";
		stock[] = {
			"max_ambulance",
			"DAR_TahoeEMS",
			"DAR_ExplorerMedic",
			"Fett_zamak_repair_samu",
			"Fett_zamak_covered_samu",
			"DAR_TaurusPoliceState"
		};
		background = "\lyeed_IMG\data\shop\back_GUER_vehicles_land.jpg";
	};
	class GUER_vehicles_air
	{
		name = "Concessionaire aérien SAMU";
		side = "independent";
		stock[] = {
			"EC635_SAR",
			"dezkit_b206ems"
		};
		background = "\lyeed_IMG\data\shop\back_GUER_vehicles_air.jpg";
	};
	class GUER_vehicles_sea
	{
		name = "Concessionnaire maritime SAMU";
		side = "independent";
		stock[] = {
			"Fett_boat_samu"
		};
		background = "\lyeed_IMG\data\shop\back_GUER_vehicles_sea.jpg";
	};

	//
	class CIV_vehicles_sea
	{
		name = "Concessionnaire maritime civil";
		side = "civilian";
		stock[] = {
			"B_Boat_Transport_01_F",
			"C_Boat_Civil_01_F"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_sea.jpg";
	};
	class CIV_vehicles_air
	{
		name = "Concessionnaire aérien civil";
		side = "civilian";
		stock[] = {
			"C_Heli_light",
			"dezkit_b206",
			"Fett_orca",
			"Fett_mohawk",
			"sab_a2"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_air.jpg";
	};
	
	class CIV_vehicles_land_truck
	{
		name = "Concessionnaire poids lourds civil";
		side = "civilian";
		stock[] = { 
			"O_Truck_02_transport_F",
			"B_Truck_01_transport_F", 
			"O_Truck_02_covered_F",
			"B_Truck_01_covered_F",  
			"B_Truck_01_box_F",
			"ALFR_GeK_Scania_420",
			"ALFR_GeK_Volvo_FH16_2012",
			"shounka_a3_renaultmagnum_f",
			"shounka_a3_dafxf_euro6_f",
			"Mrshounka_a3_iveco_f",
			"B_G_Van_01_fuel_F",  
			"O_Truck_02_fuel_F",
			"B_Truck_01_fuel_F"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_truck.jpg";
	};
	class CIV_vehicles_land_occasion
	{
		name = "Concessionnaire d'occassions civil";
		side = "civilian";
		stock[] = {
			"RDS_Gaz24_Civ",
			"RDS_Golf4_Civ_01",
			"RDS_S1203_Civ_01",
			"RDS_Octavia_Civ_01",
			"RDS_Lada_Civ",
			"max_CrownVic",
			"Mrshounka_mercedes_190_p_civ",
			"Mrshounka_r5_civ"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_occasion.jpg";
	};
	class CIV_vehicles_land_normal
	{
		name = "Concessionnaire automobiles civil";
		side = "civilian";
		stock[] = {
			"C_Quadbike_01_F",
			"DAR_TaurusCiv",
			"max_impala",
			"Mrshounka_golfvi_civ",
			"SAL_AudiCiv",
			"Mrshounka_c4_p_civ",
			"DAR_TahoeCiv",
			"max_suv",
			"DAR_FusionCiv",
			"max_jeep",
			"C_Offroad_01_F",
			"shounka_a3_cliors_civ",
			"max_van",
			"C_Van_01_transport_F",
			"C_Van_01_box_F",
			"shounka_buggy",
			"Mrshounka_a3_ds3_civ",
			"shounka_a3_ds4_civ",
			"shounka_nemo",
			"Mrshounka_Vandura_civ",
			"shounka_a3_spr_civ",
			"Mrshounka_207_civ",
			"Mrshounka_a3_308_civ",
			"Mrshounka_a3_308_rcz",
			"shounka_a3_508_civ",
			"Mrshounka_megane_rs_2015_civ",
			"Mrshounka_twingo_p",
			"Mrshounka_a3_smart_civ",
			"Mrshounka_subaru08_civ",
			"Mrshounka_Volkswagen_Touareg_civ"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_normal.jpg";
	};
	class CIV_vehicles_land_luxe
	{
		name = "Concessionnaire de voiture de luxes civil";
		side = "civilian";
		stock[] = {
			"madsa_hummer_h2",
			"SAL_77TRANSAMCiv",
			"max_H3",
			"Tal_Murci",
			"max_BMW",
			"max_charger",
			"Mrshounka_Alfa_Romeo_civ",
			"Mrshounka_rs4_civ",
			"Skyline_Mercedes_300_SEL",
			"Tal_Maserati",
			"Tal_Wrangler",
			"Skyline_G65_01_F",
			"DAR_ChallengerCiv",
			"DAR_MF1",
			"DAR_M3Civ",
			"Mrshounka_agera_p",
			"shounka_a3_rs5_civ",
			"shounka_rs6",
			"Mrshounka_bmwm1_civ",
			"Mrshounka_bmwm6_civ",
			"Mrshounka_Bowler_c",
			"shounka_avalanche",
			"shounka_monsteur",
			"Mrshounka_a3_dodge15_civ",
			"shounka_f430_spider",
			"shounka_gt",
			"Mrshounka_mustang_civ",
			"Mrshounka_raptor2_civ",
			"Mrshounka_hummer_civ",
			"Mrshounka_cherokee_noir",
			"mrshounka_huracan_c",
			"Mrshounka_veneno_c",
			"Mrshounka_evox_civ",
			"Mrshounka_lincoln_civ",
			"Mrshounka_lykan_c",
			"shounka_mp4",
			"Mrshounka_c63_2015_civ",
			"shounka_clk",
			"Mrshounka_a3_gtr_civ",
			"Mrshounka_pagani_c",
			"shounka_porsche911",
			"mrshounka_92_civ",
			"Mrshounka_cayenne_p",
			"shounka_transam"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_luxe.jpg";
	};
	
	class CIV_vehicles_rebel
	{
		name = "Concessionnaire rebelle";
		side = "civilian";
		stock[] = {};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_rebel.jpg";
	};

	// Métier civils
	class CIV_vehicules_job
	{
		name = "Concessionnaire automobiles métier civils";
		side = "civilian";
		stock[] = {
			"max_CrownVic_taxi",
			"RDS_Ikarus_Civ",
			"Skyline_Bus",
			"max_towtruck",
			"shounka_limo_civ",
			"shounka_a3_mantgs"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_normal.jpg";
	};
};
