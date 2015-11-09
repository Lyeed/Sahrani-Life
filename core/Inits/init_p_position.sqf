/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((getNumber(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "dynamic_markers_shown")) isEqualTo 0) then
{
	{
		_x setMarkerAlphaLocal 0;
	} forEach (g_dynamic_markers);
};

if (g_arrested) then {
	[g_arrestMinuts, g_arrestReason] spawn public_fnc_putInJail;
} else {
	if (!g_is_alive || ((count g_position) != 3)) then
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
		player setPosATL g_position;
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

{
	player reveal _x;
} forEach (player nearEntities 25);
