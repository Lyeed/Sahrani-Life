/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_faction", "_from", "_bad"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_faction = [_this, 1, sideUnknown, [sideUnknown]] call BIS_fnc_param;

if ((_faction isEqualTo sideUnknown) || (_faction isEqualTo civilian)) exitWith {};

if (_msg isEqualTo "") exitWith {
	["Vous ne pouvez pas envoyer de message vide"] call AlysiaClient_fnc_error;
};
_bad = [_msg, "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè "] call AlysiaClient_fnc_TextAllowed;
if (!(_bad isEqualTo "")) exitWith {
	["Vous utilisez un caractère interdit dans votre message<br/>Caractères autorisés :<br/>(ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz123456789-éè)"] call AlysiaClient_fnc_error;
};
if (count(toArray(_msg)) > 200) exitWith {
	["Votre message ne doit pas dépasser 200 caractères"] call AlysiaClient_fnc_error;
};
if ((time - g_action_delay) < 2) exitWith {
	["Veuillez ralentir dans vos actions"] call AlysiaClient_fnc_error;
};

g_action_delay = time;
_from = switch (_faction) do
{
	case east: {"EAST"};
	case independent: {"GUER"};
	case west: {"WEST"};
};

[_msg, _from] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", -2];
((findDisplay 7500) displayCtrl 8393) ctrlSetText "";
playSound "message_sent";
