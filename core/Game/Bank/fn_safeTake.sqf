#define ctrlSelData(ctrl) (lbData[##ctrl,(lbCurSel ##ctrl)])
/*
	Author: Bryan "Tonic" Boardwine
*/
private["_ctrl","_num","_safeInfo"];
disableSerialization;

if ((lbCurSel 3502) == -1) exitWith { [(localize "STR_Civ_SelectItem")] call ALYSIA_fnc_error; };
_ctrl = ctrlSelData(3502);
_num = ctrlText 3505;
_safeInfo = life_safeObj getVariable["safe",0];

if (!([_num] call TON_fnc_isnumber)) exitWith { [(localize "STR_MISC_WrongNumFormat")] call ALYSIA_fnc_error; };
_num = parseNumber(_num);
if (_num < 1) exitWith { [(localize "STR_Cop_VaultUnder1")] call ALYSIA_fnc_error; };
if (_ctrl != "goldbar") exitWith { [(localize "STR_Cop_OnlyGold")] call ALYSIA_fnc_error; };
if (_num > _safeInfo) exitWith { [(format[(localize "STR_Civ_IsntEnoughGold"), _num])] call ALYSIA_fnc_error; };

_num = [_ctrl,_num,life_carryWeight,life_maxWeight] call life_fnc_calWeightDiff;
if (_num == 0) exitWith { [(localize "STR_NOTF_InvFull")] call ALYSIA_fnc_error; };

if (!([true, _ctrl, _num] call life_fnc_handleInv)) exitWith { [("STR_NOTF_CouldntAdd")] call ALYSIA_fnc_error; };
life_safeObj setVariable["safe", (_safeInfo - _num), true];
[life_safeObj] call life_fnc_safeInventory;