/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_action"];
_action = [_this, 0, true, [true]] call BIS_fnc_param;

if (isNull g_dragingBody) exitWith {};

if (_action) then
{
	player playAction "released";
	sleep 2;
};

detach g_dragingBody;
g_dragingBody setVariable ["transporting", false, true];
g_dragingBody = ObjNull;
