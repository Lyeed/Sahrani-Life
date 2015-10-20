/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_part", "_health"];

if (isNull g_interaction_target) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_sel = lbCurSel 2901;
if (_sel isEqualTo -1) exitWith {};

_part = lbData[2901, _sel];
_health = lbValue[2901, _sel];
closeDialog 0;

if (!([format["Réparation : %1", _part], round(15 - (_health / 10)), g_interaction_target, "", "InBaseMoves_repairVehicleKnl"] call public_fnc_showProgress)) exitWith {};

if (local g_interaction_target) then {
	g_interaction_target setHitPointDamage [_part, 0];
} else {
	[g_interaction_target, 0] remoteExecCall ["setHitPointDamage", g_interaction_target, false];
};