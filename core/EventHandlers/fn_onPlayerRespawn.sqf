/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_position", "_config", "_respawn"];

if ((player getVariable ["tf_voiceVolume", 1]) isEqualTo 0) then {player setVariable ["tf_voiceVolume", 1, true]};
if ((player getVariable ["tf_globalVolume", 1]) isEqualTo 0) then {player setVariable ["tf_globalVolume", 1]};
if (player getVariable ["surrender", false]) then {player setVariable ["surrender", false, true]};
if (player getVariable ["restrained", false]) then {player setVariable ["restrained", false, true]};
if (!(isNull (player getVariable ["escorting", objNull]))) then {player setVariable ["escorting", objNull, true]};
if (!(isNull (player getVariable ["escorted", objNull]))) then {player setVariable ["escorted", objNull, true]};
if (player getVariable ["bullet_check", false]) then {player setVariable ["bullet_check", false, true]};
if (player getVariable ["bed_awake", false]) then {player setVariable ["bed_awake", false, true]};
if (player getVariable ["is_coma", false]) then {player setVariable ["is_coma", false, true]};
if (player getVariable ["medic_request", false]) then {player setVariable ["medic_request", false, true]};
if (player getVariable ["heart_attack", false]) then {player setVariable ["heart_attack", false, true]};

[4000] call AlysiaClient_fnc_handleBlood;
[] call AlysiaClient_fnc_init_actions;

g_carryWeight = 0;
g_is_alive = true;
resetCamShake;

[] spawn AlysiaClient_fnc_init_loadout;

if ((player getVariable ["arrested", false]) && !(isNull g_arrest_Prison) && !(g_arrest_Cellule isEqualTo "")) then
{
	_config_cell = missionConfigFile >> "ALYSIA_PRISONS" >> typeof(g_arrest_Prison) >> "cells" >> g_arrest_Cellule;
	player setPos (g_arrest_Prison modelToWorld getArray(_config_cell >> "pos"));
	player setDir getNumber(_config_cell >> "dir");
} else {
	_config = missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn";

	_price = getNumber(_config >> "price");
	if (_price > 0) then
	{
		if (g_atm < _price) then {
			["Vous n'avez pas assez d'argent pour payer vos frais d'hospitalisation<br/>Ces derniers on été payé par l'Etat", "buy"] call AlysiaClient_fnc_info;
		} else {
			[format["Vos frais d'<t color='#FE2EF7'>hospitalisation</t> s'élèvent à <t color='#8cff9b'>%1kn</t>.", ([_price] call AlysiaClient_fnc_numberText)], "buy"] call AlysiaClient_fnc_info;
			[false, _price, "Soins hôpital"] call AlysiaClient_fnc_handleATM;
		};
	};

	if (g_coma_suicide) then
	{
		_percent = getNumber(_config >> "suicide");
		if (_percente > 0) then
		{
			[false, round(g_atm * _percent), "Suicide"] call AlysiaClient_fnc_handleATM;
		};
	};

	{
		if (
				(isClass(missionConfigFile >> "ALYSIA_HOUSES" >> typeof(_x) >> "house")) && 
				(((_x getVariable ["house_owner", ["", ""]]) select 0) isEqualTo (getPlayerUID player))
			) exitWith {_position = getPosATL _x};
	} forEach g_houses;
	if (isNil "_position") then
	{
		_respawn = getText(_config >> "marker");
		if (playerSide isEqualTo civilian) then {_respawn = format["%1_%2", _respawn, g_choice]};
		player setPos (getMarkerPos _respawn);
	} else {
		player setPosATL _position;
	};
};

cutText ["", "BLACK IN", 8, false];

[
	[
		[([] call AlysiaClient_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
		[([] call AlysiaClient_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
	]
] spawn BIS_fnc_typeText;
