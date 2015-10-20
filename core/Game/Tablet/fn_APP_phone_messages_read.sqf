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
		private["_message", "_from", "_index"];
		_message = _x;
		_from = _message select 0;
		if (_from in ["GUER", "WEST", "EAST"]) then {
			_from = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> _from >> "name");
		} else {
			{
				if ((_x select 1) isEqualTo _from) exitWith {
					_from = _x select 0;
				};
			} forEach (g_phone_contacts);		
		};

		_index = _list lbAdd format["%1 - %2", _from, (_message select 1)];
		if ((_message select 2) isEqualTo 1) then {
			_list lbSetPicture [_index, "\lyeed\images\phone_messages_read"];
		} else {
			_list lbSetPicture [_index, "\lyeed\images\phone_messages_notread"];
		};
		_list lbSetData [_index, (_message select 0)];
	} forEach (g_phone_messages);
	_list lbSetCurSel -1;

	[8325, true] call public_fnc_tabletShow;
	[8326, true] call public_fnc_tabletShow;
};