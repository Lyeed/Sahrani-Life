class ALYSIA_STAFF
{
	class ranks
	{
		class admin
		{
			name = "Administrateur";
		};
		class modo
		{
			name = "Modérateur";
		};
		class support
		{
			name = "Support";
		};
		class dev
		{
			name = "Equipe de dev";
		};
	};

	class members
	{
		class lyeed
		{
			uid = "76561198007960495";
			rank = "admin";
			requests = 1;
			teamspeak = 1;
		};
	};

	class commands
	{
		class buttons
		{
			class god_ON
			{
				name = "God ON";
				statement = "g_staff_god = true;";
				condition = "!g_staff_god";
				allow[] = {"76561198007960495"};
			};
			class god_OFF
			{
				name = "God OFF";
				statement = "g_staff_god = false;";
				condition = "g_staff_god";
				allow[] = {"76561198007960495"};
			};

			class heal
			{
				name = "Soins";
				statement = "g_bleed = 0; [4000] call AlysiaClient_fnc_handleBlood;";
				condition = "(true)";
				allow[] = {"76561198007960495"};
			};

			class target_getKey
			{
				name = "Clef Cible";
				statement = "g_vehicles pushBack cursorTarget;";
				condition = "(!(isNull cursorTarget) && ((cursorTarget isKindOf 'Car') || (cursorTarget isKindOf 'Ship') || (cursorTarget isKindOf 'Air') || (cursorTarget isKindOf 'Tank') || (cursorTarget isKindOf 'Truck')))";
				allow[] = {"76561198007960495"};
			};
			class target_delete
			{
				name = "Supp Cible";
				statement = "deleteVehicle cursorTarget;";
				condition = "!(isNull cursorTarget)";
				allow[] = {"76561198007960495"};
			};

			class markers_ON
			{
				name = "Markers ON";
				statement = "g_staff_markers = true;";
				condition = "!g_staff_markers";
				allow[] = {"76561198007960495"};
			};
			class markers_OFF
			{
				name = "Markers OFF";
				statement = "g_staff_markers = false;";
				condition = "g_staff_markers";
				allow[] = {"76561198007960495"};
			};
		};

		class target
		{
			class goto
			{
				name = "TP à";
				statement = "(vehicle player) setPosATL (getPosATL (call compile (lbData[9000, lbCurSel 9000])));";
				condition = "(true)";
				allow[] = {"76561198007960495"};
			};
			class tphere
			{
				name = "TP ici";
				statement = "(call compile (lbData[9000, lbCurSel 9000])) setPosATL (getPosATL player);";
				condition = "(true)";
				allow[] = {"76561198007960495"};
			};

			class spec
			{
				name = "Spec";
				statement = "(call compile (lbData[9000, lbCurSel 9000])) switchCamera 'INTERNAL'; g_staff_spec = true; closeDialog 0;";
				condition = "(true)";
				allow[] = {"76561198007960495"};
			};
			
			class res
			{
				name = "Rez";
				statement = "((call compile (lbData[9000, lbCurSel 9000])) setVariable ['is_bleeding',false,true]); ((call compile (lbData[9000, lbCurSel 9000])) setVariable ['is_coma',false,true]);";
				condition = "(call compile (lbData[9000, lbCurSel 9000])) getVariable ['is_coma',false]";
				allow[] = {"76561198007960495"};
			};

			class data
			{
				name = "Informations";
				statement = "[player] remoteExecCall ['AlysiaClient_fnc_APP_staff_players_getData', (lbData[9000, lbCurSel 9000])];";
				condition = "(true)";
				allow[] = {"76561198007960495"};
			};
		};
	};
};
