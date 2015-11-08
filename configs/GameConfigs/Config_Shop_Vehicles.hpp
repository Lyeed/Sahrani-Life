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
			"A3L_Renault_Magnum",
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
			"max_CrownVic"
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
			"A3L_Smartcar",
			"A3L_GolfVI",
			"SAL_AudiCiv",
			"Peugeot_207",
			"A3L_Peugeot_308_RCZ",
			"A3L_Citreon_DS3",
			"A3L_Citreon_C4",
			"DAR_TahoeCiv",
			"max_suv",
			"DAR_FusionCiv",
			"max_jeep",
			"C_Offroad_01_F",
			"A3L_Jeep_Cherokee",
			"max_van",
			"C_Van_01_transport_F",
			"C_Van_01_box_F"
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
			"A3L_Ford_Raptor",
			"max_charger",
			"A3L_Mercedes_ML63",
			"A3L_Alfa_Romeo_White",
			"A3L_Audi_RS4",
			"A3L_Subaru_WRX",
			"A3L_BMW_M6",
			"Skyline_Mercedes_300_SEL",
			"Tal_Maserati",
			"Tal_Wrangler",
			"Skyline_G65_01_F",
			"DAR_ChallengerCiv",
			"DAR_MF1",
			"DAR_M3Civ"
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
			"max_towtruck"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_land_normal.jpg";
	};
};
