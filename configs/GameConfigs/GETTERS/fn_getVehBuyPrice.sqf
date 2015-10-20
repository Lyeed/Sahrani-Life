/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_classname"];
_classname = [_this, 0, "", [""]] call BIS_fnc_param;

if (_classname isEqualTo "") exitWith {
	0;
};

if (!(isClass(missionConfigFile >> "ALYSIA_VEHICLES" >> _classname))) exitWith {
	diag_log format["[ALYSIA:ERROR] Vehicle with classname [%1] does not declare in Vehicle config", _classname];
	0;
};

getNumber(missionConfigFile >> "ALYSIA_VEHICLES" >> _classname >> "buyPrice");