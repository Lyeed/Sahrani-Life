/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_ctrl_player", "_ctrl_vehicle"];

disableSerialization;
_display = findDisplay 500;
if (isNull _display) exitWith {};

(_display displayCtrl 504) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_carryWeight];

_ctrl_player = _display displayCtrl 505;
lbClear _ctrl_player;
{
	_amount = [_x] call public_fnc_itemCount;
	if (_amount > 0) then
	{
		_index = _ctrl_player lbAdd format["%1x %2", if (_x isEqualTo "illegal_money") then {[_amount] call public_fnc_numberText} else {_amount}, ([_x] call public_fnc_itemGetName)];
		_ctrl_player lbSetData [_index, _x];
		_ctrl_player lbSetValue [_index, _amount];
		_ctrl_player lbSetPicture [_index, ([_x] call public_fnc_itemGetImage)];
	};
} forEach (g_inv_items);
if ((lbSize _ctrl_player) isEqualTo 0) then
{
	_ctrl_player lbAdd "Vide";
	ctrlShow[510, false];
	ctrlShow[511, false];
	ctrlShow[512, false];
	ctrlShow[513, false];
} else {
	ctrlShow[510, true];
	ctrlShow[511, true];
	ctrlShow[512, true];
	ctrlShow[513, true];
};
if (g_carryWeight isEqualTo g_maxWeight) then
{
	ctrlShow[506, false];
	ctrlShow[507, false];
	ctrlShow[508, false];
	ctrlShow[509, false];
};

if ((lbCurSel 505) isEqualTo -1) then {
	_ctrl_player lbSetCurSel 0;
};

(_display displayCtrl 502) ctrlSetStructuredText parseText format["<t align='center'>%1</t>", g_interaction_target_trunk_weight_actual];
_ctrl_vehicle = _display displayCtrl 503;
lbClear _ctrl_vehicle;
{
	_item = _x select 0;
	_amount = _x select 1;
	
	_index = _ctrl_vehicle lbAdd format["%1x %2", ([_amount] call public_fnc_numberText), ([_item] call public_fnc_itemGetName)];
	_ctrl_vehicle lbSetData [_index, _item];
	_ctrl_vehicle lbSetValue [_index, _amount];
	_ctrl_vehicle lbSetPicture [_index, ([_item] call public_fnc_itemGetImage)];
} forEach (g_interaction_target_trunk_stock);
if ((lbSize _ctrl_vehicle) isEqualTo 0) then
{
	_ctrl_vehicle lbAdd "Vide";
	ctrlShow[506, false];
	ctrlShow[507, false];
	ctrlShow[508, false];
	ctrlShow[509, false];
} else {
	ctrlShow[506, true];
	ctrlShow[507, true];
	ctrlShow[508, true];
	ctrlShow[509, true];
};
if (g_interaction_target_trunk_weight_actual isEqualTo g_interaction_target_trunk_weight_max) then
{
	ctrlShow[510, false];
	ctrlShow[511, false];
	ctrlShow[512, false];
	ctrlShow[513, false];
};

if ((lbCurSel 503) isEqualTo -1) then {
	_ctrl_vehicle lbSetCurSel 0;
};

(_display displayCtrl 517) progressSetPosition (g_interaction_target_trunk_weight_actual / g_interaction_target_trunk_weight_max);
(_display displayCtrl 519) ctrlSetStructuredText parseText format["<t align='center'>%2%1 plein</t>", "%", round((g_interaction_target_trunk_weight_actual / g_interaction_target_trunk_weight_max) * 100)];

(_display displayCtrl 518) progressSetPosition (g_carryWeight / g_maxWeight);
(_display displayCtrl 520) ctrlSetStructuredText parseText format["<t align='center'>%2%1 plein</t>", "%", round((g_carryWeight / g_maxWeight) * 100)];
