/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_skull", "_data", "_pos"];

_pos = getPosATL player;
if (count (nearestObjects [_pos, ["Car","Tank","Air","Truck"], 5]) > 0) then {
	_pos = [_pos, 10] call CBA_fnc_randPos;
};

_skull = createVehicle ["Land_HumanSkull_F", [0,0,0], [], 0, "CAN_COLLIDE"];
_skull setPosATL _pos;
_skull setDir random(360);

_data = [];

if (g_cash > 0) then {
	_data pushBack ["money", g_cash];
};

{
	_var = missionNamespace getVariable [format["inv_%1", _x], 0];
	if (_var > 0) then {_data pushBack ["virtual", [_x, _var]]};
} forEach (missionNamespace getVariable ["g_inv_items", []]);

{
	if (_x != "") then {_data pushBack ["arma", _x]};
} forEach (
	(primaryWeaponItems player) +
	(assignedItems player) +
	(uniformItems player) +
	(vestItems player) +
	(backpackItems player) +
	[
		(primaryWeapon player),
		(secondaryWeapon player),
		(handgunWeapon player),
		(uniform player),
		(vest player),
		(backpack player),
		(goggles player),
		(headgear player),
		(binocular player)
	]
);

_skull setVariable ["inv", _data, true];

_skull setVariable ["info", 
	[
		[] call AlysiaClient_fnc_strDate,
		[] call AlysiaClient_fnc_strTime,
		(getPlayerUID player),
		g_nationality,
		g_sexe,
		(getPlayerUID g_killer)
	], true
];

_skull;
