/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_veh", "_type", "_unit"];
_veh = [_this, 0, objNull, [objNull]] call BIS_fnc_param;
_type = [_this, 1, "", [""]] call BIS_fnc_param;
_unit = [_this, 2, objNull, [objNull]] call BIS_fnc_param;

if ((isNull _veh) || (isNull _unit) || (_type isEqualTo "")) exitWith {};

if (!(g_curWep_h isEqualTo "")) then
{
	[] call public_fnc_holdsterSwitch;
};

if (g_seatbelt) then
{
	playSound "seatbelt_off";
	g_seatbelt = false;
};
