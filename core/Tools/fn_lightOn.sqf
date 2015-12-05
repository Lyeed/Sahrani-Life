/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_obj", "_state"];
_obj = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_state = [_this, 1, false, [false]] call BIS_fnc_param;

if (isNull _obj) exitWith {};

if (_state) then 
{
	_obj setHit ["light_1_hitpoint", 0];
	_obj setHit ["light_2_hitpoint", 0];
	_obj setHit ["light_3_hitpoint", 0];
	_obj setHit ["light_4_hitpoint", 0];
} else {
	_obj setHit ["light_1_hitpoint", 0.97];
	_obj setHit ["light_2_hitpoint", 0.97];
	_obj setHit ["light_3_hitpoint", 0.97];
	_obj setHit ["light_4_hitpoint", 0.97];	
};
