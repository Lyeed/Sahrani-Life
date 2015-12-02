/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_location", "_type"];
_type = [_this, 0, 0, [0]] call BIS_fnc_param;
_location = [_this, 1, "", [""]] call BIS_fnc_param;

switch (_type) do
{
	case 0: {call compile format["gServer_AH_%1_stock_virtual", _location]};
	case 1: {call compile format["gServer_AH_%1_stock_arma", _location]};
	case 2: {call compile format["gServer_AH_%1_stock_vehicles", _location]};
	default {[]};
};
