/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_sel", "_display", "_health", "_color", "_tool", "_part", "_item"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_sel isEqualTo -1) || (isNull _list) || ((_list lbText _sel) isEqualTo "Aucune")) exitWith
{
	ctrlShow[2911, false];
	ctrlShow[2912, false];
	ctrlShow[2913, false];
	ctrlShow[2914, false];
	ctrlShow[2915, false];
	(_display displayCtrl 2909) ctrlSetStructuredText parseText "<t align='center'>Non défini</t>";
};

_display = findDisplay 2900;
if (isNull _display) exitWith {};

_health = _list lbValue _sel;
_color = switch (true) do
{
	case (_health >= 0 && _health < 25): {"#FF5722"};
	case (_health >= 25 && _health < 50): {"#FFC107"};
	case (_health >= 50 && _health < 75): {"#FFEB3B"};
	case (_health >= 75 && _health < 100): {"#CDDC39"};
	case (_health isEqualTo 100): {"#8BC34A"};
};

_part = _list lbData _sel;
_item = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "item");
_tool = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "tool");
(_display displayCtrl 2909) ctrlSetStructuredText parseText format
[
		"<t align='left'>Etat</t><t align='right' color='%5'>%1%2</t><br/>"
    +	"<t align='left'>Outil</t><t align='right'>%3</t><br/>"
    +	"<t align='left'>Pièce</t><t align='right'>%4</t>",
    _health,
    "%",
	if (_item isEqualTo "") then {"Aucune"} else {getText(configFile >> "CfgMagazines" >> _item >> "displayName")},
	if (_tool isEqualTo "") then {"Aucun"} else {getText(configFile >> "CfgMagazines" >> _tool >> "displayName")},
	_color
];

if ((_health < 100) && ((_tool isEqualTo "") || (_tool in (magazines player))) && ((_item isEqualTo "") || (_item in (magazines player)))) then {
	ctrlShow[2911, true];
	ctrlShow[2912, true];
	ctrlShow[2913, true];
	ctrlShow[2914, true];
	ctrlShow[2915, true];
} else {
	ctrlShow[2911, false];
	ctrlShow[2912, false];
	ctrlShow[2913, false];
	ctrlShow[2914, false];
	ctrlShow[2915, false];
};
