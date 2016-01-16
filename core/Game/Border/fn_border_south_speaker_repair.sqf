/*
		ArmA 3 N'Ziwasogo Life RPG - ALYSIA
	Code written by Lyeed
	@Copyright ALYSIA - N'Ziwasogo (http://alysiarp.fr)
	YOU ARE NOT ALLOWED TO COPY OR DISTRIBUTE THE CONTENT OF THIS FILE WITHOUT AUTHOR AGREEMENT
	More informations : https://www.bistudio.com/community/game-content-usage-rules
*/
private["_object"];
_object = [_this, 0, objNull, [objNull]] call BIS_fnc_param;

if (isNull _object) exitWith {};

closeDialog 0;

if (g_action_inUse) exitWith {
	["Vous êtes déjà en train d'effectuer une action"] call public_fnc_error;
};

if (!(_object getVariable ["destroyed", false])) exitWith {
	["Le haut parleur n'est pas saboté"] call public_fnc_error;
};

if ((["copperp"] call public_fnc_itemCount) < 2) exitWith {
	["Vous avez besoin de 2x <t color='#FF4000'>Lingot de cuivre</t> pour réparer le haut parleur"] call public_fnc_error;
};

if (!(["Réparation d'un haut parleur", 10, _object, "", "AinvPknlMstpsnonWnonDnon_medic_1"] call public_fnc_showProgress)) exitWith {};

if (!(_object getVariable ["destroyed", false])) exitWith {
	["Le haut parleur n'est pas saboté"] call public_fnc_error;
};

if ([false, "copperp", 2] call public_fnc_handleInv) then
{
	_object setVariable ["destroyed", false, true];
	["Vous avez utilisé 2x <t color='#FF4000'>Lingot de cuivre</t> pour réparer le haut parleur"] call public_fnc_info;
};
