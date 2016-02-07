/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_zone", "_plant", "_seed", "_vehicle"];
_vehicle = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _vehicle) exitWith {};

if (_vehicle getVariable ["farm_plant", false]) exitWith
{
	_vehicle setVariable ["farm_plant", false];
	["Plantaison terminé"] call AlysiaClient_fnc_info;
};

if (!(isEngineOn _vehicle)) exitWith {
	["Vous devez avoir le moteur démarré pour débuter la procédure de plantaison"] call AlysiaClient_fnc_error;
};
if ((driver _vehicle) != player) exitWith {
	["Seul le conducteur peut débuter la procédure de plantaison"] call AlysiaClient_fnc_error;
};
if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "") exitWith {
	["Vous ne pouvez pas commencer la plantaison alors que le coffre est en cours d'utilisation"] call AlysiaClient_fnc_error;
};

_zone = "";
{
	if (_vehicle distance (getMarkerPos _x) < 40) exitWith {
		_zone = _x;
	};
} forEach getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "farming_markers_plant");
if (_zone isEqualTo "") exitWith {
	["Vous n'êtes près d'aucune zone agricole"] call AlysiaClient_fnc_error;
};

closeDialog 0;
_plant = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_MARKERS" >> _zone >> "plant");
_seed = getText(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "seed");

_vehicle setVariable ["farm_plant", true];
_vehicle setVariable ["trunk_in_use_ID", "FARMING", true];

["Début de la procédure de plantaison dans deux secondes..."] call AlysiaClient_fnc_info;
sleep 2;

while {(_vehicle getVariable ["farm_plant", false])} do
{
	if ((_vehicle distance (getMarkerPos _zone)) > 40) exitWith {
		[format["Plantaison terminé<br/>Trop loin de %1", markerText _zone]] call AlysiaClient_fnc_error;
	};
	if (([(_vehicle getVariable ["Trunk", []]), _seed] call AlysiaClient_fnc_itemTrunk) isEqualTo 0) exitWith {
		["Plantaison terminé<br/>Aucune graine dans le coffre du véhicule"] call AlysiaClient_fnc_error;
	};
	if ((driver _vehicle) != player) exitWith {
		["Plantaison terminé<br/>Vous devez rester à la place de conducteur"] call AlysiaClient_fnc_error;
	};
	if (!(isEngineOn _vehicle)) exitWith {
		["Plantaison terminé<br/>Le moteur doit rester allumé"] call AlysiaClient_fnc_error;
	};
	if ((_vehicle getVariable ["trunk_in_use_ID", ""]) != "FARMING") exitWith {
		["Plantaison terminé<br/>Quelqu'un fouille le coffre"] call AlysiaClient_fnc_error;
	};

	if (count (nearestObjects [_vehicle, [_plant], getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "distance")]) isEqualTo 0) then
	{
		if ([false, _vehicle, "Trunk", _seed, 1, false] call AlysiaClient_fnc_handleTrunk) then
		{
			_pos = getPos _vehicle;
			_object = createVehicle [_plant, [(_pos select 0), (_pos select 1), ((_pos select 2) - getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "groundLevel"))], [], 0, "CAN_COLLIDE"];
			
			_plantGrowingtime = getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "growingTime") + round(random(getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "extraGrow")));
			if ([false, _vehicle, "Trunk", "engrais", 1, false] call AlysiaClient_fnc_handleTrunk) then {
				_plantGrowingtime = round(_plantGrowingtime * 0.7);
			};

			[(_plantGrowingtime / 10), getNumber(missionConfigFile >> "ALYSIA_FARMING_PLANT_OBJETCS" >> _plant >> "upLevel") / 10, _object] spawn AlysiaClient_fnc_plantGrow;
		};
	};

	sleep 0.5;
};

_vehicle setVariable ["Trunk", (_vehicle getVariable ["Trunk", []]), true];

if ((_vehicle getVariable ["trunk_in_use_ID", ""]) isEqualTo "FARMING") then {
	_vehicle setVariable ["trunk_in_use_ID", "", true];
};

_vehicle setVariable ["farm_plant", false];
