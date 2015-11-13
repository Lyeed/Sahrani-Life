/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display"];

disableSerialization;
_display = uinamespace getvariable ["RscDisplayInventory", displayNull];

if (isNull _display) exitWith {};

(_display displayCtrl 85000) ctrlSetStructuredText parseText format["<t align='left'>Poids</t><t align='right'>%1/%2</t>", g_carryWeight, g_maxWeight];
(_display displayCtrl 85004) ctrlSetStructuredText parseText format["<t align='left'>Porte-feuille</t><t align='right'><t color='#8cff9b'>%1</t>$</t>", ([g_cash] call public_fnc_numberText)];
(_display displayCtrl 85005) progressSetPosition (g_carryWeight / g_maxWeight);
[(_display displayCtrl 85001)] call public_fnc_fillUpWithinv;
