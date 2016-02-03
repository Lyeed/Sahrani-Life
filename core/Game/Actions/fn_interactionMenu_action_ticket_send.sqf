/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_price", "_desc"];

if (isNull g_interaction_target) exitWith {};

_price = ctrlText 17001;
if (!([_price] call AlysiaClient_fnc_isNumber)) exitWith {
	["La somme à payer doit être un nombre"] call AlysiaClient_fnc_error;
};
_price = parseNumber(_price);
if (_price < 100) exitWith {
	["La somme à payer doit être supérieur ou égale à cent"] call AlysiaClient_fnc_error;
};
if (_price > 999999) exitWith {
	["La somme à payer ne doit pas dépasser <t color='8cff9b'>999 999</t>kn"] call AlysiaClient_fnc_error;
};

_desc = ctrlText 17002;
if (_desc isEqualTo "") then {
	_desc = "Aucune";
};

if (([_desc] call CBA_fnc_strLen) > 70) exitWith {
	["La description ne doit pas dépasser 70 caractères"] call AlysiaClient_fnc_error;
};

closeDialog 0;
["Paiement proposé"] call AlysiaClient_fnc_info;
[_price, _desc, player] remoteExec ["AlysiaClient_fnc_interactionMenu_action_ticket_receive", g_interaction_target];
