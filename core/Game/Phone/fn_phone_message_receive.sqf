/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_from", "_hide"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_from = [_this, 1, "", [""]] call BIS_fnc_param;
_hide = [_this, 2, false, [false]] call BIS_fnc_param;

if ((_msg isEqualTo "") || (_from isEqualTo "")) exitWith {};
if (!g_connected) exitWith {};
if (((player getVariable ["number", ""])) isEqualTo "") exitWith {};
if (_from in g_phone_blacklist) exitWith {};

if ((count g_phone_messages) >= getNumber(missionConfigFile >> "ALYSIA_PHONE" >> "FORFAITS" >> g_phone_forfait >> "sms_max")) then {
	g_phone_messages deleteAt 0;
};

if (_hide) then {
	_from = "Numéro masqué";
};

g_phone_messages pushBack [_from, (format["Le %1 à %2", ([] call AlysiaClient_fnc_strDate), ([] call AlysiaClient_fnc_strTime)]), 0, _msg];
if (alive player) then
{
	if (profileNamespace getVariable ["ALYSIA_phone_SILENT", false]) then {
		playSound "message_rcv_silent";
	} else {
		[player, ([] call AlysiaClient_fnc_phone_get_ring), 20] call CBA_fnc_globalSay3d;
	};
};
