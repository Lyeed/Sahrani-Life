/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_msg", "_sound", "_count"];
_msg = [_this, 0, "", [""]] call BIS_fnc_param;
_sound = [_this, 1, "", [""]] call BIS_fnc_param;

if (_msg isEqualTo "") exitWith {};

15 cutRsc ["RscHudMessage", "PLAIN"];

disableSerialization;
_hud = uiNameSpace getVariable ["RscHudMessage", displayNull];
if (_msg isEqualTo (uiNamespace getVariable ["RscHudMessage_last", ""])) then {
	uiNamespace setVariable ["RscHudMessage_count", (uiNamespace getVariable ["RscHudMessage_count", 0]) + 1];
} else {
	uiNamespace setVariable ["RscHudMessage_count", 1];
	uiNamespace setVariable ["RscHudMessage_last", _msg];
};

(_hud displayCtrl 95000) ctrlSetStructuredText parseText "<t align='left'>Information</t>";
(_hud displayCtrl 95001) ctrlSetText "\lyeed_IMG\data\message_system\info.paa";
(_hud displayCtrl 95002) ctrlSetStructuredText parseText format["<t font='PuristaBold' size='0.7'>%1</t>", _msg];

_count = uiNamespace getVariable ["RscHudMessage_count", 0];
if (_count > 1) then {
	(_hud displayCtrl 95003) ctrlSetStructuredText parseText format["<t align='center' font='PuristaBold'>x%1</t>", _count];
} else {
	(_hud displayCtrl 95003) ctrlSetStructuredText parseText "";
};

if (_sound isEqualTo "") then {
	playSound "defaultNotification";
} else {
	playSound _sound;
};