/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_sms", "_rings_sms", "_rings_call", "_ctrl_call", "_actual_sms", "_actual_call", "_ctrl_checkbox"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_rings_sms =
[
	"message_rcv_1",
	"message_rcv_2"
];

if ((call g_donator) isEqualTo 1) then
{
	_rings_sms = _rings_sms +
	[
		"message_rcv_3",
		"message_rcv_4",
		"message_rcv_5",
		"message_rcv_6",
		"message_rcv_7",
		"message_rcv_8",
		"message_rcv_9",
		"message_rcv_10"
	];
};

_actual_sms = profileNamespace getVariable ["ALYSIA_phone_sms_ring", ""];
_ctrl_sms = _display displayCtrl 8351;
lbClear _ctrl_sms;

_ctrl_sms lbAdd "Silencieux";
if (_actual_sms isEqualTo "") then {
	_ctrl_sms lbSetCurSel 0;
};

{
	_index = _ctrl_sms lbAdd format["Alerte %1 %2", _forEachIndex];
	if (_actual_sms isEqualTo _x) then {_ctrl_sms lbSetCurSel _index};
	_ctrl_sms lbSetData [_index, _x];
} forEach _rings_sms;

_ctrl_sms ctrlSetEventHandler ["LBSelChanged", "[((_this select 0) lbData (_this select 1)), true] call AlysiaClient_fnc_phone_ring_message;"];

_rings_call =
[
	"message_rcv_1",
	"message_rcv_2"
];

if ((call g_donator) isEqualTo 1) then
{
	_rings_call = _rings_call +
	[
		"message_rcv_3",
		"message_rcv_4",
		"message_rcv_5",
		"message_rcv_6",
		"message_rcv_7",
		"message_rcv_8",
		"message_rcv_9",
		"message_rcv_10"
	];
};

_actual_call = profileNamespace getVariable ["ALYSIA_phone_call_ring", ""];
_ctrl_call = _display displayCtrl 8353;
lbClear _ctrl_call;

_ctrl_call lbAdd "Silencieux";
if (_actual_call isEqualTo "") then {
	_ctrl_call lbSetCurSel 0;
};

{
	_index = _ctrl_call lbAdd format["Sonnerie %1", _forEachIndex];
	if (_actual_call isEqualTo _x) then {_ctrl_call lbSetCurSel _index};
	_ctrl_call lbSetData [_index, _x];
} forEach _rings_call;

_ctrl_call ctrlSetEventHandler ["LBSelChanged", "[((_this select 0) lbData (_this select 1)), true] call AlysiaClient_fnc_phone_ring_call;"];

_ctrl_checkbox = _display displayCtrl 8355;
if (g_phone_annuaire) then {
	_ctrl_checkbox cbSetChecked true;
} else {
	_ctrl_checkbox cbSetChecked true;
};

_ctrl_checkbox ctrlSetEventHandler ["CheckedChanged", "[(_this select 1)] call AlysiaClient_fnc_phone_annuaire;"];
