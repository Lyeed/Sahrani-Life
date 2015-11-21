/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list", "_index"];
disableSerialization;

_display = findDisplay 7500;
if (isNull _display) exitWith {};
	
(_display displayCtrl 8345) ctrlSetStructuredText parseText format
[
	"<t align='center' color='#8cff9b'>%1</t><t align='right'>kn</t>",
	getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "sms_price")
];

_list = _display displayCtrl 8332;
lbClear _list;

_list lbAdd (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "WEST" >> "name"));
_list lbSetData [0, "WEST"];
_list lbSetPicture [0, (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "WEST" >> "icon"))];

_list lbAdd (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "GUER" >> "name"));
_list lbSetData [1, "GUER"];
_list lbSetPicture [1, (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "GUER" >> "icon"))];

_list lbAdd (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "EAST" >> "name"));
_list lbSetData [2, "EAST"];
_list lbSetPicture [2, (getText(missionConfigFile >> "ALYSIA_FACTIONS" >> "EAST" >> "icon"))];

{
	_index = _list lbAdd format["%1", (_x select 0)];
	_list lbSetData [_index, (_x select 1)];
	_list lbSetPicture [_index, "\lyeed\images\phone_messages_contact.paa"];
} forEach (g_phone_contacts);
_list lbSetCurSel -1;