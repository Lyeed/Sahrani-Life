/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_info", "_process"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {
	["Cible invalide."]
};

_info = _target getVariable "company_info";
if (isNil "_info") exitWith {};

_process = getArray(missionConfigFile >> 'ALYSIA_COMPANIES' >> 'types' >> (_info select 2) >> 'process');

{
	_config = _x;
	if (([configName _config] call AlysiaClient_fnc_itemCount) > 0) then
	{
		{
			_proc = _x;
			if (!(_proc in _process)) then {_process pushBack _proc};
		} forEach getArray(_config >> "process");
	};
} forEach ((format["'%1' in getArray(_x >> 'compagnies')", (_info select 2)]) configClasses (missionConfigFile >> "ALYSIA_BLUEPRINTS"));

[_target, _process] call AlysiaClient_fnc_process_choice_open;
