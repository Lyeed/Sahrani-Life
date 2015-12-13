/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_from", "_sound"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_from = [_this, 1, "", [""]] call BIS_fnc_param;

if ((_msg isEqualTo "") || (_from isEqualTo "")) exitWith {};
if (!g_connected) exitWith {};
if ((player getVariable ["number", ""]) isEqualTo "") exitWith {};
if (_from in g_phone_blacklist) exitWith {};

if ((count g_phone_messages) >= getNumber(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "sms_max")) then {
	g_phone_messages deleteAt 0;
};

g_phone_messages pushBack [_from, (format["Le %1 à %2", ([] call public_fnc_strDate), ([] call public_fnc_strTime)]), 0, _msg];

if (profileNamespace getVariable["ALYSIA_phone_SILENT", false]) then {
	playSound "message_rcv_silent";
} else {
	_sound = profileNamespace getVariable["ALYSIA_phone_recv", 1];
	if ((_sound < 1) || (_sound > 10)) then
	{
		profileNamespace setVariable["ALYSIA_phone_recv", 1];
		_sound = 1;
	};
	[player, (format["message_rcv_%1", _sound]), 20] call CBA_fnc_globalSay3d;
};