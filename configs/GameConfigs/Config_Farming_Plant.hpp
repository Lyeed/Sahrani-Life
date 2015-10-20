/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_FARMING_PLANT_OBJETCS
{
	class Skyline_Corn
	{
		receive = "corn";
		seed = "corn_seed";
		amount = 3;
		distance = 2.3;
	};
	
	class Skyline_Beans
	{
		receive = "bean";
		seed = "bean_seed";
		amount = 3;
		distance = 2.3;
	};

	class Skyline_Cotton
	{
		receive = "cotton";
		seed = "cotton_seed";
		amount = 3;
		distance = 3;
	};

	class Oleander2
	{
		receive = "heroin";
		seed = "heroin_seed";
		amount = 1;
		distance = 3;
	};
	
	class Skyline_Cannabis
	{
		receive = "cannabis";
		seed = "cannabis_seed";
		amount = 2;
		distance = 3;
	};

	class Reeds
	{
		receive = "meth";
		seed = "meth_seed";
		amount = 1;
		distance = 3;
	};
	
	class Ficus_1
	{
		receive = "cocaine_seed";
		seed = "meth_seed";
		amount = 1;
		distance = 7;
	};

	class Skyline_Tabac
	{
		receive = "tabac";
		seed = "tabac_seed";
		amount = 2;
		distance = 4;
	};
};

class ALYSIA_FARMING_PLANT_MARKERS
{
	class corn_1
	{
		plant = "Skyline_Corn";
	};

	class bean_1
	{
		plant = "Skyline_Beans";
	};
	class bean_2 : bean_1 {};

	class cotton_1
	{
		plant = "Skyline_Cotton";
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
	class tabac_2 : tabac_1 {};
	class tabac_3 : tabac_1 {};
};