/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

[] call AlysiaClient_fnc_stripDownPlayer;

if ((player getVariable ["arrested", false]) && !(isNull g_arrest_Prison)) then {
	player forceAddUniform getText(missionConfigFile >> "ALYSIA_PRISONS" >> typeof(g_arrest_Prison) >> "uniform");
} else {
	_uniform = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "uniform");
	if (_uniform != "") then {player forceAddUniform _uniform};

	_headGear = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "headgear");
	if (_headGear != "") then {player addHeadgear _headGear};

	_vest = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "vest");
	if (_vest != "") then {player addVest _vest};

	_backpack = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "backpack");
	if (_backpack != "") then {player addVest _backpack};

	{
		[_x, true, true] call AlysiaClient_fnc_handleItem;
	} forEach (getArray(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "Loadout" >> "items"));	
};
