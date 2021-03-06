/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_player", "_ctrl_vehicle", "_weight", "_trunk"];

disableSerialization;
_display = findDisplay 500;
if (isNull _display) exitWith {};

(_display displayCtrl 504) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	g_carryWeight
];

(_display displayCtrl 520) ctrlSetStructuredText parseText format
[
	"<t align='center'>%2%1 plein</t>",
	"%",
	round((g_carryWeight / g_maxWeight) * 100)
];

(_display displayCtrl 518) progressSetPosition (g_carryWeight / g_maxWeight);

_ctrl_player = _display displayCtrl 505;
lbClear _ctrl_player;

{
	_amount = [_x] call AlysiaClient_fnc_itemCount;
	if (_amount > 0) then
	{
		_index = _ctrl_player lbAdd format["%1x %2", ([_amount] call AlysiaClient_fnc_numberText), ([_x] call AlysiaClient_fnc_itemGetName)];
		_ctrl_player lbSetData [_index, _x];
		_ctrl_player lbSetValue [_index, _amount];
		_ctrl_player lbSetPicture [_index, ([_x] call AlysiaClient_fnc_itemGetImage)];
	};
} forEach g_inv_items;

if ((lbSize _ctrl_player) isEqualTo 0) then {
	_ctrl_player lbAdd "Vide";
};
if ((lbCurSel _ctrl_player) isEqualTo -1) then {
	_ctrl_player lbSetCurSel 0;
} else {
	_ctrl_player lbSetCurSel (lbCurSel _ctrl_player);
};

_trunk = g_interaction_target getVariable [g_interaction_target_trunk_type, []];
_weight = [_trunk] call AlysiaClient_fnc_weightGenerate;

(_display displayCtrl 502) ctrlSetStructuredText parseText format
[
	"<t align='center'>%1</t>",
	_weight	
];

(_display displayCtrl 519) ctrlSetStructuredText parseText format
[
	"<t align='center'>%2%1 plein</t>",
	"%",
	round((_weight / g_interaction_target_trunk_weight_max) * 100)
];

(_display displayCtrl 517) progressSetPosition (_weight / g_interaction_target_trunk_weight_max);

_ctrl_vehicle = _display displayCtrl 503;
lbClear _ctrl_vehicle;

{
	_item = _x select 0;
	_amount = _x select 1;
	
	_index = _ctrl_vehicle lbAdd format["%1x %2", ([_amount] call AlysiaClient_fnc_numberText), ([_item] call AlysiaClient_fnc_itemGetName)];
	_ctrl_vehicle lbSetData [_index, _item];
	_ctrl_vehicle lbSetValue [_index, _amount];
	_ctrl_vehicle lbSetPicture [_index, ([_item] call AlysiaClient_fnc_itemGetImage)];
} forEach _trunk;

if ((lbSize _ctrl_vehicle) isEqualTo 0) then {
	_ctrl_vehicle lbAdd "Vide";
	if (g_interaction_target_trunk_delete) then {
		deleteVehicle g_interaction_target;
	};
};
if ((lbCurSel _ctrl_vehicle) isEqualTo -1) then {
	_ctrl_vehicle lbSetCurSel 0;
} else {
	_ctrl_vehicle lbSetCurSel (lbCurSel _ctrl_vehicle);
};
