/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_STORAGE
{
	class Skyline_Coffre_Small 
	{
		inventory = 800;
	};
	
	class Skyline_Coffre_Medium 
	{
		inventory = 1700;
	};
	
	class Skyline_Coffre_Large 
	{
		inventory = 3200;
	};
};

class ALYSIA_HOUSE 
{
	/* ========== HOUSES ========== */

	/* CIV HOUSES */
	class Land_House_K_1_EP1
	{
		price = 1500000;
		storage = "Skyline_Coffre_Small";
		side = "CIV";
	};

	class Land_House_L_4_EP1
	{
		price = 2750000;
		storage = "Skyline_Coffre_Small";
		side = "CIV";
	};

	class Land_House_L_3_EP1
	{
		price = 3000000;
		storage = "Skyline_Coffre_Small";
		side = "CIV";
	};

	class Land_House_K_5_EP1
	{
		price = 2800000;
		storage = "Skyline_Coffre_Small";
		side = "CIV";
	};

	class Land_House_C_5_EP1
	{
		price = 4000000;
		storage = "Skyline_Coffre_Small";
		side = "CIV";
	};

	class Land_House_C_5_V1_EP1
	{
		price = 5000000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_House_C_5_V2_EP1
	{
		price = 4000000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_House_C_5_V3_EP1
	{
		price = 4000000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_House_L_7_EP1
	{
		price = 3250000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_House_C_11_EP1
	{
		price = 5250000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_Dum_olez_istan1
	{
		price = 6800000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_Dum_olez_istan2
	{
		price = 4100000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_Dum_olez_istan2_maly
	{
		price = 4800000;
		storage = "Skyline_Coffre_Medium";
		side = "CIV";
	};

	class Land_A_Villa_EP1
	{
		price = 15000000;
		storage = "Skyline_Coffre_Large";
		side = "CIV";
	};


	/* WEST HOUSES */
	class Land_Barrack2
	{
		price = 1500000;
		storage = "Skyline_Coffre_Small";
		side = "WEST";
	};

	class Land_Cargo_House_V1_F
	{
		price = 1900000;
		storage = "Skyline_Coffre_Medium";
		side = "WEST";
	};

	class Land_Mil_Barracks_i
	{
		price = 3200000;
		storage = "Skyline_Coffre_Large";
		side = "WEST";
	};

	/* EAST HOUSES */

	/* GUER HOUSES */
};

/*
["Land_i_House_Big_01_V2_dam_F","Land_i_House_Big_01_V3_F","Land_i_House_Big_01_V1_F","Land_i_House_Small_01_V3_F","Land_Chapel_V2_F","Land_u_House_Big_01_V1_F","Land_u_Addon_02_V1_F","Land_u_House_Big_02_V1_F","Land_i_House_Big_01_V1_dam_F","Land_u_House_Small_01_V1_F","Land_i_House_Big_01_V2_F","Land_GH_House_2_F","Land_i_House_Small_02_V1_F","Land_GH_House_1_F","Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F","Land_i_House_Small_01_V1_F","Land_u_House_Small_01_V1_dam_F","Land_Kiosk_redburger_F","Land_i_House_Small_01_V2_F","Land_i_House_Big_02_V3_F","Land_Kiosk_gyros_F","Land_Kiosk_papers_F","Land_i_House_Small_03_V1_F","Land_i_House_Small_02_V3_F","Land_i_House_Small_02_V2_F","Land_i_House_Big_02_V2_dam_F","Land_i_Stone_HouseBig_V3_F","Land_i_Stone_HouseBig_V2_dam_F","Land_i_Stone_HouseBig_V2_F"]

Class* :
 
5 : "Land_Chapel_V2_F","Land_A_Villa_EP1"
 
4 : "Land_i_House_Big_01_V3_F","Land_i_House_Big_01_V1_F","Land_i_House_Big_01_V2_F","Land_i_House_Big_02_V3_F","Land_i_House_Big_02_V1_F","Land_i_House_Big_02_V2_F"
 
3 : "Land_i_House_Big_01_V2_dam_F","Land_u_House_Big_01_V1_F","Land_u_House_Big_02_V1_F","Land_i_House_Big_01_V1_dam_F","Land_GH_House_1_F","Land_i_House_Small_02_V3_F","Land_i_House_Small_02_V2_F","Land_i_House_Big_02_V2_dam_F","Land_i_Stone_HouseBig_V3_F"
 
2 : "Land_i_House_Small_01_V3_F","Land_u_House_Small_01_V1_F"Land_i_House_Small_02_V1_F","Land_GH_House_2_F","Land_i_House_Small_01_V1_F","Land_u_House_Small_01_V1_dam_F","Land_i_House_Small_01_V2_F","Land_i_House_Small_03_V1_F","Land_i_Stone_HouseBig_V2_dam_F","Land_i_Stone_HouseBig_V2_F"
 
1 : "Land_u_Addon_02_V1_F","Land_Kiosk_redburger_F","Land_Kiosk_gyros_F","Land_Kiosk_papers_F"
 
 
 
"la_classeName" createVehicle (getPos player)
 
 
 
* 5 : 10 000 000
 
  4 : 2 500 000  
 
  3 : 1 750 000
 
  2 : 1 000 000
 
  1 : 500 000
*/



