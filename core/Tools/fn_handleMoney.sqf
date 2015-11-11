/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_operationType", "_accountType", "_value"];
_operationType = [_this, 0, false, [false]] call BIS_fnc_param;
_accountType = [_this, 1, 0, [0]] call BIS_fnc_param;
_value = [_this, 2, 0, [0]] call BIS_fnc_param;

switch (_accountType) do
{
	case 0:
	{
		if (_operationType) then {
			g_cash = g_cash + _value;
		} else {
			g_cash = g_cash - _value;
			if (g_cash < 0) then {
				g_cash = 0;
			};
		};
	};

	case 1:
	{
		if (_operationType) then {
			g_atm = g_atm + _value;
		} else {
			g_atm = g_atm - _value;
			if (g_atm < 0) then {
				g_atm = 0;
			};
		};
	};
};