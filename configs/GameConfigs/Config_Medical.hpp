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
		event_sounds[] = {"rhume_1","rhume_2"};
		event_contagion_chance = 35;
		reduce_fatigue = 0;
		pouls = 0;
		temperature = 0.3;
		sentences[] =
		{
			"Nez bouché",
			"Légère fièvre"
		};
	};

	class toux
	{
		name = "Toux";
		event_sounds[] = {"cough_0","cough_1","cough_2"};
		event_contagion_chance = 10;
		reduce_fatigue = 0.20;
		pouls = 40;
		temperature = 0.6;
		sentences[] =
		{
			"Difficultés pour respiré",
			"Gorge enflammé"
		};
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
	class medoc_toux_1
	{
		interval = 1800;
		class heal
		{
			class toux
			{
				min = 1;
				max = 3;
			};
		};
	};
	class medoc_toux_2
	{
		interval = 700;
		class heal
		{
			class toux
			{
				max = 8;
				min = 3;
			};
		};
	};
};
