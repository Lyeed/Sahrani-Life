/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_target";

if (g_action_inUse || dialog) exitWith {};

scopeName "main";

_target = cursorTarget;
if ((vehicle player) isEqualTo player) then
{

	if (player getVariable ["sit", false]) then
	{
		[] call AlysiaClient_fnc_standUp;
		true breakOut "main";
	};
	if (!(isNull g_dragingBody)) then
	{
		[true] spawn AlysiaClient_fnc_action_body_drop;
		true breakOut "main";
	};

	if (isNull _target) then 
	{
		_chair = (nearestObjects [player, (call g_chairs), 1]) select 0;
		if (!(isNil "_chair")) then
		{
			[_chair] call AlysiaClient_fnc_sitDown;
			true breakOut "main";
		};

		_suit = (nearestObjects [player, ["Land_Suitcase_F"], 1.5]) select 0;
		if (!(isNil "_suit")) then
		{
			[_suit, "items", true, true, false, false, true] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
			true breakOut "main";
		};

		_storage = (nearestObjects [player, (call g_houses_storages), 2]) select 0;
		if (!(isNil "_storage")) then
		{
			[_storage, "Trunk", true, true, false, false] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
			true breakOut "main";
		};

		_skull = (nearestObjects [player, ["Land_HumanSkull_F"], 2]) select 0;
		if (!(isNil "_skull")) then
		{
			[_skull] call AlysiaClient_fnc_interactions_player_to_skull;
			true breakOut "main";
		};

		_atm = (nearestObjects [player, (call g_atms), 2]) select 0;
		if (!(isNil "_atm")) then
		{
			["home", _atm] call AlysiaClient_fnc_atmScreen;
			true breakOut "main";
		};

		_obj = (nearestObjects [player, (call g_dynamic_objects), 2]) select 0;
		if (!(isNil "_obj")) then
		{
			if (_obj getVariable ["isPackable", false]) then
			{
				[_obj] spawn AlysiaClient_fnc_dynamicObject_packup;
				true breakOut "main";
			};
		};

		_laboratory = (nearestObjects [player, (call g_laboratories), 2]) select 0;
		if (!(isNil "_laboratory")) then
		{
			if (count(_laboratory getVariable ["laboratory_info", []]) > 0) then
			{
				[_laboratory] call AlysiaClient_fnc_interactions_player_to_laboratory;
				true breakOut "main";
			};
		};

		_plant = (nearestObjects [player, (call g_plants), 3]) select 0;
		if (!(isNil "_plant")) then
		{
			[_plant] spawn AlysiaClient_fnc_plantHarvest;
			true breakOut "main";
		};

		_speaker = (nearestObjects [player, ["xcam_Loudspeakers_F"], 4]) select 0;
		if (!(isNil "_speaker")) then
		{
			[_speaker] call AlysiaClient_fnc_interactions_player_to_speaker;
			true breakOut "main";
		};

		_house = (nearestObjects [player, (call g_houses_list), 7]) select 0;
		if (!(isNil "_house")) then
		{
			[_house] call AlysiaClient_fnc_house_menu_handler;
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
			if (player distance (getMarkerPos _x) < 40) then
			{
				[_x] spawn AlysiaClient_fnc_plantSeed;
				true breakOut "main";
			};
		} forEach getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_plant");

		{
			if (player distance (getMarkerPos _x) < 40) then
			{
				[_x] spawn AlysiaClient_fnc_pickGather;
				true breakOut "main";
			};
		} forEach getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_gather");

		if (!(isNull g_company)) then
		{
			_info = g_company getVariable "company_info";
			if ((_info select 2) isEqualTo "farming_bio") then
			{
				if ((player distance g_company) < 30) then
				{
					[] spawn AlysiaClient_fnc_plantSeed;
					true breakOut "main";
				};
			};
		};
	} else {
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
				};
				
				true breakOut "main";
			} else {
				if ((alive _target) && ((_target isKindOf "Car") || (_target isKindOf "Ship") || (_target isKindOf "Air") || (_target isKindOf "Tank") || (_target isKindOf "Truck"))) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_vehicle;
					true breakOut "main";
				};

				if (typeof(_target) isEqualTo "Land_HumanSkull_F") then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_skull;
					true breakOut "main";
				};

				if (typeOf(_target) in (call g_atms)) then
				{
					["home", cursorTarget] call AlysiaClient_fnc_atmScreen;
					true breakOut "main";
				};

				if (typeOf(_target) in (call g_houses_storages)) then
				{
					[_target, "Trunk", true, true, false, false] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
					true breakOut "main";
				};

				if (typeOf(_target) isEqualTo "Turtle_F") then
				{
					[_target] call AlysiaClient_fnc_catchTurtle;
					true breakOut "main";
				};

				if (typeOf(_target) in ["Bank_Sahrani_N", "Bank_Sahrani_S"]) then
				{
					if (player distance (nearestObject [player, "xcam_Laptop_unfolded_F"]) <= 2) then
					{
						[_target, "Security"] spawn AlysiaClient_fnc_robberyStart;
						true breakOut "main";
					};

					if (player distance (nearestObject [player, "Bank_Drill"]) < 3) then
					{
						[((nearestObject [player, "Bank_Bomb"]) getVariable ["bank", ObjNull]), "", nearestObject [player, "Bank_Drill"]] spawn AlysiaClient_fnc_robberyProcess;
						true breakOut "main";
					};

					if (player distance (nearestObject [player, "Bank_Bomb"]) < 3) then
					{
						[((nearestObject [player, "Bank_Bomb"]) getVariable ["bank", ObjNull]), "", (nearestObject [player, "Bank_Bomb"])] spawn AlysiaClient_fnc_robberyProcess;
						true breakOut "main";
					};

					if (_target getVariable ["robbed", false]) then
					{
						if ((player distance (_target modelToWorld (_target selectionPosition "Interact5"))) < 5) then
						{
							[_target] spawn AlysiaClient_fnc_virtuel_menu_exhange_open;
							true breakOut "main";
						};
					} else {
						{
							_pos = _target modelToWorld (_target selectionPosition _x);
							if ((player distance [_pos select 0, _pos select 1, (_pos select 2) - 1.5]) < 3) then
							{
								[_target, _x] spawn AlysiaClient_fnc_robberyStart;
								true breakOut "main";
							};
						} forEach (["AutoDoor_trigger", "Interact1", "Interact2", "Interact3", "Interact4", "Interact5", "Interact6", "Vault_Door"]);
					};
				};

				if (isClass(missionConfigFile >> "ALYSIA_FUEL_STATION" >> typeOf(_target))) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_station;
					true breakOut "main";
				};

				if (typeOf(_target) in (call g_plants)) then
				{
					[_target] call AlysiaClient_fnc_plantHarvest;
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

				if (typeOf(_target) in ["Alsatian_Sand_F", "Alsatian_Black_F", "Alsatian_Sandblack_F"]) then
				{
					[_target] call AlysiaClient_fnc_interactions_player_to_dog;
					true breakOut "main";
				};

				if (typeOf(_target) in (call g_dynamic_objects)) then
				{
					if (_target getVariable ["isPackable", false]) then
					{
						[_target] spawn AlysiaClient_fnc_dynamicObject_packup;
						true breakOut "main";
					};
				};

				if (typeOf(_target) isEqualTo "Land_Bag_EP1") then
				{
					if (_target getVariable ["money_bank", false]) then
					{
						[_target] spawn AlysiaClient_fnc_moneyBag;
						true breakOut "main";
					};
				};

				if (typeOf(_target) isEqualTo "Bank_Bomb") then
				{
					[_target] spawn AlysiaClient_fnc_c4_open;
					true breakOut "main";
				};

				if (typeOf(_target) isEqualTo "Land_Suitcase_F") then
				{
					[_target, "items", true, true, false, false, true] spawn AlysiaClient_fnc_virtual_menu_exhange_open;
					true breakOut "main";
				};
			};
		};
		
		if (((player distance _target) < 10) && (typeOf(_target) in (call g_houses_list))) then
		{
			[_target] call AlysiaClient_fnc_house_menu_handler;
			true breakOut "main";
		};

		if (((player distance _target) < 1.5) && (typeOf(_target) in (call g_chairs))) then
		{
			[_target] call AlysiaClient_fnc_sitDown;
			true breakOut "main";
		};
	};
} else {
	_vehicle = vehicle player;
	
	if ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Truck") || (_vehicle isKindOf "Tank")) then
	{
		if ((alive _vehicle) && ((damage _vehicle) < 1)) then
		{
			[_vehicle] call AlysiaClient_fnc_interactions_player_to_vehicle;
			true breakOut "main";
		};
	};
};

false;
