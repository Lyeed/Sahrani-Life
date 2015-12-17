/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];
disableSerialization;

_display = findDisplay 7500;
(_display displayCtrl 8319) ctrlSetStructuredText parseText format
[
	"<t align='left'>Vos messages</t><t align='right'>%1/%2</t>",
	count g_phone_messages,
	getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "sms_max")
];

_list = _display displayCtrl 8320;
lbClear _list;

if (!(g_phone_messages isEqualTo [])) then
{
	{
		_index = _list lbAdd format["%1 - %2", [(_x select 0)] call public_fnc_phone_number_to_name, (_x select 1)];
		if ((_x select 2) isEqualTo 1) then {
			_list lbSetPicture [_index, "lyeed_IMG\data\phone\read\sms_old.paa"];
		} else {
			_list lbSetPicture [_index, "lyeed_IMG\data\phone\read\sms_new.paa"];
		};
		_list lbSetData [_index, (_x select 0)];
	} forEach (g_phone_messages);
	_list lbSetCurSel -1;

	[8325, true] call public_fnc_tabletShow;
	[8326, true] call public_fnc_tabletShow;
};
