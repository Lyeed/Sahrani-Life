/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private "_amount";
_amount = [_this, 0, 0, [0]] call BIS_fnc_param;

switch (true) do
{
	case (_amount > 0 && _amount < 50000): {_amount * 0.5};
	case (_amount >= 50000 && _amount < 200000): {_amount * 0.6};
	case (_amount >= 200000 && _amount < 500000): {_amount * 0.7};
	case (_amount >= 500000 && _amount < 1000000): {_amount * 0.8};
	case (_amount >= 1000000 && _amount < 3000000): {_amount * 0.9};
	case (_amount >= 3000000): {_amount * 0.95};
	default {_amount};
};
