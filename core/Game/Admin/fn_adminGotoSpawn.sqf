/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/

if (!dialog) exitWith {};
if ((call life_adminlevel) < 1) exitWith { closeDialog 0; };
if (lbCurSel 2902 == -1) exitWith {["Vous n'avez pas sélectionné de joueur"] call ALYSIA_fnc_error;};
private["_player"];

_player = lbData[2902, (lbCurSel 2902)];
_player = (call compile format["%1", _player]);
if (isNil "_player") exitWith { ["Cible invalide"] call ALYSIA_fnc_error; };
if (isNull _player) exitWith { ["Cible invalide"] call ALYSIA_fnc_error; };
if (_player == player) exitWith { ["Vous ne pouvez pas effectuer cette action sur vous même"] call ALYSIA_fnc_error; };
private["_pos"];
closeDialog 0;
_pos = switch (side _player) do
{
	case civilian: {(getMarkerPos "civ_spawn")};
	case east: {(getMarkerPos "east_spawn")};
	case west: {(getMarkerPos "west_spawn")};
};
if (isNil "_pos") exitWith {};

(vehicle _player) setPos _pos;
[format["<t align='center'>Vous avez téléporté<br/>%1<br/>à son spawn</t>", (name _player)]] call ALYSIA_fnc_info;
