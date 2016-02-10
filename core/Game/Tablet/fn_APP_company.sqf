/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_info", "_members", "_names", "_uids", "_list"];
_company = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

if (isNull _company) exitWith {closeDialog 0};

_info = _company getVariable "company_info";
_members = _company getVariable "company_members";
if (isNil "_info") exitWith {};

_uids = _members select 0;
_names = _members select 1;

(_display displayCtrl 9603) ctrlSetStructuredText parseText format
[
	"<t align='center' size='1.1'>%1</t>",
	(_info select 0)
];

_list = _display displayCtrl 9606;
lbClear _list;

{
	_index = _list lbAdd _x;
	_list lbSetData [_index, (_uids select _forEachIndex)];
} forEach _names;

_list lbSetCurSel -1;
