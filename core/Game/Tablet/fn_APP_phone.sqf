/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (((player getVariable ["number", ""]) isEqualTo "") || (g_phone_forfait isEqualTo "none") || (g_phone_forfait isEqualTo "")) then {
	["store_forfait"] spawn public_fnc_tabletApp;
} else {
	disableSerialization;
	_display = findDisplay 7500;
	(_display displayCtrl 8501) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (player getVariable ["number", ""])];
	(_display displayCtrl 8504) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", getText(missionConfigFile >> "ALYSIA_FORFAITS" >> g_phone_forfait >> "name")];

	if (playerSide isEqualTo civilian) then
	{
		[[8527, 8529], false] call public_fnc_tabletShow;
	} else {
		(_display displayCtrl 8529) ctrlSetStructuredText parseText format["<t align='center' font='PuristaSemiBold' size='0.7'>%1</t>", getText(missionConfigFile >> "ALYSIA_FACTION" >> str(playerSide) >> "name")];
		ctrlSetText[8527, getText(missionConfigFile >> "ALYSIA_FACTION" >> str(playerSide) >> "icon")];
	};
};