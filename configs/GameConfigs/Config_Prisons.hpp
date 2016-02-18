// player setPos (cursorTarget modelToWorld [0,5,0]);
// player setPos (cursorTarget modelToWorld [0,0,0]);

class ALYSIA_PRISONS
{
	class prison_n
	{
		name = "Prison Fédérale du Nord";
		sides[] = {"WEST"};
		uniform = "";
		exit[] = {0,0,0};
		escape_distance = 50;

		class time
		{
			min = 600;
			max = 7200;
		};

		class bail
		{
			min = 0;
			max = 0;
			enable = 0;
		};

		class works
		{
			class item_1
			{
				name = "Traitement de la Pierre";
				time = 0;
				money = 0;
			};
			class item_2
			{
				name = "Trafic de Tabac";
				time = 0;
				money = 0;
			};
		};

		class cells
		{
			class cell_1
			{
				name = "Cellule N°1";
				picture = "";
				door = "";
				pos[] = {8.86914,-2.53711,-0.00194083};
				dir = 333;
			};

			class cell_2
			{
				name = "Cellule N°2";
				picture = "";
				door = "";
				pos[] = {4.35156,-2.44336,-0.00169046};
				dir = 327;
			};

			class cell_3
			{
				name = "Cellule N°3";
				picture = "";
				door = "";
				pos[] = {3.15234,14.5273,-0.000298843};
				dir = 153;
			};

			class cell_4
			{
				name = "Cellule N°4";
				picture = "";
				door = "";
				pos[] = {7.53906,14.2539,-0.000954971};
				dir = 147;
			};

			class cell_5
			{
				name = "Cellule N°5";
				picture = "";
				door = "";
				pos[] = {11.9854,14.5156,-0.00121525};
				dir = 149;
			};
		};
	};

	class prison_s
	{
		name = "Prison Fédérale du Sud";
		sides[] = {"EAST"};
		uniform = "";
		exit[] = {};
		escape_distance = 100;

		class time
		{
			min = 600;
			max = 72000;
		};

		class bail
		{
			min = 20000;
			max = 1000000;
			enable = 1;
		};

		class works
		{
			// Disable //
			/*
			class item_1
			{
				name = "Fabrication de Savons";
				time = 0;
				money = 0;
			};
			class item_2
			{
				name = "Fabrication d'abats jours'";
				time = 0;
				money = 0;
			};
			class item_1
			{
				name = "Fabrication de Boutons";
				time = 0;
				money = 0;
			};
			*/
		};
		class cells
		{
			class cell_1
			{
				name = "A - 01";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_2
			{
				name = "A - 02";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_3
			{
				name = "A - 03";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_4
			{
				name = "A - 04";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_5
			{
				name = "A - 05";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_6
			{
				name = "A - 06";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_7
			{
				name = "A - 07";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_8
			{
				name = "A - 08";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_9
			{
				name = "A - 09";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_10
			{
				name = "B - 01";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_11
			{
				name = "B - 02";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_12
			{
				name = "B - 03";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_13
			{
				name = "B - 04";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_14
			{
				name = "B - 05";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_15
			{
				name = "B - 06";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_16
			{
				name = "B - 07";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_17
			{
				name = "B - 08";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_18
			{
				name = "B - 09";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_19
			{
				name = "C - 01";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_20
			{
				name = "C - 02";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_21
			{
				name = "C - 03";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_22
			{
				name = "C - 04";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_23
			{
				name = "C - 05";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_24
			{
				name = "C - 06";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_25
			{
				name = "C - 07";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_26
			{
				name = "C - 08";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_27
			{
				name = "C - 09";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_28
			{
				name = "D - 01";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_29
			{
				name = "D - 02";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_30
			{
				name = "D - 03";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_31
			{
				name = "D - 04";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_32
			{
				name = "D - 05";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_33
			{
				name = "D - 06";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_34
			{
				name = "D - 07";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_35
			{
				name = "D - 08";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
			class cell_36
			{
				name = "D - 09";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
		};
	};
};