/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/		
private["_type", "_ret"];
_type = [_this, 0, "", [""]] call BIS_fnc_param;

if (_type == "") exitWith {0};

_ret = switch (_type) do
{
	case "smelting": {18};
	case "processoil": {22};
	case "salt_process": {2.7};
	case "cooking": {11};
	case "bandage": {6};
	case "repair": {7};
	default {0};
};

_ret;
