/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_part", "_part", "_item", "_tool"];

if (isNull g_interaction_target) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_sel = lbCurSel 2907;
if (_sel isEqualTo -1) exitWith {};

closeDialog 0;
_part = lbData[2907, _sel];

_item = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "item");
if ((_item != "") && !(_item in (magazines player))) exitWith {
	[format["Vous n'avez pas la pièce de rechange requise (%1)", getText(configFile >> "CfgMagazines" >> _item >> "displayName")]] call public_fnc_error;
};

_tool = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "tool");
if ((_tool != "") && !(_tool in (magazines player))) exitWith {
	[format["Vous n'avez pas l'outil requis (%1)", getText(configFile >> "CfgMagazines" >> _tool >> "displayName")]] call public_fnc_error;
};

if (!([format["Réparation : %1", (lbText[2907, _sel])], round(15 - (lbValue[2907, _sel] / 10)), g_interaction_target, "", "InBaseMoves_repairVehicleKnl"] call public_fnc_showProgress)) exitWith {};

if (_item != "") then {
	player removeMagazine _item;
};

if (local g_interaction_target) then {
	g_interaction_target setHitPointDamage [_part, 0];
} else {
	[g_interaction_target, [_part, 0]] remoteExecCall ["setHitPointDamage", g_interaction_target, false];
};
