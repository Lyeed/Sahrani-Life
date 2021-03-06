/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_speed", "_height", "_type", "_vel", "_dir"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, false, [false]] call BIS_fnc_param;
_speed = [_this, 2, 10, [0]] call BIS_fnc_param;
_height = [_this, 3, 0, [0]] call BIS_fnc_param;

_vel = velocity _target;
_dir = direction _target;
if (_type) then
{
	if (local _target) then {
		_target setVelocity [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2) + _height];
	} else {
		[_target, [(_vel select 0) + (sin _dir * _speed), (_vel select 1) + (cos _dir * _speed), (_vel select 2) + _height]] remoteExecCall ["setVelocity", _target];
	};	
} else {
	if (local _target) then {
		_target setVelocity [(_vel select 0) - (sin _dir * _speed), (_vel select 1) - (cos _dir * _speed), (_vel select 2) + _height];
	} else {
		[_target, [(_vel select 0) - (sin _dir * _speed), (_vel select 1) - (cos _dir * _speed), (_vel select 2) + _height]] remoteExecCall ["setVelocity", _target];
	};
};
