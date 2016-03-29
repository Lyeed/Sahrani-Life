/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_weight_return";

_weight_return = 0;
{
	_weight_return = _weight_return + (([_x select 0] call AlysiaClient_fnc_itemGetWeight) * (_x select 1));
} forEach ([_this, 0, [], [[]]] call BIS_fnc_param);
_weight_return;
