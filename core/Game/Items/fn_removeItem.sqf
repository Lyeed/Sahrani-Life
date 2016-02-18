/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_item", "_suit"];
_item = [_this, 0, "", [""]] call BIS_fnc_param;

if (_item isEqualTo "") exitWith {false};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};

if ((vehicle player) != player) exitWith {
	["Action impossible en véhicule"] call AlysiaClient_fnc_error;
};

if ((getNumber(missionConfigFile >> "ALYSIA_ITEMS" >> _item >> "removable")) isEqualTo 0) exitWith {
	["Vous ne pouvez pas supprimer cet objet"] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

_suit = (nearestObjects [player, ["Land_Suitcase_F"], 3]) select 0;
if (isNil "_suit") then
{
	_suit = "Land_Suitcase_F" createVehicle (player modelToWorld [0, 2.5, 0]);
	_suit setVariable ["items", [[_item, 1]], true];
} else {
	if ((_suit getVariable ["trunk_in_use_ID"]) isEqualTo "") then {
		if ([true, _suit, "items", _item, 1, true] call AlysiaClient_fnc_handleTrunk) then
		{
			if (!([false, _item, 1] call AlysiaClient_fnc_handleInv)) exitWith
			{
				["Impossible de trouver l'objet à supprimer dans votre inventaire."] call AlysiaClient_fnc_error;
				[false, _suit, "items", _item, 1, true] call AlysiaClient_fnc_handleTrunk;
			};
		} else {
			["Impossible de stocker cet objet dans la valise la plus proche : il n'y a pas assez de place. Ecartez-vous pour déposer une nouvelle valide ou faites de la place dedans."] call AlysiaClient_fnc_error;
		};
	} else {
		["La valise la plus proche est en train d'être fouillée. Ecartez-vous pour déposer une nouvelle valise ou attendez que la fouille soit finie pour la remplir."] call AlysiaClient_fnc_error;
	};
};

g_action_inUse = false;
