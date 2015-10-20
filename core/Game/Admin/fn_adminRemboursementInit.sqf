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

life_adminTarget = _player;

closeDialog 0;
if (!(createDialog "life_admin_remboursement")) exitWith {};
disableSerialization;

_display = findDisplay 2950;
_control = _display displayCtrl 2951;
_control ctrlSetStructuredText parseText format["<t align='center'>Remboursement : %1</t>", (life_adminTarget getVariable["realname", (name life_adminTarget)])];