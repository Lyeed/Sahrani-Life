/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_info", "_process"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _target) exitWith {};

_info = _target getVariable "laboratory_info";
if (isNil "_info") exitWith {};

if ((_target getVariable ["sabotage", 0]) > serverTime) exitWith
{
	[
		format
		[
			"Ce laboratoire a été récemment saboté et ne peut être utilisé que dans %1 minutes",
			[((_target getVariable ["sabotage", 0]) - serverTime), "M:SS"] call CBA_fnc_formatElapsedTime
		]
	] call AlysiaClient_fnc_error;
};

_process = getArray(missionConfigFile >> "ALYSIA_LABORATORIES" >> (_info select 2) >> "process") + (_target getVariable ["extra_process", []]);

{
	_config = _x;
	if (([configName _config] call AlysiaClient_fnc_itemCount) > 0) then
	{
		{
			_proc = _x;
			if (!(_proc in _process)) then {_process pushBack _proc};
		} forEach (_data select 1);
	};
} forEach ((format["'%1' in getArray(_x >> 'labos')", (_data select 2)]) configClasses (missionConfigFile >> "ALYSIA_BLUEPRINTS"));

[_target, _process] call AlysiaClient_fnc_process_choice_open;
