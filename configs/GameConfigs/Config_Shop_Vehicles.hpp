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
			"DAR_TahoePoliceDet"
		};
		background = "\lyeed_IMG\data\shop\back_WEST_vehicles_land.jpg";
	};
	class WEST_vehicles_air
	{
		name = "Concessionnaire aérien militaire";
		side = "west";
		stock[] = {
			"EC635_Unarmed"
		};
		background = "\lyeed_IMG\data\shop\back_WEST_vehicles_air.jpg";
	};
	class WEST_vehicles_sea
	{
		name = "Concessionnaire maritime militaire";
		side = "west";
		stock[] = {
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
			"DAR_ExplorerMedic"
		};
		background = "\lyeed_IMG\data\shop\back_GUER_vehicles_land.jpg";
	};
	class GUER_vehicles_air
	{
		name = "Concessionaire aérien SAMU";
		side = "independent";
		stock[] = {
			"EC635_DAES_Lifeliner"
		};
		background = "\lyeed_IMG\data\shop\back_GUER_vehicles_air.jpg";
	};
	class GUER_vehicles_sea
	{
		name = "Concessionnaire maritime SAMU";
		side = "independent";
		stock[] = {};
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
			"sab_a2"
		};
		background = "\lyeed_IMG\data\shop\back_CIV_vehicles_air.jpg";
	};
	
	class CIV_vehicles_land_truck
	{
		name = "Concessionnaire poids lourds civil";
		side = "civilian";
		stock[] = {
			"DAR_4X4",
			"DAR_MK23", 
			"O_Truck_02_transport_F",
			"B_Truck_01_transport_F", 
			"O_Truck_02_covered_F",
			"B_Truck_01_covered_F",  
			"DAR_MK27T", 
			"DAR_MK27", 
			"DAR_LHS_16", 
			"B_Truck_01_box_F",
			"ALFR_GeK_Scania_420",
			"ALFR_GeK_Volvo_FH16_2012",
			"B_G_Van_01_fuel_F",  
			"O_Truck_02_fuel_F",
			"B_Truck_01_fuel_F",
			"RDS_Ikarus_Civ",
			"Skyline_Bus"

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
			"SAL_AudiCiv",
			"DAR_TahoeCiv",
			"max_suv",
			"DAR_FusionCiv",
			"max_jeep",
			"C_Offroad_01_F",
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
			"max_charger",
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
};
