/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!params [
	["_obj", objNull, [objNull]],
	["_state", false, [false]]
]) exitWith {};

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