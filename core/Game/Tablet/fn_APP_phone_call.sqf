/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list"];

if (missionNamespace getVariable ["calling", false]) exitWith {
	["PHONE_CALLING"] spawn AlysiaClient_fnc_tabletApp
};
if ((missionNamespace getVariable ["calling_number", ""]) != "") exitWith {
	['PHONE_CALLRECEIVING'] spawn AlysiaClient_fnc_tabletApp;
};
	
disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];

uiNamespace setVariable ["phone_call_number", ""];
(_display displayCtrl 8920) ctrlSetStructuredText parseText "";

_list = _display displayCtrl 8927;
lbClear _list;

{
	_index = _list lbAdd (_x select 1);
	if ((_x select 0) isEqualTo 0) then {
		_list lbSetPicture [_index, "lyeed_IMG\data\phone\call\call_in.paa"];
	} else {
		_list lbSetPicture [_index, "lyeed_IMG\data\phone\call\call_out.paa"];
	};
	if (_x select 2) then {
		_list lbSetPictureColor [_index, [1, 1, 1, 1]];
	} else {
		_list lbSetPictureColor [_index, [0.839, 0.067, 0.067, 1]];
	};
} forEach g_phone_call_history;
