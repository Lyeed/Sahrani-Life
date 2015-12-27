/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class NORTH
{
	side = [""];
	uniform = "";
	exit = "";
	escape_distance = 0;

	class time
	{
		max = 0;
		min = 0;
	};

	class bail
	{
		max = 0;
		min = 0;
		enable = 0;
	};

	class works
	{
		class item_1
		{
			time = 0;
			money = 0;
		};
	};

	class cell_1
	{
		name = "Cellule N°1";
		door = "";
		pos = [];
		dir = 0;
	};
};

class SOUTH
{
	side = [""];
	uniform = "";
	exit = "";
	escape_distance = 0;

	class time
	{
		max = 0;
		min = 0;
	};

	class bail
	{
		max = 0;
		min = 0;
		enable = 0;
	};

	class works
	{
		class item_1
		{
			time = 0;
			money = 0;
		};
	};

	class cell_1
	{
		name = "Cellule N°1";
		door = "";
		pos = [];
		dir = 0;
	};	
};