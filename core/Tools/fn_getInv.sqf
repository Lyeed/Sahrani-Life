/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_res"];
_res = [];

{
	_var = missionNamespace getVariable [format["inv_%1", _x], 0];
	if (_var > 0) then
	{
		_res pushBack [_x, _var];
	};
} forEach (missionNamespace getVariable ["g_inv_items", []]);

_res;
