/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_number_to_check", "_return"];
_number_to_check = [_this, 0, "", [""]] call BIS_fnc_param;

_return = objNull;

{
	if (((_x getVariable ["number", "-1"]) isEqualTo _number_to_check) && ((_x getVariable ["realname", ""]) != "")) exitWith {_return = _x};
} forEach allPlayers;

_return;
