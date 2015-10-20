/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_types"];
ALYSIA_hv_list = [_this, 0, [], [[]]] call BIS_fnc_param;
life_action_inUse = false;

if (!createDialog "ALYSIA_HVBuy") exitWith {};
disableSerialization;

_types = (findDisplay 45600) displayCtrl 45601;

_types lbAdd "Véhicules";
_types lbSetValue[(lbSize _types) - 1, 0];

_types lbAdd "Objets ArmA";
_types lbSetValue[(lbSize _types) - 1, 1];

_types lbAdd "Objets Life";
_types lbSetValue[(lbSize _types) - 1, 2];

_types lbSetCurSel 0;