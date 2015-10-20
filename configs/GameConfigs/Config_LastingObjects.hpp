/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

class ALYSIA_LASTING_OBJECTS_CONFIG
{
	max_per_civilian_gang = 3;
	distance_between_objects = 8;
	forbiden_distance = 5000;
};

class ALYSIA_LASTING_OBJECTS
{
	class Skyline_Land_LaboCoca
	{
		license = "license_rebel";
		sound = "breaking";
		explosion = "Bo_GBU12_LGB";
		item = "lab_small";
		process = "Land_CanisterPlastic_F";
		process_pos[] = {-4, -1, 0};
		distance = 4;
		forbiden_markers[] =
		{
			"cocaine_1",
			"heroin_1",
			"meth_1",
			"dealer_2_marker",
			"dealer_1_marker"
		};

		menu_1[] =
		{
			"Laboratoire",
			{
				"Traiter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget, ""cocaine""] spawn public_fnc_processAction;\\
				"
			},
			{
				"Couper",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget, ""cocainec""] spawn public_fnc_processAction;\\
				"
			},
			{
				"Saboter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsSabotage;\\
				"
			}
		};
		menu_2[] =
		{
			"Laboratoire",
			{
				"Enquêter",
				"\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsInspect;\\
				"
			},
			{
				"Détruire",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsDestroy;\\
				"
			}
		};

		class side
		{
			WEST = 0;
			EAST = 0;
			GUER = 0;
			CIV = 1;
		};
	};

	class Land_d_Stone_HouseSmall_V1_F
	{
		license = "license_rebel";
		sound = "breaking";
		item = "lab_medium";
		explosion = "Bo_GBU12_LGB";
		process = "Land_BarrelSand_F";
		process_pos[] = {6, 2, -0.25};
		distance = 7;
		forbiden_markers[] =
		{
			"cocaine_1",
			"heroin_1",
			"meth_1",
			"dealer_2_marker",
			"dealer_1_marker"
		};
		menu_1[] =
		{
			"Laboratoire",
			{
				"Traiter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget, ""heroin""] spawn public_fnc_processAction;\\
				"
			},
			{
				"Saboter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsSabotage;\\
				"
			}
		};
		menu_2[] =
		{
			"Laboratoire",
			{
				"Enquêter",
				"\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsInspect;\\
				"
			},
			{
				"Détruire",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsDestroy;\\
				"
			}
		};

		class side
		{
			WEST = 0;
			EAST = 0;
			GUER = 0;
			CIV = 1;
		};
	};

	class Land_Factory_Main_F
	{
		license = "license_rebel2";
		sound = "breaking";
		item = "lab_large";
		explosion = "Bo_GBU12_LGB";
		process = "Land_GarbageBarrel_01_F";
		process_pos[] = {-3, 6, -6};
		distance = 15;
		forbiden_markers[] =
		{
			"cocaine_1",
			"heroin_1",
			"meth_1",
			"dealer_2_marker",
			"dealer_1_marker"
		};

		menu_1[] =
		{
			"Laboratoire",
			{
				"Traiter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget, ""meth""] spawn public_fnc_processAction;\\
				"
			},
			{
				"Saboter",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsSabotage;\\
				"
			}
		};
		menu_2[] =
		{
			"Laboratoire",
			{
				"Enquêter",
				"\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsInspect;\\
				"
			},
			{
				"Détruire",
				"\\
					closeDialog 0;\\
					[g_pInact_curTarget] spawn public_fnc_lastingObjectsDestroy;\\
				"
			}
		};

		class side
		{
			WEST = 0;
			EAST = 0;
			GUER = 0;
			CIV = 1;
		};
	};
};