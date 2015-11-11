/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_accountType", "_value"];
_accountType = [_this, 0, 0, [0]] call BIS_fnc_param;
_value = [_this, 1, 0, [0]] call BIS_fnc_param;

switch (_accountType) do
{
	case 0:
	{
		if ((g_cash - _value) >= 0) then {
			true;
		} else {
			false;
		};
	};

	case 1:
	{
		if ((g_atm - _value) >= 0) then {
			true;
		} else {
			false;
		};
	};
};