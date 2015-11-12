/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_display", "_list_faction", "_list_civ", "_members", "_handle", "_display"];
_members = [_this, 0, [], [[]]] call BIS_fnc_param;

disableSerialization;
_display = uiNamespace getVariable["tablet", displayNull];
if (isNull _display) exitWith {};

_handle = ["FACTION_LEADER_OFFICE"] spawn public_fnc_tabletApp;
waitUntil {scriptDone _handle};

_list_faction = _display displayCtrl 8736;
lbClear _list_faction;
{
	_level = parseNumber(_x select 0);
	_uid = _x select 2;
	_index = _list_faction lbAdd format["[%1] - %2. %3", _level, ([playerSide, _level, true] call public_fnc_rankToStr), (_x select 1)];
	_list_faction lbSetdata [_index, _uid];
	_list_faction lbSetValue [_index, _level];
} forEach (_members);
_list_faction lbSetCurSel -1;

_list_civ = _display displayCtrl 8732;
lbClear _list_civ;
{
	if ((side _x) isEqualTo civilian) then
	{
		_index = _list_civ lbAdd format["%1", (_x getVariable["realname", (name _x)])];
		_list_civ lbSetdata [_index, str(_x)];
	};
} forEach (allPlayers);
if ((lbSize _list_civ) isEqualTo 0) then {
	_list_civ lbAdd "Aucun";
};
_list_civ lbSetCurSel -1;

ctrlEnable[8739, true];
ctrlSetText[8737, 1];