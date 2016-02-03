/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_player", "_sel"];
_sel = lbCurSel 8732;
if (_sel isEqualTo -1) exitWith {
	["Vous n'avez pas sélectionné de civil"] call AlysiaClient_fnc_error;
};

_player = lbData[8732, _sel];
_player = call compile format["%1", _player];

if (isNil "_player") exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

if (isNull _player) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

[player] remoteExec ["AlysiaClient_fnc_APP_faction_leader_office_invitePropose", _player, false];
[format["Vous avez proposé à %1 de rejoindre <t color='#01DF3A'>%2</t>", (_player getVariable "realname"), ([playerSide] call AlysiaClient_fnc_sideToStr)]] call AlysiaClient_fnc_info;