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
if ((time - g_action_delay) < 1) exitWith {};

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call AlysiaClient_fnc_error;
};

if ((vehicle player) != player) exitWith {
	["Action impossible en véhicule"] call AlysiaClient_fnc_error;
};

g_action_inUse = true;

if ([false, _item, 1] call AlysiaClient_fnc_handleInv) then
{
	_suit = (nearestObjects [player, ["Land_Suitcase_F"], 3.2]) select 0;
	if (isNil "_suit") then
	{
		_suit = createVehicle ["Land_Suitcase_F", (player modelToWorld [0, 2, 0]), [], 0, "CAN_COLLIDE"];
		_suit setVariable ["items", [[_item, 1]], true];
		["Vous avez crée une <t color='#FF8000'>valise</t>. Vous pouvez accéder à son <t color='#01DF3A'>inventaire</t> avec votre touche WINDOWS. Une valise reste <t color='#DF0101'>30 minutes</t> avant de se faire supprimer par le serveur."] call AlysiaClient_fnc_info;
		g_action_delay = time;
	} else {
		if ((_suit getVariable ["trunk_in_use_ID", ""]) isEqualTo "") then
		{
			if ([true, _suit, "items", _item, 1, true] call AlysiaClient_fnc_handleTrunk) then {
				g_action_delay = time;
			} else {
				["Impossible de stocker cet objet dans la valise la plus proche : il n'y a pas assez de place. Ecartez-vous pour déposer une nouvelle valide ou faites de la place dedans."] call AlysiaClient_fnc_error;
				[true, _item, 1] call AlysiaClient_fnc_handleInv;
			};
		} else {
			["La valise la plus proche est en train d'être fouillée. Ecartez-vous pour déposer une nouvelle valise ou attendez que la fouille soit finie pour la remplir."] call AlysiaClient_fnc_error;
			[true, _item, 1] call AlysiaClient_fnc_handleInv;
		};
	};
};

g_action_inUse = false;
