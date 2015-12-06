/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_path", "_array", "_display", "_idc_actual", "_title"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_path = [_this, 1, "", [""]] call BIS_fnc_param;//must be folder name inside lyeed_IMG\data\interactions\ with images defined as action_%1 and action_%1_select
_array = [_this, 2, [], [[]]] call BIS_fnc_param;
_title = [_this, 3, "", [""]] call BIS_fnc_param;

_check_target_distance = [_this, 4, true, [true]] call BIS_fnc_param;
_check_target_coma = [_this, 5, true, [true]] call BIS_fnc_param;
_check_target_null = [_this, 6, true, [true]] call BIS_fnc_param;
_check_player_coma = [_this, 7, true, [true]] call BIS_fnc_param;
_check_player_restrained = [_this, 8, true, [true]] call BIS_fnc_param;
_check_player_surrender = [_this, 9, true, [true]] call BIS_fnc_param;

if ((isNull _target) || (_path isEqualTo "") || (_array isEqualTo []))  exitWith {};

missionNamespace setVariable ["g_interaction_target", _target];
_data = [];
{
	if (call compile format["%1", (_x select 3)]) then {
		_data pushBack [(_x select 0), (_x select 1), (_x select 2)];
	};
} forEach _array;
if (_data isEqualTo []) exitWith {};

if (dialog) then
{
	closeDialog 0;
	waitUntil {!dialog};
};

if (!(createDialog "RscDisplayInteraction")) exitWith {};

disableSerialization;
_display = findDisplay 5000;
if (isNull _display) exitWith {};

uiNamespace setVariable ["interaction_save", _this];

if (_title isEqualTo "") then {
	ctrlShow[5001, false];
} else {
	(_display displayCtrl 5001) ctrlSetStructuredText parseText format["<t align='center' size='1.5'>%1</t>", _title];
};

_idc_actual = 5010;
{
	(_display displayCtrl (_idc_actual + 2)) ctrlSetText format["\lyeed_IMG\data\interactions\%1\action_%2.paa", _path, (_x select 0)];
	(_display displayCtrl (_idc_actual + 3)) ctrlSetStructuredText parseText format["<t align='left' size='1.3'>%1</t>", (_x select 1)];

	_ctrl_btn = _display displayCtrl (_idc_actual + 4);
	_ctrl_btn buttonSetAction (_x select 2);
	_ctrl_btn ctrlAddEventHandler["MouseEnter",
	format
	[
		"((findDisplay 5000) displayCtrl %4) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#000000'>%5</t>"";
		((findDisplay 5000) displayCtrl %3) ctrlSetBackgroundColor [1,1,1,1];
		ctrlSetText[%1, ""\lyeed_IMG\data\interactions\%7\action_%2_select.paa""];
		ctrlShow[%6, false];",
		(_idc_actual + 2), (_x select 0), (_idc_actual + 1), (_idc_actual + 3), (_x select 1), _idc_actual, _path
	]];

	_ctrl_btn ctrlAddEventHandler["MouseExit",
	format
	[
		"((findDisplay 5000) displayCtrl %4) ctrlSetStructuredText parseText ""<t align='left' size='1.3' color='#FFFFFF'>%5</t>"";
		((findDisplay 5000) displayCtrl %3) ctrlSetBackgroundColor [0,0,0,0.6]; 
		ctrlSetText[%1, ""\lyeed_IMG\data\interactions\%7\action_%2.paa""];
		ctrlShow[%6, true];",
		(_idc_actual + 2), (_x select 0), (_idc_actual + 1), (_idc_actual + 3), (_x select 1), _idc_actual, _path
	]];
	
	_idc_actual = _idc_actual + 5;
} forEach _data;

if (_idc_actual < 5050) then
{
	for "_i" from _idc_actual to 5049 do {
		ctrlShow[_i, false];
	};
};

while {!(isNull _display)} do
{
	if (_check_target_distance && ((player distance g_interaction_target) > ((((boundingBox g_interaction_target) select 1) select 0) + 2.5))) exitWith {
		closeDialog 0;
	};

	if (_check_target_coma && (g_interaction_target getVariable ["is_coma", false])) exitWith {
		closeDialog 0;
	};

	if (_check_target_null && (isNull g_interaction_target)) exitWith {
		closeDialog 0;
	};

	if (_check_player_coma && (player getVariable ["is_coma", false])) exitWith {
		closeDialog 0;
	};

	if (_check_player_restrained && (player getVariable ["restrained", false])) exitWith {
		closeDialog 0;
	};

	if (_check_player_surrender && (player getVariable ["surrender", false])) exitWith {
		closeDialog 0;
	};

	sleep 0.5;
};
