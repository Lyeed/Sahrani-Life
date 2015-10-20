/*
	File: fn_questionDealer.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_sellers", "_names", "_target"];
_target = _this select 0;
_sellers = _target getVariable["sellers",[]];

if (count _sellers == 0) exitWith { [(localize "STR_Cop_DealerQuestion")] call ALYSIA_fnc_error; };

life_action_inUse = true;
_names = "";
{
	_names = _names + format["%1<br/>",_x];
} forEach (_sellers);

[format[(localize "STR_Cop_DealerMSG")+ "<br/><br/>%1",_names]] call ALYSIA_fnc_info;
_target setVariable["sellers", [], true];
life_action_inUse = false;
