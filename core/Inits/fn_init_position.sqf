/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_position"];
_position = [_this, 0, [], [[]]] call BIS_fnc_param;

if (player getVariable ["arrested", false]) then {

} else {
	if (!g_is_alive || ((count _position) != 3)) then
	{
		private["_pos", "_randPos"];
		if (playerSide isEqualTo civilian) then {
			_pos = getMarkerPos (format["civ_spawn_%1", g_choice]);
		} else {
			_pos = getMarkerPos getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "respawn_marker");
		};
		_randPos = [_pos, 6] call CBA_fnc_randPos;
		player setPosATL [(_randPos select 0), (_randPos select 1), (_pos select 2)];
	} else {
		if (surfaceIsWater _position) then {
			player setPosASL (ATLToASL _position);
		} else {
			player setPosATL _position;
		};
	};
};

cutText ["", "BLACK IN", 6, false];

[
	[
		["Archipel de Sibranak", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
		[([] call public_fnc_strDate), "<t align = 'center' size = '0.7'>%1</t><br/>"], ["", ""],
		[([] call public_fnc_strTime), "<t align = 'center' size = '0.7'>%1</t>"], ["", ""], ["", ""]
	]
] spawn BIS_fnc_typeText;

player setVariable ["tf_globalVolume", 1];
player setVariable ["realname", profileName, true];
[] spawn public_fnc_hudSetup;

g_connected = true;
g_is_alive = true;
player allowDamage true;
