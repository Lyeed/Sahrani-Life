class ALYSIA_STORAGES
{
	class Skyline_Coffre_Small 
	{
		inventory = 350;
		item = "storage_small";
	};
	class Skyline_Coffre_Medium 
	{
		inventory = 800;
		item = "storage_medium";
	};
	class Skyline_Coffre_Large 
	{
		inventory = 1500;
		item = "storage_large";
	};
	class R3F_WeaponStock
	{
		inventory = 1000;
		item = "storage_stock";
	};
};

class ALYSIA_HOUSES
{
	/* ---------------------------------
	**                        STORAGE
	**  - building_index   : Suitable storage emplacement
	**           -> Debug console : "Skyline_Coffre_Large" createVehicle (cursorTarget buildingPos INDEX_A_TESTER)
	**           Remplacer INDEX_A_TESTER par un nombre de 0 à n
	**
	** A DEBATTRE QU EST CE QU ON EN FAIT: "Land_smd_Panelak" "Land_smd_Panelak2"
	 --------------------------------- */

	/* CIV GUER */
	class Land_Cihlovej_Dum_mini
	{
		price = 135000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 3;
		};
		class lights {};
		class factions
		{
			class GUER {};
			class CIV
			{
				license = "home";
			};
		};
	};
	class Land_Hospoda_mesto: Land_Cihlovej_Dum_mini
	{
		price = 615000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 2;
		};
	};
	class Land_smd_dum_olezlina_open: Land_Cihlovej_Dum_mini
	{
		price = 585000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 4;
		};
	};
	class Land_smd_house_y_open: Land_Cihlovej_Dum_mini
	{
		price = 325000;
		class storage
		{
			type = "Skyline_Coffre_Medium";
			building_index = 5;
		};
	};
	class Land_Sara_Domek_sedy: Land_Cihlovej_Dum_mini
	{
		price = 295000;
		class storage
		{
			type = "Skyline_Coffre_Medium";
			building_index = 3;
		};
	};
	class Land_smd_budova3_open: Land_Cihlovej_Dum_mini
	{
		price = 190000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 1;
		};
	};
	class Land_Sara_domek_zluty: Land_Cihlovej_Dum_mini
	{
		price = 575000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 1;
		};
	};
	class Land_smd_Panelak2: Land_Cihlovej_Dum_mini
	{
		price = 625000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 4;
		};
	};
	class Land_smd_Panelak: Land_Cihlovej_Dum_mini
	{
		price = 287500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 4;
		};
	};
	class Land_Deutshe_mini: Land_Cihlovej_Dum_mini
	{
		price = 295000;
		class storage
		{
			type = "Skyline_Coffre_Medium";
			building_index = 2;
		};
	};
	class Land_smd_dum_olez_istan2_open: Land_Cihlovej_Dum_mini
	{
		price = 245000;
		class storage
		{
			type = "Skyline_Coffre_Medium";
			building_index = 1;
		};
	};
	class Land_smd_dum_olez_istan2_maly_open: Land_Cihlovej_Dum_mini
	{
		price = 415000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 3;
		};
	};
	class Land_smd_dum_olez_istan1_open: Land_Cihlovej_Dum_mini
	{
		price = 515000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 3;
		};
	};
	class Land_smd_dum_olez_istan1_open2: Land_Cihlovej_Dum_mini
	{
		price = 515000;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 3;
		};
	};
	class Land_Bouda2_vnitrek: Land_Cihlovej_Dum_mini
	{
		price = 125000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 4;
		};
	};
	class Land_Dum_rasovna: Land_Cihlovej_Dum_mini
	{
		price = 325000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 2;
		};
	};
	class Land_smd_sara_zluty_statek_in: Land_Cihlovej_Dum_mini
	{
		price = 325000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 4;
		};
	};
	class Land_smd_dum_mesto_in_open: Land_Cihlovej_Dum_mini
	{
		price = 325000;
		class storage
		{
			type = "Skyline_Coffre_Small";
			building_index = 3;
		};
	};
	
	/* WEST HOUSES */
	class CampEast_EP1
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 2;
		};
		class lights {};
		class factions
		{
			class WEST
			{
				rank = 2;
			};
		};
	};
	class Barrack2
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 4;
		};
		class lights {};
		class factions
		{
			class WEST
			{
				rank = 4;
			};
		};
	};
	class Land_smd_budova4_in
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 0;
		};
		class lights {};
		class factions
		{
			class WEST
			{
				rank = 6;
			};
		};
	};
	class Fett_Land_Cihlovej_Dum_in_west
	{
		price = 500;
		class storage
		{
			type = "R3F_WeaponStock";
			building_index = 1;
		};
		class lights {};
		class factions
		{
			class WEST
			{
				rank = 9;
			};
		};
	};
	
	/* EAST HOUSES */
	class Land_tent_east
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 6;
		};
		class lights {};
		class factions
		{
			class EAST
			{
				rank = 1;
			};
		};
	};
	class Land_Barrack2_EP1
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 5;
		};
		class lights {};
		class factions
		{
			class EAST
			{
				rank = 1;
			};
		};
	};
	class Land_Army_hut2_int
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 1;
		};
		class lights {};
		class factions
		{
			class EAST
			{
				rank = 3;
			};
		};
	};
	class Land_Army_hut3_long_int
	{
		price = 500;
		class storage
		{
			type = "Skyline_Coffre_Large";
			building_index = 1;
		};
		class lights {};
		class factions
		{
			class EAST
			{
				rank = 4;
			};
		};
	};
	class Fett_Land_Dum_mesto_in_east
	{
		price = 500;
		class storage
		{
			type = "R3F_WeaponStock";
			building_index = 5;
		};
		class lights {};
		class factions
		{
			class EAST
			{
				rank = 5;
			};
		};
	};
};
