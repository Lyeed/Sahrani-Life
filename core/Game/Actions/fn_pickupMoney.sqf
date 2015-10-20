/*
	Author: Bryan "Tonic" Boardwine
	Edit: Lyeed
*/

if ((time - life_action_delay) < 2) exitWith { ["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; };

private["_obj", "_val"];
_obj = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};
if (player distance _obj > 3) exitWith {};
_objInfo = _obj getVariable["item", []];

if (count _objInfo == 0) exitWith {};
_val = _objInfo select 1;

if (_val <= 0) exitWith {};
if (_val > 999999) then { _val = 999999; };

deleteVehicle _obj;
life_action_delay = time;
player playMove "AinvPknlMstpSlayWrflDnon";
waitUntil{animationState player != "AinvPknlMstpSlayWrflDnon";};		

titleText[format[localize "STR_NOTF_PickedMoney", [_val] call life_fnc_numberText], "PLAIN DOWN"];
life_cash = life_cash + _val;
