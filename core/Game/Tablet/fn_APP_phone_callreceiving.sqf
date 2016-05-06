/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if ((call AlysiaClient_fnc_hasPhone) && !(missionNamespace getVariable ['calling', false]) && ((missionNamespace getVariable ['calling_number', '']) != '')) then
{
	((uiNamespace getVariable ["tablet", displayNull]) displayCtrl 14006) ctrlSetStructuredText parseText format
	[
		"<t size='3.5' align='center'>%1</t>",
		if (missionNamespace getVariable ["calling_hide", false]) then {"Inconnu"} else {(missionNamespace getVariable ["calling_number", ""])}
	];
} else {
	['MAIN'] spawn AlysiaClient_fnc_tabletApp;
};
