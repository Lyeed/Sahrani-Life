// player setPos (cursorTarget modelToWorld [0,5,0]);
// player setPos (cursorTarget modelToWorld [0,0,0]);

class ALYSIA_PRISONS
{
	class prison_n
	{
		name = "Prison Fédérale du Nord";
		side[] = {"WEST"};
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
				name = "Trafique de Tabacs";
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
		side[] = {"EAST"};
		uniform = "";
		exit[] = {};
		escape_distance = 100;

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
				name = "Cellule N°1";
				picture = "";
				door = "";
				pos[] = {};
				dir = 0;
			};
		};
	};
};