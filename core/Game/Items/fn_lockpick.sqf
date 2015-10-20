/*
	File: fn_lockpick.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_curTarget", "_distance", "_isVehicle"];
_curTarget = cursorTarget;

if (life_action_inUse) exitWith {};
if (isNull _curTarget) exitWith {};

_distance = ((boundingBox _curTarget select 1) select 0) + 2;
if (player distance _curTarget > _distance) exitWith {};

_isVehicle = if ((_curTarget isKindOf "LandVehicle") OR (_curTarget isKindOf "Ship") OR (_curTarget isKindOf "Air")) then {true} else {false};
if (!_isVehicle && !isPlayer _curTarget) exitWith {};

if (_isVehicle && (_curTarget in life_vehicles)) exitWith { 
	["Vous possédez déjà les clés de ce véhicule"] call ALYSIA_fnc_error; 
};
if (_isVehicle && (_curTarget isKindOf "Tank")) exitWith { 
	["Vous <t color='#FF0000'>ne pouvez pas</t> lockpick ce type de véhicule"] call ALYSIA_fnc_error; 
};
if (_isVehicle && (_curTarget getVariable["rebootSpawned", false]) && ((_curTarget getVariable["lockpickTime", time]) > time)) exitWith {
	[format["Vous <t color='#FF0000'>ne pouvez pas</t> lockpick de véhicule ayant spawn au redémarrage du serveur. Veuillez attendre <t color='#2E64FE'>%1 secondes</t> avant de lockpick ce véhicule", round((_curTarget getVariable "lockpickTime") - time)]] call ALYSIA_fnc_error;
};

if (!_isVehicle && !(_curTarget getVariable["restrained",false])) exitWith {};

if (!([format[localize "STR_ISTR_Lock_Process", if(!_isVehicle) then {"Handcuffs"} else {getText(configFile >> "CfgVehicles" >> (typeOf _curTarget) >> "displayName")}], 12, true, "", false, _curTarget] call ALYSIA_fnc_showProgress)) exitWith {};

if (!([false,"lockpick",1] call life_fnc_handleInv)) exitWith { 
	["Vous n'avez pas de lockpick"] call ALYSIA_fnc_error; 
};

if(!_isVehicle) then 
{
	private["_dice"];
	_dice = random(100);
	if(_dice < 40) then 
	{
		["Vous avez crocheté des menottes"] call ALYSIA_fnc_info;
		_curTarget setVariable["restrained", false, true];
		_curTarget setVariable["Escorting", false, true];
		_curTarget setVariable["transporting", false, true];
		_curTarget setVariable["surrender", false, true];
		[[_curTarget, "cuffout"], "ALYSIA_fnc_playSound", nil] spawn life_fnc_MP;
	}
	else
	{
		[(localize "STR_ISTR_Lock_Failed")] call ALYSIA_fnc_info;
	};
} 
else
{
	private["_dice"];
	_dice = random(100);
	[[_curTarget, "lockpick"], "ALYSIA_fnc_playSound", nil] spawn life_fnc_MP;
	if (_dice < 25) then
	{
		[(localize "STR_ISTR_Lock_Success")] call ALYSIA_fnc_info;
		life_vehicles pushBack _curTarget;
	}
	else 
	{
		[(localize "STR_ISTR_Lock_Failed")] call ALYSIA_fnc_info; 
	};
};