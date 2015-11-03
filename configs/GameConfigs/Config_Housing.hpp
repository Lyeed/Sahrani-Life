/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_STORAGES
{
	class Skyline_Coffre_Small 
	{
		inventory = 500;//virtual space
	};
	class Skyline_Coffre_Medium 
	{
		inventory = 1000;
	};	
	class Skyline_Coffre_Large 
	{
		inventory = 2000;
	};
};

class ALYSIA_HOUSES
{
	/* ---------------------------------
	**                         BUY
	**  - price                        : buy price
	price                              = 150000;
	**  - side                         : must be this side to buy
	          -> Possible: "CIV" - "WEST" - "EAST" - "GUER"
	sides[]                            = {"CIV"};
	**  - rank                         : Ranked needed to buy (side must be != CIV)
	rank                               = 0;
	**  - license                      : License needed to buy (only for side == CIV)
	license                            = "home";
	   --------------------------------- 

	   ---------------------------------
	**                        STORAGE
	**  - storage                      : Storage ClassName from ALYSIA_STORAGES; "" to disable
	storage                            = "Skyline_Coffre_Small";
	**  - storage_building_pos_index   : Suitable storage emplacement
	**           -> Debug console : "Skyline_Coffre_Large" createVehicle (cursorTarget buildingPos INDEX_A_TESTER)
	**           Remplacer INDEX_A_TESTER par un nombre de 0 à n
	storage_building_pos_index         = 0;
	   --------------------------------- 

	   ---------------------------------
	**                       GARAGE
	**  - garage                       : Have garage
	**          -> Possible (1:YES - 0:no)
	garage                             = 0;
	**  - garage_type                  : Which vehicles types can handle garage (garage must be 1)
	**          -> Possible AND/OR ("Car" - "Tank" - "Truck" - "Air" - "Boat")
	garage_type[]                      = {};
	  --------------------------------- */

	class Land_Dum_olez_istan2
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};

	class Land_Dum_olez_istan2_maly
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 2;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};

	class Land_Dum_olez_istan1
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 3;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Cihlovej_Dum_mini
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 3;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Dum_olezlina
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 4;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Hospoda_mesto
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 2;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Dum_mesto2
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 4;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Army_hut3_long_int
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"WEST", "EAST"};
		rank = 0;
		license = "home";
	};	

	class Land_Army_hut2_int
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"WEST", "EAST"};
		rank = 0;
		license = "home";
	};	

	class Land_House_y
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 5;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Sara_Domek_sedy
	{
		price = 15000;
		storage = "";
		storage_building_pos_index = 3;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Budova3
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Budova2
	{
		price = 15000;
		storage = "";
		storage_building_pos_index = 3;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Sara_zluty_statek_in
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 3;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Sara_domek_zluty
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Budova4_in
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 1;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Panelak2
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 4;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	

	class Land_Panelak
	{
		price = 15000;
		storage = "Skyline_Coffre_Small";
		storage_building_pos_index = 4;
		garage = 0;
		garage_type[] = {};
		side[] = {"CIV", "GUER"};
		rank = 0;
		license = "home";
	};	
};