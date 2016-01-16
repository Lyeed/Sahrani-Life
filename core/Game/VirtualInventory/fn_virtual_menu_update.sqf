/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_sel", "_update", "_actual", "_inv"];

disableSerialization;
_display = uinamespace getvariable ["RscDisplayInventory", displayNull];

if (isNull _display) exitWith {};

(_display displayCtrl 85000) ctrlSetStructuredText parseText format["<t align='left'>Poids</t><t align='right'>%1/%2</t>", g_carryWeight, g_maxWeight];
(_display displayCtrl 85004) ctrlSetStructuredText parseText format["<t align='left'>Porte-feuille</t><t align='right'><t color='#8cff9b'>%1</t>kn</t>", ([g_cash] call public_fnc_numberText)];
(_display displayCtrl 85005) progressSetPosition (g_carryWeight / g_maxWeight);

_inv =  uiNamespace getVariable "last_inv";
_actual = [] call public_fnc_getInv;
_update = true;

if (isNil "_inv") then {
	uiNamespace setVariable ["last_inv", _actual];
} else {
	if (_inv isEqualTo _actual) then {
		_update = false;
	} else {
		uiNamespace setVariable ["last_inv", _actual];
	};
};

if (_update) then {
	[(_display displayCtrl 85001), true, false] call public_fnc_fillUpWithinv;
};

_sel = lbCurSel 85001;
if ((_sel isEqualTo -1) || g_action_inUse) exitWith
{
	ctrlShow[85002, false];
	ctrlShow[85003, false];
};

_item = lbData[85001, _sel];
if (_item isEqualTo "") exitWith 
{
	ctrlShow[85002, false];
	ctrlShow[85003, false];
};

if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "food")) then
{
	ctrlSetText[85002, "Consommer"];
	(_display displayCtrl 85002) buttonSetAction format["['%1'] call public_fnc_eatFood;", _item];
	ctrlShow[85002, true];
} else {
	if (isClass(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "use")) then
	{
		ctrlSetText[85002, "Utiliser"];
		(_display displayCtrl 85002) buttonSetAction "[] call public_fnc_virtual_menu_action_use;";;
		ctrlShow[85002, true];
	} else {
		ctrlShow[85002, false];
	};
};

if (getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable") isEqualTo 1) then {
	ctrlShow[85003, true];
} else {
	ctrlShow[85003, false];
};
