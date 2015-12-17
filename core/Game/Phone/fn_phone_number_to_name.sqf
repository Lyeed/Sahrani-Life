/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_number", "_ret"];
_number = [_this, 0, "", [""]] call BIS_fnc_param;

_ret = _number;
if (_number in ["GUER", "WEST", "EAST"]) then {
	_ret = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> _number >> "name");
} else {
	{
		if ((_x select 1) isEqualTo _number) exitWith {
			_ret = _x select 0;
		};
	} forEach (g_phone_contacts);		
};

_ret;
