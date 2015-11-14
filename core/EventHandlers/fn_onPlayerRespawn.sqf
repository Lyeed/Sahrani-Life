/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((player getVariable ["tf_voiceVolume", 1]) isEqualTo 0) then {player setVariable ["tf_voiceVolume", 1, true];};
if ((player getVariable ["tf_globalVolume", 1]) isEqualTo 0) then {player setVariable ["tf_globalVolume", 1];};
if (player getVariable ["surrender", false]) then {player setVariable ["surrender", false, true];};
if (player getVariable ["restrained", false]) then {player setVariable ["restrained", false, true];};

[4000] call public_fnc_handleBlood;

g_carryWeight = 0;
g_is_alive = true;

if (g_arrested) then {

} else {
	[] spawn public_fnc_loadout;

	_price = getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_price");
	if (g_atm < _price) then {
		["Vous n'avez pas assez d'argent pour payer vos frais d'hospitalisation<br/>Ces derniers on été payé par l'Etat", "buy"] call public_fnc_info;
	} else {
		[format["Vos frais d'<t color='#FE2EF7'>hospitalisation</t> s'élèvent à <t color='#8cff9b'>%1$</t>", ([_price] call public_fnc_numberText)], "buy"] call public_fnc_info;
		[false, 1, _price] call public_fnc_handleMoney;
	};

	_respawn = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_marker");
	if (playerSide isEqualTo civilian) then {
		_respawn = format["%1_%2", _respawn, g_choice];
	};
	player setPos (getMarkerPos _respawn);
};

cutText ["", "BLACK IN", 8, false];

[
	[
		[([] call public_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
		[([] call public_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
	]
] spawn BIS_fnc_typeText;

/*
_unit setVariable["Escorting", false, true];
_unit setVariable["transporting", false, true];
_unit setVariable["baillon", false, true];
_unit setVariable["bandeau", false, true];
_unit setVariable["tracked", false, true];*/