/*
	ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_item"];

if (isNull g_interaction_target) exitWith {closeDialog 0};

disableSerialization;
_display = findDisplay 91000;
if (isNull _display) exitWith {};

_item = lbData[91002, (lbCurSel 91002)];
if (_item isEqualTo "") exitWith {};

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then {
	[false, g_interaction_require, _item, 1] call AlysiaClient_fnc_handleTrunk;
};

[] call AlysiaClient_fnc_company_construction_update;
