/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_part", "_item", "_tool", "_heal", "_dmg", "_useItem", "_error", "_time"];

if (isNull g_interaction_target) exitWith {};

disableSerialization;
_display = findDisplay 2900;
if (isNull _display) exitWith {};

_sel = lbCurSel 2907;
if (_sel isEqualTo -1) exitWith {};

closeDialog 0;
_part = lbData[2907, _sel];

_tool = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "tool");
if ((_tool != "") && !(_tool in (magazines player))) exitWith {
	[format["Vous n'avez pas l'outil requis (<t color='#8cff9b'>%1</t>) pour effectuer cette réparation", getText(configFile >> "CfgMagazines" >> _tool >> "displayName")]] call public_fnc_error;
};

_item = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "item");
if ((_item isEqualTo "") || ((_item != "") || (_item in (magazines player)))) then {
	_heal = 0;
	_useItem = true;
	_time = getNumber(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "time") * 1.5;
} else {
	_heal = 0.5;
	_useItem = false;
	_time = getNumber(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "time");
};

_error = false;
_dmg = g_interaction_target getHitPointDamage _part;
if (_dmg < _heal) exitWith
{
	[
		format
		[
			"L'état actuel de <t color='#0174DF'>%1</t> est de <t color='%6'>%5</t> et ne peut être amélioré.<br/>Vous avez besoin de <t color='#ff8c8c'>%2</t>.<br/><t color='#8cff9b'>%3</t> vous permet d'effectuer des réparations jusqu'à <t color='%4'>50</t>% de <t color='#0174DF'>%1</t>",
			lbText[2907, _sel],
			getText(configFile >> "CfgMagazines" >> _item >> "displayName"),
			getText(configFile >> "CfgMagazines" >> _tool >> "displayName"),
			([50] call public_fnc_vehicleMenu_repair_getColor) select 1,
			floor((1 - _dmg) * 100),
			([floor((1 - _dmg) * 100)] call public_fnc_vehicleMenu_repair_getColor) select 1
		]
	] call public_fnc_error;
};

if (!([format["Réparation : %1", (lbText[2907, _sel])], _time, g_interaction_target, "repair", "InBaseMoves_repairVehicleKnl"] call public_fnc_showProgress)) exitWith {};

if ((_tool != "") && !(_tool in (magazines player))) exitWith {
	[format["Vous n'avez pas l'outil requis (<t color='#8cff9b'>%1</t>) pour effectuer cette réparation", getText(configFile >> "CfgMagazines" >> _tool >> "displayName")]] call public_fnc_error;
};

if ((_item != "") && _useItem) then
{
	if (_item in (magazines player)) then {
		player removeMagazine _item;
	} else {
		_error = true;
		["Vous devez garder les pièces de rechange sur vous pendant la réparation"] call public_fnc_error;
	};
};

if (!_error) then
{
	if (local g_interaction_target) then {
		g_interaction_target setHitPointDamage [_part, _heal];
	} else {
		[g_interaction_target, [_part, _heal]] remoteExecCall ["setHitPointDamage", g_interaction_target, false];
	};
};
