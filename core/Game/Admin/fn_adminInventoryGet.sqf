/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_ret", "_admin"];
_admin = [_this, 0, ObjNull, [ObjNull]] call BIS_fnc_param;

if (isNull _admin) exitWith {};
_ret = [];

{
	private["_amount"];
	_amount = missionNamespace getVariable[_x, 0];
	if (_amount > 0) then
	{
		_ret pushBack [_x, _amount];
	};
} forEach (life_inv_items);
[[_ret], "ALYSIA_fnc_adminInventoryShow", _admin, false] spawn life_fnc_MP;