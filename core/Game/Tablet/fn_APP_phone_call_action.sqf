/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_number", "_transmit_time", "_handle", "_transmit_statut", "_transmit_unit"];

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

player setVariable ["calling", true];

_transmit_time = 0;
_transmit_statut = false;
_transmit_unit = objNull;

_handle = ["PHONE_CALLING"] spawn AlysiaClient_fnc_tabletApp;
waitUntil {scriptDone _handle};

(_display displayCtrl 11003) ctrlSetStructuredText parseText format["<t size='3.5' align='center'>%1</t>", _number];

while {(player getVariable ["calling", false])} do
{
	if ((_transmit_time % 5) isEqualTo 0) then
	{
		if (!_transmit_statut) then
		{
			_transmit_unit = [_number] call AlysiaClient_fnc_phone_number_to_unit;
			if (!(isNull _transmit_unit)) then
			{
				[player] remoteExec ["AlysiaClient_fnc_phone_call_receive", _transmit_unit];
				_transmit_statut = true;
			};
		};

		playSound "phone_tonalite";
	};

	(_display displayCtrl 11004) ctrlSetStructuredText parseText format["<t size='1.5' align='center'>%1</t>", [_transmit_time, "M:SS"] call CBA_fnc_formatElapsedTime];
	_transmit_time = _transmit_time + 1;
	uiSleep 1;
};

["PHONE_CALL"] spawn AlysiaClient_fnc_tabletApp;
