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
	_data = _x;
	if ((_info select 2) isEqualTo (_data select 2)) then
	{
		if (([(_data select 0)] call AlysiaClient_fnc_itemCount) > 0) then
		{
			{
				_proc = _x;
				if (!(_proc in _process)) then {_process pushBack _proc};
			} forEach (_data select 1);
		};
	};
} forEach 
([
	["patron_AK74", ['weapon_ak_1','weapon_ak_2','weapon_ak_3','magazine_ak','scope_ak'], "lab_weapon"],
	["patron_M21", ['weapon_m21','magazine_m21','scope_m21'], "lab_weapon"],
	["patron_CZ", ['weapon_cz','magazine_cz'], "lab_weapon"],
	["patron_sawed", ['weapon_sawed','magazine_sawed'], "lab_weapon"],
	["patron_AKM", ['weapon_AKM_1','weapon_AKM_2','magazine_AKM','scope_AKM'], "lab_weapon"],
	["patron_mosin", ['weapon_mosin_1','weapon_mosin_2','magazine_mosin'], "lab_weapon"]
]);

[_target, _process] call AlysiaClient_fnc_process_choice_open;
