/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_sms", "_ctrl_call", "_actual_sms", "_actual_call", "_ctrl_checkbox"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_actual_sms = profileNamespace getVariable ["ALYSIA_phone_sms_ring", ""];
_ctrl_sms = _display displayCtrl 8351;
lbClear _ctrl_sms;

_ctrl_sms lbAdd "Silencieux";
if (_actual_sms isEqualTo "") then {_ctrl_sms lbSetCurSel 0};
_ctrl_sms lbSetPicture [0, "lyeed_IMG\data\phone\settings\sound.paa"];

{
	_index = _ctrl_sms lbAdd getText(_x >> "name");
	if (_actual_sms isEqualTo (configName _x)) then {_ctrl_sms lbSetCurSel _index};
	_ctrl_sms lbSetPicture [_index, "lyeed_IMG\data\phone\settings\sound.paa"];
	_ctrl_sms lbSetData [_index, (configName _x)];
} forEach ("getNumber(_x >> 'donator') <= (call g_donator)" configClasses (missionConfigFile >> "ALYSIA_PHONE" >> "SMS" >> "sounds"));

lbSort [_ctrl_sms, "DESC"];
_ctrl_sms ctrlSetEventHandler ["LBSelChanged", "[((_this select 0) lbData (_this select 1)), true] call AlysiaClient_fnc_phone_ring_message;"];

_actual_call = profileNamespace getVariable ["ALYSIA_phone_call_ring", ""];
_ctrl_call = _display displayCtrl 8353;
lbClear _ctrl_call;

_ctrl_call lbAdd "Silencieux";
if (_actual_call isEqualTo "") then {_ctrl_call lbSetCurSel 0};
_ctrl_call lbSetPicture [0, "lyeed_IMG\data\phone\settings\sound.paa"];

{
	_index = _ctrl_call lbAdd getText(_x >> "name");
	if (_actual_call isEqualTo (configName _x)) then {_ctrl_call lbSetCurSel _index};
	_ctrl_call lbSetPicture [_index, "lyeed_IMG\data\phone\settings\sound.paa"];
	_ctrl_call lbSetData [_index, (configName _x)];
} forEach ("getNumber(_x >> 'donator') <= (call g_donator)" configClasses (missionConfigFile >> "ALYSIA_PHONE" >> "CALL" >> "sounds"));

lbSort [_ctrl_call, "DESC"];
_ctrl_call ctrlSetEventHandler ["LBSelChanged", "[((_this select 0) lbData (_this select 1)), true] call AlysiaClient_fnc_phone_ring_call;"];

_ctrl_checkbox = _display displayCtrl 8355;
if (g_phone_annuaire) then {
	_ctrl_checkbox cbSetChecked true;
} else {
	_ctrl_checkbox cbSetChecked false;
};

_ctrl_checkbox ctrlSetEventHandler ["CheckedChanged", "[(_this select 1)] call AlysiaClient_fnc_phone_annuaire;"];
