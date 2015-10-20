/*
	File: fn_knockedOut.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_target", "_obj"];
_target = [_this,0,ObjNull,[ObjNull]] call BIS_fnc_param;

if(isNull _target) exitWith {};
if(_target != player) exitWith {};

player setVariable["knockedOut", true, true];
player playMoveNow "Incapacitated";
_obj = "Land_ClutterCutter_small_F" createVehicle (getPosATL player);
_obj setPosATL (getPosATL player);
player attachTo [_obj, [0, 0, 0]];
sleep 15;
player playMoveNow "amovppnemstpsraswrfldnon";
detach player;
deleteVehicle _obj;
player setVariable["knockedOut", false, true];
