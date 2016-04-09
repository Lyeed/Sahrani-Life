class ALYSIA_MEDICAL
{
	class regen
	{
		regen_basic = 2;
		regen_healthy = 6;
		regen_morphine_multiplier = 3;
	};

	class morphine
	{
		seringue_amount = 7;
		tick_timer = 15;
		tick_amount = 1;
	};

	class adrenaline
	{
		seringue_amount = 5;
		tick_timer = 10;
		tick_amount = 1;
	};

	class coma
	{
		timer = 1800;
	};
};

class ALYSIA_DESEASES
{
	class rhume
	{
		name = "Rhume";
		sounds[] = {"rhume_1","rhume_2"};
		reduce_fatigue = 0;
	};

	class toux
	{
		name = "Toux";
		sounds[] = {"cough_0","cough_1","cough_2"};
		reduce_fatigue = 0.20;
	};
};

class ALYSIA_MEDECINE
{
	class medoc_rhume
	{
		interval = 600;
		class heal
		{
			class rhume
			{
				min = 5;
				max = 10;
			};
		};
	};
	class medoc_toux
	{
		interval = 1800;
		class heal
		{
			class toux
			{
				min = 3;
				max = 8;
			};
		};
	};
};
