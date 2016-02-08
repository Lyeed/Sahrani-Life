/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_list", "_item", "_display", "_button_2", "_button_1"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

_display = uinamespace getvariable ["RscDisplayInventory", displayNull];
if (isNull _display) exitWith {};

if (_sel isEqualTo -1) exitWith
{
	ctrlShow[85003, false];
	ctrlShow[85002, false];
};

_item = _list lbData _sel;
if (_item isEqualTo "") exitWith
{
	ctrlShow[85003, false];
	ctrlShow[85002, false];
};

_button_1 = _display displayCtrl 85002;
if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food")) then
{
	_button_1 ctrlSetText "Consommer";
	_button_1 buttonSetAction format["['%1'] call AlysiaClient_fnc_eatFood;", _item];
	_button_1 ctrlShow true;
} else {
	if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use")) then
	{
		_button_1 ctrlSetText "Utiliser";
		_button_1 buttonSetAction format["['%1'] call AlysiaClient_fnc_useItem;", _item];
		_button_1 ctrlShow true;
	} else {
		_button_1 ctrlShow false;
	};
};

_button_2 = _display displayCtrl 85003;
if (getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable") isEqualTo 1) then
{
	_button_2 ctrlSetText "Supprimer";
	_button_2 buttonSetAction format["['%1'] call AlysiaClient_fnc_removeItem;", _item];
	_button_2 ctrlShow true;
} else {
	_button_2 ctrlShow false;
};
