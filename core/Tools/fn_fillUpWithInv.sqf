/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_completeEmpty", "_isEmpty"];
disableSerialization;

_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_completeEmpty = [_this, 1, true, [true]] call BIS_fnc_param;

if (isNull _list) exitWith {};

lbClear _list;
_isEmpty = false;

{
	private["_val"];
	_val = [_x] call public_fnc_itemCount;
	if (_val > 0) then
	{
		if (_x isEqualTo "illegal_money") then {
			_val = [_val] call public_fnc_numberText;
		};
		_list lbAdd format["%1x %2", _val, ([_x] call public_fnc_itemGetName)];
		_list lbSetData [(lbSize _list) - 1, _x];
		_list lbSetPicture [(lbSize _list) - 1, ([_x] call public_fnc_itemGetImage)];
	};
} forEach (g_inv_items);

if (_completeEmpty) then
{
	if ((lbSize _list) isEqualTo 0) then {
		_list lbAdd "Vide";
	};
	_isEmpty = true;
};

_list lbSetCurSel 0;
_isEmpty;