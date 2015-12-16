/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private["_station", "_fuel"];
_station = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;
_fuel = [_this, 1, "", [""]] call BIS_fnc_param;

// Pour 10km -> 10000m -> Augmentation de 5Kn -> / par 2000
if (_fuel isEqualTo "") exitWith {};

(round((getNumber(missionConfigFile >> "ALYSIA_FUEL" >> "fuels" >> _fuel >> "price")) + ((_station distance (markerPos "oilu")) / 2000)));