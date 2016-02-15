/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_item"];
_target = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};
if (isNull _target) exitWith {
	["Cible invalide"] call AlysiaClient_fnc_error;
};

_item = getText(missionConfigFile >> "ALYSIA_FACTIONS" >> str(playerSide) >> "identity_item");
if ((_item != "") && !(_item in (magazines player))) exitWith {
	[format[
		"Vous n'avez pas l'objet nécessaire pour prouver votre identité<br/><br/><t align='left'>Requis</t><t align='right'>%1</t>",
		(([_item] call AlysiaClient_fnc_fetchCfgDetails) select 1)
	]] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
waitUntil{animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};

if ((player distance _target) > 3) exitWith
{
	["Vous êtes trop loin"] call AlysiaClient_fnc_error;
	g_action_inUse = false;
};

[player, [g_choice, g_birth, g_nationality, g_sexe]] remoteExecCall ["AlysiaClient_fnc_identityOpen", _target];
g_action_inUse = false;
