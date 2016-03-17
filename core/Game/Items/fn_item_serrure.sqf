/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_house", "_owner_uid", "_owner_player"];

if ((vehicle player) != player) exitWith {["Vous devez être à pied."] call AlysiaClient_fnc_info};

_house = (nearestObjects [player, (call g_houses_list), 7]) select 0;
if (isNil "_house") exitWith {
	["Vous n'êtes près d'aucun bâtiment."] call AlysiaClient_fnc_error;
};

if (!(["company_construction"] call AlysiaClient_fnc_hasLicense)) exitWith {
	["Vous ne savez pas utiliser cet objet"] call AlysiaClient_fnc_error;
};

_owner_uid = (_house getVariable "house_owner") select 0;
if (isNil "_owner_uid") exitWith {
	["Ce bâtiment n'appartient à personne."] call AlysiaClient_fnc_error;
};

_owner_player = [_owner_uid] call AlysiaClient_fnc_getPlayerFromUID;
if ((isNull _owner_player) || ((player distance _owner_player) > 10)) exitWith {
	["Le propriétaire a besoin d'être à moins de 10 mètres de son bâtiment pour que vous puissiez changer les serrures."] call AlysiaClient_fnc_error;
};

if (!(["Changement de serrure", 10, objNull, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call AlysiaClient_fnc_showProgress)) exitWith {};

if ([false, "serrure", 1] call AlysiaClient_fnc_handleInv) then {[] call AlysiaClient_fnc_house_menu_action_key_change};
