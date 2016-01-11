/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_max"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_max = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "backlist_max");	

(_display displayCtrl 8531) ctrlSetStructuredText parseText format
[
	"<t align='center'>Contacts</t><t align='right'>%1/%2</t>",
	count g_phone_blacklist,
	_max
];

_list = _display displayCtrl 8532;
lbClear _list;

if (count(g_phone_blacklist) > 0) then
{
	{
		_list lbAdd _x;
	} forEach g_phone_blacklist;
	_list lbSetCurSel 0;

	[[8533, 8534], true] call public_fnc_tabletShow;
};

if ((count g_phone_blacklist) < _max) then {
	[[8535, 8540], true] call public_fnc_tabletShow;
};
