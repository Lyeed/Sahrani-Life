/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

// player setPos (cursorTarget modelToWorld [0,5,0]);
// player setPos (cursorTarget modelToWorld [0,0,0]);

class ALYSIA_PRISONS
{
	class prison_n
	{
		name = "Prison Fédérale du Nord";
		side[] = {"WEST"};
		uniform = "";
		exit = "";
		escape_distance = 50;

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
				name = "Traitement de la pierre";
				time = 0;
				money = 0;
			};
		};

		class cell_1
		{
			name = "Cellule N°1";
			door = "";
			pos[] = {8.86914,-2.53711,-0.00194083};
			dir = 333;
		};

		class cell_2
		{
			name = "Cellule N°2";
			door = "";
			pos[] = {4.35156,-2.44336,-0.00169046};
			dir = 327;
		};

		class cell_3
		{
			name = "Cellule N°3";
			door = "";
			pos[] = {3.15234,14.5273,-0.000298843};
			dir = 153;
		};

		class cell_4
		{
			name = "Cellule N°4";
			door = "";
			pos[] = {7.53906,14.2539,-0.000954971};
			dir = 147;
		};

		class cell_5
		{
			name = "Cellule N°5";
			door = "";
			pos[] = {11.9854,14.5156,-0.00121525};
			dir = 149;
		};
	};

	class prison_s
	{
		name = "Prison Fédérale du Sud";
		side[] = {"EAST"};
		uniform = "";
		exit = "";
		escape_distance = 100;

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
				name = "Traitement de la pierre";
				time = 0;
				money = 0;
			};
		};

		class cell_1
		{
			name = "Cellule N°1";
			door = "";
			pos[] = {};
			dir = 0;
		};	
	};
};