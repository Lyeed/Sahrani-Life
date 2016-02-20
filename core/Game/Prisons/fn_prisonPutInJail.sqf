/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Devilz80
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private ["_prison", "_infos"];
_prison = [_this, 0, "", [""]] call BIS_fnc_param;
_infos = [_this, 1, [], [[]]] call BIS_fnc_param;

if (_prison isEqualTo "") exitWith {};

player setVariable ["arrested", true, true];

g_arrest_Escape = false;
g_arrest_Prison = _prison;
g_arrest_Cellule = _infos select 0;
g_arrest_Time = _infos select 1;
g_arrest_Caution = _infos select 2;
g_arrest_Reason = _infos select 3;
g_arrest_Gear = [g_cash, ([player] call AlysiaClient_fnc_getGear), ([player] call AlysiaClient_fnc_getInv)];

_handle = [] spawn AlysiaClient_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

player setDir getNumber(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "cells" >> g_arrest_Cellule >> "dir");
player setPosATL ((call compile g_arrest_Prison) modelToWorld getArray(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "cells" >> g_arrest_Cellule >> "pos"));
player forceAddUniform getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "uniform");

if ([] spawn AlysiaClient_fnc_prisonTimer) then
{
	[
		[
			["En cavale", "<t align = 'center' size = '1'>%1</t><br/>"], ["", ""],
			getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
		]
	] spawn BIS_fnc_typeText;

	{
		[
			format
			[
				"URGENCE: Le prisonnier %1 s'est évadé de la %2.",
				player getVariable ["realname", ""],
				getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
			], getText(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "name")
		] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", [_x] call AlysiaClient_fnc_strToSide];
	} forEach getArray(missionConfigFile >> "ALYSIA_PRISONS" >> g_arrest_Prison >> "sides");
} else {
	[] spawn AlysiaClient_fnc_prisonRelease;
};
