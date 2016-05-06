/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[] spawn
{
	private["_bp", "_default"];
	_default = 24;
	while {true} do
	{
		waitUntil {backpack player != ""};
		_bp = backpack player;
		g_maxWeight = _default + round(getNumber(configFile >> "CfgVehicles" >> (backpack player) >> "maximumload") / 8);
		waitUntil {((backpack player) != _bp)};
		if ((backpack player) isEqualTo "") then {g_maxWeight = _default};
	};
};

[] spawn
{
	private["_veh", "_fuel", "_curentfuel", "_conso"];
	while {true} do
	{
		waitUntil {((vehicle player) isEqualTo player)};

		setViewDistance tawvd_foot;
		while {(vehicle player) isEqualTo player} do
		{
			if (g_carryWeight > g_maxWeight) then 
			{
				if (!(isForcedWalk player)) then
				{
					player forceWalk true;
					player setFatigue 1;
				};
			} else {
				if (isForcedWalk player) then {
					player forceWalk false;
				};
			};

			uiSleep 1;
		};

		waitUntil {((vehicle player) != player)};

		g_seatbelt = false;
		_veh = vehicle player;

		{
			_unit_1 = _x;
			if (isPlayer _unit_1) then
			{
				private "_handle";
				if (_unit_1 getVariable ["is_coma", false]) then {
					_handle = [_unit_1, false] spawn AlysiaClient_fnc_action_body_drop;
				} else {
					_handle = [_unit_1, false] spawn AlysiaClient_fnc_stopescort;
				};

				waitUntil {scriptDone _handle};
				_unit_1 action ["getInCargo", _veh];
			} else {
				_config = missionConfigFile >> "ALYSIA_DYN_OBJECTS" >> typeOf(_unit_1);
				if (isClass(_config)) then
				{
					{
						_unit_2 = _x;
						if ((isPlayer _unit_2) && (_unit_2 getVariable ["is_coma", false])) then
						{
							detach _unit_2;
							_unit_2 action ["getInCargo", _veh];
						};
					} forEach (attachedObjects _unit_2);
					if ((_veh getVariable ["trunk_in_use_ID", ""]) isEqualTo "") then
					{
						[true, _veh, "Trunk", getText(_config >> "item"), 1, true] call AlysiaClient_fnc_handleTrunk;
					};

					deleteVehicle _unit_1;
				};
			};
		} forEach (attachedObjects player);

		if (_veh isKindOf "LandVehicle") then {
			setViewDistance tawvd_car;
		} else {
			setViewDistance tawvd_air;
		};

		_fuel = getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf(_veh) >> "fuel");
		while {((vehicle player) isEqualTo _veh)} do
		{
			if (((driver _veh) isEqualTo player) && (isEngineOn _veh)) then
			{
				_curentfuel = _veh getVariable ["typeRefuel", ""];
				if (_curentfuel isEqualTo "") then {
					_conso = getNumber(missionConfigFile >> "ALYSIA_FUEL" >> _fuel >> "conso");
				} else {
					_conso = getNumber(missionConfigFile >> "ALYSIA_FUEL" >> _curentfuel >> "conso");
					if (_fuel != _curentfuel) then
					{
						if (!(_fuel in ["SP95", "SP98"]) || ((_fuel in ["SP95", "SP98"]) && !(_curentfuel in ["SP95", "SP98"]))) then
						{
							[_veh, "HitEngine", 1] call AlysiaClient_fnc_setHitPointDamage;
						};
					};
				};

				_veh setFuel ((fuel _veh) - (((abs(speed _veh) + 10) / 200000) * _conso));
			};

			uiSleep 2;
		};

		if (g_seatbelt) then
		{
			playSound "seatbelt_off";
			g_seatbelt = false;
		};
	};
};

[] spawn
{
	private["_totalSession", "_fnc_channel", "_fnc_server", "_salary_time"];

	_fnc_channel =
	{
		["Vous devez être dans le channel TaskForceRadio pour pouvoir jouer sur le serveur. Vous allez être expulsé dans 20 secondes"] call AlysiaClient_fnc_error;
		uiSleep 20;
		if ((call TFAR_fnc_getTeamSpeakChannelName) != "TaskForceRadio") then
		{
			[] call AlysiaDB_fnc_query_update_disconnect;
			uiSleep 2;
			["Teamspeak", false, true] call BIS_fnc_endMission;
		};
	};

	_fnc_server =
	{
		["Vous n'êtes pas connecté sur le Teamspeak du serveur. Vous allez être expulsé dans 20 secondes."] call AlysiaClient_fnc_error;
		uiSleep 20;
		if (!(["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString)) then
		{
			[] call AlysiaDB_fnc_query_update_disconnect;
			uiSleep 2;
			["Teamspeak", false, true] call BIS_fnc_endMission;
		};
	};

	_totalSession = 0;
	_salary_time = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary" >> "timer");
	while {true} do
	{
		uiSleep 60;
		_totalSession = _totalSession + 1;
		
		if ((_totalSession % 4) isEqualTo 0) then {[] call AlysiaDB_fnc_query_update_usual};
		if ((_totalSession % 5) isEqualTo 0) then {[(random(8) * -1)] call AlysiaClient_fnc_handleThirst};
		if ((_totalSession % 6) isEqualTo 0) then {[(random(8) * -1)] call AlysiaClient_fnc_handleHunger};
		if ((_totalSession % _salary_time) isEqualTo 0) then
		{
			[] call AlysiaClient_fnc_salaryProcess;
	       	g_nextPay = time + (_salary_time * 60);
		};

		if (("(getText(_x >> 'uid') isEqualTo (getPlayerUID player)) && (getNumber(_x >> 'teamspeak') isEqualTo 1)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) isEqualTo []) then
		{
			if (["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString) then {
				if (!((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")) then {[] spawn _fnc_channel};
			} else {
				[] spawn _fnc_server;
			};
		};

		{
			if ((local _x) && ((units _x) isEqualTo [])) then {deleteGroup _x};
		} forEach allGroups;

		if ((rain > 0) && ((vehicle player) isEqualTo player) && (g_alcool isEqualTo 0)) then
		{
			if (getNumber(missionConfigFile >> "ALYSIA_ITEMS_ARMA" >> (currentWeapon player) >> "protect_rain") isEqualTo 0) then
			{
				if (random(230) < (1 + (rain * 10))) then
				{
					["rhume"] spawn AlysiaClient_fnc_desease_start;
				};
			};
		};

		if (count(g_medecine) > 0) then
		{
			_del = 0;
			{
				_amount = _x select 1;
				if (_amount <= 60) then
				{
					g_medecine = g_medecine - [_x];
					_del = _del + 1;
				} else {
					(g_medecine select (_forEachIndex - _del)) set [1, (_amount - 60)];
				};
			} forEach g_medecine;
		};
	};
};

[] spawn
{
	while {true} do
	{
		_actual = g_cash + g_atm;
		uiSleep (60 * 1);
		if ((g_cash + g_atm) > (_actual + 500000)) then
		{
			[(getPlayerUID player), (player getVariable "realname"), _actual, (g_cash + g_atm), time] remoteExecCall ["AlysiaServer_fnc_logMoney", 2];
		};
	};
};
