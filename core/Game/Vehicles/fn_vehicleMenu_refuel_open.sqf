/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_list", "_display"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (isNull _target) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};

g_interaction_target = _target;

if (!(createDialog "RscDisplayDefaultChoice")) exitWith {};

disableSerialization;
_display = findDisplay 69000;
if (isNull _display) exitWith {};

(_display displayCtrl 69001) ctrlSetStructuredText parseText "<t size='1.5' align='center'>Jerrican</t>";

_list = _display displayCtrl 69002;
lbClear _list;

{
	if (_x in (magazines player)) then
	{
		_details = [_x] call AlysiaClient_fnc_fetchCfgDetails;
		if (!(_details isEqualTo [])) then
		{
			_index = _list lbAdd (_details select 1);
			_list lbSetPicture [_index, (_details select 2)];
			_list lbSetData [_index, _x];
		};
	};
} forEach (["Alysia_jerrycan_sp98", "Alysia_jerrycan_sp95", "Alysia_jerrycan_diesel", "Alysia_jerrycan_gpl", "Alysia_jerrycan_kerosene"]);
if ((lbSize _list) isEqualTo 0) then
{
	_list lbAdd "Aucun";
	ctrlShow[69003, false];
	ctrlShow[69004, false];
	ctrlShow[69005, false];
	ctrlShow[69006, false];
	ctrlShow[69007, false];
} else {
	(_display displayCtrl 69007) buttonSetAction "[] spawn AlysiaClient_fnc_vehicleMenu_refuel_action;";
};

_list lbSetCurSel 0;
