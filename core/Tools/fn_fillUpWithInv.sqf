/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_completeEmpty", "_isEmpty", "_select"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_completeEmpty = [_this, 1, true, [true]] call BIS_fnc_param;
_select = [_this, 2, true, [true]] call BIS_fnc_param;

if (isNull _list) exitWith {};

lbClear _list;
_isEmpty = false;

{
	private["_val"];
	_val = [_x] call AlysiaClient_fnc_itemCount;
	if (_val > 0) then
	{
		_index = _list lbAdd format["%1x %2", ([_val] call AlysiaClient_fnc_numberText), ([_x] call AlysiaClient_fnc_itemGetName)];
		_list lbSetData [_index, _x];
		_list lbSetPicture [_index, ([_x] call AlysiaClient_fnc_itemGetImage)];
		_list lbSetTooltip [_index, ([_x] call AlysiaClient_fnc_itemGetName)];
	};
} forEach g_inv_items;

if ((lbSize _list) isEqualTo 0) then
{
	_isEmpty = true;
	if (_completeEmpty) then {
		_list lbAdd "Vide";
	};
};

if (_select) then
{
	if ((lbCurSel _list) isEqualTo -1) then {
		_list lbSetCurSel 0;
	} else {
		_list lbSetCurSel (lbCurSel _list);
	};
};

_isEmpty;
