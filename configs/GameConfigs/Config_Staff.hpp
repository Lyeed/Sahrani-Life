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
		class Lyeed
		{
			uid = "76561198007960495";
			rank = "admin";
			requests = 1;
			teamspeak = 1;
		};
		class Brad_Dexter
		{
			uid = "76561197977519424";
			rank = "modo";
			requests = 1;
			teamspeak = 1;
		};
		class Cesarion
		{
			uid = "76561198026418521";
			rank = "modo";
			requests = 1;
			teamspeak = 1;
		};
		class Ben_Ancona
		{
			uid = "76561198099211957";
			rank = "admin";
			requests = 1;
			teamspeak = 1;
		};
		class Khaled
		{
			uid = "76561198089708821";
			rank = "modo";
			requests = 1;
			teamspeak = 1;
		};
	};

	class commands
	{
		class buttons
		{
			class Invisible_ON
			{
				name = "Invisible ON";
				statement = "g_staff_invisible = true; [player, true] remoteExecCall ['hideObject', 0];";
				condition = "!g_staff_invisible";
				allow[] = {"76561198007960495", "76561198099211957", "76561198026418521", "76561197977519424"};
			};
			class Invisible_OFF: Invisible_ON
			{
				name = "Invisible ON";
				statement = "g_staff_invisible = false; [player, false] remoteExecCall ['hideObject', 0];";
				condition = "g_staff_invisible";
			};

			class TP_ON
			{
				name = "TP ON";
				statement = "g_staff_tp = true; onMapSingleClick '(vehicle player) setPos _pos';";
				condition = "!g_staff_tp";
				allow[] = {"76561198007960495", "76561198099211957", "76561198026418521", "76561197977519424"};
			};
			class TP_OFF: TP_ON
			{
				name = "TP OFF";
				statement = "g_staff_tp = false; onMapSingleClick '';";
				condition = "g_staff_tp";
			};

			class god_ON
			{
				name = "God ON";
				statement = "g_staff_god = true;";
				condition = "!g_staff_god";
				allow[] = {"76561198007960495", "76561198099211957", "76561198026418521", "76561197977519424"};
			};
			class god_OFF: god_ON
			{
				name = "God OFF";
				statement = "g_staff_god = false;";
				condition = "g_staff_god";
			};

			class heal
			{
				name = "Soins";
				statement = "g_bleed = 0; [4000] call AlysiaClient_fnc_handleBlood;";
				condition = "(true)";
				allow[] = {"76561198007960495", "76561198099211957"};
			};

			class target_getKey
			{
				name = "Clef Cible";
				statement = "g_vehicles pushBack cursorTarget;";
				condition = "(!(isNull cursorTarget) && ((cursorTarget isKindOf 'Car') || (cursorTarget isKindOf 'Ship') || (cursorTarget isKindOf 'Air') || (cursorTarget isKindOf 'Tank') || (cursorTarget isKindOf 'Truck')))";
				allow[] = {"76561198007960495", "76561198099211957"};
			};
			class target_delete
			{
				name = "Supp Cible";
				statement = "deleteVehicle cursorTarget;";
				condition = "!(isNull cursorTarget)";
				allow[] = {"76561198007960495", "76561198099211957"};
			};

			class markers_ON
			{
				name = "Markers ON";
				statement = "g_staff_markers = true;";
				condition = "!g_staff_markers";
				allow[] = {"76561198007960495", "76561197977519424", "76561198026418521", "76561198099211957", "76561198089708821"};
			};
			class markers_OFF: markers_ON
			{
				name = "Markers OFF";
				statement = "g_staff_markers = false;";
				condition = "g_staff_markers";
			};
		};

		class target
		{
			class goto
			{
				name = "TP à";
				statement = "(vehicle player) setPosATL (getPosATL (call compile (lbData[9000, lbCurSel 9000])));";
				condition = "(true)";
				allow[] = {"76561198007960495", "76561198099211957", "76561197977519424", "76561198026418521"};
			};
			class tphere
			{
				name = "TP ici";
				statement = "(call compile (lbData[9000, lbCurSel 9000])) setPosATL (getPosATL player);";
				condition = "(true)";
				allow[] = {"76561198007960495", "76561198099211957", "76561197977519424", "76561198026418521"};
			};
			class spec
			{
				name = "Spec";
				statement = "(call compile (lbData[9000, lbCurSel 9000])) switchCamera 'INTERNAL'; g_staff_spec = true; closeDialog 0;";
				condition = "(true)";
				allow[] = {"76561198007960495", "76561197977519424", "76561198026418521", "76561198099211957", "76561198089708821"};
			};
			class res
			{
				name = "Rez";
				statement = "((call compile (lbData[9000, lbCurSel 9000])) setVariable ['is_bleeding',false,true]); ((call compile (lbData[9000, lbCurSel 9000])) setVariable ['is_coma',false,true]);";
				condition = "(call compile (lbData[9000, lbCurSel 9000])) getVariable ['is_coma',false]";
				allow[] = {"76561198007960495", "76561198099211957"};
			};
			class data
			{
				name = "Informations";
				statement = "[player] remoteExecCall ['AlysiaClient_fnc_APP_staff_players_getData', (lbData[9000, lbCurSel 9000])];";
				condition = "(true)";
				allow[] = {"76561198007960495", "76561197977519424", "76561198026418521", "76561198099211957", "76561198089708821"};
			};
		};
	};
};
