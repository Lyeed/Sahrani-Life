/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_target", "_owner_uid", "_owner_player", "_check"];

if ((vehicle player) != player) exitWith {["Vous devez être à pied."] call AlysiaClient_fnc_info};

_target = cursorObject;
_check = switch (true) do
{
	case (isClass(missionConfigFile >> "ALYSIA_HOUSES" >> typeOf(_target))): {true};
	default {false};
};
if (!_check) exitWith {
	["Vous n'êtes près d'aucun bâtiment."] call AlysiaClient_fnc_error;
};

if ((player distance _target) > 30) exitWith {
	["Vous êtes trop loin du bâtiment."] call AlysiaClient_fnc_error;
};

if (!(["company_construction"] call AlysiaClient_fnc_hasLicense)) exitWith {
	["Vous ne savez pas utiliser cet objet."] call AlysiaClient_fnc_error;
};

_owner_uid = (_target getVariable "house_owner") select 0;
if (isNil "_owner_uid") exitWith {
	["Ce bâtiment n'appartient à personne."] call AlysiaClient_fnc_error;
};

_owner_player = [_owner_uid] call AlysiaClient_fnc_getPlayerFromUID;
if ((isNull _owner_player) || ((player distance _owner_player) > 10)) exitWith {
	["Le propriétaire a besoin d'être à moins de 10 mètres de son bâtiment pour que vous puissiez changer les serrures."] call AlysiaClient_fnc_error;
};

if (_target getVariable ["house_update_lights", false]) exitWith {
	["Ce bâtiment possède déjà une installation électrique."] call AlysiaClient_fnc_error;
};

if (!(["Installation du système électrique", 22, objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if ([false, "electric_system", 1] call AlysiaClient_fnc_handleInv) then
{
	_target setVariable ["house_update_lights", true, true];
	["<t color='#FF8000'>Système électrique</t> installé."] call AlysiaClient_fnc_info;
	[_target] remoteExec ["AlysiaServer_fnc_house_update_lights", 2];
};
