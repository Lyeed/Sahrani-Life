/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object", "_item"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {
	["Cible invalide."] call AlysiaClient_fnc_error;
};
if (g_action_inUse) exitWith {
	["Vous êtes déja en train d'effectuer une action."] call AlysiaClient_fnc_info;
};

_item = getText(missionConfigFile >> "ALYSIA_DYN_OBJECTS" >> typeOf(_object) >> "item");
if ([true, _item, 1] call AlysiaClient_fnc_handleInv) then
{
	g_action_inUse = true;
	player playMove "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";
	waitUntil {animationState player != "AinvPercMstpSnonWnonDnon_Putdown_AmovPercMstpSnonWnonDnon";};
	deleteVehicle _object;
	[format["* Vous avez récuperé 1x %1 *", [_item] call AlysiaClient_fnc_itemGetName]] call AlysiaClient_fnc_info;
	g_action_inUse = false;
} else {
	["Vous n'avez pas assez de place."] call AlysiaClient_fnc_error;
};
