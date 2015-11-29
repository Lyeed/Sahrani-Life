class ALYSIA_FARMING_PLANT_OBJETCS
{
	/*
	class TUTO
	{
		seed                 : seed item className
		receive              : receive when harvest {{"item_1", amount_item_1, is_random(0:no/1:yes)}}
		Ex:
		receive[] = {{"wood", 5, 0}, {"cocainep", 2, 1}};
		Player will receive 5 x wood and have a chance to receive some cocainep (2 max)

		receive[] = {{"wood", 3, 0}};
		Player will receive 3 x wood

		distance             : minimum distance between plants (in meters)
		upLevel              : number the plant will grow (in meters)
		groundLevel          : number the plant will go down on creation (in meters)
		growingTime          : time to grow (in seconds)
		extraGrow            : maximum grow extra time (random, in seconds)
	};
	*/
	class Skyline_Corn
	{
		seed = "corn_seed";
		receive[] = {{"corn", 3, 1}};
		distance = 2.3;
		growingTime = 350;
		groundLevel = 0;
		upLevel = 1.47;
		extraGrow = 100;
	};
	
	class Skyline_Beans
	{
		seed = "bean_seed";
		receive[] = {{"bean", 3, 1}};
		distance = 2.3;
		growingTime = 350;
		groundLevel = 0;
		upLevel = 1.23;
		extraGrow = 100;
	};

	class Skyline_Cotton
	{
		receive[] = {{"cotton", 3, 1}};
		seed = "cotton_seed";
		distance = 3;
		growingTime = 350;
		groundLevel = 0;
		upLevel = 0.7;
		extraGrow = 100;
	};

	class Skyline_Wheat
	{
		receive[] = {{"wheat", 3, 1}};
		seed = "wheatseed";
		distance = 3;
		growingTime = 350;
		groundLevel = 0;
		upLevel = 1.1;
		extraGrow = 100;
	};

	class Oleander2
	{
		receive[] = {{"heroin", 1, 1}};
		seed = "heroin_seed";
		distance = 3;
		growingTime = 800;
		groundLevel = 1.5;
		upLevel = 1.5;
		extraGrow = 200;
	};

	class Skyline_Cannabis
	{
		receive[] = {{"cannabis", 2, 1}};
		seed = "cannabis_seed";
		distance = 3;
		growingTime = 800;
		groundLevel = 0;
		upLevel = 1.4;
		extraGrow = 200;
	};

	class Reeds
	{
		receive[] = {{"meth", 1, 1}};
		seed = "meth_seed";
		distance = 3;
		growingTime = 900;
		groundLevel = 0;
		upLevel = 0;
		extraGrow = 60;
	};

	class Ficus_1
	{
		receive[] = {{"cocaine_seed", 1, 1}};
		seed = "cocaine_seed";
		distance = 7;
		growingTime = 800;
		groundLevel = 6.1;
		upLevel = 3;
		extraGrow = 200;
	};

	class Skyline_Tabac
	{
		receive[] = {{"tabac", 2, 1}};
		seed = "tabac_seed";
		distance = 4;
		growingTime = 480;
		groundLevel = 0;
		upLevel = 1;
		extraGrow = 100;
	};
};

class ALYSIA_FARMING_PLANT_MARKERS
{
	class potato_1
	{
		plant = "";
	};

	class corn_1
	{
		plant = "Skyline_Corn";
	};

	class bean_1
	{
		plant = "Skyline_Beans";
	};

	class cotton_1
	{
		plant = "Skyline_Cotton";
	};

	class wheat_1
	{
		plant = "Skyline_Wheat";
	};

	class heroin_1
	{
		plant = "Oleander2";
	};

	class cannabis_1
	{
		plant = "Skyline_Cannabis";
	};

	class meth_1
	{
		plant = "Reeds";
	};

	class cocaine_1
	{
		plant = "Ficus_1";
	};

	class tabac_1
	{
		plant = "Skyline_Tabac";
	};
};
