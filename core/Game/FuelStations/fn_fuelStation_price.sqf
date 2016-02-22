/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_station", "_fuel", "_config"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_fuel = [_this, 1, "", [""]] call BIS_fnc_param;

if (_fuel isEqualTo "") exitWith {0};

_config = missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuel;
if (!isClass(_config)) exitWith {0};

round
(
	(((_station distance (markerPos "oil_1")) / 100) / ((_station getVariable [_fuel, getNumber(_config >> "max")]) / 10))
);
