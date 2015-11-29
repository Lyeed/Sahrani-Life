/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_list =  _display displayCtrl 8201;
lbClear _list;

{
	_info = ["Alysia", _x] call CBA_fnc_getKeybind;
	_index = _list lbAdd (_info select 2);
	_list lbSetData [_index, cba_keybinding_dikDecToStringTable select (((_info select 5) select 0) + 1)];
} forEach g_keybinds;
_list lbSetCurSel 0;
