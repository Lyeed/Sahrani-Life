/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_value"];
_value = [_this, 0, 0, [0]] call BIS_fnc_param;

switch (call g_donator) do 
{
	case 1: {round(_value * 1.1)};
	case 2: {round(_value * 1.3)};
	default {_value};
};