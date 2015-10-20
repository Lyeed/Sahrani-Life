/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_validHouses", "_pos", "_distance", "_side"];
_pos = [_this, 0, [], [[]]] call BIS_fnc_param;
_side = [_this, 1, sideUnknown, [sideUnknown]] call BIS_fnc_param;
_distance = [_this, 2, 5, [5]] call BIS_fnc_param;

if (count _pos == 0) exitWith {[]};

_validHouses = switch (_side) do
{
	case civilian: {getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "civ_houses")};
	case west: {getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "cop_houses")};
	case east: {getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "onu_houses")};
	default {(getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "onu_houses") + getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "cop_houses") + getArray(missionConfigFile >> "ALYSIA_HOUSE" >> "Info" >> "civ_houses"))};
};

nearestObjects [_pos, _validHouses, _distance];