/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_part", "_health", "_part"];

if (isNull g_interaction_target) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_sel = lbCurSel 2907;
if (_sel isEqualTo -1) exitWith {};

_part = lbData[2907, _sel];
_health = lbValue[2907, _sel];
closeDialog 0;

_item = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "item");
if ((_item != "") && !(_item in (magazines player))) exitWith {};

if (!([format["Réparation : %1", _part], round(15 - (_health / 10)), g_interaction_target, "", "InBaseMoves_repairVehicleKnl"] call public_fnc_showProgress)) exitWith {};

player removeMagazine _item;
if (local g_interaction_target) then {
	g_interaction_target setHitPointDamage [_part, 0];
} else {
	[g_interaction_target, _part, 0] remoteExecCall ["setHitPointDamage", g_interaction_target, false];
};
