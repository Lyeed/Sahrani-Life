class ALYSIA_FUEL_STATION
{
	class GasStation_F
	{
		save = 1;
		max_distance_allowed = 14;
		pos_model_pomp[] = {8.18457,-1.305664,2.21936};
		pos_model_store[] = {5.64648,7.0752,2.06092};
		class marker
		{
			ShapeLocal = "ICON";
			TypeLocal = "Maels_station_essence";
			ColorLocal = "ColorGreen";
			SizeLocal[] = {0.55, 0.55};
		};
		class stock
		{
			class Diesel {
				max = 3000;
			};
			class SP95 {
				max = 3000;
			};
			class SP98 {
				max = 3000;
			};
			class GPL {
				max = 3000;
			};
		};
	};

	class Land_A_FuelStation_Feed
	{
		save = 1;
		max_distance_allowed = 75;
		pos_model_pomp[] = {0.293945,-0.860352,-0.692078};
		pos_model_store[] = {};
		class marker
		{
			ShapeLocal = "ICON";
			TypeLocal = "Maels_station_essence";
			ColorLocal = "ColorGreen";
			SizeLocal[] = {0.55, 0.55};
		};
		class stock
		{
			class Kerosene {
				max = 10000;
			};
		};
	};
};

class ALYSIA_FUEL
{
	class Diesel
	{
		name = "Diesel";
		picture = "Devilz80_Images\Data\Menu\fuelStations\Diesel.paa";
		conso = 0.8;
		jerrycan = "Alysia_jerrycan_diesel";
		item_refuel = "gazole";
	};	
	class SP95
	{
		name = "Essence Sans Plomb 95";
		picture = "Devilz80_Images\Data\Menu\fuelStations\SP95.paa";
		conso = 1.2;
		jerrycan = "Alysia_jerrycan_sp95";
		item_refuel = "sp95";
	};
	class SP98
	{
		name = "Essence Sans Plomb 98";
		picture = "Devilz80_Images\Data\Menu\fuelStations\SP98.paa";
		conso = 1;
		jerrycan = "Alysia_jerrycan_sp98";
		item_refuel = "sp98";
	};
	class Kerosene
	{
		name = "Kerosene";
		picture = "Devilz80_Images\Data\Menu\fuelStations\Kerosene.paa";
		conso = 0.5;
		jerrycan = "Alysia_jerrycan_kerosene";
		item_refuel = "kerosene";
	};
	class GPL
	{
		name = "Gaz de pétrole liquéfié";
		picture = "Devilz80_Images\Data\Menu\fuelStations\GPL.paa";
		conso = 1;
		jerrycan = "Alysia_jerrycan_gpl";
		item_refuel = "gpl";
	};
};
