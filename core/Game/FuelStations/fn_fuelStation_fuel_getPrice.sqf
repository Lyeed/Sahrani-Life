/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_station", "_fuel", "_config_fuel", "_config_station", "_max"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_fuel = [_this, 1, "", [""]] call BIS_fnc_param;

if (_fuel isEqualTo "") exitWith {0};

_config_station = missionConfigFile >> "ALYSIA_FUEL_STATION" >> typeof(_station);
if (!isClass(_config_station)) exitWith {0};

_config_fuel = missionConfigFile >> "ALYSIA_FUEL" >> _fuel;
if (!isClass(_config_fuel)) exitWith {0};

_max = getNumber(_config_station >> "stock" >> _fuel >> "max");
round(((_max - (_station getVariable [_fuel, _max])) / 45) + 2);
