/*
	Author: Bryan "Tonic" Boardwine
*/
private["_safe","_tInv","_safeInfo"];
_safe = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _safe) exitWith {closeDialog 0;};
disableSerialization;

_tInv = (findDisplay 3500) displayCtrl 3502;
lbClear _tInv;
_safeInfo = _safe getVariable["safe",-1];
if(_safeInfo < 1) exitWith {
	closeDialog 0; 
	[(localize "STR_Civ_VaultEmpty")] call ALYSIA_fnc_info;
};

_tInv lbAdd format["[%1] - %2", _safeInfo, (["life_inv_goldbar"] call life_fnc_varToStr)];
_tInv lbSetData [(lbSize _tInv) - 1, (["life_inv_goldbar",1] call life_fnc_varHandle)];