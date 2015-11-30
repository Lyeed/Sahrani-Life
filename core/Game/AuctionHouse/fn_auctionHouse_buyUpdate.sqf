/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel"];
_sel = [_this, 0, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith {};

disableSerialization;
_display = findDisplay 45600;
if (isNull _display) exitWith {};
	
_list = _display displayCtrl 45602;
lbClear _list;

_array = switch (_sel) do
{
	case 0: {g_AH_stock_virtual};
	case 1: {g_AH_stock_arma};
	case 2: {g_AH_stock_vehicles};
};

{
	_data = switch (_sel) do
	{
		case 0: {[getText(missionConfigFile >> "ALYSIA_ITEMS" >> (_x select 0) >> "name"), getText(missionConfigFile >> "ALYSIA_ITEMS" >> (_x select 0) >> "image")]};
		case 1: {[([_x select 0] call public_fnc_fetchCfgDetails) select 1, ([_x select 0] call public_fnc_fetchCfgDetails) select 2]};
		case 2: {[getText(configFile >> "CfgVehicles" >> (_x select 0) >> "displayName"), getText(configFile >> "CfgVehicles" >> (_x select 0) >> "picture")]};
	};

	_index = _list lbAdd format["%1 %2", (_data select 0), if ((getPlayerUID player) isEqualTo (_x select 2)) then {"(Vous)"} else {""}];
	_list lbSetPicture [_index, (_data select 1)];
	_list lbSetValue [_index, (_x select 1)];
	_list lbSetData [_index, (_x select 2)];
} forEach _array;

if ((lbSize _list) isEqualTo 0) then
{
	_control lbAdd "Aucune vente";
	ctrlShow [45603, false];
	ctrlShow [45604, false];
	ctrlShow [45605, false];
	ctrlShow [45606, false];
	ctrlShow [45607, false];
	ctrlShow [45608, false];
} else {
	ctrlShow [45603, true];
	ctrlShow [45604, true];
	ctrlShow [45605, true];
	ctrlShow [45606, true];
	ctrlShow [45607, true];
	ctrlShow [45608, true];	
};

_control lbSetCurSel 0;
