/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];
disableSerialization;

_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_list = _display displayCtrl 8802;
lbClear _list;

{
	_index = _list lbAdd ([_x] call public_fnc_itemGetName);
	_list lbSetData [_index, _x];
	_list lbSetPicture [_index, ([_x] call public_fnc_itemGetImage)];
} forEach ("true" configClasses (missionConfigFile >> "ALYSIA_BOURSE"));

_list lbSetCurSel 0;