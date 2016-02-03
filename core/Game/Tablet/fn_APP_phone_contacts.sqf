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

_max = getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "contacts_max");	

(_display displayCtrl 8373) ctrlSetStructuredText parseText format
[
	"<t align='center'>Contacts</t><t align='right'>%1/%2</t>",
	count g_phone_contacts,
	_max
];

_list = _display displayCtrl 8374;
lbClear _list;

if (count(g_phone_contacts) > 0) then
{
	{
		_index = _list lbAdd format["%1 - %2", (_x select 0), (_x select 1)];
		_list lbSetPicture [_index, "lyeed_IMG\data\phone\contact.paa"];
	} forEach (g_phone_contacts);
	_list lbSetCurSel 0;

	[[8375, 8378], true] call AlysiaClient_fnc_tabletShow;
};

if ((count g_phone_contacts) < _max) then {
	[[8379, 8386], true] call AlysiaClient_fnc_tabletShow;
};
