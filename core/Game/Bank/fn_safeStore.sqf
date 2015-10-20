#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	Author: Bryan "Tonic" Boardwine
*/
private["_ctrl", "_num", "_safeInfo"];
disableSerialization;
_ctrl = ctrlSelData(3503);
_num = ctrlText 3506;

if (!([_num] call TON_fnc_isnumber)) exitWith { [(localize "STR_MISC_WrongNumFormat")] call ALYSIA_fnc_error; };
_num = parseNumber(_num);
if (_num < 1) exitWith { [(localize "STR_Cop_VaultUnder1")] call ALYSIA_fnc_error; };
if (_ctrl != "goldbar") exitWith { [(localize "STR_Cop_OnlyGold")] call ALYSIA_fnc_error; };
if (_num > life_inv_goldbar) exitWith { [format[localize "STR_Cop_NotEnoughGold", _num]] call ALYSIA_fnc_error; };

if (!([false,_ctrl,_num] call life_fnc_handleInv)) exitWith { [(localize "STR_Cop_CantRemove")] call ALYSIA_fnc_error; };
_safeInfo = life_safeObj getVariable["safe", 0];
life_safeObj setVariable["safe", (_safeInfo + _num), true];
[life_safeObj] call life_fnc_safeInventory;