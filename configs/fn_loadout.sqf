/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_handle", "_uniform", "_headGear", "_vest", "_backpack"];
_handle = [] spawn public_fnc_stripDownPlayer;
waitUntil {scriptDone _handle};

_uniform = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "uniform");
if (_uniform != "") then {
	player forceAddUniform _uniform;
};

_headGear = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "headgear");
if (_headGear != "") then {
	player addHeadgear _headGear;
};

_vest = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "vest");
if (_vest != "") then {
	player addVest _vest;
};

_backpack = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "backpack");
if (_backpack != "") then {
	player addVest _backpack;
};

{
	[_x, true] call public_fnc_handleItem;
} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "items"));
