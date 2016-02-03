/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_info"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (isNull _target) exitWith {};

_info = _target getVariable "laboratory_info";
if (isNil "_info") exitWith {};

if ((_target getVariable ["sabotage", 0]) > serverTime) exitWith {
	[format["Ce laboratoire a été récemment saboté et ne peut être utilisé que dans %1 minutes", [((_target getVariable ["sabotage", 0]) - time), "M:SS"] call CBA_fnc_formatElapsedTime]] call AlysiaClient_fnc_error;
};

[_target, getArray(missionConfigFile >> "ALYSIA_LABORATORIES" >> (_info select 2) >> "process")] call AlysiaClient_fnc_process_choice_open;
