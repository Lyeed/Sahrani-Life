/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_dialog"];
disableSerialization;

_dialog = uiNamespace getVariable["tablet", displayNull];

if (isNull _dialog) exitWith {};

(_dialog displayCtrl 8000) ctrlSetStructuredText parseText format["<t align='center'>%1/%2</t>", g_carryWeight, g_maxWeight];
[(_dialog displayCtrl 8001)] call public_fnc_fillUpWithinv;