/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
if (!params [
		["_inv", [], [[]]],
		["_keys", [], [[]]],
		["_money", 0, [0]]
	]) exitWith {};

g_cash = g_cash + _money;

{
	g_vehicles pushBack _x;
} forEach (_keys);

{
	[true, (_x select 0), (_x select 1)] call public_fnc_handleInv;
} forEach (_inv);

["L'échange a été refusé"] call public_fnc_info;