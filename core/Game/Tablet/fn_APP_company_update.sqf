/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_sel", "_list", "_member"];

disableSerialization;
_list = [_this, 0, controlNull, [controlNull]] call BIS_fnc_param;
_sel = [_this, 1, -1, [-1]] call BIS_fnc_param;

if (_sel isEqualTo -1) exitWith
{
	[9607, false] call AlysiaClient_fnc_tabletShow;
	[9608, false] call AlysiaClient_fnc_tabletShow;
	[9609, false] call AlysiaClient_fnc_tabletShow;
	[9610, false] call AlysiaClient_fnc_tabletShow;
	[9611, false] call AlysiaClient_fnc_tabletShow;
	[9612, false] call AlysiaClient_fnc_tabletShow;
};

_member = _list lbData _sel;
if ((_member isEqualTo "") || ((getPlayerUID player) isEqualTo _member)) then
{
	[9607, false] call AlysiaClient_fnc_tabletShow;
	[9608, false] call AlysiaClient_fnc_tabletShow;
	[9611, false] call AlysiaClient_fnc_tabletShow;
	[9612, false] call AlysiaClient_fnc_tabletShow;
} else {
	[9607, true] call AlysiaClient_fnc_tabletShow;
	[9608, true] call AlysiaClient_fnc_tabletShow;
	[9611, true] call AlysiaClient_fnc_tabletShow;
	[9612, true] call AlysiaClient_fnc_tabletShow;
};
