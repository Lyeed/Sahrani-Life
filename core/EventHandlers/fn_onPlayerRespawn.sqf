
/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["tf_voiceVolume", 1]) isEqualTo 0) then {player setVariable ["tf_voiceVolume", 1, true]};
if ((player getVariable ["tf_globalVolume", 1]) isEqualTo 0) then {player setVariable ["tf_globalVolume", 1]};
if (player getVariable ["surrender", false]) then {player setVariable ["surrender", false, true]};
if (player getVariable ["restrained", false]) then {player setVariable ["restrained", false, true]};
if (!(isNull (player getVariable ["escorting", objNull]))) then {player setVariable ["escorting", objNull, true]};
if (!(isNull (player getVariable ["escorted", objNull]))) then {player setVariable ["escorted", objNull, true]};

[4000] call AlysiaClient_fnc_handleBlood;
[] call AlysiaClient_fnc_init_actions;

g_carryWeight = 0;
g_is_alive = true;

if (player getVariable ["arrested", false]) then {

} else {

	[] spawn AlysiaClient_fnc_init_loadout;

	_price = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_price");
	if (_price > 0) then
	{
		if (g_atm < _price) then {
			["Vous n'avez pas assez d'argent pour payer vos frais d'hospitalisation<br/>Ces derniers on été payé par l'Etat", "buy"] call AlysiaClient_fnc_info;
		} else {
			[format["Vos frais d'<t color='#FE2EF7'>hospitalisation</t> s'élèvent à <t color='#8cff9b'>%1kn</t>", ([_price] call AlysiaClient_fnc_numberText)], "buy"] call AlysiaClient_fnc_info;
			[false, _price, "Soins hôpital"] call AlysiaClient_fnc_handleATM;
		};
	};

	private "_position";

	{
		if ((isClass(missionConfigFile >> "ALYSIA_HOUSES" >> typeof(_x) >> "house")) && (((_x getVariable ["house_owner", ["", ""]]) select 0) isEqualTo (getPlayerUID player))) exitWith {_position = getPos _x};
	} forEach g_houses;
	if (isNil "_position") then
	{
		_respawn = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_marker");
		if (playerSide isEqualTo civilian) then {_respawn = format["%1_%2", _respawn, g_choice]};
		_position = getMarkerPos _respawn;
	};

	player setPos _position;
};

cutText ["", "BLACK IN", 8, false];

[
	[
		[([] call AlysiaClient_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
		[([] call AlysiaClient_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
	]
] spawn BIS_fnc_typeText;
