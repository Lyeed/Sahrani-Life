/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_index", "_display", "_health", "_color", "_tool", "_part", "_item"];
disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_index = [_this, 1, -1, [-1]] call BIS_fnc_param;

if ((_index isEqualTo -1) || (isNull _list) || ((_list lbText _index) isEqualTo "Aucune")) exitWith
{
	ctrlShow[2911, false];
	ctrlShow[2912, false];
	ctrlShow[2913, false];
	ctrlShow[2902, false];
	ctrlShow[2914, false];
	ctrlShow[2903, false];
	ctrlShow[2905, false];
	ctrlShow[2906, false];
	ctrlShow[2915, false];
	ctrlShow[2907, false];
	ctrlShow[2916, false];
	ctrlShow[2908, false];
};

_display = findDisplay 2900;
if (isNull _display) exitWith {};

(_display displayCtrl 2902) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", (_list lbText _index)];

_part = _list lbData _index;

if (isClass(missionConfigFile >> "ALYSIA_REPAIR" >> _part)) then
{
	_item = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "item");
	if (_item isEqualTo "") then {
		(_display displayCtrl 2908) ctrlSetStructuredText parseText "<t align='center'>Aucune</t>";
	} else {
		(_display displayCtrl 2908) ctrlSetStructuredText parseText format
		[
			"<t align='center'>%1</t>",
			getText(configFile >> "CfgMagazines" >> _item >> "displayName")
		];
	};

	_tool = getText(missionConfigFile >> "ALYSIA_REPAIR" >> _part >> "tool");
	if (_tool isEqualTo "") then {
		(_display displayCtrl 2907) ctrlSetStructuredText parseText "<t align='center'>Aucun</t>";
	} else {
		(_display displayCtrl 2907) ctrlSetStructuredText parseText format
		[
			"<t align='center'>%1</t>",
			getText(configFile >> "CfgMagazines" >> _tool >> "displayName")
		];
	};
} else {
	diag_log format["[ALYSIA:ERROR] Part [%1] undefined in Config", _part];
	(_display displayCtrl 0) ctrlSetStructuredText parseText "<t align='center'>Inconnu</t>";
	(_display displayCtrl 0) ctrlSetStructuredText parseText "<t align='center'>Inconnu</t>";
	_item = "";
	_tool = "";
};

_health = _list lbValue _index;
_color = switch (true) do
{
	case (_health >= 0 && _health < 25): {"FF5722"};
	case (_health >= 25 && _health < 50): {"FFC107"};
	case (_health >= 50 && _health < 75): {"FFEB3B"};
	case (_health >= 75 && _health < 100): {"CDDC39"};
	case (_health == 100): {"8BC34A"};
};

(_display displayCtrl 2903) ctrlSetStructuredText parseText format["<t align='center'><t color='#%2'>%1</t>%3</t>", _health, _color, "%"];

if ((_health < 100) && ((_tool isEqualTo "") || (_tool in (magazines player))) && ((_item isEqualTo "") || (_item in (magazines player)))) then
{
	ctrlSetText[2905, "\lyeed_IMG\data\vehicle\repair\repair_action.paa"];
	ctrlShow[2906, true];
} else {
	ctrlSetText[2905, "\lyeed_IMG\data\vehicle\repair\repair_action_disable.paa"];	
	ctrlShow[2906, false];
};

ctrlShow[2911, true];
ctrlShow[2912, true];
ctrlShow[2913, true];
ctrlShow[2902, true];
ctrlShow[2914, true];
ctrlShow[2903, true];
ctrlShow[2905, true];
ctrlShow[2915, true];
ctrlShow[2907, true];
ctrlShow[2916, true];
ctrlShow[2908, true];
