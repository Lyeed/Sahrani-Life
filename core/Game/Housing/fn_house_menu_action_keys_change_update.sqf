/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_house";
_house = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _house) exitWith {};

_index = g_houses find _house;
if (_index != -1) then
{
	if (((_house getVariable ['house_owner', ['', '']]) select 0) != (getPlayerUID player)) then {g_houses deleteAt _index};
};
