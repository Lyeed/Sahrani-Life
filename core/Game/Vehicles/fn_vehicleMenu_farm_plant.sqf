/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_plant", "_vehicle", "_getPlant"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

if (_vehicle getVariable ["farm_plant", false]) exitWith
{
	_vehicle setVariable ["farm_plant", false];
	["Plantaison terminé."] call AlysiaClient_fnc_info;
};

if (!(isEngineOn _vehicle)) exitWith {
	["Vous devez avoir le moteur démarré pour débuter la procédure de plantaison."] call AlysiaClient_fnc_error;
};
if ((driver _vehicle) != player) exitWith {
	["Seul le conducteur peut débuter la procédure de plantaison."] call AlysiaClient_fnc_error;
};
if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas commencer la plantaison alors que le coffre est en cours d'utilisation."] call AlysiaClient_fnc_error;
};

_getPlant =
{
	private["_ret", "_vehicle"];
	_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

	if (isNull _vehicle) exitWith {[]};

	_ret = [];

	{
		if (
				(_vehicle distance (getMarkerPos (configName _x)) <= getNumber(_x >> "area")) &&
				(([(_vehicle getVariable ["Trunk", []]), getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> getText(_x >> "plant") >> "seed")] call AlysiaClient_fnc_itemTrunk) > 0)
			) exitWith {
			_ret =
			[
				getText(_x >> "plant"),
				getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> getText(_x >> "plant") >> "seed")
			];
		};
	} forEach ("str(playerSide) in getArray(_x >> 'sides')" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS"));
	if (_ret isEqualTo []) then
	{
		if (!(isNull g_company)) then
		{
			_info = g_company getVariable "company_info";
			if (((_info select 2) isEqualTo "farming") && ((_vehicle distance (getPos g_company)) < 40)) then
			{
				{
					if (([(_vehicle getVariable ["Trunk", []]), getText(_x >> "seed")] call AlysiaClient_fnc_itemTrunk) > 0) exitWith
					{
						_ret =
						[
							configName _x,
							getText(_x >> "seed")
						];
					};
				} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS"));
			};
		};
	};

	_ret;
};

_vehicle setVariable ["farm_plant", true];
_vehicle setVariable ["trunk_in_use_ID", "FARMING", true];

["Début de la procédure de plantaison dans deux secondes..."] call AlysiaClient_fnc_info;
uiSleep 2;

while {(_vehicle getVariable ["farm_plant", false])} do
{
	if ((driver _vehicle) != player) exitWith {["Plantaison terminé<br/>Vous devez rester à la place de conducteur"] call AlysiaClient_fnc_error};
	if (!(isEngineOn _vehicle)) exitWith {["Plantaison terminé<br/>Le moteur doit rester allumé"] call AlysiaClient_fnc_error};
	if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "FARMING") exitWith {["Plantaison terminé<br/>Quelqu'un fouille le coffre"] call AlysiaClient_fnc_error};

	_data = [_vehicle] call _getPlant;
	if (_data isEqualTo []) exitWith {["Vous n'êtes près d'aucune zone agricole ou n'avez plus de graines dans le coffre"] call AlysiaClient_fnc_error};

	_plant = _data select 0;
	if (count (nearestObjects [_vehicle, [_plant], getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "distance")]) isEqualTo 0) then
	{
		if ([false, _vehicle, "Trunk", (_data select 1), 1, false] call AlysiaClient_fnc_handleTrunk) then
		{
			_object = createVehicle [_plant, [((getPos _vehicle) select 0), ((getPos _vehicle) select 1), (((getPos _vehicle) select 2) - getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "groundLevel"))], [], 0, "CAN_COLLIDE"];
			_plantGrowingtime = getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "growingTime") + round(random(getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "extraGrow")));
			if ([false, _vehicle, "Trunk", "engrais", 1, false] call AlysiaClient_fnc_handleTrunk) then {_plantGrowingtime = round(_plantGrowingtime * 0.7)};
			[(_plantGrowingtime / 10), getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "upLevel") / 10, _object] spawn AlysiaClient_fnc_plantGrow;
		};
	};

	uiSleep 0.5;
};

_vehicle setVariable ["Trunk", (_vehicle getVariable ["Trunk", []]), true];
if ((_vehicle getVariable ["trunk_in_use_ID", ""]) isEqualTo "FARMING") then {_vehicle setVariable ["trunk_in_use_ID", "", true]};
_vehicle setVariable ["farm_plant", false];
