/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_display";

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

if (g_atm >= 250) then
{
	[9526, true] call AlysiaClient_fnc_tabletShow;
	[9527, true] call AlysiaClient_fnc_tabletShow;
	[9528, true] call AlysiaClient_fnc_tabletShow;
};

(_display displayCtrl 9521) ctrlSetStructuredText parseText format
[
	"<t font='EtelkaMonospacePro'>Votre message restera en ligne %1 minutes<br/>Prix par message <t color='#8cff9b'>250</t>kn</t>",
	gServer_rebootHour - round(serverTime * 60)
];
