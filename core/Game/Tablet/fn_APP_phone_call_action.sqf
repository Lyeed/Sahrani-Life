/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_number", "_transmit_time", "_handle", "_transmit_unit"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

_number = uiNamespace getVariable ["phone_call_number", ""];
if (([_number] call CBA_fnc_strLen) != 6) exitWith {
	["Le numéro doit être composé de six chiffres."] call AlysiaClient_fnc_error;
};
if (!(_number in (missionNamespace getVariable ["gServer_phone_numbers", []]))) exitWith {
	["Le numéro demandé n'est pas attribué."] call AlysiaClient_fnc_error;
};
if (_number in g_phone_blacklist) exitWith {
	["Vous ne pouvez pas appeler un numéro que vous avez blacklisté."] call AlysiaClient_fnc_error;
};
if (_number isEqualTo (player getVariable ["number", ""])) exitWith {
	["Vous ne pouvez pas vous appeler vous même."] call AlysiaClient_fnc_error;
};

_handle = ["PHONE_CALLING"] spawn AlysiaClient_fnc_tabletApp;
waitUntil {scriptDone _handle};

(_display displayCtrl 11003) ctrlSetStructuredText parseText format["<t size='3.5' align='center'>%1</t>", _number];

player setVariable ["calling", true];
player setVariable ["calling_target", objNull];
player setVariable ["calling_freq_old", ""];

_transmit_time = 0;

while {((player getVariable ["calling", false]) && (g_app isEqualTo "PHONE_CALLING"))} do
{
	if (isNull (player getVariable ["calling_target", objNull])) then
	{
		if ((_transmit_time % 5) isEqualTo 0) then
		{
			_transmit_unit = [_number] call AlysiaClient_fnc_phone_number_to_unit;
			if (!(isNull _transmit_unit)) then {
				[player] remoteExec ["AlysiaClient_fnc_phone_call_receive", _transmit_unit];
			};

			playSound "phone_tonalite";
		};
	} else {
		call TFAR_fnc_onSwTangentPressed;
		call TFAR_fnc_HideHint;
	};

	(_display displayCtrl 11004) ctrlSetStructuredText parseText format
	[
		"<t size='1.5' align='center'>%1</t>",
		[_transmit_time, "M:SS"] call CBA_fnc_formatElapsedTime
	];

	_transmit_time = _transmit_time + 1;
	uiSleep 1;
};

if ((player getVariable ["calling_freq_old", ""]) != "") then
{
	call TFAR_fnc_onSwTangentReleased;
	[(call TFAR_fnc_activeSwRadio), 1, (player getVariable ["calling_freq_old", ""])] call TFAR_fnc_SetChannelFrequency;
};

player setVariable ["calling", false];
player setVariable ["calling_target", objNull];
player setVariable ["calling_freq_old", ""];

if (!(isNull _display)) then
{
	["PHONE_CALL"] spawn AlysiaClient_fnc_tabletApp;
};
