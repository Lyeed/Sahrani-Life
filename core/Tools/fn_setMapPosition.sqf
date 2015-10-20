/*
	File: fn_setMapPosition.sqf
	Author: Bryan "Tonic" Boardwine
*/
private["_control", "_time", "_zoom", "_position"];
_control = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_time = [_this, 1, 1, [0]] call BIS_fnc_param;
_zoom = [_this, 2, 0.1, [0]] call BIS_fnc_param;
_position = [_this, 3, [], [[]]] call BIS_fnc_param;

if ((isNull _control) || (count _position == 0)) exitWith {};
disableSerialization;

_control ctrlMapAnimAdd[_time, _zoom, _position];
ctrlMapAnimCommit _control;