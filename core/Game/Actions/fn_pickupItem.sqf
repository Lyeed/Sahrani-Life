/*
	Author: Bryan "Tonic" Boardwine
	Edit: Lyeed
*/
if ((time - life_action_delay) < 2) exitWith { ["Veuillez ralentir dans vos actions"] call ALYSIA_fnc_error; };

private["_obj", "_itemInfo", "_itemName", "_illegal", "_diff", "_itemCfg", "_itemAmount"];
_obj = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _obj) exitWith {};
if (_obj getVariable["PickedUp", false]) exitWith { deleteVehicle _obj; };
if (player distance _obj > 3) exitWith {};

_itemInfo = _obj getVariable["item", []];
if (count _itemInfo == 0) exitWith {};

_itemCfg = _itemInfo select 0;
if ((playerSide in [west, east]) && (_itemCfg in (call ALYSIA_illegalItems))) exitWith
{
	deleteVehicle _obj;
	life_action_delay = time;
};

_itemAmount = _itemInfo select 1;
_diff = [_itemCfg, _itemAmount, life_carryWeight, life_maxWeight] call life_fnc_calWeightDiff;

if (_diff <= 0) exitWith { [(localize "STR_NOTF_InvFull")] call ALYSIA_fnc_error; };
_obj setVariable["PickedUp", true, true];
_itemName = [([_itemCfg, 0] call life_fnc_varHandle)] call life_fnc_varToStr;
life_action_delay = time;

if (_diff != _itemAmount) then
{
	if ([true, _itemCfg, _diff] call life_fnc_handleInv) then
	{
		player playMove "AinvPknlMstpSlayWrflDnon";
		waitUntil{animationState player != "AinvPknlMstpSlayWrflDnon";};		
		_obj setVariable["item", [_itemCfg, (_itemAmount - _diff)], true];
		_obj setVariable["PickedUp", false, true];
		titleText[format[localize "STR_NOTF_Picked", _diff, _itemName], "PLAIN DOWN"];
	};
}
else
{
	if ([true, _itemCfg, _itemAmount] call life_fnc_handleInv) then
	{
		deleteVehicle _obj;
		player playMove "AinvPknlMstpSlayWrflDnon";
		waitUntil{animationState player != "AinvPknlMstpSlayWrflDnon";};	
		titleText[format[localize "STR_NOTF_Picked", _itemAmount, _itemName],"PLAIN DOWN"];
	};
};
