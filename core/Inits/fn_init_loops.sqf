/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_launder > 0) then
{
	[] spawn
	{
		sleep ((60 * random(15)) + 3);
		[] call AlysiaClient_fnc_launderReceive;
	};
};

[] spawn
{
	private["_bp", "_default"];
	_default = 24;
	while {true} do
	{
		waitUntil {backpack player != ""};
		_bp = backpack player;
		g_maxWeight = _default + round(getNumber(configFile >> "CfgVehicles" >> (backpack player) >> "maximumload") / 8);
		waitUntil {backpack player != _bp};
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
					titleText["Vous êtes surchargé", "PLAIN"];
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
		_fuel = getText(missionConfigFile >> "ALYSIA_VEHICLES" >> typeOf(_veh) >> "fuel");

		if (!(isNull (player getVariable ["escorting", objNull]))) then
		{
			_target = player getVariable ["escorting", objNull];
			detach _target;
			_target action ["getInCargo", _veh];
			_target setVariable ["escorted", objNull, true];
			player setVariable ["escorting", objNull, true];
		};

		if (!(isNull g_dragingBody)) then
		{
			detach g_dragingBody;
			g_dragingBody setVariable ["transporting", false, true];
			g_dragingBody action ["getInCargo", _veh];
			g_dragingBody = ObjNull;
		};

		if (_veh isKindOf "LandVehicle") then {
			setViewDistance tawvd_car;
		} else {
			setViewDistance tawvd_air
		};

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
						if (!((_curentfuel in ["SP95", "SP98"]) && (_fuel in ["SP95", "SP98"]))) then
						{
							[_veh, "HitEngine", 1] call AlysiaClient_fnc_setHitPointDamage;
						};
					};
				};

				_veh setFuel ((fuel _veh) - (((abs(speed _veh) + 10) / 240000) * _conso));
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
	_salary_time = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "salary_timer");
	while {true} do
	{
		uiSleep 60;
		_totalSession = _totalSession + 1;
		
		if ((_totalSession % 4) isEqualTo 0) then {
			[] call AlysiaDB_fnc_query_update_usual 
		};

		if ((_totalSession % 5) isEqualTo 0) then {
			[(random(8) * -1)] call AlysiaClient_fnc_handleThirst;
		};
		if ((_totalSession % 6) isEqualTo 0) then {
			[(random(8) * -1)] call AlysiaClient_fnc_handleHunger;
		};
		
		if ((_totalSession % _salary_time) isEqualTo 0) then
		{
			[] call AlysiaClient_fnc_salaryProcess;
	       	g_nextPay = time + (_salary_time * 60);
		};

		if (("(getText(_x >> 'uid') isEqualTo (getPlayerUID player)) && (getNumber(_x >> 'teamspeak') isEqualTo 1)" configClasses (missionConfigFile >> "ALYSIA_STAFF" >> "members")) isEqualTo []) then
		{
			if (["Alysia", (call TFAR_fnc_getTeamSpeakServerName)] call BIS_fnc_inString) then
			{
				if (!((call TFAR_fnc_getTeamSpeakChannelName) isEqualTo "TaskForceRadio")) then {
					[] spawn _fnc_channel;
				};
			} else {
				[] spawn _fnc_server;
			};
		};

		{
			if ((local _x) && ((units _x) isEqualTo [])) then {
				deleteGroup _x;
			};
		} forEach allGroups;
	};
};
