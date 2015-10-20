/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_classname", "_side"];
_classname = [_this, 0, "", [""]] call BIS_fnc_param;
_side = [_this, 1, sideUnknown, [sideUnknown]] call BIS_fnc_param;

if (_classname == "") exitWith {
	false;
};

if (!(isClass(missionConfigFile >> "ALYSIA_VEHICLES" >> _classname))) exitWith {
	diag_log format["[ALYSIA:ERROR] Vehicle classname [%1] not defined in config", _classname];
	false;
};

if ((call compile format["%1", (getText(missionConfigFile >> "ALYSIA_VEHICLES" >> _classname >> "side"))]) == _side) then {
	true;
} else {
	false;
};