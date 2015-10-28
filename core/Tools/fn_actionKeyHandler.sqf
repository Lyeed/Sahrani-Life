/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (g_action_inUse || 
	g_is_processing || 
	g_action_gathering || 
	(player getVariable["surrender", false])
	) exitWith {};

if ((vehicle player) isEqualTo player) then
{
	if (isNull cursorTarget) then 
	{

	} else {
		if ((player distance cursorTarget) < ((((boundingBox cursorTarget) select 1) select 0) + 2.5)) then
		{
			if (isPlayer cursorTarget) then
			{
				if (!dialog) then
				{
					if (player getVariable ["is_coma", false]) then
					{
						true;
					} else {
						if ((vehicle cursorTarget) isEqualTo cursorTarget) then
						{
							[cursorTarget] spawn public_fnc_interactionMenu_open;
							true;
						};
					};
				};
			} else {
				if (!dialog) then
				{
					if ((cursorTarget isKindOf "Car") || (cursorTarget isKindOf "Ship") || (cursorTarget isKindOf "Air") || (cursorTarget isKindOf "Tank") || (cursorTarget isKindOf "Truck")) then
					{
						if (alive cursorTarget) then
						{
							[cursorTarget] spawn public_fnc_vehicleMenu_open;
							true;
						};
					};
					if (typeof(cursorTarget) isEqualTo "Land_HumanSkull_F") then
					{
						[cursorTarget] spawn public_fnc_skullMenu_open;
						true;
					};
					if (typeOf(cursorTarget) in ["Land_Atm_01_F", "Land_Atm_02_F"]) then
					{
						["home"] call public_fnc_atmScreen;
						true;
					};
					if (typeOf(cursorTarget) in (call g_houses_storages)) then
					{
						[cursorTarget] spawn public_fnc_vehicleMenu_inventory_open;
						true;
					};
					/*if (typeOf(cursorTarget) in ["Bank_Sahrani"]) then
					{
						if (!("lockpick" in items player)) exitWith {["Vous avez besoin d'outils de crochetage pour pouvoir forcer une porte"] call public_fnc_notice};
						
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Vault_Door")) < 3) exitWith {["Vault_Door"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "LeftSlideDoor")) < 3) exitWith {["LeftSlideDoor"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "RightSlideDoor")) < 3) exitWith {["RightSlideDoor"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_1")) < 3) exitWith {["Door_1"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_2")) < 3) exitWith {["Door_2"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_3")) < 3) exitWith {["Door_3"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_4")) < 3) exitWith {["Door_4"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_5")) < 3) exitWith {["Door_5"] call public_fnc_robbingStart};
						if (player distance (cursorTarget modelToWorld (cursorTarget selectionPosition "Door_6")) < 3) exitWith {["Door_6"] call public_fnc_robbingStart};
					    ["Vous n'êtes pas près d'une porte crochetable"] call public_fnc_notice;
					};*/
				};
			};
		};
		if (((player distance cursorTarget) < 10) && (typeOf(cursorTarget) in (call g_houses_list))) then
		{
			if (!dialog) then
			{
				[cursorTarget] call public_fnc_house_menu_handler;
				true;
			};
		};
	};
} else {
	_vehicle = vehicle player;
	
	if ((_vehicle isKindOf "Car") || (_vehicle isKindOf "Ship") || (_vehicle isKindOf "Air") || (_vehicle isKindOf "Truck") || (_vehicle isKindOf "Tank")) then
	{
		if (alive _vehicle) then
		{
			if (!dialog) then
			{
				[_vehicle] spawn public_fnc_vehicleMenu_open;
				true;
			};
		};
	};
};

false;

/*
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
			
			{
				if (player distance (getMarkerPos _x) < 40) exitWith {
					_marker = _x;
				};
			} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_gather"));
			if (!(isNil "_marker")) exitWith {
				[_marker] spawn public_fnc_pickGather; 
			};
			
			{
				if (player distance (getMarkerPos _x) < 40) exitWith {
					_marker = _x;
				};
			} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_burn"));
			if (!(isNil "_marker")) exitWith {
				[_marker] call public_fnc_zoneBurn; 
			};

			{
				if (player distance (getMarkerPos _x) < 40) exitWith {
					_marker = _x;
				};
			} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_plant"));
			if (!(isNil "_marker")) exitWith {
				[_marker] spawn public_fnc_plantSeed;
			};

			_plant = (nearestObjects [player, [call g_plants], 3]) select 0;
			if (!(isNil "_plant")) exitWith {
				[_plant] call public_fnc_plantHarvest;
			};
		};
	} else {
		private["_curDistance"];
		_curDistance = player distance _curTarget;
		if (isPlayer _curTarget) then 
		{
			if (_curDistance < 4) then
			{
				if (_curTarget getVariable["is_coma", false]) then {
					[_curTarget] call public_fnc_medicalMenu; 
				} else {
					if (((_curTarget getVariable["restrained", false]) || (_curTarget getVariable["surrender", false])) && !(_curTarget getVariable["is_coma", false])) then {
						call compile format["public_fnc_interactionMenu_%1", str(playerSide)];
					};
				};
			};
		} else {
			private["_curType"];
			_curType = typeOf _curTarget;


			if ((_curType in (call g_lastingObjects_Process)) && (_curDistance < 3) && (count(_curTarget getVariable["info", []]) > 0)) exitWith {
				[_curTarget, (getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "LastingObjects_menu"))] call public_fnc_LastingObjectsMenuOpen
			};

			if (_curDistance < 4) then
			{

				if (_curType in (call g_plants)) exitWith {
					[_curTarget] call public_fnc_plantHarvest;
				};

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

