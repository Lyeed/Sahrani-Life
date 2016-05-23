/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_action_inUse || dialog) exitWith {};

scopeName "main";

if ((vehicle player) isEqualTo player) then
{
	private "_target";

	if (player getVariable ["sit", false]) then
	{
		[] call AlysiaClient_fnc_standUp;
		true breakOut "main";
	};

	{
		if (isPlayer _x) then
		{
			if (_x getVariable ["is_coma", false]) then {
				[_x, true] spawn AlysiaClient_fnc_action_body_drop;
			} else {
				[_x, true] spawn AlysiaClient_fnc_stopescort;
			};
			true breakOut "main";
		} else {
			if (isClass(missionConfigFile >> "ALYSIA_DYN_OBJECTS" >> typeOf(_x))) then {
				detach _x;
			};
		};
	} forEach (attachedObjects player);

	_target = cursorObject;
	if (!(isNull _target)) then 
	{
		_type = typeOf(_target);

		if (isClass(missionConfigFile >> "ALYSIA_FUEL_STATION" >> _type)) then
		{
			_config = missionConfigFile >> "ALYSIA_FUEL_STATION" >> _type;

			_pos_pomp = getArray(_config >> "pos_model_pomp");
			if (count(_pos_pomp) > 0) then
			{
				if ((player distance (_target modelToWorld _pos_pomp)) < 2) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_station;
					true breakOut "main";
				};
			};

			_pos_store = getArray(_config >> "pos_model_store");
			if (count(_pos_store) > 0) then
			{
				if ((player distance (_target modelToWorld _pos_store)) < 3) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_station;
					true breakOut "main";
				};
			};
		};

		if ((player distance _target) < ((((boundingBox _target) select 1) select 0) + 2.5)) then
		{
			if (isPlayer _target) then
			{
				if ((_target isKindOf "Car") || (_target isKindOf "Ship") || (_target isKindOf "Air") || (_target isKindOf "Tank") || (_target isKindOf "Truck")) then
				{
					if (alive _target) then
					{
						[(vehicle _target)] call AlysiaClient_fnc_interactions_player_to_vehicle;
						true breakOut "main";
					};
				} else {
					if (_target getVariable ["is_coma", false]) then {
						[_target] call AlysiaClient_fnc_interactions_player_to_player_coma;
					} else {
						[_target] call AlysiaClient_fnc_interactions_player_to_player_basics;
					};
					true breakOut "main";
				};
			} else {
				
				if (
						(alive _target) &&
						(
							(_target isKindOf "Car") ||
							(_target isKindOf "Ship") ||
							(_target isKindOf "Air") ||
							(_target isKindOf "Tank") ||
							(_target isKindOf "Truck")
						)
					) then {
					[_target] call AlysiaClient_fnc_interactions_player_to_vehicle;
					true breakOut "main";
				};

				if (_type isEqualTo "Land_HumanSkull_F") then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_skull;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_ATM" >> _type)) then
				{
					["home", _target] call AlysiaClient_fnc_atmScreen;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_STORAGES" >> _type)) then
				{
					[_target, "Trunk", true, true, false, false] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
					true breakOut "main";
				};

				if (_type isEqualTo "Turtle_F") then
				{
					[_target] call AlysiaClient_fnc_catchTurtle;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _type)) then
				{
					[_target] spawn AlysiaClient_fnc_plantHarvest;
					true breakOut "main";
				};

				if (count(_target getVariable ["company_info", []]) > 0) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_company;
					true breakOut "main";
				};

				if (count(_target getVariable ["laboratory_info", []]) > 0) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_laboratory;
					true breakOut "main";
				};

				if (_type in ["Alsatian_Sand_F", "Alsatian_Black_F", "Alsatian_Sandblack_F"]) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_dog;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_CHAIRS" >> _type)) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_chair;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_DYN_OBJECTS" >> _type)) then
				{
					if (_target getVariable ["isPackable", false]) then
					{
						[_target] spawn AlysiaClient_fnc_dynamicObject_packup;
						true breakOut "main";
					};
				};

				if (_type isEqualTo "Land_Bag_EP1") then
				{
					if (_target getVariable ["money_bank", false]) then
					{
						[_target] spawn AlysiaClient_fnc_moneyBag;
						true breakOut "main";
					};
				};

				if (_type isEqualTo "Bank_Bomb") then
				{
					[_target] spawn AlysiaClient_fnc_c4_open;
					true breakOut "main";
				};

				if (_type isEqualTo "Bank_Drill") then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_drill;
					true breakOut "main";
				};

				if (_type isEqualTo "Land_Suitcase_F") then
				{
					[_target, "items", true, true, false, false, true] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
					true breakOut "main";
				};

				if (isClass(missionConfigFile >> "ALYSIA_BANK" >> _type)) then
				{
					{
						_pos = _target modelToWorld (_target selectionPosition (configName _x));
						if ((player distance [_pos select 0, _pos select 1, (_pos select 2) - 1.5]) < 3) then
						{
							[_target, (configName _x)] spawn AlysiaClient_fnc_bank_door_force;
							true breakOut "main";
						};
					} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_BANK" >> _type >> "doors"));
				};
			};
		};

		if (((player distance _target) < 10) && isClass(missionConfigFile >> "ALYSIA_HOUSES" >> _type)) then
		{
			[_target] call AlysiaClient_fnc_house_menu_handler;
			true breakOut "main";
		};

		if ((player distance _target) < ((((boundingBox _target) select 1) select 0)) + 1.2) then
		{
			if (isClass(missionConfigFile >> "ALYSIA_FARMING_OBJECT" >> _type)) then
			{
				[_target] spawn AlysiaClient_fnc_farm_object;
			};
		};
	};

	_suit = (nearestObjects [player, ["Land_Suitcase_F"], 1.5]) select 0;
	if (!(isNil "_suit")) then
	{
		[_suit, "items", true, true, false, false, true] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
		true breakOut "main";
	};

	_skull = (nearestObjects [player, ["Land_HumanSkull_F"], 2]) select 0;
	if (!(isNil "_skull")) then
	{
		[_skull] call AlysiaClient_fnc_interactions_player_to_skull;
		true breakOut "main";
	};

	_plant = (nearestObjects [player, (call g_plants), 3]) select 0;
	if (!(isNil "_plant")) then
	{
		[_plant] spawn AlysiaClient_fnc_plantHarvest;
		true breakOut "main";
	};

	{
		if ((player distance (getMarkerPos _x)) < 20) then
		{
			if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "destroy")) then
			{
				if ((player distance (getMarkerPos _x)) < 10) then
				{
					[_x] spawn AlysiaClient_fnc_dynamicMarkers_destroy;
					true breakOut "main";
				};
			} else {
				if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "discover")) then
				{
					if ((markerAlpha _x) != 1) then
					{
						[format["Vous avez découvert <t color='#74DF00'>%1</t>", (markerText _x)]] call AlysiaClient_fnc_info;
						[_x] call AlysiaClient_fnc_dynamicMarkers_reveal;
						true breakOut "main";
					};
				};
			};
		};
	} forEach g_dynamic_markers;

	{
		_marker = configName _x;
		if (player distance (getMarkerPos _marker) < getNumber(_x >> "area")) then
		{
			[_marker] spawn AlysiaClient_fnc_plantSeed;
			true breakOut "main";
		};
	} forEach ("str(playerSide) in getArray(_x >> 'sides')" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS"));

	{
		_marker = configName _x;
		if (getNumber(_x >> "water") isEqualTo 0) then
		{
			if (player distance (getMarkerPos _marker) < getNumber(_x >> "area")) then
			{
				[_marker] spawn AlysiaClient_fnc_pickGather;
				true breakOut "main";
			};
		} else {
			if (player distance (getMarkerPos _marker) < (getNumber(_x >> "area") + getNumber(_x >> "water_depth"))) then
			{
				[_marker] spawn AlysiaClient_fnc_pickGather;
				true breakOut "main";
			};
		};
	} forEach ("str(playerSide) in getArray(_x >> 'sides')" configClasses (missionConfigFile >> "ALYSIA_FARMING_GATHER"));

	if (!(isNull g_company)) then
	{
		_info = g_company getVariable "company_info";
		if ((_info select 2) isEqualTo "farming") then
		{
			if ((player distance g_company) < 30) then
			{
				[] spawn AlysiaClient_fnc_plantSeed;
				true breakOut "main";
			};
		};
	};		_suit = (nearestObjects [player, ["Land_Suitcase_F"], 1.5]) select 0;
	if (!(isNil "_suit")) then
	{
		[_suit, "items", true, true, false, false, true] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
		true breakOut "main";
	};

	_skull = (nearestObjects [player, ["Land_HumanSkull_F"], 2]) select 0;
	if (!(isNil "_skull")) then
	{
		[_skull] call AlysiaClient_fnc_interactions_player_to_skull;
		true breakOut "main";
	};

	_plant = (nearestObjects [player, (call g_plants), 3]) select 0;
	if (!(isNil "_plant")) then
	{
		[_plant] spawn AlysiaClient_fnc_plantHarvest;
		true breakOut "main";
	};

	{
		if ((player distance (getMarkerPos _x)) < 20) then
		{
			if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "destroy")) then
			{
				if ((player distance (getMarkerPos _x)) < 10) then
				{
					[_x] spawn AlysiaClient_fnc_dynamicMarkers_destroy;
					true breakOut "main";
				};
			} else {
				if (str(playerSide) in getArray(missionConfigFile >> "ALYSIA_DYN_MARKERS" >> _x >> "discover")) then
				{
					if ((markerAlpha _x) != 1) then
					{
						[format["Vous avez découvert <t color='#74DF00'>%1</t>", (markerText _x)]] call AlysiaClient_fnc_info;
						[_x] call AlysiaClient_fnc_dynamicMarkers_reveal;
						true breakOut "main";
					};
				};
			};
		};
	} forEach g_dynamic_markers;

	{
		_marker = configName _x;
		if (player distance (getMarkerPos _marker) < getNumber(_x >> "area")) then
		{
			[_marker] spawn AlysiaClient_fnc_plantSeed;
			true breakOut "main";
		};
	} forEach ("str(playerSide) in getArray(_x >> 'sides')" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS"));

	{
		_marker = configName _x;
		if (getNumber(_x >> "water") isEqualTo 0) then
		{
			if (player distance (getMarkerPos _marker) < getNumber(_x >> "area")) then
			{
				[_marker] spawn AlysiaClient_fnc_pickGather;
				true breakOut "main";
			};
		} else {
			if (player distance (getMarkerPos _marker) < (getNumber(_x >> "area") + getNumber(_x >> "water_depth"))) then
			{
				[_marker] spawn AlysiaClient_fnc_pickGather;
				true breakOut "main";
			};
		};
	} forEach ("str(playerSide) in getArray(_x >> 'sides')" configClasses (missionConfigFile >> "ALYSIA_FARMING_GATHER"));

	if (!(isNull g_company)) then
	{
		_info = g_company getVariable "company_info";
		if ((_info select 2) isEqualTo "farming") then
		{
			if ((player distance g_company) < 30) then
			{
				[] spawn AlysiaClient_fnc_plantSeed;
				true breakOut "main";
			};
		};
	};
} else {
	_vehicle = vehicle player;
	
	if ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Truck") || (_vehicle isKindOf "Tank")) then
	{
		if (alive _vehicle) then
		{
			[_vehicle] call AlysiaClient_fnc_interactions_player_to_vehicle;
			true breakOut "main";
		};
	};
};

false;
