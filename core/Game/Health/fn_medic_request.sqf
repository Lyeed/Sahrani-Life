/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!(player getVariable ["medic_request", false])) then
{
	ctrlShow[356, false];
	ctrlShow[357, false];
	player setVariable ["medic_request", true, true];
	[format["Nouvelle demande de soin en <t color='#01DF01'>%1</t>.", (mapGridPosition player)], "CENTRAL", false] remoteExecCall ["AlysiaClient_fnc_phone_message_receive", independent];
};
