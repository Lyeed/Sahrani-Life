class ALYSIA_STAFF
{
	class ranks
	{
		class admin {
			name = "Administrateur";
		};
		class modo {
			name = "Modérateur";
		};
		class support {
			name = "Support";
		};
	};

	class members
	{
		// - Admin
		class admin
		{
			rank = "admin";
			teamspeak = 1;
		};
		class Lyeed: admin
		{
			uid = "76561198007960495";
		};
		class Ben_Ancona: admin
		{
			uid = "76561198099211957";
		};
		// - Modo
		class modo
		{
			rank = "modo";
			teamspeak = 1;
		};
		class Brad_Dexter: modo
		{
			uid = "76561197977519424";
		};
		class Cesarion: modo
		{
			uid = "76561198026418521";
		};
		class Julia: modo
		{
			uid = "76561198138202092";
		};
		class Maels: modo
		{
			uid = "76561197978122710";
		};
		// - Support
		class support
		{
			rank = "support";
			teamspeak = 1;
		};
		class TheRealityTuto: support
		{
			uid = "76561198107987392";
		};
		class Special_K: support
		{
			uid = "76561197989894579";
		};
	};

	class commands
	{
		class buttons
		{
			class god_on
			{
				name = "Dieu ON";
				statement = "[] spawn AlysiaClient_fnc_APP_staff_god;";
				condition = "!g_staff_on";
				allow[] = {"76561198007960495","76561198099211957","76561198026418521","76561197977519424","76561198144182091","76561198138202092","76561197978122710"};
			};
			class god_off: god_on
			{
				name = "Dieu OFF";
				statement = "g_staff_on = false;";
				condition = "g_staff_on";
			};

			class target_getKey
			{
				name = "Clef Cible";
				statement = "g_vehicles pushBack cursorTarget;";
				condition = "(!(isNull cursorTarget) && ((cursorTarget isKindOf 'Car') || (cursorTarget isKindOf 'Ship') || (cursorTarget isKindOf 'Air') || (cursorTarget isKindOf 'Tank') || (cursorTarget isKindOf 'Truck')))";
				allow[] = {"76561198007960495","76561198099211957","76561198026418521","76561197977519424","76561198144182091","76561198138202092","76561197978122710"};
			};
			class target_delete
			{
				name = "Supp Cible";
				statement = "deleteVehicle cursorTarget;";
				condition = "!(isNull cursorTarget)";
				allow[] = {"76561198007960495","76561198099211957","76561198026418521","76561197977519424","76561198144182091","76561198138202092","76561197978122710"};
				verify = 1;
			};
			class target_trunkInUse
			{
				name = "Fix coffre";
				statement = "cursorTarget setVariable ['trunk_in_use_ID','',true];";
				condition = "!(isNull cursorTarget) && ((cursorTarget getVariable ['trunk_in_use_ID','']) != '')";
				allow[] = {"76561198007960495","76561198099211957","76561198026418521","76561197977519424","76561198144182091","76561198138202092","76561197978122710"};
			};
			class reboot
			{
				name = "Reboot";
				statement = "[] remoteExec ['AlysiaServer_fnc_serverSave',2];";
				condition = "isNil 'gServer_soonReboot'";
				allow[] = {"76561198007960495","76561198099211957"};
				verify = 1;
			};
		};

		class target
		{
			class goto
			{
				name = "TP à";
				statement = "(vehicle player) setPosATL (getPosATL (call compile (lbData[9000,lbCurSel 9000])));";
				condition = "(true)";
				allow[] = {"76561198007960495","76561198099211957","76561197977519424","76561198026418521","76561198144182091","76561198138202092","76561197978122710"};
			};
			class tphere: goto
			{
				name = "TP ici";
				statement = "(call compile (lbData[9000,lbCurSel 9000])) setPosATL (getPosATL player);";
			};
			class spec: goto
			{
				name = "Spec";
				statement = "(call compile (lbData[9000,lbCurSel 9000])) switchCamera 'INTERNAL';g_staff_spec = true;closeDialog 0;";
			};
			class data: goto
			{
				name = "Informations";
				statement = "[player] remoteExecCall ['AlysiaClient_fnc_APP_staff_players_getData',(lbData[9000,lbCurSel 9000])];";
			};
			class heal
			{
				name = "Soin";
				statement = "[3999] remoteExecCall ['AlysiaClient_fnc_handleBlood',(call compile (lbData[9000,lbCurSel 9000]))];";
				condition = "(true)";
				allow[] = {"76561198007960495","76561198099211957"};
			};
			class res: heal
			{
				name = "Rez";
				statement = "((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_bleeding',false,true]);((call compile (lbData[9000,lbCurSel 9000])) setVariable ['is_coma',false,true]);";
				condition = "(call compile (lbData[9000,lbCurSel 9000])) getVariable ['is_coma',false]";
			};
		};
	};
};
