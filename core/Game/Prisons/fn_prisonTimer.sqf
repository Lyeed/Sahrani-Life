/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

private ["_prison"];
_prison = call compile g_arrest_prison;

if (g_arrest_Time isEqualTo 0) exitWith {};
if (!(player getVariable ["arrested", false])) exitWith {};

while {g_arrest_Time >= 1} do
{
	if (((getposATL player) distance (getPosATL _prison)) < (getNumber (missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "escape_distance"))) then {
		g_arrest_Time = g_arrest_Time - 1;
		sleep 1;
	} else {
		g_arrest_Time = -1;
		g_arrest_Escape = true;
		player setVariable ["arrested", false, true];
		[
			[
				["En cavale", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
				getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
			]
		] spawn BIS_fnc_typeText;
		[
			format
			[
				"URGENCE: Le prisonnier %1 s'est évadé de la %2.",
				player getVariable ["realname", ""],
				getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
			], getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
		] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", [getArray(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "side") select 0] call AlysiaClient_fnc_strToSide];
	};
};

if (!(g_arrest_Escape)) then {
	[] spawn AlysiaClient_fnc_prisonRelease;
};