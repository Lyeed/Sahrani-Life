/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];

disableSerialization;
_display = uiNamespace getVariable ["tablet", displayNull];
if (isNull _display) exitWith {};

(_display displayCtrl 7905) ctrlSetStructuredText parseText format["<t align='center'>%1", gServer_rebootHour_txt];

while {((ctrlVisible 7903) && !(isNull _display))} do
{
	(_display displayCtrl 7901) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", [serverTime, "H:MM:SS"] call CBA_fnc_formatElapsedTime];
	(_display displayCtrl 7903) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", [(gServer_rebootHour * 60) - serverTime, "H:MM:SS"] call CBA_fnc_formatElapsedTime];
	(_display displayCtrl 7907) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", [time, "H:MM:SS"] call CBA_fnc_formatElapsedTime];
	(_display displayCtrl 7909) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", count(allPlayers)];
	sleep 0.5;
};
