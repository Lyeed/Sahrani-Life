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

(_display displayCtrl 8107) ctrlSetStructuredText parseText "<t align='center' font='PuristaBold' size='2.7' color='#FF8000'>Forfaits</t>";
(_display displayCtrl 8109) buttonSetAction "[] call AlysiaClient_fnc_APP_store_forfait_buy;";

[8107, true] call AlysiaClient_fnc_tabletShow;

_list = _display displayCtrl 8110;
lbClear _list;

_list ctrlSetEventHandler ["LBSelChanged", "_this call AlysiaClient_fnc_APP_store_forfait_update;"];

{
	_forfait = configName _x;
	_index = _list lbAdd format
	[
		"%1 %2",
		getText(_x >> "name"),
		if (_forfait isEqualTo g_phone_forfait) then {"(le votre)"} else {""}
	];
	_list lbSetData [_index, _forfait];
} foreach ("true" configClasses (missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS"));

if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Aucun";
};

_list lbSetCurSel -1;
