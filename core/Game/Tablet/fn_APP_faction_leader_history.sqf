/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_list", "_history"];
_history = [_this, 0, [], [[]]] call BIS_fnc_param;

disableSerialization;
_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_handle = ["FACTION_LEADER_HISTORY"] spawn AlysiaClient_fnc_tabletApp;
waitUntil {scriptDone _handle};

_list = _display displayCtrl 8750;
lbClear _list;

{
	_list lbAdd format["[%1] - %2 - %3", (_x select 2), (_x select 0), ([(_x select 1)] call AlysiaClient_fnc_fetchCfgDetails) select 1];
} forEach (_history);
if ((lbSize _list) isEqualTo 0) then {
	_list lbAdd "Vide";
};

ctrlEnable[8755, true];