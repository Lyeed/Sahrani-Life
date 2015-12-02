/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_action_inUse || 
	(player getVariable ["surrender", false]) ||
	dialog
) exitWith {};

scopeName "main";

if ((vehicle player) isEqualTo player) then
{
	if (isNull cursorTarget) then 
	{
		if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "dynamic_markers_destroy") isEqualTo 1) then
		{
			{
				if ((player distance (getMarkerPos _x)) < 20) exitWith
				{
					[_x] spawn public_fnc_dynamicMarkers_destroy;
					breakOut "main";
				};
			} forEach (g_dynamic_markers);
		} else {
			if (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "dynamic_markers_discover") isEqualTo 1) then
			{
				{
					if (((player distance (getMarkerPos _x)) < 20) && ((markerAlpha _x) != 1)) exitWith
					{
						[format["<t align='center'>Vous avez découvert<br/><t color='#74DF00'>%1</t>", (markerText _x)]] call public_fnc_info;
						[_x] call public_fnc_dynamicMarkers_reveal;
						breakOut "main";
					};
				} forEach (g_dynamic_markers);
			};
		};

		_plant = (nearestObjects [player, (call g_plants), 3]) select 0;
		if (!(isNil "_plant")) then
		{
			[_plant] spawn public_fnc_plantHarvest;
			breakOut "main";
		};

		{
			if (player distance (getMarkerPos _x) < 40) exitWith
			{
				[_x] spawn public_fnc_plantSeed;
				breakOut "main";
			};
		} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_plant"));

		{
			if (player distance (getMarkerPos _x) < 40) exitWith
			{
				[_x] spawn public_fnc_pickGather;
				breakOut "main";
			};
		} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_gather"));

	} else {
		if ((player distance cursorTarget) < ((((boundingBox cursorTarget) select 1) select 0) + 2.5)) then
		{
			if (isPlayer cursorTarget) then
			{
				if (player getVariable ["is_coma", false]) then
				{
					breakOut "main";
				};

				if ((vehicle cursorTarget) isEqualTo cursorTarget) then
				{
					[cursorTarget] spawn public_fnc_interactionMenu_open;
					breakOut "main";
				};
			} else {
				if ((cursorTarget isKindOf "Car") || (cursorTarget isKindOf "Ship") || (cursorTarget isKindOf "Air") || (cursorTarget isKindOf "Tank") || (cursorTarget isKindOf "Truck")) then
				{
					if (alive cursorTarget) then
					{
						[cursorTarget] spawn public_fnc_vehicleMenu_open;
						breakOut "main";
					};
				};

				if (typeof(cursorTarget) isEqualTo "Land_HumanSkull_F") then
				{
					[cursorTarget] spawn public_fnc_skullMenu_open;
					breakOut "main";
				};

				if (typeOf(cursorTarget) in ["Land_Atm_01_F", "Land_Atm_02_F", "xcam_Atm_01_F"]) then
				{
					["home"] call public_fnc_atmScreen;
					breakOut "main";
				};

				if (typeOf(cursorTarget) in (call g_houses_storages)) then
				{
					[cursorTarget] spawn public_fnc_virtual_menu_exhange_open;
					breakOut "main";
				};

				if (typeOf(cursorTarget) in ["Bank_Sahrani_N", "Bank_Sahrani_S"]) then
				{
					if (player distance (nearestObject [player, "xcam_Laptop_unfolded_F"]) <= 2) then
					{
						[cursorTarget, "Security"] spawn public_fnc_robberyStart;
						breakOut "main";
					};

					if (player distance (nearestObject [player, "Bank_Drill"]) < 3) then
					{
						[((nearestObject [player, "Bank_Bomb"]) getVariable ["bank", ObjNull]), "", nearestObject [player, "Bank_Drill"]] spawn public_fnc_robberyProcess;
						breakOut "main";
					};

					if (player distance (nearestObject [player, "Bank_Bomb"]) < 3) then
					{
						[((nearestObject [player, "Bank_Bomb"]) getVariable ["bank", ObjNull]), "", (nearestObject [player, "Bank_Bomb"])] spawn public_fnc_robberyProcess;
						breakOut "main";
					};

					if (cursorTarget getVariable ["robbed", false]) then
					{
						if ((player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Interact5"))) < 5) then
						{
							[cursorTarget] spawn public_fnc_virtuel_menu_exhange_open;
							breakOut "main";
						};
					} else {
						{
							_pos = cursorTarget modelToWorld (cursorTarget selectionPosition _x);
							if ((player distance [_pos select 0, _pos select 1, (_pos select 2) - 1.5]) < 3) exitWith
							{
								[cursorTarget, _x] spawn public_fnc_robberyStart;
								breakOut "main";
							};
						} forEach (["AutoDoor_trigger", "Interact1", "Interact2", "Interact3", "Interact4", "Interact5", "Interact6", "Vault_Door"]);
					};
				};

				if (typeOf(cursorTarget) in ["Land_FuelStation_Build_F","Land_FuelStation_Shed_F","Land_FuelStation_Feed_F"]) then
				{
					[] spawn public_fnc_fuelMenu_open;
					breakOut "main";
				};

				if (typeOf(cursorTarget) in (call g_plants)) then
				{
					[cursorTarget] call public_fnc_plantHarvest;
					breakOut "main";
				};
			};
		};
		if (((player distance cursorTarget) < 10) && (typeOf(cursorTarget) in (call g_houses_list))) then
		{
			[cursorTarget] call public_fnc_house_menu_handler;
			breakOut "main";
		};
	};
} else {
	_vehicle = vehicle player;
	
	if ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Truck") || (_vehicle isKindOf "Tank")) then
	{
		if ((alive _vehicle) && ((damage _vehicle) < 1)) then
		{
			if (!(player getVariable ["typeRefuel", ""] isEqualTo "")) exitWith
			{
				[(nearestObject [player, ["Land_FuelStation_Build_F","Land_FuelStation_Shed_F","Land_FuelStation_Feed_F"]])] spawn public_fnc_fuelMenu_use_refuel_veh;
			};
			
			[_vehicle] spawn public_fnc_vehicleMenu_open;
			breakOut "main";
		};
	};
};

false;

/*			
[(nearestObject [player, ["station_a","station_b","station_c"]])] spawn public_fnc_fuelMenu_use_refuel_veh;
s
if ((vehicle player) isEqualTo player) then
{
	private["_curTarget"];
	_curTarget = cursorTarget;	

	if (isNull _curTarget) then 
	{
		if (surfaceIsWater (getPosASL player)) then
		{
			private["_fish"];
			_fish = (nearestObjects[getPos player, ["Fish_Base_F"], 3]) select 0;
			if (!(isNil "_fish")) exitWith {
				[_fish] call public_fnc_catchFish; 
			};
		} else {
			private["_marker", "_plant"];
			
		};
	} else {
		private["_curDistance"];
		_curDistance = player distance _curTarget;
		if (isPlayer _curTarget) then 
		{
		} else {
			private["_curType"];
			_curType = typeOf _curTarget;


			if ((_curType in (call g_lastingObjects_Process)) && (_curDistance < 3) && (count(_curTarget getVariable["info", []]) > 0)) exitWith {
				[_curTarget, (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "LastingObjects_menu"))] call public_fnc_LastingObjectsMenuOpen
			};

			if (_curDistance < 4) then
			{



				if (_curType in ["Salema_F", "Ornate_random_F", "Mackerel_F", "Tuna_F", "Mullet_F", "CatShark_F"]) exitWith {
					[_curTarget] spawn public_fnc_catchFish; 
				};

				if (_curType == "Turtle_F") exitWith {
					[_curTarget] spawn public_fnc_catchTurtle; 
				};

				if ((_curType in 
					[
						"RoadBarrier_small_F",
						"RoadCone_L_F",
						"Land_Razorwire_F",
						"Land_CncWall4_F", 
						"Land_BagBunker_Tower_F", 
						"Land_HBarrierWall6_F", 
						"Land_HBarrierWall_corridor_F", 
						"Land_Canal_Wall_Stairs_F",
						"Land_HBarrierTower_F",
						"Land_Canal_Wall_10m_F",
						"Land_HBarrierWall_corner_F"
					]) && (_curTarget getVariable["isPackable", false])) exitWith {
					[_curTarget] call public_fnc_packupObjPut;
				};

				if (!((_curTarget getVariable["item", []]) isEqualTo [])) exitWith
				{
					if (!(_curTarget getVariable["PickedUp", false])) then
					{
						if (_curType in ["Land_BottlePlastic_V1_F", "Land_TacticalBacon_F", "Land_Can_V3_F", "Land_CanisterFuel_F", "Land_Suitcase_F"]) exitWith {
							[_curTarget] spawn public_fnc_pickupItem;
						};

						if (_curType == "Land_Money_F") exitWith {
							[_curTarget] spawn public_fnc_pickupMoney;
						};
					};
				};
			};
		};
	};
} else {
	private["_veh"];
	_veh = vehicle player;
	if (surfaceIsWater (getPos _veh)) then
	{
		if ((_veh isKindOf "Ship") && ((speed _veh) < 2) && ((speed _veh) > -1) && !g_net_dropped) then {
			[] spawn public_fnc_dropFishingNet;
		};
	} else {
		// land
	};
};
*/

