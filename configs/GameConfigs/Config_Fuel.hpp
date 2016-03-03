class ALYSIA_FUEL_STATION
{
	class Land_FuelStation_Feed_F
	{
		max_distance_allowed = 10;
		class stock
		{
			class Diesel
			{
				max = 800;
			};
			class SP95
			{
				max = 800;
			};
			class SP98
			{
				max = 800;
			};
			class GPL
			{
				max = 800;
			};
		};
	};

	class Land_A_FuelStation_Feed
	{
		max_distance_allowed = 75;
		class stock
		{
			class Kerosene
			{
				max = 2000;
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
	};	
	class SP95
	{
		name = "Essence Sans Plomb 95";
		picture = "Devilz80_Images\Data\Menu\fuelStations\SP95.paa";
		conso = 1.2;
		jerrycan = "Alysia_jerrycan_sp95";
	};
	class SP98
	{
		name = "Essence Sans Plomb 98";
		picture = "Devilz80_Images\Data\Menu\fuelStations\SP98.paa";
		conso = 1;
		jerrycan = "Alysia_jerrycan_sp98";
	};
	class Kerosene
	{
		name = "Kerosene";
		picture = "Devilz80_Images\Data\Menu\fuelStations\Kerosene.paa";
		conso = 0.5;
		jerrycan = "Alysia_jerrycan_kerosene";
	};
	class GPL
	{
		name = "Gaz de pétrole liquéfié";
		picture = "Devilz80_Images\Data\Menu\fuelStations\GPL.paa";
		conso = 1;
		jerrycan = "Alysia_jerrycan_gpl";
	};
};
