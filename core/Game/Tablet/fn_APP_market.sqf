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

_list = _display displayCtrl 8802;
lbClear _list;

{
	_item = configName _x;
	_index = _list lbAdd ([_item] call public_fnc_itemGetName);
	_list lbSetData [_index, _item];
	_list lbSetPicture [_index, ([_item] call public_fnc_itemGetImage)];
} foreach ("isClass(_x >> 'market')" configClasses (missionConfigFile >> "ALYSIA_ITEMS"));

_list lbSetCurSel 0;
